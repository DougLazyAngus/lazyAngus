#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5903;
// System.Delegate
struct Delegate_t675;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30088_gshared (SynchronizedEventHandler_1_t5903 * __this, Delegate_t675 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30088(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5903 *, Delegate_t675 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30088_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30089_gshared (SynchronizedEventHandler_1_t5903 * __this, Delegate_t675 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30089(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5903 *, Delegate_t675 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30089_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1158 * SynchronizedEventHandler_1_Invoke_m30090_gshared (SynchronizedEventHandler_1_t5903 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30090(__this, ___sender, ___args, method) (( Task_t1158 * (*) (SynchronizedEventHandler_1_t5903 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30090_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30091_gshared (SynchronizedEventHandler_1_t5903 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30091(__this, method) (( void (*) (SynchronizedEventHandler_1_t5903 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30091_gshared)(__this, method)
