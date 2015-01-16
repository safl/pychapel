module forallLib {
  export
  proc ex_forall(start: int, end: int): real {
    forall i in start..end {
      writeln("This is ", i);
    }
    return 0.0;
  }
}