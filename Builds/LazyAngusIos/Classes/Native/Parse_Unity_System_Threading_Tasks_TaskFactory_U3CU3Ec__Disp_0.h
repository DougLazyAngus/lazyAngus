#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1390;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1370;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t1391;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass20
struct  U3CU3Ec__DisplayClass20_t1392  : public Object_t
{
	// System.Int32 System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::remaining
	int32_t ___remaining_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]> System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::tcs
	TaskCompletionSource_1_t1390 * ___tcs_1;
	// System.Threading.Tasks.Task[] System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::tasks
	TaskU5BU5D_t1370* ___tasks_2;
	// System.Action`1<System.Threading.Tasks.Task[]> System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::continuationAction
	Action_1_t1391 * ___continuationAction_3;
};
