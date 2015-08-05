#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5904;
// System.Delegate
struct Delegate_t677;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30096_gshared (SynchronizedEventHandler_1_t5904 * __this, Delegate_t677 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30096(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5904 *, Delegate_t677 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30096_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30097_gshared (SynchronizedEventHandler_1_t5904 * __this, Delegate_t677 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30097(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5904 *, Delegate_t677 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30097_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1159 * SynchronizedEventHandler_1_Invoke_m30098_gshared (SynchronizedEventHandler_1_t5904 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30098(__this, ___sender, ___args, method) (( Task_t1159 * (*) (SynchronizedEventHandler_1_t5904 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30098_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30099_gshared (SynchronizedEventHandler_1_t5904 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30099(__this, method) (( void (*) (SynchronizedEventHandler_1_t5904 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30099_gshared)(__this, method)
