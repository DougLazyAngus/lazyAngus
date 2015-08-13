#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1554;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8272;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m59269_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1__ctor_m59269(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1__ctor_m59269_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m59270_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59270(__this, method) (( uint32_t (*) (Task_1_t1554 *, const MethodInfo*))Task_1_get_Result_m59270_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59271_gshared (Task_1_t1554 * __this, Action_1_t8272 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59271(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1554 *, Action_1_t8272 *, const MethodInfo*))Task_1_ContinueWith_m59271_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59272_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59272(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1_RunContinuations_m59272_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59273_gshared (Task_1_t1554 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59273(__this, ___result, method) (( bool (*) (Task_1_t1554 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m59273_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59274_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59274(__this, method) (( bool (*) (Task_1_t1554 *, const MethodInfo*))Task_1_TrySetCanceled_m59274_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59275_gshared (Task_1_t1554 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59275(__this, ___exception, method) (( bool (*) (Task_1_t1554 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59275_gshared)(__this, ___exception, method)
