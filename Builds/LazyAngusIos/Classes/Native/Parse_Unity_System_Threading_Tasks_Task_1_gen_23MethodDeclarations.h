#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1504;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t9475;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m58743(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1__ctor_m58511_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m58744(__this, method) (( uint16_t (*) (Task_1_t1504 *, const MethodInfo*))Task_1_get_Result_m58512_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58745(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1504 *, Action_1_t9475 *, const MethodInfo*))Task_1_ContinueWith_m58513_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m58746(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1_RunContinuations_m58514_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m58747(__this, ___result, method) (( bool (*) (Task_1_t1504 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58515_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58748(__this, method) (( bool (*) (Task_1_t1504 *, const MethodInfo*))Task_1_TrySetCanceled_m58516_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58749(__this, ___exception, method) (( bool (*) (Task_1_t1504 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58517_gshared)(__this, ___exception, method)
