/* ChapelNumLocales.chpl:23 */
static void chpl__init_ChapelNumLocales(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int64_t const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  int64_t call_tmp3;
  c_string call_tmp4;
  if (chpl__init_ChapelNumLocales_p) {
    goto _exit_chpl__init_ChapelNumLocales;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelNumLocales";
  printModuleInit(modFormatStr, modStr, INT64(16), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelNumLocales_p = true;
  call_tmp = chpl_config_has_value("numLocales", "Built-in");
  call_tmp2 = (! call_tmp);
  if (call_tmp2) {
    call_tmp3 = chpl_comm_default_num_locales();
    const_tmp = call_tmp3;
  } else {
    call_tmp4 = chpl_config_get_value("numLocales", "Built-in");
    const_tmp = _command_line_cast4(call_tmp4, _ln, _fn);
  }
  numLocales = const_tmp;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelNumLocales:;
  return;
}

