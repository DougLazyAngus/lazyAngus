#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1316;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1319;
// System.Action
struct Action_t143;

// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern "C" void TaskScheduler__ctor_m7030 (TaskScheduler_t1316 * __this, SynchronizationContext_t1319 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern "C" void TaskScheduler_Post_m7031 (TaskScheduler_t1316 * __this, Action_t143 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
extern "C" TaskScheduler_t1316 * TaskScheduler_FromCurrentSynchronizationContext_m7032 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
extern "C" void TaskScheduler__cctor_m7033 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
