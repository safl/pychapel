/* PrintModuleInitOrder.chpl:30 */
void chpl__init_PrintModuleInitOrder(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool call_tmp4;
  if (chpl__init_PrintModuleInitOrder_p) {
    goto _exit_chpl__init_PrintModuleInitOrder;
  }
  modFormatStr = "%*s\n";
  modStr = "PrintModuleInitOrder";
  printModuleInit(modFormatStr, modStr, INT64(20), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_PrintModuleInitOrder_p = true;
  call_tmp = chpl_config_has_value("printModuleInitOrder", "Built-in");
  call_tmp2 = (! call_tmp);
  if (call_tmp2) {
    const_tmp = false;
  } else {
    call_tmp3 = chpl_config_get_value("printModuleInitOrder", "Built-in");
    const_tmp = _command_line_cast13(call_tmp3, _ln, _fn);
  }
  printModuleInitOrder = const_tmp;
  moduleInitLevel = INT32(2);
  call_tmp4 = printModuleInitOrder;
  if (call_tmp4) {
    initPrint();
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_PrintModuleInitOrder:;
  return;
}

/* PrintModuleInitOrder.chpl:38 */
static void printModuleInit(c_string s1, c_string s2, int64_t len, int64_t _ln, c_string _fn) {
  chpl_bool local_printModuleInitOrder;
  chpl_bool call_tmp;
  int32_t call_tmp2;
  int32_t call_tmp3;
  int32_t call_tmp4;
  local_printModuleInitOrder = printModuleInitOrder;
  call_tmp = local_printModuleInitOrder;
  if (call_tmp) {
    call_tmp2 = ((int32_t)(len));
    call_tmp3 = (moduleInitLevel + call_tmp2);
    call_tmp4 = (call_tmp3 + INT32(2));
    printf(s1, call_tmp4, s2);
  }
  return;
}

/* PrintModuleInitOrder.chpl:44 */
static void initPrint(void) {
  printf("Initializing Modules:\n");
  return;
}

