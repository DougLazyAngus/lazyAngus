#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.EventDispatcher
struct EventDispatcher_t87;
// System.String
struct String_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t479;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t480;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t483;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>
struct List_1_t484;

// System.Void UnionAssets.FLE.EventDispatcher::.ctor()
extern "C" void EventDispatcher__ctor_m353 (EventDispatcher_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m354 (EventDispatcher_t87 * __this, String_t* ___eventName, EventHandlerFunction_t479 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m355 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t479 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcher_addEventListener_m356 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t479 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m357 (EventDispatcher_t87 * __this, String_t* ___eventName, DataEventHandlerFunction_t480 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m358 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t480 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcher_addEventListener_m359 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t480 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m360 (EventDispatcher_t87 * __this, String_t* ___eventName, EventHandlerFunction_t479 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m361 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t479 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m362 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t479 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m363 (EventDispatcher_t87 * __this, String_t* ___eventName, DataEventHandlerFunction_t480 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m364 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t480 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m365 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t480 * ___handler, String_t* ___eventGraphName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String)
extern "C" void EventDispatcher_dispatchEvent_m366 (EventDispatcher_t87 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcher_dispatchEvent_m367 (EventDispatcher_t87 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32)
extern "C" void EventDispatcher_dispatchEvent_m368 (EventDispatcher_t87 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32,System.Object)
extern "C" void EventDispatcher_dispatchEvent_m369 (EventDispatcher_t87 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String)
extern "C" void EventDispatcher_dispatch_m370 (EventDispatcher_t87 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object)
extern "C" void EventDispatcher_dispatch_m371 (EventDispatcher_t87 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32)
extern "C" void EventDispatcher_dispatch_m372 (EventDispatcher_t87 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object)
extern "C" void EventDispatcher_dispatch_m373 (EventDispatcher_t87 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object,System.String)
extern "C" void EventDispatcher_dispatch_m374 (EventDispatcher_t87 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::clearEvents()
extern "C" void EventDispatcher_clearEvents_m375 (EventDispatcher_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern "C" List_1_t483 * EventDispatcher_cloenArray_m376 (EventDispatcher_t87 * __this, List_1_t483 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern "C" List_1_t484 * EventDispatcher_cloenArray_m377 (EventDispatcher_t87 * __this, List_1_t484 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventDispatcher::OnDestroy()
extern "C" void EventDispatcher_OnDestroy_m378 (EventDispatcher_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
