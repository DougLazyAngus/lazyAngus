#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1444;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m35220_gshared (Task_1_t1410 * __this, const MethodInfo* method);
#define Task_1__ctor_m35220(__this, method) (( void (*) (Task_1_t1410 *, const MethodInfo*))Task_1__ctor_m35220_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m35221_gshared (Task_1_t1410 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35221(__this, method) (( Object_t * (*) (Task_1_t1410 *, const MethodInfo*))Task_1_get_Result_m35221_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m35223_gshared (Task_1_t1410 * __this, Action_1_t1444 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35223(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1410 *, Action_1_t1444 *, const MethodInfo*))Task_1_ContinueWith_m35223_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35225_gshared (Task_1_t1410 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35225(__this, method) (( void (*) (Task_1_t1410 *, const MethodInfo*))Task_1_RunContinuations_m35225_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35227_gshared (Task_1_t1410 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35227(__this, ___result, method) (( bool (*) (Task_1_t1410 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m35227_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35229_gshared (Task_1_t1410 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35229(__this, method) (( bool (*) (Task_1_t1410 *, const MethodInfo*))Task_1_TrySetCanceled_m35229_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35231_gshared (Task_1_t1410 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35231(__this, ___exception, method) (( bool (*) (Task_1_t1410 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m35231_gshared)(__this, ___exception, method)
