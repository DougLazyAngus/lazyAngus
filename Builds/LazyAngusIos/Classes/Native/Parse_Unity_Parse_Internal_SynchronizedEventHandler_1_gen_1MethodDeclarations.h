#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5975;
// System.Delegate
struct Delegate_t724;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30769_gshared (SynchronizedEventHandler_1_t5975 * __this, Delegate_t724 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30769(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5975 *, Delegate_t724 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30769_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30770_gshared (SynchronizedEventHandler_1_t5975 * __this, Delegate_t724 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30770(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5975 *, Delegate_t724 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30770_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1210 * SynchronizedEventHandler_1_Invoke_m30771_gshared (SynchronizedEventHandler_1_t5975 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30771(__this, ___sender, ___args, method) (( Task_t1210 * (*) (SynchronizedEventHandler_1_t5975 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30771_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30772_gshared (SynchronizedEventHandler_1_t5975 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30772(__this, method) (( void (*) (SynchronizedEventHandler_1_t5975 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30772_gshared)(__this, method)
