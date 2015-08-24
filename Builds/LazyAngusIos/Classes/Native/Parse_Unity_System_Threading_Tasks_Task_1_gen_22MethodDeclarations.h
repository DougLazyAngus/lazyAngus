#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1557;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8303;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m59506_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1__ctor_m59506(__this, method) (( void (*) (Task_1_t1557 *, const MethodInfo*))Task_1__ctor_m59506_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m59507_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59507(__this, method) (( uint64_t (*) (Task_1_t1557 *, const MethodInfo*))Task_1_get_Result_m59507_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59508_gshared (Task_1_t1557 * __this, Action_1_t8303 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59508(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1557 *, Action_1_t8303 *, const MethodInfo*))Task_1_ContinueWith_m59508_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59509_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59509(__this, method) (( void (*) (Task_1_t1557 *, const MethodInfo*))Task_1_RunContinuations_m59509_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59510_gshared (Task_1_t1557 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59510(__this, ___result, method) (( bool (*) (Task_1_t1557 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m59510_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59511_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59511(__this, method) (( bool (*) (Task_1_t1557 *, const MethodInfo*))Task_1_TrySetCanceled_m59511_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59512_gshared (Task_1_t1557 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59512(__this, ___exception, method) (( bool (*) (Task_1_t1557 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59512_gshared)(__this, ___exception, method)
