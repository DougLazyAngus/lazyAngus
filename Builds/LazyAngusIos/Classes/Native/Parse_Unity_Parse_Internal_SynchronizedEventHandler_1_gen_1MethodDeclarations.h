#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5979;
// System.Delegate
struct Delegate_t722;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30860_gshared (SynchronizedEventHandler_1_t5979 * __this, Delegate_t722 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30860(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5979 *, Delegate_t722 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30860_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30861_gshared (SynchronizedEventHandler_1_t5979 * __this, Delegate_t722 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30861(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5979 *, Delegate_t722 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30861_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1208 * SynchronizedEventHandler_1_Invoke_m30862_gshared (SynchronizedEventHandler_1_t5979 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30862(__this, ___sender, ___args, method) (( Task_t1208 * (*) (SynchronizedEventHandler_1_t5979 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30862_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30863_gshared (SynchronizedEventHandler_1_t5979 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30863(__this, method) (( void (*) (SynchronizedEventHandler_1_t5979 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30863_gshared)(__this, method)
