#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1568;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8272;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m59548_gshared (Task_1_t1568 * __this, const MethodInfo* method);
#define Task_1__ctor_m59548(__this, method) (( void (*) (Task_1_t1568 *, const MethodInfo*))Task_1__ctor_m59548_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m59549_gshared (Task_1_t1568 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59549(__this, method) (( int8_t (*) (Task_1_t1568 *, const MethodInfo*))Task_1_get_Result_m59549_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m59550_gshared (Task_1_t1568 * __this, Action_1_t8272 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59550(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1568 *, Action_1_t8272 *, const MethodInfo*))Task_1_ContinueWith_m59550_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59551_gshared (Task_1_t1568 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59551(__this, method) (( void (*) (Task_1_t1568 *, const MethodInfo*))Task_1_RunContinuations_m59551_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59552_gshared (Task_1_t1568 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59552(__this, ___result, method) (( bool (*) (Task_1_t1568 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m59552_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59553_gshared (Task_1_t1568 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59553(__this, method) (( bool (*) (Task_1_t1568 *, const MethodInfo*))Task_1_TrySetCanceled_m59553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59554_gshared (Task_1_t1568 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59554(__this, ___exception, method) (( bool (*) (Task_1_t1568 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m59554_gshared)(__this, ___exception, method)
