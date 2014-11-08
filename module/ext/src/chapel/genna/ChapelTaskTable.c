/* ChapelTaskTable.chpl:23 */
static void chpl__init_ChapelTaskTable(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpldev_taskTable_t call_tmp = NULL;
  chpl_bool call_tmp2;
  if (chpl__init_ChapelTaskTable_p) {
    goto _exit_chpl__init_ChapelTaskTable;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelTaskTable";
  printModuleInit(modFormatStr, modStr, INT64(15), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelTaskTable_p = true;
  {
    chpl__init_ChapelBase(_ln, _fn);
    chpl__init_ChapelIO(_ln, _fn);
    chpl__init_ChapelArray(_ln, _fn);
    chpl__init_DefaultRectangular(_ln, _fn);
    chpl__init_DefaultAssociative(_ln, _fn);
  }
  call_tmp = ((chpldev_taskTable_t)(nil));
  chpldev_taskTable = call_tmp;
  call_tmp2 = (taskreport != INT32(0));
  if (call_tmp2) {
    chpldev_taskTable_init(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelTaskTable:;
  return;
}

/* ChapelTaskTable.chpl:65 */
static chpldev_Task _construct_chpldev_Task(taskState state, uint32_t lineno, c_string filename, uint64_t tl_info, chpldev_Task* const meme, int64_t _ln, c_string _fn) {
  chpldev_Task this8;
  this8 = *(meme);
  (&this8)->state = state;
  (&this8)->lineno = lineno;
  (&this8)->filename = filename;
  (&this8)->tl_info = tl_info;
  return this8;
}

/* ChapelTaskTable.chpl:65 */
static void chpl___ASSIGN_4(_ref_chpldev_Task _arg1, chpldev_Task* const _arg2, int64_t _ln, c_string _fn) {
  _ref_taskState call_tmp = NULL;
  taskState ret;
  _ref_uint32_t call_tmp2 = NULL;
  uint32_t ret2;
  _ref_c_string call_tmp3 = NULL;
  c_string ret3;
  _ref_uint64_t call_tmp4 = NULL;
  uint64_t ret4;
  call_tmp = &((_arg1)->state);
  ret = (_arg2)->state;
  *(call_tmp) = ret;
  call_tmp2 = &((_arg1)->lineno);
  ret2 = (_arg2)->lineno;
  *(call_tmp2) = ret2;
  call_tmp3 = &((_arg1)->filename);
  ret3 = (_arg2)->filename;
  *(call_tmp3) = ret3;
  call_tmp4 = &((_arg1)->tl_info);
  ret4 = (_arg2)->tl_info;
  *(call_tmp4) = ret4;
  return;
}

/* ChapelTaskTable.chpl:65 */
static chpldev_Task chpl__initCopy3(chpldev_Task* const x, int64_t _ln, c_string _fn) {
  taskState ret;
  uint32_t ret2;
  c_string ret3;
  uint64_t ret4;
  chpldev_Task this8;
  chpldev_Task wrap_call_tmp;
  ret = (x)->state;
  ret2 = (x)->lineno;
  ret3 = (x)->filename;
  ret4 = (x)->tl_info;
  (&this8)->state = taskState_pending;
  (&this8)->lineno = UINT32(0);
  (&this8)->filename = "";
  (&this8)->tl_info = UINT64(0);
  (&this8)->state = ret;
  (&this8)->lineno = ret2;
  (&this8)->filename = ret3;
  (&this8)->tl_info = ret4;
  wrap_call_tmp = _construct_chpldev_Task(ret, ret2, ret3, ret4, &this8, _ln, _fn);
  return wrap_call_tmp;
}

/* ChapelTaskTable.chpl:72 */
static chpldev_taskTable_t _construct_chpldev_taskTable_t(DefaultAssociativeDom_chpl_taskID_t_F dom, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F map, chpldev_taskTable_t meme, int64_t _ln, c_string _fn) {
  chpldev_taskTable_t this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->dom = dom;
  (this8)->map = map;
  return this8;
}

/* ChapelTaskTable.chpl:72 */
static void chpl__auto_destroy_chpldev_taskTable_t(chpldev_taskTable_t this8, int64_t _ln, c_string _fn) {
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _field_destructor_tmp_ = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F _field_destructor_tmp_2 = NULL;
  _field_destructor_tmp_ = (this8)->map;
  chpl__autoDestroy9(_field_destructor_tmp_, _ln, _fn);
  _field_destructor_tmp_2 = (this8)->dom;
  chpl__autoDestroy3(_field_destructor_tmp_2, _ln, _fn);
  return;
}

/* ChapelTaskTable.chpl:83 */
static void chpldev_taskTable_init(int64_t _ln, c_string _fn) {
  chpl___EndCount _coforallCount = NULL;
  chpl___EndCount this8 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this9;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  chpl_task_list_p ret2;
  chpl___EndCount wrap_call_tmp2 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret3 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F _ic__F0_this = NULL;
  int64_t i;
  DefaultRectangularArr_locale_1_int64_t_F this10 = NULL;
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  int64_t call_tmp2;
  DefaultRectangularArr_locale_1_int64_t_F this11 = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t call_tmp3;
  DefaultRectangularArr_locale_1_int64_t_F this12 = NULL;
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  DefaultRectangularArr_locale_1_int64_t_F this13 = NULL;
  int64_t sum2;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp6;
  int64_t step;
  int64_t call_tmp7;
  int64_t last;
  DefaultRectangularArr_locale_1_int64_t_F this14 = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  int64_t call_tmp8;
  int64_t call_tmp9;
  int64_t call_tmp10;
  int64_t call_tmp11;
  DefaultRectangularArr_locale_1_int64_t_F this15 = NULL;
  _ddata_locale ret7 = NULL;
  _ddata_locale coerce_tmp = NULL;
  _ref_locale call_tmp12 = NULL;
  chpl___EndCount rvfDerefTmp = NULL;
  _class_localscoforall_fn4 _args_forcoforall_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl___EndCount delete_tmp = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp13 = NULL;
  chpl_opaque call_tmp14;
  call_tmp = sizeof(chpl_chpl___EndCount_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(15), _ln, _fn);
  this8 = ((chpl___EndCount)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_chpl___EndCount;
  (this8)->i = _init_class_tmp_;
  (this8)->taskCnt = INT64(0);
  (this8)->taskList = NULL;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this9)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
  (this8)->i = wrap_call_tmp;
  (this8)->taskCnt = INT64(0);
  ret2 = NULL;
  (this8)->taskList = ret2;
  wrap_call_tmp2 = _construct__EndCount(&wrap_call_tmp, INT64(0), ret2, this8, _ln, _fn);
  _coforallCount = wrap_call_tmp2;
  ret3 = Locales;
  _ic__F0_this = ret3;
  this10 = ret3;
  ret4 = (this10)->dom;
  call_tmp2 = dsiLow(ret4, _ln, _fn);
  this11 = ret3;
  sum = INT64(0);
  ret_ = &((this11)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  call_tmp3 = (call_tmp2 * ret_x1);
  sum += call_tmp3;
  this12 = ret3;
  ret5 = (this12)->dom;
  call_tmp4 = dsiLow(ret5, _ln, _fn);
  call_tmp5 = (call_tmp4 + INT64(1));
  this13 = ret3;
  sum2 = INT64(0);
  ret_2 = &((this13)->blk);
  ret_x12 = *(*(ret_2) + INT64(0));
  call_tmp6 = (call_tmp5 * ret_x12);
  sum2 += call_tmp6;
  call_tmp7 = (sum2 - sum);
  step = call_tmp7;
  this14 = ret3;
  ret6 = (this14)->dom;
  call_tmp8 = dsiNumIndices(ret6, _ln, _fn);
  call_tmp9 = (call_tmp8 - INT64(1));
  call_tmp10 = (call_tmp9 * call_tmp7);
  call_tmp11 = (sum + call_tmp10);
  last = call_tmp11;
  for (i = sum; ((i <= last)); i += step) {
    this15 = _ic__F0_this;
    ret7 = (this15)->shiftedData;
    coerce_tmp = ret7;
    call_tmp12 = (coerce_tmp + i);
    _upEndCount(_coforallCount, _ln, _fn);
    rvfDerefTmp = _coforallCount;
    chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn4_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(42), _ln, _fn);
    _args_forcoforall_fn = ((_class_localscoforall_fn4)(chpl_here_alloc_tmp));
    (_args_forcoforall_fn)->_0_loc = call_tmp12;
    (_args_forcoforall_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    (_args_forcoforall_fn)->_ln = _ln;
    (_args_forcoforall_fn)->_fn = _fn;
    /*** wrapcoforall_fn4 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(3), ((void*)(_args_forcoforall_fn)), &(((_args_forcoforall_fn)->_1_rvfDerefTmp)->taskList), chpl_nodeID, INT64(87), "/home/safl/chapel/modules/internal/ChapelTaskTable.chpl");
  }
  chpl_taskListProcess((_coforallCount)->taskList, _ln, _fn);
  _waitEndCount(_coforallCount, _ln, _fn);
  delete_tmp = _coforallCount;
  _field_destructor_tmp_ = &((delete_tmp)->i);
  call_tmp13 = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp13);
  call_tmp14 = ((void*)(delete_tmp));
  chpl_here_free(call_tmp14, _ln, _fn);
  return;
}

/* ChapelTaskTable.chpl:87 */
static void coforall_fn4(_ref_locale loc, chpl___EndCount _coforallCount, int64_t _ln, c_string _fn) {
  chpldev_taskTable_t this8 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  DefaultAssociativeDom_chpl_taskID_t_F _init_class_tmp_ = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _init_class_tmp_2 = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F default_argdom = NULL;
  chpl___RuntimeTypeInfo3 call_tmp2;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultAssociativeDom_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F default_argmap = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  _ref_DefaultAssociativeDom_chpl_taskID_t_F ret_to_arg_ref_tmp_2 = NULL;
  chpl___RuntimeTypeInfo7 call_tmp4;
  DefaultAssociativeDom_chpl_taskID_t_F _runtime_type_tmp_2 = NULL;
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_3 = NULL;
  chpldev_taskTable_t wrap_call_tmp = NULL;
  call_tmp = sizeof(chpl_chpldev_taskTable_t_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(26), _ln, _fn);
  this8 = ((chpldev_taskTable_t)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_chpldev_taskTable_t;
  _init_class_tmp_ = nil;
  (this8)->dom = _init_class_tmp_;
  _init_class_tmp_2 = nil;
  (this8)->map = _init_class_tmp_2;
  call_tmp2 = chpl__buildDomainRuntimeType3(defaultDist, _ln, _fn);
  _runtime_type_tmp_ = (&call_tmp2)->d;
  ret_to_arg_ref_tmp_ = &default_argdom;
  chpl__convertRuntimeTypeToValue3(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  (this8)->dom = default_argdom;
  ret_to_arg_ref_tmp_2 = &call_tmp3;
  chpl__ensureDomainExpr2(default_argdom, ret_to_arg_ref_tmp_2, _ln, _fn);
  call_tmp4 = chpl__buildArrayRuntimeType4(call_tmp3, _ln, _fn);
  _runtime_type_tmp_2 = (&call_tmp4)->dom;
  ret_to_arg_ref_tmp_3 = &default_argmap;
  chpl__convertRuntimeTypeToValue8(_runtime_type_tmp_2, ret_to_arg_ref_tmp_3, _ln, _fn);
  (this8)->map = default_argmap;
  wrap_call_tmp = _construct_chpldev_taskTable_t(default_argdom, default_argmap, this8, _ln, _fn);
  chpl__autoDestroy3(call_tmp3, _ln, _fn);
  chpldev_taskTable = wrap_call_tmp;
  _downEndCount(_coforallCount, _ln, _fn);
  return;
}

/* ChapelTaskTable.chpl:87 */
static void wrapcoforall_fn4(_class_localscoforall_fn4 c) {
  int64_t _ln;
  c_string _fn;
  _ref_locale _0_loc = NULL;
  chpl___EndCount _1_rvfDerefTmp = NULL;
  _ln = (c)->_ln;
  _fn = (c)->_fn;
  _0_loc = (c)->_0_loc;
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  coforall_fn4(_0_loc, _1_rvfDerefTmp, _ln, _fn);
  chpl_here_free(((void*)(c)), _ln, _fn);
  return;
}

/* ChapelTaskTable.chpl:111 */
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, c_string filename, uint64_t tl_info, int64_t _ln, c_string _fn) {
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  chpl_bool call_tmp6;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp7 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp8 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  _ref_chpldev_Task wrap_call_tmp = NULL;
  chpldev_Task this8;
  chpldev_Task wrap_call_tmp2;
  call_tmp = ((object)(chpldev_taskTable));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    goto _end_chpldev_taskTable_add;
  }
  call_tmp3 = (chpldev_taskTable)->dom;
  call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
  call_tmp5 = (! call_tmp4);
  if (call_tmp5) {
    call_tmp6 = chpl_task_getSerial();
    chpl_task_setSerial(true);
    call_tmp7 = (chpldev_taskTable)->dom;
    add(call_tmp7, taskID, _ln, _fn);
    chpl_task_setSerial(call_tmp6);
  }
  call_tmp8 = (chpldev_taskTable)->map;
  coerce_tmp = call_tmp8;
  ret = coerce_tmp;
  wrap_call_tmp = dsiAccess(ret, taskID, false, _ln, _fn);
  (&this8)->state = taskState_pending;
  (&this8)->lineno = UINT32(0);
  (&this8)->filename = "";
  (&this8)->tl_info = UINT64(0);
  (&this8)->state = taskState_pending;
  (&this8)->lineno = lineno;
  (&this8)->filename = filename;
  (&this8)->tl_info = tl_info;
  wrap_call_tmp2 = _construct_chpldev_Task(taskState_pending, lineno, filename, tl_info, &this8, _ln, _fn);
  chpl___ASSIGN_4(wrap_call_tmp, &wrap_call_tmp2, _ln, _fn);
  _end_chpldev_taskTable_add:;
  return;
}

/* ChapelTaskTable.chpl:129 */
void chpldev_taskTable_remove(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  chpl_bool T;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  chpl_bool call_tmp6;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp7 = NULL;
  call_tmp = ((object)(chpldev_taskTable));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    T = true;
  } else {
    call_tmp3 = (chpldev_taskTable)->dom;
    call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    call_tmp5 = (! call_tmp4);
    T = call_tmp5;
  }
  if (T) {
    goto _end_chpldev_taskTable_remove;
  }
  call_tmp6 = chpl_task_getSerial();
  chpl_task_setSerial(true);
  call_tmp7 = (chpldev_taskTable)->dom;
  remove2(call_tmp7, taskID, _ln, _fn);
  chpl_task_setSerial(call_tmp6);
  _end_chpldev_taskTable_remove:;
  return;
}

/* ChapelTaskTable.chpl:141 */
void chpldev_taskTable_set_active(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  chpl_bool T;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp6 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  _ref_chpldev_Task wrap_call_tmp = NULL;
  _ref_taskState call_tmp7 = NULL;
  call_tmp = ((object)(chpldev_taskTable));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    T = true;
  } else {
    call_tmp3 = (chpldev_taskTable)->dom;
    call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    call_tmp5 = (! call_tmp4);
    T = call_tmp5;
  }
  if (T) {
    goto _end_chpldev_taskTable_set_active;
  }
  call_tmp6 = (chpldev_taskTable)->map;
  coerce_tmp = call_tmp6;
  ret = coerce_tmp;
  wrap_call_tmp = dsiAccess(ret, taskID, false, _ln, _fn);
  call_tmp7 = &((wrap_call_tmp)->state);
  *(call_tmp7) = taskState_active;
  _end_chpldev_taskTable_set_active:;
  return;
}

/* ChapelTaskTable.chpl:149 */
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  chpl_bool T;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp6 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  _ref_chpldev_Task wrap_call_tmp = NULL;
  _ref_taskState call_tmp7 = NULL;
  call_tmp = ((object)(chpldev_taskTable));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    T = true;
  } else {
    call_tmp3 = (chpldev_taskTable)->dom;
    call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    call_tmp5 = (! call_tmp4);
    T = call_tmp5;
  }
  if (T) {
    goto _end_chpldev_taskTable_set_suspended;
  }
  call_tmp6 = (chpldev_taskTable)->map;
  coerce_tmp = call_tmp6;
  ret = coerce_tmp;
  wrap_call_tmp = dsiAccess(ret, taskID, false, _ln, _fn);
  call_tmp7 = &((wrap_call_tmp)->state);
  *(call_tmp7) = taskState_suspended;
  _end_chpldev_taskTable_set_suspended:;
  return;
}

/* ChapelTaskTable.chpl:157 */
uint64_t chpldev_taskTable_get_tl_info(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  uint64_t ret;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  chpl_bool T;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp6 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret2 = NULL;
  _ref_chpldev_Task wrap_call_tmp = NULL;
  uint64_t ret3;
  call_tmp = ((object)(chpldev_taskTable));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    T = true;
  } else {
    call_tmp3 = (chpldev_taskTable)->dom;
    call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    call_tmp5 = (! call_tmp4);
    T = call_tmp5;
  }
  if (T) {
    ret = UINT64(0);
    goto _end_chpldev_taskTable_get_tl_info;
  }
  call_tmp6 = (chpldev_taskTable)->map;
  coerce_tmp = call_tmp6;
  ret2 = coerce_tmp;
  wrap_call_tmp = dsiAccess(ret2, taskID, false, _ln, _fn);
  ret3 = (wrap_call_tmp)->tl_info;
  ret = ret3;
  _end_chpldev_taskTable_get_tl_info:;
  return ret;
}

/* ChapelTaskTable.chpl:165 */
void chpldev_taskTable_print(int64_t _ln, c_string _fn) {
  channel_T_dynamic_T local_stderr;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F coerce_tmp = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F _ic__F0_this = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp_F1_tab = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F this8 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp4 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F1_tab = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F this9 = NULL;
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F tab = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp6 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret5 = NULL;
  int64_t sum;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp7;
  _ddata_chpl_TableEntry_chpl_taskID_t ret6 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp2 = NULL;
  _ref_chpl_TableEntry_chpl_taskID_t call_tmp8 = NULL;
  chpl__hash_status ret7;
  int64_t call_tmp9;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  DefaultAssociativeDom_chpl_taskID_t_F this10 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp12 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F coerce_tmp3 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp13 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret8 = NULL;
  int64_t sum2;
  int64_t ret_x13;
  _ref__tuple_1_star_int64_t ret_3 = NULL;
  int64_t call_tmp14;
  _ddata_chpl_TableEntry_chpl_taskID_t ret9 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp4 = NULL;
  _ref_chpl_TableEntry_chpl_taskID_t call_tmp15 = NULL;
  chpl_taskID_t ret10;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp16 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp5 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret11 = NULL;
  _ref_chpldev_Task wrap_call_tmp = NULL;
  c_string ret12;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp17 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp6 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret13 = NULL;
  _ref_chpldev_Task wrap_call_tmp2 = NULL;
  uint32_t ret14;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp18 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp7 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret15 = NULL;
  _ref_chpldev_Task wrap_call_tmp3 = NULL;
  taskState ret16;
  chpl_string call_tmp19;
  chpl_string call_tmp20;
  chpl_string call_tmp21;
  _ref_channel_T_dynamic_T _ref_tmp_ = NULL;
  local_stderr = stderr2;
  call_tmp = ((object)(chpldev_taskTable));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    goto _end_chpldev_taskTable_print;
  }
  call_tmp3 = (chpldev_taskTable)->dom;
  coerce_tmp = call_tmp3;
  ret = coerce_tmp;
  _ic__F0_this = ret;
  this8 = ret;
  call_tmp4 = (this8)->table;
  T = chpl__autoCopy7(call_tmp4, _ln, _fn);
  call_tmp_F1_tab = T;
  _ic__F1_tab = T;
  ret_to_arg_ref_tmp_ = &call_tmp5;
  _dom2(T, ret_to_arg_ref_tmp_, _ln, _fn);
  ret2 = call_tmp5;
  ret_to_arg_ref_tmp_2 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  this9 = ret2;
  ret_ = &((this9)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  _ic__F0_this2 = ret_x1;
  ret3 = (&_ic__F0_this2)->_low;
  ret4 = (&_ic__F0_this2)->_high;
  end = ret4;
  for (i = ret3; ((i <= end)); i += INT64(1)) {
    tab = _ic__F1_tab;
    ret5 = tab;
    call_tmp6 = ret5;
    sum = INT64(0);
    ret_2 = &((call_tmp6)->blk);
    ret_x12 = *(*(ret_2) + INT64(0));
    call_tmp7 = (i * ret_x12);
    sum += call_tmp7;
    ret6 = (call_tmp6)->shiftedData;
    coerce_tmp2 = ret6;
    call_tmp8 = (coerce_tmp2 + sum);
    ret7 = (call_tmp8)->status;
    call_tmp9 = ((int64_t)(ret7));
    call_tmp10 = ((int64_t)(chpl__hash_status_full));
    call_tmp11 = (call_tmp9 == call_tmp10);
    if (call_tmp11) {
      this10 = _ic__F0_this;
      call_tmp12 = (this10)->table;
      coerce_tmp3 = call_tmp12;
      ret8 = coerce_tmp3;
      call_tmp13 = ret8;
      sum2 = INT64(0);
      ret_3 = &((call_tmp13)->blk);
      ret_x13 = *(*(ret_3) + INT64(0));
      call_tmp14 = (i * ret_x13);
      sum2 += call_tmp14;
      ret9 = (call_tmp13)->shiftedData;
      coerce_tmp4 = ret9;
      call_tmp15 = (coerce_tmp4 + sum2);
      ret10 = (call_tmp15)->idx;
      call_tmp16 = (chpldev_taskTable)->map;
      coerce_tmp5 = call_tmp16;
      ret11 = coerce_tmp5;
      wrap_call_tmp = dsiAccess(ret11, ret10, false, _ln, _fn);
      ret12 = (wrap_call_tmp)->filename;
      call_tmp17 = (chpldev_taskTable)->map;
      coerce_tmp6 = call_tmp17;
      ret13 = coerce_tmp6;
      wrap_call_tmp2 = dsiAccess(ret13, ret10, false, _ln, _fn);
      ret14 = (wrap_call_tmp2)->lineno;
      call_tmp18 = (chpldev_taskTable)->map;
      coerce_tmp7 = call_tmp18;
      ret15 = coerce_tmp7;
      wrap_call_tmp3 = dsiAccess(ret15, ret10, false, _ln, _fn);
      ret16 = (wrap_call_tmp3)->state;
      string_from_c_string(&call_tmp19, "- ", INT64(0), INT64(0), _ln, _fn);
      string_from_c_string(&call_tmp20, ":", INT64(0), INT64(0), _ln, _fn);
      string_from_c_string(&call_tmp21, " is ", INT64(0), INT64(0), _ln, _fn);
      _ref_tmp_ = &local_stderr;
      writeln(_ref_tmp_, call_tmp19, ret12, call_tmp20, ret14, call_tmp21, ret16, _ln, _fn);
    }
  }
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
  chpl__autoDestroy7(call_tmp_F1_tab, _ln, _fn);
  _end_chpldev_taskTable_print:;
  return;
}

