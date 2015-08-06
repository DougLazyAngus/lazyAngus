#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1319;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5884;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m29928_gshared (Task_1_t1319 * __this, const MethodInfo* method);
#define Task_1__ctor_m29928(__this, method) (( void (*) (Task_1_t1319 *, const MethodInfo*))Task_1__ctor_m29928_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7026_gshared (Task_1_t1319 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7026(__this, method) (( int32_t (*) (Task_1_t1319 *, const MethodInfo*))Task_1_get_Result_m7026_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m29929_gshared (Task_1_t1319 * __this, Action_1_t5884 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29929(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1319 *, Action_1_t5884 *, const MethodInfo*))Task_1_ContinueWith_m29929_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29930_gshared (Task_1_t1319 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29930(__this, method) (( void (*) (Task_1_t1319 *, const MethodInfo*))Task_1_RunContinuations_m29930_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29931_gshared (Task_1_t1319 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29931(__this, ___result, method) (( bool (*) (Task_1_t1319 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m29931_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29932_gshared (Task_1_t1319 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29932(__this, method) (( bool (*) (Task_1_t1319 *, const MethodInfo*))Task_1_TrySetCanceled_m29932_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29933_gshared (Task_1_t1319 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29933(__this, ___exception, method) (( bool (*) (Task_1_t1319 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29933_gshared)(__this, ___exception, method)
