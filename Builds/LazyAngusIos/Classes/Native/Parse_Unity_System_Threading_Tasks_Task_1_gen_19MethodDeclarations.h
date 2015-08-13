#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1553;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8260;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m59211_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1__ctor_m59211(__this, method) (( void (*) (Task_1_t1553 *, const MethodInfo*))Task_1__ctor_m59211_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m59212_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59212(__this, method) (( uint16_t (*) (Task_1_t1553 *, const MethodInfo*))Task_1_get_Result_m59212_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59213_gshared (Task_1_t1553 * __this, Action_1_t8260 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59213(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1553 *, Action_1_t8260 *, const MethodInfo*))Task_1_ContinueWith_m59213_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59214_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59214(__this, method) (( void (*) (Task_1_t1553 *, const MethodInfo*))Task_1_RunContinuations_m59214_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59215_gshared (Task_1_t1553 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59215(__this, ___result, method) (( bool (*) (Task_1_t1553 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m59215_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59216_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59216(__this, method) (( bool (*) (Task_1_t1553 *, const MethodInfo*))Task_1_TrySetCanceled_m59216_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59217_gshared (Task_1_t1553 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59217(__this, ___exception, method) (( bool (*) (Task_1_t1553 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59217_gshared)(__this, ___exception, method)
