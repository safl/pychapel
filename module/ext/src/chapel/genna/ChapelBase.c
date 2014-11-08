/* ChapelBase.chpl:24 */
static void chpl__init_ChapelBase(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelBase_p) {
    goto _exit_chpl__init_ChapelBase;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelBase";
  printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelBase_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelBase:;
  return;
}

/* ChapelTaskTable.chpl:54 */
static c_string _cast(taskState this8, int64_t _ln, c_string _fn) {
  c_string ret;
  int64_t call_tmp;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  int64_t call_tmp7;
  int64_t call_tmp8;
  chpl_bool call_tmp9;
  call_tmp = ((int64_t)(this8));
  call_tmp2 = ((int64_t)(taskState_pending));
  call_tmp3 = (call_tmp == call_tmp2);
  if (call_tmp3) {
    ret = "pending";
    goto _end__cast;
  }
  call_tmp4 = ((int64_t)(this8));
  call_tmp5 = ((int64_t)(taskState_active));
  call_tmp6 = (call_tmp4 == call_tmp5);
  if (call_tmp6) {
    ret = "active";
    goto _end__cast;
  }
  call_tmp7 = ((int64_t)(this8));
  call_tmp8 = ((int64_t)(taskState_suspended));
  call_tmp9 = (call_tmp7 == call_tmp8);
  if (call_tmp9) {
    ret = "suspended";
    goto _end__cast;
  }
  ret = "";
  _end__cast:;
  return ret;
}

/* ChapelBase.chpl:183 */
static void compilerAssert(void) {
  return;
}

/* ChapelBase.chpl:663 */
static void init_elts(_ddata_locale x, int64_t s, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret;
  int64_t end;
  int64_t ret2;
  locale call_tmp2 = NULL;
  int64_t call_tmp3;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp;
  ret = (&_ic__F0_this)->_low;
  ret2 = (&_ic__F0_this)->_high;
  end = ret2;
  for (i = ret; ((i <= end)); i += INT64(1)) {
    call_tmp2 = ((locale)(nil));
    call_tmp3 = (i - INT64(1));
    *(x + call_tmp3) = call_tmp2;
  }
  return;
}

/* ChapelBase.chpl:663 */
static void init_elts2(_ddata_localesSignal x, int64_t s, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret;
  int64_t end;
  int64_t ret2;
  localesSignal call_tmp2 = NULL;
  int64_t call_tmp3;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp;
  ret = (&_ic__F0_this)->_low;
  ret2 = (&_ic__F0_this)->_high;
  end = ret2;
  for (i = ret; ((i <= end)); i += INT64(1)) {
    call_tmp2 = ((localesSignal)(nil));
    call_tmp3 = (i - INT64(1));
    *(x + call_tmp3) = call_tmp2;
  }
  return;
}

/* ChapelBase.chpl:663 */
static void init_elts3(_ddata_chpl_TableEntry_chpl_taskID_t x, int64_t s, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret;
  int64_t end;
  int64_t ret2;
  chpl_TableEntry_chpl_taskID_t this8;
  chpl__hash_status x2;
  chpl_taskID_t ret3;
  chpl_TableEntry_chpl_taskID_t wrap_call_tmp;
  int64_t call_tmp2;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp;
  ret = (&_ic__F0_this)->_low;
  ret2 = (&_ic__F0_this)->_high;
  end = ret2;
  for (i = ret; ((i <= end)); i += INT64(1)) {
    (&this8)->status = chpl__hash_status_empty;
    (&this8)->idx = chpl_nullTaskID;
    x2 = chpl__hash_status_empty;
    (&this8)->status = x2;
    ret3 = chpl_nullTaskID;
    (&this8)->idx = ret3;
    wrap_call_tmp = _construct_chpl_TableEntry(x2, ret3, &this8, _ln, _fn);
    call_tmp2 = (i - INT64(1));
    *(x + call_tmp2) = wrap_call_tmp;
  }
  return;
}

/* ChapelBase.chpl:663 */
static void init_elts4(_ddata_chpldev_Task x, int64_t s, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret;
  int64_t end;
  int64_t ret2;
  chpldev_Task this8;
  chpldev_Task wrap_call_tmp;
  int64_t call_tmp2;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp;
  ret = (&_ic__F0_this)->_low;
  ret2 = (&_ic__F0_this)->_high;
  end = ret2;
  for (i = ret; ((i <= end)); i += INT64(1)) {
    (&this8)->state = taskState_pending;
    (&this8)->lineno = UINT32(0);
    (&this8)->filename = "";
    (&this8)->tl_info = UINT64(0);
    (&this8)->state = taskState_pending;
    (&this8)->lineno = UINT32(0);
    (&this8)->filename = "";
    (&this8)->tl_info = UINT64(0);
    wrap_call_tmp = _construct_chpldev_Task(taskState_pending, UINT32(0), "", UINT64(0), &this8, _ln, _fn);
    call_tmp2 = (i - INT64(1));
    *(x + call_tmp2) = wrap_call_tmp;
  }
  return;
}

