#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t6550;
// System.Delegate
struct Delegate_t742;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m35473_gshared (SynchronizedEventHandler_1_t6550 * __this, Delegate_t742 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m35473(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6550 *, Delegate_t742 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m35473_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m35474_gshared (SynchronizedEventHandler_1_t6550 * __this, Delegate_t742 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m35474(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6550 *, Delegate_t742 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m35474_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1231 * SynchronizedEventHandler_1_Invoke_m35475_gshared (SynchronizedEventHandler_1_t6550 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m35475(__this, ___sender, ___args, method) (( Task_t1231 * (*) (SynchronizedEventHandler_1_t6550 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m35475_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m35476_gshared (SynchronizedEventHandler_1_t6550 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m35476(__this, method) (( void (*) (SynchronizedEventHandler_1_t6550 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m35476_gshared)(__this, method)
