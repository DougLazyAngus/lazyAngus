#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1576;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8891;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m64223_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1__ctor_m64223(__this, method) (( void (*) (Task_1_t1576 *, const MethodInfo*))Task_1__ctor_m64223_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m64224_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64224(__this, method) (( float (*) (Task_1_t1576 *, const MethodInfo*))Task_1_get_Result_m64224_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m64225_gshared (Task_1_t1576 * __this, Action_1_t8891 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64225(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1576 *, Action_1_t8891 *, const MethodInfo*))Task_1_ContinueWith_m64225_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64226_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64226(__this, method) (( void (*) (Task_1_t1576 *, const MethodInfo*))Task_1_RunContinuations_m64226_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64227_gshared (Task_1_t1576 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64227(__this, ___result, method) (( bool (*) (Task_1_t1576 *, float, const MethodInfo*))Task_1_TrySetResult_m64227_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64228_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64228(__this, method) (( bool (*) (Task_1_t1576 *, const MethodInfo*))Task_1_TrySetCanceled_m64228_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64229_gshared (Task_1_t1576 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64229(__this, ___exception, method) (( bool (*) (Task_1_t1576 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m64229_gshared)(__this, ___exception, method)
