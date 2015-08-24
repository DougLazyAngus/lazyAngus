#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8381;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1366;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1394;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1417;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8370;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m60104_gshared (TaskFactory_1_t8381 * __this, TaskScheduler_t1366 * ___scheduler, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m60104(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8381 *, TaskScheduler_t1366 *, CancellationToken_t1165 , const MethodInfo*))TaskFactory_1__ctor_m60104_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m60105_gshared (TaskFactory_1_t8381 * __this, TaskScheduler_t1366 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m60105(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8381 *, TaskScheduler_t1366 *, const MethodInfo*))TaskFactory_1__ctor_m60105_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m60106_gshared (TaskFactory_1_t8381 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m60106(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8381 *, CancellationToken_t1165 , const MethodInfo*))TaskFactory_1__ctor_m60106_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m60107_gshared (TaskFactory_1_t8381 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m60107(__this, method) (( void (*) (TaskFactory_1_t8381 *, const MethodInfo*))TaskFactory_1__ctor_m60107_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1366 * TaskFactory_1_get_Scheduler_m60108_gshared (TaskFactory_1_t8381 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m60108(__this, method) (( TaskScheduler_t1366 * (*) (TaskFactory_1_t8381 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m60108_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1394 * TaskFactory_1_FromAsync_m60109_gshared (TaskFactory_1_t8381 * __this, Func_3_t1417 * ___beginMethod, Func_2_t8370 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m60109(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1394 * (*) (TaskFactory_1_t8381 *, Func_3_t1417 *, Func_2_t8370 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m60109_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
