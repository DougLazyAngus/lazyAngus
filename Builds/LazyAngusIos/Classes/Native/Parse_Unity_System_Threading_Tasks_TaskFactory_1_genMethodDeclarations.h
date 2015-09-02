#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8410;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1382;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1433;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8399;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m60436_gshared (TaskFactory_1_t8410 * __this, TaskScheduler_t1382 * ___scheduler, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m60436(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8410 *, TaskScheduler_t1382 *, CancellationToken_t1181 , const MethodInfo*))TaskFactory_1__ctor_m60436_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m60437_gshared (TaskFactory_1_t8410 * __this, TaskScheduler_t1382 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m60437(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8410 *, TaskScheduler_t1382 *, const MethodInfo*))TaskFactory_1__ctor_m60437_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m60438_gshared (TaskFactory_1_t8410 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m60438(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8410 *, CancellationToken_t1181 , const MethodInfo*))TaskFactory_1__ctor_m60438_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m60439_gshared (TaskFactory_1_t8410 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m60439(__this, method) (( void (*) (TaskFactory_1_t8410 *, const MethodInfo*))TaskFactory_1__ctor_m60439_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1382 * TaskFactory_1_get_Scheduler_m60440_gshared (TaskFactory_1_t8410 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m60440(__this, method) (( TaskScheduler_t1382 * (*) (TaskFactory_1_t8410 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m60440_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1410 * TaskFactory_1_FromAsync_m60441_gshared (TaskFactory_1_t8410 * __this, Func_3_t1433 * ___beginMethod, Func_2_t8399 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m60441(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1410 * (*) (TaskFactory_1_t8410 *, Func_3_t1433 *, Func_2_t8399 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m60441_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
