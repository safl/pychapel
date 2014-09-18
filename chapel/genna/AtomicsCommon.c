/* AtomicsCommon.chpl:21 */
static void chpl__init_AtomicsCommon(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_AtomicsCommon_p) {
    goto _exit_chpl__init_AtomicsCommon;
  }
  modFormatStr = "%*s\n";
  modStr = "AtomicsCommon";
  printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_AtomicsCommon_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_AtomicsCommon:;
  return;
}

/* AtomicsCommon.chpl:22 */
static atomic_refcnt _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, int64_t _ln, c_string _fn) {
  atomic_refcnt this8;
  this8 = *(meme);
  (&this8)->_cnt = *(_cnt);
  return this8;
}

