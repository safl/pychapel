/* ChapelDynDispHack.chpl:21 */
static void chpl__init_ChapelDynDispHack(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t call_tmp;
  chpl_localeID_t call_tmp2;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp3;
  locale call_tmp4 = NULL;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  if (chpl__init_ChapelDynDispHack_p) {
    goto _exit_chpl__init_ChapelDynDispHack;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelDynDispHack";
  printModuleInit(modFormatStr, modStr, INT64(17), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDynDispHack_p = true;
  call_tmp = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  call_tmp5 = id(call_tmp4, _ln, _fn);
  call_tmp6 = (call_tmp5 >= INT64(0));
  assert2(call_tmp6, _ln, _fn);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDynDispHack:;
  return;
}

