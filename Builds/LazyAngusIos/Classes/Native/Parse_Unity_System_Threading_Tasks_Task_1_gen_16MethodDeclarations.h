#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1418;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5954;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m30588_gshared (Task_1_t1418 * __this, const MethodInfo* method);
#define Task_1__ctor_m30588(__this, method) (( void (*) (Task_1_t1418 *, const MethodInfo*))Task_1__ctor_m30588_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m30589_gshared (Task_1_t1418 * __this, const MethodInfo* method);
#define Task_1_get_Result_m30589(__this, method) (( uint8_t (*) (Task_1_t1418 *, const MethodInfo*))Task_1_get_Result_m30589_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m30591_gshared (Task_1_t1418 * __this, Action_1_t5954 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30591(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1418 *, Action_1_t5954 *, const MethodInfo*))Task_1_ContinueWith_m30591_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30593_gshared (Task_1_t1418 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30593(__this, method) (( void (*) (Task_1_t1418 *, const MethodInfo*))Task_1_RunContinuations_m30593_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30595_gshared (Task_1_t1418 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30595(__this, ___result, method) (( bool (*) (Task_1_t1418 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m30595_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30597_gshared (Task_1_t1418 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30597(__this, method) (( bool (*) (Task_1_t1418 *, const MethodInfo*))Task_1_TrySetCanceled_m30597_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30599_gshared (Task_1_t1418 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30599(__this, ___exception, method) (( bool (*) (Task_1_t1418 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30599_gshared)(__this, ___exception, method)
