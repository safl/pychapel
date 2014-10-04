/* ChapelDistribution.chpl:21 */
static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelDistribution_p) {
    goto _exit_chpl__init_ChapelDistribution;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelDistribution";
  printModuleInit(modFormatStr, modStr, INT64(18), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDistribution_p = true;
  {
    chpl__init_List(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDistribution:;
  return;
}

/* ChapelDistribution.chpl:31 */
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, c_string _fn) {
  BaseDist this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->_distCnt = *(_distCnt);
  (this8)->_doms = *(_doms);
  (this8)->_domsLock = *(_domsLock);
  return this8;
}

/* ChapelDistribution.chpl:31 */
static void chpl__auto_destroy_BaseDist(BaseDist this8, int64_t _ln, c_string _fn) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _field_destructor_tmp_ = &((this8)->_domsLock);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  _field_destructor_tmp_2 = &((this8)->_distCnt);
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* ChapelDistribution.chpl:40 */
static int64_t destroyDist(BaseDist this8, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  _ref_atomic_refcnt call_tmp = NULL;
  _ref_atomic_int64 call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp3 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  local_memory_order_seq_cst = memory_order_seq_cst;
  compilerAssert();
  compilerAssert();
  call_tmp = &((this8)->_distCnt);
  call_tmp2 = &((call_tmp)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  call_tmp5 = (call_tmp4 - INT64(1));
  call_tmp6 = (call_tmp5 < INT64(0));
  if (call_tmp6) {
    halt("distribution reference count is negative!", _ln, _fn);
  }
  return call_tmp5;
}

/* ChapelDistribution.chpl:110 */
static void dsiDestroyDistClass(BaseDist this8) {
  return;
}

/* ChapelDistribution.chpl:119 */
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, c_string _fn) {
  BaseDom this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->_domCnt = *(_domCnt);
  (this8)->_arrs = *(_arrs);
  (this8)->_arrsLock = *(_arrsLock);
  return this8;
}

/* ChapelDistribution.chpl:119 */
static void chpl__auto_destroy_BaseDom(BaseDom this8, int64_t _ln, c_string _fn) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _field_destructor_tmp_ = &((this8)->_arrsLock);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  _field_destructor_tmp_2 = &((this8)->_domCnt);
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* ChapelDistribution.chpl:127 */
static BaseDist dsiMyDist(BaseDom this8, int64_t _ln, c_string _fn) {
  BaseDist ret = NULL;
  halt("internal error: dsiMyDist is not implemented", _ln, _fn);
  ret = nil;
  return ret;
}

/* ChapelDistribution.chpl:133 */
static int64_t destroyDom(BaseDom this8, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  int64_t cnt;
  _ref_atomic_refcnt call_tmp = NULL;
  _ref_atomic_int64 call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp3 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  chpl_bool call_tmp7;
  chpl_bool T;
  chpl_bool call_tmp8;
  int32_t _virtual_method_tmp_;
  BaseDist dist2 = NULL;
  BaseDist call_tmp9 = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp11 = NULL;
  chpl_bool call_tmp12;
  _ref_atomicflag call_tmp13 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp14 = NULL;
  chpl_bool call_tmp15;
  _ref_list_BaseDom call_tmp16 = NULL;
  _ref_atomicflag call_tmp17 = NULL;
  memory_order default_argorder4;
  _ref_atomic_flag call_tmp18 = NULL;
  int64_t call_tmp19;
  chpl_bool call_tmp20;
  int32_t _virtual_method_tmp_2;
  chpl_opaque call_tmp21;
  local_memory_order_seq_cst = memory_order_seq_cst;
  compilerAssert();
  compilerAssert();
  call_tmp = &((this8)->_domCnt);
  call_tmp2 = &((call_tmp)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  call_tmp5 = (call_tmp4 - INT64(1));
  call_tmp6 = (call_tmp5 < INT64(0));
  if (call_tmp6) {
    halt("domain reference count is negative!", _ln, _fn);
  }
  cnt = call_tmp5;
  call_tmp7 = (call_tmp5 == INT64(0));
  if (call_tmp7) {
    _virtual_method_tmp_ = ((object)(this8))->chpl__cid;
    call_tmp8 = ((chpl_bool(*)(BaseDom))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(this8);
    T = call_tmp8;
  } else {
    T = false;
  }
  if (T) {
    call_tmp9 = dsiMyDist(this8, _ln, _fn);
    dist2 = call_tmp9;
    call_tmp10 = &((dist2)->_domsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp11 = &((call_tmp10)->_v);
    call_tmp12 = atomic_flag_test_and_set_explicit(call_tmp11, default_argorder2);
    T2 = call_tmp12;
    while (T2) {
      chpl_task_yield();
      call_tmp13 = &((dist2)->_domsLock);
      default_argorder3 = local_memory_order_seq_cst;
      call_tmp14 = &((call_tmp13)->_v);
      call_tmp15 = atomic_flag_test_and_set_explicit(call_tmp14, default_argorder3);
      T2 = call_tmp15;
    }
    call_tmp16 = &((dist2)->_doms);
    remove3(call_tmp16, this8, _ln, _fn);
    call_tmp17 = &((dist2)->_domsLock);
    default_argorder4 = local_memory_order_seq_cst;
    call_tmp18 = &((call_tmp17)->_v);
    atomic_flag_clear_explicit(call_tmp18, default_argorder4);
    call_tmp19 = destroyDist(dist2, _ln, _fn);
    call_tmp20 = (call_tmp19 == INT64(0));
    if (call_tmp20) {
      _virtual_method_tmp_2 = ((object)(dist2))->chpl__cid;
      ((void(*)(BaseDist, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(0))])(dist2, _ln, _fn);
      call_tmp21 = ((void*)(dist2));
      chpl_here_free(call_tmp21, _ln, _fn);
    }
  }
  return cnt;
}

/* ChapelDistribution.chpl:177 */
static void _backupArrays(BaseDom this8, int64_t _ln, c_string _fn) {
  list_BaseArr ret;
  list_BaseArr _ic__F0_this;
  listNode_BaseArr tmp = NULL;
  listNode_BaseArr ret2 = NULL;
  chpl_bool T;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  BaseArr ret3 = NULL;
  int32_t _virtual_method_tmp_;
  listNode_BaseArr ret4 = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  ret = (this8)->_arrs;
  _ic__F0_this = ret;
  ret2 = (&_ic__F0_this)->first;
  tmp = ret2;
  call_tmp = ((object)(ret2));
  call_tmp2 = (call_tmp != nil);
  T = call_tmp2;
  while (T) {
    ret3 = (tmp)->data;
    _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
    ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(ret3, _ln, _fn);
    ret4 = (tmp)->next;
    tmp = ret4;
    call_tmp3 = ((object)(ret4));
    call_tmp4 = (call_tmp3 != nil);
    T = call_tmp4;
  }
  return;
}

/* ChapelDistribution.chpl:182 */
static void _removeArrayBackups(BaseDom this8, int64_t _ln, c_string _fn) {
  list_BaseArr ret;
  list_BaseArr _ic__F0_this;
  listNode_BaseArr tmp = NULL;
  listNode_BaseArr ret2 = NULL;
  chpl_bool T;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  BaseArr ret3 = NULL;
  int32_t _virtual_method_tmp_;
  listNode_BaseArr ret4 = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  ret = (this8)->_arrs;
  _ic__F0_this = ret;
  ret2 = (&_ic__F0_this)->first;
  tmp = ret2;
  call_tmp = ((object)(ret2));
  call_tmp2 = (call_tmp != nil);
  T = call_tmp2;
  while (T) {
    ret3 = (tmp)->data;
    _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
    ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(ret3, _ln, _fn);
    ret4 = (tmp)->next;
    tmp = ret4;
    call_tmp3 = ((object)(ret4));
    call_tmp4 = (call_tmp3 != nil);
    T = call_tmp4;
  }
  return;
}

/* ChapelDistribution.chpl:187 */
static void _preserveArrayElements(BaseDom this8, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn) {
  list_BaseArr ret;
  list_BaseArr _ic__F0_this;
  listNode_BaseArr tmp = NULL;
  listNode_BaseArr ret2 = NULL;
  chpl_bool T;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  BaseArr ret3 = NULL;
  int32_t _virtual_method_tmp_;
  listNode_BaseArr ret4 = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  ret = (this8)->_arrs;
  _ic__F0_this = ret;
  ret2 = (&_ic__F0_this)->first;
  tmp = ret2;
  call_tmp = ((object)(ret2));
  call_tmp2 = (call_tmp != nil);
  T = call_tmp2;
  while (T) {
    ret3 = (tmp)->data;
    _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
    ((void(*)(BaseArr, int64_t, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(5))])(ret3, oldslot, newslot, _ln, _fn);
    ret4 = (tmp)->next;
    tmp = ret4;
    call_tmp3 = ((object)(ret4));
    call_tmp4 = (call_tmp3 != nil);
    T = call_tmp4;
  }
  return;
}

/* ChapelDistribution.chpl:214 */
static chpl_bool dsiLinksDistribution(BaseDom this8) {
  return true;
}

/* ChapelDistribution.chpl:219 */
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, c_string _fn) {
  BaseRectangularDom this8 = NULL;
  BaseDom T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
  return meme;
}

/* ChapelDistribution.chpl:219 */
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this8, int64_t _ln, c_string _fn) {
  BaseDom _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseDom)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* ChapelDistribution.chpl:247 */
static BaseAssociativeDom _construct_BaseAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseAssociativeDom meme, int64_t _ln, c_string _fn) {
  BaseAssociativeDom this8 = NULL;
  BaseDom T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_BaseDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
  return meme;
}

/* ChapelDistribution.chpl:247 */
static void chpl__auto_destroy_BaseAssociativeDom(BaseAssociativeDom this8, int64_t _ln, c_string _fn) {
  BaseDom _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseDom)(this8));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* ChapelDistribution.chpl:271 */
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, c_string _fn) {
  BaseArr this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->_arrCnt = *(_arrCnt);
  (this8)->_arrAlias = _arrAlias;
  return this8;
}

