﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t8293;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1306;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1334;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1357;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t8282;
// System.Object
struct Object_t;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59236_gshared (TaskFactory_1_t8293 * __this, TaskScheduler_t1306 * ___scheduler, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59236(__this, ___scheduler, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8293 *, TaskScheduler_t1306 *, CancellationToken_t1102 , const MethodInfo*))TaskFactory_1__ctor_m59236_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m59237_gshared (TaskFactory_1_t8293 * __this, TaskScheduler_t1306 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m59237(__this, ___scheduler, method) (( void (*) (TaskFactory_1_t8293 *, TaskScheduler_t1306 *, const MethodInfo*))TaskFactory_1__ctor_m59237_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C" void TaskFactory_1__ctor_m59238_gshared (TaskFactory_1_t8293 * __this, CancellationToken_t1102  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m59238(__this, ___cancellationToken, method) (( void (*) (TaskFactory_1_t8293 *, CancellationToken_t1102 , const MethodInfo*))TaskFactory_1__ctor_m59238_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C" void TaskFactory_1__ctor_m59239_gshared (TaskFactory_1_t8293 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m59239(__this, method) (( void (*) (TaskFactory_1_t8293 *, const MethodInfo*))TaskFactory_1__ctor_m59239_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1306 * TaskFactory_1_get_Scheduler_m59240_gshared (TaskFactory_1_t8293 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m59240(__this, method) (( TaskScheduler_t1306 * (*) (TaskFactory_1_t8293 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m59240_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1334 * TaskFactory_1_FromAsync_m59241_gshared (TaskFactory_1_t8293 * __this, Func_3_t1357 * ___beginMethod, Func_2_t8282 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m59241(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1334 * (*) (TaskFactory_1_t8293 *, Func_3_t1357 *, Func_2_t8282 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m59241_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
