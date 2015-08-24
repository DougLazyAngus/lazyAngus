#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1554;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8267;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m59332_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1__ctor_m59332(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1__ctor_m59332_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m59333_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59333(__this, method) (( uint16_t (*) (Task_1_t1554 *, const MethodInfo*))Task_1_get_Result_m59333_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59334_gshared (Task_1_t1554 * __this, Action_1_t8267 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59334(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1554 *, Action_1_t8267 *, const MethodInfo*))Task_1_ContinueWith_m59334_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59335_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59335(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1_RunContinuations_m59335_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59336_gshared (Task_1_t1554 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59336(__this, ___result, method) (( bool (*) (Task_1_t1554 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m59336_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59337_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59337(__this, method) (( bool (*) (Task_1_t1554 *, const MethodInfo*))Task_1_TrySetCanceled_m59337_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59338_gshared (Task_1_t1554 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59338(__this, ___exception, method) (( bool (*) (Task_1_t1554 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59338_gshared)(__this, ___exception, method)
