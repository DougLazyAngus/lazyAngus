#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1383;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1382;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1433;
// System.Action`1<System.IAsyncResult>
struct Action_1_t1377;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1359;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t1380;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.TaskCreationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOptions.h"
// System.Threading.Tasks.TaskContinuationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskContinuationOptions.h"

// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory__ctor_m7424 (TaskFactory_t1383 * __this, TaskScheduler_t1382 * ___scheduler, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory__ctor_m7425 (TaskFactory_t1383 * __this, TaskScheduler_t1382 * ___scheduler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory__ctor_m7426 (TaskFactory_t1383 * __this, CancellationToken_t1181  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern "C" void TaskFactory__ctor_m7427 (TaskFactory_t1383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory__ctor_m7428 (TaskFactory_t1383 * __this, CancellationToken_t1181  ___cancellationToken, int32_t ___creationOptions, int32_t ___continuationOptions, TaskScheduler_t1382 * ___scheduler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C" TaskScheduler_t1382 * TaskFactory_get_Scheduler_m7429 (TaskFactory_t1383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,System.Object)
extern "C" Task_t1227 * TaskFactory_FromAsync_m7430 (TaskFactory_t1383 * __this, Func_3_t1433 * ___beginMethod, Action_1_t1377 * ___endMethod, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::ContinueWhenAll(System.Threading.Tasks.Task[],System.Action`1<System.Threading.Tasks.Task[]>)
extern "C" Task_t1227 * TaskFactory_ContinueWhenAll_m7431 (TaskFactory_t1383 * __this, TaskU5BU5D_t1359* ___tasks, Action_1_t1380 * ___continuationAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
