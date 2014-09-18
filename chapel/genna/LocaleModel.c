/* LocaleModel.chpl:30 */
static void chpl__init_LocaleModel(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  chpl___RuntimeTypeInfo wrap_call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp3 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F type_tmp2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo4 call_tmp5;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  if (chpl__init_LocaleModel_p) {
    goto _exit_chpl__init_LocaleModel;
  }
  modFormatStr = "%*s\n";
  modStr = "LocaleModel";
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleModel_p = true;
  {
    chpl__init_ChapelLocale(_ln, _fn);
    chpl__init_DefaultRectangular(_ln, _fn);
    chpl__init_ChapelNumLocales(_ln, _fn);
    chpl__init_Sys(_ln, _fn);
  }
  doneCreatingLocales = false;
  wrap_call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  call_tmp = wrap_call_tmp;
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  _build_range(INT64(1), INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  chpl__buildDomainExpr(&call_tmp2, ret_to_arg_ref_tmp_3, _ln, _fn);
  chpl___ASSIGN_2(type_tmp, call_tmp3, _ln, _fn);
  chpl__autoDestroy2(call_tmp3, _ln, _fn);
  chpl_emptyLocaleSpace = type_tmp;
  ret_to_arg_ref_tmp_4 = &call_tmp4;
  chpl__ensureDomainExpr(chpl_emptyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
  call_tmp5 = chpl__buildArrayRuntimeType(call_tmp4, _ln, _fn);
  _runtime_type_tmp_2 = (&call_tmp5)->dom;
  ret_to_arg_ref_tmp_5 = &type_tmp2;
  chpl__convertRuntimeTypeToValue4(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
  chpl__autoDestroy2(call_tmp4, _ln, _fn);
  chpl_emptyLocales = type_tmp2;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModel:;
  return;
}

/* LocaleModel.chpl:82 */
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn) {
  chpl_localeID_t _autoCopy_tmp_;
  chpl_localeID_t call_tmp;
  chpl_localeID_t call_tmp2;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(node, subloc);
  call_tmp = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp);
  *(_retArg) = call_tmp2;
  return;
}

/* LocaleModel.chpl:86 */
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  call_tmp = chpl_rt_nodeFromLocaleID(*(loc));
  return call_tmp;
}

/* LocaleModel.chpl:90 */
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  call_tmp = chpl_rt_sublocFromLocaleID(*(loc));
  return call_tmp;
}

/* LocaleModel.chpl:99 */
static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme, int64_t _ln, c_string _fn) {
  LocaleModel this8 = NULL;
  AbstractLocaleModel T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_AbstractLocaleModel(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  (this8)->callStackSize = callStackSize;
  (this8)->_node_id = _node_id;
  (this8)->local_name = local_name;
  return this8;
}

/* LocaleModel.chpl:99 */
static void chpl__auto_destroy_LocaleModel(LocaleModel this8, int64_t _ln, c_string _fn) {
  AbstractLocaleModel _parent_destructor_tmp_ = NULL;
  locale _parent_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((AbstractLocaleModel)(this8));
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->runningTaskCounter);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* LocaleModel.chpl:115 */
static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, c_string _fn) {
  LocaleModel this8 = NULL;
  LocaleModel this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  locale call_tmp2 = NULL;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  chpl_string ret2;
  LocaleModel wrap_call_tmp2 = NULL;
  chpl_bool call_tmp3;
  locale coerce_tmp = NULL;
  locale call_tmp4 = NULL;
  _ref_locale call_tmp5 = NULL;
  call_tmp = sizeof(chpl_LocaleModel_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(19), _ln, _fn);
  this9 = ((LocaleModel)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_LocaleModel;
  (this9)->callStackSize = UINT64(0);
  (this9)->_node_id = INT64(0);
  (this9)->local_name = defaultStringValue;
  call_tmp2 = ((locale)(nil));
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this10, _ln, _fn);
  (this9)->callStackSize = UINT64(0);
  (this9)->_node_id = INT64(0);
  ret2 = defaultStringValue;
  (this9)->local_name = ret2;
  wrap_call_tmp2 = _construct_LocaleModel(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, UINT64(0), INT64(0), ret2, this9, _ln, _fn);
  this8 = wrap_call_tmp2;
  call_tmp3 = doneCreatingLocales;
  if (call_tmp3) {
    halt("Cannot create additional LocaleModel instances", _ln, _fn);
  }
  call_tmp4 = ((locale)(wrap_call_tmp2));
  coerce_tmp = call_tmp4;
  call_tmp5 = &((coerce_tmp)->parent);
  *(call_tmp5) = parent_loc;
  init(wrap_call_tmp2, _ln, _fn);
  return this8;
}

