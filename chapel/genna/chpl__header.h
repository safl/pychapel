
#define CHPL_GEN_CODE

#include "sys_basic.h"
#include "stdchpl.h"
#include "chpl_compilation_config.c"
/*** Class Type Identification Numbers ***/

const chpl__class_id chpl__cid__class_localscoforall_fn = 0;
const chpl__class_id chpl__cid__class_localscoforall_fn2 = 1;
const chpl__class_id chpl__cid__class_localscoforall_fn3 = 2;
const chpl__class_id chpl__cid_chpl___OpaqueIndex = 3;
const chpl__class_id chpl__cid__ddata__real64 = 4;
const chpl__class_id chpl__cid__ddata_chpl_TableEntry_chpl_taskID_t = 5;
const chpl__class_id chpl__cid__ddata_chpl_string = 6;
const chpl__class_id chpl__cid__ddata_chpldev_Task = 7;
const chpl__class_id chpl__cid__ddata_locale = 8;
const chpl__class_id chpl__cid__ddata_localesSignal = 9;
const chpl__class_id chpl__cid_chpl___EndCount = 10;
const chpl__class_id chpl__cid_BaseDist = 11;
const chpl__class_id chpl__cid_BaseDom = 12;
const chpl__class_id chpl__cid_BaseRectangularDom = 13;
const chpl__class_id chpl__cid_BaseAssociativeDom = 14;
const chpl__class_id chpl__cid_BaseArr = 15;
const chpl__class_id chpl__cid_Writer = 16;
const chpl__class_id chpl__cid_StringWriter = 17;
const chpl__class_id chpl__cid_locale = 18;
const chpl__class_id chpl__cid_AbstractLocaleModel = 19;
const chpl__class_id chpl__cid_AbstractRootLocale = 20;
const chpl__class_id chpl__cid_localesSignal = 21;
const chpl__class_id chpl__cid__ic_these__ref_range_int64_t_bounded_F = 22;
const chpl__class_id chpl__cid_ReduceScanOp = 23;
const chpl__class_id chpl__cid_SumReduceScanOp__real64 = 24;
const chpl__class_id chpl__cid__syncvar_chpl_bool = 25;
const chpl__class_id chpl__cid_chpldev_taskTable_t = 26;
const chpl__class_id chpl__cid__class_localscoforall_fn4 = 27;
const chpl__class_id chpl__cid_DefaultAssociativeDom_chpl_taskID_t_F = 28;
const chpl__class_id chpl__cid_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F = 29;
const chpl__class_id chpl__cid_DefaultDist = 30;
const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_F = 31;
const chpl__class_id chpl__cid_DefaultRectangularDom_2_int64_t_F = 32;
const chpl__class_id chpl__cid__ic_these_help_DefaultRectangularDom_2_int64_t_F = 33;
const chpl__class_id chpl__cid__ic_these_DefaultRectangularDom_2_int64_t_F = 34;
const chpl__class_id chpl__cid_DefaultRectangularArr__real64_2_int64_t_F = 35;
const chpl__class_id chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F = 36;
const chpl__class_id chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F = 37;
const chpl__class_id chpl__cid_DefaultRectangularArr_locale_1_int64_t_F = 38;
const chpl__class_id chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F = 39;
const chpl__class_id chpl__cid__ic_these_DefaultRectangularArr__real64_2_int64_t_F = 40;
const chpl__class_id chpl__cid_LocaleModel = 41;
const chpl__class_id chpl__cid_RootLocale = 42;
const chpl__class_id chpl__cid__class_localscoforall_fn5 = 43;
const chpl__class_id chpl__cid_object = 44;
const chpl__class_id chpl__cid_listNode_BaseArr = 45;
const chpl__class_id chpl__cid_listNode_BaseDom = 46;
const chpl__class_id chpl__cid_string_refcnt = 47;
const chpl__class_id chpl__cid__class_localscoforall_fn6 = 48;
const chpl__class_id chpl__cid__class_localscoforall_fn7 = 49;
const chpl__class_id chpl__cid__class_localscoforall_fn8 = 50;
/*** Class Prototypes ***/

typedef struct chpl__class_localscoforall_fn_s* _class_localscoforall_fn;
typedef struct chpl__class_localscoforall_fn2_s* _class_localscoforall_fn2;
typedef struct chpl__class_localscoforall_fn3_s* _class_localscoforall_fn3;
typedef struct chpl_chpl___OpaqueIndex_s* chpl___OpaqueIndex;
typedef struct chpl_chpl___EndCount_s* chpl___EndCount;
typedef struct chpl_BaseDist_s* BaseDist;
typedef struct chpl_BaseDom_s* BaseDom;
typedef struct chpl_BaseRectangularDom_s* BaseRectangularDom;
typedef struct chpl_BaseAssociativeDom_s* BaseAssociativeDom;
typedef struct chpl_BaseArr_s* BaseArr;
typedef struct chpl_Writer_s* Writer;
typedef struct chpl_StringWriter_s* StringWriter;
typedef struct chpl_locale_s* locale;
typedef struct chpl_AbstractLocaleModel_s* AbstractLocaleModel;
typedef struct chpl_AbstractRootLocale_s* AbstractRootLocale;
typedef struct chpl_localesSignal_s* localesSignal;
typedef struct chpl__ic_these__ref_range_int64_t_bounded_F_s* _ic_these__ref_range_int64_t_bounded_F;
typedef struct chpl_ReduceScanOp_s* ReduceScanOp;
typedef struct chpl_SumReduceScanOp__real64_s* SumReduceScanOp__real64;
typedef struct chpl__syncvar_chpl_bool_s* _syncvar_chpl_bool;
typedef struct chpl_chpldev_taskTable_t_s* chpldev_taskTable_t;
typedef struct chpl__class_localscoforall_fn4_s* _class_localscoforall_fn4;
typedef struct chpl_DefaultAssociativeDom_chpl_taskID_t_F_s* DefaultAssociativeDom_chpl_taskID_t_F;
typedef struct chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s* DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;
typedef struct chpl_DefaultDist_s* DefaultDist;
typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s* DefaultRectangularDom_1_int64_t_F;
typedef struct chpl_DefaultRectangularDom_2_int64_t_F_s* DefaultRectangularDom_2_int64_t_F;
typedef struct chpl__ic_these_help_DefaultRectangularDom_2_int64_t_F_s* _ic_these_help_DefaultRectangularDom_2_int64_t_F;
typedef struct chpl__ic_these_DefaultRectangularDom_2_int64_t_F_s* _ic_these_DefaultRectangularDom_2_int64_t_F;
typedef struct chpl_DefaultRectangularArr__real64_2_int64_t_F_s* DefaultRectangularArr__real64_2_int64_t_F;
typedef struct chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s* DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s* DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s* DefaultRectangularArr_locale_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s* DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef struct chpl__ic_these_DefaultRectangularArr__real64_2_int64_t_F_s* _ic_these_DefaultRectangularArr__real64_2_int64_t_F;
typedef struct chpl_LocaleModel_s* LocaleModel;
typedef struct chpl_RootLocale_s* RootLocale;
typedef struct chpl__class_localscoforall_fn5_s* _class_localscoforall_fn5;
typedef struct chpl_object_s* object;
typedef struct chpl_listNode_BaseArr_s* listNode_BaseArr;
typedef struct chpl_listNode_BaseDom_s* listNode_BaseDom;
typedef struct chpl_string_refcnt_s* string_refcnt;
typedef struct chpl__class_localscoforall_fn6_s* _class_localscoforall_fn6;
typedef struct chpl__class_localscoforall_fn7_s* _class_localscoforall_fn7;
typedef struct chpl__class_localscoforall_fn8_s* _class_localscoforall_fn8;
/*** Enumerated Types ***/

typedef enum {iterKind_leader = UINT32(1), iterKind_follower = UINT32(2)} iterKind;
typedef enum {BoundedRangeType_bounded = UINT32(1), BoundedRangeType_boundedLow = UINT32(2), BoundedRangeType_boundedHigh = UINT32(3), BoundedRangeType_boundedNone = UINT32(4)} BoundedRangeType;
typedef enum {taskState_pending = UINT32(1), taskState_active = UINT32(2), taskState_suspended = UINT32(3)} taskState;
typedef enum {chpl__hash_status_empty = UINT32(1), chpl__hash_status_full = UINT32(2), chpl__hash_status_deleted = UINT32(3)} chpl__hash_status;
typedef enum {iomode_r = INT64(1), iomode_cw = INT64(2), iomode_rw = INT64(3), iomode_cwr = INT64(4)} iomode;
typedef enum {iokind_dynamic = INT64(0), iokind_native = INT64(1), iokind_big = INT64(2), iokind_little = INT64(3)} iokind;
typedef enum {iostringstyle_len1b_data = INT64(-1), iostringstyle_len2b_data = INT64(-2), iostringstyle_len4b_data = INT64(-4), iostringstyle_len8b_data = INT64(-8), iostringstyle_lenVb_data = INT64(-10), iostringstyle_data_toeof = INT64(-65280), iostringstyle_data_null = INT64(-256)} iostringstyle;
typedef enum {relType_eq = INT64(1), relType_neq = UINT32(2), relType_lt = UINT32(3), relType_lte = UINT32(4), relType_gt = UINT32(5), relType_gte = UINT32(6)} relType;
/*** Records, Unions, Data Class, References (Hierarchically) ***/

typedef struct chpl_atomicflag_s {
  atomic_flag _v;
} atomicflag;

typedef struct chpl_atomic_int64_s {
  atomic_int_least64_t _v;
} atomic_int64;

typedef struct chpl_atomic_refcnt_s {
  atomic_int64 _cnt;
} atomic_refcnt;

typedef _real64 *_ddata__real64;
typedef struct chpl_chpl_TableEntry_chpl_taskID_t_s {
  chpl__hash_status status;
  chpl_taskID_t idx;
} chpl_TableEntry_chpl_taskID_t;

typedef chpl_TableEntry_chpl_taskID_t *_ddata_chpl_TableEntry_chpl_taskID_t;
typedef chpl_string *_ddata_chpl_string;
typedef struct chpl_chpldev_Task_s {
  taskState state;
  uint32_t lineno;
  c_string filename;
  uint64_t tl_info;
} chpldev_Task;

