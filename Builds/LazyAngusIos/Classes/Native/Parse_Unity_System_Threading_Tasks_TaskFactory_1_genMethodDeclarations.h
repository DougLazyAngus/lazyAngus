#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8374;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1365;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1393;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1416;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8363;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59983_gshared (TaskFactory_1_t8374 * __this, TaskScheduler_t1365 * ___scheduler, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59983(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8374 *, TaskScheduler_t1365 *, CancellationToken_t1164 , const MethodInfo*))TaskFactory_1__ctor_m59983_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m59984_gshared (TaskFactory_1_t8374 * __this, TaskScheduler_t1365 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m59984(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8374 *, TaskScheduler_t1365 *, const MethodInfo*))TaskFactory_1__ctor_m59984_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59985_gshared (TaskFactory_1_t8374 * __this, CancellationToken_t1164  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59985(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8374 *, CancellationToken_t1164 , const MethodInfo*))TaskFactory_1__ctor_m59985_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m59986_gshared (TaskFactory_1_t8374 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m59986(__this, method) (( void (*) (TaskFactory_1_t8374 *, const MethodInfo*))TaskFactory_1__ctor_m59986_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1365 * TaskFactory_1_get_Scheduler_m59987_gshared (TaskFactory_1_t8374 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m59987(__this, method) (( TaskScheduler_t1365 * (*) (TaskFactory_1_t8374 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m59987_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1393 * TaskFactory_1_FromAsync_m59988_gshared (TaskFactory_1_t8374 * __this, Func_3_t1416 * ___beginMethod, Func_2_t8363 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m59988(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1393 * (*) (TaskFactory_1_t8374 *, Func_3_t1416 *, Func_2_t8363 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m59988_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
