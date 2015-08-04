#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1506;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t9477;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m58759(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1__ctor_m58527_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m58760(__this, method) (( uint16_t (*) (Task_1_t1506 *, const MethodInfo*))Task_1_get_Result_m58528_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58761(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1506 *, Action_1_t9477 *, const MethodInfo*))Task_1_ContinueWith_m58529_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m58762(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1_RunContinuations_m58530_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m58763(__this, ___result, method) (( bool (*) (Task_1_t1506 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58531_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58764(__this, method) (( bool (*) (Task_1_t1506 *, const MethodInfo*))Task_1_TrySetCanceled_m58532_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58765(__this, ___exception, method) (( bool (*) (Task_1_t1506 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58533_gshared)(__this, ___exception, method)
