#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.EventDispatcherBase
struct EventDispatcherBase_t88;
// System.String
struct String_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t573;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t574;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t577;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>
struct List_1_t578;

// System.Void UnionAssets.FLE.EventDispatcherBase::.ctor()
extern "C" void EventDispatcherBase__ctor_m379 (EventDispatcherBase_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m380 (EventDispatcherBase_t88 * __this, String_t* ___eventName, EventHandlerFunction_t573 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m381 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t573 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_addEventListener_m382 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t573 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m383 (EventDispatcherBase_t88 * __this, String_t* ___eventName, DataEventHandlerFunction_t574 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m384 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t574 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_addEventListener_m385 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t574 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m386 (EventDispatcherBase_t88 * __this, String_t* ___eventName, EventHandlerFunction_t573 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m387 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t573 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m388 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t573 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m389 (EventDispatcherBase_t88 * __this, String_t* ___eventName, DataEventHandlerFunction_t574 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m390 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t574 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m391 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t574 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String)
extern "C" void EventDispatcherBase_dispatchEvent_m392 (EventDispatcherBase_t88 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatchEvent_m393 (EventDispatcherBase_t88 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32)
extern "C" void EventDispatcherBase_dispatchEvent_m394 (EventDispatcherBase_t88 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32,System.Object)
extern "C" void EventDispatcherBase_dispatchEvent_m395 (EventDispatcherBase_t88 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String)
extern "C" void EventDispatcherBase_dispatch_m396 (EventDispatcherBase_t88 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatch_m397 (EventDispatcherBase_t88 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32)
extern "C" void EventDispatcherBase_dispatch_m398 (EventDispatcherBase_t88 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object)
extern "C" void EventDispatcherBase_dispatch_m399 (EventDispatcherBase_t88 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object,System.String)
extern "C" void EventDispatcherBase_dispatch_m400 (EventDispatcherBase_t88 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::clearEvents()
extern "C" void EventDispatcherBase_clearEvents_m401 (EventDispatcherBase_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern "C" List_1_t577 * EventDispatcherBase_cloenArray_m402 (EventDispatcherBase_t88 * __this, List_1_t577 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern "C" List_1_t578 * EventDispatcherBase_cloenArray_m403 (EventDispatcherBase_t88 * __this, List_1_t578 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::OnDestroy()
extern "C" void EventDispatcherBase_OnDestroy_m404 (EventDispatcherBase_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
