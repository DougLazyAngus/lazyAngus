#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t6011;
// System.Delegate
struct Delegate_t738;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m31225_gshared (SynchronizedEventHandler_1_t6011 * __this, Delegate_t738 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m31225(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6011 *, Delegate_t738 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m31225_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m31226_gshared (SynchronizedEventHandler_1_t6011 * __this, Delegate_t738 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m31226(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6011 *, Delegate_t738 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m31226_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1227 * SynchronizedEventHandler_1_Invoke_m31227_gshared (SynchronizedEventHandler_1_t6011 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m31227(__this, ___sender, ___args, method) (( Task_t1227 * (*) (SynchronizedEventHandler_1_t6011 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m31227_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m31228_gshared (SynchronizedEventHandler_1_t6011 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m31228(__this, method) (( void (*) (SynchronizedEventHandler_1_t6011 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m31228_gshared)(__this, method)
