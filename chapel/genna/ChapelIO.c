/* ChapelIO.chpl:23 */
static void chpl__init_ChapelIO(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelIO_p) {
    goto _exit_chpl__init_ChapelIO;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelIO";
  printModuleInit(modFormatStr, modStr, INT64(8), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelIO_p = true;
  {
    chpl__init_ChapelBase(_ln, _fn);
    chpl__init_SysBasic(_ln, _fn);
    chpl__init_IO(_ln, _fn);
  }
  chpl__testParOn = false;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelIO:;
  return;
}

/* ChapelIO.chpl:34 */
static Writer _construct_Writer(Writer meme, int64_t _ln, c_string _fn) {
  Writer this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  return meme;
}

/* ChapelIO.chpl:34 */
static void chpl__auto_destroy_Writer(Writer this8, int64_t _ln, c_string _fn) {
  return;
}

/* ChapelIO.chpl:44 */
static void writePrimitive(Writer this8, chpl_string x, int64_t _ln, c_string _fn) {
  halt("Generic Writer.writePrimitive called", _ln, _fn);
  return;
}

/* ChapelIO.chpl:44 */
static void writePrimitive2(Writer this8, uint64_t x, int64_t _ln, c_string _fn) {
  halt("Generic Writer.writePrimitive called", _ln, _fn);
  return;
}

/* ChapelIO.chpl:44 */
static void writePrimitive3(Writer this8, int64_t x, int64_t _ln, c_string _fn) {
  halt("Generic Writer.writePrimitive called", _ln, _fn);
  return;
}

/* ChapelIO.chpl:51 */
static void writeIt(Writer this8, chpl_string x, int64_t _ln, c_string _fn) {
  int32_t _virtual_method_tmp_;
  _virtual_method_tmp_ = ((object)(this8))->chpl__cid;
  ((void(*)(Writer, chpl_string, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(this8, x, _ln, _fn);
  return;
}

/* ChapelIO.chpl:51 */
static void writeIt2(Writer this8, chpl_taskID_t x, int64_t _ln, c_string _fn) {
  writeThis(x, this8, _ln, _fn);
  return;
}

/* ChapelIO.chpl:51 */
static void writeIt3(Writer this8, uint64_t x, int64_t _ln, c_string _fn) {
  int32_t _virtual_method_tmp_;
  _virtual_method_tmp_ = ((object)(this8))->chpl__cid;
  ((void(*)(Writer, uint64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(this8, x, _ln, _fn);
  return;
}

/* ChapelIO.chpl:51 */
static void writeIt4(Writer this8, int64_t x, int64_t _ln, c_string _fn) {
  int32_t _virtual_method_tmp_;
  _virtual_method_tmp_ = ((object)(this8))->chpl__cid;
  ((void(*)(Writer, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(3))])(this8, x, _ln, _fn);
  return;
}

/* ChapelIO.chpl:77 */
static void write4(Writer this8, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn) {
  writeIt(this8, _e0_args, _ln, _fn);
  writeIt2(this8, _e1_args, _ln, _fn);
  return;
}

/* ChapelIO.chpl:77 */
static void write5(Writer this8, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
  writeIt(this8, _e0_args, _ln, _fn);
  writeIt4(this8, _e1_args, _ln, _fn);
  return;
}

/* ChapelIO.chpl:77 */
static void write3(Writer this8, uint64_t _e0_args, int64_t _ln, c_string _fn) {
  writeIt3(this8, _e0_args, _ln, _fn);
  return;
}

/* ChapelIO.chpl:77 */
static void write2(Writer this8, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn) {
  writeIt(this8, _e0_args, _ln, _fn);
  writeIt2(this8, _e1_args, _ln, _fn);
  writeIt(this8, _e2_args, _ln, _fn);
  writeIt4(this8, _e3_args, _ln, _fn);
  writeIt(this8, _e4_args, _ln, _fn);
  writeIt4(this8, _e5_args, _ln, _fn);
  writeIt(this8, _e6_args, _ln, _fn);
  return;
}

/* ChapelIO.chpl:484 */
static void assert2(chpl_bool test, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  call_tmp = (! test);
  if (call_tmp) {
    chpl_error("assert failed", _ln, _fn);
  }
  return;
}

/* ChapelIO.chpl:507 */
static void halt(c_string s, int64_t _ln, c_string _fn) {
  c_string call_tmp;
  call_tmp = string_concat("halt reached - ", s, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:511 */
static void halt2(chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn) {
  c_string tmpstring;
  _ref_c_string _ref_tmp_ = NULL;
  c_string call_tmp;
  tmpstring = "";
  _ref_tmp_ = &tmpstring;
  write6(_ref_tmp_, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args, _ln, _fn);
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:511 */
static void halt3(chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn) {
  c_string tmpstring;
  _ref_c_string _ref_tmp_ = NULL;
  c_string call_tmp;
  tmpstring = "";
  _ref_tmp_ = &tmpstring;
  write7(_ref_tmp_, _e0_args, _e1_args, _ln, _fn);
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:511 */
static void halt4(chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
  c_string tmpstring;
  _ref_c_string _ref_tmp_ = NULL;
  c_string call_tmp;
  tmpstring = "";
  _ref_tmp_ = &tmpstring;
  write8(_ref_tmp_, _e0_args, _e1_args, _ln, _fn);
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:537 */
static void writeThis(chpl_taskID_t this8, Writer f, int64_t _ln, c_string _fn) {
  uint64_t call_tmp;
  call_tmp = ((uint64_t)(((intptr_t)(this8))));
  write3(f, call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:547 */
static StringWriter _construct_StringWriter(c_string s, StringWriter meme, int64_t _ln, c_string _fn) {
  StringWriter this8 = NULL;
  Writer T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_Writer(T, _ln, _fn);
  (this8)->s = s;
  return this8;
}

/* ChapelIO.chpl:549 */
static void writePrimitive4(StringWriter this8, chpl_string x, int64_t _ln, c_string _fn) {
  c_string ret;
  _ref_c_string call_tmp = NULL;
  c_string call_tmp2;
  c_string coerce_tmp;
  c_string call_tmp3;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  chpl_bool call_tmp7;
  ret = (this8)->s;
  call_tmp = &((this8)->s);
  c_string_from_string(&call_tmp2, &x, _ln, _fn);
  coerce_tmp = (this8)->s;
  call_tmp3 = string_concat(coerce_tmp, call_tmp2, _ln, _fn);
  *(call_tmp) = call_tmp3;
  call_tmp4 = string_length(ret);
  call_tmp5 = (call_tmp4 != INT64(0));
  if (call_tmp5) {
    call_tmp6 = string_length(ret);
    call_tmp7 = (call_tmp6 > INT64(0));
    if (call_tmp7) {
      chpl_rt_free_c_string(ret, _ln, _fn);
    }
  }
  return;
}

/* ChapelIO.chpl:549 */
static void writePrimitive5(StringWriter this8, uint64_t x, int64_t _ln, c_string _fn) {
  c_string ret;
  _ref_c_string call_tmp = NULL;
  c_string call_tmp2;
  c_string coerce_tmp;
  c_string call_tmp3;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  chpl_bool call_tmp7;
  ret = (this8)->s;
  call_tmp = &((this8)->s);
  call_tmp2 = uint64_t_to_c_string(x);
  coerce_tmp = (this8)->s;
  call_tmp3 = string_concat(coerce_tmp, call_tmp2, _ln, _fn);
  *(call_tmp) = call_tmp3;
  call_tmp4 = string_length(ret);
  call_tmp5 = (call_tmp4 != INT64(0));
  if (call_tmp5) {
    call_tmp6 = string_length(ret);
    call_tmp7 = (call_tmp6 > INT64(0));
    if (call_tmp7) {
      chpl_rt_free_c_string(ret, _ln, _fn);
    }
  }
  return;
}

/* ChapelIO.chpl:549 */
static void writePrimitive6(StringWriter this8, int64_t x, int64_t _ln, c_string _fn) {
  c_string ret;
  _ref_c_string call_tmp = NULL;
  c_string call_tmp2;
  c_string coerce_tmp;
  c_string call_tmp3;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  chpl_bool call_tmp7;
  ret = (this8)->s;
  call_tmp = &((this8)->s);
  call_tmp2 = int64_t_to_c_string(x);
  coerce_tmp = (this8)->s;
  call_tmp3 = string_concat(coerce_tmp, call_tmp2, _ln, _fn);
  *(call_tmp) = call_tmp3;
  call_tmp4 = string_length(ret);
  call_tmp5 = (call_tmp4 != INT64(0));
  if (call_tmp5) {
    call_tmp6 = string_length(ret);
    call_tmp7 = (call_tmp6 > INT64(0));
    if (call_tmp7) {
      chpl_rt_free_c_string(ret, _ln, _fn);
    }
  }
  return;
}

/* ChapelIO.chpl:554 */
static void chpl___TILDE_StringWriter(StringWriter this8, int64_t _ln, c_string _fn) {
  c_string ret;
  int64_t call_tmp;
  chpl_bool call_tmp2;
  c_string ret2;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  ret = (this8)->s;
  call_tmp = string_length(ret);
  call_tmp2 = (call_tmp != INT64(0));
  if (call_tmp2) {
    ret2 = (this8)->s;
    call_tmp3 = string_length(ret2);
    call_tmp4 = (call_tmp3 > INT64(0));
    if (call_tmp4) {
      chpl_rt_free_c_string(ret2, _ln, _fn);
    }
  }
  return;
}

/* ChapelIO.chpl:574 */
static void write7(_ref_c_string this8, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn) {
  StringWriter sc = NULL;
  c_string coerce_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  StringWriter wrap_call_tmp = NULL;
  Writer call_tmp2 = NULL;
  _ref_c_string call_tmp3 = NULL;
  c_string T;
  c_string ret;
  c_string call_tmp4;
  StringWriter delete_tmp = NULL;
  chpl_opaque call_tmp5;
  coerce_tmp = *(this8);
  call_tmp = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(38), _ln, _fn);
  this9 = ((StringWriter)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  (this9)->s = "";
  (this9)->s = coerce_tmp;
  wrap_call_tmp = _construct_StringWriter(coerce_tmp, this9, _ln, _fn);
  sc = wrap_call_tmp;
  call_tmp2 = ((Writer)(wrap_call_tmp));
  write4(call_tmp2, _e0_args, _e1_args, _ln, _fn);
  ret = (sc)->s;
  T = ret;
  call_tmp3 = &T;
  call_tmp4 = string_copy(*(call_tmp3), _ln, _fn);
  *(this8) = call_tmp4;
  delete_tmp = wrap_call_tmp;
  chpl___TILDE_StringWriter(wrap_call_tmp, _ln, _fn);
  call_tmp5 = ((void*)(delete_tmp));
  chpl_here_free(call_tmp5, _ln, _fn);
  return;
}

/* ChapelIO.chpl:574 */
static void write8(_ref_c_string this8, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
  StringWriter sc = NULL;
  c_string coerce_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  StringWriter wrap_call_tmp = NULL;
  Writer call_tmp2 = NULL;
  _ref_c_string call_tmp3 = NULL;
  c_string T;
  c_string ret;
  c_string call_tmp4;
  StringWriter delete_tmp = NULL;
  chpl_opaque call_tmp5;
  coerce_tmp = *(this8);
  call_tmp = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(38), _ln, _fn);
  this9 = ((StringWriter)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  (this9)->s = "";
  (this9)->s = coerce_tmp;
  wrap_call_tmp = _construct_StringWriter(coerce_tmp, this9, _ln, _fn);
  sc = wrap_call_tmp;
  call_tmp2 = ((Writer)(wrap_call_tmp));
  write5(call_tmp2, _e0_args, _e1_args, _ln, _fn);
  ret = (sc)->s;
  T = ret;
  call_tmp3 = &T;
  call_tmp4 = string_copy(*(call_tmp3), _ln, _fn);
  *(this8) = call_tmp4;
  delete_tmp = wrap_call_tmp;
  chpl___TILDE_StringWriter(wrap_call_tmp, _ln, _fn);
  call_tmp5 = ((void*)(delete_tmp));
  chpl_here_free(call_tmp5, _ln, _fn);
  return;
}

/* ChapelIO.chpl:574 */
static void write6(_ref_c_string this8, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn) {
  StringWriter sc = NULL;
  c_string coerce_tmp;
  StringWriter this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  StringWriter wrap_call_tmp = NULL;
  Writer call_tmp2 = NULL;
  _ref_c_string call_tmp3 = NULL;
  c_string T;
  c_string ret;
  c_string call_tmp4;
  StringWriter delete_tmp = NULL;
  chpl_opaque call_tmp5;
  coerce_tmp = *(this8);
  call_tmp = sizeof(chpl_StringWriter_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(38), _ln, _fn);
  this9 = ((StringWriter)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_StringWriter;
  (this9)->s = "";
  (this9)->s = coerce_tmp;
  wrap_call_tmp = _construct_StringWriter(coerce_tmp, this9, _ln, _fn);
  sc = wrap_call_tmp;
  call_tmp2 = ((Writer)(wrap_call_tmp));
  write2(call_tmp2, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args, _ln, _fn);
  ret = (sc)->s;
  T = ret;
  call_tmp3 = &T;
  call_tmp4 = string_copy(*(call_tmp3), _ln, _fn);
  *(this8) = call_tmp4;
  delete_tmp = wrap_call_tmp;
  chpl___TILDE_StringWriter(wrap_call_tmp, _ln, _fn);
  call_tmp5 = ((void*)(delete_tmp));
  chpl_here_free(call_tmp5, _ln, _fn);
  return;
}

