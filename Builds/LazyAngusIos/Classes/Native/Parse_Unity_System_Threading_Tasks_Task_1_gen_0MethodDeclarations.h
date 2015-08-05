#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1321;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5886;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m29943_gshared (Task_1_t1321 * __this, const MethodInfo* method);
#define Task_1__ctor_m29943(__this, method) (( void (*) (Task_1_t1321 *, const MethodInfo*))Task_1__ctor_m29943_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7041_gshared (Task_1_t1321 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7041(__this, method) (( int32_t (*) (Task_1_t1321 *, const MethodInfo*))Task_1_get_Result_m7041_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m29944_gshared (Task_1_t1321 * __this, Action_1_t5886 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29944(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1321 *, Action_1_t5886 *, const MethodInfo*))Task_1_ContinueWith_m29944_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29945_gshared (Task_1_t1321 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29945(__this, method) (( void (*) (Task_1_t1321 *, const MethodInfo*))Task_1_RunContinuations_m29945_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29946_gshared (Task_1_t1321 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29946(__this, ___result, method) (( bool (*) (Task_1_t1321 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m29946_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29947_gshared (Task_1_t1321 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29947(__this, method) (( bool (*) (Task_1_t1321 *, const MethodInfo*))Task_1_TrySetCanceled_m29947_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29948_gshared (Task_1_t1321 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29948(__this, ___exception, method) (( bool (*) (Task_1_t1321 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29948_gshared)(__this, ___exception, method)
