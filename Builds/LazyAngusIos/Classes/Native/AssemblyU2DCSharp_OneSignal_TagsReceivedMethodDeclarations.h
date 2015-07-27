#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignal/TagsReceived
struct TagsReceived_t349;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t272;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void OneSignal/TagsReceived::.ctor(System.Object,System.IntPtr)
extern "C" void TagsReceived__ctor_m1843 (TagsReceived_t349 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void TagsReceived_Invoke_m1844 (TagsReceived_t349 * __this, Dictionary_2_t272 * ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OneSignal/TagsReceived::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.AsyncCallback,System.Object)
extern "C" Object_t * TagsReceived_BeginInvoke_m1845 (TagsReceived_t349 * __this, Dictionary_2_t272 * ___tags, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/TagsReceived::EndInvoke(System.IAsyncResult)
extern "C" void TagsReceived_EndInvoke_m1846 (TagsReceived_t349 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
