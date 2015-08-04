#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Task_1_t8221;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1504;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>>
struct Action_1_t8222;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58687(__this, method) (( void (*) (Task_1_t8221 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::get_Result()
#define Task_1_get_Result_m58688(__this, method) (( Task_1_t1504 * (*) (Task_1_t8221 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58689(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t8221 *, Action_1_t8222 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::RunContinuations()
#define Task_1_RunContinuations_m58690(__this, method) (( void (*) (Task_1_t8221 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetResult(T)
#define Task_1_TrySetResult_m58691(__this, ___result, method) (( bool (*) (Task_1_t8221 *, Task_1_t1504 *, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58692(__this, method) (( bool (*) (Task_1_t8221 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58693(__this, ___exception, method) (( bool (*) (Task_1_t8221 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
