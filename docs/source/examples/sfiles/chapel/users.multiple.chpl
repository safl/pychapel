export
proc useMultiModules(x: int, y: int): int {
  use M1;
  var res1 = foo(x, y); // M1 defines foo
  use M2;
  var res2 = bar(res1, x, y); // M2 defines bar
  return res2;
}
