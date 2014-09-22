/* ChapelArray.chpl:23 */
static void chpl__init_ChapelArray(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  atomic_int64 this8;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  if (chpl__init_ChapelArray_p) {
    goto _exit_chpl__init_ChapelArray;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelArray";
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelArray_p = true;
  {
    chpl__init_ChapelBase(_ln, _fn);
    chpl__init_ChapelTuple(_ln, _fn);
    chpl__init_ChapelLocale(_ln, _fn);
  }
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this8)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
  numPrivateObjects = wrap_call_tmp;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelArray:;
  return;
}

/* ChapelArray.chpl:123 */
static void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F this8 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__array(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy5(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:123 */
static void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__array2(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy6(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:123 */
static void _newArray3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F value, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__array3(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy7(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:123 */
static void _newArray5(DefaultRectangularArr_chpldev_Task_1_int64_t_F value, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F this8 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__array4(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy8(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:123 */
static void _newArray4(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F value, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8 = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__array5(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy9(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:123 */
static void _newArray6(DefaultRectangularArr__real64_2_int64_t_F value, _ref_DefaultRectangularArr__real64_2_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr__real64_2_int64_t_F this8 = NULL;
  DefaultRectangularArr__real64_2_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__array6(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy10(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:130 */
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__domain(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:130 */
static void _newDomain2(DefaultAssociativeDom_chpl_taskID_t_F value, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F this8 = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__domain2(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy3(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:130 */
static void _newDomain3(DefaultRectangularDom_2_int64_t_F value, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F this8 = NULL;
  DefaultRectangularDom_2_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__domain3(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy4(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:137 */
static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
  this8 = nil;
  this8 = value;
  wrap_call_tmp = _construct__domain(value, this8, _ln, _fn);
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:144 */
static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  DefaultDist call_tmp = NULL;
  call_tmp = _distribution(value, _ln, _fn);
  *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:151 */
static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  DefaultDist call_tmp = NULL;
  call_tmp = _distribution(value, _ln, _fn);
  *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:163 */
static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  call_tmp = newRectangularDom(d, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDomain(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:163 */
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo _return_tmp_;
  (&_return_tmp_)->d = d;
  return _return_tmp_;
}

/* ChapelArray.chpl:163 */
static void chpl__convertRuntimeTypeToValue2(DefaultDist d, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F call_tmp = NULL;
  DefaultRectangularDom_2_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularDom_2_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  call_tmp = newRectangularDom2(d, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDomain3(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:163 */
static chpl___RuntimeTypeInfo2 chpl__buildDomainRuntimeType2(DefaultDist d, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo2 _return_tmp_;
  (&_return_tmp_)->d = d;
  return _return_tmp_;
}

/* ChapelArray.chpl:169 */
static void chpl__convertRuntimeTypeToValue3(DefaultDist d, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp2 = NULL;
  _ref_DefaultAssociativeDom_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  call_tmp = newAssociativeDom(d, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDomain2(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:169 */
static chpl___RuntimeTypeInfo3 chpl__buildDomainRuntimeType3(DefaultDist d, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo3 _return_tmp_;
  (&_return_tmp_)->d = d;
  return _return_tmp_;
}

/* ChapelArray.chpl:191 */
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  DefaultDist call_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  chpl___RuntimeTypeInfo call_tmp2;
  ret_to_arg_ref_tmp_ = &call_tmp;
  dist(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp2 = chpl__buildDomainRuntimeType(call_tmp, _ln, _fn);
  chpl__autoDestroy(call_tmp, _ln, _fn);
  return call_tmp2;
}

/* ChapelArray.chpl:217 */
static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  buildArray(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:217 */
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo4 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* ChapelArray.chpl:217 */
static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  buildArray2(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:217 */
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo5 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* ChapelArray.chpl:217 */
static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  buildArray3(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:217 */
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo6 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* ChapelArray.chpl:217 */
static void chpl__convertRuntimeTypeToValue8(DefaultAssociativeDom_chpl_taskID_t_F dom, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp = NULL;
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  buildArray4(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:217 */
static chpl___RuntimeTypeInfo7 chpl__buildArrayRuntimeType4(DefaultAssociativeDom_chpl_taskID_t_F dom, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo7 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* ChapelArray.chpl:217 */
static void chpl__convertRuntimeTypeToValue7(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  buildArray5(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:217 */
static chpl___RuntimeTypeInfo8 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo8 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* ChapelArray.chpl:217 */
static void chpl__convertRuntimeTypeToValue9(DefaultRectangularDom_2_int64_t_F dom, _ref_DefaultRectangularArr__real64_2_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr__real64_2_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr__real64_2_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  buildArray6(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:217 */
static chpl___RuntimeTypeInfo9 chpl__buildArrayRuntimeType6(DefaultRectangularDom_2_int64_t_F dom, int64_t _ln, c_string _fn) {
  chpl___RuntimeTypeInfo9 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* DefaultRectangular.chpl:281 */
static void coforall_fn(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F newRet_x1;
  _tuple_1_star_range_int64_t_bounded_F followMe;
  _tuple_1_star_range_int64_t_bounded_F type_tmp;
  range_int64_t_bounded_F this8;
  range_int64_t_bounded_F wrap_call_tmp;
  _tuple_2_star_int64_t const_tmp;
  int64_t _tmp_x1;
  int64_t _tmp_x2;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp2;
  _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t ret;
  _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_3 = NULL;
  int64_t ret2;
  _ref_range_int64_t_bounded_F call_tmp5 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  int64_t ret3;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  _ref_range_int64_t_bounded_F call_tmp6 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_5 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tmp_x12 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tmp_x22 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F coerce_tmp = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret4 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F coerce_tmp2 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret5 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F0_this = NULL;
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x1;
  range_int64_t_bounded_F _ic__F9_block_x1;
  int64_t _ic__F12_i;
  int64_t _ic__F14_end;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F0_this2 = NULL;
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x12;
  range_int64_t_bounded_F _ic__F9_block_x12;
  int64_t _ic__F12_i2;
  _ref_range_int64_t_bounded_F call_tmp8 = NULL;
  _ref_range_int64_t_bounded_F call_tmp9 = NULL;
  DefaultRectangularDom_1_int64_t_F this9 = NULL;
  _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  DefaultRectangularDom_1_int64_t_F this10 = NULL;
  range_int64_t_bounded_F call_tmp11;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F this11;
  range_int64_t_bounded_F wrap_call_tmp2;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp12 = NULL;
  int64_t ret7;
  int64_t ret8;
  int64_t call_tmp13;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp14 = NULL;
  int64_t ret9;
  int64_t ret10;
  int64_t call_tmp15;
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t ret11;
  int64_t ret12;
  _ref_range_int64_t_bounded_F call_tmp16 = NULL;
  _ref_range_int64_t_bounded_F call_tmp17 = NULL;
  DefaultRectangularDom_1_int64_t_F this12 = NULL;
  _ref_range_int64_t_bounded_F call_tmp18 = NULL;
  DefaultRectangularDom_1_int64_t_F this13 = NULL;
  range_int64_t_bounded_F call_tmp19;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret13 = NULL;
  _tuple_1_star_int64_t default_argoffset2;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F this14;
  range_int64_t_bounded_F wrap_call_tmp3;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp20 = NULL;
  int64_t ret14;
  int64_t ret15;
  int64_t call_tmp21;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp22 = NULL;
  int64_t ret16;
  int64_t ret17;
  int64_t call_tmp23;
  range_int64_t_bounded_F _ic__F0_this4;
  int64_t ret18;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T3 = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t call_tmp24;
  _ddata_chpl_TableEntry_chpl_taskID_t ret19 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp3 = NULL;
  _ref_chpl_TableEntry_chpl_taskID_t call_tmp25 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T4 = NULL;
  int64_t sum2;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp26;
  _ddata_chpl_TableEntry_chpl_taskID_t ret20 = NULL;
  _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp4 = NULL;
  _ref_chpl_TableEntry_chpl_taskID_t call_tmp27 = NULL;
  chpl_TableEntry_chpl_taskID_t coerce_tmp5;
  int64_t T5;
  int64_t T6;
  int64_t T7;
  (&this8)->_low = INT64(0);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(0);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = false;
  (&this8)->_low = INT64(1);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(1);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = false;
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this8, _ln, _fn);
  *(type_tmp + INT64(0)) = wrap_call_tmp;
  *(type_tmp + INT64(0)) = *(*(locBlock) + INT64(0));
  *(followMe + INT64(0)) = *(*(locBlock) + INT64(0));
  _ref_tmp_ = locBlock;
  call_tmp = this5(_ref_tmp_, parDim, _ln, _fn);
  call_tmp2 = length(call_tmp, _ln, _fn);
  _ref_tmp_2 = locBlock;
  call_tmp3 = this5(_ref_tmp_2, parDim, _ln, _fn);
  ret = (call_tmp3)->_high;
  _ref_tmp_3 = locBlock;
  call_tmp4 = this5(_ref_tmp_3, parDim, _ln, _fn);
  ret2 = (call_tmp4)->_low;
  _ref_tmp_4 = locBlock;
  call_tmp5 = this5(_ref_tmp_4, parDim, _ln, _fn);
  ret3 = (call_tmp5)->_low;
  ret_to_arg_ref_tmp_ = &const_tmp;
  _computeBlock(call_tmp2, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_, _ln, _fn);
  _tmp_x1 = *(const_tmp + INT64(0));
  _tmp_x2 = *(const_tmp + INT64(1));
  _ref_tmp_5 = &followMe;
  call_tmp6 = this5(_ref_tmp_5, parDim, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &call_tmp7;
  _build_range(_tmp_x1, _tmp_x2, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp6) = call_tmp7;
  newRet_x1 = *(followMe + INT64(0));
  _tmp_x12 = *(*(chpl__iter) + INT64(0));
  _tmp_x22 = *(*(chpl__iter) + INT64(1));
  coerce_tmp = _tmp_x12;
  ret4 = coerce_tmp;
  coerce_tmp2 = _tmp_x22;
  ret5 = coerce_tmp2;
  _ic__F0_this = ret4;
  _ic__F0_this2 = ret5;
  T = ret4;
  ret6 = (T)->dom;
  ret_to_arg_ref_tmp_4 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_4, _ln, _fn);
  _ic__F8__formal_tmp_followThis_x1 = newRet_x1;
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
  _ic__F9_block_x1 = wrap_call_tmp2;
  call_tmp8 = &_ic__F9_block_x1;
  this9 = ret6;
  call_tmp12 = &((this9)->ranges);
  call_tmp9 = (*(call_tmp12) + INT64(0));
  ret7 = (call_tmp9)->_low;
  ret8 = (&_ic__F8__formal_tmp_followThis_x1)->_low;
  call_tmp13 = (ret7 + ret8);
  this10 = ret6;
  call_tmp14 = &((this10)->ranges);
  call_tmp10 = (*(call_tmp14) + INT64(0));
  ret9 = (call_tmp10)->_low;
  ret10 = (&_ic__F8__formal_tmp_followThis_x1)->_high;
  call_tmp15 = (ret9 + ret10);
  ret_to_arg_ref_tmp_3 = &call_tmp11;
  _build_range(call_tmp13, call_tmp15, ret_to_arg_ref_tmp_3, _ln, _fn);
  *(call_tmp8) = call_tmp11;
  _ic__F0_this3 = _ic__F9_block_x1;
  ret11 = (&_ic__F0_this3)->_low;
  ret12 = (&_ic__F0_this3)->_high;
  _ic__F14_end = ret12;
  T2 = ret5;
  ret13 = (T2)->dom;
  ret_to_arg_ref_tmp_6 = &default_argoffset2;
  createTuple(INT64(0), ret_to_arg_ref_tmp_6, _ln, _fn);
  _ic__F8__formal_tmp_followThis_x12 = newRet_x1;
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
  wrap_call_tmp3 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this14, _ln, _fn);
  _ic__F9_block_x12 = wrap_call_tmp3;
  call_tmp16 = &_ic__F9_block_x12;
  this12 = ret13;
  call_tmp20 = &((this12)->ranges);
  call_tmp17 = (*(call_tmp20) + INT64(0));
  ret14 = (call_tmp17)->_low;
  ret15 = (&_ic__F8__formal_tmp_followThis_x12)->_low;
  call_tmp21 = (ret14 + ret15);
  this13 = ret13;
  call_tmp22 = &((this13)->ranges);
  call_tmp18 = (*(call_tmp22) + INT64(0));
  ret16 = (call_tmp18)->_low;
  ret17 = (&_ic__F8__formal_tmp_followThis_x12)->_high;
  call_tmp23 = (ret16 + ret17);
  ret_to_arg_ref_tmp_5 = &call_tmp19;
  _build_range(call_tmp21, call_tmp23, ret_to_arg_ref_tmp_5, _ln, _fn);
  *(call_tmp16) = call_tmp19;
  _ic__F0_this4 = _ic__F9_block_x12;
  ret18 = (&_ic__F0_this4)->_low;
  T3 = _ic__F0_this2;
  ret_ = &((T3)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret19 = (T3)->shiftedData;
  coerce_tmp3 = ret19;
  T4 = _ic__F0_this;
  ret_2 = &((T4)->blk);
  ret_x12 = *(*(ret_2) + INT64(0));
  ret20 = (T4)->shiftedData;
  coerce_tmp4 = ret20;
  for (_ic__F12_i = ret11,_ic__F12_i2 = ret18; (T5 = (_ic__F12_i <= _ic__F14_end),T5); T6 = _ic__F12_i,T6 += INT64(1),_ic__F12_i = T6,T7 = _ic__F12_i2,T7 += INT64(1),_ic__F12_i2 = T7) {
    sum = INT64(0);
    call_tmp24 = (_ic__F12_i2 * ret_x1);
    sum += call_tmp24;
    call_tmp25 = (coerce_tmp3 + sum);
    sum2 = INT64(0);
    call_tmp26 = (_ic__F12_i * ret_x12);
    sum2 += call_tmp26;
    call_tmp27 = (coerce_tmp4 + sum2);
    coerce_tmp5 = *(call_tmp25);
    chpl___ASSIGN_5(call_tmp27, &coerce_tmp5, _ln, _fn);
  }
  _downEndCount(_coforallCount, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:281 */
static void coforall_fn2(_tuple_2_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, DefaultRectangularArr__real64_2_int64_t_F chpl__iter, _real64 b, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F newRet_x1;
  range_int64_t_bounded_F newRet_x2;
  _tuple_2_star_range_int64_t_bounded_F followMe;
  _tuple_2_star_range_int64_t_bounded_F type_tmp;
  range_int64_t_bounded_F this8;
  range_int64_t_bounded_F wrap_call_tmp;
  range_int64_t_bounded_F this9;
  range_int64_t_bounded_F wrap_call_tmp2;
  _tuple_2_star_int64_t const_tmp;
  int64_t _tmp_x1;
  int64_t _tmp_x2;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp2;
  _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t ret;
  _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _ref_tmp_3 = NULL;
  int64_t ret2;
  _ref_range_int64_t_bounded_F call_tmp5 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  int64_t ret3;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  _ref_range_int64_t_bounded_F call_tmp6 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _ref_tmp_5 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularArr__real64_2_int64_t_F T = NULL;
  DefaultRectangularArr__real64_2_int64_t_F ret4 = NULL;
  DefaultRectangularArr__real64_2_int64_t_F _ic__F0_this = NULL;
  DefaultRectangularArr__real64_2_int64_t_F this10 = NULL;
  DefaultRectangularDom_2_int64_t_F ret5 = NULL;
  _tuple_2_star_int64_t default_argoffset;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_F _formal_tmp_followThis_x1;
  range_int64_t_bounded_F _formal_tmp_followThis_x2;
  range_int64_t_bounded_F block_x1;
  range_int64_t_bounded_F block_x2;
  range_int64_t_bounded_F this11;
  range_int64_t_bounded_F wrap_call_tmp3;
  range_int64_t_bounded_F this12;
  range_int64_t_bounded_F wrap_call_tmp4;
  _ref_range_int64_t_bounded_F call_tmp8 = NULL;
  _ref_range_int64_t_bounded_F call_tmp9 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  DefaultRectangularDom_2_int64_t_F this13 = NULL;
  int64_t ret6;
  int64_t ret7;
  int64_t call_tmp10;
  _ref_range_int64_t_bounded_F call_tmp11 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_2 = NULL;
  DefaultRectangularDom_2_int64_t_F this14 = NULL;
  int64_t ret8;
  int64_t ret9;
  int64_t call_tmp12;
  range_int64_t_bounded_F call_tmp13;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_4 = NULL;
  _ref_range_int64_t_bounded_F call_tmp14 = NULL;
  _ref_range_int64_t_bounded_F call_tmp15 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_3 = NULL;
  DefaultRectangularDom_2_int64_t_F this15 = NULL;
  int64_t ret10;
  int64_t ret11;
  int64_t call_tmp16;
  _ref_range_int64_t_bounded_F call_tmp17 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_4 = NULL;
  DefaultRectangularDom_2_int64_t_F this16 = NULL;
  int64_t ret12;
  int64_t ret13;
  int64_t call_tmp18;
  range_int64_t_bounded_F call_tmp19;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  range_int64_t_bounded_F _ic__F1_block_x2;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret14;
  int64_t end;
  int64_t ret15;
  int64_t i2;
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret16;
  int64_t end2;
  int64_t ret17;
  DefaultRectangularArr__real64_2_int64_t_F this17 = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_2_star_int64_t ret_ = NULL;
  int64_t call_tmp20;
  int64_t ret_x2;
  _ref__tuple_2_star_int64_t ret_2 = NULL;
  int64_t call_tmp21;
  _ddata__real64 ret18 = NULL;
  _ddata__real64 coerce_tmp = NULL;
  _ref__real64 call_tmp22 = NULL;
  (&this8)->_low = INT64(0);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(0);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = false;
  (&this8)->_low = INT64(1);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(1);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = false;
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this8, _ln, _fn);
  (&this9)->_low = INT64(0);
  (&this9)->_high = INT64(0);
  (&this9)->_stride = INT64(0);
  (&this9)->_alignment = INT64(0);
  (&this9)->_aligned = false;
  (&this9)->_low = INT64(1);
  (&this9)->_high = INT64(0);
  (&this9)->_stride = INT64(1);
  (&this9)->_alignment = INT64(0);
  (&this9)->_aligned = false;
  wrap_call_tmp2 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this9, _ln, _fn);
  *(type_tmp + INT64(0)) = wrap_call_tmp;
  *(type_tmp + INT64(1)) = wrap_call_tmp2;
  *(type_tmp + INT64(0)) = *(*(locBlock) + INT64(0));
  *(type_tmp + INT64(1)) = *(*(locBlock) + INT64(1));
  *(followMe + INT64(0)) = *(*(locBlock) + INT64(0));
  *(followMe + INT64(1)) = *(*(locBlock) + INT64(1));
  _ref_tmp_ = locBlock;
  call_tmp = this6(_ref_tmp_, parDim, _ln, _fn);
  call_tmp2 = length(call_tmp, _ln, _fn);
  _ref_tmp_2 = locBlock;
  call_tmp3 = this6(_ref_tmp_2, parDim, _ln, _fn);
  ret = (call_tmp3)->_high;
  _ref_tmp_3 = locBlock;
  call_tmp4 = this6(_ref_tmp_3, parDim, _ln, _fn);
  ret2 = (call_tmp4)->_low;
  _ref_tmp_4 = locBlock;
  call_tmp5 = this6(_ref_tmp_4, parDim, _ln, _fn);
  ret3 = (call_tmp5)->_low;
  ret_to_arg_ref_tmp_ = &const_tmp;
  _computeBlock(call_tmp2, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_, _ln, _fn);
  _tmp_x1 = *(const_tmp + INT64(0));
  _tmp_x2 = *(const_tmp + INT64(1));
  _ref_tmp_5 = &followMe;
  call_tmp6 = this6(_ref_tmp_5, parDim, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &call_tmp7;
  _build_range(_tmp_x1, _tmp_x2, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp6) = call_tmp7;
  newRet_x1 = *(followMe + INT64(0));
  newRet_x2 = *(followMe + INT64(1));
  T = chpl__iter;
  ret4 = T;
  _ic__F0_this = ret4;
  this10 = ret4;
  ret5 = (this10)->dom;
  ret_to_arg_ref_tmp_3 = &default_argoffset;
  createTuple2(INT64(0), ret_to_arg_ref_tmp_3, _ln, _fn);
  _formal_tmp_followThis_x1 = newRet_x1;
  _formal_tmp_followThis_x2 = newRet_x2;
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
  wrap_call_tmp3 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this11, _ln, _fn);
  (&this12)->_low = INT64(0);
  (&this12)->_high = INT64(0);
  (&this12)->_stride = INT64(0);
  (&this12)->_alignment = INT64(0);
  (&this12)->_aligned = false;
  (&this12)->_low = INT64(1);
  (&this12)->_high = INT64(0);
  (&this12)->_stride = INT64(1);
  (&this12)->_alignment = INT64(0);
  (&this12)->_aligned = false;
  wrap_call_tmp4 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this12, _ln, _fn);
  block_x1 = wrap_call_tmp3;
  block_x2 = wrap_call_tmp4;
  call_tmp8 = &block_x1;
  this13 = ret5;
  _this_tmp_ = &((this13)->ranges);
  call_tmp9 = (*(_this_tmp_) + INT64(0));
  ret6 = (call_tmp9)->_low;
  ret7 = (&_formal_tmp_followThis_x1)->_low;
  call_tmp10 = (ret6 + ret7);
  this14 = ret5;
  _this_tmp_2 = &((this14)->ranges);
  call_tmp11 = (*(_this_tmp_2) + INT64(0));
  ret8 = (call_tmp11)->_low;
  ret9 = (&_formal_tmp_followThis_x1)->_high;
  call_tmp12 = (ret8 + ret9);
  ret_to_arg_ref_tmp_4 = &call_tmp13;
  _build_range(call_tmp10, call_tmp12, ret_to_arg_ref_tmp_4, _ln, _fn);
  *(call_tmp8) = call_tmp13;
  call_tmp14 = &block_x2;
  this15 = ret5;
  _this_tmp_3 = &((this15)->ranges);
  call_tmp15 = (*(_this_tmp_3) + INT64(1));
  ret10 = (call_tmp15)->_low;
  ret11 = (&_formal_tmp_followThis_x2)->_low;
  call_tmp16 = (ret10 + ret11);
  this16 = ret5;
  _this_tmp_4 = &((this16)->ranges);
  call_tmp17 = (*(_this_tmp_4) + INT64(1));
  ret12 = (call_tmp17)->_low;
  ret13 = (&_formal_tmp_followThis_x2)->_high;
  call_tmp18 = (ret12 + ret13);
  ret_to_arg_ref_tmp_5 = &call_tmp19;
  _build_range(call_tmp16, call_tmp18, ret_to_arg_ref_tmp_5, _ln, _fn);
  *(call_tmp14) = call_tmp19;
  _ic__F1_block_x2 = block_x2;
  _ic__F0_this2 = block_x1;
  ret14 = (&_ic__F0_this2)->_low;
  ret15 = (&_ic__F0_this2)->_high;
  end = ret15;
  _ic__F0_this3 = _ic__F1_block_x2;
  ret16 = (&_ic__F0_this3)->_low;
  ret17 = (&_ic__F0_this3)->_high;
  end2 = ret17;
  for (i = ret14; ((i <= end)); i += INT64(1)) {
    i2 = i;
    this17 = _ic__F0_this;
    ret_ = &((this17)->blk);
    ret_x1 = *(*(ret_) + INT64(0));
    call_tmp20 = (i2 * ret_x1);
    ret_2 = &((this17)->blk);
    ret_x2 = *(*(ret_2) + INT64(1));
    ret18 = (this17)->shiftedData;
    coerce_tmp = ret18;
    for (i3 = ret16; ((i3 <= end2)); i3 += INT64(1)) {
      sum = INT64(0);
      sum += call_tmp20;
      call_tmp21 = (i3 * ret_x2);
      sum += call_tmp21;
      call_tmp22 = (coerce_tmp + sum);
      *(call_tmp22) = b;
    }
  }
  _downEndCount(_coforallCount, _ln, _fn);
  return;
}

/* DefaultRectangular.chpl:281 */
static void coforall_fn3(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F newRet_x1;
  _tuple_1_star_range_int64_t_bounded_F followMe;
  _tuple_1_star_range_int64_t_bounded_F type_tmp;
  range_int64_t_bounded_F this8;
  range_int64_t_bounded_F wrap_call_tmp;
  _tuple_2_star_int64_t const_tmp;
  int64_t _tmp_x1;
  int64_t _tmp_x2;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp2;
  _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t ret;
  _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_3 = NULL;
  int64_t ret2;
  _ref_range_int64_t_bounded_F call_tmp5 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  int64_t ret3;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  _ref_range_int64_t_bounded_F call_tmp6 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_5 = NULL;
  range_int64_t_bounded_F call_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F _tmp_x12 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F _tmp_x22 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F coerce_tmp = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F ret4 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F coerce_tmp2 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F ret5 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F _ic__F0_this = NULL;
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x1;
  range_int64_t_bounded_F _ic__F9_block_x1;
  int64_t _ic__F12_i;
  int64_t _ic__F14_end;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F _ic__F0_this2 = NULL;
  range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x12;
  range_int64_t_bounded_F _ic__F9_block_x12;
  int64_t _ic__F12_i2;
  _ref_range_int64_t_bounded_F call_tmp8 = NULL;
  _ref_range_int64_t_bounded_F call_tmp9 = NULL;
  DefaultRectangularDom_1_int64_t_F this9 = NULL;
  _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  DefaultRectangularDom_1_int64_t_F this10 = NULL;
  range_int64_t_bounded_F call_tmp11;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F T = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F this11;
  range_int64_t_bounded_F wrap_call_tmp2;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp12 = NULL;
  int64_t ret7;
  int64_t ret8;
  int64_t call_tmp13;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp14 = NULL;
  int64_t ret9;
  int64_t ret10;
  int64_t call_tmp15;
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t ret11;
  int64_t ret12;
  _ref_range_int64_t_bounded_F call_tmp16 = NULL;
  _ref_range_int64_t_bounded_F call_tmp17 = NULL;
  DefaultRectangularDom_1_int64_t_F this12 = NULL;
  _ref_range_int64_t_bounded_F call_tmp18 = NULL;
  DefaultRectangularDom_1_int64_t_F this13 = NULL;
  range_int64_t_bounded_F call_tmp19;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F T2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret13 = NULL;
  _tuple_1_star_int64_t default_argoffset2;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F this14;
  range_int64_t_bounded_F wrap_call_tmp3;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp20 = NULL;
  int64_t ret14;
  int64_t ret15;
  int64_t call_tmp21;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp22 = NULL;
  int64_t ret16;
  int64_t ret17;
  int64_t call_tmp23;
  range_int64_t_bounded_F _ic__F0_this4;
  int64_t ret18;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F T3 = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t call_tmp24;
  _ddata_chpldev_Task ret19 = NULL;
  _ddata_chpldev_Task coerce_tmp3 = NULL;
  _ref_chpldev_Task call_tmp25 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F T4 = NULL;
  int64_t sum2;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp26;
  _ddata_chpldev_Task ret20 = NULL;
  _ddata_chpldev_Task coerce_tmp4 = NULL;
  _ref_chpldev_Task call_tmp27 = NULL;
  chpldev_Task coerce_tmp5;
  int64_t T5;
  int64_t T6;
  int64_t T7;
  (&this8)->_low = INT64(0);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(0);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = false;
  (&this8)->_low = INT64(1);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(1);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = false;
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this8, _ln, _fn);
  *(type_tmp + INT64(0)) = wrap_call_tmp;
  *(type_tmp + INT64(0)) = *(*(locBlock) + INT64(0));
  *(followMe + INT64(0)) = *(*(locBlock) + INT64(0));
  _ref_tmp_ = locBlock;
  call_tmp = this5(_ref_tmp_, parDim, _ln, _fn);
  call_tmp2 = length(call_tmp, _ln, _fn);
  _ref_tmp_2 = locBlock;
  call_tmp3 = this5(_ref_tmp_2, parDim, _ln, _fn);
  ret = (call_tmp3)->_high;
  _ref_tmp_3 = locBlock;
  call_tmp4 = this5(_ref_tmp_3, parDim, _ln, _fn);
  ret2 = (call_tmp4)->_low;
  _ref_tmp_4 = locBlock;
  call_tmp5 = this5(_ref_tmp_4, parDim, _ln, _fn);
  ret3 = (call_tmp5)->_low;
  ret_to_arg_ref_tmp_ = &const_tmp;
  _computeBlock(call_tmp2, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_, _ln, _fn);
  _tmp_x1 = *(const_tmp + INT64(0));
  _tmp_x2 = *(const_tmp + INT64(1));
  _ref_tmp_5 = &followMe;
  call_tmp6 = this5(_ref_tmp_5, parDim, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &call_tmp7;
  _build_range(_tmp_x1, _tmp_x2, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp6) = call_tmp7;
  newRet_x1 = *(followMe + INT64(0));
  _tmp_x12 = *(*(chpl__iter) + INT64(0));
  _tmp_x22 = *(*(chpl__iter) + INT64(1));
  coerce_tmp = _tmp_x12;
  ret4 = coerce_tmp;
  coerce_tmp2 = _tmp_x22;
  ret5 = coerce_tmp2;
  _ic__F0_this = ret4;
  _ic__F0_this2 = ret5;
  T = ret4;
  ret6 = (T)->dom;
  ret_to_arg_ref_tmp_4 = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_4, _ln, _fn);
  _ic__F8__formal_tmp_followThis_x1 = newRet_x1;
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
  _ic__F9_block_x1 = wrap_call_tmp2;
  call_tmp8 = &_ic__F9_block_x1;
  this9 = ret6;
  call_tmp12 = &((this9)->ranges);
  call_tmp9 = (*(call_tmp12) + INT64(0));
  ret7 = (call_tmp9)->_low;
  ret8 = (&_ic__F8__formal_tmp_followThis_x1)->_low;
  call_tmp13 = (ret7 + ret8);
  this10 = ret6;
  call_tmp14 = &((this10)->ranges);
  call_tmp10 = (*(call_tmp14) + INT64(0));
  ret9 = (call_tmp10)->_low;
  ret10 = (&_ic__F8__formal_tmp_followThis_x1)->_high;
  call_tmp15 = (ret9 + ret10);
  ret_to_arg_ref_tmp_3 = &call_tmp11;
  _build_range(call_tmp13, call_tmp15, ret_to_arg_ref_tmp_3, _ln, _fn);
  *(call_tmp8) = call_tmp11;
  _ic__F0_this3 = _ic__F9_block_x1;
  ret11 = (&_ic__F0_this3)->_low;
  ret12 = (&_ic__F0_this3)->_high;
  _ic__F14_end = ret12;
  T2 = ret5;
  ret13 = (T2)->dom;
  ret_to_arg_ref_tmp_6 = &default_argoffset2;
  createTuple(INT64(0), ret_to_arg_ref_tmp_6, _ln, _fn);
  _ic__F8__formal_tmp_followThis_x12 = newRet_x1;
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
  wrap_call_tmp3 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this14, _ln, _fn);
  _ic__F9_block_x12 = wrap_call_tmp3;
  call_tmp16 = &_ic__F9_block_x12;
  this12 = ret13;
  call_tmp20 = &((this12)->ranges);
  call_tmp17 = (*(call_tmp20) + INT64(0));
  ret14 = (call_tmp17)->_low;
  ret15 = (&_ic__F8__formal_tmp_followThis_x12)->_low;
  call_tmp21 = (ret14 + ret15);
  this13 = ret13;
  call_tmp22 = &((this13)->ranges);
  call_tmp18 = (*(call_tmp22) + INT64(0));
  ret16 = (call_tmp18)->_low;
  ret17 = (&_ic__F8__formal_tmp_followThis_x12)->_high;
  call_tmp23 = (ret16 + ret17);
  ret_to_arg_ref_tmp_5 = &call_tmp19;
  _build_range(call_tmp21, call_tmp23, ret_to_arg_ref_tmp_5, _ln, _fn);
  *(call_tmp16) = call_tmp19;
  _ic__F0_this4 = _ic__F9_block_x12;
  ret18 = (&_ic__F0_this4)->_low;
  T3 = _ic__F0_this2;
  ret_ = &((T3)->blk);
  ret_x1 = *(*(ret_) + INT64(0));
  ret19 = (T3)->shiftedData;
  coerce_tmp3 = ret19;
  T4 = _ic__F0_this;
  ret_2 = &((T4)->blk);
  ret_x12 = *(*(ret_2) + INT64(0));
  ret20 = (T4)->shiftedData;
  coerce_tmp4 = ret20;
  for (_ic__F12_i = ret11,_ic__F12_i2 = ret18; (T5 = (_ic__F12_i <= _ic__F14_end),T5); T6 = _ic__F12_i,T6 += INT64(1),_ic__F12_i = T6,T7 = _ic__F12_i2,T7 += INT64(1),_ic__F12_i2 = T7) {
    sum = INT64(0);
    call_tmp24 = (_ic__F12_i2 * ret_x1);
    sum += call_tmp24;
    call_tmp25 = (coerce_tmp3 + sum);
    sum2 = INT64(0);
    call_tmp26 = (_ic__F12_i * ret_x12);
    sum2 += call_tmp26;
    call_tmp27 = (coerce_tmp4 + sum2);
    coerce_tmp5 = *(call_tmp25);
    chpl___ASSIGN_4(call_tmp27, &coerce_tmp5, _ln, _fn);
  }
  _downEndCount(_coforallCount, _ln, _fn);
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_incRefCountsForDomainsInArrayEltTypes(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:334 */
static void chpl_incRefCountsForDomainsInArrayEltTypes5(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:355 */
static void chpl_decRefCountsForDomainsInArrayEltTypes(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:355 */
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:355 */
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:355 */
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:355 */
static void chpl_decRefCountsForDomainsInArrayEltTypes5(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:379 */
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  _tuple_1_star_range_int64_t_bounded_F ranges;
  DefaultRectangularDom_1_int64_t_F d = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  *(ranges + INT64(0)) = *(_e0_ranges);
  call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  d = type_tmp;
  setIndices(type_tmp, &ranges, _ln, _fn);
  *(_retArg) = d;
  return;
}

/* ChapelArray.chpl:379 */
static void chpl__buildDomainExpr2(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  _tuple_1_star_range_int64_t_bounded_F ranges;
  DefaultRectangularDom_1_int64_t_F d = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  *(ranges + INT64(0)) = *(_e0_ranges);
  call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  d = type_tmp;
  setIndices(type_tmp, &ranges, _ln, _fn);
  *(_retArg) = chpl__initCopy2(d, _ln, _fn);
  chpl__autoDestroy2(d, _ln, _fn);
  return;
}

/* ChapelArray.chpl:379 */
static void chpl__buildDomainExpr3(range_int64_t_bounded_F* const _e0_ranges, range_int64_t_bounded_F* const _e1_ranges, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  _tuple_2_star_range_int64_t_bounded_F ranges;
  DefaultRectangularDom_2_int64_t_F d = NULL;
  DefaultRectangularDom_2_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo2 call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_2_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  *(ranges + INT64(0)) = *(_e0_ranges);
  *(ranges + INT64(1)) = *(_e1_ranges);
  call_tmp = chpl__buildDomainRuntimeType2(defaultDist, _ln, _fn);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue2(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  d = type_tmp;
  setIndices2(type_tmp, &ranges, _ln, _fn);
  *(_retArg) = d;
  return;
}

/* ChapelArray.chpl:416 */
static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  *(_retArg) = chpl__autoCopy2(x, _ln, _fn);
  return;
}

/* ChapelArray.chpl:416 */
static void chpl__ensureDomainExpr2(DefaultAssociativeDom_chpl_taskID_t_F x, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  *(_retArg) = chpl__autoCopy3(x, _ln, _fn);
  return;
}

/* ChapelArray.chpl:420 */
static void chpl__ensureDomainExpr4(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl__buildDomainExpr(_e0_x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:420 */
static void chpl__ensureDomainExpr3(range_int64_t_bounded_F* const _e0_x, range_int64_t_bounded_F* const _e1_x, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularDom_2_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl__buildDomainExpr3(_e0_x, _e1_x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:553 */
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  DefaultDist call_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _newDistribution(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = chpl__initCopy(call_tmp, _ln, _fn);
  chpl__autoDestroy(call_tmp, _ln, _fn);
  return;
}

/* ChapelArray.chpl:553 */
static void chpl__buildDistValue2(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  DefaultDist call_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _newDistribution(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:566 */
static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, c_string _fn) {
  DefaultDist this8 = NULL;
  this8 = meme;
  this8 = _value;
  return this8;
}

/* ChapelArray.chpl:570 */
static DefaultDist _distribution(DefaultDist _value, int64_t _ln, c_string _fn) {
  DefaultDist this8 = NULL;
  DefaultDist this9 = NULL;
  DefaultDist wrap_call_tmp = NULL;
  this9 = nil;
  this9 = _value;
  wrap_call_tmp = _construct__distribution(_value, this9, _ln, _fn);
  return wrap_call_tmp;
}

/* ChapelArray.chpl:580 */
static void chpl___TILDE__distribution(DefaultDist this8, int64_t _ln, c_string _fn) {
  DefaultDist ret = NULL;
  int64_t call_tmp;
  BaseDist call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultDist ret2 = NULL;
  BaseDist call_tmp4 = NULL;
  DefaultDist ret3 = NULL;
  BaseDist _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp5 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp6 = NULL;
  chpl_opaque call_tmp7;
  ret = this8;
  call_tmp2 = ((BaseDist)(ret));
  call_tmp = destroyDist(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    ret2 = this8;
    call_tmp4 = ((BaseDist)(ret2));
    dsiDestroyDistClass(call_tmp4);
    ret3 = this8;
    _parent_destructor_tmp_ = ((BaseDist)(ret3));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
    call_tmp5 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_flag(call_tmp5);
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
    call_tmp6 = &((_field_destructor_tmp_3)->_v);
    atomic_destroy_int_least64_t(call_tmp6);
    call_tmp7 = ((void*)(ret3));
    chpl_here_free(call_tmp7, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:594 */
static void clone2(DefaultDist this8, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  DefaultDist ret = NULL;
  DefaultDist call_tmp = NULL;
  DefaultDist call_tmp2 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = dsiClone(ret);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDistribution(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:598 */
static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this8, int64_t _ln, c_string _fn) {
  DefaultDist ret = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  ret = this8;
  call_tmp = dsiNewRectangularDom(ret, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:598 */
static DefaultRectangularDom_2_int64_t_F newRectangularDom2(DefaultDist this8, int64_t _ln, c_string _fn) {
  DefaultDist ret = NULL;
  DefaultRectangularDom_2_int64_t_F call_tmp = NULL;
  ret = this8;
  call_tmp = dsiNewRectangularDom2(ret, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:608 */
static DefaultAssociativeDom_chpl_taskID_t_F newAssociativeDom(DefaultDist this8, int64_t _ln, c_string _fn) {
  DefaultDist ret = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F call_tmp = NULL;
  ret = this8;
  call_tmp = dsiNewAssociativeDom(ret, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:679 */
static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  return this8;
}

/* ChapelArray.chpl:679 */
static DefaultAssociativeDom_chpl_taskID_t_F _construct__domain2(DefaultAssociativeDom_chpl_taskID_t_F _value, DefaultAssociativeDom_chpl_taskID_t_F meme, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  return this8;
}

/* ChapelArray.chpl:679 */
static DefaultRectangularDom_2_int64_t_F _construct__domain3(DefaultRectangularDom_2_int64_t_F _value, DefaultRectangularDom_2_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  return this8;
}

/* ChapelArray.chpl:692 */
static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseDom call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
  BaseDom _parent_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp4 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp5 = NULL;
  chpl_opaque call_tmp6;
  ret = this8;
  call_tmp2 = ((BaseDom)(ret));
  call_tmp = destroyDom(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    ret2 = this8;
    _parent_destructor_tmp_ = ((BaseRectangularDom)(ret2));
    _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
    call_tmp4 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_flag(call_tmp4);
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
    call_tmp5 = &((_field_destructor_tmp_3)->_v);
    atomic_destroy_int_least64_t(call_tmp5);
    call_tmp6 = ((void*)(ret2));
    chpl_here_free(call_tmp6, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:692 */
static void chpl___TILDE__domain2(DefaultAssociativeDom_chpl_taskID_t_F this8, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  int64_t call_tmp;
  BaseDom call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultAssociativeDom_chpl_taskID_t_F delete_tmp = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F ret2 = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _field_destructor_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_3 = NULL;
  _ref_atomic_flag call_tmp4 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_4 = NULL;
  _ref_atomic_int_least64_t call_tmp5 = NULL;
  BaseAssociativeDom _parent_destructor_tmp_ = NULL;
  BaseDom _parent_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_5 = NULL;
  _ref_atomic_flag call_tmp6 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_6 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_7 = NULL;
  _ref_atomic_int_least64_t call_tmp7 = NULL;
  chpl_opaque call_tmp8;
  ret = this8;
  call_tmp2 = ((BaseDom)(ret));
  call_tmp = destroyDom(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    ret2 = this8;
    delete_tmp = ret2;
    _field_destructor_tmp_ = (delete_tmp)->table;
    chpl__autoDestroy7(_field_destructor_tmp_, _ln, _fn);
    _field_destructor_tmp_2 = (delete_tmp)->tableDom;
    chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
    _field_destructor_tmp_3 = &((delete_tmp)->tableLock);
    call_tmp4 = &((_field_destructor_tmp_3)->_v);
    atomic_destroy_flag(call_tmp4);
    _field_destructor_tmp_4 = &((delete_tmp)->numEntries);
    call_tmp5 = &((_field_destructor_tmp_4)->_v);
    atomic_destroy_int_least64_t(call_tmp5);
    _parent_destructor_tmp_ = ((BaseAssociativeDom)(delete_tmp));
    _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
    _field_destructor_tmp_5 = &((_parent_destructor_tmp_2)->_arrsLock);
    call_tmp6 = &((_field_destructor_tmp_5)->_v);
    atomic_destroy_flag(call_tmp6);
    _field_destructor_tmp_6 = &((_parent_destructor_tmp_2)->_domCnt);
    _field_destructor_tmp_7 = &((_field_destructor_tmp_6)->_cnt);
    call_tmp7 = &((_field_destructor_tmp_7)->_v);
    atomic_destroy_int_least64_t(call_tmp7);
    call_tmp8 = ((void*)(delete_tmp));
    chpl_here_free(call_tmp8, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:692 */
static void chpl___TILDE__domain3(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseDom call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularDom_2_int64_t_F ret2 = NULL;
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
  BaseDom _parent_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp4 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp5 = NULL;
  chpl_opaque call_tmp6;
  ret = this8;
  call_tmp2 = ((BaseDom)(ret));
  call_tmp = destroyDom(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    ret2 = this8;
    _parent_destructor_tmp_ = ((BaseRectangularDom)(ret2));
    _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
    call_tmp4 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_flag(call_tmp4);
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
    call_tmp5 = &((_field_destructor_tmp_3)->_v);
    atomic_destroy_int_least64_t(call_tmp5);
    call_tmp6 = ((void*)(ret2));
    chpl_here_free(call_tmp6, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:704 */
static void dist(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultDist ret2 = NULL;
  DefaultDist call_tmp2 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = ret;
  ret2 = (call_tmp)->dist;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _getDistribution(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:752 */
static void this2(DefaultRectangularDom_1_int64_t_F this8, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  _tuple_1_star_range_int64_t_bounded_F r;
  range_int64_t_bounded_F this9;
  range_int64_t_bounded_F wrap_call_tmp;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  range_int64_t_bounded_F call_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  (&this9)->_low = INT64(0);
  (&this9)->_high = INT64(0);
  (&this9)->_stride = INT64(0);
  (&this9)->_alignment = INT64(0);
  (&this9)->_aligned = false;
  (&this9)->_low = INT64(1);
  (&this9)->_high = INT64(0);
  (&this9)->_stride = INT64(1);
  (&this9)->_alignment = INT64(0);
  (&this9)->_aligned = false;
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this9, _ln, _fn);
  *(r + INT64(0)) = wrap_call_tmp;
  call_tmp = (r + INT64(0));
  ret = this8;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  dsiDim(ret, ret_to_arg_ref_tmp_, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &call_tmp3;
  _ref_tmp_ = &call_tmp2;
  this3(_ref_tmp_, _e0_ranges, ret_to_arg_ref_tmp_2, _ln, _fn);
  *(call_tmp) = call_tmp3;
  ret2 = this8;
  call_tmp4 = dsiBuildRectangularDom(ret2, &r, _ln, _fn);
  ret_to_arg_ref_tmp_3 = &call_tmp5;
  _newDomain(call_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
  *(_retArg) = call_tmp5;
  return;
}

/* ChapelArray.chpl:813 */
static void buildArray(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F T = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = dsiBuildArray2(ret, _ln, _fn);
  x = call_tmp;
  T = &x;
  help(this8, T, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:813 */
static void buildArray2(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = dsiBuildArray3(ret, _ln, _fn);
  x = call_tmp;
  T = &x;
  help2(this8, T, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray2(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:813 */
static void buildArray3(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = dsiBuildArray4(ret, _ln, _fn);
  x = call_tmp;
  T = &x;
  help3(this8, T, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray3(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:813 */
static void buildArray4(DefaultAssociativeDom_chpl_taskID_t_F this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp = NULL;
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F T = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp2 = NULL;
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = dsiBuildArray(ret, _ln, _fn);
  x = call_tmp;
  T = &x;
  help4(this8, T, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray4(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:813 */
static void buildArray5(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F T = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = dsiBuildArray5(ret, _ln, _fn);
  x = call_tmp;
  T = &x;
  help5(this8, T, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray5(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:813 */
static void buildArray6(DefaultRectangularDom_2_int64_t_F this8, _ref_DefaultRectangularArr__real64_2_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr__real64_2_int64_t_F x = NULL;
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  DefaultRectangularArr__real64_2_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr__real64_2_int64_t_F T = NULL;
  DefaultRectangularArr__real64_2_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularArr__real64_2_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = dsiBuildArray6(ret, _ln, _fn);
  x = call_tmp;
  T = &x;
  help6(this8, T, _ln, _fn);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray6(x, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:816 */
static void help(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this8;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  append(call_tmp8, call_tmp9, _ln, _fn);
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this8;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:816 */
static void help2(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this8;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  append(call_tmp8, call_tmp9, _ln, _fn);
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this8;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:816 */
static void help3(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this8;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  append(call_tmp8, call_tmp9, _ln, _fn);
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this8;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:816 */
static void help4(DefaultAssociativeDom_chpl_taskID_t_F this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultAssociativeDom_chpl_taskID_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this8;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  append(call_tmp8, call_tmp9, _ln, _fn);
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this8;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:816 */
static void help5(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this8;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  append(call_tmp8, call_tmp9, _ln, _fn);
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this8;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:816 */
static void help6(DefaultRectangularDom_2_int64_t_F this8, _ref_DefaultRectangularArr__real64_2_int64_t_F x, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultRectangularArr__real64_2_int64_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultRectangularDom_2_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this8;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  append(call_tmp8, call_tmp9, _ln, _fn);
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this8;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:835 */
static void add(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t i, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  ret = this8;
  dsiAdd(ret, i, INT64(-1), true, _ln, _fn);
  return;
}

/* ChapelArray.chpl:839 */
static void remove2(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t i, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  ret = this8;
  dsiRemove(ret, i, _ln, _fn);
  return;
}

/* ChapelArray.chpl:856 */
static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  ret = this8;
  call_tmp = dsiNumIndices(ret, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:858 */
static int64_t high(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  ret = this8;
  call_tmp = dsiHigh(ret, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:866 */
static chpl_bool member(DefaultAssociativeDom_chpl_taskID_t_F this8, _tuple_1_star_chpl_taskID_t* const i, int64_t _ln, c_string _fn) {
  DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  chpl_bool call_tmp;
  chpl_taskID_t coerce_tmp;
  ret = this8;
  coerce_tmp = *(*(i) + INT64(0));
  call_tmp = dsiMember(ret, coerce_tmp, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:873 */
static chpl_bool member2(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t _e0_i, int64_t _ln, c_string _fn) {
  _tuple_1_star_chpl_taskID_t i;
  chpl_bool call_tmp;
  *(i + INT64(0)) = _e0_i;
  call_tmp = member(this8, &i, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:1065 */
static void setIndices(DefaultRectangularDom_1_int64_t_F this8, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  ret = this8;
  dsiSetIndices(ret, x, _ln, _fn);
  return;
}

/* ChapelArray.chpl:1065 */
static void setIndices2(DefaultRectangularDom_2_int64_t_F this8, _tuple_2_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_2_int64_t_F ret = NULL;
  ret = this8;
  dsiSetIndices2(ret, x, _ln, _fn);
  return;
}

/* ChapelArray.chpl:1072 */
static void getIndices(DefaultRectangularDom_1_int64_t_F this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F ret_x1;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  _tuple_1_star_range_int64_t_bounded_F call_tmp;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  ret_to_arg_ref_tmp_ = &call_tmp;
  dsiGetIndices(ret, ret_to_arg_ref_tmp_, _ln, _fn);
  ret_x1 = *(call_tmp + INT64(0));
  *(*(_retArg) + INT64(0)) = ret_x1;
  return;
}

/* ChapelArray.chpl:1283 */
static DefaultRectangularArr_locale_1_int64_t_F _construct__array(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  initialize(this8);
  return this8;
}

/* ChapelArray.chpl:1283 */
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  initialize2(this8);
  return this8;
}

/* ChapelArray.chpl:1283 */
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _value, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  initialize3(this8);
  return this8;
}

/* ChapelArray.chpl:1283 */
static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F _value, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  initialize4(this8);
  return this8;
}

/* ChapelArray.chpl:1283 */
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _value, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F meme, int64_t _ln, c_string _fn) {
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  initialize5(this8);
  return this8;
}

/* ChapelArray.chpl:1283 */
static DefaultRectangularArr__real64_2_int64_t_F _construct__array6(DefaultRectangularArr__real64_2_int64_t_F _value, DefaultRectangularArr__real64_2_int64_t_F meme, int64_t _ln, c_string _fn) {
  DefaultRectangularArr__real64_2_int64_t_F this8 = NULL;
  this8 = meme;
  this8 = _value;
  initialize6(this8);
  return this8;
}

/* ChapelArray.chpl:1288 */
static void initialize(DefaultRectangularArr_locale_1_int64_t_F this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes();
  return;
}

/* ChapelArray.chpl:1288 */
static void initialize2(DefaultRectangularArr_localesSignal_1_int64_t_F this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes2();
  return;
}

/* ChapelArray.chpl:1288 */
static void initialize3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes3();
  return;
}

/* ChapelArray.chpl:1288 */
static void initialize4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes4();
  return;
}

/* ChapelArray.chpl:1288 */
static void initialize5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes4();
  return;
}

/* ChapelArray.chpl:1288 */
static void initialize6(DefaultRectangularArr__real64_2_int64_t_F this8) {
  chpl_incRefCountsForDomainsInArrayEltTypes5();
  return;
}

/* ChapelArray.chpl:1308 */
static void chpl___TILDE__array(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularArr_locale_1_int64_t_F ret2 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  chpl_opaque call_tmp5;
  ret = this8;
  call_tmp2 = ((BaseArr)(ret));
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes();
    ret2 = this8;
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:1308 */
static void chpl___TILDE__array2(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  chpl_opaque call_tmp5;
  ret = this8;
  call_tmp2 = ((BaseArr)(ret));
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes2();
    ret2 = this8;
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:1308 */
static void chpl___TILDE__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret2 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  chpl_opaque call_tmp5;
  ret = this8;
  call_tmp2 = ((BaseArr)(ret));
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes3();
    ret2 = this8;
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:1308 */
static void chpl___TILDE__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F ret2 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  chpl_opaque call_tmp5;
  ret = this8;
  call_tmp2 = ((BaseArr)(ret));
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes4();
    ret2 = this8;
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:1308 */
static void chpl___TILDE__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, int64_t _ln, c_string _fn) {
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F delete_tmp = NULL;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret2 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_3 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_4 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_5 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  chpl_opaque call_tmp5;
  ret = this8;
  call_tmp2 = ((BaseArr)(ret));
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes4();
    ret2 = this8;
    delete_tmp = ret2;
    _field_destructor_tmp_ = (delete_tmp)->tmpTable;
    chpl__autoDestroy8(_field_destructor_tmp_, _ln, _fn);
    _field_destructor_tmp_2 = (delete_tmp)->tmpDom;
    chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
    _field_destructor_tmp_3 = (delete_tmp)->data;
    chpl__autoDestroy8(_field_destructor_tmp_3, _ln, _fn);
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    _field_destructor_tmp_4 = &((_parent_destructor_tmp_)->_arrCnt);
    _field_destructor_tmp_5 = &((_field_destructor_tmp_4)->_cnt);
    call_tmp4 = &((_field_destructor_tmp_5)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:1308 */
static void chpl___TILDE__array6(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn) {
  DefaultRectangularArr__real64_2_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularArr__real64_2_int64_t_F ret2 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  chpl_opaque call_tmp5;
  ret = this8;
  call_tmp2 = ((BaseArr)(ret));
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes5();
    ret2 = this8;
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5, _ln, _fn);
  }
  return;
}

/* ChapelArray.chpl:1324 */
static void _dom(DefaultRectangularArr_locale_1_int64_t_F this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = ret;
  ret2 = (call_tmp)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _getDomain(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = chpl__initCopy2(call_tmp2, _ln, _fn);
  chpl__autoDestroy2(call_tmp2, _ln, _fn);
  return;
}

/* ChapelArray.chpl:1324 */
static void _dom2(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  call_tmp = ret;
  ret2 = (call_tmp)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _getDomain(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:1447 */
static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this8;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _newArray(ret, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:2035 */
static void chpl___ASSIGN_(DefaultDist a, DefaultDist b, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  DefaultDist ret = NULL;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  DefaultDist call_tmp3 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  DefaultDist ret2 = NULL;
  BaseDist coerce_tmp = NULL;
  BaseDist call_tmp4 = NULL;
  _ref_list_BaseDom call_tmp5 = NULL;
  int64_t ret3;
  chpl_bool call_tmp6;
  DefaultDist ret4 = NULL;
  DefaultDist ret5 = NULL;
  object call_tmp7 = NULL;
  object call_tmp8 = NULL;
  chpl_bool call_tmp9;
  DefaultDist ret6 = NULL;
  BaseDist coerce_tmp2 = NULL;
  BaseDist call_tmp10 = NULL;
  _ref_atomic_refcnt call_tmp11 = NULL;
  _ref_atomic_int64 call_tmp12 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp13 = NULL;
  DefaultDist ret7 = NULL;
  DefaultDist ret8 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = a;
  call_tmp = ((object)(ret));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    ret_to_arg_ref_tmp_ = &call_tmp3;
    clone2(b, ret_to_arg_ref_tmp_, _ln, _fn);
    a = call_tmp3;
  } else {
    ret2 = a;
    call_tmp4 = ((BaseDist)(ret2));
    coerce_tmp = call_tmp4;
    call_tmp5 = &((coerce_tmp)->_doms);
    ret3 = (call_tmp5)->length;
    call_tmp6 = (ret3 == INT64(0));
    if (call_tmp6) {
      ret4 = a;
      ret5 = b;
      call_tmp7 = ((object)(ret4));
      call_tmp8 = ((object)(ret5));
      call_tmp9 = (call_tmp7 == call_tmp8);
      if (call_tmp9) {
        ret6 = a;
        call_tmp10 = ((BaseDist)(ret6));
        coerce_tmp2 = call_tmp10;
        compilerAssert();
        call_tmp11 = &((coerce_tmp2)->_distCnt);
        call_tmp12 = &((call_tmp11)->_cnt);
        default_argorder = local_memory_order_seq_cst;
        call_tmp13 = &((call_tmp12)->_v);
        atomic_fetch_add_explicit_int_least64_t(call_tmp13, INT64(1), default_argorder);
      } else {
        ret7 = a;
        ret8 = b;
        dsiAssign(ret7, ret8);
      }
    } else {
      halt("assignment to distributions with declared domains is not yet supported", _ln, _fn);
    }
  }
  return;
}

/* ChapelArray.chpl:2057 */
static void chpl___ASSIGN_2(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  list_BaseArr ret2;
  list_BaseArr _ic__F0_this;
  listNode_BaseArr tmp = NULL;
  listNode_BaseArr ret3 = NULL;
  chpl_bool T;
  object call_tmp2 = NULL;
  chpl_bool call_tmp3;
  BaseArr ret4 = NULL;
  chpl_bool _dynamic_dispatch_tmp_;
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = NULL;
  chpl_bool _dynamic_dispatch_tmp_2;
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = NULL;
  chpl_bool _dynamic_dispatch_tmp_3;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _cast_tmp_3 = NULL;
  chpl_bool _dynamic_dispatch_tmp_4;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F _cast_tmp_4 = NULL;
  chpl_bool _dynamic_dispatch_tmp_5;
  DefaultRectangularArr__real64_2_int64_t_F _cast_tmp_5 = NULL;
  listNode_BaseArr ret5 = NULL;
  object call_tmp4 = NULL;
  chpl_bool call_tmp5;
  _tuple_1_star_range_int64_t_bounded_F call_tmp6;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp7 = NULL;
  list_BaseArr ret7;
  list_BaseArr _ic__F0_this2;
  listNode_BaseArr tmp2 = NULL;
  listNode_BaseArr ret8 = NULL;
  chpl_bool T2;
  object call_tmp8 = NULL;
  chpl_bool call_tmp9;
  BaseArr ret9 = NULL;
  listNode_BaseArr ret10 = NULL;
  object call_tmp10 = NULL;
  chpl_bool call_tmp11;
  ret = a;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  ret2 = (coerce_tmp)->_arrs;
  _ic__F0_this = ret2;
  ret3 = (&_ic__F0_this)->first;
  tmp = ret3;
  call_tmp2 = ((object)(ret3));
  call_tmp3 = (call_tmp2 != nil);
  T = call_tmp3;
  while (T) {
    ret4 = (tmp)->data;
    _dynamic_dispatch_tmp_ = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
    if (_dynamic_dispatch_tmp_) {
      _cast_tmp_ = ((DefaultRectangularArr_locale_1_int64_t_F)(ret4));
      dsiReallocate2(_cast_tmp_, b, _ln, _fn);
    } else {
      _dynamic_dispatch_tmp_2 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
      if (_dynamic_dispatch_tmp_2) {
        _cast_tmp_2 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(ret4));
        dsiReallocate3(_cast_tmp_2, b, _ln, _fn);
      } else {
        _dynamic_dispatch_tmp_3 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F);
        if (_dynamic_dispatch_tmp_3) {
          _cast_tmp_3 = ((DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F)(ret4));
          dsiReallocate4(_cast_tmp_3, b, _ln, _fn);
        } else {
          _dynamic_dispatch_tmp_4 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F);
          if (_dynamic_dispatch_tmp_4) {
            _cast_tmp_4 = ((DefaultRectangularArr_chpldev_Task_1_int64_t_F)(ret4));
            dsiReallocate5(_cast_tmp_4, b, _ln, _fn);
          } else {
            _dynamic_dispatch_tmp_5 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr__real64_2_int64_t_F);
            if (_dynamic_dispatch_tmp_5) {
              _cast_tmp_5 = ((DefaultRectangularArr__real64_2_int64_t_F)(ret4));
              dsiReallocate6(_cast_tmp_5, b, _ln, _fn);
            } else {
              dsiReallocate(ret4, b, _ln, _fn);
            }
          }
        }
      }
    }
    ret5 = (tmp)->next;
    tmp = ret5;
    call_tmp4 = ((object)(ret5));
    call_tmp5 = (call_tmp4 != nil);
    T = call_tmp5;
  }
  ret_to_arg_ref_tmp_ = &call_tmp6;
  getIndices(b, ret_to_arg_ref_tmp_, _ln, _fn);
  setIndices(a, &call_tmp6, _ln, _fn);
  ret6 = a;
  call_tmp7 = ((BaseDom)(ret6));
  coerce_tmp2 = call_tmp7;
  ret7 = (coerce_tmp2)->_arrs;
  _ic__F0_this2 = ret7;
  ret8 = (&_ic__F0_this2)->first;
  tmp2 = ret8;
  call_tmp8 = ((object)(ret8));
  call_tmp9 = (call_tmp8 != nil);
  T2 = call_tmp9;
  while (T2) {
    ret9 = (tmp2)->data;
    dsiPostReallocate(ret9);
    ret10 = (tmp2)->next;
    tmp2 = ret10;
    call_tmp10 = ((object)(ret10));
    call_tmp11 = (call_tmp10 != nil);
    T2 = call_tmp11;
  }
  return;
}

/* ChapelArray.chpl:2308 */
static void wrapcoforall_fn(_class_localscoforall_fn c) {
  int64_t _ln;
  c_string _fn;
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp = NULL;
  _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _5_rvfDerefTmp;
  _ln = (c)->_ln;
  _fn = (c)->_fn;
  *(_0_locBlock + INT64(0)) = *((c)->_0_locBlock + INT64(0));
  _1_parDim = (c)->_1_parDim;
  _2_numChunks = (c)->_2_numChunks;
  _3_chunk = (c)->_3_chunk;
  _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  *(_5_rvfDerefTmp + INT64(0)) = *((c)->_5_rvfDerefTmp + INT64(0));
  *(_5_rvfDerefTmp + INT64(1)) = *((c)->_5_rvfDerefTmp + INT64(1));
  coforall_fn(&_0_locBlock, _1_parDim, _2_numChunks, _3_chunk, _4_rvfDerefTmp, &_5_rvfDerefTmp, _ln, _fn);
  chpl_here_free(((void*)(c)), _ln, _fn);
  return;
}

/* ChapelArray.chpl:2308 */
static void wrapcoforall_fn2(_class_localscoforall_fn3 c) {
  int64_t _ln;
  c_string _fn;
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp = NULL;
  _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F _5_rvfDerefTmp;
  _ln = (c)->_ln;
  _fn = (c)->_fn;
  *(_0_locBlock + INT64(0)) = *((c)->_0_locBlock + INT64(0));
  _1_parDim = (c)->_1_parDim;
  _2_numChunks = (c)->_2_numChunks;
  _3_chunk = (c)->_3_chunk;
  _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  *(_5_rvfDerefTmp + INT64(0)) = *((c)->_5_rvfDerefTmp + INT64(0));
  *(_5_rvfDerefTmp + INT64(1)) = *((c)->_5_rvfDerefTmp + INT64(1));
  coforall_fn3(&_0_locBlock, _1_parDim, _2_numChunks, _3_chunk, _4_rvfDerefTmp, &_5_rvfDerefTmp, _ln, _fn);
  chpl_here_free(((void*)(c)), _ln, _fn);
  return;
}

/* ChapelArray.chpl:2369 */
static void chpl___ASSIGN_3(DefaultRectangularArr__real64_2_int64_t_F a, _real64 b, int64_t _ln, c_string _fn) {
  int64_t local_dataParMinGranularity;
  chpl_bool local_dataParIgnoreRunningTasks;
  int64_t local_dataParTasksPerLocale;
  DefaultRectangularArr__real64_2_int64_t_F chpl__iter = NULL;
  DefaultRectangularArr__real64_2_int64_t_F ret = NULL;
  int64_t default_argtasksPerLocale;
  chpl_bool default_argignoreRunning;
  int64_t default_argminIndicesPerTask;
  DefaultRectangularArr__real64_2_int64_t_F this8 = NULL;
  DefaultRectangularDom_2_int64_t_F ret2 = NULL;
  _tuple_2_star_int64_t default_argoffset;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ir_F4_offset_x1;
  int64_t _ir_F4_offset_x2;
  int32_t call_tmp;
  chpl_localeID_t call_tmp2;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_2 = NULL;
  chpl_localeID_t call_tmp3;
  locale call_tmp4 = NULL;
  int32_t _virtual_method_tmp_;
  int64_t T;
  chpl_bool call_tmp5;
  locale call_tmp6 = NULL;
  int32_t call_tmp7;
  chpl_localeID_t call_tmp8;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_3 = NULL;
  chpl_localeID_t call_tmp9;
  locale call_tmp10 = NULL;
  int64_t ret3;
  int64_t const_tmp_x1;
  int64_t const_tmp_x2;
  DefaultRectangularDom_2_int64_t_F this9 = NULL;
  chpl_bool call_tmp11;
  _tuple_2_star_range_int64_t_bounded_F ret4;
  int64_t ret_x1;
  int64_t ret_x2;
  _tuple_2_star_int64_t wrap_call_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_4 = NULL;
  int64_t numChunks;
  int64_t parDim;
  chpl_bool call_tmp12;
  range_int64_t_bounded_F block_x1;
  range_int64_t_bounded_F block_x2;
  range_int64_t_bounded_F this10;
  range_int64_t_bounded_F wrap_call_tmp2;
  range_int64_t_bounded_F this11;
  range_int64_t_bounded_F wrap_call_tmp3;
  _ref_range_int64_t_bounded_F call_tmp13 = NULL;
  range_int64_t_boundedLow_F call_tmp14;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_5 = NULL;
  _ref_range_int64_t_bounded_F call_tmp15 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  DefaultRectangularDom_2_int64_t_F this12 = NULL;
  int64_t call_tmp16;
  range_int64_t_bounded_F call_tmp17;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
  _ref_range_int64_t_bounded_F call_tmp18 = NULL;
  range_int64_t_boundedLow_F call_tmp19;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_7 = NULL;
  _ref_range_int64_t_bounded_F call_tmp20 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_2 = NULL;
  DefaultRectangularDom_2_int64_t_F this13 = NULL;
  int64_t call_tmp21;
  range_int64_t_bounded_F call_tmp22;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_8 = NULL;
  DefaultRectangularArr__real64_2_int64_t_F ret5 = NULL;
  DefaultRectangularArr__real64_2_int64_t_F _ic__F0_this = NULL;
  DefaultRectangularArr__real64_2_int64_t_F this14 = NULL;
  DefaultRectangularDom_2_int64_t_F ret6 = NULL;
  _tuple_2_star_int64_t default_argoffset2;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_9 = NULL;
  range_int64_t_bounded_F _formal_tmp_followThis_x1;
  range_int64_t_bounded_F _formal_tmp_followThis_x2;
  range_int64_t_bounded_F block_x12;
  range_int64_t_bounded_F block_x22;
  range_int64_t_bounded_F this15;
  range_int64_t_bounded_F wrap_call_tmp4;
  range_int64_t_bounded_F this16;
  range_int64_t_bounded_F wrap_call_tmp5;
  _ref_range_int64_t_bounded_F call_tmp23 = NULL;
  _ref_range_int64_t_bounded_F call_tmp24 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_3 = NULL;
  DefaultRectangularDom_2_int64_t_F this17 = NULL;
  int64_t ret7;
  int64_t ret8;
  int64_t call_tmp25;
  _ref_range_int64_t_bounded_F call_tmp26 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_4 = NULL;
  DefaultRectangularDom_2_int64_t_F this18 = NULL;
  int64_t ret9;
  int64_t ret10;
  int64_t call_tmp27;
  range_int64_t_bounded_F call_tmp28;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_10 = NULL;
  _ref_range_int64_t_bounded_F call_tmp29 = NULL;
  _ref_range_int64_t_bounded_F call_tmp30 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_5 = NULL;
  DefaultRectangularDom_2_int64_t_F this19 = NULL;
  int64_t ret11;
  int64_t ret12;
  int64_t call_tmp31;
  _ref_range_int64_t_bounded_F call_tmp32 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_6 = NULL;
  DefaultRectangularDom_2_int64_t_F this20 = NULL;
  int64_t ret13;
  int64_t ret14;
  int64_t call_tmp33;
  range_int64_t_bounded_F call_tmp34;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_11 = NULL;
  range_int64_t_bounded_F _ic__F1_block_x2;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret15;
  int64_t end;
  int64_t ret16;
  int64_t i2;
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret17;
  int64_t end2;
  int64_t ret18;
  DefaultRectangularArr__real64_2_int64_t_F this21 = NULL;
  int64_t sum;
  int64_t ret_x12;
  _ref__tuple_2_star_int64_t ret_ = NULL;
  int64_t call_tmp35;
  int64_t ret_x22;
  _ref__tuple_2_star_int64_t ret_2 = NULL;
  int64_t call_tmp36;
  _ddata__real64 ret19 = NULL;
  _ddata__real64 coerce_tmp = NULL;
  _ref__real64 call_tmp37 = NULL;
  _tuple_2_star_range_int64_t_bounded_F locBlock;
  range_int64_t_bounded_F this22;
  range_int64_t_bounded_F wrap_call_tmp6;
  range_int64_t_bounded_F this23;
  range_int64_t_bounded_F wrap_call_tmp7;
  _ref_range_int64_t_bounded_F call_tmp38 = NULL;
  range_int64_t_boundedLow_F call_tmp39;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_12 = NULL;
  _ref_range_int64_t_bounded_F call_tmp40 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_7 = NULL;
  DefaultRectangularDom_2_int64_t_F this24 = NULL;
  int64_t call_tmp41;
  range_int64_t_bounded_F call_tmp42;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_13 = NULL;
  _ref_range_int64_t_bounded_F call_tmp43 = NULL;
  range_int64_t_boundedLow_F call_tmp44;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_14 = NULL;
  _ref_range_int64_t_bounded_F call_tmp45 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _this_tmp_8 = NULL;
  DefaultRectangularDom_2_int64_t_F this25 = NULL;
  int64_t call_tmp46;
  range_int64_t_bounded_F call_tmp47;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_15 = NULL;
  chpl___EndCount _coforallCount = NULL;
  chpl___EndCount this26 = NULL;
  int64_t call_tmp48;
  chpl_opaque cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this27;
  atomic_int_least64_t ret20;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp8;
  chpl_task_list_p ret21;
  chpl___EndCount wrap_call_tmp9 = NULL;
  range_int64_t_boundedLow_F call_tmp49;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_16 = NULL;
  range_int64_t_bounded_F call_tmp50;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_17 = NULL;
  range_int64_t_bounded_F _ic__F0_this4;
  int64_t i4;
  int64_t ret22;
  int64_t end3;
  int64_t ret23;
  chpl___EndCount rvfDerefTmp = NULL;
  _class_localscoforall_fn2 _args_forcoforall_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl___EndCount delete_tmp = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp51 = NULL;
  chpl_opaque call_tmp52;
  local_dataParMinGranularity = dataParMinGranularity;
  local_dataParIgnoreRunningTasks = dataParIgnoreRunningTasks;
  local_dataParTasksPerLocale = dataParTasksPerLocale;
  chpl__iter = chpl__autoCopy10(a, _ln, _fn);
  ret = chpl__iter;
  default_argtasksPerLocale = local_dataParTasksPerLocale;
  default_argignoreRunning = local_dataParIgnoreRunningTasks;
  default_argminIndicesPerTask = local_dataParMinGranularity;
  this8 = ret;
  ret2 = (this8)->dom;
  ret_to_arg_ref_tmp_ = &default_argoffset;
  createTuple2(INT64(0), ret_to_arg_ref_tmp_, _ln, _fn);
  _ir_F4_offset_x1 = *(default_argoffset + INT64(0));
  _ir_F4_offset_x2 = *(default_argoffset + INT64(1));
  call_tmp = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_2, _ln, _fn);
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  _virtual_method_tmp_ = ((object)(call_tmp4))->chpl__cid;
  ((int64_t(*)(locale, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(3))])(call_tmp4, _ln, _fn);
  call_tmp5 = (default_argtasksPerLocale == INT64(0));
  if (call_tmp5) {
    call_tmp7 = chpl_task_getRequestedSubloc();
    ret_to_arg_ref_tmp_3 = &call_tmp8;
    chpl_buildLocaleID(chpl_nodeID, call_tmp7, ret_to_arg_ref_tmp_3, _ln, _fn);
    call_tmp9 = chpl__initCopy_chpl_rt_localeID_t(call_tmp8);
    call_tmp10 = chpl_localeID_to_locale(&call_tmp9, _ln, _fn);
    call_tmp6 = call_tmp10;
    ret3 = (call_tmp6)->maxTaskPar;
    T = ret3;
  } else {
    T = default_argtasksPerLocale;
  }
  this9 = ret2;
  call_tmp11 = chpl_task_getSerial();
  if (call_tmp11) {
    const_tmp_x1 = INT64(1);
    const_tmp_x2 = INT64(-1);
  } else {
    *(ret4 + INT64(0)) = *((this9)->ranges + INT64(0));
    *(ret4 + INT64(1)) = *((this9)->ranges + INT64(1));
    ret_to_arg_ref_tmp_4 = &wrap_call_tmp;
    _computeChunkStuff2(T, default_argignoreRunning, default_argminIndicesPerTask, &ret4, ret_to_arg_ref_tmp_4, _ln, _fn);
    ret_x1 = *(wrap_call_tmp + INT64(0));
    ret_x2 = *(wrap_call_tmp + INT64(1));
    const_tmp_x1 = ret_x1;
    const_tmp_x2 = ret_x2;
  }
  numChunks = const_tmp_x1;
  parDim = const_tmp_x2;
  call_tmp12 = (const_tmp_x1 == INT64(1));
  if (call_tmp12) {
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
    wrap_call_tmp2 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this10, _ln, _fn);
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
    wrap_call_tmp3 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this11, _ln, _fn);
    block_x1 = wrap_call_tmp2;
    block_x2 = wrap_call_tmp3;
    call_tmp13 = &block_x1;
    ret_to_arg_ref_tmp_5 = &call_tmp14;
    _build_range2(_ir_F4_offset_x1, ret_to_arg_ref_tmp_5, _ln, _fn);
    this12 = ret2;
    _this_tmp_ = &((this12)->ranges);
    call_tmp15 = (*(_this_tmp_) + INT64(0));
    call_tmp16 = length(call_tmp15, _ln, _fn);
    ret_to_arg_ref_tmp_6 = &call_tmp17;
    chpl___POUND_(&call_tmp14, call_tmp16, ret_to_arg_ref_tmp_6, _ln, _fn);
    *(call_tmp13) = call_tmp17;
    call_tmp18 = &block_x2;
    ret_to_arg_ref_tmp_7 = &call_tmp19;
    _build_range2(_ir_F4_offset_x2, ret_to_arg_ref_tmp_7, _ln, _fn);
    this13 = ret2;
    _this_tmp_2 = &((this13)->ranges);
    call_tmp20 = (*(_this_tmp_2) + INT64(1));
    call_tmp21 = length(call_tmp20, _ln, _fn);
    ret_to_arg_ref_tmp_8 = &call_tmp22;
    chpl___POUND_(&call_tmp19, call_tmp21, ret_to_arg_ref_tmp_8, _ln, _fn);
    *(call_tmp18) = call_tmp22;
    ret5 = chpl__iter;
    _ic__F0_this = ret5;
    this14 = ret5;
    ret6 = (this14)->dom;
    ret_to_arg_ref_tmp_9 = &default_argoffset2;
    createTuple2(INT64(0), ret_to_arg_ref_tmp_9, _ln, _fn);
    _formal_tmp_followThis_x1 = block_x1;
    _formal_tmp_followThis_x2 = block_x2;
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
    wrap_call_tmp4 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this15, _ln, _fn);
    (&this16)->_low = INT64(0);
    (&this16)->_high = INT64(0);
    (&this16)->_stride = INT64(0);
    (&this16)->_alignment = INT64(0);
    (&this16)->_aligned = false;
    (&this16)->_low = INT64(1);
    (&this16)->_high = INT64(0);
    (&this16)->_stride = INT64(1);
    (&this16)->_alignment = INT64(0);
    (&this16)->_aligned = false;
    wrap_call_tmp5 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this16, _ln, _fn);
    block_x12 = wrap_call_tmp4;
    block_x22 = wrap_call_tmp5;
    call_tmp23 = &block_x12;
    this17 = ret6;
    _this_tmp_3 = &((this17)->ranges);
    call_tmp24 = (*(_this_tmp_3) + INT64(0));
    ret7 = (call_tmp24)->_low;
    ret8 = (&_formal_tmp_followThis_x1)->_low;
    call_tmp25 = (ret7 + ret8);
    this18 = ret6;
    _this_tmp_4 = &((this18)->ranges);
    call_tmp26 = (*(_this_tmp_4) + INT64(0));
    ret9 = (call_tmp26)->_low;
    ret10 = (&_formal_tmp_followThis_x1)->_high;
    call_tmp27 = (ret9 + ret10);
    ret_to_arg_ref_tmp_10 = &call_tmp28;
    _build_range(call_tmp25, call_tmp27, ret_to_arg_ref_tmp_10, _ln, _fn);
    *(call_tmp23) = call_tmp28;
    call_tmp29 = &block_x22;
    this19 = ret6;
    _this_tmp_5 = &((this19)->ranges);
    call_tmp30 = (*(_this_tmp_5) + INT64(1));
    ret11 = (call_tmp30)->_low;
    ret12 = (&_formal_tmp_followThis_x2)->_low;
    call_tmp31 = (ret11 + ret12);
    this20 = ret6;
    _this_tmp_6 = &((this20)->ranges);
    call_tmp32 = (*(_this_tmp_6) + INT64(1));
    ret13 = (call_tmp32)->_low;
    ret14 = (&_formal_tmp_followThis_x2)->_high;
    call_tmp33 = (ret13 + ret14);
    ret_to_arg_ref_tmp_11 = &call_tmp34;
    _build_range(call_tmp31, call_tmp33, ret_to_arg_ref_tmp_11, _ln, _fn);
    *(call_tmp29) = call_tmp34;
    _ic__F1_block_x2 = block_x22;
    _ic__F0_this2 = block_x12;
    ret15 = (&_ic__F0_this2)->_low;
    ret16 = (&_ic__F0_this2)->_high;
    end = ret16;
    _ic__F0_this3 = _ic__F1_block_x2;
    ret17 = (&_ic__F0_this3)->_low;
    ret18 = (&_ic__F0_this3)->_high;
    end2 = ret18;
    for (i = ret15; ((i <= end)); i += INT64(1)) {
      i2 = i;
      this21 = _ic__F0_this;
      ret_ = &((this21)->blk);
      ret_x12 = *(*(ret_) + INT64(0));
      call_tmp35 = (i2 * ret_x12);
      ret_2 = &((this21)->blk);
      ret_x22 = *(*(ret_2) + INT64(1));
      ret19 = (this21)->shiftedData;
      coerce_tmp = ret19;
      for (i3 = ret17; ((i3 <= end2)); i3 += INT64(1)) {
        sum = INT64(0);
        sum += call_tmp35;
        call_tmp36 = (i3 * ret_x22);
        sum += call_tmp36;
        call_tmp37 = (coerce_tmp + sum);
        *(call_tmp37) = b;
      }
    }
  } else {
    (&this22)->_low = INT64(0);
    (&this22)->_high = INT64(0);
    (&this22)->_stride = INT64(0);
    (&this22)->_alignment = INT64(0);
    (&this22)->_aligned = false;
    (&this22)->_low = INT64(1);
    (&this22)->_high = INT64(0);
    (&this22)->_stride = INT64(1);
    (&this22)->_alignment = INT64(0);
    (&this22)->_aligned = false;
    wrap_call_tmp6 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this22, _ln, _fn);
    (&this23)->_low = INT64(0);
    (&this23)->_high = INT64(0);
    (&this23)->_stride = INT64(0);
    (&this23)->_alignment = INT64(0);
    (&this23)->_aligned = false;
    (&this23)->_low = INT64(1);
    (&this23)->_high = INT64(0);
    (&this23)->_stride = INT64(1);
    (&this23)->_alignment = INT64(0);
    (&this23)->_aligned = false;
    wrap_call_tmp7 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this23, _ln, _fn);
    *(locBlock + INT64(0)) = wrap_call_tmp6;
    *(locBlock + INT64(1)) = wrap_call_tmp7;
    call_tmp38 = (locBlock + INT64(0));
    ret_to_arg_ref_tmp_12 = &call_tmp39;
    _build_range2(_ir_F4_offset_x1, ret_to_arg_ref_tmp_12, _ln, _fn);
    this24 = ret2;
    _this_tmp_7 = &((this24)->ranges);
    call_tmp40 = (*(_this_tmp_7) + INT64(0));
    call_tmp41 = length(call_tmp40, _ln, _fn);
    ret_to_arg_ref_tmp_13 = &call_tmp42;
    chpl___POUND_(&call_tmp39, call_tmp41, ret_to_arg_ref_tmp_13, _ln, _fn);
    *(call_tmp38) = call_tmp42;
    call_tmp43 = (locBlock + INT64(1));
    ret_to_arg_ref_tmp_14 = &call_tmp44;
    _build_range2(_ir_F4_offset_x2, ret_to_arg_ref_tmp_14, _ln, _fn);
    this25 = ret2;
    _this_tmp_8 = &((this25)->ranges);
    call_tmp45 = (*(_this_tmp_8) + INT64(1));
    call_tmp46 = length(call_tmp45, _ln, _fn);
    ret_to_arg_ref_tmp_15 = &call_tmp47;
    chpl___POUND_(&call_tmp44, call_tmp46, ret_to_arg_ref_tmp_15, _ln, _fn);
    *(call_tmp43) = call_tmp47;
    call_tmp48 = sizeof(chpl_chpl___EndCount_object);
    cast_tmp = chpl_here_alloc(call_tmp48, INT16(15), _ln, _fn);
    this26 = ((chpl___EndCount)(cast_tmp));
    ((object)(this26))->chpl__cid = chpl__cid_chpl___EndCount;
    (this26)->i = _init_class_tmp_;
    (this26)->taskCnt = INT64(0);
    (this26)->taskList = NULL;
    ret20 = type_tmp;
    _ref_tmp_ = &ret20;
    atomic_init_int_least64_t(_ref_tmp_, INT64(0));
    (&this27)->_v = ret20;
    wrap_call_tmp8 = _construct_atomic_int64(ret20, &this27, _ln, _fn);
    (this26)->i = wrap_call_tmp8;
    (this26)->taskCnt = INT64(0);
    ret21 = NULL;
    (this26)->taskList = ret21;
    wrap_call_tmp9 = _construct__EndCount(&wrap_call_tmp8, INT64(0), ret21, this26, _ln, _fn);
    _coforallCount = wrap_call_tmp9;
    ret_to_arg_ref_tmp_16 = &call_tmp49;
    _build_range2(INT64(0), ret_to_arg_ref_tmp_16, _ln, _fn);
    ret_to_arg_ref_tmp_17 = &call_tmp50;
    chpl___POUND_(&call_tmp49, const_tmp_x1, ret_to_arg_ref_tmp_17, _ln, _fn);
    _ic__F0_this4 = call_tmp50;
    ret22 = (&_ic__F0_this4)->_low;
    ret23 = (&_ic__F0_this4)->_high;
    end3 = ret23;
    for (i4 = ret22; ((i4 <= end3)); i4 += INT64(1)) {
      _upEndCount(_coforallCount, _ln, _fn);
      rvfDerefTmp = _coforallCount;
      chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn2_object);
      chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(42), _ln, _fn);
      _args_forcoforall_fn = ((_class_localscoforall_fn2)(chpl_here_alloc_tmp));
      *((_args_forcoforall_fn)->_0_locBlock + INT64(0)) = *(locBlock + INT64(0));
      *((_args_forcoforall_fn)->_0_locBlock + INT64(1)) = *(locBlock + INT64(1));
      (_args_forcoforall_fn)->_1_parDim = parDim;
      (_args_forcoforall_fn)->_2_numChunks = numChunks;
      (_args_forcoforall_fn)->_3_chunk = i4;
      (_args_forcoforall_fn)->_4_rvfDerefTmp = rvfDerefTmp;
      (_args_forcoforall_fn)->_5_rvfDerefTmp = chpl__iter;
      (_args_forcoforall_fn)->_6_b = b;
      (_args_forcoforall_fn)->_ln = _ln;
      (_args_forcoforall_fn)->_fn = _fn;
      /*** wrapcoforall_fn3 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(2), ((void*)(_args_forcoforall_fn)), &(((_args_forcoforall_fn)->_4_rvfDerefTmp)->taskList), chpl_nodeID, INT64(2371), "/home/safl/chapel/modules/internal/ChapelArray.chpl");
    }
    chpl_taskListProcess((_coforallCount)->taskList, _ln, _fn);
    _waitEndCount(_coforallCount, _ln, _fn);
    delete_tmp = _coforallCount;
    _field_destructor_tmp_ = &((delete_tmp)->i);
    call_tmp51 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_int_least64_t(call_tmp51);
    call_tmp52 = ((void*)(delete_tmp));
    chpl_here_free(call_tmp52, _ln, _fn);
  }
  chpl__autoDestroy10(chpl__iter, _ln, _fn);
  return;
}

/* ChapelArray.chpl:2371 */
static void wrapcoforall_fn3(_class_localscoforall_fn2 c) {
  int64_t _ln;
  c_string _fn;
  _tuple_2_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp = NULL;
  DefaultRectangularArr__real64_2_int64_t_F _5_rvfDerefTmp = NULL;
  _real64 _6_b;
  _ln = (c)->_ln;
  _fn = (c)->_fn;
  *(_0_locBlock + INT64(0)) = *((c)->_0_locBlock + INT64(0));
  *(_0_locBlock + INT64(1)) = *((c)->_0_locBlock + INT64(1));
  _1_parDim = (c)->_1_parDim;
  _2_numChunks = (c)->_2_numChunks;
  _3_chunk = (c)->_3_chunk;
  _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  _5_rvfDerefTmp = (c)->_5_rvfDerefTmp;
  _6_b = (c)->_6_b;
  coforall_fn2(&_0_locBlock, _1_parDim, _2_numChunks, _3_chunk, _4_rvfDerefTmp, _5_rvfDerefTmp, _6_b, _ln, _fn);
  chpl_here_free(((void*)(c)), _ln, _fn);
  return;
}

/* ChapelArray.chpl:2397 */
static void chpl__auto_destroy__OpaqueIndex(chpl___OpaqueIndex this8, int64_t _ln, c_string _fn) {
  return;
}

/* ChapelArray.chpl:2690 */
static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, c_string _fn) {
  DefaultDist call_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  clone2(a, ret_to_arg_ref_tmp_, _ln, _fn);
  return call_tmp;
}

/* ChapelArray.chpl:2696 */
static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, c_string _fn) {
  DefaultRectangularDom_1_int64_t_F b = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  _tuple_1_star_range_int64_t_bounded_F call_tmp2;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  call_tmp = chpl__convertValueToRuntimeType(a, _ln, _fn);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  b = type_tmp;
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  getIndices(a, ret_to_arg_ref_tmp_2, _ln, _fn);
  setIndices(type_tmp, &call_tmp2, _ln, _fn);
  return b;
}

