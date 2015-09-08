#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1386;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1389;
// System.Action
struct Action_t143;

// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern "C" void TaskScheduler__ctor_m7447 (TaskScheduler_t1386 * __this, SynchronizationContext_t1389 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern "C" void TaskScheduler_Post_m7448 (TaskScheduler_t1386 * __this, Action_t143 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
extern "C" TaskScheduler_t1386 * TaskScheduler_FromCurrentSynchronizationContext_m7449 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
extern "C" void TaskScheduler__cctor_m7450 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
