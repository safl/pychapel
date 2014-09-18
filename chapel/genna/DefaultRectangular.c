/* DefaultRectangular.chpl:23 */
static void chpl__init_DefaultRectangular(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int64_t const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool const_tmp2;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  c_string call_tmp6;
  int64_t const_tmp3;
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  c_string call_tmp9;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  DefaultDist this8 = NULL;
  int64_t call_tmp12;
  chpl_opaque cast_tmp;
  atomic_refcnt this9;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  list_BaseDom this11;
  listNode_BaseDom call_tmp13 = NULL;
  listNode_BaseDom call_tmp14 = NULL;
  list_BaseDom wrap_call_tmp3;
  atomicflag this12;
  atomic_flag ret2;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist wrap_call_tmp5 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  if (chpl__init_DefaultRectangular_p) {
    goto _exit_chpl__init_DefaultRectangular;
  }
  modFormatStr = "%*s\n";
  modStr = "DefaultRectangular";
  printModuleInit(modFormatStr, modStr, INT64(18), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_DefaultRectangular_p = true;
  {
    chpl__init_DSIUtil(_ln, _fn);
    chpl__init_ChapelArray(_ln, _fn);
  }
  call_tmp = chpl_config_has_value("dataParTasksPerLocale", "Built-in");
  call_tmp2 = (! call_tmp);
  if (call_tmp2) {
    const_tmp = INT64(0);
  } else {
    call_tmp3 = chpl_config_get_value("dataParTasksPerLocale", "Built-in");
    const_tmp = _command_line_cast(call_tmp3, _ln, _fn);
  }
  dataParTasksPerLocale = const_tmp;
  call_tmp4 = chpl_config_has_value("dataParIgnoreRunningTasks", "Built-in");
  call_tmp5 = (! call_tmp4);
  if (call_tmp5) {
    const_tmp2 = false;
  } else {
    call_tmp6 = chpl_config_get_value("dataParIgnoreRunningTasks", "Built-in");
    const_tmp2 = _command_line_cast2(call_tmp6, _ln, _fn);
  }
  dataParIgnoreRunningTasks = const_tmp2;
  call_tmp7 = chpl_config_has_value("dataParMinGranularity", "Built-in");
  call_tmp8 = (! call_tmp7);
  if (call_tmp8) {
    const_tmp3 = INT64(1);
  } else {
    call_tmp9 = chpl_config_get_value("dataParMinGranularity", "Built-in");
    const_tmp3 = _command_line_cast3(call_tmp9, _ln, _fn);
  }
  dataParMinGranularity = const_tmp3;
  call_tmp10 = (dataParTasksPerLocale < INT64(0));
  if (call_tmp10) {
    halt("dataParTasksPerLocale must be >= 0", _ln, _fn);
  }
  call_tmp11 = (dataParMinGranularity <= INT64(0));
  if (call_tmp11) {
    halt("dataParMinGranularity must be > 0", _ln, _fn);
  }
  call_tmp12 = sizeof(chpl_DefaultDist_object);
  cast_tmp = chpl_here_alloc(call_tmp12, INT16(4), _ln, _fn);
  this8 = ((DefaultDist)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_DefaultDist;
  (&this9)->_cnt = _init_class_tmp_;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this10, _ln, _fn);
  (&this9)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this9, _ln, _fn);
  (&this11)->first = nil;
  (&this11)->last = nil;
  (&this11)->length = INT64(0);
  call_tmp13 = ((listNode_BaseDom)(nil));
  (&this11)->first = call_tmp13;
  call_tmp14 = ((listNode_BaseDom)(nil));
  (&this11)->last = call_tmp14;
  (&this11)->length = INT64(0);
  wrap_call_tmp3 = _construct_list2(call_tmp13, call_tmp14, INT64(0), &this11, _ln, _fn);
  ret2 = type_tmp2;
  _ref_tmp_2 = &ret2;
  atomic_init_flag(_ref_tmp_2, false);
  (&this12)->_v = ret2;
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this12, _ln, _fn);
  wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this8, _ln, _fn);
  ret_to_arg_ref_tmp_ = &defaultDist;
  chpl__buildDistValue(wrap_call_tmp5, ret_to_arg_ref_tmp_, _ln, _fn);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_DefaultRectangular:;
  return;
}

/* DefaultRectangular.chpl:43 */
static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, DefaultDist meme, int64_t _ln, c_string _fn) {
  DefaultDist this8 = NULL;
  BaseDist T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseDist(_distCnt, _doms, _domsLock, T, _ln, _fn);
  return meme;
}

/* DefaultRectangular.chpl:43 */
static void chpl__auto_destroy_DefaultDist(DefaultDist this8, int64_t _ln, c_string _fn) {
  BaseDist _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseDist)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* DefaultRectangular.chpl:44 */
static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  call_tmp = DefaultRectangularDom(this8, _ln, _fn);
  return call_tmp;
}

/* DefaultRectangular.chpl:44 */
static DefaultRectangularDom_2_int64_t_F dsiNewRectangularDom2(DefaultDist this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F call_tmp = NULL;
  call_tmp = DefaultRectangularDom2(this8, _ln, _fn);
  return call_tmp;
}

/* DefaultRectangular.chpl:47 */
static DefaultAssociativeDom_chpl_taskID_t_F dsiNewAssociativeDom(DefaultDist this8, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp = NULL;
  call_tmp = DefaultAssociativeDom(this8, _ln, _fn);
  return call_tmp;
}

/* DefaultRectangular.chpl:60 */
static DefaultDist dsiClone(DefaultDist this8) {
  return this8;
}

/* DefaultRectangular.chpl:62 */
static void dsiAssign(DefaultDist this8, DefaultDist other) {
  return;
}

/* DefaultRectangular.chpl:77 */
static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  BaseRectangularDom T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseRectangularDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
  (this8)->dist = dist2;
  *((this8)->ranges + INT64(0)) = *(*(ranges) + INT64(0));
  return this8;
}

/* DefaultRectangular.chpl:77 */
static DefaultRectangularDom_2_int64_t_F _construct_DefaultRectangularDom2(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_2_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_2_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F this8 = NULL;
  BaseRectangularDom T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseRectangularDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
  (this8)->dist = dist2;
  *((this8)->ranges + INT64(0)) = *(*(ranges) + INT64(0));
  *((this8)->ranges + INT64(1)) = *(*(ranges) + INT64(1));
  return this8;
}

/* DefaultRectangular.chpl:77 */
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
  BaseDom _parent_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseRectangularDom)(this8));
  _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* DefaultRectangular.chpl:77 */
static void chpl__auto_destroy_DefaultRectangularDom2(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
  BaseDom _parent_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseRectangularDom)(this8));
  _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* DefaultRectangular.chpl:85 */
static chpl_bool dsiLinksDistribution3(DefaultRectangularDom_1_int64_t_F this8) {
  return false;
}

/* DefaultRectangular.chpl:85 */
static chpl_bool dsiLinksDistribution4(DefaultRectangularDom_2_int64_t_F this8) {
  return false;
}

/* DefaultRectangular.chpl:87 */
static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  DefaultRectangularDom_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_range_int64_t_bounded_F _init_class_tmp_;
  range_int64_t_bounded_F _init_class_tmp_2;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_3;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  list_BaseArr this12;
  listNode_BaseArr call_tmp2 = NULL;
  listNode_BaseArr call_tmp3 = NULL;
  list_BaseArr wrap_call_tmp3;
  atomicflag this13;
  atomic_flag ret2;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist call_tmp4 = NULL;
  range_int64_t_bounded_F this14;
  range_int64_t_bounded_F wrap_call_tmp5;
  _tuple_1_star_range_int64_t_bounded_F this15;
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp6 = NULL;
  _ref_DefaultDist call_tmp5 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularDom_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(5), _ln, _fn);
  this9 = ((DefaultRectangularDom_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_F;
  (this9)->dist = nil;
  (&_init_class_tmp_2)->_low = INT64(0);
  (&_init_class_tmp_2)->_high = INT64(0);
  (&_init_class_tmp_2)->_stride = INT64(0);
  (&_init_class_tmp_2)->_alignment = INT64(0);
  (&_init_class_tmp_2)->_aligned = false;
  *(_init_class_tmp_ + INT64(0)) = _init_class_tmp_2;
  *((this9)->ranges + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  (&this10)->_cnt = _init_class_tmp_3;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  (&this12)->first = nil;
  (&this12)->last = nil;
  (&this12)->length = INT64(0);
  call_tmp2 = ((listNode_BaseArr)(nil));
  (&this12)->first = call_tmp2;
  call_tmp3 = ((listNode_BaseArr)(nil));
  (&this12)->last = call_tmp3;
  (&this12)->length = INT64(0);
  wrap_call_tmp3 = _construct_list(call_tmp2, call_tmp3, INT64(0), &this12, _ln, _fn);
  ret2 = type_tmp2;
  _ref_tmp_2 = &ret2;
  atomic_init_flag(_ref_tmp_2, false);
  (&this13)->_v = ret2;
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this13, _ln, _fn);
  call_tmp4 = ((DefaultDist)(nil));
  (this9)->dist = call_tmp4;
  (&this14)->_low = INT64(0);
  (&this14)->_high = INT64(0);
  (&this14)->_stride = INT64(0);
  (&this14)->_alignment = INT64(0);
  (&this14)->_aligned = false;
  (&this14)->_low = INT64(1);
  (&this14)->_high = INT64(0);
  (&this14)->_stride = INT64(1);
  (&this14)->_alignment = INT64(0);
  (&this14)->_aligned = false;
  wrap_call_tmp5 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this14, _ln, _fn);
  *(this15 + INT64(0)) = wrap_call_tmp5;
  *((this9)->ranges + INT64(0)) = *(this15 + INT64(0));
  wrap_call_tmp6 = _construct_DefaultRectangularDom(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, call_tmp4, &this15, this9, _ln, _fn);
  this8 = wrap_call_tmp6;
  call_tmp5 = &((this8)->dist);
  *(call_tmp5) = dist2;
  return this8;
}

/* DefaultRectangular.chpl:87 */
static DefaultRectangularDom_2_int64_t_F DefaultRectangularDom2(DefaultDist dist2, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F this8 = NULL;
  DefaultRectangularDom_2_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_2_star_range_int64_t_bounded_F _init_class_tmp_;
  range_int64_t_bounded_F _init_class_tmp_2;
  range_int64_t_bounded_F _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  list_BaseArr this12;
  listNode_BaseArr call_tmp2 = NULL;
  listNode_BaseArr call_tmp3 = NULL;
  list_BaseArr wrap_call_tmp3;
  atomicflag this13;
  atomic_flag ret2;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist call_tmp4 = NULL;
  range_int64_t_bounded_F this14;
  range_int64_t_bounded_F wrap_call_tmp5;
  range_int64_t_bounded_F this15;
  range_int64_t_bounded_F wrap_call_tmp6;
  _tuple_2_star_range_int64_t_bounded_F this16;
  DefaultRectangularDom_2_int64_t_F wrap_call_tmp7 = NULL;
  _ref_DefaultDist call_tmp5 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularDom_2_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(28), _ln, _fn);
  this9 = ((DefaultRectangularDom_2_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularDom_2_int64_t_F;
  (this9)->dist = nil;
  (&_init_class_tmp_2)->_low = INT64(0);
  (&_init_class_tmp_2)->_high = INT64(0);
  (&_init_class_tmp_2)->_stride = INT64(0);
  (&_init_class_tmp_2)->_alignment = INT64(0);
  (&_init_class_tmp_2)->_aligned = false;
  *(_init_class_tmp_ + INT64(0)) = _init_class_tmp_2;
  (&_init_class_tmp_3)->_low = INT64(0);
  (&_init_class_tmp_3)->_high = INT64(0);
  (&_init_class_tmp_3)->_stride = INT64(0);
  (&_init_class_tmp_3)->_alignment = INT64(0);
  (&_init_class_tmp_3)->_aligned = false;
  *(_init_class_tmp_ + INT64(1)) = _init_class_tmp_3;
  *((this9)->ranges + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *((this9)->ranges + INT64(1)) = *(_init_class_tmp_ + INT64(1));
  (&this10)->_cnt = _init_class_tmp_4;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  (&this12)->first = nil;
  (&this12)->last = nil;
  (&this12)->length = INT64(0);
  call_tmp2 = ((listNode_BaseArr)(nil));
  (&this12)->first = call_tmp2;
  call_tmp3 = ((listNode_BaseArr)(nil));
  (&this12)->last = call_tmp3;
  (&this12)->length = INT64(0);
  wrap_call_tmp3 = _construct_list(call_tmp2, call_tmp3, INT64(0), &this12, _ln, _fn);
  ret2 = type_tmp2;
  _ref_tmp_2 = &ret2;
  atomic_init_flag(_ref_tmp_2, false);
  (&this13)->_v = ret2;
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this13, _ln, _fn);
  call_tmp4 = ((DefaultDist)(nil));
  (this9)->dist = call_tmp4;
  (&this14)->_low = INT64(0);
  (&this14)->_high = INT64(0);
  (&this14)->_stride = INT64(0);
  (&this14)->_alignment = INT64(0);
  (&this14)->_aligned = false;
  (&this14)->_low = INT64(1);
  (&this14)->_high = INT64(0);
  (&this14)->_stride = INT64(1);
  (&this14)->_alignment = INT64(0);
  (&this14)->_aligned = false;
  wrap_call_tmp5 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this14, _ln, _fn);
  (&this15)->_low = INT64(0);
  (&this15)->_high = INT64(0);
  (&this15)->_stride = INT64(0);
  (&this15)->_alignment = INT64(0);
  (&this15)->_aligned = false;
  (&this15)->_low = INT64(1);
  (&this15)->_high = INT64(0);
  (&this15)->_stride = INT64(1);
  (&this15)->_alignment = INT64(0);
  (&this15)->_aligned = false;
  wrap_call_tmp6 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this15, _ln, _fn);
  *(this16 + INT64(0)) = wrap_call_tmp5;
  *(this16 + INT64(1)) = wrap_call_tmp6;
  *((this9)->ranges + INT64(0)) = *(this16 + INT64(0));
  *((this9)->ranges + INT64(1)) = *(this16 + INT64(1));
  wrap_call_tmp7 = _construct_DefaultRectangularDom2(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, call_tmp4, &this16, this9, _ln, _fn);
  this8 = wrap_call_tmp7;
  call_tmp5 = &((this8)->dist);
  *(call_tmp5) = dist2;
  return this8;
}

