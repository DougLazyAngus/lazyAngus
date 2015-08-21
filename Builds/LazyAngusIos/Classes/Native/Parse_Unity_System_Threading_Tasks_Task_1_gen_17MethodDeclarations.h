#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1549;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8240;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m59184_gshared (Task_1_t1549 * __this, const MethodInfo* method);
#define Task_1__ctor_m59184(__this, method) (( void (*) (Task_1_t1549 *, const MethodInfo*))Task_1__ctor_m59184_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m59185_gshared (Task_1_t1549 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59185(__this, method) (( int8_t (*) (Task_1_t1549 *, const MethodInfo*))Task_1_get_Result_m59185_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59186_gshared (Task_1_t1549 * __this, Action_1_t8240 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59186(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1549 *, Action_1_t8240 *, const MethodInfo*))Task_1_ContinueWith_m59186_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59187_gshared (Task_1_t1549 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59187(__this, method) (( void (*) (Task_1_t1549 *, const MethodInfo*))Task_1_RunContinuations_m59187_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59188_gshared (Task_1_t1549 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59188(__this, ___result, method) (( bool (*) (Task_1_t1549 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m59188_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59189_gshared (Task_1_t1549 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59189(__this, method) (( bool (*) (Task_1_t1549 *, const MethodInfo*))Task_1_TrySetCanceled_m59189_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59190_gshared (Task_1_t1549 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59190(__this, ___exception, method) (( bool (*) (Task_1_t1549 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59190_gshared)(__this, ___exception, method)
