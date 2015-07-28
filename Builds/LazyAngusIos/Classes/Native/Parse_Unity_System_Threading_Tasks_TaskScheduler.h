#pragma once
#include <stdint.h>
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1309;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t1306  : public Object_t
{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::context
	SynchronizationContext_t1309 * ___context_1;
};
struct TaskScheduler_t1306_StaticFields{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::defaultContext
	SynchronizationContext_t1309 * ___defaultContext_0;
};
