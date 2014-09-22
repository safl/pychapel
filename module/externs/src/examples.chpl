export hello_world
proc hello_world() : void {
    writeln("Hello Pythonista! This string is brought to you from Chapel!");
}

export add_ints
proc add_ints(x: int, y: int) : int {
    return x+y;
}

export add_floats
proc add_floats(x: real(32), y: real(32)) : real(32) {
    return x+y;
}

export add_doubles
proc add_doubles(x: real(64), y: real(64)) : real(64) {
    return x+y;
}

