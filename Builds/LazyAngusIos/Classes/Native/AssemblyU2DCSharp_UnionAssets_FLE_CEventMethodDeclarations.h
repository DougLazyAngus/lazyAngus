#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.CEvent
struct CEvent_t133;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnionAssets.FLE.IDispatcher
struct IDispatcher_t132;

// System.Void UnionAssets.FLE.CEvent::.ctor(System.Int32,System.String,System.Object,UnionAssets.FLE.IDispatcher)
extern "C" void CEvent__ctor_m681 (CEvent_t133 * __this, int32_t ___id, String_t* ___name, Object_t * ___data, Object_t * ___dispatcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.CEvent::stopPropagation()
extern "C" void CEvent_stopPropagation_m682 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.CEvent::stopImmediatePropagation()
extern "C" void CEvent_stopImmediatePropagation_m683 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::canBeDisptached(System.Object)
extern "C" bool CEvent_canBeDisptached_m684 (CEvent_t133 * __this, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnionAssets.FLE.CEvent::get_id()
extern "C" int32_t CEvent_get_id_m685 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnionAssets.FLE.CEvent::get_name()
extern "C" String_t* CEvent_get_name_m686 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnionAssets.FLE.CEvent::get_data()
extern "C" Object_t * CEvent_get_data_m687 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_target()
extern "C" Object_t * CEvent_get_target_m688 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_dispatcher()
extern "C" Object_t * CEvent_get_dispatcher_m689 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnionAssets.FLE.CEvent::get_currentTarget()
extern "C" Object_t * CEvent_get_currentTarget_m690 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::get_isStoped()
extern "C" bool CEvent_get_isStoped_m691 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::get_isLocked()
extern "C" bool CEvent_get_isLocked_m692 (CEvent_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
