export cAdd
proc add(ref res: real, const ref in1: real, const ref in2: real): void {
    res = in1 + in2;
}

export cSubtract
proc subtract(ref res: real, const ref in1: real, const ref in2: real): void {
    res = in1 - in2;
}

export simpleReals
proc simpleReals(x: real(32), y: real(32)) {
    return x + y;
}

export simpleInts
proc simpleInts(x: int, y: int) {
    return x + y;
}

export nicestuff
proc dosomething(w: int, h: int, i: int) {

    var X : [0..w, 0..h] real;
    var Y : [0..h, 0..h] real;
    var R : [0..h, 0..h] real;
    X = 1;
    Y = 2;
    var res: real;
    for i in 1..i {
        forall (x, y, r) in zip(X, Y, R) {
            r = ((y-x)*2)/((y-x)*3);
        }
        res = +reduce(R) / i;
    }
    return res;
}

export somethingelse
proc bahh() {
  coforall 1..4 {
    while true {}
  }
}

export woahhh
proc woahhh(x: int) {
    return x+x;
}

//writeln(dosomething(10, 10, 10));

bahh();

var hello: bool;

