#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1555;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t9576;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m59532(__this, method) (( void (*) (Task_1_t1555 *, const MethodInfo*))Task_1__ctor_m59300_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m59533(__this, method) (( uint16_t (*) (Task_1_t1555 *, const MethodInfo*))Task_1_get_Result_m59301_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59534(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1555 *, Action_1_t9576 *, const MethodInfo*))Task_1_ContinueWith_m59302_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m59535(__this, method) (( void (*) (Task_1_t1555 *, const MethodInfo*))Task_1_RunContinuations_m59303_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m59536(__this, ___result, method) (( bool (*) (Task_1_t1555 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m59304_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59537(__this, method) (( bool (*) (Task_1_t1555 *, const MethodInfo*))Task_1_TrySetCanceled_m59305_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59538(__this, ___exception, method) (( bool (*) (Task_1_t1555 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59306_gshared)(__this, ___exception, method)
