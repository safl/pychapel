/* List.chpl:1 */
static void chpl__init_List(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_List_p) {
    goto _exit_chpl__init_List;
  }
  modFormatStr = "%*s\n";
  modStr = "List";
  printModuleInit(modFormatStr, modStr, INT64(4), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_List_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_List:;
  return;
}

/* List.chpl:20 */
static listNode_BaseArr _construct_listNode(BaseArr data, listNode_BaseArr next, listNode_BaseArr meme, int64_t _ln, c_string _fn) {
  listNode_BaseArr this8 = NULL;
  object T = NULL;
  this8 = meme;
  T = &((this8)->super);
  _construct_object(T);
  (this8)->data = data;
  (this8)->next = next;
  return this8;
}

/* List.chpl:20 */
static void chpl__auto_destroy_listNode(listNode_BaseArr this8, int64_t _ln, c_string _fn) {
  return;
}

/* List.chpl:20 */
static void chpl__auto_destroy_listNode2(listNode_BaseDom this8, int64_t _ln, c_string _fn) {
  return;
}

/* List.chpl:26 */
static list_BaseArr _construct_list(listNode_BaseArr first, listNode_BaseArr last, int64_t length2, list_BaseArr* const meme, int64_t _ln, c_string _fn) {
  list_BaseArr this8;
  this8 = *(meme);
  (&this8)->first = first;
  (&this8)->last = last;
  (&this8)->length = length2;
  return this8;
}

/* List.chpl:26 */
static list_BaseDom _construct_list2(listNode_BaseDom first, listNode_BaseDom last, int64_t length2, list_BaseDom* const meme, int64_t _ln, c_string _fn) {
  list_BaseDom this8;
  this8 = *(meme);
  (&this8)->first = first;
  (&this8)->last = last;
  (&this8)->length = length2;
  return this8;
}

/* List.chpl:41 */
static void remove3(_ref_list_BaseDom this8, BaseDom x, int64_t _ln, c_string _fn) {
  listNode_BaseDom tmp = NULL;
  listNode_BaseDom ret = NULL;
  listNode_BaseDom prev = NULL;
  listNode_BaseDom type_tmp = NULL;
  chpl_bool T;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  chpl_bool T2;
  listNode_BaseDom T3 = NULL;
  BaseDom ret2 = NULL;
  object call_tmp3 = NULL;
  object call_tmp4 = NULL;
  chpl_bool call_tmp5;
  listNode_BaseDom ret3 = NULL;
  object call_tmp6 = NULL;
  chpl_bool call_tmp7;
  chpl_bool T4;
  listNode_BaseDom T5 = NULL;
  BaseDom ret4 = NULL;
  object call_tmp8 = NULL;
  object call_tmp9 = NULL;
  chpl_bool call_tmp10;
  object call_tmp11 = NULL;
  chpl_bool call_tmp12;
  object call_tmp13 = NULL;
  chpl_bool call_tmp14;
  _ref_listNode_BaseDom call_tmp15 = NULL;
  listNode_BaseDom ret5 = NULL;
  listNode_BaseDom ret6 = NULL;
  object call_tmp16 = NULL;
  object call_tmp17 = NULL;
  chpl_bool call_tmp18;
  _ref_listNode_BaseDom call_tmp19 = NULL;
  listNode_BaseDom ret7 = NULL;
  listNode_BaseDom ret8 = NULL;
  object call_tmp20 = NULL;
  object call_tmp21 = NULL;
  chpl_bool call_tmp22;
  _ref_listNode_BaseDom call_tmp23 = NULL;
  chpl_opaque call_tmp24;
  _ref_int64_t call_tmp25 = NULL;
  ret = (this8)->first;
  tmp = ret;
  type_tmp = nil;
  prev = type_tmp;
  call_tmp = ((object)(ret));
  call_tmp2 = (call_tmp != nil);
  if (call_tmp2) {
    T3 = ret;
    ret2 = (T3)->data;
    call_tmp3 = ((object)(ret2));
    call_tmp4 = ((object)(x));
    call_tmp5 = (call_tmp3 != call_tmp4);
    T2 = call_tmp5;
  } else {
    T2 = false;
  }
  T = T2;
  while (T) {
    prev = tmp;
    ret3 = (tmp)->next;
    tmp = ret3;
    call_tmp6 = ((object)(ret3));
    call_tmp7 = (call_tmp6 != nil);
    if (call_tmp7) {
      T5 = ret3;
      ret4 = (T5)->data;
      call_tmp8 = ((object)(ret4));
      call_tmp9 = ((object)(x));
      call_tmp10 = (call_tmp8 != call_tmp9);
      T4 = call_tmp10;
    } else {
      T4 = false;
    }
    T = T4;
  }
  call_tmp11 = ((object)(tmp));
  call_tmp12 = (call_tmp11 != nil);
  if (call_tmp12) {
    call_tmp13 = ((object)(prev));
    call_tmp14 = (call_tmp13 != nil);
    if (call_tmp14) {
      call_tmp15 = &((prev)->next);
      ret5 = (tmp)->next;
      *(call_tmp15) = ret5;
    }
    ret6 = (this8)->first;
    call_tmp16 = ((object)(ret6));
    call_tmp17 = ((object)(tmp));
    call_tmp18 = (call_tmp16 == call_tmp17);
    if (call_tmp18) {
      call_tmp19 = &((this8)->first);
      ret7 = (tmp)->next;
      *(call_tmp19) = ret7;
    }
    ret8 = (this8)->last;
    call_tmp20 = ((object)(ret8));
    call_tmp21 = ((object)(tmp));
    call_tmp22 = (call_tmp20 == call_tmp21);
    if (call_tmp22) {
      call_tmp23 = &((this8)->last);
      *(call_tmp23) = prev;
    }
    call_tmp24 = ((void*)(tmp));
    chpl_here_free(call_tmp24, _ln, _fn);
    call_tmp25 = &((this8)->length);
    *(call_tmp25) -= INT64(1);
  }
  return;
}

