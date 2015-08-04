#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8302;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1314;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1342;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1365;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8291;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59299_gshared (TaskFactory_1_t8302 * __this, TaskScheduler_t1314 * ___scheduler, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59299(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8302 *, TaskScheduler_t1314 *, CancellationToken_t1110 , const MethodInfo*))TaskFactory_1__ctor_m59299_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m59300_gshared (TaskFactory_1_t8302 * __this, TaskScheduler_t1314 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m59300(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8302 *, TaskScheduler_t1314 *, const MethodInfo*))TaskFactory_1__ctor_m59300_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59301_gshared (TaskFactory_1_t8302 * __this, CancellationToken_t1110  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59301(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8302 *, CancellationToken_t1110 , const MethodInfo*))TaskFactory_1__ctor_m59301_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m59302_gshared (TaskFactory_1_t8302 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m59302(__this, method) (( void (*) (TaskFactory_1_t8302 *, const MethodInfo*))TaskFactory_1__ctor_m59302_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1314 * TaskFactory_1_get_Scheduler_m59303_gshared (TaskFactory_1_t8302 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m59303(__this, method) (( TaskScheduler_t1314 * (*) (TaskFactory_1_t8302 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m59303_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1342 * TaskFactory_1_FromAsync_m59304_gshared (TaskFactory_1_t8302 * __this, Func_3_t1365 * ___beginMethod, Func_2_t8291 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m59304(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1342 * (*) (TaskFactory_1_t8302 *, Func_3_t1365 *, Func_2_t8291 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m59304_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
