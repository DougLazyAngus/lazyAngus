#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1501;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8176;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m58469_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1__ctor_m58469(__this, method) (( void (*) (Task_1_t1501 *, const MethodInfo*))Task_1__ctor_m58469_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m58470_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58470(__this, method) (( int16_t (*) (Task_1_t1501 *, const MethodInfo*))Task_1_get_Result_m58470_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m58471_gshared (Task_1_t1501 * __this, Action_1_t8176 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58471(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1501 *, Action_1_t8176 *, const MethodInfo*))Task_1_ContinueWith_m58471_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58472_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58472(__this, method) (( void (*) (Task_1_t1501 *, const MethodInfo*))Task_1_RunContinuations_m58472_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58473_gshared (Task_1_t1501 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58473(__this, ___result, method) (( bool (*) (Task_1_t1501 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m58473_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58474_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58474(__this, method) (( bool (*) (Task_1_t1501 *, const MethodInfo*))Task_1_TrySetCanceled_m58474_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58475_gshared (Task_1_t1501 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58475(__this, ___exception, method) (( bool (*) (Task_1_t1501 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58475_gshared)(__this, ___exception, method)
