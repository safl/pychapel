/* LocaleTree.chpl:25 */
static void chpl__init_LocaleTree(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_localeTreeRecord this8;
  locale call_tmp = NULL;
  locale call_tmp2 = NULL;
  chpl_localeTreeRecord wrap_call_tmp;
  if (chpl__init_LocaleTree_p) {
    goto _exit_chpl__init_LocaleTree;
  }
  modFormatStr = "%*s\n";
  modStr = "LocaleTree";
  printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleTree_p = true;
  {
    chpl__init_ChapelLocale(_ln, _fn);
  }
  (&this8)->left = nil;
  (&this8)->right = nil;
  call_tmp = ((locale)(nil));
  (&this8)->left = call_tmp;
  call_tmp2 = ((locale)(nil));
  (&this8)->right = call_tmp2;
  wrap_call_tmp = _construct_chpl_localeTreeRecord(call_tmp, call_tmp2, &this8, _ln, _fn);
  chpl_localeTree = wrap_call_tmp;
  chpl_initLocaleTree(_ln, _fn);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleTree:;
  return;
}

/* LocaleTree.chpl:29 */
static chpl_localeTreeRecord _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, int64_t _ln, c_string _fn) {
  chpl_localeTreeRecord this8;
  this8 = *(meme);
  (&this8)->left = left;
  (&this8)->right = right;
  return this8;
}

/* LocaleTree.chpl:35 */
static void chpl_initLocaleTree(int64_t _ln, c_string _fn) {
  int64_t local_numLocales;
  DefaultRectangularDom_1_int64_t_F local_LocaleSpace = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  range_int64_t_bounded_F ret_x1;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret2;
  int64_t end;
  int64_t ret3;
  locale left = NULL;
  locale type_tmp = NULL;
  locale right = NULL;
  locale type_tmp2 = NULL;
  int64_t child;
  int64_t call_tmp;
  int64_t call_tmp2;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  locale call_tmp5 = NULL;
  int32_t _virtual_method_tmp_;
  chpl_bool call_tmp6;
  locale call_tmp7 = NULL;
  int32_t _virtual_method_tmp_2;
  int32_t _virtual_method_tmp_3;
  _ref_locale call_tmp8 = NULL;
  _ref_locale call_tmp9 = NULL;
  local_numLocales = numLocales;
  local_LocaleSpace = LocaleSpace;
  ret = local_LocaleSpace;
  ret_to_arg_ref_tmp_ = &default_argoffset;
  createTuple(INT64(0), ret_to_arg_ref_tmp_, _ln, _fn);
  this8 = ret;
  ret_ = &((this8)->ranges);
  ret_x1 = *(*(ret_) + INT64(0));
  _ic__F0_this = ret_x1;
  ret2 = (&_ic__F0_this)->_low;
  ret3 = (&_ic__F0_this)->_high;
  end = ret3;
  for (i = ret2; ((i <= end)); i += INT64(1)) {
    type_tmp = nil;
    left = type_tmp;
    type_tmp2 = nil;
    right = type_tmp2;
    call_tmp = (i + INT64(1));
    call_tmp2 = (call_tmp * INT64(2));
    call_tmp3 = (call_tmp2 - INT64(1));
    child = call_tmp3;
    call_tmp4 = (call_tmp3 < local_numLocales);
    if (call_tmp4) {
      _virtual_method_tmp_ = ((object)(rootLocale))->chpl__cid;
      call_tmp5 = ((locale(*)(locale, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(rootLocale, call_tmp3, _ln, _fn);
      left = call_tmp5;
      child += INT64(1);
      call_tmp6 = (child < local_numLocales);
      if (call_tmp6) {
        _virtual_method_tmp_2 = ((object)(rootLocale))->chpl__cid;
        call_tmp7 = ((locale(*)(locale, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(2))])(rootLocale, child, _ln, _fn);
        right = call_tmp7;
      }
    }
    _virtual_method_tmp_3 = ((object)(rootLocale))->chpl__cid;
    ((locale(*)(locale, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_3) + INT64(2))])(rootLocale, i, _ln, _fn);
    call_tmp8 = &((&chpl_localeTree)->left);
    *(call_tmp8) = left;
    call_tmp9 = &((&chpl_localeTree)->right);
    *(call_tmp9) = right;
  }
  return;
}