/* DefaultRectangular.chpl:102 */
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  ret_ = &((this8)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  *(*(_retArg) + INT64(0)) = ret_x1;
  return;
}

/* DefaultRectangular.chpl:104 */
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this8, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn) {
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp = NULL;
  call_tmp = &((this8)->ranges);
  *(*(call_tmp) + INT64(0)) = *(*(x) + INT64(0));
  return;
}

/* DefaultRectangular.chpl:104 */
static void dsiSetIndices2(DefaultRectangularDom_2_int64_t_F this8, _tuple_2_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn) {
  _ref__tuple_2_star_range_int64_t_bounded_F call_tmp = NULL;
  call_tmp = &((this8)->ranges);
  *(*(call_tmp) + INT64(0)) = *(*(x) + INT64(0));
  *(*(call_tmp) + INT64(1)) = *(*(x) + INT64(1));
  return;
}

/* DefaultRectangular.chpl:374 */
static void dsiDim(DefaultRectangularDom_1_int64_t_F this8, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  ret_ = &((this8)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  *(_retArg) = ret_x1;
  return;
}

/* DefaultRectangular.chpl:374 */
static void dsiDim2(DefaultRectangularDom_2_int64_t_F this8, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_2_star_range_int64_t_bounded_F ret_ = NULL;
  ret_ = &((this8)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  *(_retArg) = ret_x1;
  return;
}

/* DefaultRectangular.chpl:374 */
static void dsiDim3(DefaultRectangularDom_2_int64_t_F this8, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F ret_x2;
  _ref__tuple_2_star_range_int64_t_bounded_F ret_ = NULL;
  ret_ = &((this8)->ranges);
  ret_x2 = *(*(ret_) + INT64(1));
  *(_retArg) = ret_x2;
  return;
}

/* DefaultRectangular.chpl:377 */
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  int64_t sum;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  int64_t call_tmp2;
  sum = INT64(1);
  _this_tmp_ = &((this8)->ranges);
  call_tmp = (*(_this_tmp_) + INT64(0));
  call_tmp2 = length(call_tmp, _ln, _fn);
  sum *= call_tmp2;
  return sum;
}

/* DefaultRectangular.chpl:377 */
static int64_t dsiNumIndices2(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  int64_t sum;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  int64_t call_tmp2;
  _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_2 = NULL;
  int64_t call_tmp4;
  sum = INT64(1);
  _this_tmp_ = &((this8)->ranges);
  call_tmp = (*(_this_tmp_) + INT64(0));
  call_tmp2 = length(call_tmp, _ln, _fn);
  sum *= call_tmp2;
  _this_tmp_2 = &((this8)->ranges);
  call_tmp3 = (*(_this_tmp_2) + INT64(1));
  call_tmp4 = length(call_tmp3, _ln, _fn);
  sum *= call_tmp4;
  return sum;
}

/* DefaultRectangular.chpl:385 */
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  int64_t ret;
  _this_tmp_ = &((this8)->ranges);
  call_tmp = (*(_this_tmp_) + INT64(0));
  ret = (call_tmp)->_low;
  return ret;
}

/* DefaultRectangular.chpl:396 */
static int64_t dsiHigh(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  int64_t ret;
  _this_tmp_ = &((this8)->ranges);
  call_tmp = (*(_this_tmp_) + INT64(0));
  ret = (call_tmp)->_high;
  return ret;
}

/* DefaultRectangular.chpl:473 */
static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_locale call_tmp3 = NULL;
  _ddata_locale call_tmp4 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp3 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(8), _ln, _fn);
  this9 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = this8;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_locale)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_locale)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, this8, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  return wrap_call_tmp3;
}

/* DefaultRectangular.chpl:473 */
static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray3(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_localesSignal call_tmp3 = NULL;
  _ddata_localesSignal call_tmp4 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp3 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(14), _ln, _fn);
  this9 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = this8;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_localesSignal)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_localesSignal)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, this8, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  return wrap_call_tmp3;
}

/* DefaultRectangular.chpl:473 */
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F dsiBuildArray4(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_chpl_TableEntry_chpl_taskID_t call_tmp3 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t call_tmp4 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F wrap_call_tmp3 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(21), _ln, _fn);
  this9 = ((DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = this8;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_chpl_TableEntry_chpl_taskID_t)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_chpl_TableEntry_chpl_taskID_t)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr3(&wrap_call_tmp2, call_tmp2, this8, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  return wrap_call_tmp3;
}

/* DefaultRectangular.chpl:473 */
static DefaultRectangularArr_chpldev_Task_1_int64_t_F dsiBuildArray5(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_chpldev_Task call_tmp3 = NULL;
  _ddata_chpldev_Task call_tmp4 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F wrap_call_tmp3 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(24), _ln, _fn);
  this9 = ((DefaultRectangularArr_chpldev_Task_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = this8;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_chpldev_Task)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_chpldev_Task)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr4(&wrap_call_tmp2, call_tmp2, this8, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  return wrap_call_tmp3;
}

