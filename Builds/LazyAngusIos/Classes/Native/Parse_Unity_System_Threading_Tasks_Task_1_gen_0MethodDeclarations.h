#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1317;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5882;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m29912_gshared (Task_1_t1317 * __this, const MethodInfo* method);
#define Task_1__ctor_m29912(__this, method) (( void (*) (Task_1_t1317 *, const MethodInfo*))Task_1__ctor_m29912_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7013_gshared (Task_1_t1317 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7013(__this, method) (( int32_t (*) (Task_1_t1317 *, const MethodInfo*))Task_1_get_Result_m7013_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m29913_gshared (Task_1_t1317 * __this, Action_1_t5882 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29913(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1317 *, Action_1_t5882 *, const MethodInfo*))Task_1_ContinueWith_m29913_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29914_gshared (Task_1_t1317 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29914(__this, method) (( void (*) (Task_1_t1317 *, const MethodInfo*))Task_1_RunContinuations_m29914_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29915_gshared (Task_1_t1317 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29915(__this, ___result, method) (( bool (*) (Task_1_t1317 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m29915_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29916_gshared (Task_1_t1317 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29916(__this, method) (( bool (*) (Task_1_t1317 *, const MethodInfo*))Task_1_TrySetCanceled_m29916_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29917_gshared (Task_1_t1317 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29917(__this, ___exception, method) (( bool (*) (Task_1_t1317 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29917_gshared)(__this, ___exception, method)
