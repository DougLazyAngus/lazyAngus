#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1552;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8248;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m59150_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1__ctor_m59150(__this, method) (( void (*) (Task_1_t1552 *, const MethodInfo*))Task_1__ctor_m59150_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m59151_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59151(__this, method) (( int16_t (*) (Task_1_t1552 *, const MethodInfo*))Task_1_get_Result_m59151_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59152_gshared (Task_1_t1552 * __this, Action_1_t8248 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59152(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1552 *, Action_1_t8248 *, const MethodInfo*))Task_1_ContinueWith_m59152_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59153_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59153(__this, method) (( void (*) (Task_1_t1552 *, const MethodInfo*))Task_1_RunContinuations_m59153_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59154_gshared (Task_1_t1552 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59154(__this, ___result, method) (( bool (*) (Task_1_t1552 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m59154_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59155_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59155(__this, method) (( bool (*) (Task_1_t1552 *, const MethodInfo*))Task_1_TrySetCanceled_m59155_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59156_gshared (Task_1_t1552 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59156(__this, ___exception, method) (( bool (*) (Task_1_t1552 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59156_gshared)(__this, ___exception, method)
