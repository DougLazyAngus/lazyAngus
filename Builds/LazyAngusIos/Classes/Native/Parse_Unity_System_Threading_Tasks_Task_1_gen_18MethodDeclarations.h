#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1580;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8832;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m63950_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1__ctor_m63950(__this, method) (( void (*) (Task_1_t1580 *, const MethodInfo*))Task_1__ctor_m63950_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m63951_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63951(__this, method) (( int16_t (*) (Task_1_t1580 *, const MethodInfo*))Task_1_get_Result_m63951_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m63952_gshared (Task_1_t1580 * __this, Action_1_t8832 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63952(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1580 *, Action_1_t8832 *, const MethodInfo*))Task_1_ContinueWith_m63952_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63953_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63953(__this, method) (( void (*) (Task_1_t1580 *, const MethodInfo*))Task_1_RunContinuations_m63953_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63954_gshared (Task_1_t1580 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63954(__this, ___result, method) (( bool (*) (Task_1_t1580 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m63954_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63955_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63955(__this, method) (( bool (*) (Task_1_t1580 *, const MethodInfo*))Task_1_TrySetCanceled_m63955_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63956_gshared (Task_1_t1580 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63956(__this, ___exception, method) (( bool (*) (Task_1_t1580 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m63956_gshared)(__this, ___exception, method)
