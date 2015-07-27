#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.CEvent
struct CEvent_t93;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnionAssets.FLE.IDispatcher
struct IDispatcher_t92;

// System.Void UnionAssets.FLE.CEvent::.ctor(System.Int32,System.String,System.Object,UnionAssets.FLE.IDispatcher)
extern "C" void CEvent__ctor_m408 (CEvent_t93 * __this, int32_t ___id, String_t* ___name, Object_t * ___data, Object_t * ___dispatcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.CEvent::stopPropagation()
extern "C" void CEvent_stopPropagation_m409 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.CEvent::stopImmediatePropagation()
extern "C" void CEvent_stopImmediatePropagation_m410 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::canBeDisptached(System.Object)
extern "C" bool CEvent_canBeDisptached_m411 (CEvent_t93 * __this, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnionAssets.FLE.CEvent::get_id()
extern "C" int32_t CEvent_get_id_m412 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnionAssets.FLE.CEvent::get_name()
extern "C" String_t* CEvent_get_name_m413 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnionAssets.FLE.CEvent::get_data()
extern "C" Object_t * CEvent_get_data_m414 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_target()
extern "C" Object_t * CEvent_get_target_m415 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_dispatcher()
extern "C" Object_t * CEvent_get_dispatcher_m416 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnionAssets.FLE.CEvent::get_currentTarget()
extern "C" Object_t * CEvent_get_currentTarget_m417 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::get_isStoped()
extern "C" bool CEvent_get_isStoped_m418 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnionAssets.FLE.CEvent::get_isLocked()
extern "C" bool CEvent_get_isLocked_m419 (CEvent_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
