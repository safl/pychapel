export
proc useTwoModules(x: int, y: int): int {
  // Note: test_no_depends_fails requires that this file is never
  // properly accessed (i.e., never accessed in a way that links it
  // to M1 and M2)
  use M1;
  var res1 = foo(x, y); // M1 defines foo
  use M2;
  var res2 = bar(res1, x, y); // M2 defines bar
  return res2;
}
