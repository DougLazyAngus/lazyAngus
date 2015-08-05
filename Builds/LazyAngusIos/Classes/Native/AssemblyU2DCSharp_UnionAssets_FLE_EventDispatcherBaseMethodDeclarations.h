#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.EventDispatcherBase
struct EventDispatcherBase_t130;
// System.String
struct String_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t630;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t631;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t634;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>
struct List_1_t635;

// System.Void UnionAssets.FLE.EventDispatcherBase::.ctor()
extern "C" void EventDispatcherBase__ctor_m652 (EventDispatcherBase_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m653 (EventDispatcherBase_t130 * __this, String_t* ___eventName, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m654 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_addEventListener_m655 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m656 (EventDispatcherBase_t130 * __this, String_t* ___eventName, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m657 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_addEventListener_m658 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m659 (EventDispatcherBase_t130 * __this, String_t* ___eventName, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m660 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m661 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m662 (EventDispatcherBase_t130 * __this, String_t* ___eventName, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m663 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m664 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String)
extern "C" void EventDispatcherBase_dispatchEvent_m665 (EventDispatcherBase_t130 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatchEvent_m666 (EventDispatcherBase_t130 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32)
extern "C" void EventDispatcherBase_dispatchEvent_m667 (EventDispatcherBase_t130 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32,System.Object)
extern "C" void EventDispatcherBase_dispatchEvent_m668 (EventDispatcherBase_t130 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String)
extern "C" void EventDispatcherBase_dispatch_m669 (EventDispatcherBase_t130 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatch_m670 (EventDispatcherBase_t130 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32)
extern "C" void EventDispatcherBase_dispatch_m671 (EventDispatcherBase_t130 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object)
extern "C" void EventDispatcherBase_dispatch_m672 (EventDispatcherBase_t130 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object,System.String)
extern "C" void EventDispatcherBase_dispatch_m673 (EventDispatcherBase_t130 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::clearEvents()
extern "C" void EventDispatcherBase_clearEvents_m674 (EventDispatcherBase_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern "C" List_1_t634 * EventDispatcherBase_cloenArray_m675 (EventDispatcherBase_t130 * __this, List_1_t634 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern "C" List_1_t635 * EventDispatcherBase_cloenArray_m676 (EventDispatcherBase_t130 * __this, List_1_t635 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcherBase::OnDestroy()
extern "C" void EventDispatcherBase_OnDestroy_m677 (EventDispatcherBase_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
