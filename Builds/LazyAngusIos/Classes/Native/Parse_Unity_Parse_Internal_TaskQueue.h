﻿#pragma once
#include <stdint.h>
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1109;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.TaskQueue
struct  TaskQueue_t1149  : public Object_t
{
	// System.Threading.Tasks.Task Parse.Internal.TaskQueue::tail
	Task_t1148 * ___tail_0;
	// System.Object Parse.Internal.TaskQueue::mutex
	Object_t * ___mutex_1;
};
struct TaskQueue_t1149_StaticFields{
	// System.Action`1<System.Threading.Tasks.Task> Parse.Internal.TaskQueue::CS$<>9__CachedAnonymousMethodDelegate1
	Action_1_t1109 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2;
};