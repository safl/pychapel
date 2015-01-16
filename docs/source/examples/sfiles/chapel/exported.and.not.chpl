export
proc foo(x: int, y: int): int {
  var res = bar(x, y);
  return res + x;
}

proc bar(x, y) {
  return (x + y)*(x - y);
}
