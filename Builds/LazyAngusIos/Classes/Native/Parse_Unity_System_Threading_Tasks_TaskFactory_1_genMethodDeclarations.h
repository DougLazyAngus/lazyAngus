#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8378;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1363;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1391;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1414;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8367;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m60071_gshared (TaskFactory_1_t8378 * __this, TaskScheduler_t1363 * ___scheduler, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m60071(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8378 *, TaskScheduler_t1363 *, CancellationToken_t1162 , const MethodInfo*))TaskFactory_1__ctor_m60071_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m60072_gshared (TaskFactory_1_t8378 * __this, TaskScheduler_t1363 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m60072(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8378 *, TaskScheduler_t1363 *, const MethodInfo*))TaskFactory_1__ctor_m60072_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m60073_gshared (TaskFactory_1_t8378 * __this, CancellationToken_t1162  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m60073(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8378 *, CancellationToken_t1162 , const MethodInfo*))TaskFactory_1__ctor_m60073_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m60074_gshared (TaskFactory_1_t8378 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m60074(__this, method) (( void (*) (TaskFactory_1_t8378 *, const MethodInfo*))TaskFactory_1__ctor_m60074_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1363 * TaskFactory_1_get_Scheduler_m60075_gshared (TaskFactory_1_t8378 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m60075(__this, method) (( TaskScheduler_t1363 * (*) (TaskFactory_1_t8378 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m60075_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1391 * TaskFactory_1_FromAsync_m60076_gshared (TaskFactory_1_t8378 * __this, Func_3_t1414 * ___beginMethod, Func_2_t8367 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m60076(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1391 * (*) (TaskFactory_1_t8378 *, Func_3_t1414 *, Func_2_t8367 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m60076_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
