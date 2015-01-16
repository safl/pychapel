export
proc foo(x: int, y: int): int {
  var res = bar(x, y);
  return res + x;
}

proc bar(x, y) {
  var arr: [0..1] int;
  // This array type, at the time this test was written, was not supported in
  // the type declaration of the function exported to be used with python.
  // However, it appears to be fine when used by Chapel code.
  arr[0] = x;
  arr[1] = y;
  return (arr[0] + arr[1])*(arr[0] - arr[1]);
}
