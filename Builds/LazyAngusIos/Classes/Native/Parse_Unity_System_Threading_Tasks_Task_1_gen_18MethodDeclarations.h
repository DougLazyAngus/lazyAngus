#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1553;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8255;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m59274_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1__ctor_m59274(__this, method) (( void (*) (Task_1_t1553 *, const MethodInfo*))Task_1__ctor_m59274_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m59275_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59275(__this, method) (( int16_t (*) (Task_1_t1553 *, const MethodInfo*))Task_1_get_Result_m59275_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59276_gshared (Task_1_t1553 * __this, Action_1_t8255 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59276(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1553 *, Action_1_t8255 *, const MethodInfo*))Task_1_ContinueWith_m59276_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59277_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59277(__this, method) (( void (*) (Task_1_t1553 *, const MethodInfo*))Task_1_RunContinuations_m59277_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59278_gshared (Task_1_t1553 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59278(__this, ___result, method) (( bool (*) (Task_1_t1553 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m59278_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59279_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59279(__this, method) (( bool (*) (Task_1_t1553 *, const MethodInfo*))Task_1_TrySetCanceled_m59279_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59280_gshared (Task_1_t1553 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59280(__this, ___exception, method) (( bool (*) (Task_1_t1553 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59280_gshared)(__this, ___exception, method)
