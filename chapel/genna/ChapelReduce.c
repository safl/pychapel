/* ChapelReduce.chpl:23 */
static void chpl__init_ChapelReduce(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelReduce_p) {
    goto _exit_chpl__init_ChapelReduce;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelReduce";
  printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelReduce_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelReduce:;
  return;
}

/* ChapelReduce.chpl:41 */
static void chpl__reduceCombine(SumReduceScanOp__real64 globalOp, SumReduceScanOp__real64 localOp, int64_t _ln, c_string _fn) {
  ReduceScanOp call_tmp = NULL;
  ReduceScanOp call_tmp2 = NULL;
  call_tmp = ((ReduceScanOp)(globalOp));
  lock(call_tmp, _ln, _fn);
  combine(globalOp, localOp, _ln, _fn);
  call_tmp2 = ((ReduceScanOp)(globalOp));
  unlock(call_tmp2, _ln, _fn);
  return;
}

/* ChapelReduce.chpl:54 */
static ReduceScanOp _construct_ReduceScanOp(_syncvar_chpl_bool lock_DOLLAR_, ReduceScanOp meme, int64_t _ln, c_string _fn) {
  ReduceScanOp this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->lock_DOLLAR_ = lock_DOLLAR_;
  return this8;
}

/* ChapelReduce.chpl:54 */
static void chpl__auto_destroy_ReduceScanOp(ReduceScanOp this8, int64_t _ln, c_string _fn) {
  _syncvar_chpl_bool _field_destructor_tmp_ = NULL;
  _field_destructor_tmp_ = (this8)->lock_DOLLAR_;
  chpl___TILDE__syncvar(_field_destructor_tmp_);
  chpl_here_free(((void*)(_field_destructor_tmp_)), _ln, _fn);
  return;
}

/* ChapelReduce.chpl:56 */
static void lock(ReduceScanOp this8, int64_t _ln, c_string _fn) {
  _syncvar_chpl_bool ret = NULL;
  ret = (this8)->lock_DOLLAR_;
  writeEF(ret, true, _ln, _fn);
  return;
}

/* ChapelReduce.chpl:59 */
static void unlock(ReduceScanOp this8, int64_t _ln, c_string _fn) {
  _syncvar_chpl_bool ret = NULL;
  ret = (this8)->lock_DOLLAR_;
  readFE(ret, _ln, _fn);
  return;
}

/* ChapelReduce.chpl:64 */
static SumReduceScanOp__real64 _construct_SumReduceScanOp(_syncvar_chpl_bool lock_DOLLAR_, _real64 value, SumReduceScanOp__real64 meme, int64_t _ln, c_string _fn) {
  SumReduceScanOp__real64 this8 = NULL;
  ReduceScanOp T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_ReduceScanOp(lock_DOLLAR_, T, _ln, _fn);
  (this8)->value = value;
  return this8;
}

/* ChapelReduce.chpl:64 */
static void chpl__auto_destroy_SumReduceScanOp(SumReduceScanOp__real64 this8, int64_t _ln, c_string _fn) {
  ReduceScanOp _parent_destructor_tmp_ = NULL;
  _syncvar_chpl_bool _field_destructor_tmp_ = NULL;
  _parent_destructor_tmp_ = ((ReduceScanOp)(this8));
  _field_destructor_tmp_ = (_parent_destructor_tmp_)->lock_DOLLAR_;
  chpl___TILDE__syncvar(_field_destructor_tmp_);
  chpl_here_free(((void*)(_field_destructor_tmp_)), _ln, _fn);
  return;
}

/* ChapelReduce.chpl:67 */
static void accumulate(SumReduceScanOp__real64 this8, _real64 x, int64_t _ln, c_string _fn) {
  _ref__real64 call_tmp = NULL;
  _real64 ret;
  _real64 call_tmp2;
  call_tmp = &((this8)->value);
  ret = (this8)->value;
  call_tmp2 = (ret + x);
  *(call_tmp) = call_tmp2;
  return;
}

/* ChapelReduce.chpl:70 */
static void combine(SumReduceScanOp__real64 this8, SumReduceScanOp__real64 x, int64_t _ln, c_string _fn) {
  _ref__real64 call_tmp = NULL;
  _real64 ret;
  _real64 ret2;
  _real64 call_tmp2;
  call_tmp = &((this8)->value);
  ret = (this8)->value;
  ret2 = (x)->value;
  call_tmp2 = (ret + ret2);
  *(call_tmp) = call_tmp2;
  return;
}

/* ChapelReduce.chpl:73 */
static _real64 generate(SumReduceScanOp__real64 this8, int64_t _ln, c_string _fn) {
  _real64 ret;
  ret = (this8)->value;
  return ret;
}

