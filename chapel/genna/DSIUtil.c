/* DSIUtil.chpl:1 */
static void chpl__init_DSIUtil(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_DSIUtil_p) {
    goto _exit_chpl__init_DSIUtil;
  }
  modFormatStr = "%*s\n";
  modStr = "DSIUtil";
  printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_DSIUtil_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_DSIUtil:;
  return;
}

/* DSIUtil.chpl:37 */
static void createTuple(int64_t val, _ref__tuple_1_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  int64_t tup_x1;
  _ref_int64_t call_tmp = NULL;
  tup_x1 = INT64(0);
  call_tmp = &tup_x1;
  *(call_tmp) = val;
  *(*(_retArg) + INT64(0)) = tup_x1;
  return;
}

/* DSIUtil.chpl:37 */
static void createTuple2(int64_t val, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  int64_t tup_x1;
  int64_t tup_x2;
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  tup_x1 = INT64(0);
  tup_x2 = INT64(0);
  call_tmp = &tup_x1;
  *(call_tmp) = val;
  call_tmp2 = &tup_x2;
  *(call_tmp2) = val;
  *(*(_retArg) + INT64(0)) = tup_x1;
  *(*(_retArg) + INT64(1)) = tup_x2;
  return;
}

/* DSIUtil.chpl:47 */
static void _computeChunkStuff(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_2_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  _tuple_2_star_int64_t ret;
  uint64_t numElems;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  int64_t call_tmp2;
  uint64_t call_tmp3;
  _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  int64_t call_tmp5;
  uint64_t call_tmp6;
  int64_t numChunks;
  int64_t call_tmp7;
  chpl_bool call_tmp8;
  _tuple_2_star_int64_t call_tmp9;
  int64_t T;
  int64_t T2;
  chpl_bool call_tmp10;
  int64_t parDim;
  int64_t maxDim;
  uint64_t maxElems;
  uint64_t call_tmp11;
  range_int64_t_bounded_F call_tmp12;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret2;
  int64_t end;
  int64_t ret3;
  int64_t i2;
  uint64_t curElems;
  _ref_range_int64_t_bounded_F call_tmp13 = NULL;
  _ref__tuple_2_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp14;
  uint64_t call_tmp15;
  uint64_t call_tmp16;
  chpl_bool call_tmp17;
  chpl_bool call_tmp18;
  chpl_bool call_tmp19;
  uint64_t call_tmp20;
  chpl_bool call_tmp21;
  int64_t call_tmp22;
  _tuple_2_star_int64_t call_tmp23;
  int64_t T3;
  int64_t T4;
  numElems = UINT64(1);
  call_tmp = (*(ranges) + INT64(0));
  call_tmp2 = length(call_tmp, _ln, _fn);
  call_tmp3 = ((uint64_t)(call_tmp2));
  numElems *= call_tmp3;
  call_tmp4 = (*(ranges) + INT64(1));
  call_tmp5 = length(call_tmp4, _ln, _fn);
  call_tmp6 = ((uint64_t)(call_tmp5));
  numElems *= call_tmp6;
  call_tmp7 = _computeNumChunks(maxTasks, ignoreRunning, minSize, numElems, _ln, _fn);
  numChunks = call_tmp7;
  call_tmp8 = (call_tmp7 == INT64(0));
  if (call_tmp8) {
    *(call_tmp9 + INT64(0)) = INT64(0);
    *(call_tmp9 + INT64(1)) = INT64(-1);
    *(ret + INT64(0)) = *(call_tmp9 + INT64(0));
    *(ret + INT64(1)) = *(call_tmp9 + INT64(1));
    T = *(ret + INT64(0));
    T2 = *(ret + INT64(1));
    *(*(_retArg) + INT64(0)) = T;
    *(*(_retArg) + INT64(1)) = T2;
    goto _end__computeChunkStuff;
  }
  call_tmp10 = (numChunks > INT64(0));
  assert2(call_tmp10, _ln, _fn);
  parDim = INT64(-1);
  maxDim = INT64(-1);
  call_tmp11 = min3(_ln, _fn);
  maxElems = call_tmp11;
  ret_to_arg_ref_tmp_ = &call_tmp12;
  _build_range(INT64(1), INT64(2), ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp12;
  ret2 = (&_ic__F0_this)->_low;
  ret3 = (&_ic__F0_this)->_high;
  end = ret3;
  for (i = ret2; ((i <= end)); i += INT64(1)) {
    i2 = i;
    _ref_tmp_ = ranges;
    call_tmp13 = this5(_ref_tmp_, i, _ln, _fn);
    call_tmp14 = length(call_tmp13, _ln, _fn);
    call_tmp15 = ((uint64_t)(call_tmp14));
    curElems = call_tmp15;
    call_tmp16 = ((uint64_t)(numChunks));
    call_tmp17 = (call_tmp15 >= call_tmp16);
    if (call_tmp17) {
      parDim = i;
      goto _breakLabel;
    }
    call_tmp18 = (curElems > maxElems);
    if (call_tmp18) {
      maxElems = curElems;
      maxDim = i2;
    }
  }
  _breakLabel:;
  call_tmp19 = (parDim == INT64(-1));
  if (call_tmp19) {
    parDim = maxDim;
    call_tmp20 = ((uint64_t)(numChunks));
    call_tmp21 = (maxElems < call_tmp20);
    if (call_tmp21) {
      call_tmp22 = ((int64_t)(maxElems));
      numChunks = call_tmp22;
    }
  }
  *(call_tmp23 + INT64(0)) = numChunks;
  *(call_tmp23 + INT64(1)) = parDim;
  *(ret + INT64(0)) = *(call_tmp23 + INT64(0));
  *(ret + INT64(1)) = *(call_tmp23 + INT64(1));
  T3 = *(ret + INT64(0));
  T4 = *(ret + INT64(1));
  *(*(_retArg) + INT64(0)) = T3;
  *(*(_retArg) + INT64(1)) = T4;
  _end__computeChunkStuff:;
  return;
}

/* DSIUtil.chpl:47 */
static void _computeChunkStuff2(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_1_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  _tuple_2_star_int64_t ret;
  uint64_t numElems;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  int64_t call_tmp2;
  uint64_t call_tmp3;
  int64_t numChunks;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  _tuple_2_star_int64_t call_tmp6;
  int64_t T;
  int64_t T2;
  chpl_bool call_tmp7;
  int64_t parDim;
  int64_t maxDim;
  uint64_t maxElems;
  uint64_t call_tmp8;
  range_int64_t_bounded_F call_tmp9;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret2;
  int64_t end;
  int64_t ret3;
  int64_t i2;
  uint64_t curElems;
  _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp11;
  uint64_t call_tmp12;
  uint64_t call_tmp13;
  chpl_bool call_tmp14;
  chpl_bool call_tmp15;
  chpl_bool call_tmp16;
  uint64_t call_tmp17;
  chpl_bool call_tmp18;
  int64_t call_tmp19;
  _tuple_2_star_int64_t call_tmp20;
  int64_t T3;
  int64_t T4;
  numElems = UINT64(1);
  call_tmp = (*(ranges) + INT64(0));
  call_tmp2 = length(call_tmp, _ln, _fn);
  call_tmp3 = ((uint64_t)(call_tmp2));
  numElems *= call_tmp3;
  call_tmp4 = _computeNumChunks(maxTasks, ignoreRunning, minSize, numElems, _ln, _fn);
  numChunks = call_tmp4;
  call_tmp5 = (call_tmp4 == INT64(0));
  if (call_tmp5) {
    *(call_tmp6 + INT64(0)) = INT64(0);
    *(call_tmp6 + INT64(1)) = INT64(-1);
    *(ret + INT64(0)) = *(call_tmp6 + INT64(0));
    *(ret + INT64(1)) = *(call_tmp6 + INT64(1));
    T = *(ret + INT64(0));
    T2 = *(ret + INT64(1));
    *(*(_retArg) + INT64(0)) = T;
    *(*(_retArg) + INT64(1)) = T2;
    goto _end__computeChunkStuff;
  }
  call_tmp7 = (numChunks > INT64(0));
  assert2(call_tmp7, _ln, _fn);
  parDim = INT64(-1);
  maxDim = INT64(-1);
  call_tmp8 = min3(_ln, _fn);
  maxElems = call_tmp8;
  ret_to_arg_ref_tmp_ = &call_tmp9;
  _build_range(INT64(1), INT64(1), ret_to_arg_ref_tmp_, _ln, _fn);
  _ic__F0_this = call_tmp9;
  ret2 = (&_ic__F0_this)->_low;
  ret3 = (&_ic__F0_this)->_high;
  end = ret3;
  for (i = ret2; ((i <= end)); i += INT64(1)) {
    i2 = i;
    _ref_tmp_ = ranges;
    call_tmp10 = this6(_ref_tmp_, i, _ln, _fn);
    call_tmp11 = length(call_tmp10, _ln, _fn);
    call_tmp12 = ((uint64_t)(call_tmp11));
    curElems = call_tmp12;
    call_tmp13 = ((uint64_t)(numChunks));
    call_tmp14 = (call_tmp12 >= call_tmp13);
    if (call_tmp14) {
      parDim = i;
      goto _breakLabel;
    }
    call_tmp15 = (curElems > maxElems);
    if (call_tmp15) {
      maxElems = curElems;
      maxDim = i2;
    }
  }
  _breakLabel:;
  call_tmp16 = (parDim == INT64(-1));
  if (call_tmp16) {
    parDim = maxDim;
    call_tmp17 = ((uint64_t)(numChunks));
    call_tmp18 = (maxElems < call_tmp17);
    if (call_tmp18) {
      call_tmp19 = ((int64_t)(maxElems));
      numChunks = call_tmp19;
    }
  }
  *(call_tmp20 + INT64(0)) = numChunks;
  *(call_tmp20 + INT64(1)) = parDim;
  *(ret + INT64(0)) = *(call_tmp20 + INT64(0));
  *(ret + INT64(1)) = *(call_tmp20 + INT64(1));
  T3 = *(ret + INT64(0));
  T4 = *(ret + INT64(1));
  *(*(_retArg) + INT64(0)) = T3;
  *(*(_retArg) + INT64(1)) = T4;
  _end__computeChunkStuff:;
  return;
}

/* DSIUtil.chpl:92 */
static int64_t _computeNumChunks(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, uint64_t numElems, int64_t _ln, c_string _fn) {
  int64_t ret;
  chpl_bool call_tmp;
  uint64_t unumElems;
  int64_t numChunks;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  chpl_localeID_t call_tmp4;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp5;
  locale call_tmp6 = NULL;
  int64_t call_tmp7;
  int64_t call_tmp8;
  int64_t T;
  chpl_bool call_tmp9;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  chpl_bool T2;
  int64_t call_tmp12;
  uint64_t call_tmp13;
  chpl_bool call_tmp14;
  chpl_bool T3;
  chpl_bool call_tmp15;
  int64_t call_tmp16;
  uint64_t call_tmp17;
  chpl_bool call_tmp18;
  chpl_bool T4;
  chpl_bool call_tmp19;
  uint64_t call_tmp20;
  chpl_bool call_tmp21;
  int64_t call_tmp22;
  call_tmp = (numElems <= UINT64(0));
  if (call_tmp) {
    ret = INT64(0);
    goto _end__computeNumChunks;
  }
  unumElems = numElems;
  numChunks = maxTasks;
  call_tmp2 = (! ignoreRunning);
  if (call_tmp2) {
    call_tmp3 = chpl_task_getRequestedSubloc();
    ret_to_arg_ref_tmp_ = &call_tmp4;
    chpl_buildLocaleID(chpl_nodeID, call_tmp3, ret_to_arg_ref_tmp_, _ln, _fn);
    call_tmp5 = chpl__initCopy_chpl_rt_localeID_t(call_tmp4);
    call_tmp6 = chpl_localeID_to_locale(&call_tmp5, _ln, _fn);
    call_tmp7 = runningTasks(call_tmp6, _ln, _fn);
    call_tmp8 = (call_tmp7 - INT64(1));
    call_tmp9 = (call_tmp8 < maxTasks);
    if (call_tmp9) {
      call_tmp10 = (maxTasks - call_tmp8);
      T = call_tmp10;
    } else {
      T = INT64(1);
    }
    numChunks = T;
  }
  call_tmp11 = (minSize > INT64(0));
  if (call_tmp11) {
    call_tmp12 = (minSize * numChunks);
    call_tmp13 = ((uint64_t)(call_tmp12));
    call_tmp14 = (numElems < call_tmp13);
    if (call_tmp14) {
      call_tmp15 = (numChunks > INT64(1));
      T3 = call_tmp15;
    } else {
      T3 = false;
    }
    T2 = T3;
    while (T2) {
      numChunks -= INT64(1);
      call_tmp16 = (minSize * numChunks);
      call_tmp17 = ((uint64_t)(call_tmp16));
      call_tmp18 = (unumElems < call_tmp17);
      if (call_tmp18) {
        call_tmp19 = (numChunks > INT64(1));
        T4 = call_tmp19;
      } else {
        T4 = false;
      }
      T2 = T4;
    }
  }
  call_tmp20 = ((uint64_t)(numChunks));
  call_tmp21 = (call_tmp20 > unumElems);
  if (call_tmp21) {
    call_tmp22 = ((int64_t)(unumElems));
    numChunks = call_tmp22;
  }
  ret = numChunks;
  _end__computeNumChunks:;
  return ret;
}

/* DSIUtil.chpl:163 */
static uint64_t intCeilXDivByY(uint64_t x, uint64_t y, int64_t _ln, c_string _fn) {
  uint64_t call_tmp;
  uint64_t call_tmp2;
  uint64_t call_tmp3;
  call_tmp = (x - UINT64(1));
  call_tmp2 = (call_tmp / y);
  call_tmp3 = (UINT64(1) + call_tmp2);
  return call_tmp3;
}

/* DSIUtil.chpl:165 */
static void _computeBlock(int64_t numelems, int64_t numblocks, int64_t blocknum, int64_t wayhi, int64_t waylo, int64_t lo, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  int64_t T;
  chpl_bool call_tmp2;
  uint64_t call_tmp3;
  uint64_t call_tmp4;
  uint64_t call_tmp5;
  uint64_t call_tmp6;
  uint64_t call_tmp7;
  int64_t call_tmp8;
  int64_t call_tmp9;
  int64_t T2;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  uint64_t call_tmp12;
  int64_t call_tmp13;
  uint64_t call_tmp14;
  uint64_t call_tmp15;
  uint64_t call_tmp16;
  uint64_t call_tmp17;
  int64_t call_tmp18;
  int64_t call_tmp19;
  int64_t call_tmp20;
  call_tmp = (numelems == INT64(0));
  if (call_tmp) {
    *(*(_retArg) + INT64(0)) = INT64(1);
    *(*(_retArg) + INT64(1)) = INT64(0);
    goto _end__computeBlock;
  }
  call_tmp2 = (blocknum == INT64(0));
  if (call_tmp2) {
    T = waylo;
  } else {
    call_tmp3 = ((uint64_t)(numelems));
    call_tmp4 = ((uint64_t)(blocknum));
    call_tmp5 = (call_tmp3 * call_tmp4);
    call_tmp6 = ((uint64_t)(numblocks));
    call_tmp7 = intCeilXDivByY(call_tmp5, call_tmp6, _ln, _fn);
    call_tmp8 = ((int64_t)(call_tmp7));
    call_tmp9 = (lo + call_tmp8);
    T = call_tmp9;
  }
  call_tmp10 = (numblocks - INT64(1));
  call_tmp11 = (blocknum == call_tmp10);
  if (call_tmp11) {
    T2 = wayhi;
  } else {
    call_tmp12 = ((uint64_t)(numelems));
    call_tmp13 = (blocknum + INT64(1));
    call_tmp14 = ((uint64_t)(call_tmp13));
    call_tmp15 = (call_tmp12 * call_tmp14);
    call_tmp16 = ((uint64_t)(numblocks));
    call_tmp17 = intCeilXDivByY(call_tmp15, call_tmp16, _ln, _fn);
    call_tmp18 = ((int64_t)(call_tmp17));
    call_tmp19 = (lo + call_tmp18);
    call_tmp20 = (call_tmp19 - INT64(1));
    T2 = call_tmp20;
  }
  *(*(_retArg) + INT64(0)) = T;
  *(*(_retArg) + INT64(1)) = T2;
  _end__computeBlock:;
  return;
}