/* ChapelDistribution.chpl:271 */
static void chpl__auto_destroy_BaseArr(BaseArr this8, int64_t _ln, c_string _fn) {
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _field_destructor_tmp_ = &((this8)->_arrCnt);
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelDistribution.chpl:280 */
static BaseDom dsiGetBaseDom(BaseArr this8, int64_t _ln, c_string _fn) {
  BaseDom ret = NULL;
  halt("internal error: dsiGetBaseDom is not implemented", _ln, _fn);
  ret = nil;
  return ret;
}

/* ChapelDistribution.chpl:286 */
static int64_t destroyArr(BaseArr this8, int64_t _ln, c_string _fn) {
  memory_order local_memory_order_seq_cst;
  int64_t cnt;
  _ref_atomic_refcnt call_tmp = NULL;
  _ref_atomic_int64 call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp3 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  chpl_bool call_tmp7;
  BaseArr ret = NULL;
  object call_tmp8 = NULL;
  chpl_bool call_tmp9;
  BaseArr ret2 = NULL;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  BaseArr ret3 = NULL;
  int32_t _virtual_method_tmp_;
  chpl_opaque call_tmp12;
  int32_t _virtual_method_tmp_2;
  chpl_bool call_tmp13;
  BaseDom dom = NULL;
  BaseDom call_tmp14 = NULL;
  int32_t _virtual_method_tmp_3;
  chpl_bool T;
  _ref_atomicflag call_tmp15 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp16 = NULL;
  chpl_bool call_tmp17;
  _ref_atomicflag call_tmp18 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp19 = NULL;
  chpl_bool call_tmp20;
  _ref_list_BaseArr call_tmp21 = NULL;
  _ref_atomicflag call_tmp22 = NULL;
  memory_order default_argorder4;
  _ref_atomic_flag call_tmp23 = NULL;
  int64_t call_tmp24;
  chpl_bool call_tmp25;
  int32_t _virtual_method_tmp_4;
  chpl_opaque call_tmp26;
  local_memory_order_seq_cst = memory_order_seq_cst;
  compilerAssert();
  compilerAssert();
  call_tmp = &((this8)->_arrCnt);
  call_tmp2 = &((call_tmp)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  call_tmp5 = (call_tmp4 - INT64(1));
  call_tmp6 = (call_tmp5 < INT64(0));
  if (call_tmp6) {
    halt("array reference count is negative!", _ln, _fn);
  }
  cnt = call_tmp5;
  call_tmp7 = (call_tmp5 == INT64(0));
  if (call_tmp7) {
    ret = (this8)->_arrAlias;
    call_tmp8 = ((object)(ret));
    call_tmp9 = (call_tmp8 != nil);
    if (call_tmp9) {
      ret2 = (this8)->_arrAlias;
      call_tmp10 = destroyArr(ret2, _ln, _fn);
      call_tmp11 = (call_tmp10 == INT64(0));
      if (call_tmp11) {
        ret3 = (this8)->_arrAlias;
        _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
        ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(0))])(ret3, _ln, _fn);
        call_tmp12 = ((void*)(ret3));
        chpl_here_free(call_tmp12, _ln, _fn);
      }
    } else {
      _virtual_method_tmp_2 = ((object)(this8))->chpl__cid;
      ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(7))])(this8, _ln, _fn);
    }
  }
  call_tmp13 = (call_tmp5 == INT64(0));
  if (call_tmp13) {
    _virtual_method_tmp_3 = ((object)(this8))->chpl__cid;
    call_tmp14 = ((BaseDom(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_3) + INT64(3))])(this8, _ln, _fn);
    dom = call_tmp14;
    call_tmp15 = &((dom)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    call_tmp16 = &((call_tmp15)->_v);
    call_tmp17 = atomic_flag_test_and_set_explicit(call_tmp16, default_argorder2);
    T = call_tmp17;
    while (T) {
      chpl_task_yield();
      call_tmp18 = &((dom)->_arrsLock);
      default_argorder3 = local_memory_order_seq_cst;
      call_tmp19 = &((call_tmp18)->_v);
      call_tmp20 = atomic_flag_test_and_set_explicit(call_tmp19, default_argorder3);
      T = call_tmp20;
    }
    call_tmp21 = &((dom)->_arrs);
    remove4(call_tmp21, this8, _ln, _fn);
    call_tmp22 = &((dom)->_arrsLock);
    default_argorder4 = local_memory_order_seq_cst;
    call_tmp23 = &((call_tmp22)->_v);
    atomic_flag_clear_explicit(call_tmp23, default_argorder4);
    call_tmp24 = destroyDom(dom, _ln, _fn);
    call_tmp25 = (call_tmp24 == INT64(0));
    if (call_tmp25) {
      _virtual_method_tmp_4 = ((object)(dom))->chpl__cid;
      ((void(*)(BaseDom, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_4) + INT64(0))])(dom, _ln, _fn);
      call_tmp26 = ((void*)(dom));
      chpl_here_free(call_tmp26, _ln, _fn);
    }
  }
  return cnt;
}

