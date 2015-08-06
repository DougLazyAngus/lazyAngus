#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1500;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8164;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m58411_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1__ctor_m58411(__this, method) (( void (*) (Task_1_t1500 *, const MethodInfo*))Task_1__ctor_m58411_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m58412_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58412(__this, method) (( int8_t (*) (Task_1_t1500 *, const MethodInfo*))Task_1_get_Result_m58412_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m58413_gshared (Task_1_t1500 * __this, Action_1_t8164 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58413(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1500 *, Action_1_t8164 *, const MethodInfo*))Task_1_ContinueWith_m58413_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58414_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58414(__this, method) (( void (*) (Task_1_t1500 *, const MethodInfo*))Task_1_RunContinuations_m58414_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58415_gshared (Task_1_t1500 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58415(__this, ___result, method) (( bool (*) (Task_1_t1500 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m58415_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58416_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58416(__this, method) (( bool (*) (Task_1_t1500 *, const MethodInfo*))Task_1_TrySetCanceled_m58416_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58417_gshared (Task_1_t1500 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58417(__this, ___exception, method) (( bool (*) (Task_1_t1500 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58417_gshared)(__this, ___exception, method)