typedef chpldev_Task *_ddata_chpldev_Task;
typedef locale *_ddata_locale;
typedef localesSignal *_ddata_localesSignal;
typedef AbstractLocaleModel *_ref_AbstractLocaleModel;
typedef AbstractRootLocale *_ref_AbstractRootLocale;
typedef BaseArr *_ref_BaseArr;
typedef BaseAssociativeDom *_ref_BaseAssociativeDom;
typedef BaseDist *_ref_BaseDist;
typedef BaseDom *_ref_BaseDom;
typedef BaseRectangularDom *_ref_BaseRectangularDom;
typedef DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F *_ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;
typedef DefaultAssociativeDom_chpl_taskID_t_F *_ref_DefaultAssociativeDom_chpl_taskID_t_F;
typedef DefaultDist *_ref_DefaultDist;
typedef DefaultRectangularArr__real64_2_int64_t_F *_ref_DefaultRectangularArr__real64_2_int64_t_F;
typedef DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F *_ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef DefaultRectangularArr_chpldev_Task_1_int64_t_F *_ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef DefaultRectangularArr_locale_1_int64_t_F *_ref_DefaultRectangularArr_locale_1_int64_t_F;
typedef DefaultRectangularArr_localesSignal_1_int64_t_F *_ref_DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef DefaultRectangularDom_1_int64_t_F *_ref_DefaultRectangularDom_1_int64_t_F;
typedef DefaultRectangularDom_2_int64_t_F *_ref_DefaultRectangularDom_2_int64_t_F;
typedef LocaleModel *_ref_LocaleModel;
typedef ReduceScanOp *_ref_ReduceScanOp;
typedef RootLocale *_ref_RootLocale;
typedef StringWriter *_ref_StringWriter;
typedef SumReduceScanOp__real64 *_ref_SumReduceScanOp__real64;
typedef Writer *_ref_Writer;
typedef chpl___EndCount *_ref__EndCount;
typedef chpl___OpaqueIndex *_ref__OpaqueIndex;
typedef struct chpl_chpl___RuntimeTypeInfo_s {
  DefaultDist d;
} chpl___RuntimeTypeInfo;

typedef chpl___RuntimeTypeInfo *_ref__RuntimeTypeInfo;
typedef struct chpl_chpl___RuntimeTypeInfo4_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo4;

typedef chpl___RuntimeTypeInfo4 *_ref__RuntimeTypeInfo2;
typedef struct chpl_chpl___RuntimeTypeInfo5_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo5;

typedef chpl___RuntimeTypeInfo5 *_ref__RuntimeTypeInfo3;
typedef struct chpl_chpl___RuntimeTypeInfo3_s {
  DefaultDist d;
} chpl___RuntimeTypeInfo3;

typedef chpl___RuntimeTypeInfo3 *_ref__RuntimeTypeInfo4;
typedef struct chpl_chpl___RuntimeTypeInfo6_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo6;

typedef chpl___RuntimeTypeInfo6 *_ref__RuntimeTypeInfo5;
typedef struct chpl_chpl___RuntimeTypeInfo7_s {
  DefaultAssociativeDom_chpl_taskID_t_F dom;
} chpl___RuntimeTypeInfo7;

typedef chpl___RuntimeTypeInfo7 *_ref__RuntimeTypeInfo6;
typedef struct chpl_chpl___RuntimeTypeInfo8_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo8;

typedef chpl___RuntimeTypeInfo8 *_ref__RuntimeTypeInfo7;
typedef struct chpl_chpl___RuntimeTypeInfo2_s {
  DefaultDist d;
} chpl___RuntimeTypeInfo2;

typedef chpl___RuntimeTypeInfo2 *_ref__RuntimeTypeInfo8;
typedef struct chpl_chpl___RuntimeTypeInfo9_s {
  DefaultRectangularDom_2_int64_t_F dom;
} chpl___RuntimeTypeInfo9;

typedef chpl___RuntimeTypeInfo9 *_ref__RuntimeTypeInfo9;
typedef _ddata__real64 *_ref__ddata__real64;
typedef _ddata_chpl_TableEntry_chpl_taskID_t *_ref__ddata_chpl_TableEntry_chpl_taskID_t;
typedef _ddata_chpl_string *_ref__ddata_chpl_string;
typedef _ddata_chpldev_Task *_ref__ddata_chpldev_Task;
typedef _ddata_locale *_ref__ddata_locale;
typedef _ddata_localesSignal *_ref__ddata_localesSignal;
typedef _ic_these_DefaultRectangularArr__real64_2_int64_t_F *_ref__ic_these_DefaultRectangularArr__real64_2_int64_t_F;
typedef _ic_these_DefaultRectangularDom_2_int64_t_F *_ref__ic_these_DefaultRectangularDom_2_int64_t_F;
typedef _ic_these__ref_range_int64_t_bounded_F *_ref__ic_these__ref_range_int64_t_bounded_F;
typedef _ic_these_help_DefaultRectangularDom_2_int64_t_F *_ref__ic_these_help_DefaultRectangularDom_2_int64_t_F;
typedef struct chpl__ir_initOnLocales_AbstractRootLocale_s {
  AbstractRootLocale F0_this;
} _ir_initOnLocales_AbstractRootLocale;

typedef _ir_initOnLocales_AbstractRootLocale *_ref__ir_initOnLocales_AbstractRootLocale;
typedef struct chpl_range_int64_t_bounded_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_bounded_F;

typedef range_int64_t_bounded_F _tuple_2_star_range_int64_t_bounded_F[2];

typedef int64_t _tuple_2_star_int64_t[2];

typedef struct chpl__ir_these_DefaultRectangularDom_2_int64_t_F_s {
  DefaultRectangularDom_2_int64_t_F F0_this;
  _tuple_2_star_range_int64_t_bounded_F F1_followThis;
  int64_t F2_tasksPerLocale;
  chpl_bool F3_ignoreRunning;
  int64_t F4_minIndicesPerTask;
  _tuple_2_star_int64_t F5_offset;
} _ir_these_DefaultRectangularDom_2_int64_t_F;

typedef _ir_these_DefaultRectangularDom_2_int64_t_F *_ref__ir_these_DefaultRectangularDom_2_int64_t_F;
typedef _nilType *_ref__nilType;
typedef _real64 *_ref__real64;
typedef _syncvar_chpl_bool *_ref__syncvar_chpl_bool;
typedef c_string _tuple_1_star_c_string[1];

typedef _tuple_1_star_c_string *_ref__tuple_1_star_c_string;
typedef chpl_taskID_t _tuple_1_star_chpl_taskID_t[1];

typedef _tuple_1_star_chpl_taskID_t *_ref__tuple_1_star_chpl_taskID_t;
typedef int64_t _tuple_1_star_int64_t[1];

typedef _tuple_1_star_int64_t *_ref__tuple_1_star_int64_t;
typedef range_int64_t_bounded_F _tuple_1_star_range_int64_t_bounded_F[1];

typedef _tuple_1_star_range_int64_t_bounded_F *_ref__tuple_1_star_range_int64_t_bounded_F;
typedef int64_t _tuple_27_star_int64_t[27];

typedef _tuple_27_star_int64_t *_ref__tuple_27_star_int64_t;
typedef struct chpl__tuple_2_chpl_bool_int64_t_s {
  chpl_bool x1;
  int64_t x2;
} _tuple_2_chpl_bool_int64_t;

typedef _tuple_2_chpl_bool_int64_t *_ref__tuple_2_chpl_bool_int64_t;
typedef DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F[2];

typedef _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F *_ref__tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef DefaultRectangularArr_chpldev_Task_1_int64_t_F _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F[2];

typedef _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F *_ref__tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef _tuple_2_star_int64_t *_ref__tuple_2_star_int64_t;
typedef _tuple_2_star_range_int64_t_bounded_F *_ref__tuple_2_star_range_int64_t_bounded_F;
typedef DefaultRectangularArr__real64_2_int64_t_F _tuple_3_star__array_DefaultRectangularArr__real64_2_int64_t_F_DefaultRectangularArr__real64_2_int64_t_F[3];

typedef _tuple_3_star__array_DefaultRectangularArr__real64_2_int64_t_F_DefaultRectangularArr__real64_2_int64_t_F *_ref__tuple_3_star__array_DefaultRectangularArr__real64_2_int64_t_F_DefaultRectangularArr__real64_2_int64_t_F;
typedef chpl_string _tuple_6_star_chpl_string[6];

typedef _tuple_6_star_chpl_string *_ref__tuple_6_star_chpl_string;
typedef atomic_flag *_ref_atomic_flag;
typedef atomic_int64 *_ref_atomic_int64;
typedef atomic_int_least64_t *_ref_atomic_int_least64_t;
typedef atomic_refcnt *_ref_atomic_refcnt;
typedef atomicflag *_ref_atomicflag;
typedef c_string *_ref_c_string;
typedef c_string_copy *_ref_c_string_copy;
typedef struct chpl_channel_F_dynamic_T_s {
  locale home;
  qio_channel_ptr_t _channel_internal;
} channel_F_dynamic_T;

typedef channel_F_dynamic_T *_ref_channel_F_dynamic_T;
typedef struct chpl_channel_T_dynamic_T_s {
  locale home;
  qio_channel_ptr_t _channel_internal;
} channel_T_dynamic_T;

typedef channel_T_dynamic_T *_ref_channel_T_dynamic_T;
typedef chpl_TableEntry_chpl_taskID_t *_ref_chpl_TableEntry_chpl_taskID_t;
typedef chpl__hash_status *_ref_chpl__hash_status;
typedef chpl_bool *_ref_chpl_bool;
typedef chpl_localeID_t *_ref_chpl_localeID_t;
typedef struct chpl_chpl_localeTreeRecord_s {
  locale left;
  locale right;
} chpl_localeTreeRecord;

typedef chpl_localeTreeRecord *_ref_chpl_localeTreeRecord;
typedef chpl_main_argument *_ref_chpl_main_argument;
typedef chpl_string *_ref_chpl_string;
typedef chpl_taskID_t *_ref_chpl_taskID_t;
typedef chpl_task_list_p *_ref_chpl_task_list_p;
typedef chpldev_Task *_ref_chpldev_Task;
typedef chpldev_taskTable_t *_ref_chpldev_taskTable_t;
typedef struct chpl_file_s {
  locale home;
  qio_file_ptr_t _file_internal;
} file;

typedef file *_ref_file;
typedef int32_t *_ref_int32_t;
typedef int64_t *_ref_int64_t;
typedef struct chpl_ioNewline_s {
  chpl_bool skipWhitespaceOnly;
} ioNewline;

