export
proc useArbitrary() {
  use arbitraryfile;

  writeln(foo(1, 2));
  // Should be 6
  writeln(bar());
  // Should be 14 14 3 14 14\n14 14 3 14 14\n
  writeln(baz());
  // Should be (num = 4, contents = 3.0)\n(num = 4, contents = 3.0)\n
}