/* Regexp.chpl:1 */
static void chpl__init_Regexp(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Regexp_p) {
    goto _exit_chpl__init_Regexp;
  }
  modFormatStr = "%*s\n";
  modStr = "Regexp";
  printModuleInit(modFormatStr, modStr, INT64(6), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Regexp_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Regexp:;
  return;
}

