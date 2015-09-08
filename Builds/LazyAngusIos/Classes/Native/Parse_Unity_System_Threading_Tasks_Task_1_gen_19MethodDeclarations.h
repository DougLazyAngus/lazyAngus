#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1571;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8832;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m63939_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1__ctor_m63939(__this, method) (( void (*) (Task_1_t1571 *, const MethodInfo*))Task_1__ctor_m63939_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m63940_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63940(__this, method) (( uint16_t (*) (Task_1_t1571 *, const MethodInfo*))Task_1_get_Result_m63940_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m63941_gshared (Task_1_t1571 * __this, Action_1_t8832 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63941(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1571 *, Action_1_t8832 *, const MethodInfo*))Task_1_ContinueWith_m63941_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63942_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63942(__this, method) (( void (*) (Task_1_t1571 *, const MethodInfo*))Task_1_RunContinuations_m63942_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63943_gshared (Task_1_t1571 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63943(__this, ___result, method) (( bool (*) (Task_1_t1571 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m63943_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63944_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63944(__this, method) (( bool (*) (Task_1_t1571 *, const MethodInfo*))Task_1_TrySetCanceled_m63944_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63945_gshared (Task_1_t1571 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63945(__this, ___exception, method) (( bool (*) (Task_1_t1571 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m63945_gshared)(__this, ___exception, method)