/* DefaultRectangular.chpl:473 */
static DefaultRectangularArr__real64_2_int64_t_F dsiBuildArray6(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr__real64_2_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_2_star_int64_t _init_class_tmp_;
  _tuple_2_star_int64_t _init_class_tmp_2;
  _tuple_2_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_2_star_int64_t this12;
  _tuple_2_star_int64_t this13;
  _tuple_2_star_int64_t this14;
  _ddata__real64 call_tmp3 = NULL;
  _ddata__real64 call_tmp4 = NULL;
  DefaultRectangularArr__real64_2_int64_t_F wrap_call_tmp3 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularArr__real64_2_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(30), _ln, _fn);
  this9 = ((DefaultRectangularArr__real64_2_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr__real64_2_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *(_init_class_tmp_ + INT64(1)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *((this9)->off + INT64(1)) = *(_init_class_tmp_ + INT64(1));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *(_init_class_tmp_2 + INT64(1)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *((this9)->blk + INT64(1)) = *(_init_class_tmp_2 + INT64(1));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *(_init_class_tmp_3 + INT64(1)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  *((this9)->str + INT64(1)) = *(_init_class_tmp_3 + INT64(1));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = this8;
  *(this12 + INT64(0)) = INT64(0);
  *(this12 + INT64(1)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *((this9)->off + INT64(1)) = *(this12 + INT64(1));
  *(this13 + INT64(0)) = INT64(0);
  *(this13 + INT64(1)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *((this9)->blk + INT64(1)) = *(this13 + INT64(1));
  *(this14 + INT64(0)) = INT64(0);
  *(this14 + INT64(1)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  *((this9)->str + INT64(1)) = *(this14 + INT64(1));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata__real64)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata__real64)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr5(&wrap_call_tmp2, call_tmp2, this8, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  return wrap_call_tmp3;
}

/* DefaultRectangular.chpl:478 */
static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this8, _tuple_1_star_range_int64_t_bounded_F* const ranges, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F dom = NULL;
  DefaultDist ret = NULL;
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret2;
  int64_t end;
  int64_t ret3;
  _ref_range_int64_t_bounded_F call_tmp2 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  range_int64_t_bounded_F T;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  ret = (this8)->dist;
  dom = DefaultRectangularDom(ret, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), INT64(1), ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp;
  ret2 = (&_ic__F0_this)->_low;
  ret3 = (&_ic__F0_this)->_high;
  end = ret3;
  for (i = ret2; ((i <= end)); i += INT64(1)) {
    _this_tmp_ = &((dom)->ranges);
    call_tmp2 = this6(_this_tmp_, i, _ln, _fn);
    ret_to_arg_ref_tmp_2 = &T;
    _ref_tmp_ = ranges;
    this7(_ref_tmp_, i, ret_to_arg_ref_tmp_2, _ln, _fn);
    *(call_tmp2) = T;
  }
  return dom;
}

/* DefaultRectangular.chpl:523 */
static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F this8 = NULL;
  BaseArr T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
  (this8)->dom = dom;
  *((this8)->off + INT64(0)) = *(*(off) + INT64(0));
  *((this8)->blk + INT64(0)) = *(*(blk) + INT64(0));
  *((this8)->str + INT64(0)) = *(*(str) + INT64(0));
  (this8)->origin = origin;
  (this8)->factoredOffs = factoredOffs;
  (this8)->data = data;
  (this8)->shiftedData = shiftedData;
  (this8)->noinit_data = noinit_data;
  initialize8(this8, _ln, _fn);
  return this8;
}

/* DefaultRectangular.chpl:523 */
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
  BaseArr T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
  (this8)->dom = dom;
  *((this8)->off + INT64(0)) = *(*(off) + INT64(0));
  *((this8)->blk + INT64(0)) = *(*(blk) + INT64(0));
  *((this8)->str + INT64(0)) = *(*(str) + INT64(0));
  (this8)->origin = origin;
  (this8)->factoredOffs = factoredOffs;
  (this8)->data = data;
  (this8)->shiftedData = shiftedData;
  (this8)->noinit_data = noinit_data;
  initialize9(this8, _ln, _fn);
  return this8;
}

/* DefaultRectangular.chpl:523 */
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpl_TableEntry_chpl_taskID_t data, _ddata_chpl_TableEntry_chpl_taskID_t shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8 = NULL;
  BaseArr T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
  (this8)->dom = dom;
  *((this8)->off + INT64(0)) = *(*(off) + INT64(0));
  *((this8)->blk + INT64(0)) = *(*(blk) + INT64(0));
  *((this8)->str + INT64(0)) = *(*(str) + INT64(0));
  (this8)->origin = origin;
  (this8)->factoredOffs = factoredOffs;
  (this8)->data = data;
  (this8)->shiftedData = shiftedData;
  (this8)->noinit_data = noinit_data;
  initialize10(this8, _ln, _fn);
  return this8;
}

/* DefaultRectangular.chpl:523 */
static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpldev_Task data, _ddata_chpldev_Task shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F this8 = NULL;
  BaseArr T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
  (this8)->dom = dom;
  *((this8)->off + INT64(0)) = *(*(off) + INT64(0));
  *((this8)->blk + INT64(0)) = *(*(blk) + INT64(0));
  *((this8)->str + INT64(0)) = *(*(str) + INT64(0));
  (this8)->origin = origin;
  (this8)->factoredOffs = factoredOffs;
  (this8)->data = data;
  (this8)->shiftedData = shiftedData;
  (this8)->noinit_data = noinit_data;
  initialize11(this8, _ln, _fn);
  return this8;
}

/* DefaultRectangular.chpl:523 */
static DefaultRectangularArr__real64_2_int64_t_F _construct_DefaultRectangularArr5(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_2_int64_t_F dom, _tuple_2_star_int64_t* const off, _tuple_2_star_int64_t* const blk, _tuple_2_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata__real64 data, _ddata__real64 shiftedData, chpl_bool noinit_data, DefaultRectangularArr__real64_2_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr__real64_2_int64_t_F this8 = NULL;
  BaseArr T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
  (this8)->dom = dom;
  *((this8)->off + INT64(0)) = *(*(off) + INT64(0));
  *((this8)->off + INT64(1)) = *(*(off) + INT64(1));
  *((this8)->blk + INT64(0)) = *(*(blk) + INT64(0));
  *((this8)->blk + INT64(1)) = *(*(blk) + INT64(1));
  *((this8)->str + INT64(0)) = *(*(str) + INT64(0));
  *((this8)->str + INT64(1)) = *(*(str) + INT64(1));
  (this8)->origin = origin;
  (this8)->factoredOffs = factoredOffs;
  (this8)->data = data;
  (this8)->shiftedData = shiftedData;
  (this8)->noinit_data = noinit_data;
  initialize12(this8, _ln, _fn);
  return this8;
}

/* DefaultRectangular.chpl:523 */
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((BaseArr)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* DefaultRectangular.chpl:523 */
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((BaseArr)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* DefaultRectangular.chpl:523 */
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((BaseArr)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* DefaultRectangular.chpl:523 */
static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((BaseArr)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* DefaultRectangular.chpl:523 */
static void chpl__auto_destroy_DefaultRectangularArr5(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((BaseArr)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* DefaultRectangular.chpl:553 */
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  ret = (this8)->dom;
  return ret;
}

/* DefaultRectangular.chpl:553 */
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  ret = (this8)->dom;
  return ret;
}

/* DefaultRectangular.chpl:553 */
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  ret = (this8)->dom;
  return ret;
}

/* DefaultRectangular.chpl:553 */
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  ret = (this8)->dom;
  return ret;
}

/* DefaultRectangular.chpl:553 */
static DefaultRectangularDom_2_int64_t_F dsiGetBaseDom7(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  ret = (this8)->dom;
  return ret;
}

/* DefaultRectangular.chpl:555 */
static void dsiDestroyData2(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  chpl_bool call_tmp2;
  _ddata_locale ret2 = NULL;
  _ddata_locale dv = NULL;
  _ddata_locale ret3 = NULL;
  ret = (this8)->dom;
  call_tmp = dsiNumIndices(ret, _ln, _fn);
  call_tmp2 = (call_tmp > INT64(0));
  if (call_tmp2) {
    ret2 = (this8)->data;
    dv = ret2;
  }
  ret3 = (this8)->data;
  chpl_array_free(ret3, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:555 */
static void dsiDestroyData3(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  chpl_bool call_tmp2;
  _ddata_localesSignal ret2 = NULL;
  _ddata_localesSignal dv = NULL;
  _ddata_localesSignal ret3 = NULL;
  ret = (this8)->dom;
  call_tmp = dsiNumIndices(ret, _ln, _fn);
  call_tmp2 = (call_tmp > INT64(0));
  if (call_tmp2) {
    ret2 = (this8)->data;
    dv = ret2;
  }
  ret3 = (this8)->data;
  chpl_array_free(ret3, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:555 */
static void dsiDestroyData4(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  chpl_bool call_tmp2;
  _ddata_chpl_TableEntry_chpl_taskID_t ret2 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t dv = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret4;
  int64_t end;
  int64_t ret5;
  _ddata_chpl_TableEntry_chpl_taskID_t ret6 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t dv2 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t ret7 = NULL;
  ret = (this8)->dom;
  call_tmp = dsiNumIndices(ret, _ln, _fn);
  call_tmp2 = (call_tmp > INT64(0));
  if (call_tmp2) {
    ret2 = (this8)->data;
    dv = ret2;
    ret3 = (this8)->dom;
    call_tmp3 = dsiNumIndices(ret3, _ln, _fn);
    call_tmp4 = (call_tmp3 - INT64(1));
    ret_to_arg_ref_tmp_ = &call_tmp5;
    _build_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_, _ln, _fn);
    _ic__F0_this = call_tmp5;
    ret4 = (&_ic__F0_this)->_low;
    ret5 = (&_ic__F0_this)->_high;
    end = ret5;
    ret6 = (this8)->data;
    dv2 = ret6;
    for (i = ret4; ((i <= end)); i += INT64(1)) {
    }
  }
  ret7 = (this8)->data;
  chpl_array_free(ret7, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:555 */
static void dsiDestroyData5(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  chpl_bool call_tmp2;
  _ddata_chpldev_Task ret2 = NULL;
  _ddata_chpldev_Task dv = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret4;
  int64_t end;
  int64_t ret5;
  _ddata_chpldev_Task ret6 = NULL;
  _ddata_chpldev_Task dv2 = NULL;
  _ddata_chpldev_Task ret7 = NULL;
  ret = (this8)->dom;
  call_tmp = dsiNumIndices(ret, _ln, _fn);
  call_tmp2 = (call_tmp > INT64(0));
  if (call_tmp2) {
    ret2 = (this8)->data;
    dv = ret2;
    ret3 = (this8)->dom;
    call_tmp3 = dsiNumIndices(ret3, _ln, _fn);
    call_tmp4 = (call_tmp3 - INT64(1));
    ret_to_arg_ref_tmp_ = &call_tmp5;
    _build_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_, _ln, _fn);
    _ic__F0_this = call_tmp5;
    ret4 = (&_ic__F0_this)->_low;
    ret5 = (&_ic__F0_this)->_high;
    end = ret5;
    ret6 = (this8)->data;
    dv2 = ret6;
    for (i = ret4; ((i <= end)); i += INT64(1)) {
    }
  }
  ret7 = (this8)->data;
  chpl_array_free(ret7, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:555 */
static void dsiDestroyData6(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  int64_t call_tmp;
  chpl_bool call_tmp2;
  _ddata__real64 ret2 = NULL;
  _ddata__real64 dv = NULL;
  _ddata__real64 ret3 = NULL;
  ret = (this8)->dom;
  call_tmp = dsiNumIndices2(ret, _ln, _fn);
  call_tmp2 = (call_tmp > INT64(0));
  if (call_tmp2) {
    ret2 = (this8)->data;
    dv = ret2;
  }
  ret3 = (this8)->data;
  chpl_array_free(ret3, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:638 */
static void advance(_ic_these_DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  int64_t more;
  chpl_bool T;
  _tuple_2_star_range_int64_t_bounded_F T2;
  range_int64_t_bounded_F _tmp_x1;
  range_int64_t_bounded_F _tmp_x2;
  _ref__tuple_2_star_range_int64_t_bounded_F _tmp_ = NULL;
  DefaultRectangularArr__real64_2_int64_t_F T3 = NULL;
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  range_int64_t_bounded_F _tmp_x12;
  range_int64_t_bounded_F _tmp_x22;
  _ref__tuple_2_star_range_int64_t_bounded_F _tmp_2 = NULL;
  int64_t T4;
  chpl_bool T5;
  int64_t T6;
  _tuple_2_star_int64_t default_argoffset;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ir_F5_offset_x1;
  int64_t _ir_F5_offset_x2;
  _ir_these_DefaultRectangularDom_2_int64_t_F ret2;
  _tuple_2_star_range_int64_t_bounded_F F1_followThis;
  _tuple_2_star_int64_t this9;
  DefaultRectangularDom_2_int64_t_F _tmp_F0_this = NULL;
  range_int64_t_bounded_F _tmp_F1_followThis_x1;
  range_int64_t_bounded_F _tmp_F1_followThis_x2;
  _ref__tuple_2_star_range_int64_t_bounded_F _tmp_F1_followThis_ = NULL;
  int64_t _tmp_F2_tasksPerLocale;
  chpl_bool _tmp_F3_ignoreRunning;
  int64_t _tmp_F4_minIndicesPerTask;
  int64_t _tmp_F5_offset_x1;
  int64_t _tmp_F5_offset_x2;
  _ref__tuple_2_star_int64_t _tmp_F5_offset_ = NULL;
  _ref__ir_these_DefaultRectangularDom_2_int64_t_F _tmp_3 = NULL;
  _ic_these_DefaultRectangularDom_2_int64_t_F _ic_ = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_2_star_range_int64_t_bounded_F T7;
  _tuple_2_star_int64_t T8;
  range_int64_t_bounded_F followThis_x1;
  range_int64_t_bounded_F followThis_x2;
  _ref__tuple_2_star_range_int64_t_bounded_F followThis_ = NULL;
  _ref__ic_these_DefaultRectangularDom_2_int64_t_F T9 = NULL;
  _tuple_2_star_range_int64_t_bounded_F T10;
  range_int64_t_bounded_F this10;
  range_int64_t_bounded_F wrap_call_tmp;
  range_int64_t_bounded_F this11;
  range_int64_t_bounded_F wrap_call_tmp2;
  _tuple_2_star_range_int64_t_bounded_F T11;
  _ref_range_int64_t_bounded_F call_tmp2 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F T12 = NULL;
  _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  DefaultRectangularDom_2_int64_t_F this12 = NULL;
  _ref__ic_these_DefaultRectangularDom_2_int64_t_F T13 = NULL;
  int64_t ret3;
  _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F T14 = NULL;
  int64_t ret4;
  int64_t call_tmp5;
  _ref_range_int64_t_bounded_F call_tmp6 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_2 = NULL;
  DefaultRectangularDom_2_int64_t_F this13 = NULL;
  _ref__ic_these_DefaultRectangularDom_2_int64_t_F T15 = NULL;
  int64_t ret5;
  _ref_range_int64_t_bounded_F call_tmp7 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F T16 = NULL;
  int64_t ret6;
  int64_t call_tmp8;
  range_int64_t_bounded_F call_tmp9;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F T17 = NULL;
  _ref_range_int64_t_bounded_F call_tmp11 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_3 = NULL;
  DefaultRectangularDom_2_int64_t_F this14 = NULL;
  _ref__ic_these_DefaultRectangularDom_2_int64_t_F T18 = NULL;
  int64_t ret7;
  _ref_range_int64_t_bounded_F call_tmp12 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F T19 = NULL;
  int64_t ret8;
  int64_t call_tmp13;
  _ref_range_int64_t_bounded_F call_tmp14 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_4 = NULL;
  DefaultRectangularDom_2_int64_t_F this15 = NULL;
  _ref__ic_these_DefaultRectangularDom_2_int64_t_F T20 = NULL;
  int64_t ret9;
  _ref_range_int64_t_bounded_F call_tmp15 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F T21 = NULL;
  int64_t ret10;
  int64_t call_tmp16;
  range_int64_t_bounded_F call_tmp17;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularDom_2_int64_t_F this16 = NULL;
  _ref__ic_these_DefaultRectangularDom_2_int64_t_F T22 = NULL;
  range_int64_t_bounded_F _tmp_x13;
  range_int64_t_bounded_F _tmp_x23;
  _ref__tuple_2_star_range_int64_t_bounded_F _tmp_4 = NULL;
  _ic_these_help_DefaultRectangularDom_2_int64_t_F _ic_2 = NULL;
  int64_t call_tmp18;
  chpl_opaque cast_tmp2;
  _tuple_2_star_range_int64_t_bounded_F T23;
  range_int64_t_bounded_F block_x1;
  _ref__tuple_2_star_range_int64_t_bounded_F block_ = NULL;
  _ref__ic_these_help_DefaultRectangularDom_2_int64_t_F T24 = NULL;
  _ic_these__ref_range_int64_t_bounded_F _ic_3 = NULL;
  int64_t call_tmp19;
  chpl_opaque cast_tmp3;
  _ref_range_int64_t_bounded_F this17 = NULL;
  _ref__ic_these__ref_range_int64_t_bounded_F T25 = NULL;
  int64_t ret11;
  _ref_range_int64_t_bounded_F this18 = NULL;
  _ref__ic_these__ref_range_int64_t_bounded_F T26 = NULL;
  int64_t ret12;
  int64_t T27;
  range_int64_t_bounded_F block_x2;
  _ref__tuple_2_star_range_int64_t_bounded_F block_2 = NULL;
  _ref__ic_these_help_DefaultRectangularDom_2_int64_t_F T28 = NULL;
  _ic_these__ref_range_int64_t_bounded_F _ic_4 = NULL;
  int64_t call_tmp20;
  chpl_opaque cast_tmp4;
  _ref_range_int64_t_bounded_F this19 = NULL;
  _ref__ic_these__ref_range_int64_t_bounded_F T29 = NULL;
  int64_t ret13;
  _ref_range_int64_t_bounded_F this20 = NULL;
  _ref__ic_these__ref_range_int64_t_bounded_F T30 = NULL;
  int64_t ret14;
  int64_t T31;
  int64_t T32;
  _tuple_2_star_int64_t this21;
  _tuple_2_star_int64_t T33;
  int64_t _tmp_x14;
  int64_t _tmp_x24;
  _ref__tuple_2_star_int64_t _tmp_5 = NULL;
  _tuple_2_star_int64_t T34;
  int64_t _tmp_x15;
  int64_t _tmp_x25;
  _ref__tuple_2_star_int64_t _tmp_6 = NULL;
  DefaultRectangularArr__real64_2_int64_t_F T35 = NULL;
  int64_t _tmp_x16;
  int64_t _tmp_x26;
  _ref__tuple_2_star_int64_t _tmp_7 = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_2_star_int64_t ret_ = NULL;
  int64_t call_tmp21;
  int64_t ret_x2;
  _ref__tuple_2_star_int64_t ret_2 = NULL;
  int64_t call_tmp22;
  _ddata__real64 ret15 = NULL;
  _ddata__real64 coerce_tmp = NULL;
  _ref__real64 call_tmp23 = NULL;
  int64_t T36;
  int64_t T37;
  int64_t T38;
  int64_t T39;
  _ic_these__ref_range_int64_t_bounded_F T40 = NULL;
  chpl_opaque call_tmp24;
  int64_t T41;
  int64_t T42;
  int64_t T43;
  int64_t T44;
  _ic_these__ref_range_int64_t_bounded_F T45 = NULL;
  chpl_opaque call_tmp25;
  _ic_these_help_DefaultRectangularDom_2_int64_t_F T46 = NULL;
  chpl_opaque call_tmp26;
  _ic_these_DefaultRectangularDom_2_int64_t_F T47 = NULL;
  chpl_opaque call_tmp27;
  _ref__ir_these_DefaultRectangularDom_2_int64_t_F _tmp_8 = NULL;
  more = (this8)->more;
  T = (more == INT64(2));
  if (T) {
    goto _jump_2;
  }
  _tmp_ = &((this8)->F1_followThis);
  _tmp_x1 = *(*(_tmp_) + INT64(0));
  _tmp_x2 = *(*(_tmp_) + INT64(1));
  *(T2 + INT64(0)) = _tmp_x1;
  *(T2 + INT64(1)) = _tmp_x2;
  *((this8)->F5__formal_tmp_followThis + INT64(0)) = *(T2 + INT64(0));
  *((this8)->F5__formal_tmp_followThis + INT64(1)) = *(T2 + INT64(1));
  T3 = (this8)->F0_this;
  ret = (T3)->dom;
  _tmp_2 = &((this8)->F5__formal_tmp_followThis);
  _tmp_x12 = *(*(_tmp_2) + INT64(0));
  _tmp_x22 = *(*(_tmp_2) + INT64(1));
  T4 = (this8)->F2_tasksPerLocale;
  T5 = (this8)->F3_ignoreRunning;
  T6 = (this8)->F4_minIndicesPerTask;
  ret_to_arg_ref_tmp_ = &default_argoffset;
  createTuple2(INT64(0), ret_to_arg_ref_tmp_, _ln, _fn);
  _ir_F5_offset_x1 = *(default_argoffset + INT64(0));
  _ir_F5_offset_x2 = *(default_argoffset + INT64(1));
  (&ret2)->F0_this = ret;
  *(F1_followThis + INT64(0)) = _tmp_x12;
  *(F1_followThis + INT64(1)) = _tmp_x22;
  *((&ret2)->F1_followThis + INT64(0)) = *(F1_followThis + INT64(0));
  *((&ret2)->F1_followThis + INT64(1)) = *(F1_followThis + INT64(1));
  (&ret2)->F2_tasksPerLocale = T4;
  (&ret2)->F3_ignoreRunning = T5;
  (&ret2)->F4_minIndicesPerTask = T6;
  *(this9 + INT64(0)) = _ir_F5_offset_x1;
  *(this9 + INT64(1)) = _ir_F5_offset_x2;
  *((&ret2)->F5_offset + INT64(0)) = *(this9 + INT64(0));
  *((&ret2)->F5_offset + INT64(1)) = *(this9 + INT64(1));
  (this8)->F7_call_tmp = ret2;
  _tmp_3 = &((this8)->F7_call_tmp);
  _tmp_F0_this = (_tmp_3)->F0_this;
  _tmp_F1_followThis_ = &((_tmp_3)->F1_followThis);
  _tmp_F1_followThis_x1 = *(*(_tmp_F1_followThis_) + INT64(0));
  _tmp_F1_followThis_x2 = *(*(_tmp_F1_followThis_) + INT64(1));
  _tmp_F2_tasksPerLocale = (_tmp_3)->F2_tasksPerLocale;
  _tmp_F3_ignoreRunning = (_tmp_3)->F3_ignoreRunning;
  _tmp_F4_minIndicesPerTask = (_tmp_3)->F4_minIndicesPerTask;
  _tmp_F5_offset_ = &((_tmp_3)->F5_offset);
  _tmp_F5_offset_x1 = *(*(_tmp_F5_offset_) + INT64(0));
  _tmp_F5_offset_x2 = *(*(_tmp_F5_offset_) + INT64(1));
  call_tmp = sizeof(chpl__ic_these_DefaultRectangularDom_2_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(32), _ln, _fn);
  _ic_ = ((_ic_these_DefaultRectangularDom_2_int64_t_F)(cast_tmp));
  ((object)(_ic_))->chpl__cid = chpl__cid__ic_these_DefaultRectangularDom_2_int64_t_F;
  (_ic_)->more = INT64(1);
  (_ic_)->F0_this = _tmp_F0_this;
  *(T7 + INT64(0)) = _tmp_F1_followThis_x1;
  *(T7 + INT64(1)) = _tmp_F1_followThis_x2;
  *((_ic_)->F1_followThis + INT64(0)) = *(T7 + INT64(0));
  *((_ic_)->F1_followThis + INT64(1)) = *(T7 + INT64(1));
  (_ic_)->F2_tasksPerLocale = _tmp_F2_tasksPerLocale;
  (_ic_)->F3_ignoreRunning = _tmp_F3_ignoreRunning;
  (_ic_)->F4_minIndicesPerTask = _tmp_F4_minIndicesPerTask;
  *(T8 + INT64(0)) = _tmp_F5_offset_x1;
  *(T8 + INT64(1)) = _tmp_F5_offset_x2;
  *((_ic_)->F5_offset + INT64(0)) = *(T8 + INT64(0));
  *((_ic_)->F5_offset + INT64(1)) = *(T8 + INT64(1));
  (this8)->F6__iterator = _ic_;
  T9 = &((this8)->F6__iterator);
  followThis_ = &((*(T9))->F1_followThis);
  followThis_x1 = *(*(followThis_) + INT64(0));
  followThis_x2 = *(*(followThis_) + INT64(1));
  *(T10 + INT64(0)) = followThis_x1;
  *(T10 + INT64(1)) = followThis_x2;
  *((this8)->F8__formal_tmp_followThis + INT64(0)) = *(T10 + INT64(0));
  *((this8)->F8__formal_tmp_followThis + INT64(1)) = *(T10 + INT64(1));
  (&this10)->_low = INT64(0);
  (&this10)->_high = INT64(0);
  (&this10)->_stride = INT64(0);
  (&this10)->_alignment = INT64(0);
  (&this10)->_aligned = false;
  (&this10)->_low = INT64(1);
  (&this10)->_high = INT64(0);
  (&this10)->_stride = INT64(1);
  (&this10)->_alignment = INT64(0);
  (&this10)->_aligned = false;
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this10, _ln, _fn);
  (&this11)->_low = INT64(0);
  (&this11)->_high = INT64(0);
  (&this11)->_stride = INT64(0);
  (&this11)->_alignment = INT64(0);
  (&this11)->_aligned = false;
  (&this11)->_low = INT64(1);
  (&this11)->_high = INT64(0);
  (&this11)->_stride = INT64(1);
  (&this11)->_alignment = INT64(0);
  (&this11)->_aligned = false;
  wrap_call_tmp2 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this11, _ln, _fn);
  *(T11 + INT64(0)) = wrap_call_tmp;
  *(T11 + INT64(1)) = wrap_call_tmp2;
  *((this8)->F9_block + INT64(0)) = *(T11 + INT64(0));
  *((this8)->F9_block + INT64(1)) = *(T11 + INT64(1));
  T12 = &((this8)->F9_block);
  call_tmp2 = (*(T12) + INT64(0));
  T13 = &((this8)->F6__iterator);
  this12 = (*(T13))->F0_this;
  _this_tmp_ = &((this12)->ranges);
  call_tmp3 = (*(_this_tmp_) + INT64(0));
  ret3 = (call_tmp3)->_low;
  T14 = &((this8)->F8__formal_tmp_followThis);
  call_tmp4 = (*(T14) + INT64(0));
  ret4 = (call_tmp4)->_low;
  call_tmp5 = (ret3 + ret4);
  T15 = &((this8)->F6__iterator);
  this13 = (*(T15))->F0_this;
  _this_tmp_2 = &((this13)->ranges);
  call_tmp6 = (*(_this_tmp_2) + INT64(0));
  ret5 = (call_tmp6)->_low;
  T16 = &((this8)->F8__formal_tmp_followThis);
  call_tmp7 = (*(T16) + INT64(0));
  ret6 = (call_tmp7)->_high;
  call_tmp8 = (ret5 + ret6);
  ret_to_arg_ref_tmp_2 = &call_tmp9;
  _build_range(call_tmp5, call_tmp8, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp2) = call_tmp9;
  T17 = &((this8)->F9_block);
  call_tmp10 = (*(T17) + INT64(1));
  T18 = &((this8)->F6__iterator);
  this14 = (*(T18))->F0_this;
  _this_tmp_3 = &((this14)->ranges);
  call_tmp11 = (*(_this_tmp_3) + INT64(1));
  ret7 = (call_tmp11)->_low;
  T19 = &((this8)->F8__formal_tmp_followThis);
  call_tmp12 = (*(T19) + INT64(1));
  ret8 = (call_tmp12)->_low;
  call_tmp13 = (ret7 + ret8);
  T20 = &((this8)->F6__iterator);
  this15 = (*(T20))->F0_this;
  _this_tmp_4 = &((this15)->ranges);
  call_tmp14 = (*(_this_tmp_4) + INT64(1));
  ret9 = (call_tmp14)->_low;
  T21 = &((this8)->F8__formal_tmp_followThis);
  call_tmp15 = (*(T21) + INT64(1));
  ret10 = (call_tmp15)->_high;
  call_tmp16 = (ret9 + ret10);
  ret_to_arg_ref_tmp_3 = &call_tmp17;
  _build_range(call_tmp13, call_tmp16, ret_to_arg_ref_tmp_3, _ln, _fn);
  *(call_tmp10) = call_tmp17;
  T22 = &((this8)->F6__iterator);
  this16 = (*(T22))->F0_this;
  _tmp_4 = &((this8)->F9_block);
  _tmp_x13 = *(*(_tmp_4) + INT64(0));
  _tmp_x23 = *(*(_tmp_4) + INT64(1));
  call_tmp18 = sizeof(chpl__ic_these_help_DefaultRectangularDom_2_int64_t_F_object);
  cast_tmp2 = chpl_here_alloc(call_tmp18, INT16(31), _ln, _fn);
  _ic_2 = ((_ic_these_help_DefaultRectangularDom_2_int64_t_F)(cast_tmp2));
  ((object)(_ic_2))->chpl__cid = chpl__cid__ic_these_help_DefaultRectangularDom_2_int64_t_F;
  (_ic_2)->more = INT64(1);
  (_ic_2)->F0_this = this16;
  *(T23 + INT64(0)) = _tmp_x13;
  *(T23 + INT64(1)) = _tmp_x23;
  *((_ic_2)->F1_block + INT64(0)) = *(T23 + INT64(0));
  *((_ic_2)->F1_block + INT64(1)) = *(T23 + INT64(1));
  (this8)->F10__iterator = _ic_2;
  T24 = &((this8)->F10__iterator);
  block_ = &((*(T24))->F1_block);
  block_x1 = *(*(block_) + INT64(0));
  call_tmp19 = sizeof(chpl__ic_these__ref_range_int64_t_bounded_F_object);
  cast_tmp3 = chpl_here_alloc(call_tmp19, INT16(9), _ln, _fn);
  _ic_3 = ((_ic_these__ref_range_int64_t_bounded_F)(cast_tmp3));
  ((object)(_ic_3))->chpl__cid = chpl__cid__ic_these__ref_range_int64_t_bounded_F;
  (_ic_3)->more = INT64(1);
  (_ic_3)->F0_this = block_x1;
  (this8)->F11__iterator = _ic_3;
  T25 = &((this8)->F11__iterator);
  this17 = &((*(T25))->F0_this);
  ret11 = (this17)->_low;
  (this8)->F13_const_tmp = ret11;
  T26 = &((this8)->F11__iterator);
  this18 = &((*(T26))->F0_this);
  ret12 = (this18)->_high;
  (this8)->F14_end = ret12;
  for (T41 = (this8)->F13_const_tmp,(this8)->F12_i = T41; (T42 = (this8)->F12_i,T43 = (this8)->F14_end,(T42 <= T43)); T44 = (this8)->F12_i,T44 += INT64(1),(this8)->F12_i = T44) {
    T27 = (this8)->F12_i;
    (this8)->F15_i = T27;
    T28 = &((this8)->F10__iterator);
    block_2 = &((*(T28))->F1_block);
    block_x2 = *(*(block_2) + INT64(1));
    call_tmp20 = sizeof(chpl__ic_these__ref_range_int64_t_bounded_F_object);
    cast_tmp4 = chpl_here_alloc(call_tmp20, INT16(9), _ln, _fn);
    _ic_4 = ((_ic_these__ref_range_int64_t_bounded_F)(cast_tmp4));
    ((object)(_ic_4))->chpl__cid = chpl__cid__ic_these__ref_range_int64_t_bounded_F;
    (_ic_4)->more = INT64(1);
    (_ic_4)->F0_this = block_x2;
    (this8)->F16__iterator = _ic_4;
    T29 = &((this8)->F16__iterator);
    this19 = &((*(T29))->F0_this);
    ret13 = (this19)->_low;
    (this8)->F18_const_tmp = ret13;
    T30 = &((this8)->F16__iterator);
    this20 = &((*(T30))->F0_this);
    ret14 = (this20)->_high;
    (this8)->F19_end = ret14;
    for (T36 = (this8)->F18_const_tmp,(this8)->F17_i = T36; (T37 = (this8)->F17_i,T38 = (this8)->F19_end,(T37 <= T38)); T39 = (this8)->F17_i,T39 += INT64(1),(this8)->F17_i = T39) {
      T31 = (this8)->F15_i;
      T32 = (this8)->F17_i;
      *(this21 + INT64(0)) = T31;
      *(this21 + INT64(1)) = T32;
      *((this8)->F20_call_tmp + INT64(0)) = *(this21 + INT64(0));
      *((this8)->F20_call_tmp + INT64(1)) = *(this21 + INT64(1));
      _tmp_5 = &((this8)->F20_call_tmp);
      _tmp_x14 = *(*(_tmp_5) + INT64(0));
      _tmp_x24 = *(*(_tmp_5) + INT64(1));
      *(T33 + INT64(0)) = _tmp_x14;
      *(T33 + INT64(1)) = _tmp_x24;
      *((this8)->F21__yieldedIndex + INT64(0)) = *(T33 + INT64(0));
      *((this8)->F21__yieldedIndex + INT64(1)) = *(T33 + INT64(1));
      _tmp_6 = &((this8)->F21__yieldedIndex);
      _tmp_x15 = *(*(_tmp_6) + INT64(0));
      _tmp_x25 = *(*(_tmp_6) + INT64(1));
      *(T34 + INT64(0)) = _tmp_x15;
      *(T34 + INT64(1)) = _tmp_x25;
      *((this8)->F22__yieldedIndex + INT64(0)) = *(T34 + INT64(0));
      *((this8)->F22__yieldedIndex + INT64(1)) = *(T34 + INT64(1));
      T35 = (this8)->F0_this;
      _tmp_7 = &((this8)->F22__yieldedIndex);
      _tmp_x16 = *(*(_tmp_7) + INT64(0));
      _tmp_x26 = *(*(_tmp_7) + INT64(1));
      sum = INT64(0);
      ret_ = &((T35)->blk);
      ret_x1 = *(*(ret_) + INT64(0));
      call_tmp21 = (_tmp_x16 * ret_x1);
      sum += call_tmp21;
      ret_2 = &((T35)->blk);
      ret_x2 = *(*(ret_2) + INT64(1));
      call_tmp22 = (_tmp_x26 * ret_x2);
      sum += call_tmp22;
      ret15 = (T35)->shiftedData;
      coerce_tmp = ret15;
      call_tmp23 = (coerce_tmp + sum);
      (this8)->value = call_tmp23;
      (this8)->more = INT64(2);
      goto _end;
      _jump_2:;
    }
    T40 = (this8)->F16__iterator;
    call_tmp24 = ((void*)(T40));
    chpl_here_free(call_tmp24, _ln, _fn);
  }
  T45 = (this8)->F11__iterator;
  call_tmp25 = ((void*)(T45));
  chpl_here_free(call_tmp25, _ln, _fn);
  T46 = (this8)->F10__iterator;
  call_tmp26 = ((void*)(T46));
  chpl_here_free(call_tmp26, _ln, _fn);
  T47 = (this8)->F6__iterator;
  call_tmp27 = ((void*)(T47));
  chpl_here_free(call_tmp27, _ln, _fn);
  _tmp_8 = &((this8)->F7_call_tmp);
  (this8)->more = INT64(0);
  _end:;
  return;
}

/* DefaultRectangular.chpl:652 */
static void computeFactoredOffs(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  int64_t ret;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  call_tmp = &((this8)->factoredOffs);
  *(call_tmp) = INT64(0);
  call_tmp2 = &((this8)->factoredOffs);
  ret = (this8)->factoredOffs;
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_2 = &((this8)->off);
  ret_x12 = *(*(ret_2) + INT64(0));
  call_tmp3 = (ret_x1 * ret_x12);
  call_tmp4 = (ret + call_tmp3);
  *(call_tmp2) = call_tmp4;
  return;
}

/* DefaultRectangular.chpl:652 */
static void computeFactoredOffs2(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  int64_t ret;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  call_tmp = &((this8)->factoredOffs);
  *(call_tmp) = INT64(0);
  call_tmp2 = &((this8)->factoredOffs);
  ret = (this8)->factoredOffs;
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_2 = &((this8)->off);
  ret_x12 = *(*(ret_2) + INT64(0));
  call_tmp3 = (ret_x1 * ret_x12);
  call_tmp4 = (ret + call_tmp3);
  *(call_tmp2) = call_tmp4;
  return;
}

/* DefaultRectangular.chpl:652 */
static void computeFactoredOffs3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  int64_t ret;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  call_tmp = &((this8)->factoredOffs);
  *(call_tmp) = INT64(0);
  call_tmp2 = &((this8)->factoredOffs);
  ret = (this8)->factoredOffs;
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_2 = &((this8)->off);
  ret_x12 = *(*(ret_2) + INT64(0));
  call_tmp3 = (ret_x1 * ret_x12);
  call_tmp4 = (ret + call_tmp3);
  *(call_tmp2) = call_tmp4;
  return;
}

/* DefaultRectangular.chpl:652 */
static void computeFactoredOffs4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  int64_t ret;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  call_tmp = &((this8)->factoredOffs);
  *(call_tmp) = INT64(0);
  call_tmp2 = &((this8)->factoredOffs);
  ret = (this8)->factoredOffs;
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_2 = &((this8)->off);
  ret_x12 = *(*(ret_2) + INT64(0));
  call_tmp3 = (ret_x1 * ret_x12);
  call_tmp4 = (ret + call_tmp3);
  *(call_tmp2) = call_tmp4;
  return;
}

/* DefaultRectangular.chpl:652 */
static void computeFactoredOffs5(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  int64_t ret;
  int64_t ret_x1;
  _ref__tuple_2_star_int64_t ret_ = NULL;
  int64_t ret_x12;
  _ref__tuple_2_star_int64_t ret_2 = NULL;
  int64_t call_tmp3;
  int64_t call_tmp4;
  _ref_int64_t call_tmp5 = NULL;
  int64_t ret2;
  int64_t ret_x2;
  _ref__tuple_2_star_int64_t ret_3 = NULL;
  int64_t ret_x22;
  _ref__tuple_2_star_int64_t ret_4 = NULL;
  int64_t call_tmp6;
  int64_t call_tmp7;
  call_tmp = &((this8)->factoredOffs);
  *(call_tmp) = INT64(0);
  call_tmp2 = &((this8)->factoredOffs);
  ret = (this8)->factoredOffs;
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_2 = &((this8)->off);
  ret_x12 = *(*(ret_2) + INT64(0));
  call_tmp3 = (ret_x1 * ret_x12);
  call_tmp4 = (ret + call_tmp3);
  *(call_tmp2) = call_tmp4;
  call_tmp5 = &((this8)->factoredOffs);
  ret2 = (this8)->factoredOffs;
  ret_3 = &((this8)->blk);
  ret_x2 = *(*(ret_3) + INT64(1));
  ret_4 = &((this8)->off);
  ret_x22 = *(*(ret_4) + INT64(1));
  call_tmp6 = (ret_x2 * ret_x22);
  call_tmp7 = (ret2 + call_tmp6);
  *(call_tmp5) = call_tmp7;
  return;
}

/* DefaultRectangular.chpl:675 */
static void initialize8(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  chpl_bool ret;
  chpl_bool call_tmp;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  int64_t ret3;
  int64_t ret4;
  _ref_int64_t call_tmp4 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t call_tmp8;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp9;
  _ref__ddata_locale call_tmp10 = NULL;
  locale _formal_type_tmp_ = NULL;
  _ddata_locale call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
  int64_t call_tmp12;
  chpl_bool call_tmp13;
  _ref__ddata_locale call_tmp14 = NULL;
  _ddata_locale ret8 = NULL;
  int64_t ret9;
  int64_t ret10;
  int64_t call_tmp15;
  _ddata_locale call_tmp16 = NULL;
  ret = (this8)->noinit_data;
  call_tmp = (ret == true);
  if (call_tmp) {
    goto _end_initialize;
  }
  _this_tmp_ = &((this8)->off);
  call_tmp2 = (*(_this_tmp_) + INT64(0));
  ret2 = (this8)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp3;
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = (&call_tmp3)->_low;
  ret3 = ret4;
  goto _end_alignedLow;
  _end_alignedLow:;
  *(call_tmp2) = ret3;
  _this_tmp_2 = &((this8)->str);
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
  ret5 = (this8)->dom;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  dsiDim(ret5, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp4) = INT64(1);
  _this_tmp_3 = &((this8)->blk);
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
  *(call_tmp6) = INT64(1);
  computeFactoredOffs(this8, _ln, _fn);
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret6 = (this8)->dom;
  ret_to_arg_ref_tmp_3 = &call_tmp7;
  dsiDim(ret6, ret_to_arg_ref_tmp_3, _ln, _fn);
  _ref_tmp_ = &call_tmp7;
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
  call_tmp9 = (ret_x1 * call_tmp8);
  call_tmp10 = &((this8)->data);
  call_tmp11 = ((_ddata_locale)(nil));
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(locale), _ln, _fn);
  init_elts(call_tmp11, call_tmp9, _ln, _fn);
  *(call_tmp10) = call_tmp11;
  ret7 = (this8)->dom;
  call_tmp12 = dsiNumIndices(ret7, _ln, _fn);
  call_tmp13 = (call_tmp12 > INT64(0));
  if (call_tmp13) {
    call_tmp14 = &((this8)->shiftedData);
    ret8 = (this8)->data;
    ret9 = (this8)->origin;
    ret10 = (this8)->factoredOffs;
    call_tmp15 = (ret9 - ret10);
    call_tmp16 = ((_ddata_locale)(nil));
    call_tmp16 = (ret8 + call_tmp15);
    *(call_tmp14) = call_tmp16;
  }
  _end_initialize:;
  return;
}

/* DefaultRectangular.chpl:675 */
static void initialize9(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  chpl_bool ret;
  chpl_bool call_tmp;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  int64_t ret3;
  int64_t ret4;
  _ref_int64_t call_tmp4 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t call_tmp8;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp9;
  _ref__ddata_localesSignal call_tmp10 = NULL;
  localesSignal _formal_type_tmp_ = NULL;
  _ddata_localesSignal call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
  int64_t call_tmp12;
  chpl_bool call_tmp13;
  _ref__ddata_localesSignal call_tmp14 = NULL;
  _ddata_localesSignal ret8 = NULL;
  int64_t ret9;
  int64_t ret10;
  int64_t call_tmp15;
  _ddata_localesSignal call_tmp16 = NULL;
  ret = (this8)->noinit_data;
  call_tmp = (ret == true);
  if (call_tmp) {
    goto _end_initialize;
  }
  _this_tmp_ = &((this8)->off);
  call_tmp2 = (*(_this_tmp_) + INT64(0));
  ret2 = (this8)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp3;
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = (&call_tmp3)->_low;
  ret3 = ret4;
  goto _end_alignedLow;
  _end_alignedLow:;
  *(call_tmp2) = ret3;
  _this_tmp_2 = &((this8)->str);
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
  ret5 = (this8)->dom;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  dsiDim(ret5, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp4) = INT64(1);
  _this_tmp_3 = &((this8)->blk);
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
  *(call_tmp6) = INT64(1);
  computeFactoredOffs2(this8, _ln, _fn);
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret6 = (this8)->dom;
  ret_to_arg_ref_tmp_3 = &call_tmp7;
  dsiDim(ret6, ret_to_arg_ref_tmp_3, _ln, _fn);
  _ref_tmp_ = &call_tmp7;
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
  call_tmp9 = (ret_x1 * call_tmp8);
  call_tmp10 = &((this8)->data);
  call_tmp11 = ((_ddata_localesSignal)(nil));
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(localesSignal), _ln, _fn);
  init_elts2(call_tmp11, call_tmp9, _ln, _fn);
  *(call_tmp10) = call_tmp11;
  ret7 = (this8)->dom;
  call_tmp12 = dsiNumIndices(ret7, _ln, _fn);
  call_tmp13 = (call_tmp12 > INT64(0));
  if (call_tmp13) {
    call_tmp14 = &((this8)->shiftedData);
    ret8 = (this8)->data;
    ret9 = (this8)->origin;
    ret10 = (this8)->factoredOffs;
    call_tmp15 = (ret9 - ret10);
    call_tmp16 = ((_ddata_localesSignal)(nil));
    call_tmp16 = (ret8 + call_tmp15);
    *(call_tmp14) = call_tmp16;
  }
  _end_initialize:;
  return;
}

/* DefaultRectangular.chpl:675 */
static void initialize10(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  chpl_bool ret;
  chpl_bool call_tmp;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  int64_t ret3;
  int64_t ret4;
  _ref_int64_t call_tmp4 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t call_tmp8;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp9;
  _ref__ddata_chpl_TableEntry_chpl_taskID_t call_tmp10 = NULL;
  chpl_TableEntry_chpl_taskID_t _formal_type_tmp_;
  _ddata_chpl_TableEntry_chpl_taskID_t call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
  int64_t call_tmp12;
  chpl_bool call_tmp13;
  _ref__ddata_chpl_TableEntry_chpl_taskID_t call_tmp14 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t ret8 = NULL;
  int64_t ret9;
  int64_t ret10;
  int64_t call_tmp15;
  _ddata_chpl_TableEntry_chpl_taskID_t call_tmp16 = NULL;
  ret = (this8)->noinit_data;
  call_tmp = (ret == true);
  if (call_tmp) {
    goto _end_initialize;
  }
  _this_tmp_ = &((this8)->off);
  call_tmp2 = (*(_this_tmp_) + INT64(0));
  ret2 = (this8)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp3;
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = (&call_tmp3)->_low;
  ret3 = ret4;
  goto _end_alignedLow;
  _end_alignedLow:;
  *(call_tmp2) = ret3;
  _this_tmp_2 = &((this8)->str);
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
  ret5 = (this8)->dom;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  dsiDim(ret5, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp4) = INT64(1);
  _this_tmp_3 = &((this8)->blk);
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
  *(call_tmp6) = INT64(1);
  computeFactoredOffs3(this8, _ln, _fn);
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret6 = (this8)->dom;
  ret_to_arg_ref_tmp_3 = &call_tmp7;
  dsiDim(ret6, ret_to_arg_ref_tmp_3, _ln, _fn);
  _ref_tmp_ = &call_tmp7;
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
  call_tmp9 = (ret_x1 * call_tmp8);
  call_tmp10 = &((this8)->data);
  call_tmp11 = ((_ddata_chpl_TableEntry_chpl_taskID_t)(nil));
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(chpl_TableEntry_chpl_taskID_t), _ln, _fn);
  init_elts3(call_tmp11, call_tmp9, _ln, _fn);
  *(call_tmp10) = call_tmp11;
  ret7 = (this8)->dom;
  call_tmp12 = dsiNumIndices(ret7, _ln, _fn);
  call_tmp13 = (call_tmp12 > INT64(0));
  if (call_tmp13) {
    call_tmp14 = &((this8)->shiftedData);
    ret8 = (this8)->data;
    ret9 = (this8)->origin;
    ret10 = (this8)->factoredOffs;
    call_tmp15 = (ret9 - ret10);
    call_tmp16 = ((_ddata_chpl_TableEntry_chpl_taskID_t)(nil));
    call_tmp16 = (ret8 + call_tmp15);
    *(call_tmp14) = call_tmp16;
  }
  _end_initialize:;
  return;
}

/* DefaultRectangular.chpl:675 */
static void initialize11(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  chpl_bool ret;
  chpl_bool call_tmp;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  int64_t ret3;
  int64_t ret4;
  _ref_int64_t call_tmp4 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t call_tmp8;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp9;
  _ref__ddata_chpldev_Task call_tmp10 = NULL;
  chpldev_Task _formal_type_tmp_;
  _ddata_chpldev_Task call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
  int64_t call_tmp12;
  chpl_bool call_tmp13;
  _ref__ddata_chpldev_Task call_tmp14 = NULL;
  _ddata_chpldev_Task ret8 = NULL;
  int64_t ret9;
  int64_t ret10;
  int64_t call_tmp15;
  _ddata_chpldev_Task call_tmp16 = NULL;
  ret = (this8)->noinit_data;
  call_tmp = (ret == true);
  if (call_tmp) {
    goto _end_initialize;
  }
  _this_tmp_ = &((this8)->off);
  call_tmp2 = (*(_this_tmp_) + INT64(0));
  ret2 = (this8)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp3;
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = (&call_tmp3)->_low;
  ret3 = ret4;
  goto _end_alignedLow;
  _end_alignedLow:;
  *(call_tmp2) = ret3;
  _this_tmp_2 = &((this8)->str);
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
  ret5 = (this8)->dom;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  dsiDim(ret5, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp4) = INT64(1);
  _this_tmp_3 = &((this8)->blk);
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
  *(call_tmp6) = INT64(1);
  computeFactoredOffs4(this8, _ln, _fn);
  ret_ = &((this8)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret6 = (this8)->dom;
  ret_to_arg_ref_tmp_3 = &call_tmp7;
  dsiDim(ret6, ret_to_arg_ref_tmp_3, _ln, _fn);
  _ref_tmp_ = &call_tmp7;
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
  call_tmp9 = (ret_x1 * call_tmp8);
  call_tmp10 = &((this8)->data);
  call_tmp11 = ((_ddata_chpldev_Task)(nil));
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(chpldev_Task), _ln, _fn);
  init_elts4(call_tmp11, call_tmp9, _ln, _fn);
  *(call_tmp10) = call_tmp11;
  ret7 = (this8)->dom;
  call_tmp12 = dsiNumIndices(ret7, _ln, _fn);
  call_tmp13 = (call_tmp12 > INT64(0));
  if (call_tmp13) {
    call_tmp14 = &((this8)->shiftedData);
    ret8 = (this8)->data;
    ret9 = (this8)->origin;
    ret10 = (this8)->factoredOffs;
    call_tmp15 = (ret9 - ret10);
    call_tmp16 = ((_ddata_chpldev_Task)(nil));
    call_tmp16 = (ret8 + call_tmp15);
    *(call_tmp14) = call_tmp16;
  }
  _end_initialize:;
  return;
}

/* DefaultRectangular.chpl:675 */
static void initialize12(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  chpl_bool ret;
  chpl_bool call_tmp;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_2_star_int64_t _this_tmp_ = NULL;
  DefaultRectangularDom_2_int64_t_F ret2 = NULL;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  int64_t ret3;
  int64_t ret4;
  _ref_int64_t call_tmp4 = NULL;
  _ref__tuple_2_star_int64_t _this_tmp_2 = NULL;
  DefaultRectangularDom_2_int64_t_F ret5 = NULL;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  _ref__tuple_2_star_int64_t _this_tmp_3 = NULL;
  DefaultRectangularDom_2_int64_t_F ret6 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t ret7;
  int64_t ret8;
  _ref_int64_t call_tmp8 = NULL;
  _ref__tuple_2_star_int64_t _this_tmp_4 = NULL;
  DefaultRectangularDom_2_int64_t_F ret9 = NULL;
  range_int64_t_bounded_F call_tmp9;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_4 = NULL;
  _ref_int64_t call_tmp10 = NULL;
  _ref__tuple_2_star_int64_t _this_tmp_5 = NULL;
  _ref_int64_t call_tmp11 = NULL;
  _ref__tuple_2_star_int64_t _this_tmp_6 = NULL;
  int64_t ret_x2;
  _ref__tuple_2_star_int64_t ret_ = NULL;
  DefaultRectangularDom_2_int64_t_F ret10 = NULL;
  range_int64_t_bounded_F call_tmp12;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  int64_t call_tmp13;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp14;
  int64_t ret_x1;
  _ref__tuple_2_star_int64_t ret_2 = NULL;
  DefaultRectangularDom_2_int64_t_F ret11 = NULL;
  range_int64_t_bounded_F call_tmp15;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
  int64_t call_tmp16;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp17;
  _ref__ddata__real64 call_tmp18 = NULL;
  _real64 _formal_type_tmp_;
  _ddata__real64 call_tmp19 = NULL;
  DefaultRectangularDom_2_int64_t_F ret12 = NULL;
  int64_t call_tmp20;
  chpl_bool call_tmp21;
  _ref__ddata__real64 call_tmp22 = NULL;
  _ddata__real64 ret13 = NULL;
  int64_t ret14;
  int64_t ret15;
  int64_t call_tmp23;
  _ddata__real64 call_tmp24 = NULL;
  ret = (this8)->noinit_data;
  call_tmp = (ret == true);
  if (call_tmp) {
    goto _end_initialize;
  }
  _this_tmp_ = &((this8)->off);
  call_tmp2 = (*(_this_tmp_) + INT64(0));
  ret2 = (this8)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp3;
  dsiDim2(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = (&call_tmp3)->_low;
  ret3 = ret4;
  goto _end_alignedLow;
  _end_alignedLow:;
  *(call_tmp2) = ret3;
  _this_tmp_2 = &((this8)->str);
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
  ret5 = (this8)->dom;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  dsiDim2(ret5, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp4) = INT64(1);
  _this_tmp_3 = &((this8)->off);
  call_tmp6 = (*(_this_tmp_3) + INT64(1));
  ret6 = (this8)->dom;
  ret_to_arg_ref_tmp_3 = &call_tmp7;
  dsiDim3(ret6, ret_to_arg_ref_tmp_3, _ln, _fn);
  ret8 = (&call_tmp7)->_low;
  ret7 = ret8;
  goto _end_alignedLow2;
  _end_alignedLow2:;
  *(call_tmp6) = ret7;
  _this_tmp_4 = &((this8)->str);
  call_tmp8 = (*(_this_tmp_4) + INT64(1));
  ret9 = (this8)->dom;
  ret_to_arg_ref_tmp_4 = &call_tmp9;
  dsiDim3(ret9, ret_to_arg_ref_tmp_4, _ln, _fn);
  *(call_tmp8) = INT64(1);
  _this_tmp_5 = &((this8)->blk);
  call_tmp10 = (*(_this_tmp_5) + INT64(1));
  *(call_tmp10) = INT64(1);
  _this_tmp_6 = &((this8)->blk);
  call_tmp11 = (*(_this_tmp_6) + INT64(0));
  ret_ = &((this8)->blk);
  ret_x2 = *(*(ret_) + INT64(1));
  ret10 = (this8)->dom;
  ret_to_arg_ref_tmp_5 = &call_tmp12;
  dsiDim3(ret10, ret_to_arg_ref_tmp_5, _ln, _fn);
  _ref_tmp_ = &call_tmp12;
  call_tmp13 = length(_ref_tmp_, _ln, _fn);
  call_tmp14 = (ret_x2 * call_tmp13);
  *(call_tmp11) = call_tmp14;
  computeFactoredOffs5(this8, _ln, _fn);
  ret_2 = &((this8)->blk);
  ret_x1 = *(*(ret_2) + INT64(0));
  ret11 = (this8)->dom;
  ret_to_arg_ref_tmp_6 = &call_tmp15;
  dsiDim2(ret11, ret_to_arg_ref_tmp_6, _ln, _fn);
  _ref_tmp_2 = &call_tmp15;
  call_tmp16 = length(_ref_tmp_2, _ln, _fn);
  call_tmp17 = (ret_x1 * call_tmp16);
  call_tmp18 = &((this8)->data);
  call_tmp19 = ((_ddata__real64)(nil));
  call_tmp19 = chpl_array_alloc(call_tmp17, sizeof(_real64), _ln, _fn);
  init_elts5(call_tmp19, call_tmp17, _ln, _fn);
  *(call_tmp18) = call_tmp19;
  ret12 = (this8)->dom;
  call_tmp20 = dsiNumIndices2(ret12, _ln, _fn);
  call_tmp21 = (call_tmp20 > INT64(0));
  if (call_tmp21) {
    call_tmp22 = &((this8)->shiftedData);
    ret13 = (this8)->data;
    ret14 = (this8)->origin;
    ret15 = (this8)->factoredOffs;
    call_tmp23 = (ret14 - ret15);
    call_tmp24 = ((_ddata__real64)(nil));
    call_tmp24 = (ret13 + call_tmp23);
    *(call_tmp22) = call_tmp24;
  }
  _end_initialize:;
  return;
}

/* DefaultRectangular.chpl:835 */
static void dsiReallocate2(DefaultRectangularArr_locale_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F copy = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_locale_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_locale call_tmp3 = NULL;
  _ddata_locale call_tmp4 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp3 = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F this15 = NULL;
  range_int64_t_bounded_F ret_x12;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret5;
  int64_t end;
  int64_t ret6;
  int64_t sum;
  int64_t ret_x13;
  _ref__tuple_1_star_int64_t ret_3 = NULL;
  int64_t call_tmp6;
  _ddata_locale ret7 = NULL;
  _ddata_locale coerce_tmp2 = NULL;
  _ref_locale call_tmp7 = NULL;
  int64_t sum2;
  int64_t ret_x14;
  _ref__tuple_1_star_int64_t ret_4 = NULL;
  int64_t call_tmp8;
  _ddata_locale ret8 = NULL;
  _ddata_locale coerce_tmp3 = NULL;
  locale ret9 = NULL;
  _ref_locale call_tmp9 = NULL;
  _ref__tuple_1_star_int64_t call_tmp10 = NULL;
  int64_t ret_x15;
  _ref__tuple_1_star_int64_t ret_5 = NULL;
  _tuple_1_star_int64_t coerce_tmp4;
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
  int64_t ret_x16;
  _ref__tuple_1_star_int64_t ret_6 = NULL;
  _tuple_1_star_int64_t coerce_tmp5;
  _ref__tuple_1_star_int64_t call_tmp12 = NULL;
  int64_t ret_x17;
  _ref__tuple_1_star_int64_t ret_7 = NULL;
  _tuple_1_star_int64_t coerce_tmp6;
  _ref_int64_t call_tmp13 = NULL;
  int64_t ret10;
  _ref_int64_t call_tmp14 = NULL;
  int64_t ret11;
  _ref__ddata_locale call_tmp15 = NULL;
  _ddata_locale ret12 = NULL;
  int64_t call_tmp16;
  chpl_bool call_tmp17;
  _ref__ddata_locale call_tmp18 = NULL;
  _ddata_locale ret13 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_opaque call_tmp20;
  ret = d;
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(8), _ln, _fn);
  this9 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret2;
  wrap_call_tmp = _construct_atomic_int64(ret2, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = ret;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_locale)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_locale)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, ret, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  copy = wrap_call_tmp3;
  ret3 = (this8)->dom;
  coerce_tmp = ret3;
  ret_ = &((coerce_tmp)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_to_arg_ref_tmp_ = &call_tmp5;
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = call_tmp5;
  ret_to_arg_ref_tmp_2 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  this15 = ret4;
  ret_2 = &((this15)->ranges);
  ret_x12 = *(*(ret_2) + INT64(0));
  _ic__F0_this = ret_x12;
  ret5 = (&_ic__F0_this)->_low;
  ret6 = (&_ic__F0_this)->_high;
  end = ret6;
  ret_3 = &((copy)->blk);
  ret_x13 = *(*(ret_3) + INT64(0));
  ret7 = (copy)->shiftedData;
  coerce_tmp2 = ret7;
  ret_4 = &((this8)->blk);
  ret_x14 = *(*(ret_4) + INT64(0));
  ret8 = (this8)->shiftedData;
  coerce_tmp3 = ret8;
  for (i = ret5; ((i <= end)); i += INT64(1)) {
    sum = INT64(0);
    call_tmp6 = (i * ret_x13);
    sum += call_tmp6;
    call_tmp7 = (coerce_tmp2 + sum);
    sum2 = INT64(0);
    call_tmp8 = (i * ret_x14);
    sum2 += call_tmp8;
    call_tmp9 = (coerce_tmp3 + sum2);
    ret9 = *(call_tmp9);
    *(call_tmp7) = ret9;
  }
  call_tmp10 = &((this8)->off);
  ret_5 = &((copy)->off);
  ret_x15 = *(*(ret_5) + INT64(0));
  *(coerce_tmp4 + INT64(0)) = ret_x15;
  *(*(call_tmp10) + INT64(0)) = *(coerce_tmp4 + INT64(0));
  call_tmp11 = &((this8)->blk);
  ret_6 = &((copy)->blk);
  ret_x16 = *(*(ret_6) + INT64(0));
  *(coerce_tmp5 + INT64(0)) = ret_x16;
  *(*(call_tmp11) + INT64(0)) = *(coerce_tmp5 + INT64(0));
  call_tmp12 = &((this8)->str);
  ret_7 = &((copy)->str);
  ret_x17 = *(*(ret_7) + INT64(0));
  *(coerce_tmp6 + INT64(0)) = ret_x17;
  *(*(call_tmp12) + INT64(0)) = *(coerce_tmp6 + INT64(0));
  call_tmp13 = &((this8)->origin);
  ret10 = (copy)->origin;
  *(call_tmp13) = ret10;
  call_tmp14 = &((this8)->factoredOffs);
  ret11 = (copy)->factoredOffs;
  *(call_tmp14) = ret11;
  dsiDestroyData2(this8, _ln, _fn);
  call_tmp15 = &((this8)->data);
  ret12 = (copy)->data;
  *(call_tmp15) = ret12;
  call_tmp16 = numIndices(d, _ln, _fn);
  call_tmp17 = (call_tmp16 > INT64(0));
  if (call_tmp17) {
    call_tmp18 = &((this8)->shiftedData);
    ret13 = (copy)->shiftedData;
    *(call_tmp18) = ret13;
  }
  _parent_destructor_tmp_ = ((BaseArr)(copy));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp19 = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp19);
  call_tmp20 = ((void*)(copy));
  chpl_here_free(call_tmp20, _ln, _fn);
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:835 */
static void dsiReallocate3(DefaultRectangularArr_localesSignal_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F copy = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_localesSignal call_tmp3 = NULL;
  _ddata_localesSignal call_tmp4 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp3 = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F this15 = NULL;
  range_int64_t_bounded_F ret_x12;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret5;
  int64_t end;
  int64_t ret6;
  int64_t sum;
  int64_t ret_x13;
  _ref__tuple_1_star_int64_t ret_3 = NULL;
  int64_t call_tmp6;
  _ddata_localesSignal ret7 = NULL;
  _ddata_localesSignal coerce_tmp2 = NULL;
  _ref_localesSignal call_tmp7 = NULL;
  int64_t sum2;
  int64_t ret_x14;
  _ref__tuple_1_star_int64_t ret_4 = NULL;
  int64_t call_tmp8;
  _ddata_localesSignal ret8 = NULL;
  _ddata_localesSignal coerce_tmp3 = NULL;
  localesSignal ret9 = NULL;
  _ref_localesSignal call_tmp9 = NULL;
  _ref__tuple_1_star_int64_t call_tmp10 = NULL;
  int64_t ret_x15;
  _ref__tuple_1_star_int64_t ret_5 = NULL;
  _tuple_1_star_int64_t coerce_tmp4;
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
  int64_t ret_x16;
  _ref__tuple_1_star_int64_t ret_6 = NULL;
  _tuple_1_star_int64_t coerce_tmp5;
  _ref__tuple_1_star_int64_t call_tmp12 = NULL;
  int64_t ret_x17;
  _ref__tuple_1_star_int64_t ret_7 = NULL;
  _tuple_1_star_int64_t coerce_tmp6;
  _ref_int64_t call_tmp13 = NULL;
  int64_t ret10;
  _ref_int64_t call_tmp14 = NULL;
  int64_t ret11;
  _ref__ddata_localesSignal call_tmp15 = NULL;
  _ddata_localesSignal ret12 = NULL;
  int64_t call_tmp16;
  chpl_bool call_tmp17;
  _ref__ddata_localesSignal call_tmp18 = NULL;
  _ddata_localesSignal ret13 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_opaque call_tmp20;
  ret = d;
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(14), _ln, _fn);
  this9 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret2;
  wrap_call_tmp = _construct_atomic_int64(ret2, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = ret;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_localesSignal)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_localesSignal)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, ret, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  copy = wrap_call_tmp3;
  ret3 = (this8)->dom;
  coerce_tmp = ret3;
  ret_ = &((coerce_tmp)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_to_arg_ref_tmp_ = &call_tmp5;
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = call_tmp5;
  ret_to_arg_ref_tmp_2 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  this15 = ret4;
  ret_2 = &((this15)->ranges);
  ret_x12 = *(*(ret_2) + INT64(0));
  _ic__F0_this = ret_x12;
  ret5 = (&_ic__F0_this)->_low;
  ret6 = (&_ic__F0_this)->_high;
  end = ret6;
  ret_3 = &((copy)->blk);
  ret_x13 = *(*(ret_3) + INT64(0));
  ret7 = (copy)->shiftedData;
  coerce_tmp2 = ret7;
  ret_4 = &((this8)->blk);
  ret_x14 = *(*(ret_4) + INT64(0));
  ret8 = (this8)->shiftedData;
  coerce_tmp3 = ret8;
  for (i = ret5; ((i <= end)); i += INT64(1)) {
    sum = INT64(0);
    call_tmp6 = (i * ret_x13);
    sum += call_tmp6;
    call_tmp7 = (coerce_tmp2 + sum);
    sum2 = INT64(0);
    call_tmp8 = (i * ret_x14);
    sum2 += call_tmp8;
    call_tmp9 = (coerce_tmp3 + sum2);
    ret9 = *(call_tmp9);
    *(call_tmp7) = ret9;
  }
  call_tmp10 = &((this8)->off);
  ret_5 = &((copy)->off);
  ret_x15 = *(*(ret_5) + INT64(0));
  *(coerce_tmp4 + INT64(0)) = ret_x15;
  *(*(call_tmp10) + INT64(0)) = *(coerce_tmp4 + INT64(0));
  call_tmp11 = &((this8)->blk);
  ret_6 = &((copy)->blk);
  ret_x16 = *(*(ret_6) + INT64(0));
  *(coerce_tmp5 + INT64(0)) = ret_x16;
  *(*(call_tmp11) + INT64(0)) = *(coerce_tmp5 + INT64(0));
  call_tmp12 = &((this8)->str);
  ret_7 = &((copy)->str);
  ret_x17 = *(*(ret_7) + INT64(0));
  *(coerce_tmp6 + INT64(0)) = ret_x17;
  *(*(call_tmp12) + INT64(0)) = *(coerce_tmp6 + INT64(0));
  call_tmp13 = &((this8)->origin);
  ret10 = (copy)->origin;
  *(call_tmp13) = ret10;
  call_tmp14 = &((this8)->factoredOffs);
  ret11 = (copy)->factoredOffs;
  *(call_tmp14) = ret11;
  dsiDestroyData3(this8, _ln, _fn);
  call_tmp15 = &((this8)->data);
  ret12 = (copy)->data;
  *(call_tmp15) = ret12;
  call_tmp16 = numIndices(d, _ln, _fn);
  call_tmp17 = (call_tmp16 > INT64(0));
  if (call_tmp17) {
    call_tmp18 = &((this8)->shiftedData);
    ret13 = (copy)->shiftedData;
    *(call_tmp18) = ret13;
  }
  _parent_destructor_tmp_ = ((BaseArr)(copy));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp19 = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp19);
  call_tmp20 = ((void*)(copy));
  chpl_here_free(call_tmp20, _ln, _fn);
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:835 */
static void dsiReallocate4(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F copy = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_chpl_TableEntry_chpl_taskID_t call_tmp3 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t call_tmp4 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F wrap_call_tmp3 = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F this15 = NULL;
  range_int64_t_bounded_F ret_x12;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret5;
  int64_t end;
  int64_t ret6;
  int64_t sum;
  int64_t ret_x13;
  _ref__tuple_1_star_int64_t ret_3 = NULL;
  int64_t call_tmp6;
  _ddata_chpl_TableEntry_chpl_taskID_t ret7 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp2 = NULL;
  _ref_chpl_TableEntry_chpl_taskID_t call_tmp7 = NULL;
  int64_t sum2;
  int64_t ret_x14;
  _ref__tuple_1_star_int64_t ret_4 = NULL;
  int64_t call_tmp8;
  _ddata_chpl_TableEntry_chpl_taskID_t ret8 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp3 = NULL;
  chpl_TableEntry_chpl_taskID_t ret9;
  _ref_chpl_TableEntry_chpl_taskID_t call_tmp9 = NULL;
  chpl_TableEntry_chpl_taskID_t call_tmp10;
  chpl_TableEntry_chpl_taskID_t call_tmp11;
  chpl_TableEntry_chpl_taskID_t call_tmp12;
  _ref__tuple_1_star_int64_t call_tmp13 = NULL;
  int64_t ret_x15;
  _ref__tuple_1_star_int64_t ret_5 = NULL;
  _tuple_1_star_int64_t coerce_tmp4;
  _ref__tuple_1_star_int64_t call_tmp14 = NULL;
  int64_t ret_x16;
  _ref__tuple_1_star_int64_t ret_6 = NULL;
  _tuple_1_star_int64_t coerce_tmp5;
  _ref__tuple_1_star_int64_t call_tmp15 = NULL;
  int64_t ret_x17;
  _ref__tuple_1_star_int64_t ret_7 = NULL;
  _tuple_1_star_int64_t coerce_tmp6;
  _ref_int64_t call_tmp16 = NULL;
  int64_t ret10;
  _ref_int64_t call_tmp17 = NULL;
  int64_t ret11;
  _ref__ddata_chpl_TableEntry_chpl_taskID_t call_tmp18 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t ret12 = NULL;
  int64_t call_tmp19;
  chpl_bool call_tmp20;
  _ref__ddata_chpl_TableEntry_chpl_taskID_t call_tmp21 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t ret13 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp22 = NULL;
  chpl_opaque call_tmp23;
  ret = d;
  call_tmp = sizeof(chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(21), _ln, _fn);
  this9 = ((DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret2;
  wrap_call_tmp = _construct_atomic_int64(ret2, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = ret;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_chpl_TableEntry_chpl_taskID_t)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_chpl_TableEntry_chpl_taskID_t)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr3(&wrap_call_tmp2, call_tmp2, ret, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  copy = wrap_call_tmp3;
  ret3 = (this8)->dom;
  coerce_tmp = ret3;
  ret_ = &((coerce_tmp)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_to_arg_ref_tmp_ = &call_tmp5;
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = call_tmp5;
  ret_to_arg_ref_tmp_2 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  this15 = ret4;
  ret_2 = &((this15)->ranges);
  ret_x12 = *(*(ret_2) + INT64(0));
  _ic__F0_this = ret_x12;
  ret5 = (&_ic__F0_this)->_low;
  ret6 = (&_ic__F0_this)->_high;
  end = ret6;
  ret_3 = &((copy)->blk);
  ret_x13 = *(*(ret_3) + INT64(0));
  ret7 = (copy)->shiftedData;
  coerce_tmp2 = ret7;
  ret_4 = &((this8)->blk);
  ret_x14 = *(*(ret_4) + INT64(0));
  ret8 = (this8)->shiftedData;
  coerce_tmp3 = ret8;
  for (i = ret5; ((i <= end)); i += INT64(1)) {
    sum = INT64(0);
    call_tmp6 = (i * ret_x13);
    sum += call_tmp6;
    call_tmp7 = (coerce_tmp2 + sum);
    sum2 = INT64(0);
    call_tmp8 = (i * ret_x14);
    sum2 += call_tmp8;
    call_tmp9 = (coerce_tmp3 + sum2);
    ret9 = *(call_tmp9);
    call_tmp10 = chpl__initCopy4(&ret9, _ln, _fn);
    call_tmp11 = chpl__initCopy4(&call_tmp10, _ln, _fn);
    call_tmp12 = chpl__initCopy4(&call_tmp11, _ln, _fn);
    chpl___ASSIGN_5(call_tmp7, &call_tmp12, _ln, _fn);
  }
  call_tmp13 = &((this8)->off);
  ret_5 = &((copy)->off);
  ret_x15 = *(*(ret_5) + INT64(0));
  *(coerce_tmp4 + INT64(0)) = ret_x15;
  *(*(call_tmp13) + INT64(0)) = *(coerce_tmp4 + INT64(0));
  call_tmp14 = &((this8)->blk);
  ret_6 = &((copy)->blk);
  ret_x16 = *(*(ret_6) + INT64(0));
  *(coerce_tmp5 + INT64(0)) = ret_x16;
  *(*(call_tmp14) + INT64(0)) = *(coerce_tmp5 + INT64(0));
  call_tmp15 = &((this8)->str);
  ret_7 = &((copy)->str);
  ret_x17 = *(*(ret_7) + INT64(0));
  *(coerce_tmp6 + INT64(0)) = ret_x17;
  *(*(call_tmp15) + INT64(0)) = *(coerce_tmp6 + INT64(0));
  call_tmp16 = &((this8)->origin);
  ret10 = (copy)->origin;
  *(call_tmp16) = ret10;
  call_tmp17 = &((this8)->factoredOffs);
  ret11 = (copy)->factoredOffs;
  *(call_tmp17) = ret11;
  dsiDestroyData4(this8, _ln, _fn);
  call_tmp18 = &((this8)->data);
  ret12 = (copy)->data;
  *(call_tmp18) = ret12;
  call_tmp19 = numIndices(d, _ln, _fn);
  call_tmp20 = (call_tmp19 > INT64(0));
  if (call_tmp20) {
    call_tmp21 = &((this8)->shiftedData);
    ret13 = (copy)->shiftedData;
    *(call_tmp21) = ret13;
  }
  _parent_destructor_tmp_ = ((BaseArr)(copy));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp22 = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp22);
  call_tmp23 = ((void*)(copy));
  chpl_here_free(call_tmp23, _ln, _fn);
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:835 */
static void dsiReallocate5(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F copy = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_4;
  atomic_int64 this11;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _tuple_1_star_int64_t this14;
  _ddata_chpldev_Task call_tmp3 = NULL;
  _ddata_chpldev_Task call_tmp4 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F wrap_call_tmp3 = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F this15 = NULL;
  range_int64_t_bounded_F ret_x12;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret5;
  int64_t end;
  int64_t ret6;
  int64_t sum;
  int64_t ret_x13;
  _ref__tuple_1_star_int64_t ret_3 = NULL;
  int64_t call_tmp6;
  _ddata_chpldev_Task ret7 = NULL;
  _ddata_chpldev_Task coerce_tmp2 = NULL;
  _ref_chpldev_Task call_tmp7 = NULL;
  int64_t sum2;
  int64_t ret_x14;
  _ref__tuple_1_star_int64_t ret_4 = NULL;
  int64_t call_tmp8;
  _ddata_chpldev_Task ret8 = NULL;
  _ddata_chpldev_Task coerce_tmp3 = NULL;
  chpldev_Task ret9;
  _ref_chpldev_Task call_tmp9 = NULL;
  chpldev_Task call_tmp10;
  chpldev_Task call_tmp11;
  chpldev_Task call_tmp12;
  _ref__tuple_1_star_int64_t call_tmp13 = NULL;
  int64_t ret_x15;
  _ref__tuple_1_star_int64_t ret_5 = NULL;
  _tuple_1_star_int64_t coerce_tmp4;
  _ref__tuple_1_star_int64_t call_tmp14 = NULL;
  int64_t ret_x16;
  _ref__tuple_1_star_int64_t ret_6 = NULL;
  _tuple_1_star_int64_t coerce_tmp5;
  _ref__tuple_1_star_int64_t call_tmp15 = NULL;
  int64_t ret_x17;
  _ref__tuple_1_star_int64_t ret_7 = NULL;
  _tuple_1_star_int64_t coerce_tmp6;
  _ref_int64_t call_tmp16 = NULL;
  int64_t ret10;
  _ref_int64_t call_tmp17 = NULL;
  int64_t ret11;
  _ref__ddata_chpldev_Task call_tmp18 = NULL;
  _ddata_chpldev_Task ret12 = NULL;
  int64_t call_tmp19;
  chpl_bool call_tmp20;
  _ref__ddata_chpldev_Task call_tmp21 = NULL;
  _ddata_chpldev_Task ret13 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp22 = NULL;
  chpl_opaque call_tmp23;
  ret = d;
  call_tmp = sizeof(chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(24), _ln, _fn);
  this9 = ((DefaultRectangularArr_chpldev_Task_1_int64_t_F)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
  (this9)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  (this9)->data = nil;
  (this9)->shiftedData = nil;
  (this9)->noinit_data = false;
  (&this10)->_cnt = _init_class_tmp_4;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret2;
  wrap_call_tmp = _construct_atomic_int64(ret2, &this11, _ln, _fn);
  (&this10)->_cnt = wrap_call_tmp;
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
  call_tmp2 = ((BaseArr)(nil));
  (this9)->dom = ret;
  *(this12 + INT64(0)) = INT64(0);
  *((this9)->off + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  *((this9)->blk + INT64(0)) = *(this13 + INT64(0));
  *(this14 + INT64(0)) = INT64(0);
  *((this9)->str + INT64(0)) = *(this14 + INT64(0));
  (this9)->origin = INT64(0);
  (this9)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_chpldev_Task)(nil));
  (this9)->data = call_tmp3;
  call_tmp4 = ((_ddata_chpldev_Task)(nil));
  (this9)->shiftedData = call_tmp4;
  (this9)->noinit_data = false;
  wrap_call_tmp3 = _construct_DefaultRectangularArr4(&wrap_call_tmp2, call_tmp2, ret, &this12, &this13, &this14, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this9, _ln, _fn);
  copy = wrap_call_tmp3;
  ret3 = (this8)->dom;
  coerce_tmp = ret3;
  ret_ = &((coerce_tmp)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  ret_to_arg_ref_tmp_ = &call_tmp5;
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
  ret4 = call_tmp5;
  ret_to_arg_ref_tmp_2 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  this15 = ret4;
  ret_2 = &((this15)->ranges);
  ret_x12 = *(*(ret_2) + INT64(0));
  _ic__F0_this = ret_x12;
  ret5 = (&_ic__F0_this)->_low;
  ret6 = (&_ic__F0_this)->_high;
  end = ret6;
  ret_3 = &((copy)->blk);
  ret_x13 = *(*(ret_3) + INT64(0));
  ret7 = (copy)->shiftedData;
  coerce_tmp2 = ret7;
  ret_4 = &((this8)->blk);
  ret_x14 = *(*(ret_4) + INT64(0));
  ret8 = (this8)->shiftedData;
  coerce_tmp3 = ret8;
  for (i = ret5; ((i <= end)); i += INT64(1)) {
    sum = INT64(0);
    call_tmp6 = (i * ret_x13);
    sum += call_tmp6;
    call_tmp7 = (coerce_tmp2 + sum);
    sum2 = INT64(0);
    call_tmp8 = (i * ret_x14);
    sum2 += call_tmp8;
    call_tmp9 = (coerce_tmp3 + sum2);
    ret9 = *(call_tmp9);
    call_tmp10 = chpl__initCopy3(&ret9, _ln, _fn);
    call_tmp11 = chpl__initCopy3(&call_tmp10, _ln, _fn);
    call_tmp12 = chpl__initCopy3(&call_tmp11, _ln, _fn);
    chpl___ASSIGN_4(call_tmp7, &call_tmp12, _ln, _fn);
  }
  call_tmp13 = &((this8)->off);
  ret_5 = &((copy)->off);
  ret_x15 = *(*(ret_5) + INT64(0));
  *(coerce_tmp4 + INT64(0)) = ret_x15;
  *(*(call_tmp13) + INT64(0)) = *(coerce_tmp4 + INT64(0));
  call_tmp14 = &((this8)->blk);
  ret_6 = &((copy)->blk);
  ret_x16 = *(*(ret_6) + INT64(0));
  *(coerce_tmp5 + INT64(0)) = ret_x16;
  *(*(call_tmp14) + INT64(0)) = *(coerce_tmp5 + INT64(0));
  call_tmp15 = &((this8)->str);
  ret_7 = &((copy)->str);
  ret_x17 = *(*(ret_7) + INT64(0));
  *(coerce_tmp6 + INT64(0)) = ret_x17;
  *(*(call_tmp15) + INT64(0)) = *(coerce_tmp6 + INT64(0));
  call_tmp16 = &((this8)->origin);
  ret10 = (copy)->origin;
  *(call_tmp16) = ret10;
  call_tmp17 = &((this8)->factoredOffs);
  ret11 = (copy)->factoredOffs;
  *(call_tmp17) = ret11;
  dsiDestroyData5(this8, _ln, _fn);
  call_tmp18 = &((this8)->data);
  ret12 = (copy)->data;
  *(call_tmp18) = ret12;
  call_tmp19 = numIndices(d, _ln, _fn);
  call_tmp20 = (call_tmp19 > INT64(0));
  if (call_tmp20) {
    call_tmp21 = &((this8)->shiftedData);
    ret13 = (copy)->shiftedData;
    *(call_tmp21) = ret13;
  }
  _parent_destructor_tmp_ = ((BaseArr)(copy));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp22 = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp22);
  call_tmp23 = ((void*)(copy));
  chpl_here_free(call_tmp23, _ln, _fn);
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:835 */
static void dsiReallocate6(DefaultRectangularArr__real64_2_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
  halt("illegal reallocation", _ln, _fn);
  return;
}

