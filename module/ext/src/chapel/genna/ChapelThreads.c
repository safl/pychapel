/* ChapelThreads.chpl:30 */
static void chpl__init_ChapelThreads(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t call_tmp;
  int64_t call_tmp2;
  if (chpl__init_ChapelThreads_p) {
    goto _exit_chpl__init_ChapelThreads;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelThreads";
  printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelThreads_p = true;
  call_tmp = chpl_task_getenvNumThreadsPerLocale();
  call_tmp2 = ((int64_t)(call_tmp));
  numThreadsPerLocale = call_tmp2;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelThreads:;
  return;
}

