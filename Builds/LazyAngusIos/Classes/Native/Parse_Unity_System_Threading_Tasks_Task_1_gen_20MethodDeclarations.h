#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1503;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8200;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m58585_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1__ctor_m58585(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1__ctor_m58585_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m58586_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58586(__this, method) (( uint32_t (*) (Task_1_t1503 *, const MethodInfo*))Task_1_get_Result_m58586_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m58587_gshared (Task_1_t1503 * __this, Action_1_t8200 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58587(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1503 *, Action_1_t8200 *, const MethodInfo*))Task_1_ContinueWith_m58587_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58588_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58588(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1_RunContinuations_m58588_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58589_gshared (Task_1_t1503 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58589(__this, ___result, method) (( bool (*) (Task_1_t1503 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m58589_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58590_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58590(__this, method) (( bool (*) (Task_1_t1503 *, const MethodInfo*))Task_1_TrySetCanceled_m58590_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58591_gshared (Task_1_t1503 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58591(__this, ___exception, method) (( bool (*) (Task_1_t1503 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58591_gshared)(__this, ___exception, method)
