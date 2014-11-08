/* LocalesArray.chpl:40 */
static void chpl__init_LocalesArray(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  RootLocale _formal_type_tmp_ = NULL;
  RootLocale T = NULL;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  RootLocale call_tmp3 = NULL;
  RootLocale call_tmp4 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F const_tmp = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  if (chpl__init_LocalesArray_p) {
    goto _exit_chpl__init_LocalesArray;
  }
  modFormatStr = "%*s\n";
  modStr = "LocalesArray";
  printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocalesArray_p = true;
  chpl_init_rootLocale(_ln, _fn);
  call_tmp = ((object)(rootLocale));
  call_tmp2 = (call_tmp != nil);
  if (call_tmp2) {
    call_tmp3 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
    T = call_tmp3;
  } else {
    call_tmp4 = ((RootLocale)(nil));
    T = call_tmp4;
  }
  ret_to_arg_ref_tmp_ = &call_tmp5;
  getDefaultLocaleArray2(T, ret_to_arg_ref_tmp_, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  newAlias(call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
  Locales = call_tmp6;
  ret_to_arg_ref_tmp_3 = &const_tmp;
  _dom(Locales, ret_to_arg_ref_tmp_3, _ln, _fn);
  LocaleSpace = const_tmp;
  chpl__autoDestroy5(call_tmp5, _ln, _fn);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocalesArray:;
  return;
}

