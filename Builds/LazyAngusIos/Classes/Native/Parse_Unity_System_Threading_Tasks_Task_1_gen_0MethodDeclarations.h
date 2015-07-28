#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1311;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5875;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m29865_gshared (Task_1_t1311 * __this, const MethodInfo* method);
#define Task_1__ctor_m29865(__this, method) (( void (*) (Task_1_t1311 *, const MethodInfo*))Task_1__ctor_m29865_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m6967_gshared (Task_1_t1311 * __this, const MethodInfo* method);
#define Task_1_get_Result_m6967(__this, method) (( int32_t (*) (Task_1_t1311 *, const MethodInfo*))Task_1_get_Result_m6967_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1149 * Task_1_ContinueWith_m29866_gshared (Task_1_t1311 * __this, Action_1_t5875 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29866(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1311 *, Action_1_t5875 *, const MethodInfo*))Task_1_ContinueWith_m29866_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29867_gshared (Task_1_t1311 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29867(__this, method) (( void (*) (Task_1_t1311 *, const MethodInfo*))Task_1_RunContinuations_m29867_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29868_gshared (Task_1_t1311 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29868(__this, ___result, method) (( bool (*) (Task_1_t1311 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m29868_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29869_gshared (Task_1_t1311 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29869(__this, method) (( bool (*) (Task_1_t1311 *, const MethodInfo*))Task_1_TrySetCanceled_m29869_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29870_gshared (Task_1_t1311 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29870(__this, ___exception, method) (( bool (*) (Task_1_t1311 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29870_gshared)(__this, ___exception, method)