typedef ioNewline *_ref_ioNewline;
typedef iostyle *_ref_iostyle;
typedef listNode_BaseArr *_ref_listNode_BaseArr;
typedef listNode_BaseDom *_ref_listNode_BaseDom;
typedef struct chpl_list_BaseArr_s {
  listNode_BaseArr first;
  listNode_BaseArr last;
  int64_t length;
} list_BaseArr;

typedef list_BaseArr *_ref_list_BaseArr;
typedef struct chpl_list_BaseDom_s {
  listNode_BaseDom first;
  listNode_BaseDom last;
  int64_t length;
} list_BaseDom;

typedef list_BaseDom *_ref_list_BaseDom;
typedef locale *_ref_locale;
typedef struct chpl_localesBarrier_s {
  int dummyFieldToAvoidWarning;
} localesBarrier;

typedef localesBarrier *_ref_localesBarrier;
typedef localesSignal *_ref_localesSignal;
typedef object *_ref_object;
typedef qio_channel_ptr_t *_ref_qio_channel_ptr_t;
typedef qio_file_ptr_t *_ref_qio_file_ptr_t;
typedef struct chpl_range_int64_t_boundedLow_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_boundedLow_F;

typedef range_int64_t_boundedLow_F *_ref_range_int64_t_boundedLow_F;
typedef range_int64_t_bounded_F *_ref_range_int64_t_bounded_F;
typedef struct chpl_string_rec_s {
  c_string base;
  int64_t len;
  locale home;
  string_refcnt refCnt;
  string_refcnt aliasRefCnt;
} string_rec;

typedef string_rec *_ref_string_rec;
typedef string_refcnt *_ref_string_refcnt;
typedef syserr *_ref_syserr;
typedef taskState *_ref_taskState;
typedef uint32_t *_ref_uint32_t;
typedef uint64_t *_ref_uint64_t;
typedef uint8_t *_ref_uint8_t;
/*** Classes ***/

typedef struct chpl__class_localscoforall_fn_s {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp;
  _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _5_rvfDerefTmp;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn_object;

typedef struct chpl__class_localscoforall_fn2_s {
  _tuple_2_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp;
  DefaultRectangularArr__real64_2_int64_t_F _5_rvfDerefTmp;
  _real64 _6_b;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn2_object;

typedef struct chpl__class_localscoforall_fn3_s {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp;
  _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F _5_rvfDerefTmp;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn3_object;

typedef struct chpl__syncvar_chpl_bool_s {
  chpl_bool value;
  chpl_sync_aux_t sync_aux;
} chpl__syncvar_chpl_bool_object;

typedef struct chpl__class_localscoforall_fn4_s {
  _ref_locale _0_loc;
  chpl___EndCount _1_rvfDerefTmp;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn4_object;

typedef struct chpl__class_localscoforall_fn5_s {
  localesBarrier _0_b;
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags;
  int64_t _2_locIdx;
  int32_t _3_c_sublocid_any;
  chpl___EndCount _4_rvfDerefTmp;
  _ir_initOnLocales_AbstractRootLocale _5_rvfDerefTmp;
  RootLocale _6_this;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn5_object;

typedef struct chpl__class_localscoforall_fn6_s {
  chpl___EndCount _0_rvfDerefTmp;
} chpl__class_localscoforall_fn6_object;

typedef struct chpl__class_localscoforall_fn7_s {
  _tuple_2_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp;
  _tuple_3_star__array_DefaultRectangularArr__real64_2_int64_t_F_DefaultRectangularArr__real64_2_int64_t_F _5_rvfDerefTmp;
} chpl__class_localscoforall_fn7_object;

typedef struct chpl__class_localscoforall_fn8_s {
  _tuple_2_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  _ref__EndCount _4__tmp;
  DefaultRectangularArr__real64_2_int64_t_F _5_rvfDerefTmp;
  _ref_SumReduceScanOp__real64 _6__tmp;
} chpl__class_localscoforall_fn8_object;

typedef struct chpl_object_s {
  chpl__class_id chpl__cid;
} chpl_object_object;

typedef struct chpl_chpl___OpaqueIndex_s /* : object */ {
  chpl_object_object super;
} chpl_chpl___OpaqueIndex_object;

typedef struct chpl_chpl___EndCount_s /* : object */ {
  chpl_object_object super;
  atomic_int64 i;
  int64_t taskCnt;
  chpl_task_list_p taskList;
} chpl_chpl___EndCount_object;

typedef struct chpl_BaseDist_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _distCnt;
  list_BaseDom _doms;
  atomicflag _domsLock;
} chpl_BaseDist_object;

typedef struct chpl_BaseDom_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _domCnt;
  list_BaseArr _arrs;
  atomicflag _arrsLock;
} chpl_BaseDom_object;

typedef struct chpl_BaseArr_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _arrCnt;
  BaseArr _arrAlias;
} chpl_BaseArr_object;

typedef struct chpl_Writer_s /* : object */ {
  chpl_object_object super;
} chpl_Writer_object;

typedef struct chpl_locale_s /* : object */ {
  chpl_object_object super;
  locale parent;
  int64_t numCores;
  int64_t maxTaskPar;
  atomic_int64 runningTaskCounter;
} chpl_locale_object;

typedef struct chpl_localesSignal_s /* : object */ {
  chpl_object_object super;
  atomicflag s;
} chpl_localesSignal_object;

typedef struct chpl__ic_these__ref_range_int64_t_bounded_F_s /* : object */ {
  chpl_object_object super;
  range_int64_t_bounded_F F0_this;
  int64_t value;
  int64_t F1_const_tmp;
  int64_t F2_end;
  int64_t more;
} chpl__ic_these__ref_range_int64_t_bounded_F_object;

typedef struct chpl_ReduceScanOp_s /* : object */ {
  chpl_object_object super;
  _syncvar_chpl_bool lock_DOLLAR_;
} chpl_ReduceScanOp_object;

typedef struct chpl_chpldev_taskTable_t_s /* : object */ {
  chpl_object_object super;
  DefaultAssociativeDom_chpl_taskID_t_F dom;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F map;
} chpl_chpldev_taskTable_t_object;

typedef struct chpl__ic_these_help_DefaultRectangularDom_2_int64_t_F_s /* : object */ {
  chpl_object_object super;
  DefaultRectangularDom_2_int64_t_F F0_this;
  _tuple_2_star_range_int64_t_bounded_F F1_block;
  _ic_these__ref_range_int64_t_bounded_F F2__iterator;
  int64_t F3_i;
  int64_t F4_const_tmp;
  int64_t F5_end;
  int64_t F6_i;
  _ic_these__ref_range_int64_t_bounded_F F7__iterator;
  int64_t F8_i;
  int64_t F9_const_tmp;
  int64_t F10_end;
  _tuple_2_star_int64_t F11_call_tmp;
  _tuple_2_star_int64_t value;
  int64_t more;
} chpl__ic_these_help_DefaultRectangularDom_2_int64_t_F_object;

typedef struct chpl__ic_these_DefaultRectangularDom_2_int64_t_F_s /* : object */ {
  chpl_object_object super;
  DefaultRectangularDom_2_int64_t_F F0_this;
  _tuple_2_star_range_int64_t_bounded_F F1_followThis;
  int64_t F2_tasksPerLocale;
  chpl_bool F3_ignoreRunning;
  int64_t F4_minIndicesPerTask;
  _tuple_2_star_int64_t F5_offset;
  _tuple_2_star_range_int64_t_bounded_F F6__formal_tmp_followThis;
  _tuple_2_star_range_int64_t_bounded_F F7_block;
  _ic_these_help_DefaultRectangularDom_2_int64_t_F F8__iterator;
  _ic_these__ref_range_int64_t_bounded_F F9__iterator;
  int64_t F10_i;
  int64_t F11_const_tmp;
  int64_t F12_end;
  int64_t F13_i;
  _ic_these__ref_range_int64_t_bounded_F F14__iterator;
  int64_t F15_i;
  int64_t F16_const_tmp;
  int64_t F17_end;
  _tuple_2_star_int64_t F18_call_tmp;
  _tuple_2_star_int64_t F19__yieldedIndex;
  _tuple_2_star_int64_t value;
  int64_t more;
} chpl__ic_these_DefaultRectangularDom_2_int64_t_F_object;

typedef struct chpl__ic_these_DefaultRectangularArr__real64_2_int64_t_F_s /* : object */ {
  chpl_object_object super;
  DefaultRectangularArr__real64_2_int64_t_F F0_this;
  _tuple_2_star_range_int64_t_bounded_F F1_followThis;
  int64_t F2_tasksPerLocale;
  chpl_bool F3_ignoreRunning;
  int64_t F4_minIndicesPerTask;
  _tuple_2_star_range_int64_t_bounded_F F5__formal_tmp_followThis;
  _ic_these_DefaultRectangularDom_2_int64_t_F F6__iterator;
  _ir_these_DefaultRectangularDom_2_int64_t_F F7_call_tmp;
  _tuple_2_star_range_int64_t_bounded_F F8__formal_tmp_followThis;
  _tuple_2_star_range_int64_t_bounded_F F9_block;
  _ic_these_help_DefaultRectangularDom_2_int64_t_F F10__iterator;
  _ic_these__ref_range_int64_t_bounded_F F11__iterator;
  int64_t F12_i;
  int64_t F13_const_tmp;
  int64_t F14_end;
  int64_t F15_i;
  _ic_these__ref_range_int64_t_bounded_F F16__iterator;
  int64_t F17_i;
  int64_t F18_const_tmp;
  int64_t F19_end;
  _tuple_2_star_int64_t F20_call_tmp;
  _tuple_2_star_int64_t F21__yieldedIndex;
  _tuple_2_star_int64_t F22__yieldedIndex;
  _ref__real64 value;
  int64_t more;
} chpl__ic_these_DefaultRectangularArr__real64_2_int64_t_F_object;

typedef struct chpl_listNode_BaseArr_s /* : object */ {
  chpl_object_object super;
  BaseArr data;
  listNode_BaseArr next;
} chpl_listNode_BaseArr_object;

typedef struct chpl_listNode_BaseDom_s /* : object */ {
  chpl_object_object super;
  BaseDom data;
  listNode_BaseDom next;
} chpl_listNode_BaseDom_object;

typedef struct chpl_string_refcnt_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt val;
} chpl_string_refcnt_object;

typedef struct chpl_BaseRectangularDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseRectangularDom_object;

typedef struct chpl_BaseAssociativeDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseAssociativeDom_object;

typedef struct chpl_StringWriter_s /* : Writer */ {
  chpl_Writer_object super;
  c_string_copy s;
} chpl_StringWriter_object;

typedef struct chpl_AbstractLocaleModel_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractLocaleModel_object;

typedef struct chpl_AbstractRootLocale_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractRootLocale_object;

typedef struct chpl_SumReduceScanOp__real64_s /* : ReduceScanOp */ {
  chpl_ReduceScanOp_object super;
  _real64 value;
} chpl_SumReduceScanOp__real64_object;

typedef struct chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultAssociativeDom_chpl_taskID_t_F dom;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F data;
  DefaultRectangularDom_1_int64_t_F tmpDom;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F tmpTable;
} chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_object;

