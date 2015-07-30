#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5900;
// System.Delegate
struct Delegate_t674;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30065_gshared (SynchronizedEventHandler_1_t5900 * __this, Delegate_t674 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30065(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5900 *, Delegate_t674 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30065_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30066_gshared (SynchronizedEventHandler_1_t5900 * __this, Delegate_t674 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30066(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5900 *, Delegate_t674 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30066_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1155 * SynchronizedEventHandler_1_Invoke_m30067_gshared (SynchronizedEventHandler_1_t5900 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30067(__this, ___sender, ___args, method) (( Task_t1155 * (*) (SynchronizedEventHandler_1_t5900 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30067_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30068_gshared (SynchronizedEventHandler_1_t5900 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30068(__this, method) (( void (*) (SynchronizedEventHandler_1_t5900 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30068_gshared)(__this, method)
