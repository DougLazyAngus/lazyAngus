#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1551;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8236;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m59095_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1__ctor_m59095(__this, method) (( void (*) (Task_1_t1551 *, const MethodInfo*))Task_1__ctor_m59095_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m59096_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59096(__this, method) (( int8_t (*) (Task_1_t1551 *, const MethodInfo*))Task_1_get_Result_m59096_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59097_gshared (Task_1_t1551 * __this, Action_1_t8236 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59097(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1551 *, Action_1_t8236 *, const MethodInfo*))Task_1_ContinueWith_m59097_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59098_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59098(__this, method) (( void (*) (Task_1_t1551 *, const MethodInfo*))Task_1_RunContinuations_m59098_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59099_gshared (Task_1_t1551 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59099(__this, ___result, method) (( bool (*) (Task_1_t1551 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m59099_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59100_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59100(__this, method) (( bool (*) (Task_1_t1551 *, const MethodInfo*))Task_1_TrySetCanceled_m59100_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59101_gshared (Task_1_t1551 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59101(__this, ___exception, method) (( bool (*) (Task_1_t1551 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59101_gshared)(__this, ___exception, method)
