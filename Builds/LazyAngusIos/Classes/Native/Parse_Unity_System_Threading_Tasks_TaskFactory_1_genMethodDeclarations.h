#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8945;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1382;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1433;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8934;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64699_gshared (TaskFactory_1_t8945 * __this, TaskScheduler_t1382 * ___scheduler, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64699(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8945 *, TaskScheduler_t1382 *, CancellationToken_t1181 , const MethodInfo*))TaskFactory_1__ctor_m64699_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m64700_gshared (TaskFactory_1_t8945 * __this, TaskScheduler_t1382 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m64700(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8945 *, TaskScheduler_t1382 *, const MethodInfo*))TaskFactory_1__ctor_m64700_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64701_gshared (TaskFactory_1_t8945 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64701(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8945 *, CancellationToken_t1181 , const MethodInfo*))TaskFactory_1__ctor_m64701_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m64702_gshared (TaskFactory_1_t8945 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m64702(__this, method) (( void (*) (TaskFactory_1_t8945 *, const MethodInfo*))TaskFactory_1__ctor_m64702_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1382 * TaskFactory_1_get_Scheduler_m64703_gshared (TaskFactory_1_t8945 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m64703(__this, method) (( TaskScheduler_t1382 * (*) (TaskFactory_1_t8945 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m64703_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1410 * TaskFactory_1_FromAsync_m64704_gshared (TaskFactory_1_t8945 * __this, Func_3_t1433 * ___beginMethod, Func_2_t8934 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m64704(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1410 * (*) (TaskFactory_1_t8945 *, Func_3_t1433 *, Func_2_t8934 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m64704_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
