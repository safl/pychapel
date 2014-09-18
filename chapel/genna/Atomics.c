/* Atomics.chpl:52 */
static void chpl__init_Atomics(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Atomics_p) {
    goto _exit_chpl__init_Atomics;
  }
  modFormatStr = "%*s\n";
  modStr = "Atomics";
  printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Atomics_p = true;
  {
    chpl__init_MemConsistency(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Atomics:;
  return;
}

/* Atomics.chpl:247 */
static void atomic_fence(memory_order order, int64_t _ln, c_string _fn) {
  atomic_thread_fence(order);
  chpl_rmem_consist_fence(order, _ln, _fn);
  return;
}

/* Atomics.chpl:280 */
static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme, int64_t _ln, c_string _fn) {
  atomicflag this8;
  this8 = *(meme);
  (&this8)->_v = _v;
  return this8;
}

/* Atomics.chpl:1066 */
static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme, int64_t _ln, c_string _fn) {
  atomic_int64 this8;
  this8 = *(meme);
  (&this8)->_v = _v;
  return this8;
}