typedef struct chpl_DefaultDist_s /* : BaseDist */ {
  chpl_BaseDist_object super;
} chpl_DefaultDist_object;

typedef struct chpl_DefaultRectangularArr__real64_2_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_2_int64_t_F dom;
  _tuple_2_star_int64_t off;
  _tuple_2_star_int64_t blk;
  _tuple_2_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata__real64 data;
  _ddata__real64 shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr__real64_2_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_chpl_TableEntry_chpl_taskID_t data;
  _ddata_chpl_TableEntry_chpl_taskID_t shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_chpldev_Task data;
  _ddata_chpldev_Task shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_locale data;
  _ddata_locale shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_locale_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_localesSignal data;
  _ddata_localesSignal shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object;

typedef struct chpl_DefaultAssociativeDom_chpl_taskID_t_F_s /* : BaseAssociativeDom */ {
  chpl_BaseAssociativeDom_object super;
  DefaultDist dist;
  atomic_int64 numEntries;
  atomicflag tableLock;
  int64_t tableSizeNum;
  int64_t tableSize;
  DefaultRectangularDom_1_int64_t_F tableDom;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F table;
  chpl_bool postponeResize;
} chpl_DefaultAssociativeDom_chpl_taskID_t_F_object;

typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s /* : BaseRectangularDom */ {
  chpl_BaseRectangularDom_object super;
  DefaultDist dist;
  _tuple_1_star_range_int64_t_bounded_F ranges;
} chpl_DefaultRectangularDom_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularDom_2_int64_t_F_s /* : BaseRectangularDom */ {
  chpl_BaseRectangularDom_object super;
  DefaultDist dist;
  _tuple_2_star_range_int64_t_bounded_F ranges;
} chpl_DefaultRectangularDom_2_int64_t_F_object;

typedef struct chpl_LocaleModel_s /* : AbstractLocaleModel */ {
  chpl_AbstractLocaleModel_object super;
  uint64_t callStackSize;
  int64_t _node_id;
  chpl_string local_name;
} chpl_LocaleModel_object;

typedef struct chpl_RootLocale_s /* : AbstractRootLocale */ {
  chpl_AbstractRootLocale_object super;
  DefaultRectangularDom_1_int64_t_F myLocaleSpace;
  DefaultRectangularArr_locale_1_int64_t_F myLocales;
} chpl_RootLocale_object;

/*** Function Prototypes ***/

