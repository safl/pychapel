//var shape = (2,3,4,5);

proc head(elem) {
    return elem(1);
}

proc tail(first, remainder...) {
    return remainder;
}

/*
iter take(n:int, elements) {
    for (i, e) in zip(0..elements.size, elements) {
        if (i>=n) {
            break;
        }
        yield e;
    }
}*/

proc take(param n, elements) {
    if (n<=0) {
        return 1;
    } else {
        return 1+take(n-1, elements);
    }
}

proc rangify(shape) where isTuple(shape) {
    if (shape.size == 1) {
        return (0..shape(1),);
    } else {
        return ((0..shape(1)), (...rangify(tail((...shape)))));
    }
}
/*
var hmm = 0;
for i in take(2, (1,2,3,4,5,6)) {
    writeln(i);
}*/

var foo =(1,2,3,4);
writeln({(...rangify(foo))});
//writeln({(...rangify(take(2, (1,2,3,4))))});
//writeln(hmm(rangify((3,3))));

//writeln(take(2, (1,2,3,4,5)));
