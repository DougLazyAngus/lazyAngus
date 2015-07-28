#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.TaskQueue
struct TaskQueue_t1150;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Threading.Tasks.Task Parse.Internal.TaskQueue::GetTaskToAwait(System.Threading.CancellationToken)
extern "C" Task_t1149 * TaskQueue_GetTaskToAwait_m6276 (TaskQueue_t1150 * __this, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.TaskQueue::get_Mutex()
extern "C" Object_t * TaskQueue_get_Mutex_m6277 (TaskQueue_t1150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.TaskQueue::.ctor()
extern "C" void TaskQueue__ctor_m6278 (TaskQueue_t1150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.TaskQueue::<GetTaskToAwait>b__0(System.Threading.Tasks.Task)
extern "C" void TaskQueue_U3CGetTaskToAwaitU3Eb__0_m6279 (Object_t * __this /* static, unused */, Task_t1149 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
