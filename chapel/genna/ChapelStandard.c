/* ChapelStandard.chpl:24 */
void chpl__init_ChapelStandard(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelStandard_p) {
    goto _exit_chpl__init_ChapelStandard;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelStandard";
  printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelStandard_p = true;
  {
    chpl__init_ChapelBase(_ln, _fn);
    chpl__init_String(_ln, _fn);
    chpl__init_MemConsistency(_ln, _fn);
    chpl__init_Atomics(_ln, _fn);
    chpl__init_NetworkAtomics(_ln, _fn);
    chpl__init_AtomicsCommon(_ln, _fn);
    chpl__init_ChapelThreads(_ln, _fn);
    chpl__init_ChapelTuple(_ln, _fn);
    chpl__init_ChapelRange(_ln, _fn);
    chpl__init_ChapelReduce(_ln, _fn);
    chpl__init_ChapelSyncvar(_ln, _fn);
    chpl__init_LocaleModel(_ln, _fn);
    chpl__init_ChapelLocale(_ln, _fn);
    chpl__init_DefaultRectangular(_ln, _fn);
    chpl__init_LocalesArray(_ln, _fn);
    chpl__init_ChapelArray(_ln, _fn);
    chpl__init_ChapelDistribution(_ln, _fn);
    chpl__init_ChapelIO(_ln, _fn);
    chpl__init_LocaleTree(_ln, _fn);
    chpl__init_DefaultAssociative(_ln, _fn);
    chpl__init_ChapelTaskTable(_ln, _fn);
    chpl__init_MemTracking(_ln, _fn);
    chpl__init_ChapelUtil(_ln, _fn);
    chpl__init_ChapelDynDispHack(_ln, _fn);
    chpl__init_Types(_ln, _fn);
    chpl__init_CommDiagnostics(_ln, _fn);
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelStandard:;
  return;
}

