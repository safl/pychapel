
extern class PyArrayInfo {
    var two:int(32);
    var nd:int(32);
    var itemsize:int(32);
    var flags:int(32);
    var shape: [0..15] int;
    var strides: [0..15] int;
    //var data-pointer??
}

