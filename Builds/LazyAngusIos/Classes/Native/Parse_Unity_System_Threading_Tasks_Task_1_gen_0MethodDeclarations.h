#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1371;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5964;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m30740_gshared (Task_1_t1371 * __this, const MethodInfo* method);
#define Task_1__ctor_m30740(__this, method) (( void (*) (Task_1_t1371 *, const MethodInfo*))Task_1__ctor_m30740_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7306_gshared (Task_1_t1371 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7306(__this, method) (( int32_t (*) (Task_1_t1371 *, const MethodInfo*))Task_1_get_Result_m7306_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m30741_gshared (Task_1_t1371 * __this, Action_1_t5964 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30741(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1371 *, Action_1_t5964 *, const MethodInfo*))Task_1_ContinueWith_m30741_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30742_gshared (Task_1_t1371 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30742(__this, method) (( void (*) (Task_1_t1371 *, const MethodInfo*))Task_1_RunContinuations_m30742_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30743_gshared (Task_1_t1371 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30743(__this, ___result, method) (( bool (*) (Task_1_t1371 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m30743_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30744_gshared (Task_1_t1371 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30744(__this, method) (( bool (*) (Task_1_t1371 *, const MethodInfo*))Task_1_TrySetCanceled_m30744_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30745_gshared (Task_1_t1371 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30745(__this, ___exception, method) (( bool (*) (Task_1_t1371 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30745_gshared)(__this, ___exception, method)
