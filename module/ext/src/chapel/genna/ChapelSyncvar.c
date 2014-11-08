/* ChapelSyncvar.chpl:26 */
static void chpl__init_ChapelSyncvar(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelSyncvar_p) {
    goto _exit_chpl__init_ChapelSyncvar;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelSyncvar";
  printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelSyncvar_p = true;
  {
    chpl__init_MemConsistency(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelSyncvar:;
  return;
}

/* ChapelSyncvar.chpl:37 */
static _syncvar_chpl_bool _construct__syncvar(chpl_bool value, int64_t _ln, c_string _fn) {
  _syncvar_chpl_bool this8 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  call_tmp = sizeof(chpl__syncvar_chpl_bool_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(0), _ln, _fn);
  this8 = ((_syncvar_chpl_bool)(cast_tmp));
  (this8)->value = value;
  initialize7(this8);
  return this8;
}

/* ChapelSyncvar.chpl:44 */
static void chpl___TILDE__syncvar(_syncvar_chpl_bool this8) {
  chpl_sync_destroyAux(&((this8)->sync_aux));
  return;
}

/* ChapelSyncvar.chpl:46 */
static void initialize7(_syncvar_chpl_bool this8) {
  chpl_sync_initAux(&((this8)->sync_aux));
  return;
}

/* ChapelSyncvar.chpl:69 */
static chpl_bool readFE(_syncvar_chpl_bool this8, int64_t _ln, c_string _fn) {
  chpl_bool ret;
  chpl_rmem_consist_release(_ln, _fn);
  chpl_sync_waitFullAndLock(&((this8)->sync_aux), _ln, _fn);
  ret = (this8)->value;
  chpl_sync_markAndSignalEmpty(&((this8)->sync_aux));
  chpl_rmem_consist_acquire(_ln, _fn);
  return ret;
}

/* ChapelSyncvar.chpl:114 */
static void writeEF(_syncvar_chpl_bool this8, chpl_bool val, int64_t _ln, c_string _fn) {
  _ref_chpl_bool call_tmp = NULL;
  chpl_rmem_consist_release(_ln, _fn);
  chpl_sync_waitEmptyAndLock(&((this8)->sync_aux), _ln, _fn);
  call_tmp = &((this8)->value);
  *(call_tmp) = val;
  chpl_sync_markAndSignalFull(&((this8)->sync_aux));
  chpl_rmem_consist_acquire(_ln, _fn);
  return;
}

