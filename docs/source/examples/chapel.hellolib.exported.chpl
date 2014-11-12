module HelloLib {
    export
    proc hello_caller() {
        writeln("Hi Caller, I am Chapel, pleased to meet you.");
    }

    export
    proc add_ints(x: int, y: int) : int {
        return add_everything(x, y);
    }

    proc add_everything(x, y) {
        return x + y;
    }
}
