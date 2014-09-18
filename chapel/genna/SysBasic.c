/* SysBasic.chpl:1 */
static void chpl__init_SysBasic(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_SysBasic_p) {
    goto _exit_chpl__init_SysBasic;
  }
  modFormatStr = "%*s\n";
  modStr = "SysBasic";
  printModuleInit(modFormatStr, modStr, INT64(8), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_SysBasic_p = true;
  {
    chpl__init_SysCTypes(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_SysBasic:;
  return;
}

