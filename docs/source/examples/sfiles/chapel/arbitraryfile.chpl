proc foo(x, y) {
  return (x + y)* y;
}

proc bar() {
  var res: [1..5] int = 14;
  res[3] = 3;
  writeln(res);
  return res;
}

record whatev {
  param num = 4;
  type t = real(32);
  var contents: t;
}

proc baz() {
  var rec: whatev;
  rec.contents = 3.0: real(32);
  writeln(rec);
  return rec;
}
