#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1569;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8819;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m63868_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1__ctor_m63868(__this, method) (( void (*) (Task_1_t1569 *, const MethodInfo*))Task_1__ctor_m63868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m63869_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63869(__this, method) (( int16_t (*) (Task_1_t1569 *, const MethodInfo*))Task_1_get_Result_m63869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m63870_gshared (Task_1_t1569 * __this, Action_1_t8819 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63870(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1569 *, Action_1_t8819 *, const MethodInfo*))Task_1_ContinueWith_m63870_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63871_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63871(__this, method) (( void (*) (Task_1_t1569 *, const MethodInfo*))Task_1_RunContinuations_m63871_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63872_gshared (Task_1_t1569 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63872(__this, ___result, method) (( bool (*) (Task_1_t1569 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m63872_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63873_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63873(__this, method) (( bool (*) (Task_1_t1569 *, const MethodInfo*))Task_1_TrySetCanceled_m63873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63874_gshared (Task_1_t1569 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63874(__this, ___exception, method) (( bool (*) (Task_1_t1569 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m63874_gshared)(__this, ___exception, method)
