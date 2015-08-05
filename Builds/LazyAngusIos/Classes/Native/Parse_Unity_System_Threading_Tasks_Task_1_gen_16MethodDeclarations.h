#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1369;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5883;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m29912_gshared (Task_1_t1369 * __this, const MethodInfo* method);
#define Task_1__ctor_m29912(__this, method) (( void (*) (Task_1_t1369 *, const MethodInfo*))Task_1__ctor_m29912_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m29913_gshared (Task_1_t1369 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29913(__this, method) (( uint8_t (*) (Task_1_t1369 *, const MethodInfo*))Task_1_get_Result_m29913_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m29915_gshared (Task_1_t1369 * __this, Action_1_t5883 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29915(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1369 *, Action_1_t5883 *, const MethodInfo*))Task_1_ContinueWith_m29915_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29917_gshared (Task_1_t1369 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29917(__this, method) (( void (*) (Task_1_t1369 *, const MethodInfo*))Task_1_RunContinuations_m29917_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29919_gshared (Task_1_t1369 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29919(__this, ___result, method) (( bool (*) (Task_1_t1369 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m29919_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29921_gshared (Task_1_t1369 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29921(__this, method) (( bool (*) (Task_1_t1369 *, const MethodInfo*))Task_1_TrySetCanceled_m29921_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29923_gshared (Task_1_t1369 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29923(__this, ___exception, method) (( bool (*) (Task_1_t1369 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29923_gshared)(__this, ___exception, method)
