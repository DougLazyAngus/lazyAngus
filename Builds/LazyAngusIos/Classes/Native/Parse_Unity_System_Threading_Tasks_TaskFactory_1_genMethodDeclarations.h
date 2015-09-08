#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8946;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1383;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1411;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1434;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8935;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64712_gshared (TaskFactory_1_t8946 * __this, TaskScheduler_t1383 * ___scheduler, CancellationToken_t1182  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64712(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8946 *, TaskScheduler_t1383 *, CancellationToken_t1182 , const MethodInfo*))TaskFactory_1__ctor_m64712_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m64713_gshared (TaskFactory_1_t8946 * __this, TaskScheduler_t1383 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m64713(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8946 *, TaskScheduler_t1383 *, const MethodInfo*))TaskFactory_1__ctor_m64713_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64714_gshared (TaskFactory_1_t8946 * __this, CancellationToken_t1182  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64714(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8946 *, CancellationToken_t1182 , const MethodInfo*))TaskFactory_1__ctor_m64714_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m64715_gshared (TaskFactory_1_t8946 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m64715(__this, method) (( void (*) (TaskFactory_1_t8946 *, const MethodInfo*))TaskFactory_1__ctor_m64715_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1383 * TaskFactory_1_get_Scheduler_m64716_gshared (TaskFactory_1_t8946 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m64716(__this, method) (( TaskScheduler_t1383 * (*) (TaskFactory_1_t8946 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m64716_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1411 * TaskFactory_1_FromAsync_m64717_gshared (TaskFactory_1_t8946 * __this, Func_3_t1434 * ___beginMethod, Func_2_t8935 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m64717(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1411 * (*) (TaskFactory_1_t8946 *, Func_3_t1434 *, Func_2_t8935 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m64717_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
