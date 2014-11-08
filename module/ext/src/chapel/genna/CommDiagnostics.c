/* CommDiagnostics.chpl:23 */
static void chpl__init_CommDiagnostics(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_CommDiagnostics_p) {
    goto _exit_chpl__init_CommDiagnostics;
  }
  modFormatStr = "%*s\n";
  modStr = "CommDiagnostics";
  printModuleInit(modFormatStr, modStr, INT64(15), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_CommDiagnostics_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_CommDiagnostics:;
  return;
}

