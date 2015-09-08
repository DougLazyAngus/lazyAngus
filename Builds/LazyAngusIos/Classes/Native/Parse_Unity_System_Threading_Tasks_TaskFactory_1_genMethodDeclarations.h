#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8951;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1386;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1414;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1437;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8940;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64724_gshared (TaskFactory_1_t8951 * __this, TaskScheduler_t1386 * ___scheduler, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64724(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8951 *, TaskScheduler_t1386 *, CancellationToken_t1185 , const MethodInfo*))TaskFactory_1__ctor_m64724_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m64725_gshared (TaskFactory_1_t8951 * __this, TaskScheduler_t1386 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m64725(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8951 *, TaskScheduler_t1386 *, const MethodInfo*))TaskFactory_1__ctor_m64725_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m64726_gshared (TaskFactory_1_t8951 * __this, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m64726(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8951 *, CancellationToken_t1185 , const MethodInfo*))TaskFactory_1__ctor_m64726_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m64727_gshared (TaskFactory_1_t8951 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m64727(__this, method) (( void (*) (TaskFactory_1_t8951 *, const MethodInfo*))TaskFactory_1__ctor_m64727_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1386 * TaskFactory_1_get_Scheduler_m64728_gshared (TaskFactory_1_t8951 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m64728(__this, method) (( TaskScheduler_t1386 * (*) (TaskFactory_1_t8951 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m64728_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1414 * TaskFactory_1_FromAsync_m64729_gshared (TaskFactory_1_t8951 * __this, Func_3_t1437 * ___beginMethod, Func_2_t8940 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m64729(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1414 * (*) (TaskFactory_1_t8951 *, Func_3_t1437 *, Func_2_t8940 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m64729_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
