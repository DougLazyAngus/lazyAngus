#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5957;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m30619_gshared (Task_1_t1370 * __this, const MethodInfo* method);
#define Task_1__ctor_m30619(__this, method) (( void (*) (Task_1_t1370 *, const MethodInfo*))Task_1__ctor_m30619_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7285_gshared (Task_1_t1370 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7285(__this, method) (( int32_t (*) (Task_1_t1370 *, const MethodInfo*))Task_1_get_Result_m7285_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m30620_gshared (Task_1_t1370 * __this, Action_1_t5957 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30620(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1370 *, Action_1_t5957 *, const MethodInfo*))Task_1_ContinueWith_m30620_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30621_gshared (Task_1_t1370 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30621(__this, method) (( void (*) (Task_1_t1370 *, const MethodInfo*))Task_1_RunContinuations_m30621_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30622_gshared (Task_1_t1370 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30622(__this, ___result, method) (( bool (*) (Task_1_t1370 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m30622_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30623_gshared (Task_1_t1370 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30623(__this, method) (( bool (*) (Task_1_t1370 *, const MethodInfo*))Task_1_TrySetCanceled_m30623_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30624_gshared (Task_1_t1370 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30624(__this, ___exception, method) (( bool (*) (Task_1_t1370 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30624_gshared)(__this, ___exception, method)
