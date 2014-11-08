/* ChapelRange.chpl:23 */
static void chpl__init_ChapelRange(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelRange_p) {
    goto _exit_chpl__init_ChapelRange;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelRange";
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelRange_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelRange:;
  return;
}

/* ChapelRange.chpl:58 */
static range_int64_t_bounded_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F this8;
  this8 = *(meme);
  (&this8)->_low = _low;
  (&this8)->_high = _high;
  (&this8)->_stride = _stride;
  (&this8)->_alignment = _alignment;
  (&this8)->_aligned = _aligned;
  return this8;
}

/* ChapelRange.chpl:58 */
static range_int64_t_boundedLow_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, c_string _fn) {
  range_int64_t_boundedLow_F this8;
  this8 = *(meme);
  (&this8)->_low = _low;
  (&this8)->_high = _high;
  (&this8)->_stride = _stride;
  (&this8)->_alignment = _alignment;
  (&this8)->_aligned = _aligned;
  return this8;
}

/* ChapelRange.chpl:93 */
static range_int64_t_bounded_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F this8;
  range_int64_t_bounded_F this9;
  range_int64_t_bounded_F wrap_call_tmp;
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  _ref_chpl_bool call_tmp4 = NULL;
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
  this8 = wrap_call_tmp;
  call_tmp = &((&this8)->_low);
  *(call_tmp) = _low;
  call_tmp2 = &((&this8)->_high);
  *(call_tmp2) = _high;
  call_tmp3 = &((&this8)->_alignment);
  *(call_tmp3) = _alignment;
  call_tmp4 = &((&this8)->_aligned);
  *(call_tmp4) = _aligned;
  return this8;
}

/* ChapelRange.chpl:93 */
static range_int64_t_boundedLow_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn) {
  range_int64_t_boundedLow_F this8;
  range_int64_t_boundedLow_F this9;
  range_int64_t_boundedLow_F wrap_call_tmp;
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  _ref_chpl_bool call_tmp4 = NULL;
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
  wrap_call_tmp = _construct_range2(INT64(1), INT64(0), INT64(1), INT64(0), false, &this9, _ln, _fn);
  this8 = wrap_call_tmp;
  call_tmp = &((&this8)->_low);
  *(call_tmp) = _low;
  call_tmp2 = &((&this8)->_high);
  *(call_tmp2) = _high;
  call_tmp3 = &((&this8)->_alignment);
  *(call_tmp3) = _alignment;
  call_tmp4 = &((&this8)->_aligned);
  *(call_tmp4) = _aligned;
  return this8;
}