/* ChapelBase.chpl:663 */
static void init_elts5(_ddata__real64 x, int64_t s, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret;
  int64_t end;
  int64_t ret2;
  int64_t call_tmp2;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp;
  ret = (&_ic__F0_this)->_low;
  ret2 = (&_ic__F0_this)->_high;
  end = ret2;
  for (i = ret; ((i <= end)); i += INT64(1)) {
    call_tmp2 = (i - INT64(1));
    *(x + call_tmp2) = 0.0;
  }
  return;
}

/* ChapelBase.chpl:776 */
static chpl___EndCount _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount meme, int64_t _ln, c_string _fn) {
  chpl___EndCount this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->i = *(i);
  (this8)->taskCnt = taskCnt;
  (this8)->taskList = taskList;
  return this8;
}

/* ChapelBase.chpl:776 */
static void chpl__auto_destroy__EndCount(chpl___EndCount this8, int64_t _ln, c_string _fn) {
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _field_destructor_tmp_ = &((this8)->i);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelBase.chpl:803 */
static void _upEndCount(chpl___EndCount e, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_relaxed;
  memory_order local_memory_order_release;
  _ref_atomic_int64 call_tmp = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  locale call_tmp4 = NULL;
  int32_t call_tmp5;
  chpl_localeID_t call_tmp6;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp7;
  locale call_tmp8 = NULL;
  _ref_atomic_int64 call_tmp9 = NULL;
  _ref_atomic_int_least64_t call_tmp10 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  local_memory_order_release = memory_order_release;
  chpl_rmem_consist_fence(local_memory_order_release, _ln, _fn);
  call_tmp = &((e)->i);
  call_tmp2 = &((call_tmp)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
  call_tmp3 = &((e)->taskCnt);
  *(call_tmp3) += INT64(1);
  call_tmp5 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp6;
  chpl_buildLocaleID(chpl_nodeID, call_tmp5, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp7 = chpl__initCopy_chpl_rt_localeID_t(call_tmp6);
  call_tmp8 = chpl_localeID_to_locale(&call_tmp7, _ln, _fn);
  call_tmp4 = call_tmp8;
  call_tmp9 = &((call_tmp4)->runningTaskCounter);
  call_tmp10 = &((call_tmp9)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp10, INT64(1), local_memory_order_relaxed);
  return;
}

/* ChapelBase.chpl:824 */
static void _downEndCount(chpl___EndCount e, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_release;
  _ref_atomic_int64 call_tmp = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  local_memory_order_release = memory_order_release;
  call_tmp = &((e)->i);
  call_tmp2 = &((call_tmp)->_v);
  atomic_fetch_sub_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
  return;
}

/* ChapelBase.chpl:831 */
static void _waitEndCount(chpl___EndCount e, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_acquire;
  memory_order local_memory_order_relaxed;
  chpl_task_list_p ret;
  _ref_atomic_int64 call_tmp = NULL;
  chpl_bool T;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  _ref_atomic_int_least64_t call_tmp5 = NULL;
  int64_t call_tmp6;
  chpl_bool call_tmp7;
  int64_t ret2;
  locale call_tmp8 = NULL;
  int32_t call_tmp9;
  chpl_localeID_t call_tmp10;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp11;
  locale call_tmp12 = NULL;
  _ref_atomic_int64 call_tmp13 = NULL;
  _ref_atomic_int_least64_t call_tmp14 = NULL;
  chpl_task_list_p ret3;
  local_memory_order_acquire = memory_order_acquire;
  local_memory_order_relaxed = memory_order_relaxed;
  ret = (e)->taskList;
  chpl_taskListExecute(ret, _ln, _fn);
  call_tmp = &((e)->i);
  call_tmp2 = &((call_tmp)->_v);
  call_tmp3 = atomic_load_explicit_int_least64_t(call_tmp2, local_memory_order_relaxed);
  call_tmp4 = (call_tmp3 != INT64(0));
  T = call_tmp4;
  while (T) {
    chpl_task_yield();
    call_tmp5 = &((call_tmp)->_v);
    call_tmp6 = atomic_load_explicit_int_least64_t(call_tmp5, local_memory_order_relaxed);
    call_tmp7 = (call_tmp6 != INT64(0));
    T = call_tmp7;
  }
  atomic_thread_fence(local_memory_order_acquire);
  ret2 = (e)->taskCnt;
  call_tmp9 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp10;
  chpl_buildLocaleID(chpl_nodeID, call_tmp9, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp11 = chpl__initCopy_chpl_rt_localeID_t(call_tmp10);
  call_tmp12 = chpl_localeID_to_locale(&call_tmp11, _ln, _fn);
  call_tmp8 = call_tmp12;
  call_tmp13 = &((call_tmp8)->runningTaskCounter);
  call_tmp14 = &((call_tmp13)->_v);
  atomic_fetch_sub_explicit_int_least64_t(call_tmp14, ret2, local_memory_order_relaxed);
  ret3 = (e)->taskList;
  chpl_taskListFree(ret3, _ln, _fn);
  return;
}

/* ChapelBase.chpl:862 */
static void _waitEndCount2(chpl___EndCount _endCount, int64_t _ln, c_string _fn) {
  _waitEndCount(_endCount, _ln, _fn);
  return;
}

/* ChapelBase.chpl:868 */
static int64_t _command_line_cast(c_string x, int64_t _ln, c_string _fn) {
  int64_t call_tmp;
  call_tmp = c_string_to_int64_t(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static chpl_bool _command_line_cast2(c_string x, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static int64_t _command_line_cast3(c_string x, int64_t _ln, c_string _fn) {
  int64_t call_tmp;
  call_tmp = c_string_to_int64_t(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static int64_t _command_line_cast4(c_string x, int64_t _ln, c_string _fn) {
  int64_t call_tmp;
  call_tmp = c_string_to_int64_t(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static chpl_bool _command_line_cast5(c_string x, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static chpl_bool _command_line_cast6(c_string x, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static chpl_bool _command_line_cast7(c_string x, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static chpl_bool _command_line_cast8(c_string x, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static uint64_t _command_line_cast9(c_string x, int64_t _ln, c_string _fn) {
  uint64_t call_tmp;
  call_tmp = c_string_to_uint64_t(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static uint64_t _command_line_cast10(c_string x, int64_t _ln, c_string _fn) {
  uint64_t call_tmp;
  call_tmp = c_string_to_uint64_t(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:868 */
static c_string _command_line_cast11(c_string x, int64_t _ln, c_string _fn) {
  chpl_string call_tmp;
  c_string call_tmp2;
  string_from_c_string(&call_tmp, x, INT64(0), INT64(0), _ln, _fn);
  c_string_from_string(&call_tmp2, &call_tmp, _ln, _fn);
  return call_tmp2;
}

/* ChapelBase.chpl:868 */
static c_string _command_line_cast12(c_string x, int64_t _ln, c_string _fn) {
  chpl_string call_tmp;
  c_string call_tmp2;
  string_from_c_string(&call_tmp, x, INT64(0), INT64(0), _ln, _fn);
  c_string_from_string(&call_tmp2, &call_tmp, _ln, _fn);
  return call_tmp2;
}

/* ChapelBase.chpl:868 */
static chpl_bool _command_line_cast13(c_string x, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  return call_tmp;
}

/* ChapelBase.chpl:1013 */
static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultDist ret = NULL;
  BaseDist coerce_tmp = NULL;
  BaseDist call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseDist)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_distCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1021 */
static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_domCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1021 */
static DefaultAssociativeDom_chpl_taskID_t_F chpl__autoCopy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_domCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1021 */
static DefaultRectangularDom_2_int64_t_F chpl__autoCopy4(DefaultRectangularDom_2_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_domCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1029 */
static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1029 */
static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1029 */
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl__autoCopy7(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1029 */
static DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl__autoCopy8(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1029 */
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl__autoCopy9(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1029 */
static DefaultRectangularArr__real64_2_int64_t_F chpl__autoCopy10(DefaultRectangularArr__real64_2_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularArr__real64_2_int64_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1074 */
static void chpl__autoDestroy(DefaultDist x, int64_t _ln, c_string _fn) {
  chpl___TILDE__distribution(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1079 */
static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__domain(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1079 */
static void chpl__autoDestroy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__domain2(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1079 */
static void chpl__autoDestroy4(DefaultRectangularDom_2_int64_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__domain3(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1084 */
static void chpl__autoDestroy5(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__array(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1084 */
static void chpl__autoDestroy6(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__array2(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1084 */
static void chpl__autoDestroy7(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__array3(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1084 */
static void chpl__autoDestroy8(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__array4(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1084 */
static void chpl__autoDestroy9(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__array5(x, _ln, _fn);
  return;
}

/* ChapelBase.chpl:1084 */
static void chpl__autoDestroy10(DefaultRectangularArr__real64_2_int64_t_F x, int64_t _ln, c_string _fn) {
  chpl___TILDE__array6(x, _ln, _fn);
  return;
}

