/* Types.chpl:1 */
static void chpl__init_Types(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Types_p) {
    goto _exit_chpl__init_Types;
  }
  modFormatStr = "%*s\n";
  modStr = "Types";
  printModuleInit(modFormatStr, modStr, INT64(5), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Types_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Types:;
  return;
}

/* Types.chpl:387 */
static int64_t min2(int64_t _ln, c_string _fn) {
  int64_t _formal_type_tmp_;
  int64_t call_tmp;
  call_tmp = MIN_INT64;
  return call_tmp;
}

/* Types.chpl:387 */
static uint64_t min3(int64_t _ln, c_string _fn) {
  uint64_t _formal_type_tmp_;
  uint64_t call_tmp;
  call_tmp = MIN_UINT64;
  return call_tmp;
}

/* Types.chpl:404 */
static int64_t max2(int64_t _ln, c_string _fn) {
  int64_t _formal_type_tmp_;
  int64_t call_tmp;
  call_tmp = MAX_INT64;
  return call_tmp;
}

