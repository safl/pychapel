/* ChapelTuple.chpl:25 */
static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelTuple_p) {
    goto _exit_chpl__init_ChapelTuple;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelTuple";
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelTuple_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelTuple:;
  return;
}

/* ChapelTuple.chpl:109 */
static int64_t this4(_ref__tuple_27_star_int64_t this8, int64_t i, int64_t _ln, c_string _fn) {
  int64_t ret;
  ret = *(*(this8) + (i - INT64(1)));
  return ret;
}

/* ChapelTuple.chpl:109 */
static _ref_range_int64_t_bounded_F this5(_ref__tuple_2_star_range_int64_t_bounded_F this8, int64_t i, int64_t _ln, c_string _fn) {
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  call_tmp = (*(this8) + (i - INT64(1)));
  return call_tmp;
}

/* ChapelTuple.chpl:109 */
static void this7(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  range_int64_t_bounded_F ret;
  ret = *(*(this8) + (i - INT64(1)));
  *(_retArg) = ret;
  return;
}

/* ChapelTuple.chpl:109 */
static _ref_range_int64_t_bounded_F this6(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i, int64_t _ln, c_string _fn) {
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  call_tmp = (*(this8) + (i - INT64(1)));
  return call_tmp;
}

