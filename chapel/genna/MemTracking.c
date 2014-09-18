/* MemTracking.chpl:23 */
static void chpl__init_MemTracking(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool const_tmp2;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  c_string call_tmp6;
  chpl_bool const_tmp3;
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  c_string call_tmp9;
  chpl_bool const_tmp4;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  c_string call_tmp12;
  uint64_t const_tmp5;
  chpl_bool call_tmp13;
  chpl_bool call_tmp14;
  uint64_t call_tmp15;
  c_string call_tmp16;
  uint64_t const_tmp6;
  chpl_bool call_tmp17;
  chpl_bool call_tmp18;
  uint64_t call_tmp19;
  c_string call_tmp20;
  c_string const_tmp7;
  chpl_bool call_tmp21;
  chpl_bool call_tmp22;
  c_string call_tmp23;
  chpl_string call_tmp24;
  c_string const_tmp8;
  chpl_bool call_tmp25;
  chpl_bool call_tmp26;
  c_string call_tmp27;
  chpl_string call_tmp28;
  if (chpl__init_MemTracking_p) {
    goto _exit_chpl__init_MemTracking;
  }
  modFormatStr = "%*s\n";
  modStr = "MemTracking";
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_MemTracking_p = true;
  call_tmp = chpl_config_has_value("memTrack", "Built-in");
  call_tmp2 = (! call_tmp);
  if (call_tmp2) {
    const_tmp = false;
  } else {
    call_tmp3 = chpl_config_get_value("memTrack", "Built-in");
    const_tmp = _command_line_cast5(call_tmp3, _ln, _fn);
  }
  memTrack = const_tmp;
  call_tmp4 = chpl_config_has_value("memStats", "Built-in");
  call_tmp5 = (! call_tmp4);
  if (call_tmp5) {
    const_tmp2 = false;
  } else {
    call_tmp6 = chpl_config_get_value("memStats", "Built-in");
    const_tmp2 = _command_line_cast6(call_tmp6, _ln, _fn);
  }
  memStats = const_tmp2;
  call_tmp7 = chpl_config_has_value("memLeaks", "Built-in");
  call_tmp8 = (! call_tmp7);
  if (call_tmp8) {
    const_tmp3 = false;
  } else {
    call_tmp9 = chpl_config_get_value("memLeaks", "Built-in");
    const_tmp3 = _command_line_cast7(call_tmp9, _ln, _fn);
  }
  memLeaks = const_tmp3;
  call_tmp10 = chpl_config_has_value("memLeaksTable", "Built-in");
  call_tmp11 = (! call_tmp10);
  if (call_tmp11) {
    const_tmp4 = false;
  } else {
    call_tmp12 = chpl_config_get_value("memLeaksTable", "Built-in");
    const_tmp4 = _command_line_cast8(call_tmp12, _ln, _fn);
  }
  memLeaksTable = const_tmp4;
  call_tmp13 = chpl_config_has_value("memMax", "Built-in");
  call_tmp14 = (! call_tmp13);
  if (call_tmp14) {
    call_tmp15 = ((uint64_t)(INT64(0)));
    const_tmp5 = call_tmp15;
  } else {
    call_tmp16 = chpl_config_get_value("memMax", "Built-in");
    const_tmp5 = _command_line_cast9(call_tmp16, _ln, _fn);
  }
  memMax = const_tmp5;
  call_tmp17 = chpl_config_has_value("memThreshold", "Built-in");
  call_tmp18 = (! call_tmp17);
  if (call_tmp18) {
    call_tmp19 = ((uint64_t)(INT64(0)));
    const_tmp6 = call_tmp19;
  } else {
    call_tmp20 = chpl_config_get_value("memThreshold", "Built-in");
    const_tmp6 = _command_line_cast10(call_tmp20, _ln, _fn);
  }
  memThreshold = const_tmp6;
  call_tmp21 = chpl_config_has_value("memLog", "Built-in");
  call_tmp22 = (! call_tmp21);
  if (call_tmp22) {
    const_tmp7 = "";
  } else {
    call_tmp23 = chpl_config_get_value("memLog", "Built-in");
    const_tmp7 = _command_line_cast11(call_tmp23);
  }
  memLog = const_tmp7;
  string_from_c_string(&call_tmp24, memLog, INT64(0), INT64(0), _ln, _fn);
  s_memLog = call_tmp24;
  call_tmp25 = chpl_config_has_value("memLeaksLog", "Built-in");
  call_tmp26 = (! call_tmp25);
  if (call_tmp26) {
    const_tmp8 = "";
  } else {
    call_tmp27 = chpl_config_get_value("memLeaksLog", "Built-in");
    const_tmp8 = _command_line_cast12(call_tmp27);
  }
  memLeaksLog = const_tmp8;
  string_from_c_string(&call_tmp28, memLeaksLog, INT64(0), INT64(0), _ln, _fn);
  s_memLeaksLog = call_tmp28;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_MemTracking:;
  return;
}

/* MemTracking.chpl:46 */
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaks, _ref_chpl_bool ret_memLeaksTable, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog, int64_t _ln, c_string _fn) {
  c_string local_memLeaksLog;
  chpl_string local_s_memLeaksLog;
  c_string local_memLog;
  chpl_string local_s_memLog;
  uint64_t local_memThreshold;
  uint64_t local_memMax;
  chpl_bool local_memLeaksTable;
  chpl_bool local_memLeaks;
  chpl_bool local_memStats;
  chpl_bool local_memTrack;
  int32_t call_tmp;
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  chpl_string ret;
  c_string call_tmp4;
  int32_t call_tmp5;
  int32_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_string ret2;
  c_string call_tmp8;
  local_memLeaksLog = memLeaksLog;
  local_s_memLeaksLog = s_memLeaksLog;
  local_memLog = memLog;
  local_s_memLog = s_memLog;
  local_memThreshold = memThreshold;
  local_memMax = memMax;
  local_memLeaksTable = memLeaksTable;
  local_memLeaks = memLeaks;
  local_memStats = memStats;
  local_memTrack = memTrack;
  *(ret_memTrack) = local_memTrack;
  *(ret_memStats) = local_memStats;
  *(ret_memLeaks) = local_memLeaks;
  *(ret_memLeaksTable) = local_memLeaksTable;
  *(ret_memMax) = local_memMax;
  *(ret_memThreshold) = local_memThreshold;
  call_tmp = chpl_nodeID;
  call_tmp2 = ((int32_t)(INT64(0)));
  call_tmp3 = (call_tmp != call_tmp2);
  if (call_tmp3) {
    ret = local_s_memLog;
    c_string_from_string(&call_tmp4, &ret, _ln, _fn);
    *(ret_memLog) = call_tmp4;
  } else {
    *(ret_memLog) = local_memLog;
  }
  call_tmp5 = chpl_nodeID;
  call_tmp6 = ((int32_t)(INT64(0)));
  call_tmp7 = (call_tmp5 != call_tmp6);
  if (call_tmp7) {
    ret2 = local_s_memLeaksLog;
    c_string_from_string(&call_tmp8, &ret2, _ln, _fn);
    *(ret_memLeaksLog) = call_tmp8;
  } else {
    *(ret_memLeaksLog) = local_memLeaksLog;
  }
  return;
}

