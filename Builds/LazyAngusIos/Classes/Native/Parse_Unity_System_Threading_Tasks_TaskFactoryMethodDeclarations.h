#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1367;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1366;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1417;
// System.Action`1<System.IAsyncResult>
struct Action_1_t1361;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1343;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t1364;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.TaskCreationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOptions.h"
// System.Threading.Tasks.TaskContinuationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskContinuationOptions.h"

// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory__ctor_m7288 (TaskFactory_t1367 * __this, TaskScheduler_t1366 * ___scheduler, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory__ctor_m7289 (TaskFactory_t1367 * __this, TaskScheduler_t1366 * ___scheduler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory__ctor_m7290 (TaskFactory_t1367 * __this, CancellationToken_t1165  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern "C" void TaskFactory__ctor_m7291 (TaskFactory_t1367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory__ctor_m7292 (TaskFactory_t1367 * __this, CancellationToken_t1165  ___cancellationToken, int32_t ___creationOptions, int32_t ___continuationOptions, TaskScheduler_t1366 * ___scheduler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C" TaskScheduler_t1366 * TaskFactory_get_Scheduler_m7293 (TaskFactory_t1367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,System.Object)
extern "C" Task_t1211 * TaskFactory_FromAsync_m7294 (TaskFactory_t1367 * __this, Func_3_t1417 * ___beginMethod, Action_1_t1361 * ___endMethod, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::ContinueWhenAll(System.Threading.Tasks.Task[],System.Action`1<System.Threading.Tasks.Task[]>)
extern "C" Task_t1211 * TaskFactory_ContinueWhenAll_m7295 (TaskFactory_t1367 * __this, TaskU5BU5D_t1343* ___tasks, Action_1_t1364 * ___continuationAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