static void chpl__init_Atomics(int64_t _ln, c_string _fn);
static void atomic_fence(memory_order order, int64_t _ln, c_string _fn);
static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme, int64_t _ln, c_string _fn);
static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme, int64_t _ln, c_string _fn);
static void chpl__init_AtomicsCommon(int64_t _ln, c_string _fn);
static atomic_refcnt _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, int64_t _ln, c_string _fn);
static void chpl__init_CString(int64_t _ln, c_string _fn);
static void chpl__init_ChapelArray(int64_t _ln, c_string _fn);
static void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F value, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray4(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F value, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray5(DefaultRectangularArr_chpldev_Task_1_int64_t_F value, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray6(DefaultRectangularArr__real64_2_int64_t_F value, _ref_DefaultRectangularArr__real64_2_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newDomain2(DefaultAssociativeDom_chpl_taskID_t_F value, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
static void _newDomain3(DefaultRectangularDom_2_int64_t_F value, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo2 chpl__buildDomainRuntimeType2(DefaultDist d, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue2(DefaultDist d, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo3 chpl__buildDomainRuntimeType3(DefaultDist d, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue3(DefaultDist d, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo7 chpl__buildArrayRuntimeType4(DefaultAssociativeDom_chpl_taskID_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo8 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo9 chpl__buildArrayRuntimeType6(DefaultRectangularDom_2_int64_t_F dom, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue7(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue8(DefaultAssociativeDom_chpl_taskID_t_F dom, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue9(DefaultRectangularDom_2_int64_t_F dom, _ref_DefaultRectangularArr__real64_2_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void coforall_fn(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn);
static void coforall_fn2(_tuple_2_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, DefaultRectangularArr__real64_2_int64_t_F chpl__iter, _real64 b, int64_t _ln, c_string _fn);
static void coforall_fn3(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn);
static void chpl_incRefCountsForDomainsInArrayEltTypes(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes5(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes5(void);
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__buildDomainExpr2(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__buildDomainExpr3(range_int64_t_bounded_F* const _e0_ranges, range_int64_t_bounded_F* const _e1_ranges, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__ensureDomainExpr2(DefaultAssociativeDom_chpl_taskID_t_F x, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__ensureDomainExpr3(range_int64_t_bounded_F* const _e0_x, range_int64_t_bounded_F* const _e1_x, _ref_DefaultRectangularDom_2_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__ensureDomainExpr4(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static void chpl__buildDistValue2(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, c_string _fn);
static DefaultDist _distribution(DefaultDist _value, int64_t _ln, c_string _fn);
static void chpl___TILDE__distribution(DefaultDist this8, int64_t _ln, c_string _fn);
static void clone2(DefaultDist this8, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_2_int64_t_F newRectangularDom2(DefaultDist this8, int64_t _ln, c_string _fn);
static DefaultAssociativeDom_chpl_taskID_t_F newAssociativeDom(DefaultDist this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultAssociativeDom_chpl_taskID_t_F _construct__domain2(DefaultAssociativeDom_chpl_taskID_t_F _value, DefaultAssociativeDom_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularDom_2_int64_t_F _construct__domain3(DefaultRectangularDom_2_int64_t_F _value, DefaultRectangularDom_2_int64_t_F meme, int64_t _ln, c_string _fn);
static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl___TILDE__domain2(DefaultAssociativeDom_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static void chpl___TILDE__domain3(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn);
static void dist(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static void this2(DefaultRectangularDom_1_int64_t_F this8, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray2(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray3(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray4(DefaultAssociativeDom_chpl_taskID_t_F this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray5(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray6(DefaultRectangularDom_2_int64_t_F this8, _ref_DefaultRectangularArr__real64_2_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void help(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help2(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help3(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help4(DefaultAssociativeDom_chpl_taskID_t_F this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
static void help5(DefaultRectangularDom_1_int64_t_F this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help6(DefaultRectangularDom_2_int64_t_F this8, _ref_DefaultRectangularArr__real64_2_int64_t_F x, int64_t _ln, c_string _fn);
static void add(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t i, int64_t _ln, c_string _fn);
static void remove2(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t i, int64_t _ln, c_string _fn);
static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static int64_t high(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static chpl_bool member(DefaultAssociativeDom_chpl_taskID_t_F this8, _tuple_1_star_chpl_taskID_t* const i, int64_t _ln, c_string _fn);
static chpl_bool member2(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t _e0_i, int64_t _ln, c_string _fn);
static void setIndices(DefaultRectangularDom_1_int64_t_F this8, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
static void setIndices2(DefaultRectangularDom_2_int64_t_F this8, _tuple_2_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
static void getIndices(DefaultRectangularDom_1_int64_t_F this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F _construct__array(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _value, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F _value, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _value, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr__real64_2_int64_t_F _construct__array6(DefaultRectangularArr__real64_2_int64_t_F _value, DefaultRectangularArr__real64_2_int64_t_F meme, int64_t _ln, c_string _fn);
static void initialize(DefaultRectangularArr_locale_1_int64_t_F this8);
static void initialize2(DefaultRectangularArr_localesSignal_1_int64_t_F this8);
static void initialize3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8);
static void initialize4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8);
static void initialize5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8);
static void initialize6(DefaultRectangularArr__real64_2_int64_t_F this8);
static void chpl___TILDE__array(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl___TILDE__array2(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl___TILDE__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl___TILDE__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl___TILDE__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static void chpl___TILDE__array6(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn);
static void _dom(DefaultRectangularArr_locale_1_int64_t_F this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _dom2(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_(DefaultDist a, DefaultDist b, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_2(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, c_string _fn);
static void wrapcoforall_fn(_class_localscoforall_fn c);
static void wrapcoforall_fn2(_class_localscoforall_fn3 c);
static void chpl___ASSIGN_3(DefaultRectangularArr__real64_2_int64_t_F a, _real64 b, int64_t _ln, c_string _fn);
static void wrapcoforall_fn3(_class_localscoforall_fn2 c);
static void chpl__auto_destroy__OpaqueIndex(chpl___OpaqueIndex this8, int64_t _ln, c_string _fn);
static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, c_string _fn);
static void chpl__init_ChapelBase(int64_t _ln, c_string _fn);
static c_string _cast(taskState this8, int64_t _ln, c_string _fn);
static void compilerAssert(void);
static void init_elts(_ddata_locale x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts2(_ddata_localesSignal x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts3(_ddata_chpl_TableEntry_chpl_taskID_t x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts4(_ddata_chpldev_Task x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts5(_ddata__real64 x, int64_t s, int64_t _ln, c_string _fn);
static chpl___EndCount _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy__EndCount(chpl___EndCount this8, int64_t _ln, c_string _fn);
static void _upEndCount(chpl___EndCount e, int64_t _ln, c_string _fn);
static void _downEndCount(chpl___EndCount e, int64_t _ln, c_string _fn);
static void _waitEndCount(chpl___EndCount e, int64_t _ln, c_string _fn);
static void _waitEndCount2(chpl___EndCount _endCount, int64_t _ln, c_string _fn);
static int64_t _command_line_cast(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast2(c_string x, int64_t _ln, c_string _fn);
static int64_t _command_line_cast3(c_string x, int64_t _ln, c_string _fn);
static int64_t _command_line_cast4(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast5(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast6(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast7(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast8(c_string x, int64_t _ln, c_string _fn);
static uint64_t _command_line_cast9(c_string x, int64_t _ln, c_string _fn);
static uint64_t _command_line_cast10(c_string x, int64_t _ln, c_string _fn);
static c_string _command_line_cast11(c_string x, int64_t _ln, c_string _fn);
static c_string _command_line_cast12(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast13(c_string x, int64_t _ln, c_string _fn);
static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultAssociativeDom_chpl_taskID_t_F chpl__autoCopy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularDom_2_int64_t_F chpl__autoCopy4(DefaultRectangularDom_2_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl__autoCopy7(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl__autoCopy8(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl__autoCopy9(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr__real64_2_int64_t_F chpl__autoCopy10(DefaultRectangularArr__real64_2_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy(DefaultDist x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy4(DefaultRectangularDom_2_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy5(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy6(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy7(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy8(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy9(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy10(DefaultRectangularArr__real64_2_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn);
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseDist(BaseDist this8, int64_t _ln, c_string _fn);
static int64_t destroyDist(BaseDist this8, int64_t _ln, c_string _fn);
static void dsiDestroyDistClass(BaseDist this8);
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseDom(BaseDom this8, int64_t _ln, c_string _fn);
static BaseDist dsiMyDist(BaseDom this8, int64_t _ln, c_string _fn);
static int64_t destroyDom(BaseDom this8, int64_t _ln, c_string _fn);
static void _backupArrays(BaseDom this8, int64_t _ln, c_string _fn);
static void _removeArrayBackups(BaseDom this8, int64_t _ln, c_string _fn);
static void _preserveArrayElements(BaseDom this8, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn);
static chpl_bool dsiLinksDistribution(BaseDom this8);
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this8, int64_t _ln, c_string _fn);
static BaseAssociativeDom _construct_BaseAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseAssociativeDom meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseAssociativeDom(BaseAssociativeDom this8, int64_t _ln, c_string _fn);
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseArr(BaseArr this8, int64_t _ln, c_string _fn);
static BaseDom dsiGetBaseDom(BaseArr this8, int64_t _ln, c_string _fn);
static int64_t destroyArr(BaseArr this8, int64_t _ln, c_string _fn);
static void dsiDestroyData(BaseArr this8, int64_t _ln, c_string _fn);
static void dsiReallocate(BaseArr this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiPostReallocate(BaseArr this8);
static void clearEntry(BaseArr this8, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn);
static void _backupArray(BaseArr this8, int64_t _ln, c_string _fn);
static void _removeArrayBackup(BaseArr this8, int64_t _ln, c_string _fn);
static void _preserveArrayElement(BaseArr this8, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn);
static void chpl__init_ChapelDynDispHack(int64_t _ln, c_string _fn);
static void chpl__init_ChapelIO(int64_t _ln, c_string _fn);
static Writer _construct_Writer(Writer meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_Writer(Writer this8, int64_t _ln, c_string _fn);
static void writePrimitive(Writer this8, chpl_string x, int64_t _ln, c_string _fn);
static void writePrimitive2(Writer this8, uint64_t x, int64_t _ln, c_string _fn);
static void writePrimitive3(Writer this8, int64_t x, int64_t _ln, c_string _fn);
static void writeIt(Writer this8, chpl_string x, int64_t _ln, c_string _fn);
static void writeIt2(Writer this8, chpl_taskID_t x, int64_t _ln, c_string _fn);
static void writeIt3(Writer this8, uint64_t x, int64_t _ln, c_string _fn);
static void writeIt4(Writer this8, int64_t x, int64_t _ln, c_string _fn);
static void write2(Writer this8, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn);
static void write3(Writer this8, uint64_t _e0_args, int64_t _ln, c_string _fn);
static void write4(Writer this8, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn);
static void write5(Writer this8, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
static void assert2(chpl_bool test, int64_t _ln, c_string _fn);
static void halt(c_string s, int64_t _ln, c_string _fn);
static void halt2(chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn);
static void halt3(chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn);
static void halt4(chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
static void writeThis(chpl_taskID_t this8, Writer f, int64_t _ln, c_string _fn);
static StringWriter _construct_StringWriter(c_string_copy s, StringWriter meme, int64_t _ln, c_string _fn);
static StringWriter StringWriter2(c_string x, int64_t _ln, c_string _fn);
static void writePrimitive4(StringWriter this8, chpl_string x, int64_t _ln, c_string _fn);
static void writePrimitive5(StringWriter this8, uint64_t x, int64_t _ln, c_string _fn);
static void writePrimitive6(StringWriter this8, int64_t x, int64_t _ln, c_string _fn);
static void chpl___TILDE_StringWriter(StringWriter this8, int64_t _ln, c_string _fn);
static void write6(_ref_c_string this8, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn);
static void write7(_ref_c_string this8, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn);
static void write8(_ref_c_string this8, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn);
static locale _construct_locale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_locale(locale this8, int64_t _ln, c_string _fn);
static locale locale2(int64_t _ln, c_string _fn);
static int64_t id(locale this8, int64_t _ln, c_string _fn);
static int64_t chpl_id(locale this8, int64_t _ln, c_string _fn);
static int64_t getChildCount(locale this8, int64_t _ln, c_string _fn);
static locale getChild(locale this8, int64_t idx, int64_t _ln, c_string _fn);
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this8, int64_t _ln, c_string _fn);
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this8, int64_t _ln, c_string _fn);
static locale localeIDtoLocale(AbstractRootLocale this8, chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_localesSignal(localesSignal this8, int64_t _ln, c_string _fn);
static localesBarrier _construct_localesBarrier(localesBarrier* const meme);
static void wait2(_ref_localesBarrier this8, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, c_string _fn);
static void chpl_init_rootLocale(int64_t _ln, c_string _fn);
static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, c_string _fn);
static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
static int64_t runningTasks(locale this8, int64_t _ln, c_string _fn);
void chpl_taskRunningCntInc(int64_t _ln, c_string _fn);
void chpl_taskRunningCntDec(int64_t _ln, c_string _fn);
static void chpl__init_ChapelNumLocales(int64_t _ln, c_string _fn);
static void chpl__init_ChapelRange(int64_t _ln, c_string _fn);
static range_int64_t_bounded_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, c_string _fn);
static range_int64_t_boundedLow_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, c_string _fn);
static range_int64_t_bounded_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn);
static range_int64_t_boundedLow_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn);
static void _build_range(int64_t low, int64_t high2, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void _build_range2(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, c_string _fn);
static int64_t length(_ref_range_int64_t_bounded_F this8, int64_t _ln, c_string _fn);
static void this3(_ref_range_int64_t_bounded_F this8, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, c_string _fn);
static void chpl__init_ChapelReduce(int64_t _ln, c_string _fn);
static void chpl__reduceCombine(SumReduceScanOp__real64 globalOp, SumReduceScanOp__real64 localOp, int64_t _ln, c_string _fn);
static ReduceScanOp _construct_ReduceScanOp(_syncvar_chpl_bool lock_DOLLAR_, ReduceScanOp meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_ReduceScanOp(ReduceScanOp this8, int64_t _ln, c_string _fn);
static void lock(ReduceScanOp this8, int64_t _ln, c_string _fn);
static void unlock(ReduceScanOp this8, int64_t _ln, c_string _fn);
static SumReduceScanOp__real64 _construct_SumReduceScanOp(_syncvar_chpl_bool lock_DOLLAR_, _real64 value, SumReduceScanOp__real64 meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_SumReduceScanOp(SumReduceScanOp__real64 this8, int64_t _ln, c_string _fn);
static void accumulate(SumReduceScanOp__real64 this8, _real64 x, int64_t _ln, c_string _fn);
static void combine(SumReduceScanOp__real64 this8, SumReduceScanOp__real64 x, int64_t _ln, c_string _fn);
static _real64 generate(SumReduceScanOp__real64 this8, int64_t _ln, c_string _fn);
void chpl__init_ChapelStandard(int64_t _ln, c_string _fn);
static void chpl__init_ChapelSyncvar(int64_t _ln, c_string _fn);
static _syncvar_chpl_bool _construct__syncvar(chpl_bool value, int64_t _ln, c_string _fn);
static void chpl___TILDE__syncvar(_syncvar_chpl_bool this8);
static void initialize7(_syncvar_chpl_bool this8);
static chpl_bool readFE(_syncvar_chpl_bool this8, int64_t _ln, c_string _fn);
static void writeEF(_syncvar_chpl_bool this8, chpl_bool val, int64_t _ln, c_string _fn);
static void chpl__init_ChapelTaskTable(int64_t _ln, c_string _fn);
static chpldev_Task _construct_chpldev_Task(taskState state, uint32_t lineno, c_string filename, uint64_t tl_info, chpldev_Task* const meme, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_4(_ref_chpldev_Task _arg1, chpldev_Task* const _arg2, int64_t _ln, c_string _fn);
static chpldev_Task chpl__initCopy3(chpldev_Task* const x, int64_t _ln, c_string _fn);
static chpldev_taskTable_t _construct_chpldev_taskTable_t(DefaultAssociativeDom_chpl_taskID_t_F dom, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F map, chpldev_taskTable_t meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_chpldev_taskTable_t(chpldev_taskTable_t this8, int64_t _ln, c_string _fn);
static void chpldev_taskTable_init(int64_t _ln, c_string _fn);
static void coforall_fn4(_ref_locale loc, chpl___EndCount _coforallCount, int64_t _ln, c_string _fn);
static void wrapcoforall_fn4(_class_localscoforall_fn4 c);
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, c_string filename, uint64_t tl_info, int64_t _ln, c_string _fn);
void chpldev_taskTable_remove(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
void chpldev_taskTable_set_active(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
uint64_t chpldev_taskTable_get_tl_info(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
void chpldev_taskTable_print(int64_t _ln, c_string _fn);
static void chpl__init_ChapelThreads(int64_t _ln, c_string _fn);
static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn);
static int64_t this4(_ref__tuple_27_star_int64_t this8, int64_t i, int64_t _ln, c_string _fn);
static _ref_range_int64_t_bounded_F this5(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i, int64_t _ln, c_string _fn);
static _ref_range_int64_t_bounded_F this6(_ref__tuple_2_star_range_int64_t_bounded_F this8, int64_t i, int64_t _ln, c_string _fn);
static void this7(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void chpl__init_ChapelUtil(int64_t _ln, c_string _fn);
static void chpl__init_DefaultAssociative(int64_t _ln, c_string _fn);
static chpl_TableEntry_chpl_taskID_t _construct_chpl_TableEntry(chpl__hash_status status, chpl_taskID_t idx, chpl_TableEntry_chpl_taskID_t* const meme, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_5(_ref_chpl_TableEntry_chpl_taskID_t _arg1, chpl_TableEntry_chpl_taskID_t* const _arg2, int64_t _ln, c_string _fn);
static chpl_TableEntry_chpl_taskID_t chpl__initCopy4(chpl_TableEntry_chpl_taskID_t* const x, int64_t _ln, c_string _fn);
static void chpl__primes(_ref__tuple_27_star_int64_t _retArg, int64_t _ln, c_string _fn);
static DefaultAssociativeDom_chpl_taskID_t_F _construct_DefaultAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, atomic_int64* const numEntries, atomicflag* const tableLock, int64_t tableSizeNum, int64_t tableSize, DefaultRectangularDom_1_int64_t_F tableDom, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F table2, chpl_bool postponeResize, DefaultAssociativeDom_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultAssociativeDom(DefaultAssociativeDom_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static chpl_bool dsiLinksDistribution2(DefaultAssociativeDom_chpl_taskID_t_F this8);
static DefaultAssociativeDom_chpl_taskID_t_F DefaultAssociativeDom(DefaultDist dist2, int64_t _ln, c_string _fn);
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F dsiBuildArray(DefaultAssociativeDom_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static chpl_bool dsiMember(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, int64_t _ln, c_string _fn);
static int64_t dsiAdd(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, int64_t slotNum, chpl_bool haveLock, int64_t _ln, c_string _fn);
static int64_t _add(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, int64_t slotNum, int64_t _ln, c_string _fn);
static void dsiRemove(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, int64_t _ln, c_string _fn);
static void _resize(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_bool grow, int64_t _ln, c_string _fn);
static void _findFilledSlot(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
static void _findFilledSlot2(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
static void _findFilledSlot3(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
static void _findEmptySlot(DefaultAssociativeDom_chpl_taskID_t_F this8, chpl_taskID_t idx, chpl_bool haveLock, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct_DefaultAssociativeArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultAssociativeDom_chpl_taskID_t_F dom, DefaultRectangularArr_chpldev_Task_1_int64_t_F data, DefaultRectangularDom_1_int64_t_F tmpDom, DefaultRectangularArr_chpldev_Task_1_int64_t_F tmpTable, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultAssociativeArr(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static DefaultAssociativeDom_chpl_taskID_t_F dsiGetBaseDom2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static void clearEntry2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn);
static _ref_chpldev_Task dsiAccess(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn);
static void _backupArray2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static void _removeArrayBackup2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, int64_t _ln, c_string _fn);
static void _preserveArrayElement2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn);
static int64_t chpl__defaultHashWrapper(chpl_taskID_t x, int64_t _ln, c_string _fn);
static int64_t _gen_key(int64_t i, int64_t _ln, c_string _fn);
static void chpl__init_DefaultRectangular(int64_t _ln, c_string _fn);
static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, DefaultDist meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultDist(DefaultDist this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_2_int64_t_F dsiNewRectangularDom2(DefaultDist this8, int64_t _ln, c_string _fn);
static DefaultAssociativeDom_chpl_taskID_t_F dsiNewAssociativeDom(DefaultDist this8, int64_t _ln, c_string _fn);
static DefaultDist dsiClone(DefaultDist this8);
static void dsiAssign(DefaultDist this8, DefaultDist other);
static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularDom_2_int64_t_F _construct_DefaultRectangularDom2(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_2_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_2_int64_t_F meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularDom2(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn);
static chpl_bool dsiLinksDistribution3(DefaultRectangularDom_1_int64_t_F this8);
static chpl_bool dsiLinksDistribution4(DefaultRectangularDom_2_int64_t_F this8);
static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2, int64_t _ln, c_string _fn);
static DefaultRectangularDom_2_int64_t_F DefaultRectangularDom2(DefaultDist dist2, int64_t _ln, c_string _fn);
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this8, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
static void dsiSetIndices2(DefaultRectangularDom_2_int64_t_F this8, _tuple_2_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
static void dsiDim(DefaultRectangularDom_1_int64_t_F this8, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void dsiDim2(DefaultRectangularDom_2_int64_t_F this8, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void dsiDim3(DefaultRectangularDom_2_int64_t_F this8, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static int64_t dsiNumIndices2(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn);
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static int64_t dsiHigh(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray3(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F dsiBuildArray4(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpldev_Task_1_int64_t_F dsiBuildArray5(DefaultRectangularDom_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularArr__real64_2_int64_t_F dsiBuildArray6(DefaultRectangularDom_2_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this8, _tuple_1_star_range_int64_t_bounded_F* const ranges, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpl_TableEntry_chpl_taskID_t data, _ddata_chpl_TableEntry_chpl_taskID_t shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpldev_Task data, _ddata_chpldev_Task shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr__real64_2_int64_t_F _construct_DefaultRectangularArr5(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_2_int64_t_F dom, _tuple_2_star_int64_t* const off, _tuple_2_star_int64_t* const blk, _tuple_2_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata__real64 data, _ddata__real64 shiftedData, chpl_bool noinit_data, DefaultRectangularArr__real64_2_int64_t_F meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr5(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn);
static DefaultRectangularDom_2_int64_t_F dsiGetBaseDom7(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn);
static void dsiDestroyData2(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void dsiDestroyData3(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void dsiDestroyData4(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void dsiDestroyData5(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void dsiDestroyData6(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn);
static void advance(_ic_these_DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn);
static void computeFactoredOffs(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void computeFactoredOffs2(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void computeFactoredOffs3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void computeFactoredOffs4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void computeFactoredOffs5(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn);
static void initialize8(DefaultRectangularArr_locale_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void initialize9(DefaultRectangularArr_localesSignal_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void initialize10(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void initialize11(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, int64_t _ln, c_string _fn);
static void initialize12(DefaultRectangularArr__real64_2_int64_t_F this8, int64_t _ln, c_string _fn);
static void dsiReallocate2(DefaultRectangularArr_locale_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate3(DefaultRectangularArr_localesSignal_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate4(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate5(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate6(DefaultRectangularArr__real64_2_int64_t_F this8, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void chpl__init_LocaleModel(int64_t _ln, c_string _fn);
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn);
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_LocaleModel(LocaleModel this8, int64_t _ln, c_string _fn);
static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, c_string _fn);
static int64_t chpl_id2(LocaleModel this8, int64_t _ln, c_string _fn);
static int64_t getChildCount2(LocaleModel this8, int64_t _ln, c_string _fn);
static locale getChild2(LocaleModel this8, int64_t idx, int64_t _ln, c_string _fn);
static void init(LocaleModel this8, int64_t _ln, c_string _fn);
static RootLocale _construct_RootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_RootLocale(RootLocale this8, int64_t _ln, c_string _fn);
static RootLocale RootLocale2(int64_t _ln, c_string _fn);
static void init2(RootLocale this8, int64_t _ln, c_string _fn);
static void wrapcoforall_fn5(_class_localscoforall_fn5 c);
static void coforall_fn5(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, int32_t c_sublocid_any, chpl___EndCount _coforallCount, _ir_initOnLocales_AbstractRootLocale* const chpl__iter, RootLocale this8, int64_t _ln, c_string _fn);
static int64_t chpl_id3(RootLocale this8, int64_t _ln, c_string _fn);
static int64_t getChildCount3(RootLocale this8, int64_t _ln, c_string _fn);
static locale getChild3(RootLocale this8, int64_t idx, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray(RootLocale this8, int64_t _ln, c_string _fn);
static void getDefaultLocaleArray2(RootLocale this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static locale localeIDtoLocale2(RootLocale this8, chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
static chpl_opaque chpl_here_alloc(int64_t size, int16_t md, int64_t _ln, c_string _fn);
static void chpl_here_free(chpl_opaque ptr, int64_t _ln, c_string _fn);
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
static void chpl__init_LocaleTree(int64_t _ln, c_string _fn);
static chpl_localeTreeRecord _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, int64_t _ln, c_string _fn);
static void chpl_initLocaleTree(int64_t _ln, c_string _fn);
static void chpl__init_LocalesArray(int64_t _ln, c_string _fn);
static void chpl__init_MemConsistency(int64_t _ln, c_string _fn);
static void chpl__init_MemTracking(int64_t _ln, c_string _fn);
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaks, _ref_chpl_bool ret_memLeaksTable, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog, int64_t _ln, c_string _fn);
static void chpl__init_NetworkAtomics(int64_t _ln, c_string _fn);
void chpl__init_PrintModuleInitOrder(int64_t _ln, c_string _fn);
static void printModuleInit(c_string s1, c_string s2, int64_t len, int64_t _ln, c_string _fn);
static void initPrint(void);
static void chpl__init_String(int64_t _ln, c_string _fn);
static object _construct_object(object meme);
static void chpl__auto_destroy_object(object this8, int64_t _ln, c_string _fn);
void chpl__heapAllocateGlobals(void);
void chpl__init_preInit(int64_t _ln, c_string _fn);
static void chpl__init_BaseStringType(int64_t _ln, c_string _fn);
static void chpl__init_CommDiagnostics(int64_t _ln, c_string _fn);
static void chpl__init_DSIUtil(int64_t _ln, c_string _fn);
static void createTuple(int64_t val, _ref__tuple_1_star_int64_t _retArg, int64_t _ln, c_string _fn);
static void createTuple2(int64_t val, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn);
static void _computeChunkStuff(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_1_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn);
static void _computeChunkStuff2(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_2_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn);
static int64_t _computeNumChunks(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, uint64_t numElems, int64_t _ln, c_string _fn);
static uint64_t intCeilXDivByY(uint64_t x, uint64_t y, int64_t _ln, c_string _fn);
static void _computeBlock(int64_t numelems, int64_t numblocks, int64_t blocknum, int64_t wayhi, int64_t waylo, int64_t lo, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn);
static void chpl__init_Error(int64_t _ln, c_string _fn);
static c_string quote_string(chpl_string s, int64_t len, int64_t _ln, c_string _fn);
static void ioerror(syserr error, chpl_string msg, chpl_string path, int64_t _ln, c_string _fn);
static void ioerror2(syserr error, chpl_string msg, chpl_string path, int64_t offset, int64_t _ln, c_string _fn);
static void chpl__init_IO(int64_t _ln, c_string _fn);
static void defaultIOStyle(_ref_iostyle _retArg, int64_t _ln, c_string _fn);
static file _construct_file(locale home, qio_file_ptr_t _file_internal, file* const meme, int64_t _ln, c_string _fn);
static file chpl__initCopy5(file* const x, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_6(_ref_file ret, file* const x, int64_t _ln, c_string _fn);
static void check(_ref_file this8, int64_t _ln, c_string _fn);
static void chpl___TILDE_file(_ref_file this8, int64_t _ln, c_string _fn);
static void _style(_ref_file this8, _ref_iostyle _retArg, int64_t _ln, c_string _fn);
static chpl_string getPath(_ref_file this8, _ref_syserr error, int64_t _ln, c_string _fn);
static chpl_string tryGetPath(_ref_file this8, int64_t _ln, c_string _fn);
static void openfd(int32_t fd, _ref_syserr error, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
static void openfd2(int32_t fd, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
static void openfp(_cfile fp, _ref_syserr error, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
static void openfp2(_cfile fp, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
static channel_F_dynamic_T _construct_channel(locale home, qio_channel_ptr_t _channel_internal, channel_F_dynamic_T* const meme, int64_t _ln, c_string _fn);
static channel_T_dynamic_T _construct_channel2(locale home, qio_channel_ptr_t _channel_internal, channel_T_dynamic_T* const meme, int64_t _ln, c_string _fn);
static channel_F_dynamic_T chpl__initCopy6(channel_F_dynamic_T* const x, int64_t _ln, c_string _fn);
static channel_T_dynamic_T chpl__initCopy7(channel_T_dynamic_T* const x, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_7(_ref_channel_F_dynamic_T ret, channel_F_dynamic_T* const x, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_8(_ref_channel_T_dynamic_T ret, channel_T_dynamic_T* const x, int64_t _ln, c_string _fn);
static channel_F_dynamic_T channel(file* const f, _ref_syserr error, int32_t hints, int64_t start, int64_t end, iostyle* const local_style, int64_t _ln, c_string _fn);
static channel_T_dynamic_T channel2(file* const f, _ref_syserr error, int32_t hints, int64_t start, int64_t end, iostyle* const local_style, int64_t _ln, c_string _fn);
static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this8, int64_t _ln, c_string _fn);
static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this8, int64_t _ln, c_string _fn);
static ioNewline _construct_ioNewline(chpl_bool skipWhitespaceOnly, ioNewline* const meme, int64_t _ln, c_string _fn);
static void _ch_ioerror(_ref_channel_T_dynamic_T this8, syserr error, chpl_string msg, int64_t _ln, c_string _fn);
static void reader(_ref_file this8, _ref_syserr error, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg, int64_t _ln, c_string _fn);
static void reader2(_ref_file this8, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg, int64_t _ln, c_string _fn);
static void writer(_ref_file this8, _ref_syserr error, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg, int64_t _ln, c_string _fn);
static void writer2(_ref_file this8, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg, int64_t _ln, c_string _fn);
static syserr _write_text_internal(qio_channel_ptr_t _channel_internal, chpl_string x, int64_t _ln, c_string _fn);
static syserr _write_text_internal2(qio_channel_ptr_t _channel_internal, c_string x, int64_t _ln, c_string _fn);
static syserr _write_text_internal3(qio_channel_ptr_t _channel_internal, uint32_t x, int64_t _ln, c_string _fn);
static syserr _write_text_internal4(qio_channel_ptr_t _channel_internal, taskState x, int64_t _ln, c_string _fn);
static chpl_string _args_to_proto(chpl_string _e0_args, c_string _e1_args, chpl_string _e2_args, uint32_t _e3_args, chpl_string _e4_args, taskState _e5_args, ioNewline* const _e6_args, chpl_string preArg, int64_t _ln, c_string _fn);
static chpl_bool writeln(_ref_channel_T_dynamic_T this8, chpl_string _e0_args, c_string _e1_args, chpl_string _e2_args, uint32_t _e3_args, chpl_string _e4_args, taskState _e5_args, int64_t _ln, c_string _fn);
static void chpl__init_List(int64_t _ln, c_string _fn);
static listNode_BaseArr _construct_listNode(BaseArr data, listNode_BaseArr next, listNode_BaseArr meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_listNode(listNode_BaseArr this8, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_listNode2(listNode_BaseDom this8, int64_t _ln, c_string _fn);
static list_BaseArr _construct_list(listNode_BaseArr first, listNode_BaseArr last, int64_t length2, list_BaseArr* const meme, int64_t _ln, c_string _fn);
static list_BaseDom _construct_list2(listNode_BaseDom first, listNode_BaseDom last, int64_t length2, list_BaseDom* const meme, int64_t _ln, c_string _fn);
static void remove3(_ref_list_BaseDom this8, BaseDom x, int64_t _ln, c_string _fn);
static void remove4(_ref_list_BaseArr this8, BaseArr x, int64_t _ln, c_string _fn);
static void append(_ref_list_BaseArr this8, BaseArr e, int64_t _ln, c_string _fn);
static void chpl__init_NewString(int64_t _ln, c_string _fn);
static string_refcnt _construct_string_refcnt(atomic_refcnt* const val, string_refcnt meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_string_refcnt(string_refcnt this8, int64_t _ln, c_string _fn);
static string_rec _construct_string_rec(c_string base, int64_t len, locale home, string_refcnt refCnt, string_refcnt aliasRefCnt, string_rec* const meme, int64_t _ln, c_string _fn);
static string_rec string_rec2(int64_t _ln, c_string _fn);
static void chpl___TILDE_string_rec(_ref_string_rec this8, int64_t _ln, c_string _fn);
static void reinitString(_ref_string_rec this8, c_string s, int64_t slen, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_9(_ref_string_rec lhs, c_string rhs_c, int64_t _ln, c_string _fn);
static void chpl__init_Regexp(int64_t _ln, c_string _fn);
static void chpl__init_Sys(int64_t _ln, c_string _fn);
static void chpl__init_SysBasic(int64_t _ln, c_string _fn);
static void chpl__init_SysCTypes(int64_t _ln, c_string _fn);
static void chpl__init_Types(int64_t _ln, c_string _fn);
static int64_t min2(int64_t _ln, c_string _fn);
static uint64_t min3(int64_t _ln, c_string _fn);
static int64_t max2(int64_t _ln, c_string _fn);
static void chpl__init_chapel(int64_t _ln, c_string _fn);
int64_t chpl_gen_main(chpl_main_argument* const _arg);
void cAdd(_ref__real64 res, _ref__real64 in1, _ref__real64 in2);
void cSubtract(_ref__real64 res, _ref__real64 in1, _ref__real64 in2);
_real32 simpleReals(_real32 x, _real32 y);
int64_t simpleInts(int64_t x, int64_t y);
_real64 nicestuff(int64_t w, int64_t h, int64_t i);
static void chpl__autoDestroyGlobals(void);
static void wrapcoforall_fn6(_class_localscoforall_fn7 c);
static void wrapcoforall_fn7(_class_localscoforall_fn8 c);
void somethingelse(void);
static void coforall_fn6(chpl___EndCount _coforallCount);
static void wrapcoforall_fn8(_class_localscoforall_fn6 c);
int64_t woahhh(int64_t x);
static void coforall_fn7(_tuple_2_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_3_star__array_DefaultRectangularArr__real64_2_int64_t_F_DefaultRectangularArr__real64_2_int64_t_F* const chpl__iter);
static void coforall_fn8(_tuple_2_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, _ref__EndCount _coforallCount, DefaultRectangularArr__real64_2_int64_t_F _tmp, _ref_SumReduceScanOp__real64 _tmp2);
/*** Function Pointer Table ***/

chpl_fn_p chpl_ftable[] = {
  (chpl_fn_p)wrapcoforall_fn,
  (chpl_fn_p)wrapcoforall_fn2,
  (chpl_fn_p)wrapcoforall_fn3,
  (chpl_fn_p)wrapcoforall_fn4,
  (chpl_fn_p)wrapcoforall_fn5,
  (chpl_fn_p)wrapcoforall_fn6,
  (chpl_fn_p)wrapcoforall_fn7,
  (chpl_fn_p)wrapcoforall_fn8
};
/*** Virtual Method Table ***/

chpl_fn_p chpl_vmtable[] = {
  /* _class_localscoforall_fn */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn2 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn3 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___OpaqueIndex */
  (chpl_fn_p)chpl__auto_destroy__OpaqueIndex,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata__real64 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpl_TableEntry_chpl_taskID_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpl_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpldev_Task */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_locale */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_localesSignal */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___EndCount */
  (chpl_fn_p)chpl__auto_destroy__EndCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDist */
  (chpl_fn_p)chpl__auto_destroy_BaseDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDom */
  (chpl_fn_p)chpl__auto_destroy_BaseDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseRectangularDom */
  (chpl_fn_p)chpl__auto_destroy_BaseRectangularDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseAssociativeDom */
  (chpl_fn_p)chpl__auto_destroy_BaseAssociativeDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseArr */
  (chpl_fn_p)chpl__auto_destroy_BaseArr,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)dsiReallocate,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiDestroyData,
  (chpl_fn_p)dsiGetBaseDom,
  (chpl_fn_p)_backupArray,
  /* Writer */
  (chpl_fn_p)chpl__auto_destroy_Writer,
  (chpl_fn_p)writePrimitive2,
  (chpl_fn_p)writePrimitive,
  (chpl_fn_p)writePrimitive3,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* StringWriter */
  (chpl_fn_p)chpl___TILDE_StringWriter,
  (chpl_fn_p)writePrimitive5,
  (chpl_fn_p)writePrimitive4,
  (chpl_fn_p)writePrimitive6,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* locale */
  (chpl_fn_p)chpl__auto_destroy_locale,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* AbstractLocaleModel */
  (chpl_fn_p)chpl__auto_destroy_AbstractLocaleModel,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* AbstractRootLocale */
  (chpl_fn_p)chpl__auto_destroy_AbstractRootLocale,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)localeIDtoLocale,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* localesSignal */
  (chpl_fn_p)chpl__auto_destroy_localesSignal,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ic_these__ref_range_int64_t_bounded_F */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* ReduceScanOp */
  (chpl_fn_p)chpl__auto_destroy_ReduceScanOp,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* SumReduceScanOp__real64 */
  (chpl_fn_p)chpl__auto_destroy_SumReduceScanOp,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _syncvar_chpl_bool */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpldev_taskTable_t */
  (chpl_fn_p)chpl__auto_destroy_chpldev_taskTable_t,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn4 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultAssociativeDom_chpl_taskID_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultAssociativeDom,
  (chpl_fn_p)dsiLinksDistribution2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultAssociativeArr,
  (chpl_fn_p)_preserveArrayElement2,
  (chpl_fn_p)clearEntry2,
  (chpl_fn_p)dsiReallocate,
  (chpl_fn_p)_removeArrayBackup2,
  (chpl_fn_p)dsiDestroyData,
  (chpl_fn_p)dsiGetBaseDom2,
  (chpl_fn_p)_backupArray2,
  /* DefaultDist */
  (chpl_fn_p)chpl__auto_destroy_DefaultDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularDom_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularDom,
  (chpl_fn_p)dsiLinksDistribution3,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularDom_2_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularDom2,
  (chpl_fn_p)dsiLinksDistribution4,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ic_these_help_DefaultRectangularDom_2_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ic_these_DefaultRectangularDom_2_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularArr__real64_2_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr5,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)dsiReallocate6,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiDestroyData6,
  (chpl_fn_p)dsiGetBaseDom7,
  (chpl_fn_p)_backupArray,
  /* DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr3,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)dsiReallocate4,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiDestroyData4,
  (chpl_fn_p)dsiGetBaseDom5,
  (chpl_fn_p)_backupArray,
  /* DefaultRectangularArr_chpldev_Task_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr4,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)dsiReallocate5,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiDestroyData5,
  (chpl_fn_p)dsiGetBaseDom6,
  (chpl_fn_p)_backupArray,
  /* DefaultRectangularArr_locale_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)dsiReallocate2,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiDestroyData2,
  (chpl_fn_p)dsiGetBaseDom3,
  (chpl_fn_p)_backupArray,
  /* DefaultRectangularArr_localesSignal_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr2,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)dsiReallocate3,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiDestroyData3,
  (chpl_fn_p)dsiGetBaseDom4,
  (chpl_fn_p)_backupArray,
  /* _ic_these_DefaultRectangularArr__real64_2_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* LocaleModel */
  (chpl_fn_p)chpl__auto_destroy_LocaleModel,
  (chpl_fn_p)getChildCount2,
  (chpl_fn_p)getChild2,
  (chpl_fn_p)chpl_id2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* RootLocale */
  (chpl_fn_p)chpl__auto_destroy_RootLocale,
  (chpl_fn_p)getChildCount3,
  (chpl_fn_p)getChild3,
  (chpl_fn_p)chpl_id3,
  (chpl_fn_p)localeIDtoLocale2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn5 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* object */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseArr */
  (chpl_fn_p)chpl__auto_destroy_listNode,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseDom */
  (chpl_fn_p)chpl__auto_destroy_listNode2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* string_refcnt */
  (chpl_fn_p)chpl__auto_destroy_string_refcnt,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn6 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn7 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn8 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL
};
/*** Global Variables ***/

static atomic_int64 numPrivateObjects;
static int64_t taskCntType;
static chpl_bool chpl__testParOn;
static locale rootLocale;
static locale origRootLocale;
static locale dummyLocale;
static int64_t numLocales;
static chpldev_taskTable_t chpldev_taskTable;
static int64_t numThreadsPerLocale;
static int64_t chpl_table_index_type;
static int64_t dataParTasksPerLocale;
static chpl_bool dataParIgnoreRunningTasks;
static int64_t dataParMinGranularity;
static DefaultDist defaultDist;
static chpl_bool doneCreatingLocales;
static int32_t chpl_nodeID_t;
static int32_t chpl_sublocID_t;
static DefaultRectangularDom_1_int64_t_F chpl_emptyLocaleSpace;
static DefaultRectangularArr_locale_1_int64_t_F chpl_emptyLocales;
static chpl_localeTreeRecord chpl_localeTree;
static DefaultRectangularArr_locale_1_int64_t_F Locales;
static DefaultRectangularDom_1_int64_t_F LocaleSpace;
static chpl_bool memTrack;
static chpl_bool memStats;
static chpl_bool memLeaks;
static chpl_bool memLeaksTable;
static uint64_t memMax;
static uint64_t memThreshold;
static c_string memLog;
static c_string memLeaksLog;
static string_rec s_memLog;
static string_rec s_memLeaksLog;
static int32_t LINENO;
static chpl_bool printModuleInitOrder;
static int32_t moduleInitLevel;
static chpl_bool chpl__init_DSIUtil_p;
static chpl_bool chpl__init_Error_p;
static chpl_bool chpl__init_IO_p;
static chpl_bool chpl__init_List_p;
static chpl_bool chpl__init_Regexp_p;
static chpl_bool chpl__init_SysBasic_p;
static chpl_bool chpl__init_SysCTypes_p;
static chpl_bool chpl__init_Types_p;
static chpl_bool chpl__init_chapel_p;
static chpl_bool chpl__init_AtomicsCommon_p;
static chpl_bool chpl__init_ChapelDistribution_p;
static chpl_bool chpl__init_ChapelDynDispHack_p;
static chpl_bool chpl__init_MemConsistency_p;
static chpl_bool chpl__init_Sys_p;
static chpl_bool chpl__init_NetworkAtomics_p;
static chpl_bool chpl__init_ChapelArray_p;
static chpl_bool chpl__init_ChapelIO_p;
static chpl_bool chpl__init_ChapelLocale_p;
static chpl_bool chpl__init_ChapelNumLocales_p;
static chpl_bool chpl__init_ChapelRange_p;
static chpl_bool chpl__init_ChapelReduce_p;
static chpl_bool chpl__init_ChapelTaskTable_p;
static chpl_bool chpl__init_CommDiagnostics_p;
static chpl_bool chpl__init_DefaultAssociative_p;
static chpl_bool chpl__init_DefaultRectangular_p;
static chpl_bool chpl__init_MemTracking_p;
static chpl_bool chpl__init_String_p;
static chpl_bool chpl__init_ChapelBase_p;
static chpl_bool chpl__init_ChapelStandard_p;
static chpl_bool chpl__init_ChapelTuple_p;
static chpl_bool chpl__init_ChapelUtil_p;
static chpl_bool chpl__init_LocaleTree_p;
static chpl_bool chpl__init_ChapelSyncvar_p;
static chpl_bool chpl__init_ChapelThreads_p;
static chpl_bool chpl__init_LocaleModel_p;
static chpl_bool chpl__init_PrintModuleInitOrder_p;
static chpl_bool chpl__init_LocalesArray_p;
static chpl_bool chpl__init_Atomics_p;
static chpl_bool chpl__init_BaseStringType_p;
static chpl_bool chpl__init_NewString_p;
static chpl_bool chpl__init_CString_p;
static c_string baseType;
static int32_t IOHINT_NONE;
static int32_t IOHINT_RANDOM;
static int32_t IOHINT_SEQUENTIAL;
static int32_t IOHINT_CACHED;
static int32_t IOHINT_PARALLEL;
static chpl_string _r;
static chpl_string _rw;
static chpl_string _cw;
static chpl_string _cwr;
static _tuple_1_star_c_string _trues;
static _tuple_1_star_c_string _falses;
static chpl_string _i;
static _tuple_6_star_chpl_string _arg_to_proto_names;
static channel_F_dynamic_T stdin2;
static channel_T_dynamic_T stdout2;
static channel_T_dynamic_T stderr2;
const int chpl_numGlobalsOnHeap = 0;

ptr_wide_ptr_t chpl_globals_registry[1];
const int chpl_heterogeneous = 0;

const char* chpl_mem_descs[] = {
  "this",
  "locale",
  "listNode(BaseArr)",
  "listNode(BaseDom)",
  "DefaultDist",
  "domain(1,int(64),false)",
  "_ic_these__ref_list_BaseArr",
  "_ddata(locale)",
  "[domain(1,int(64),false)] locale",
  "_ic_these__ref_range_int64_t_bounded_F",
  "RootLocale",
  "_ic_these_DefaultRectangularDom_1_int64_t_F",
  "_ic_initOnLocales_AbstractRootLocale",
  "_ddata(localesSignal)",
  "[domain(1,int(64),false)] localesSignal",
  "_EndCount",
  "_ic_these_DefaultRectangularArr_localesSignal_1_int64_t_F",
  "localesSignal",
  "LocaleModel",
  "_ddata(chpl_TableEntry(chpl_taskID_t))",
  "[domain(1,int(64),false)] chpl_TableEntry(chpl_taskID_t)",
  "DefaultAssociativeDom(chpl_taskID_t,false)",
  "_ddata(chpldev_Task)",
  "[domain(1,int(64),false)] chpldev_Task",
  "[DefaultAssociativeDom(chpl_taskID_t,false)] chpldev_Task",
  "_ic_these_DefaultRectangularArr_locale_1_int64_t_F",
  "chpldev_taskTable_t",
  "string_refcnt",
  "_ic__lookForSlots_DefaultAssociativeDom_chpl_taskID_t_F",
  "_ic_these_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F",
  "_ic__fullSlots_DefaultAssociativeDom_chpl_taskID_t_F",
  "StringWriter",
  "_ic_these_DefaultAssociativeDom_chpl_taskID_t_F",
  "domain(2,int(64),false)",
  "_ddata(real(64))",
  "[domain(2,int(64),false)] real(64)",
  "_ic_these_help_DefaultRectangularDom_2_int64_t_F",
  "_ic_these_DefaultRectangularDom_2_int64_t_F",
  "_ic_these_DefaultRectangularArr__real64_2_int64_t_F",
  "SumReduceScanOp(real(64))",
  "_ic_these_DefaultRectangularArr_chpldev_Task_1_int64_t_F",
  "_ddata(string)",
  "bundled args"
};
const int chpl_mem_numDescs = 43;

void* const chpl_private_broadcast_table[] = {
  &chpl_verbose_comm,
  &chpl_comm_diagnostics,
  &chpl_verbose_mem
};
#include "chpl-gen-includes.h"
typedef chpl_sync_aux_t *_ref_chpl_sync_aux_t;
