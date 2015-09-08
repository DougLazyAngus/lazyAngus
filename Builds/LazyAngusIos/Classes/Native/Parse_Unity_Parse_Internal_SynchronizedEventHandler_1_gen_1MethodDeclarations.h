#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t6545;
// System.Delegate
struct Delegate_t739;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m35461_gshared (SynchronizedEventHandler_1_t6545 * __this, Delegate_t739 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m35461(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6545 *, Delegate_t739 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m35461_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m35462_gshared (SynchronizedEventHandler_1_t6545 * __this, Delegate_t739 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m35462(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6545 *, Delegate_t739 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m35462_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1228 * SynchronizedEventHandler_1_Invoke_m35463_gshared (SynchronizedEventHandler_1_t6545 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m35463(__this, ___sender, ___args, method) (( Task_t1228 * (*) (SynchronizedEventHandler_1_t6545 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m35463_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m35464_gshared (SynchronizedEventHandler_1_t6545 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m35464(__this, method) (( void (*) (SynchronizedEventHandler_1_t6545 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m35464_gshared)(__this, method)
