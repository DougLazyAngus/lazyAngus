#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignal/NotificationReceived
struct NotificationReceived_t387;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void OneSignal/NotificationReceived::.ctor(System.Object,System.IntPtr)
extern "C" void NotificationReceived__ctor_m2108 (NotificationReceived_t387 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/NotificationReceived::Invoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean)
extern "C" void NotificationReceived_Invoke_m2109 (NotificationReceived_t387 * __this, String_t* ___message, Dictionary_2_t312 * ___additionalData, bool ___isActive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OneSignal/NotificationReceived::BeginInvoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * NotificationReceived_BeginInvoke_m2110 (NotificationReceived_t387 * __this, String_t* ___message, Dictionary_2_t312 * ___additionalData, bool ___isActive, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/NotificationReceived::EndInvoke(System.IAsyncResult)
extern "C" void NotificationReceived_EndInvoke_m2111 (NotificationReceived_t387 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
