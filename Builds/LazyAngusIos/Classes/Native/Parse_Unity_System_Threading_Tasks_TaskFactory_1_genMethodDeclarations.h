#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8300;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1312;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1340;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1363;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8289;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59283_gshared (TaskFactory_1_t8300 * __this, TaskScheduler_t1312 * ___scheduler, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59283(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8300 *, TaskScheduler_t1312 *, CancellationToken_t1108 , const MethodInfo*))TaskFactory_1__ctor_m59283_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m59284_gshared (TaskFactory_1_t8300 * __this, TaskScheduler_t1312 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m59284(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8300 *, TaskScheduler_t1312 *, const MethodInfo*))TaskFactory_1__ctor_m59284_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59285_gshared (TaskFactory_1_t8300 * __this, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59285(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8300 *, CancellationToken_t1108 , const MethodInfo*))TaskFactory_1__ctor_m59285_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m59286_gshared (TaskFactory_1_t8300 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m59286(__this, method) (( void (*) (TaskFactory_1_t8300 *, const MethodInfo*))TaskFactory_1__ctor_m59286_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1312 * TaskFactory_1_get_Scheduler_m59287_gshared (TaskFactory_1_t8300 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m59287(__this, method) (( TaskScheduler_t1312 * (*) (TaskFactory_1_t8300 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m59287_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1340 * TaskFactory_1_FromAsync_m59288_gshared (TaskFactory_1_t8300 * __this, Func_3_t1363 * ___beginMethod, Func_2_t8289 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m59288(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1340 * (*) (TaskFactory_1_t8300 *, Func_3_t1363 *, Func_2_t8289 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m59288_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