/* ChapelDistribution.chpl:312 */
static void dsiDestroyData(BaseArr this8, int64_t _ln, c_string _fn) {
  return;
}

/* ChapelDistribution.chpl:314 */
static void dsiReallocate(BaseArr this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
  halt("reallocating not supported for this array type", _ln, _fn);
  return;
}

/* ChapelDistribution.chpl:318 */
static void dsiPostReallocate(BaseArr this8) {
  return;
}

/* ChapelDistribution.chpl:349 */
static void clearEntry(BaseArr this8, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn) {
  halt("clearEntry() not supported for non-associative arrays", _ln, _fn);
  return;
}

/* ChapelDistribution.chpl:353 */
static void _backupArray(BaseArr this8, int64_t _ln, c_string _fn) {
  halt("_backupArray() not supported for non-associative arrays", _ln, _fn);
  return;
}

/* ChapelDistribution.chpl:357 */
static void _removeArrayBackup(BaseArr this8, int64_t _ln, c_string _fn) {
  halt("_removeArrayBackup() not supported for non-associative arrays", _ln, _fn);
  return;
}

/* ChapelDistribution.chpl:361 */
static void _preserveArrayElement(BaseArr this8, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn) {
  halt("_preserveArrayElement() not supported for non-associative arrays", _ln, _fn);
  return;
}

