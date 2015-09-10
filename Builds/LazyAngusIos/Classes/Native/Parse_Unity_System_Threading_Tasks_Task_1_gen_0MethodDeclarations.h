#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1398;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6539;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m35377_gshared (Task_1_t1398 * __this, const MethodInfo* method);
#define Task_1__ctor_m35377(__this, method) (( void (*) (Task_1_t1398 *, const MethodInfo*))Task_1__ctor_m35377_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7513_gshared (Task_1_t1398 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7513(__this, method) (( int32_t (*) (Task_1_t1398 *, const MethodInfo*))Task_1_get_Result_m7513_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m35378_gshared (Task_1_t1398 * __this, Action_1_t6539 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35378(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1398 *, Action_1_t6539 *, const MethodInfo*))Task_1_ContinueWith_m35378_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35379_gshared (Task_1_t1398 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35379(__this, method) (( void (*) (Task_1_t1398 *, const MethodInfo*))Task_1_RunContinuations_m35379_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35380_gshared (Task_1_t1398 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35380(__this, ___result, method) (( bool (*) (Task_1_t1398 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m35380_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35381_gshared (Task_1_t1398 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35381(__this, method) (( bool (*) (Task_1_t1398 *, const MethodInfo*))Task_1_TrySetCanceled_m35381_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35382_gshared (Task_1_t1398 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35382(__this, ___exception, method) (( bool (*) (Task_1_t1398 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35382_gshared)(__this, ___exception, method)
