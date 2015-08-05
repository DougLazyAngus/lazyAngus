#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8304;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1316;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1344;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1367;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8293;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59314_gshared (TaskFactory_1_t8304 * __this, TaskScheduler_t1316 * ___scheduler, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59314(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8304 *, TaskScheduler_t1316 *, CancellationToken_t1112 , const MethodInfo*))TaskFactory_1__ctor_m59314_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m59315_gshared (TaskFactory_1_t8304 * __this, TaskScheduler_t1316 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m59315(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8304 *, TaskScheduler_t1316 *, const MethodInfo*))TaskFactory_1__ctor_m59315_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59316_gshared (TaskFactory_1_t8304 * __this, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59316(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8304 *, CancellationToken_t1112 , const MethodInfo*))TaskFactory_1__ctor_m59316_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m59317_gshared (TaskFactory_1_t8304 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m59317(__this, method) (( void (*) (TaskFactory_1_t8304 *, const MethodInfo*))TaskFactory_1__ctor_m59317_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1316 * TaskFactory_1_get_Scheduler_m59318_gshared (TaskFactory_1_t8304 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m59318(__this, method) (( TaskScheduler_t1316 * (*) (TaskFactory_1_t8304 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m59318_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1344 * TaskFactory_1_FromAsync_m59319_gshared (TaskFactory_1_t8304 * __this, Func_3_t1367 * ___beginMethod, Func_2_t8293 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m59319(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1344 * (*) (TaskFactory_1_t8304 *, Func_3_t1367 *, Func_2_t8293 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m59319_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
