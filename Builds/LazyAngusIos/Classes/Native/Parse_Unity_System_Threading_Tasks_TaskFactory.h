#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1365;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t1366  : public Object_t
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::scheduler
	TaskScheduler_t1365 * ___scheduler_0;
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::cancellationToken
	CancellationToken_t1164  ___cancellationToken_1;
};
