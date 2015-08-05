#pragma once
#include <stdint.h>
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1319;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t1316  : public Object_t
{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::context
	SynchronizationContext_t1319 * ___context_1;
};
struct TaskScheduler_t1316_StaticFields{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::defaultContext
	SynchronizationContext_t1319 * ___defaultContext_0;
};