/* ChapelRange.chpl:128 */
static void _build_range(int64_t low, int64_t high2, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F wrap_call_tmp;
  wrap_call_tmp = range(low, high2, INT64(1), INT64(0), false, _ln, _fn);
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelRange.chpl:140 */
static void _build_range2(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_boundedLow_F wrap_call_tmp;
  wrap_call_tmp = range2(bound, bound, INT64(1), INT64(0), false, _ln, _fn);
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelRange.chpl:228 */
static int64_t length(_ref_range_int64_t_bounded_F this8, int64_t _ln, c_string _fn) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp;
  int64_t s;
  int64_t call_tmp2;
  int64_t ret4;
  int64_t ret5;
  int64_t ret6;
  int64_t ret7;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  ret2 = (this8)->_low;
  ret3 = (this8)->_high;
  call_tmp = (ret2 > ret3);
  if (call_tmp) {
    ret = INT64(0);
    goto _end_length;
  }
  s = INT64(1);
  ret5 = (this8)->_high;
  ret4 = ret5;
  goto _end_alignedHigh;
  _end_alignedHigh:;
  call_tmp2 = ret4;
  ret7 = (this8)->_low;
  ret6 = ret7;
  goto _end_alignedLow;
  _end_alignedLow:;
  call_tmp3 = (call_tmp2 - ret6);
  call_tmp4 = (call_tmp3 / s);
  call_tmp5 = (call_tmp4 + INT64(1));
  ret = call_tmp5;
  _end_length:;
  return ret;
}

/* ChapelRange.chpl:771 */
static void this3(_ref_range_int64_t_bounded_F this8, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  int64_t ret4;
  _tuple_2_star_int64_t type_tmp;
  _tuple_2_star_int64_t call_tmp;
  range_int64_t_bounded_F result;
  int64_t T;
  chpl_bool call_tmp2;
  int64_t T2;
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  chpl_bool T3;
  chpl_bool ret5;
  chpl_bool T4;
  chpl_bool ret6;
  ret = (this8)->_low;
  ret2 = (this8)->_high;
  ret3 = (other)->_low;
  ret4 = (other)->_high;
  *(type_tmp + INT64(0)) = INT64(0);
  *(type_tmp + INT64(1)) = INT64(0);
  *(call_tmp + INT64(0)) = INT64(1);
  *(call_tmp + INT64(1)) = INT64(0);
  *(type_tmp + INT64(0)) = *(call_tmp + INT64(0));
  *(type_tmp + INT64(1)) = *(call_tmp + INT64(1));
  call_tmp2 = (ret > ret3);
  if (call_tmp2) {
    T = ret;
  } else {
    T = ret3;
  }
  call_tmp3 = (ret2 < ret4);
  if (call_tmp3) {
    T2 = ret2;
  } else {
    T2 = ret4;
  }
  call_tmp4 = (! false);
  if (call_tmp4) {
    ret5 = (this8)->_aligned;
    if (ret5) {
      T4 = true;
    } else {
      ret6 = (other)->_aligned;
      T4 = ret6;
    }
    T3 = T4;
  } else {
    T3 = false;
  }
  result = range(T, T2, INT64(1), INT64(0), T3, _ln, _fn);
  *(_retArg) = result;
  return;
}

/* ChapelRange.chpl:893 */
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  chpl_bool call_tmp;
  range_int64_t_bounded_F call_tmp2;
  chpl_bool call_tmp3;
  chpl_bool T;
  chpl_bool call_tmp4;
  int64_t call_tmp5;
  int64_t T2;
  chpl_bool call_tmp6;
  int64_t ret;
  int64_t ret2;
  int64_t call_tmp7;
  int64_t call_tmp8;
  int64_t T3;
  chpl_bool call_tmp9;
  int64_t ret3;
  int64_t ret4;
  int64_t call_tmp10;
  int64_t call_tmp11;
  int64_t ret5;
  chpl_bool ret6;
  range_int64_t_bounded_F call_tmp12;
  call_tmp = (count == INT64(0));
  if (call_tmp) {
    call_tmp2 = range(INT64(1), INT64(0), INT64(1), INT64(0), false, _ln, _fn);
    *(_retArg) = call_tmp2;
    goto _end_chpl_count_help;
  }
  call_tmp3 = (! false);
  if (call_tmp3) {
    call_tmp4 = (count < INT64(0));
    T = call_tmp4;
  } else {
    T = false;
  }
  if (T) {
    halt("With a negative count, the range must have a last index.", _ln, _fn);
  }
  call_tmp5 = (count * INT64(1));
  call_tmp6 = (call_tmp5 > INT64(0));
  if (call_tmp6) {
    ret = (r)->_low;
    T2 = ret;
  } else {
    ret2 = (r)->_high;
    call_tmp7 = (call_tmp5 + INT64(1));
    call_tmp8 = chpl__add(ret2, call_tmp7, _ln, _fn);
    T2 = call_tmp8;
  }
  call_tmp9 = (call_tmp5 < INT64(0));
  if (call_tmp9) {
    ret3 = (r)->_high;
    T3 = ret3;
  } else {
    ret4 = (r)->_low;
    call_tmp10 = (call_tmp5 - INT64(1));
    call_tmp11 = chpl__add(ret4, call_tmp10, _ln, _fn);
    T3 = call_tmp11;
  }
  ret5 = (r)->_alignment;
  ret6 = (r)->_aligned;
  call_tmp12 = range(T2, T3, INT64(1), ret5, ret6, _ln, _fn);
  *(_retArg) = call_tmp12;
  _end_chpl_count_help:;
  return;
}

/* ChapelRange.chpl:965 */
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_count_help(r, count, ret_to_arg_ref_tmp_, _ln, _fn);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelRange.chpl:1495 */
static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, c_string _fn) {
  int64_t ret;
  chpl_bool call_tmp;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl_bool T2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_bool T3;
  chpl_bool call_tmp8;
  chpl_bool T4;
  int64_t call_tmp9;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  int64_t call_tmp12;
  int64_t call_tmp13;
  call_tmp = (a > INT64(0));
  if (call_tmp) {
    call_tmp2 = (b > INT64(0));
    T = call_tmp2;
  } else {
    T = false;
  }
  if (T) {
    call_tmp3 = max2(_ln, _fn);
    call_tmp4 = (call_tmp3 - a);
    call_tmp5 = (b > call_tmp4);
    T2 = call_tmp5;
  } else {
    T2 = false;
  }
  if (T2) {
    call_tmp6 = max2(_ln, _fn);
    ret = call_tmp6;
    goto _end_chpl__add;
  }
  call_tmp7 = (a < INT64(0));
  if (call_tmp7) {
    call_tmp8 = (b < INT64(0));
    T3 = call_tmp8;
  } else {
    T3 = false;
  }
  if (T3) {
    call_tmp9 = min2(_ln, _fn);
    call_tmp10 = (call_tmp9 - a);
    call_tmp11 = (b < call_tmp10);
    T4 = call_tmp11;
  } else {
    T4 = false;
  }
  if (T4) {
    call_tmp12 = min2(_ln, _fn);
    ret = call_tmp12;
    goto _end_chpl__add;
  }
  call_tmp13 = (a + b);
  ret = call_tmp13;
  _end_chpl__add:;
  return ret;
}

