#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1500;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8186;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m58511_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1__ctor_m58511(__this, method) (( void (*) (Task_1_t1500 *, const MethodInfo*))Task_1__ctor_m58511_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m58512_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58512(__this, method) (( uint16_t (*) (Task_1_t1500 *, const MethodInfo*))Task_1_get_Result_m58512_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58513_gshared (Task_1_t1500 * __this, Action_1_t8186 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58513(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1500 *, Action_1_t8186 *, const MethodInfo*))Task_1_ContinueWith_m58513_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58514_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58514(__this, method) (( void (*) (Task_1_t1500 *, const MethodInfo*))Task_1_RunContinuations_m58514_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58515_gshared (Task_1_t1500 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58515(__this, ___result, method) (( bool (*) (Task_1_t1500 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58515_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58516_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58516(__this, method) (( bool (*) (Task_1_t1500 *, const MethodInfo*))Task_1_TrySetCanceled_m58516_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58517_gshared (Task_1_t1500 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58517(__this, ___exception, method) (( bool (*) (Task_1_t1500 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58517_gshared)(__this, ___exception, method)
