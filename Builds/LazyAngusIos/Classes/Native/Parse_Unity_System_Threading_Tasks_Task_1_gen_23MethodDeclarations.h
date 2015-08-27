#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1558;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t9579;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m59564(__this, method) (( void (*) (Task_1_t1558 *, const MethodInfo*))Task_1__ctor_m59332_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m59565(__this, method) (( uint16_t (*) (Task_1_t1558 *, const MethodInfo*))Task_1_get_Result_m59333_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59566(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1558 *, Action_1_t9579 *, const MethodInfo*))Task_1_ContinueWith_m59334_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m59567(__this, method) (( void (*) (Task_1_t1558 *, const MethodInfo*))Task_1_RunContinuations_m59335_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m59568(__this, ___result, method) (( bool (*) (Task_1_t1558 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m59336_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59569(__this, method) (( bool (*) (Task_1_t1558 *, const MethodInfo*))Task_1_TrySetCanceled_m59337_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59570(__this, ___exception, method) (( bool (*) (Task_1_t1558 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59338_gshared)(__this, ___exception, method)
