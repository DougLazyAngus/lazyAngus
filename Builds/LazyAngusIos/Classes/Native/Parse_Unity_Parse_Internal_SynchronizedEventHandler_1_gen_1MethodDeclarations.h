#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5982;
// System.Delegate
struct Delegate_t725;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30893_gshared (SynchronizedEventHandler_1_t5982 * __this, Delegate_t725 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30893(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5982 *, Delegate_t725 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30893_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30894_gshared (SynchronizedEventHandler_1_t5982 * __this, Delegate_t725 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30894(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5982 *, Delegate_t725 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30894_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1211 * SynchronizedEventHandler_1_Invoke_m30895_gshared (SynchronizedEventHandler_1_t5982 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30895(__this, ___sender, ___args, method) (( Task_t1211 * (*) (SynchronizedEventHandler_1_t5982 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30895_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30896_gshared (SynchronizedEventHandler_1_t5982 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30896(__this, method) (( void (*) (SynchronizedEventHandler_1_t5982 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30896_gshared)(__this, method)
