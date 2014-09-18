/* String.chpl:23 */
static void chpl__init_String(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_String_p) {
    goto _exit_chpl__init_String;
  }
  modFormatStr = "%*s\n";
  modStr = "String";
  printModuleInit(modFormatStr, modStr, INT64(6), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_String_p = true;
  {
    chpl__init_CString(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_String:;
  return;
}

