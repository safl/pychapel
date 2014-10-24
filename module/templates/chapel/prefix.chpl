// Wrapper around the pych_array c-struct
// to access NumPy arrays provided by the PyChapel
// Python module
param PYCH_MAXDIM: int(32)= 16;

extern record pych_array {
    var two:int(32);
    var nd:int(32);
    var typekind:int(8);
    var itemsize:int(32);
    var flags:int(32);
    var shape:PYCH_MAXDIM*int(32);
    var strides:PYCH_MAXDIM*int(32);
    var ptr_d:_ddata(real);
}

proc pprint_pych_array(arr: pych_array) {
    writeln("[");
    writeln("  two=", arr.two, ",");
    writeln("  nd=", arr.nd, ",");
    writeln("  typekind=", arr.typekind, ",");
    writeln("  itemsize=", arr.itemsize, ",");

    write("  shape=");
    for idx in 1..PYCH_MAXDIM {
        write(arr.shape(idx));
        if (PYCH_MAXDIM != idx) {
            write(",");
        }
    }
    writeln("");
    write("  stride=");
    for idx in 1..PYCH_MAXDIM {
        write(arr.strides(idx));
        if (PYCH_MAXDIM != idx) {
            write(",");
        }
    }
    writeln("");
    writeln("  ptr_d=", arr.ptr_d);
    writeln("]");
}

proc pych_to_chpl(arr: pych_array) {

    var dom = {0..2, 0..2};
    var stride = (1, 1);
    var block = (3, 1);

    var ret = new DefaultRectangularArr(
        eltType = real,                 // Element type
        rank = dom.rank,                // Rank
        idxType = dom.idxType,          // Index type of domain
        stridable = dom.stridable,      // Boolean, can we stride?
        dom = dom._value,               // The underlying class implementation
        noinit_data = true              // Prevent overwriting your data
    );     

    // rank*int tuples

    // stride for each dimension
    // you might be able to get this out of the domain instead.
    ret.str = stride;

    // I'm not totally sure what this one is. I think it's the size of a row of data.
    // You can test this by writing code like:
    var x = [1..10, 10..20]: int;
    writeln("What is this?");

    ret.blk = block;

    // get offsets from domain
    for param i in 1..dom.rank {
        ret.off(i) = dom._value.dsiDim(i).low;
    }

    ret.data = arr.ptr_d;
    ret.origin = 0; // I believe 'origin' is the c ptr offset
    ret.computeFactoredOffs();

    // if you're having segfaults, look into this method. You can also try
    // compiling with '-searlyShiftData=false' to disable this method.
    ret.initShiftedData();

    // only returns the underlying class, still need to turn it into a 
    // first-class chapel array. I'm not sure why exactly, but something
    // about the way we return arrays here performs a copy and changes
    // made to the array aren't reflected in the c pointer.
    return ret;
}

