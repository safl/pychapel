/* Error.chpl:1 */
static void chpl__init_Error(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Error_p) {
    goto _exit_chpl__init_Error;
  }
  modFormatStr = "%*s\n";
  modStr = "Error";
  printModuleInit(modFormatStr, modStr, INT64(5), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Error_p = true;
  {
    chpl__init_SysBasic(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Error:;
  return;
}

/* Error.chpl:25 */
static c_string quote_string(chpl_string s, int64_t len, int64_t _ln, c_string _fn) {
  c_void_ptr local_c_nil;
  c_string ret;
  c_string ret2;
  c_string call_tmp;
  syserr call_tmp2;
  _ref_c_string _ref_tmp_ = NULL;
  int32_t call_tmp3;
  chpl_bool call_tmp4;
  c_string call_tmp5;
  local_c_nil = c_nil;
  ret2 = "";
  c_string_from_string(&call_tmp, &s, _ln, _fn);
  _ref_tmp_ = &ret2;
  call_tmp2 = qio_quote_string(UINT8(34), UINT8(34), QIO_STRING_FORMAT_CHPL, call_tmp, len, _ref_tmp_, local_c_nil);
  call_tmp3 = qio_err_iserr(call_tmp2);
  call_tmp4 = (call_tmp3 != INT32(0));
  if (call_tmp4) {
    call_tmp5 = qio_strdup("<error>");
    ret = call_tmp5;
    goto _end_quote_string;
  }
  ret = ret2;
  _end_quote_string:;
  return ret;
}

/* Error.chpl:55 */
static void ioerror(syserr error, chpl_string msg, chpl_string path, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t strerror_err;
  c_string call_tmp3;
  _ref_int32_t _ref_tmp_ = NULL;
  c_string call_tmp4;
  int64_t call_tmp5;
  c_string call_tmp6;
  c_string call_tmp7;
  c_string call_tmp8;
  c_string call_tmp9;
  c_string call_tmp10;
  c_string call_tmp11;
  call_tmp = qio_err_iserr(error);
  call_tmp2 = (call_tmp != INT32(0));
  if (call_tmp2) {
    strerror_err = INT32(0);
    _ref_tmp_ = &strerror_err;
    call_tmp3 = sys_strerror_syserr_str(error, _ref_tmp_);
    c_string_from_string(&call_tmp4, &path, _ln, _fn);
    call_tmp5 = string_length(call_tmp4);
    call_tmp6 = quote_string(path, call_tmp5, _ln, _fn);
    call_tmp7 = string_concat(call_tmp3, " ", _ln, _fn);
    c_string_from_string(&call_tmp8, &msg, _ln, _fn);
    call_tmp9 = string_concat(call_tmp7, call_tmp8, _ln, _fn);
    call_tmp10 = string_concat(call_tmp9, " with path ", _ln, _fn);
    call_tmp11 = string_concat(call_tmp10, call_tmp6, _ln, _fn);
    chpl_error(call_tmp11, _ln, _fn);
  }
  return;
}

/* Error.chpl:67 */
static void ioerror2(syserr error, chpl_string msg, chpl_string path, int64_t offset, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t strerror_err;
  c_string call_tmp3;
  _ref_int32_t _ref_tmp_ = NULL;
  c_string call_tmp4;
  int64_t call_tmp5;
  c_string call_tmp6;
  c_string call_tmp7;
  c_string call_tmp8;
  c_string call_tmp9;
  c_string call_tmp10;
  c_string call_tmp11;
  c_string call_tmp12;
  c_string call_tmp13;
  c_string call_tmp14;
  call_tmp = qio_err_iserr(error);
  call_tmp2 = (call_tmp != INT32(0));
  if (call_tmp2) {
    strerror_err = INT32(0);
    _ref_tmp_ = &strerror_err;
    call_tmp3 = sys_strerror_syserr_str(error, _ref_tmp_);
    c_string_from_string(&call_tmp4, &path, _ln, _fn);
    call_tmp5 = string_length(call_tmp4);
    call_tmp6 = quote_string(path, call_tmp5, _ln, _fn);
    call_tmp7 = string_concat(call_tmp3, " ", _ln, _fn);
    c_string_from_string(&call_tmp8, &msg, _ln, _fn);
    call_tmp9 = string_concat(call_tmp7, call_tmp8, _ln, _fn);
    call_tmp10 = string_concat(call_tmp9, " with path ", _ln, _fn);
    call_tmp11 = string_concat(call_tmp10, call_tmp6, _ln, _fn);
    call_tmp12 = string_concat(call_tmp11, " offset ", _ln, _fn);
    call_tmp13 = int64_t_to_c_string(offset);
    call_tmp14 = string_concat(call_tmp12, call_tmp13, _ln, _fn);
    chpl_error(call_tmp14, _ln, _fn);
  }
  return;
}

