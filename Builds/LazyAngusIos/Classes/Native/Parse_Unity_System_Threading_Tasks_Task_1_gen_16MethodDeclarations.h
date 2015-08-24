#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1419;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5961;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m30712_gshared (Task_1_t1419 * __this, const MethodInfo* method);
#define Task_1__ctor_m30712(__this, method) (( void (*) (Task_1_t1419 *, const MethodInfo*))Task_1__ctor_m30712_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m30713_gshared (Task_1_t1419 * __this, const MethodInfo* method);
#define Task_1_get_Result_m30713(__this, method) (( uint8_t (*) (Task_1_t1419 *, const MethodInfo*))Task_1_get_Result_m30713_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m30715_gshared (Task_1_t1419 * __this, Action_1_t5961 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30715(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1419 *, Action_1_t5961 *, const MethodInfo*))Task_1_ContinueWith_m30715_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30717_gshared (Task_1_t1419 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30717(__this, method) (( void (*) (Task_1_t1419 *, const MethodInfo*))Task_1_RunContinuations_m30717_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30719_gshared (Task_1_t1419 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30719(__this, ___result, method) (( bool (*) (Task_1_t1419 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m30719_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30721_gshared (Task_1_t1419 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30721(__this, method) (( bool (*) (Task_1_t1419 *, const MethodInfo*))Task_1_TrySetCanceled_m30721_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30723_gshared (Task_1_t1419 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30723(__this, ___exception, method) (( bool (*) (Task_1_t1419 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30723_gshared)(__this, ___exception, method)
