module pythonic {

    extern record py_ndarray {
        var two:int(32);
        var nd:int(32);

        var itemsize:int(32);
        var flags:int(32);
    }

    export proc call_this(something: py_ndarray) {
        writeln("two=", something.two);
        writeln("nd=", something.nd);
    }

    proc main() {
        var foo: py_ndarray;
        foo.two = 2;
        foo.nd = 3;
        call_this(foo);
    }

}