/* LocaleModel.chpl:123 */
static int64_t chpl_id2(LocaleModel this8, int64_t _ln, c_string _fn) {
  int64_t ret;
  ret = (this8)->_node_id;
  return ret;
}

/* LocaleModel.chpl:140 */
static int64_t getChildCount2(LocaleModel this8, int64_t _ln, c_string _fn) {
  return INT64(0);
}

/* LocaleModel.chpl:147 */
static locale getChild2(LocaleModel this8, int64_t idx, int64_t _ln, c_string _fn) {
  locale ret = NULL;
  ret = nil;
  return ret;
}

/* LocaleModel.chpl:165 */
static void init(LocaleModel this8, int64_t _ln, c_string _fn) {
  _ref_int64_t call_tmp = NULL;
  int64_t call_tmp2;
  c_string comm;
  c_string spawnfn;
  _ref_c_string T = NULL;
  _ref_c_string T2 = NULL;
  chpl_string call_tmp3;
  c_string call_tmp4;
  int32_t call_tmp5;
  int32_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_bool T3;
  int64_t call_tmp8;
  chpl_bool call_tmp9;
  chpl_bool T4;
  chpl_string call_tmp10;
  c_string call_tmp11;
  int32_t call_tmp12;
  int32_t call_tmp13;
  chpl_bool call_tmp14;
  chpl_bool T5;
  int64_t call_tmp15;
  chpl_bool call_tmp16;
  c_string call_tmp17;
  chpl_string call_tmp18;
  c_string call_tmp19;
  c_string call_tmp20;
  chpl_string call_tmp21;
  int64_t call_tmp22;
  chpl_bool call_tmp23;
  int64_t ret;
  c_string call_tmp24;
  chpl_string call_tmp25;
  int64_t call_tmp26;
  chpl_bool call_tmp27;
  c_string call_tmp28;
  c_string call_tmp29;
  c_string call_tmp30;
  chpl_string call_tmp31;
  int64_t call_tmp32;
  chpl_bool call_tmp33;
  c_string call_tmp34;
  chpl_string call_tmp35;
  _ref_uint64_t call_tmp36 = NULL;
  uint64_t call_tmp37;
  locale coerce_tmp = NULL;
  locale call_tmp38 = NULL;
  _ref_int64_t call_tmp39 = NULL;
  int32_t call_tmp40;
  int64_t call_tmp41;
  locale coerce_tmp2 = NULL;
  locale call_tmp42 = NULL;
  _ref_int64_t call_tmp43 = NULL;
  uint32_t call_tmp44;
  int64_t call_tmp45;
  call_tmp = &((this8)->_node_id);
  call_tmp2 = ((int64_t)(chpl_nodeID));
  *(call_tmp) = call_tmp2;
  comm = "";
  spawnfn = "";
  T = &comm;
  T2 = &spawnfn;
  string_from_c_string(&call_tmp3, "CHPL_COMM", INT64(0), INT64(0), _ln, _fn);
  c_string_from_string(&call_tmp4, &call_tmp3, _ln, _fn);
  call_tmp5 = sys_getenv(call_tmp4, T);
  call_tmp6 = ((int32_t)(INT64(0)));
  call_tmp7 = (call_tmp5 == call_tmp6);
  if (call_tmp7) {
    call_tmp8 = string_compare(comm, "gasnet");
    call_tmp9 = (call_tmp8 == INT64(0));
    T3 = call_tmp9;
  } else {
    T3 = false;
  }
  if (T3) {
    string_from_c_string(&call_tmp10, "GASNET_SPAWNFN", INT64(0), INT64(0), _ln, _fn);
    c_string_from_string(&call_tmp11, &call_tmp10, _ln, _fn);
    call_tmp12 = sys_getenv(call_tmp11, T2);
    call_tmp13 = ((int32_t)(INT64(0)));
    call_tmp14 = (call_tmp12 == call_tmp13);
    T4 = call_tmp14;
  } else {
    T4 = false;
  }
  if (T4) {
    call_tmp15 = string_compare(spawnfn, "L");
    call_tmp16 = (call_tmp15 == INT64(0));
    T5 = call_tmp16;
  } else {
    T5 = false;
  }
  if (T5) {
    call_tmp17 = chpl_nodeName();
    string_from_c_string(&call_tmp18, call_tmp17, INT64(0), INT64(0), _ln, _fn);
    c_string_from_string(&call_tmp19, &call_tmp18, _ln, _fn);
    call_tmp20 = string_concat(call_tmp19, "-", _ln, _fn);
    string_from_c_string(&call_tmp21, call_tmp20, INT64(0), INT64(0), _ln, _fn);
    call_tmp22 = string_length(call_tmp20);
    call_tmp23 = (call_tmp22 > INT64(0));
    if (call_tmp23) {
      chpl_rt_free_c_string(call_tmp20, _ln, _fn);
    }
    ret = (this8)->_node_id;
    call_tmp24 = int64_t_to_c_string(ret);
    string_from_c_string(&call_tmp25, call_tmp24, INT64(0), INT64(0), _ln, _fn);
    call_tmp26 = string_length(call_tmp24);
    call_tmp27 = (call_tmp26 > INT64(0));
    if (call_tmp27) {
      chpl_rt_free_c_string(call_tmp24, _ln, _fn);
    }
    c_string_from_string(&call_tmp28, &call_tmp21, _ln, _fn);
    c_string_from_string(&call_tmp29, &call_tmp25, _ln, _fn);
    call_tmp30 = string_concat(call_tmp28, call_tmp29, _ln, _fn);
    string_from_c_string(&call_tmp31, call_tmp30, INT64(0), INT64(0), _ln, _fn);
    call_tmp32 = string_length(call_tmp30);
    call_tmp33 = (call_tmp32 > INT64(0));
    if (call_tmp33) {
      chpl_rt_free_c_string(call_tmp30, _ln, _fn);
    }
    (this8)->local_name = call_tmp31;
  } else {
    call_tmp34 = chpl_nodeName();
    string_from_c_string(&call_tmp35, call_tmp34, INT64(0), INT64(0), _ln, _fn);
    (this8)->local_name = call_tmp35;
  }
  call_tmp36 = &((this8)->callStackSize);
  call_tmp37 = chpl_task_getCallStackSize();
  *(call_tmp36) = call_tmp37;
  call_tmp38 = ((locale)(this8));
  coerce_tmp = call_tmp38;
  call_tmp39 = &((coerce_tmp)->numCores);
  call_tmp40 = chpl_getNumPUsOnThisNode();
  call_tmp41 = ((int64_t)(call_tmp40));
  *(call_tmp39) = call_tmp41;
  call_tmp42 = ((locale)(this8));
  coerce_tmp2 = call_tmp42;
  call_tmp43 = &((coerce_tmp2)->maxTaskPar);
  call_tmp44 = chpl_task_getMaxPar();
  call_tmp45 = ((int64_t)(call_tmp44));
  *(call_tmp43) = call_tmp45;
  return;
}

