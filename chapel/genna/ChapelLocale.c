/* ChapelLocale.chpl:23 */
static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  locale type_tmp = NULL;
  locale type_tmp2 = NULL;
  locale const_tmp = NULL;
  if (chpl__init_ChapelLocale_p) {
    goto _exit_chpl__init_ChapelLocale;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelLocale";
  printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelLocale_p = true;
  {
    chpl__init_LocaleModel(_ln, _fn);
  }
  type_tmp = nil;
  rootLocale = type_tmp;
  type_tmp2 = nil;
  origRootLocale = type_tmp2;
  const_tmp = locale2(_ln, _fn);
  dummyLocale = const_tmp;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelLocale:;
  return;
}

/* ChapelLocale.chpl:31 */
static locale _construct_locale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, c_string _fn) {
  locale this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->parent = parent;
  (this8)->numCores = numCores;
  (this8)->maxTaskPar = maxTaskPar;
  (this8)->runningTaskCounter = *(runningTaskCounter);
  return this8;
}

/* ChapelLocale.chpl:31 */
static void chpl__auto_destroy_locale(locale this8, int64_t _ln, c_string _fn) {
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _field_destructor_tmp_ = &((this8)->runningTaskCounter);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelLocale.chpl:33 */
static locale locale2(int64_t _ln, c_string _fn) {
  locale this8 = NULL;
  locale this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  atomic_int64 _init_class_tmp_;
  locale call_tmp2 = NULL;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  locale wrap_call_tmp2 = NULL;
  call_tmp = sizeof(chpl_locale_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(1), _ln, _fn);
  this9 = ((locale)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_locale;
  (this9)->parent = nil;
  (this9)->numCores = INT64(0);
  (this9)->maxTaskPar = INT64(0);
  (this9)->runningTaskCounter = _init_class_tmp_;
  call_tmp2 = ((locale)(nil));
  (this9)->parent = call_tmp2;
  (this9)->numCores = INT64(0);
  (this9)->maxTaskPar = INT64(0);
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this10, _ln, _fn);
  (this9)->runningTaskCounter = wrap_call_tmp;
  wrap_call_tmp2 = _construct_locale(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, this9, _ln, _fn);
  return wrap_call_tmp2;
}

/* ChapelLocale.chpl:49 */
static int64_t id(locale this8, int64_t _ln, c_string _fn) {
  int64_t call_tmp;
  int32_t _virtual_method_tmp_;
  _virtual_method_tmp_ = ((object)(this8))->chpl__cid;
  call_tmp = ((int64_t(*)(locale, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(this8, _ln, _fn);
  return call_tmp;
}

/* ChapelLocale.chpl:93 */
static int64_t chpl_id(locale this8, int64_t _ln, c_string _fn) {
  halt("Pure virtual function called.", _ln, _fn);
  return INT64(-1);
}

/* ChapelLocale.chpl:114 */
static int64_t getChildCount(locale this8, int64_t _ln, c_string _fn) {
  halt("Pure virtual function called.", _ln, _fn);
  return INT64(0);
}

/* ChapelLocale.chpl:131 */
static locale getChild(locale this8, int64_t idx, int64_t _ln, c_string _fn) {
  halt("Pure virtual function called.", _ln, _fn);
  return this8;
}

/* ChapelLocale.chpl:146 */
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, c_string _fn) {
  AbstractLocaleModel this8 = NULL;
  locale T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_locale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  return meme;
}

/* ChapelLocale.chpl:146 */
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this8, int64_t _ln, c_string _fn) {
  locale _parent_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((locale)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelLocale.chpl:177 */
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, c_string _fn) {
  AbstractRootLocale this8 = NULL;
  locale T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_locale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  return meme;
}

/* ChapelLocale.chpl:177 */
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this8, int64_t _ln, c_string _fn) {
  locale _parent_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((locale)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelLocale.chpl:195 */
static locale localeIDtoLocale(AbstractRootLocale this8, chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
  locale call_tmp = NULL;
  halt("Pure virtual function called.", _ln, _fn);
  call_tmp = ((locale)(this8));
  return call_tmp;
}

/* ChapelLocale.chpl:257 */
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, c_string _fn) {
  localesSignal this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->s = *(s);
  return this8;
}

/* ChapelLocale.chpl:257 */
static void chpl__auto_destroy_localesSignal(localesSignal this8, int64_t _ln, c_string _fn) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _field_destructor_tmp_ = &((this8)->s);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  return;
}

/* ChapelLocale.chpl:260 */
static localesBarrier _construct_localesBarrier(localesBarrier* const meme) {
  localesBarrier this8;
  return *(meme);
}

/* ChapelLocale.chpl:261 */
static void wait2(_ref_localesBarrier this8, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_relaxed;
  int64_t local_numLocales;
  memory_order local_memory_order_seq_cst;
  chpl_bool call_tmp;
  chpl_bool T;
  memory_order default_argorder;
  int64_t count;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this9 = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  int64_t call_tmp2;
  DefaultRectangularArr_localesSignal_1_int64_t_F this10 = NULL;
  int64_t sum;
  int64_t ret_x1;
  _ref__tuple_1_star_int64_t ret_ = NULL;
  int64_t call_tmp3;
  DefaultRectangularArr_localesSignal_1_int64_t_F this11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  DefaultRectangularArr_localesSignal_1_int64_t_F this12 = NULL;
  int64_t sum2;
  int64_t ret_x12;
  _ref__tuple_1_star_int64_t ret_2 = NULL;
  int64_t call_tmp6;
  int64_t call_tmp7;
  DefaultRectangularArr_localesSignal_1_int64_t_F this13 = NULL;
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  int64_t call_tmp8;
  int64_t call_tmp9;
  int64_t call_tmp10;
  int64_t call_tmp11;
  range_int64_t_bounded_F call_tmp12;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_T call_tmp13;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_T _ic__F0_this2;
  chpl_bool call_tmp14;
  _ref_range_int64_t_bounded_T this14 = NULL;
  int64_t i;
  int64_t ret5;
  int64_t ret6;
  int64_t ret7;
  int64_t ret8;
  int64_t call_tmp15;
  int64_t call_tmp16;
  int64_t end;
  int64_t ret9;
  int64_t ret10;
  int64_t ret11;
  int64_t ret12;
  int64_t call_tmp17;
  int64_t call_tmp18;
  DefaultRectangularArr_localesSignal_1_int64_t_F this15 = NULL;
  _ddata_localesSignal ret13 = NULL;
  _ddata_localesSignal coerce_tmp = NULL;
  _ref_localesSignal call_tmp19 = NULL;
  localesSignal coerce_tmp2 = NULL;
  object call_tmp20 = NULL;
  chpl_bool call_tmp21;
  int64_t ret14;
  int64_t call_tmp22;
  chpl_bool call_tmp23;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret15 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this3 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this16 = NULL;
  DefaultRectangularDom_1_int64_t_F ret16 = NULL;
  int64_t call_tmp24;
  DefaultRectangularArr_localesSignal_1_int64_t_F this17 = NULL;
  int64_t sum3;
  int64_t ret_x13;
  _ref__tuple_1_star_int64_t ret_3 = NULL;
  int64_t call_tmp25;
  DefaultRectangularArr_localesSignal_1_int64_t_F this18 = NULL;
  DefaultRectangularDom_1_int64_t_F ret17 = NULL;
  int64_t call_tmp26;
  int64_t call_tmp27;
  DefaultRectangularArr_localesSignal_1_int64_t_F this19 = NULL;
  int64_t sum4;
  int64_t ret_x14;
  _ref__tuple_1_star_int64_t ret_4 = NULL;
  int64_t call_tmp28;
  int64_t call_tmp29;
  DefaultRectangularArr_localesSignal_1_int64_t_F this20 = NULL;
  DefaultRectangularDom_1_int64_t_F ret18 = NULL;
  int64_t call_tmp30;
  int64_t call_tmp31;
  int64_t call_tmp32;
  int64_t call_tmp33;
  range_int64_t_bounded_F call_tmp34;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_T call_tmp35;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_T _ic__F0_this4;
  chpl_bool call_tmp36;
  _ref_range_int64_t_bounded_T this21 = NULL;
  int64_t i2;
  int64_t ret19;
  int64_t ret20;
  int64_t ret21;
  int64_t ret22;
  int64_t call_tmp37;
  int64_t call_tmp38;
  int64_t end2;
  int64_t ret23;
  int64_t ret24;
  int64_t ret25;
  int64_t ret26;
  int64_t call_tmp39;
  int64_t call_tmp40;
  DefaultRectangularArr_localesSignal_1_int64_t_F this22 = NULL;
  _ddata_localesSignal ret27 = NULL;
  _ddata_localesSignal coerce_tmp3 = NULL;
  _ref_localesSignal call_tmp41 = NULL;
  localesSignal coerce_tmp4 = NULL;
  _ref_atomicflag call_tmp42 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp43 = NULL;
  int64_t ret28;
  localesSignal f = NULL;
  localesSignal this23 = NULL;
  int64_t call_tmp44;
  chpl_opaque cast_tmp;
  atomicflag _init_class_tmp_;
  atomicflag this24;
  atomic_flag ret29;
  atomic_flag type_tmp;
  _ref_atomic_flag _ref_tmp_ = NULL;
  atomicflag wrap_call_tmp;
  localesSignal wrap_call_tmp2 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp45 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret30 = NULL;
  int64_t sum5;
  int64_t ret_x15;
  _ref__tuple_1_star_int64_t ret_5 = NULL;
  int64_t call_tmp46;
  _ddata_localesSignal ret31 = NULL;
  _ddata_localesSignal coerce_tmp5 = NULL;
  _ref_localesSignal call_tmp47 = NULL;
  _ref_atomicflag call_tmp48 = NULL;
  memory_order default_argorder3;
  chpl_bool T2;
  _ref_atomic_flag call_tmp49 = NULL;
  chpl_bool call_tmp50;
  chpl_bool call_tmp51;
  _ref_atomic_flag call_tmp52 = NULL;
  chpl_bool call_tmp53;
  chpl_bool call_tmp54;
  localesSignal delete_tmp = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp55 = NULL;
  chpl_opaque call_tmp56;
  local_memory_order_relaxed = memory_order_relaxed;
  local_numLocales = numLocales;
  local_memory_order_seq_cst = memory_order_seq_cst;
  call_tmp = (locIdx == INT64(0));
  if (call_tmp) {
    T = true;
    ret = flags;
    _ic__F0_this = ret;
    this9 = ret;
    this10 = ret;
    ret_ = &((this10)->blk);
    ret_x1 = *(*(ret_) + INT64(0));
    this11 = ret;
    this12 = ret;
    ret_2 = &((this12)->blk);
    ret_x12 = *(*(ret_2) + INT64(0));
    this13 = ret;
    call_tmp22 = (local_numLocales - INT64(1));
    while (T) {
      default_argorder = local_memory_order_seq_cst;
      atomic_fence(default_argorder, _ln, _fn);
      count = INT64(0);
      ret2 = (this9)->dom;
      call_tmp2 = dsiLow(ret2, _ln, _fn);
      sum = INT64(0);
      call_tmp3 = (call_tmp2 * ret_x1);
      sum += call_tmp3;
      ret3 = (this11)->dom;
      call_tmp4 = dsiLow(ret3, _ln, _fn);
      call_tmp5 = (call_tmp4 + INT64(1));
      sum2 = INT64(0);
      call_tmp6 = (call_tmp5 * ret_x12);
      sum2 += call_tmp6;
      call_tmp7 = (sum2 - sum);
      ret4 = (this13)->dom;
      call_tmp8 = dsiNumIndices(ret4, _ln, _fn);
      call_tmp9 = (call_tmp8 - INT64(1));
      call_tmp10 = (call_tmp9 * call_tmp7);
      call_tmp11 = (sum + call_tmp10);
      ret_to_arg_ref_tmp_ = &call_tmp12;
      _build_range(sum, call_tmp11, ret_to_arg_ref_tmp_, _ln, _fn);
      ret_to_arg_ref_tmp_2 = &call_tmp13;
      by(&call_tmp12, call_tmp7, ret_to_arg_ref_tmp_2, _ln, _fn);
      _ic__F0_this2 = call_tmp13;
      this14 = &_ic__F0_this2;
      call_tmp14 = isAmbiguous(this14, _ln, _fn);
      if (call_tmp14) {
        chpl_error("these -- Attempt to iterate over a range with ambiguous alignment.", _ln, _fn);
      }
      ret5 = (&_ic__F0_this2)->_low;
      ret6 = (&_ic__F0_this2)->_alignment;
      ret7 = (&_ic__F0_this2)->_low;
      ret8 = (&_ic__F0_this2)->_stride;
      call_tmp15 = chpl__diffMod(ret6, ret7, ret8, _ln, _fn);
      call_tmp16 = (ret5 + call_tmp15);
      ret9 = (&_ic__F0_this2)->_high;
      ret10 = (&_ic__F0_this2)->_high;
      ret11 = (&_ic__F0_this2)->_alignment;
      ret12 = (&_ic__F0_this2)->_stride;
      call_tmp17 = chpl__diffMod(ret10, ret11, ret12, _ln, _fn);
      call_tmp18 = (ret9 - call_tmp17);
      end = call_tmp18;
      ret14 = (&_ic__F0_this2)->_stride;
      this15 = _ic__F0_this;
      ret13 = (this15)->shiftedData;
      coerce_tmp = ret13;
      for (i = call_tmp16; ((i <= end)); i += ret14) {
        call_tmp19 = (coerce_tmp + i);
        coerce_tmp2 = *(call_tmp19);
        call_tmp20 = ((object)(coerce_tmp2));
        call_tmp21 = (call_tmp20 != nil);
        if (call_tmp21) {
          count += INT64(1);
        }
      }
      call_tmp23 = (count == call_tmp22);
      if (call_tmp23) {
        goto _breakLabel;
      }
      chpl_task_yield();
      T = true;
    }
    _breakLabel:;
    ret15 = flags;
    _ic__F0_this3 = ret15;
    this16 = ret15;
    ret16 = (this16)->dom;
    call_tmp24 = dsiLow(ret16, _ln, _fn);
    this17 = ret15;
    sum3 = INT64(0);
    ret_3 = &((this17)->blk);
    ret_x13 = *(*(ret_3) + INT64(0));
    call_tmp25 = (call_tmp24 * ret_x13);
    sum3 += call_tmp25;
    this18 = ret15;
    ret17 = (this18)->dom;
    call_tmp26 = dsiLow(ret17, _ln, _fn);
    call_tmp27 = (call_tmp26 + INT64(1));
    this19 = ret15;
    sum4 = INT64(0);
    ret_4 = &((this19)->blk);
    ret_x14 = *(*(ret_4) + INT64(0));
    call_tmp28 = (call_tmp27 * ret_x14);
    sum4 += call_tmp28;
    call_tmp29 = (sum4 - sum3);
    this20 = ret15;
    ret18 = (this20)->dom;
    call_tmp30 = dsiNumIndices(ret18, _ln, _fn);
    call_tmp31 = (call_tmp30 - INT64(1));
    call_tmp32 = (call_tmp31 * call_tmp29);
    call_tmp33 = (sum3 + call_tmp32);
    ret_to_arg_ref_tmp_3 = &call_tmp34;
    _build_range(sum3, call_tmp33, ret_to_arg_ref_tmp_3, _ln, _fn);
    ret_to_arg_ref_tmp_4 = &call_tmp35;
    by(&call_tmp34, call_tmp29, ret_to_arg_ref_tmp_4, _ln, _fn);
    _ic__F0_this4 = call_tmp35;
    this21 = &_ic__F0_this4;
    call_tmp36 = isAmbiguous(this21, _ln, _fn);
    if (call_tmp36) {
      chpl_error("these -- Attempt to iterate over a range with ambiguous alignment.", _ln, _fn);
    }
    ret19 = (&_ic__F0_this4)->_low;
    ret20 = (&_ic__F0_this4)->_alignment;
    ret21 = (&_ic__F0_this4)->_low;
    ret22 = (&_ic__F0_this4)->_stride;
    call_tmp37 = chpl__diffMod(ret20, ret21, ret22, _ln, _fn);
    call_tmp38 = (ret19 + call_tmp37);
    ret23 = (&_ic__F0_this4)->_high;
    ret24 = (&_ic__F0_this4)->_high;
    ret25 = (&_ic__F0_this4)->_alignment;
    ret26 = (&_ic__F0_this4)->_stride;
    call_tmp39 = chpl__diffMod(ret24, ret25, ret26, _ln, _fn);
    call_tmp40 = (ret23 - call_tmp39);
    end2 = call_tmp40;
    for (i2 = call_tmp38; ((i2 <= end2)); ret28 = (&_ic__F0_this4)->_stride,i2 += ret28) {
      this22 = _ic__F0_this3;
      ret27 = (this22)->shiftedData;
      coerce_tmp3 = ret27;
      call_tmp41 = (coerce_tmp3 + i2);
      coerce_tmp4 = *(call_tmp41);
      call_tmp42 = &((coerce_tmp4)->s);
      default_argorder2 = local_memory_order_seq_cst;
      call_tmp43 = &((call_tmp42)->_v);
      atomic_flag_test_and_set_explicit(call_tmp43, default_argorder2);
    }
  } else {
    call_tmp44 = sizeof(chpl_localesSignal_object);
    cast_tmp = chpl_here_alloc(call_tmp44, INT16(18), _ln, _fn);
    this23 = ((localesSignal)(cast_tmp));
    ((object)(this23))->chpl__cid = chpl__cid_localesSignal;
    (this23)->s = _init_class_tmp_;
    ret29 = type_tmp;
    _ref_tmp_ = &ret29;
    atomic_init_flag(_ref_tmp_, false);
    (&this24)->_v = ret29;
    wrap_call_tmp = _construct_atomicflag(ret29, &this24, _ln, _fn);
    (this23)->s = wrap_call_tmp;
    wrap_call_tmp2 = _construct_localesSignal(&wrap_call_tmp, this23, _ln, _fn);
    f = wrap_call_tmp2;
    ret30 = flags;
    call_tmp45 = ret30;
    sum5 = INT64(0);
    ret_5 = &((call_tmp45)->blk);
    ret_x15 = *(*(ret_5) + INT64(0));
    call_tmp46 = (locIdx * ret_x15);
    sum5 += call_tmp46;
    ret31 = (call_tmp45)->shiftedData;
    coerce_tmp5 = ret31;
    call_tmp47 = (coerce_tmp5 + sum5);
    *(call_tmp47) = wrap_call_tmp2;
    call_tmp48 = &((f)->s);
    default_argorder3 = local_memory_order_seq_cst;
    call_tmp49 = &((call_tmp48)->_v);
    call_tmp50 = atomic_load_explicit_flag(call_tmp49, local_memory_order_relaxed);
    call_tmp51 = (call_tmp50 != true);
    T2 = call_tmp51;
    while (T2) {
      chpl_task_yield();
      call_tmp52 = &((call_tmp48)->_v);
      call_tmp53 = atomic_load_explicit_flag(call_tmp52, local_memory_order_relaxed);
      call_tmp54 = (call_tmp53 != true);
      T2 = call_tmp54;
    }
    atomic_thread_fence(default_argorder3);
    delete_tmp = f;
    _field_destructor_tmp_ = &((delete_tmp)->s);
    call_tmp55 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_flag(call_tmp55);
    call_tmp56 = ((void*)(delete_tmp));
    chpl_here_free(call_tmp56, _ln, _fn);
  }
  return;
}

/* ChapelLocale.chpl:303 */
static void chpl_init_rootLocale(int64_t _ln, c_string _fn) {
  RootLocale call_tmp = NULL;
  locale call_tmp2 = NULL;
  RootLocale _formal_type_tmp_ = NULL;
  RootLocale T = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  RootLocale call_tmp5 = NULL;
  RootLocale call_tmp6 = NULL;
  call_tmp = RootLocale2(_ln, _fn);
  call_tmp2 = ((locale)(call_tmp));
  origRootLocale = call_tmp2;
  call_tmp3 = ((object)(origRootLocale));
  call_tmp4 = (call_tmp3 != nil);
  if (call_tmp4) {
    call_tmp5 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
    T = call_tmp5;
  } else {
    call_tmp6 = ((RootLocale)(nil));
    T = call_tmp6;
  }
  init2(T, _ln, _fn);
  return;
}

/* ChapelLocale.chpl:312 */
static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, c_string _fn) {
  int64_t local_numLocales;
  chpl_bool call_tmp;
  RootLocale newRootLocale = NULL;
  DefaultRectangularArr_locale_1_int64_t_F origLocales = NULL;
  RootLocale _formal_type_tmp_ = NULL;
  RootLocale T = NULL;
  object call_tmp2 = NULL;
  chpl_bool call_tmp3;
  RootLocale call_tmp4 = NULL;
  RootLocale call_tmp5 = NULL;
  _ddata_locale origRL = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  _ddata_locale ret2 = NULL;
  _ddata_locale newRL = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp7 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp8 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret3 = NULL;
  _ddata_locale ret4 = NULL;
  _ref_locale call_tmp9 = NULL;
  _ref_locale call_tmp10 = NULL;
  locale call_tmp11 = NULL;
  chpl_bool call_tmp12;
  RootLocale _formal_type_tmp_2 = NULL;
  RootLocale T2 = NULL;
  object call_tmp13 = NULL;
  chpl_bool call_tmp14;
  RootLocale call_tmp15 = NULL;
  RootLocale call_tmp16 = NULL;
  local_numLocales = numLocales;
  rootLocale = origRootLocale;
  call_tmp = (locIdx != INT64(0));
  if (call_tmp) {
    newRootLocale = RootLocale2(_ln, _fn);
    call_tmp2 = ((object)(origRootLocale));
    call_tmp3 = (call_tmp2 != nil);
    if (call_tmp3) {
      call_tmp4 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
      T = call_tmp4;
    } else {
      call_tmp5 = ((RootLocale)(nil));
      T = call_tmp5;
    }
    origLocales = getDefaultLocaleArray(T, _ln, _fn);
    ret = origLocales;
    call_tmp6 = ret;
    ret2 = (call_tmp6)->shiftedData;
    origRL = ret2;
    ret_to_arg_ref_tmp_ = &call_tmp7;
    getDefaultLocaleArray2(newRootLocale, ret_to_arg_ref_tmp_, _ln, _fn);
    ret3 = call_tmp7;
    call_tmp8 = ret3;
    ret4 = (call_tmp8)->shiftedData;
    newRL = ret4;
    call_tmp9 = (newRL + INT64(0));
    call_tmp10 = (origRL + INT64(0));
    chpl_gen_comm_get(((void*)(call_tmp9)), INT64(0), call_tmp10, sizeof(locale), -1, local_numLocales, _ln, _fn);
    call_tmp11 = ((locale)(newRootLocale));
    rootLocale = call_tmp11;
    chpl__autoDestroy5(call_tmp7, _ln, _fn);
  }
  call_tmp12 = (locIdx != INT64(0));
  if (call_tmp12) {
    call_tmp13 = ((object)(rootLocale));
    call_tmp14 = (call_tmp13 != nil);
    if (call_tmp14) {
      call_tmp15 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
      T2 = call_tmp15;
    } else {
      call_tmp16 = ((RootLocale)(nil));
      T2 = call_tmp16;
    }
    Locales = getDefaultLocaleArray(T2, _ln, _fn);
  }
  return;
}

/* ChapelLocale.chpl:365 */
static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
  locale local_dummyLocale = NULL;
  locale ret = NULL;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  AbstractRootLocale _formal_type_tmp_ = NULL;
  AbstractRootLocale T = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  AbstractRootLocale call_tmp5 = NULL;
  AbstractRootLocale call_tmp6 = NULL;
  locale call_tmp7 = NULL;
  int32_t _virtual_method_tmp_;
  local_dummyLocale = dummyLocale;
  call_tmp = ((object)(rootLocale));
  call_tmp2 = (call_tmp != nil);
  if (call_tmp2) {
    call_tmp3 = ((object)(rootLocale));
    call_tmp4 = (call_tmp3 != nil);
    if (call_tmp4) {
      call_tmp5 = (((((object)(rootLocale))->chpl__cid == chpl__cid_AbstractRootLocale) || (((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale)))?(((AbstractRootLocale)(rootLocale))):(((AbstractRootLocale)(NULL)));
      T = call_tmp5;
    } else {
      call_tmp6 = ((AbstractRootLocale)(nil));
      T = call_tmp6;
    }
    _virtual_method_tmp_ = ((object)(T))->chpl__cid;
    call_tmp7 = ((locale(*)(AbstractRootLocale, chpl_localeID_t* const, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(4))])(T, id2, _ln, _fn);
    ret = call_tmp7;
    goto _end_chpl_localeID_to_locale;
  } else {
    ret = local_dummyLocale;
    goto _end_chpl_localeID_to_locale;
  }
  _end_chpl_localeID_to_locale:;
  return ret;
}

/* ChapelLocale.chpl:417 */
static int64_t runningTasks(locale this8, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_relaxed;
  _ref_atomic_int64 call_tmp = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  int64_t call_tmp3;
  int64_t T;
  chpl_bool call_tmp4;
  local_memory_order_relaxed = memory_order_relaxed;
  call_tmp = &((this8)->runningTaskCounter);
  call_tmp2 = &((call_tmp)->_v);
  call_tmp3 = atomic_load_explicit_int_least64_t(call_tmp2, local_memory_order_relaxed);
  call_tmp4 = (call_tmp3 <= INT64(0));
  if (call_tmp4) {
    T = INT64(1);
  } else {
    T = call_tmp3;
  }
  return T;
}

/* ChapelLocale.chpl:439 */
void chpl_taskRunningCntInc(int64_t _ln, c_string _fn) {
  memory_order local_memory_order_relaxed;
  locale call_tmp = NULL;
  int32_t call_tmp2;
  chpl_localeID_t call_tmp3;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp4;
  locale call_tmp5 = NULL;
  _ref_atomic_int64 call_tmp6 = NULL;
  _ref_atomic_int_least64_t call_tmp7 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  call_tmp2 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp3;
  chpl_buildLocaleID(chpl_nodeID, call_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
  call_tmp5 = chpl_localeID_to_locale(&call_tmp4, _ln, _fn);
  call_tmp = call_tmp5;
  call_tmp6 = &((call_tmp)->runningTaskCounter);
  call_tmp7 = &((call_tmp6)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp7, INT64(1), local_memory_order_relaxed);
  return;
}

/* ChapelLocale.chpl:445 */
void chpl_taskRunningCntDec(int64_t _ln, c_string _fn) {
  memory_order local_memory_order_relaxed;
  locale call_tmp = NULL;
  int32_t call_tmp2;
  chpl_localeID_t call_tmp3;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp4;
  locale call_tmp5 = NULL;
  _ref_atomic_int64 call_tmp6 = NULL;
  _ref_atomic_int_least64_t call_tmp7 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  call_tmp2 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp3;
  chpl_buildLocaleID(chpl_nodeID, call_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
  call_tmp5 = chpl_localeID_to_locale(&call_tmp4, _ln, _fn);
  call_tmp = call_tmp5;
  call_tmp6 = &((call_tmp)->runningTaskCounter);
  call_tmp7 = &((call_tmp6)->_v);
  atomic_fetch_sub_explicit_int_least64_t(call_tmp7, INT64(1), local_memory_order_relaxed);
  return;
}

