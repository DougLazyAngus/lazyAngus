#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1439;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t6529;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m35292_gshared (Task_1_t1439 * __this, const MethodInfo* method);
#define Task_1__ctor_m35292(__this, method) (( void (*) (Task_1_t1439 *, const MethodInfo*))Task_1__ctor_m35292_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m35293_gshared (Task_1_t1439 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35293(__this, method) (( uint8_t (*) (Task_1_t1439 *, const MethodInfo*))Task_1_get_Result_m35293_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m35295_gshared (Task_1_t1439 * __this, Action_1_t6529 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35295(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1439 *, Action_1_t6529 *, const MethodInfo*))Task_1_ContinueWith_m35295_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35297_gshared (Task_1_t1439 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35297(__this, method) (( void (*) (Task_1_t1439 *, const MethodInfo*))Task_1_RunContinuations_m35297_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35299_gshared (Task_1_t1439 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35299(__this, ___result, method) (( bool (*) (Task_1_t1439 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m35299_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35301_gshared (Task_1_t1439 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35301(__this, method) (( bool (*) (Task_1_t1439 *, const MethodInfo*))Task_1_TrySetCanceled_m35301_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35303_gshared (Task_1_t1439 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35303(__this, ___exception, method) (( bool (*) (Task_1_t1439 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35303_gshared)(__this, ___exception, method)
