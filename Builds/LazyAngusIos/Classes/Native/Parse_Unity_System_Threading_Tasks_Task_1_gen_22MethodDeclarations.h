#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1554;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8300;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m59473_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1__ctor_m59473(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1__ctor_m59473_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m59474_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59474(__this, method) (( uint64_t (*) (Task_1_t1554 *, const MethodInfo*))Task_1_get_Result_m59474_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59475_gshared (Task_1_t1554 * __this, Action_1_t8300 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59475(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1554 *, Action_1_t8300 *, const MethodInfo*))Task_1_ContinueWith_m59475_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59476_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59476(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1_RunContinuations_m59476_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59477_gshared (Task_1_t1554 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59477(__this, ___result, method) (( bool (*) (Task_1_t1554 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m59477_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59478_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59478(__this, method) (( bool (*) (Task_1_t1554 *, const MethodInfo*))Task_1_TrySetCanceled_m59478_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59479_gshared (Task_1_t1554 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59479(__this, ___exception, method) (( bool (*) (Task_1_t1554 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59479_gshared)(__this, ___exception, method)
