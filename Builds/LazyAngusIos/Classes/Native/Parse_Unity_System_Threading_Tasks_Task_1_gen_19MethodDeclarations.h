#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1574;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8837;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m63951_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1__ctor_m63951(__this, method) (( void (*) (Task_1_t1574 *, const MethodInfo*))Task_1__ctor_m63951_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m63952_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63952(__this, method) (( uint16_t (*) (Task_1_t1574 *, const MethodInfo*))Task_1_get_Result_m63952_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m63953_gshared (Task_1_t1574 * __this, Action_1_t8837 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63953(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1574 *, Action_1_t8837 *, const MethodInfo*))Task_1_ContinueWith_m63953_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63954_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63954(__this, method) (( void (*) (Task_1_t1574 *, const MethodInfo*))Task_1_RunContinuations_m63954_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63955_gshared (Task_1_t1574 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63955(__this, ___result, method) (( bool (*) (Task_1_t1574 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m63955_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63956_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63956(__this, method) (( bool (*) (Task_1_t1574 *, const MethodInfo*))Task_1_TrySetCanceled_m63956_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63957_gshared (Task_1_t1574 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63957(__this, ___exception, method) (( bool (*) (Task_1_t1574 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m63957_gshared)(__this, ___exception, method)
