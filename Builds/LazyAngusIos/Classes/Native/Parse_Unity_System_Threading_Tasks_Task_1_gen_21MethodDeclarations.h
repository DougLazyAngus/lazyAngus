#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1505;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8213;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m58650_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1__ctor_m58650(__this, method) (( void (*) (Task_1_t1505 *, const MethodInfo*))Task_1__ctor_m58650_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m58651_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58651(__this, method) (( int64_t (*) (Task_1_t1505 *, const MethodInfo*))Task_1_get_Result_m58651_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m58652_gshared (Task_1_t1505 * __this, Action_1_t8213 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58652(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1505 *, Action_1_t8213 *, const MethodInfo*))Task_1_ContinueWith_m58652_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58653_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58653(__this, method) (( void (*) (Task_1_t1505 *, const MethodInfo*))Task_1_RunContinuations_m58653_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58654_gshared (Task_1_t1505 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58654(__this, ___result, method) (( bool (*) (Task_1_t1505 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m58654_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58655_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58655(__this, method) (( bool (*) (Task_1_t1505 *, const MethodInfo*))Task_1_TrySetCanceled_m58655_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58656_gshared (Task_1_t1505 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58656(__this, ___exception, method) (( bool (*) (Task_1_t1505 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58656_gshared)(__this, ___exception, method)
