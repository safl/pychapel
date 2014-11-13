module HelloLib {
    export
    proc hello_caller() {
        writeln("Hi Caller, I am Chapel, pleased to meet you.");
    }

    export
    proc add_ints(x: int, y: int) : int {
        return add_everything(x, y);
    }

    export add_floats
    proc add_real32(x: real, y: real) : real {
        return add_everything(x, y);
    }

    export add_doubles
    proc add_real64(x: real, y: real) : real {
        return add_everything(x, y);
    }

    export 
    proc add_short(x: int(16), y: int(16)) : int(16) {
        return add_everything(x, y);
    }

    proc add_everything(x, y) {
        return x + y;
    }
}