/* LocaleModel.chpl:200 */
static RootLocale _construct_RootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, c_string _fn) {
  RootLocale this8 = NULL;
  AbstractRootLocale T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_AbstractRootLocale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  (this8)->myLocaleSpace = myLocaleSpace;
  (this8)->myLocales = myLocales;
  return this8;
}

/* LocaleModel.chpl:200 */
static void chpl__auto_destroy_RootLocale(RootLocale this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F _field_destructor_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
  AbstractRootLocale _parent_destructor_tmp_ = NULL;
  locale _parent_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _field_destructor_tmp_ = (this8)->myLocales;
  chpl__autoDestroy5(_field_destructor_tmp_, _ln, _fn);
  _field_destructor_tmp_2 = (this8)->myLocaleSpace;
  chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
  _parent_destructor_tmp_ = ((AbstractRootLocale)(this8));
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->runningTaskCounter);
  call_tmp = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* LocaleModel.chpl:205 */
static RootLocale RootLocale2(int64_t _ln, c_string _fn) {
  int64_t local_numLocales;
  RootLocale this8 = NULL;
  RootLocale this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  DefaultRectangularDom_1_int64_t_F _init_class_tmp_ = NULL;
  DefaultRectangularArr_locale_1_int64_t_F _init_class_tmp_2 = NULL;
  locale call_tmp2 = NULL;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  DefaultRectangularDom_1_int64_t_F default_argmyLocaleSpace = NULL;
  chpl___RuntimeTypeInfo call_tmp3;
  chpl___RuntimeTypeInfo wrap_call_tmp2;
  int64_t call_tmp4;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp2 = NULL;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F default_argmyLocales = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp7 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo4 call_tmp8;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  RootLocale wrap_call_tmp3 = NULL;
  locale coerce_tmp = NULL;
  locale call_tmp9 = NULL;
  _ref_locale call_tmp10 = NULL;
  locale coerce_tmp2 = NULL;
  locale call_tmp11 = NULL;
  _ref_int64_t call_tmp12 = NULL;
  locale coerce_tmp3 = NULL;
  locale call_tmp13 = NULL;
  _ref_int64_t call_tmp14 = NULL;
  local_numLocales = numLocales;
  call_tmp = sizeof(chpl_RootLocale_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(10), _ln, _fn);
  this9 = ((RootLocale)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_RootLocale;
  _init_class_tmp_ = nil;
  (this9)->myLocaleSpace = _init_class_tmp_;
  _init_class_tmp_2 = nil;
  (this9)->myLocales = _init_class_tmp_2;
  call_tmp2 = ((locale)(nil));
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this10, _ln, _fn);
  wrap_call_tmp2 = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  call_tmp3 = wrap_call_tmp2;
  call_tmp4 = (local_numLocales - INT64(1));
  ret_to_arg_ref_tmp_ = &call_tmp5;
  _build_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl__buildDomainExpr(&call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
  _runtime_type_tmp_ = (&call_tmp3)->d;
  ret_to_arg_ref_tmp_3 = &type_tmp2;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_3, _ln, _fn);
  x = type_tmp2;
  chpl___ASSIGN_2(type_tmp2, call_tmp6, _ln, _fn);
  default_argmyLocaleSpace = chpl__autoCopy2(x, _ln, _fn);
  (this9)->myLocaleSpace = default_argmyLocaleSpace;
  ret_to_arg_ref_tmp_4 = &call_tmp7;
  chpl__ensureDomainExpr(default_argmyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
  call_tmp8 = chpl__buildArrayRuntimeType(call_tmp7, _ln, _fn);
  _runtime_type_tmp_2 = (&call_tmp8)->dom;
  ret_to_arg_ref_tmp_5 = &default_argmyLocales;
  chpl__convertRuntimeTypeToValue4(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
  (this9)->myLocales = default_argmyLocales;
  wrap_call_tmp3 = _construct_RootLocale(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, default_argmyLocaleSpace, default_argmyLocales, this9, _ln, _fn);
  chpl__autoDestroy2(call_tmp7, _ln, _fn);
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
  call_tmp9 = ((locale)(wrap_call_tmp3));
  coerce_tmp = call_tmp9;
  call_tmp10 = &((coerce_tmp)->parent);
  *(call_tmp10) = nil;
  call_tmp11 = ((locale)(wrap_call_tmp3));
  coerce_tmp2 = call_tmp11;
  call_tmp12 = &((coerce_tmp2)->numCores);
  *(call_tmp12) = INT64(0);
  call_tmp13 = ((locale)(wrap_call_tmp3));
  coerce_tmp3 = call_tmp13;
  call_tmp14 = &((coerce_tmp3)->maxTaskPar);
  *(call_tmp14) = INT64(0);
  return wrap_call_tmp3;
}

/* LocaleModel.chpl:214 */
static void init2(RootLocale this8, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_relaxed;
  int64_t local_numLocales;
  AbstractRootLocale chpl__iter_F0_this = NULL;
  AbstractRootLocale call_tmp = NULL;
  localesBarrier b;
  localesBarrier this9;
  localesBarrier wrap_call_tmp;
  DefaultRectangularArr_localesSignal_1_int64_t_F flags = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F type_tmp = NULL;
  range_int64_t_boundedLow_F call_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
  int64_t call_tmp3;
  range_int64_t_bounded_F call_tmp4;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___RuntimeTypeInfo5 call_tmp6;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___EndCount _coforallCount = NULL;
  chpl___EndCount this10 = NULL;
  int64_t call_tmp7;
  chpl_opaque cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this11;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp2;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp2;
  chpl_task_list_p ret2;
  chpl___EndCount wrap_call_tmp3 = NULL;
  range_int64_t_boundedLow_F call_tmp8;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_5 = NULL;
  range_int64_t_bounded_F call_tmp9;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  chpl___EndCount rvfDerefTmp = NULL;
  _ir_initOnLocales_AbstractRootLocale rvfDerefTmp2;
  _class_localscoforall_fn5 _args_forcoforall_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl___EndCount delete_tmp = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp10 = NULL;
  chpl_opaque call_tmp11;
  locale call_tmp12 = NULL;
  int32_t call_tmp13;
  chpl_localeID_t call_tmp14;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_7 = NULL;
  chpl_localeID_t call_tmp15;
  locale call_tmp16 = NULL;
  _ref_atomic_int64 call_tmp17 = NULL;
  _ref_atomic_int_least64_t call_tmp18 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  local_numLocales = numLocales;
  call_tmp = ((AbstractRootLocale)(this8));
  chpl__iter_F0_this = call_tmp;
  wrap_call_tmp = _construct_localesBarrier(&this9);
  b = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _build_range2(INT64(1), ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp3 = (local_numLocales - INT64(1));
  ret_to_arg_ref_tmp_2 = &call_tmp4;
  chpl___POUND_(&call_tmp2, call_tmp3, ret_to_arg_ref_tmp_2, _ln, _fn);
  ret_to_arg_ref_tmp_3 = &call_tmp5;
  chpl__ensureDomainExpr4(&call_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
  call_tmp6 = chpl__buildArrayRuntimeType2(call_tmp5, _ln, _fn);
  _runtime_type_tmp_ = (&call_tmp6)->dom;
  ret_to_arg_ref_tmp_4 = &type_tmp;
  chpl__convertRuntimeTypeToValue5(_runtime_type_tmp_, ret_to_arg_ref_tmp_4, _ln, _fn);
  flags = type_tmp;
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
  call_tmp7 = sizeof(chpl_chpl___EndCount_object);
  cast_tmp = chpl_here_alloc(call_tmp7, INT16(15), _ln, _fn);
  this10 = ((chpl___EndCount)(cast_tmp));
  ((object)(this10))->chpl__cid = chpl__cid_chpl___EndCount;
  (this10)->i = _init_class_tmp_;
  (this10)->taskCnt = INT64(0);
  (this10)->taskList = NULL;
  ret = type_tmp2;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this11)->_v = ret;
  wrap_call_tmp2 = _construct_atomic_int64(ret, &this11, _ln, _fn);
  (this10)->i = wrap_call_tmp2;
  (this10)->taskCnt = INT64(0);
  ret2 = NULL;
  (this10)->taskList = ret2;
  wrap_call_tmp3 = _construct__EndCount(&wrap_call_tmp2, INT64(0), ret2, this10, _ln, _fn);
  _coforallCount = wrap_call_tmp3;
  ret_to_arg_ref_tmp_5 = &call_tmp8;
  _build_range2(INT64(0), ret_to_arg_ref_tmp_5, _ln, _fn);
  ret_to_arg_ref_tmp_6 = &call_tmp9;
  chpl___POUND_(&call_tmp8, local_numLocales, ret_to_arg_ref_tmp_6, _ln, _fn);
  _ic__F0_this = call_tmp9;
  ret3 = (&_ic__F0_this)->_low;
  ret4 = (&_ic__F0_this)->_high;
  end = ret4;
  for (i = ret3; ((i <= end)); i += INT64(1)) {
    _upEndCount(_coforallCount, _ln, _fn);
    rvfDerefTmp = _coforallCount;
    (&rvfDerefTmp2)->F0_this = chpl__iter_F0_this;
    chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn5_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(42), _ln, _fn);
    _args_forcoforall_fn = ((_class_localscoforall_fn5)(chpl_here_alloc_tmp));
    (_args_forcoforall_fn)->_0_b = b;
    (_args_forcoforall_fn)->_1_flags = flags;
    (_args_forcoforall_fn)->_2_locIdx = i;
    (_args_forcoforall_fn)->_3_c_sublocid_any = c_sublocid_any;
    (_args_forcoforall_fn)->_4_rvfDerefTmp = rvfDerefTmp;
    (_args_forcoforall_fn)->_5_rvfDerefTmp = rvfDerefTmp2;
    (_args_forcoforall_fn)->_6_this = this8;
    (_args_forcoforall_fn)->_ln = _ln;
    (_args_forcoforall_fn)->_fn = _fn;
    /*** wrapcoforall_fn5 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(4), ((void*)(_args_forcoforall_fn)), &(((_args_forcoforall_fn)->_4_rvfDerefTmp)->taskList), chpl_nodeID, INT64(215), "/home/safl/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  }
  chpl_taskListProcess((_coforallCount)->taskList, _ln, _fn);
  _waitEndCount(_coforallCount, _ln, _fn);
  delete_tmp = _coforallCount;
  _field_destructor_tmp_ = &((delete_tmp)->i);
  call_tmp10 = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp10);
  call_tmp11 = ((void*)(delete_tmp));
  chpl_here_free(call_tmp11, _ln, _fn);
  chpl__autoDestroy6(flags, _ln, _fn);
  call_tmp13 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_7 = &call_tmp14;
  chpl_buildLocaleID(chpl_nodeID, call_tmp13, ret_to_arg_ref_tmp_7, _ln, _fn);
  call_tmp15 = chpl__initCopy_chpl_rt_localeID_t(call_tmp14);
  call_tmp16 = chpl_localeID_to_locale(&call_tmp15, _ln, _fn);
  call_tmp12 = call_tmp16;
  call_tmp17 = &((call_tmp12)->runningTaskCounter);
  call_tmp18 = &((call_tmp17)->_v);
  atomic_store_explicit_int_least64_t(call_tmp18, INT64(0), local_memory_order_relaxed);
  return;
}

/* LocaleModel.chpl:215 */
static void wrapcoforall_fn5(_class_localscoforall_fn5 c) {
  int64_t _ln;
  c_string _fn;
  localesBarrier _0_b;
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags = NULL;
  int64_t _2_locIdx;
  int32_t _3_c_sublocid_any;
  chpl___EndCount _4_rvfDerefTmp = NULL;
  _ir_initOnLocales_AbstractRootLocale _5_rvfDerefTmp;
  RootLocale _6_this = NULL;
  _ln = (c)->_ln;
  _fn = (c)->_fn;
  _0_b = (c)->_0_b;
  _1_flags = (c)->_1_flags;
  _2_locIdx = (c)->_2_locIdx;
  _3_c_sublocid_any = (c)->_3_c_sublocid_any;
  _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  _5_rvfDerefTmp = (c)->_5_rvfDerefTmp;
  _6_this = (c)->_6_this;
  coforall_fn5(&_0_b, _1_flags, _2_locIdx, _3_c_sublocid_any, _4_rvfDerefTmp, &_5_rvfDerefTmp, _6_this, _ln, _fn);
  chpl_here_free(((void*)(c)), _ln, _fn);
  return;
}

/* ChapelLocale.chpl:223 */
static void coforall_fn5(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, int32_t c_sublocid_any, chpl___EndCount _coforallCount, _ir_initOnLocales_AbstractRootLocale* const chpl__iter, RootLocale this8, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_localeID_t call_tmp2;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  DefaultDist ret = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  DefaultDist this9 = NULL;
  int64_t call_tmp5;
  chpl_opaque cast_tmp;
  atomic_refcnt this10;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this11;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  list_BaseDom this12;
  listNode_BaseDom call_tmp6 = NULL;
  listNode_BaseDom call_tmp7 = NULL;
  list_BaseDom wrap_call_tmp3;
  atomicflag this13;
  atomic_flag ret3;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist wrap_call_tmp5 = NULL;
  DefaultDist call_tmp8 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_2 = NULL;
  LocaleModel const_tmp = NULL;
  locale call_tmp9 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp10 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp11 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret4 = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t call_tmp12;
  _ddata_locale ret5 = NULL;
  _ddata_locale coerce_tmp2 = NULL;
  _ref_locale call_tmp13 = NULL;
  locale call_tmp14 = NULL;
  locale coerce_tmp3 = NULL;
  locale call_tmp15 = NULL;
  _ref_int64_t call_tmp16 = NULL;
  locale coerce_tmp4 = NULL;
  locale call_tmp17 = NULL;
  int64_t ret6;
  locale coerce_tmp5 = NULL;
  locale call_tmp18 = NULL;
  _ref_int64_t call_tmp19 = NULL;
  locale coerce_tmp6 = NULL;
  locale call_tmp20 = NULL;
  int64_t ret7;
  _ref_localesBarrier _ref_tmp_3 = NULL;
  call_tmp = ((int32_t)(locIdx));
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_buildLocaleID(call_tmp, c_sublocid_any, ret_to_arg_ref_tmp_, _ln, _fn);
  ret = defaultDist;
  call_tmp3 = ((object)(ret));
  call_tmp4 = (call_tmp3 == nil);
  if (call_tmp4) {
    call_tmp5 = sizeof(chpl_DefaultDist_object);
    cast_tmp = chpl_here_alloc(call_tmp5, INT16(4), _ln, _fn);
    this9 = ((DefaultDist)(cast_tmp));
    ((object)(this9))->chpl__cid = chpl__cid_DefaultDist;
    (&this10)->_cnt = _init_class_tmp_;
    ret2 = type_tmp;
    _ref_tmp_ = &ret2;
    atomic_init_int_least64_t(_ref_tmp_, INT64(0));
    (&this11)->_v = ret2;
    wrap_call_tmp = _construct_atomic_int64(ret2, &this11, _ln, _fn);
    (&this10)->_cnt = wrap_call_tmp;
    wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this10, _ln, _fn);
    (&this12)->first = nil;
    (&this12)->last = nil;
    (&this12)->length = INT64(0);
    call_tmp6 = ((listNode_BaseDom)(nil));
    (&this12)->first = call_tmp6;
    call_tmp7 = ((listNode_BaseDom)(nil));
    (&this12)->last = call_tmp7;
    (&this12)->length = INT64(0);
    wrap_call_tmp3 = _construct_list2(call_tmp6, call_tmp7, INT64(0), &this12, _ln, _fn);
    ret3 = type_tmp2;
    _ref_tmp_2 = &ret3;
    atomic_init_flag(_ref_tmp_2, false);
    (&this13)->_v = ret3;
    wrap_call_tmp4 = _construct_atomicflag(ret3, &this13, _ln, _fn);
    wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this9, _ln, _fn);
    ret_to_arg_ref_tmp_2 = &call_tmp8;
    chpl__buildDistValue2(wrap_call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
    chpl___ASSIGN_(defaultDist, call_tmp8, _ln, _fn);
    chpl__autoDestroy(call_tmp8, _ln, _fn);
  }
  call_tmp9 = ((locale)(this8));
  const_tmp = LocaleModel2(call_tmp9, _ln, _fn);
  call_tmp10 = (this8)->myLocales;
  coerce_tmp = call_tmp10;
  ret4 = coerce_tmp;
  call_tmp11 = ret4;
  sum = INT64(0);
  ret_ = &((call_tmp11)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  call_tmp12 = (locIdx * ret_x1);
  sum += call_tmp12;
  ret5 = (call_tmp11)->shiftedData;
  coerce_tmp2 = ret5;
  call_tmp13 = (coerce_tmp2 + sum);
  call_tmp14 = ((locale)(const_tmp));
  *(call_tmp13) = call_tmp14;
  call_tmp15 = ((locale)(this8));
  coerce_tmp3 = call_tmp15;
  call_tmp16 = &((coerce_tmp3)->numCores);
  call_tmp17 = ((locale)(const_tmp));
  coerce_tmp4 = call_tmp17;
  ret6 = (coerce_tmp4)->numCores;
  *(call_tmp16) += ret6;
  call_tmp18 = ((locale)(this8));
  coerce_tmp5 = call_tmp18;
  call_tmp19 = &((coerce_tmp5)->maxTaskPar);
  call_tmp20 = ((locale)(const_tmp));
  coerce_tmp6 = call_tmp20;
  ret7 = (coerce_tmp6)->maxTaskPar;
  *(call_tmp19) += ret7;
  _ref_tmp_3 = b;
  wait2(_ref_tmp_3, locIdx, flags, _ln, _fn);
  chpl_rootLocaleInitPrivate(locIdx, _ln, _fn);
  _downEndCount(_coforallCount, _ln, _fn);
  return;
}

/* LocaleModel.chpl:229 */
static int64_t chpl_id3(RootLocale this8, int64_t _ln, c_string _fn) {
  int64_t local_numLocales;
  int64_t ret;
  local_numLocales = numLocales;
  ret = local_numLocales;
  return ret;
}

/* LocaleModel.chpl:241 */
static int64_t getChildCount3(RootLocale this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  int64_t call_tmp2;
  call_tmp = (this8)->myLocaleSpace;
  call_tmp2 = numIndices(call_tmp, _ln, _fn);
  return call_tmp2;
}

/* LocaleModel.chpl:250 */
static locale getChild3(RootLocale this8, int64_t idx, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t call_tmp3;
  _ddata_locale ret2 = NULL;
  _ddata_locale coerce_tmp2 = NULL;
  locale ret3 = NULL;
  _ref_locale call_tmp4 = NULL;
  call_tmp = (this8)->myLocales;
  coerce_tmp = call_tmp;
  ret = coerce_tmp;
  call_tmp2 = ret;
  sum = INT64(0);
  ret_ = &((call_tmp2)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  call_tmp3 = (idx * ret_x1);
  sum += call_tmp3;
  ret2 = (call_tmp2)->shiftedData;
  coerce_tmp2 = ret2;
  call_tmp4 = (coerce_tmp2 + sum);
  ret3 = *(call_tmp4);
  return ret3;
}

/* LocaleModel.chpl:258 */
static void getDefaultLocaleArray2(RootLocale this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  call_tmp = (this8)->myLocales;
  *(_retArg) = chpl__autoCopy5(call_tmp, _ln, _fn);
  return;
}

/* LocaleModel.chpl:258 */
static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray(RootLocale this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  call_tmp = (this8)->myLocales;
  return call_tmp;
}

/* LocaleModel.chpl:260 */
static locale localeIDtoLocale2(RootLocale this8, chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  int64_t call_tmp3;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t call_tmp5;
  _ddata_locale ret2 = NULL;
  _ddata_locale coerce_tmp2 = NULL;
  locale ret3 = NULL;
  _ref_locale call_tmp6 = NULL;
  call_tmp = chpl_rt_nodeFromLocaleID(*(id2));
  call_tmp2 = (this8)->myLocales;
  coerce_tmp = call_tmp2;
  call_tmp3 = ((int64_t)(call_tmp));
  ret = coerce_tmp;
  call_tmp4 = ret;
  sum = INT64(0);
  ret_ = &((call_tmp4)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  call_tmp5 = (call_tmp3 * ret_x1);
  sum += call_tmp5;
  ret2 = (call_tmp4)->shiftedData;
  coerce_tmp2 = ret2;
  call_tmp6 = (coerce_tmp2 + sum);
  ret3 = *(call_tmp6);
  return ret3;
}

/* LocaleModel.chpl:278 */
static chpl_opaque chpl_here_alloc(int64_t size, int16_t md, int64_t _ln, c_string _fn) {
  int16_t call_tmp;
  int16_t call_tmp2;
  chpl_opaque call_tmp3;
  call_tmp = chpl_memhook_md_num();
  call_tmp2 = (md + call_tmp);
  call_tmp3 = chpl_mem_alloc(size, call_tmp2, _ln, _fn);
  return call_tmp3;
}

/* LocaleModel.chpl:302 */
static void chpl_here_free(chpl_opaque ptr, int64_t _ln, c_string _fn) {
  chpl_mem_free(ptr, _ln, _fn);
  return;
}

/* LocaleModel.chpl:329 */
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
    call_tmp4 = ((int64_t)(call_tmp));
    call_tmp5 = ((int64_t)(call_tmp3));
    chpl_comm_fork(call_tmp4, call_tmp5, fn, args, args_size);
  }
  return;
}

/* LocaleModel.chpl:350 */
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
    call_tmp4 = ((int64_t)(call_tmp));
    call_tmp5 = ((int64_t)(call_tmp3));
    chpl_comm_fork_fast(call_tmp4, call_tmp5, fn, args, args_size);
  }
  return;
}

/* LocaleModel.chpl:370 */
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  int32_t call_tmp4;
  int64_t call_tmp5;
  int64_t call_tmp6;
  int32_t call_tmp7;
  chpl_bool call_tmp8;
  int64_t call_tmp9;
  int64_t call_tmp10;
  int64_t call_tmp11;
  int64_t call_tmp12;
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    call_tmp3 = chpl_task_getSerial();
    if (call_tmp3) {
      chpl_ftable_call(fn, args);
    } else {
      call_tmp4 = chpl_sublocFromLocaleID(loc, _ln, _fn);
      call_tmp5 = ((int64_t)(call_tmp));
      call_tmp6 = ((int64_t)(call_tmp4));
      chpl_comm_fork_nb(call_tmp5, call_tmp6, fn, args, args_size);
    }
  } else {
    call_tmp7 = chpl_sublocFromLocaleID(loc, _ln, _fn);
    call_tmp8 = chpl_task_getSerial();
    if (call_tmp8) {
      call_tmp9 = ((int64_t)(call_tmp));
      call_tmp10 = ((int64_t)(call_tmp7));
      chpl_comm_fork(call_tmp9, call_tmp10, fn, args, args_size);
    } else {
      call_tmp11 = ((int64_t)(call_tmp));
      call_tmp12 = ((int64_t)(call_tmp7));
      chpl_comm_fork_nb(call_tmp11, call_tmp12, fn, args, args_size);
    }
  }
  return;
}

/* LocaleModel.chpl:420 */
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, true, _ln, _fn);
  return;
}

/* LocaleModel.chpl:435 */
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, false, _ln, _fn);
  return;
}

/* LocaleModel.chpl:449 */
void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  chpl_task_processTaskList(task_list);
  return;
}

/* LocaleModel.chpl:458 */
void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  chpl_task_executeTasksInList(task_list);
  return;
}

/* LocaleModel.chpl:467 */
void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  chpl_task_freeTaskList(task_list);
  return;
}

