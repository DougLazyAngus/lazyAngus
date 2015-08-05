#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8303;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1315;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1343;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1366;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8292;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59306_gshared (TaskFactory_1_t8303 * __this, TaskScheduler_t1315 * ___scheduler, CancellationToken_t1111  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59306(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8303 *, TaskScheduler_t1315 *, CancellationToken_t1111 , const MethodInfo*))TaskFactory_1__ctor_m59306_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m59307_gshared (TaskFactory_1_t8303 * __this, TaskScheduler_t1315 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m59307(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8303 *, TaskScheduler_t1315 *, const MethodInfo*))TaskFactory_1__ctor_m59307_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59308_gshared (TaskFactory_1_t8303 * __this, CancellationToken_t1111  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59308(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8303 *, CancellationToken_t1111 , const MethodInfo*))TaskFactory_1__ctor_m59308_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m59309_gshared (TaskFactory_1_t8303 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m59309(__this, method) (( void (*) (TaskFactory_1_t8303 *, const MethodInfo*))TaskFactory_1__ctor_m59309_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1315 * TaskFactory_1_get_Scheduler_m59310_gshared (TaskFactory_1_t8303 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m59310(__this, method) (( TaskScheduler_t1315 * (*) (TaskFactory_1_t8303 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m59310_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1343 * TaskFactory_1_FromAsync_m59311_gshared (TaskFactory_1_t8303 * __this, Func_3_t1366 * ___beginMethod, Func_2_t8292 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m59311(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1343 * (*) (TaskFactory_1_t8303 *, Func_3_t1366 *, Func_2_t8292 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m59311_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