/* List.chpl:41 */
static void remove4(_ref_list_BaseArr this8, BaseArr x, int64_t _ln, c_string _fn) {
  listNode_BaseArr tmp = NULL;
  listNode_BaseArr ret = NULL;
  listNode_BaseArr prev = NULL;
  listNode_BaseArr type_tmp = NULL;
  chpl_bool T;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  chpl_bool T2;
  listNode_BaseArr T3 = NULL;
  BaseArr ret2 = NULL;
  object call_tmp3 = NULL;
  object call_tmp4 = NULL;
  chpl_bool call_tmp5;
  listNode_BaseArr ret3 = NULL;
  object call_tmp6 = NULL;
  chpl_bool call_tmp7;
  chpl_bool T4;
  listNode_BaseArr T5 = NULL;
  BaseArr ret4 = NULL;
  object call_tmp8 = NULL;
  object call_tmp9 = NULL;
  chpl_bool call_tmp10;
  object call_tmp11 = NULL;
  chpl_bool call_tmp12;
  object call_tmp13 = NULL;
  chpl_bool call_tmp14;
  _ref_listNode_BaseArr call_tmp15 = NULL;
  listNode_BaseArr ret5 = NULL;
  listNode_BaseArr ret6 = NULL;
  object call_tmp16 = NULL;
  object call_tmp17 = NULL;
  chpl_bool call_tmp18;
  _ref_listNode_BaseArr call_tmp19 = NULL;
  listNode_BaseArr ret7 = NULL;
  listNode_BaseArr ret8 = NULL;
  object call_tmp20 = NULL;
  object call_tmp21 = NULL;
  chpl_bool call_tmp22;
  _ref_listNode_BaseArr call_tmp23 = NULL;
  chpl_opaque call_tmp24;
  _ref_int64_t call_tmp25 = NULL;
  ret = (this8)->first;
  tmp = ret;
  type_tmp = nil;
  prev = type_tmp;
  call_tmp = ((object)(ret));
  call_tmp2 = (call_tmp != nil);
  if (call_tmp2) {
    T3 = ret;
    ret2 = (T3)->data;
    call_tmp3 = ((object)(ret2));
    call_tmp4 = ((object)(x));
    call_tmp5 = (call_tmp3 != call_tmp4);
    T2 = call_tmp5;
  } else {
    T2 = false;
  }
  T = T2;
  while (T) {
    prev = tmp;
    ret3 = (tmp)->next;
    tmp = ret3;
    call_tmp6 = ((object)(ret3));
    call_tmp7 = (call_tmp6 != nil);
    if (call_tmp7) {
      T5 = ret3;
      ret4 = (T5)->data;
      call_tmp8 = ((object)(ret4));
      call_tmp9 = ((object)(x));
      call_tmp10 = (call_tmp8 != call_tmp9);
      T4 = call_tmp10;
    } else {
      T4 = false;
    }
    T = T4;
  }
  call_tmp11 = ((object)(tmp));
  call_tmp12 = (call_tmp11 != nil);
  if (call_tmp12) {
    call_tmp13 = ((object)(prev));
    call_tmp14 = (call_tmp13 != nil);
    if (call_tmp14) {
      call_tmp15 = &((prev)->next);
      ret5 = (tmp)->next;
      *(call_tmp15) = ret5;
    }
    ret6 = (this8)->first;
    call_tmp16 = ((object)(ret6));
    call_tmp17 = ((object)(tmp));
    call_tmp18 = (call_tmp16 == call_tmp17);
    if (call_tmp18) {
      call_tmp19 = &((this8)->first);
      ret7 = (tmp)->next;
      *(call_tmp19) = ret7;
    }
    ret8 = (this8)->last;
    call_tmp20 = ((object)(ret8));
    call_tmp21 = ((object)(tmp));
    call_tmp22 = (call_tmp20 == call_tmp21);
    if (call_tmp22) {
      call_tmp23 = &((this8)->last);
      *(call_tmp23) = prev;
    }
    call_tmp24 = ((void*)(tmp));
    chpl_here_free(call_tmp24, _ln, _fn);
    call_tmp25 = &((this8)->length);
    *(call_tmp25) -= INT64(1);
  }
  return;
}

