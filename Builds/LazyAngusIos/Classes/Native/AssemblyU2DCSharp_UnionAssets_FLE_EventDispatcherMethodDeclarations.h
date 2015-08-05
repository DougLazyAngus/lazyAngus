#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.EventDispatcher
struct EventDispatcher_t129;
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

// System.Void UnionAssets.FLE.EventDispatcher::.ctor()
extern "C" void EventDispatcher__ctor_m626 (EventDispatcher_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m627 (EventDispatcher_t129 * __this, String_t* ___eventName, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m628 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcher_addEventListener_m629 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m630 (EventDispatcher_t129 * __this, String_t* ___eventName, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m631 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcher_addEventListener_m632 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m633 (EventDispatcher_t129 * __this, String_t* ___eventName, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m634 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m635 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t630 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m636 (EventDispatcher_t129 * __this, String_t* ___eventName, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m637 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m638 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t631 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String)
extern "C" void EventDispatcher_dispatchEvent_m639 (EventDispatcher_t129 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcher_dispatchEvent_m640 (EventDispatcher_t129 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32)
extern "C" void EventDispatcher_dispatchEvent_m641 (EventDispatcher_t129 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32,System.Object)
extern "C" void EventDispatcher_dispatchEvent_m642 (EventDispatcher_t129 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String)
extern "C" void EventDispatcher_dispatch_m643 (EventDispatcher_t129 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object)
extern "C" void EventDispatcher_dispatch_m644 (EventDispatcher_t129 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32)
extern "C" void EventDispatcher_dispatch_m645 (EventDispatcher_t129 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object)
extern "C" void EventDispatcher_dispatch_m646 (EventDispatcher_t129 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object,System.String)
extern "C" void EventDispatcher_dispatch_m647 (EventDispatcher_t129 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::clearEvents()
extern "C" void EventDispatcher_clearEvents_m648 (EventDispatcher_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern "C" List_1_t634 * EventDispatcher_cloenArray_m649 (EventDispatcher_t129 * __this, List_1_t634 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern "C" List_1_t635 * EventDispatcher_cloenArray_m650 (EventDispatcher_t129 * __this, List_1_t635 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::OnDestroy()
extern "C" void EventDispatcher_OnDestroy_m651 (EventDispatcher_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
