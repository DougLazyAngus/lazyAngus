﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5892;
// System.Delegate
struct Delegate_t666;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m30018_gshared (SynchronizedEventHandler_1_t5892 * __this, Delegate_t666 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m30018(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5892 *, Delegate_t666 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m30018_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m30019_gshared (SynchronizedEventHandler_1_t5892 * __this, Delegate_t666 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m30019(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t5892 *, Delegate_t666 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m30019_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1148 * SynchronizedEventHandler_1_Invoke_m30020_gshared (SynchronizedEventHandler_1_t5892 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m30020(__this, ___sender, ___args, method) (( Task_t1148 * (*) (SynchronizedEventHandler_1_t5892 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m30020_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m30021_gshared (SynchronizedEventHandler_1_t5892 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m30021(__this, method) (( void (*) (SynchronizedEventHandler_1_t5892 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m30021_gshared)(__this, method)