/* List.chpl:68 */
static void append(_ref_list_BaseArr this8, BaseArr e, int64_t _ln, c_string _fn) {
  listNode_BaseArr ret = NULL;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  listNode_BaseArr ret2 = NULL;
  listNode_BaseArr coerce_tmp = NULL;
  _ref_listNode_BaseArr call_tmp3 = NULL;
  listNode_BaseArr this9 = NULL;
  int64_t call_tmp4;
  chpl_opaque cast_tmp;
  listNode_BaseArr call_tmp5 = NULL;
  listNode_BaseArr wrap_call_tmp = NULL;
  _ref_listNode_BaseArr call_tmp6 = NULL;
  listNode_BaseArr ret3 = NULL;
  listNode_BaseArr coerce_tmp2 = NULL;
  listNode_BaseArr ret4 = NULL;
  _ref_listNode_BaseArr call_tmp7 = NULL;
  listNode_BaseArr this10 = NULL;
  int64_t call_tmp8;
  chpl_opaque cast_tmp2;
  listNode_BaseArr call_tmp9 = NULL;
  listNode_BaseArr wrap_call_tmp2 = NULL;
  _ref_listNode_BaseArr call_tmp10 = NULL;
  listNode_BaseArr ret5 = NULL;
  _ref_int64_t call_tmp11 = NULL;
  ret = (this8)->last;
  call_tmp = ((object)(ret));
  call_tmp2 = (call_tmp != nil);
  if (call_tmp2) {
    ret2 = (this8)->last;
    coerce_tmp = ret2;
    call_tmp3 = &((coerce_tmp)->next);
    call_tmp4 = sizeof(chpl_listNode_BaseArr_object);
    cast_tmp = chpl_here_alloc(call_tmp4, INT16(2), _ln, _fn);
    this9 = ((listNode_BaseArr)(cast_tmp));
    ((object)(this9))->chpl__cid = chpl__cid_listNode_BaseArr;
    (this9)->data = nil;
    (this9)->next = nil;
    (this9)->data = e;
    call_tmp5 = ((listNode_BaseArr)(nil));
    (this9)->next = call_tmp5;
    wrap_call_tmp = _construct_listNode(e, call_tmp5, this9, _ln, _fn);
    *(call_tmp3) = wrap_call_tmp;
    call_tmp6 = &((this8)->last);
    ret3 = (this8)->last;
    coerce_tmp2 = ret3;
    ret4 = (coerce_tmp2)->next;
    *(call_tmp6) = ret4;
  } else {
    call_tmp7 = &((this8)->first);
    call_tmp8 = sizeof(chpl_listNode_BaseArr_object);
    cast_tmp2 = chpl_here_alloc(call_tmp8, INT16(2), _ln, _fn);
    this10 = ((listNode_BaseArr)(cast_tmp2));
    ((object)(this10))->chpl__cid = chpl__cid_listNode_BaseArr;
    (this10)->data = nil;
    (this10)->next = nil;
    (this10)->data = e;
    call_tmp9 = ((listNode_BaseArr)(nil));
    (this10)->next = call_tmp9;
    wrap_call_tmp2 = _construct_listNode(e, call_tmp9, this10, _ln, _fn);
    *(call_tmp7) = wrap_call_tmp2;
    call_tmp10 = &((this8)->last);
    ret5 = (this8)->first;
    *(call_tmp10) = ret5;
  }
  call_tmp11 = &((this8)->length);
  *(call_tmp11) += INT64(1);
  return;
}

