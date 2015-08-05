#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1504;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8190;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m58542_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1__ctor_m58542(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1__ctor_m58542_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m58543_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58543(__this, method) (( uint16_t (*) (Task_1_t1504 *, const MethodInfo*))Task_1_get_Result_m58543_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m58544_gshared (Task_1_t1504 * __this, Action_1_t8190 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58544(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1504 *, Action_1_t8190 *, const MethodInfo*))Task_1_ContinueWith_m58544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58545_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58545(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1_RunContinuations_m58545_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58546_gshared (Task_1_t1504 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58546(__this, ___result, method) (( bool (*) (Task_1_t1504 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58546_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58547_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58547(__this, method) (( bool (*) (Task_1_t1504 *, const MethodInfo*))Task_1_TrySetCanceled_m58547_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58548_gshared (Task_1_t1504 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58548(__this, ___exception, method) (( bool (*) (Task_1_t1504 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58548_gshared)(__this, ___exception, method)
