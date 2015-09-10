#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8958;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1393;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1421;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1444;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8947;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64781_gshared (TaskFactory_1_t8958 * __this, TaskScheduler_t1393 * ___scheduler, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64781(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8958 *, TaskScheduler_t1393 *, CancellationToken_t1192 , const MethodInfo*))TaskFactory_1__ctor_m64781_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m64782_gshared (TaskFactory_1_t8958 * __this, TaskScheduler_t1393 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m64782(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8958 *, TaskScheduler_t1393 *, const MethodInfo*))TaskFactory_1__ctor_m64782_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64783_gshared (TaskFactory_1_t8958 * __this, CancellationToken_t1192  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64783(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8958 *, CancellationToken_t1192 , const MethodInfo*))TaskFactory_1__ctor_m64783_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m64784_gshared (TaskFactory_1_t8958 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m64784(__this, method) (( void (*) (TaskFactory_1_t8958 *, const MethodInfo*))TaskFactory_1__ctor_m64784_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1393 * TaskFactory_1_get_Scheduler_m64785_gshared (TaskFactory_1_t8958 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m64785(__this, method) (( TaskScheduler_t1393 * (*) (TaskFactory_1_t8958 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m64785_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1421 * TaskFactory_1_FromAsync_m64786_gshared (TaskFactory_1_t8958 * __this, Func_3_t1444 * ___beginMethod, Func_2_t8947 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m64786(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1421 * (*) (TaskFactory_1_t8958 *, Func_3_t1444 *, Func_2_t8947 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m64786_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
