#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1501;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8198;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m58569_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1__ctor_m58569(__this, method) (( void (*) (Task_1_t1501 *, const MethodInfo*))Task_1__ctor_m58569_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m58570_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58570(__this, method) (( uint32_t (*) (Task_1_t1501 *, const MethodInfo*))Task_1_get_Result_m58570_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58571_gshared (Task_1_t1501 * __this, Action_1_t8198 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58571(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1501 *, Action_1_t8198 *, const MethodInfo*))Task_1_ContinueWith_m58571_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58572_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58572(__this, method) (( void (*) (Task_1_t1501 *, const MethodInfo*))Task_1_RunContinuations_m58572_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58573_gshared (Task_1_t1501 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58573(__this, ___result, method) (( bool (*) (Task_1_t1501 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m58573_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58574_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58574(__this, method) (( bool (*) (Task_1_t1501 *, const MethodInfo*))Task_1_TrySetCanceled_m58574_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58575_gshared (Task_1_t1501 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58575(__this, ___exception, method) (( bool (*) (Task_1_t1501 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58575_gshared)(__this, ___exception, method)
