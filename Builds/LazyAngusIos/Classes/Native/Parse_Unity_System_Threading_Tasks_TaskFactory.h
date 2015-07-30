#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1312;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t1313  : public Object_t
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::scheduler
	TaskScheduler_t1312 * ___scheduler_0;
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::cancellationToken
	CancellationToken_t1108  ___cancellationToken_1;
};
