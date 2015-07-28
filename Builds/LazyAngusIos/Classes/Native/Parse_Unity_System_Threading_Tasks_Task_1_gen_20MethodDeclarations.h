#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1494;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8190;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m58522_gshared (Task_1_t1494 * __this, const MethodInfo* method);
#define Task_1__ctor_m58522(__this, method) (( void (*) (Task_1_t1494 *, const MethodInfo*))Task_1__ctor_m58522_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m58523_gshared (Task_1_t1494 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58523(__this, method) (( uint32_t (*) (Task_1_t1494 *, const MethodInfo*))Task_1_get_Result_m58523_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1148 * Task_1_ContinueWith_m58524_gshared (Task_1_t1494 * __this, Action_1_t8190 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58524(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t1494 *, Action_1_t8190 *, const MethodInfo*))Task_1_ContinueWith_m58524_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58525_gshared (Task_1_t1494 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58525(__this, method) (( void (*) (Task_1_t1494 *, const MethodInfo*))Task_1_RunContinuations_m58525_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58526_gshared (Task_1_t1494 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58526(__this, ___result, method) (( bool (*) (Task_1_t1494 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m58526_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58527_gshared (Task_1_t1494 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58527(__this, method) (( bool (*) (Task_1_t1494 *, const MethodInfo*))Task_1_TrySetCanceled_m58527_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58528_gshared (Task_1_t1494 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58528(__this, ___exception, method) (( bool (*) (Task_1_t1494 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m58528_gshared)(__this, ___exception, method)
