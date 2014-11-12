module HelloLib {
    proc hello_caller() {
        writeln("Hi Caller, I am Chapel, pleased to meet you.");
    }

    proc add_everything(x, y) {
        return x + y;
    }

    proc main() {
        hello_caller();
        writeln(add_everything(2, 3));
    }
}
