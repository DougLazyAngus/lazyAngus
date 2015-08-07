#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5902;
// System.Delegate
struct Delegate_t675;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30081_gshared (SynchronizedEventHandler_1_t5902 * __this, Delegate_t675 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30081(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5902 *, Delegate_t675 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30081_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30082_gshared (SynchronizedEventHandler_1_t5902 * __this, Delegate_t675 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30082(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5902 *, Delegate_t675 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30082_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1157 * SynchronizedEventHandler_1_Invoke_m30083_gshared (SynchronizedEventHandler_1_t5902 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30083(__this, ___sender, ___args, method) (( Task_t1157 * (*) (SynchronizedEventHandler_1_t5902 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30083_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30084_gshared (SynchronizedEventHandler_1_t5902 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30084(__this, method) (( void (*) (SynchronizedEventHandler_1_t5902 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30084_gshared)(__this, method)
