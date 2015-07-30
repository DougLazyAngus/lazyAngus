#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1503;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8222;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m58685_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1__ctor_m58685(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1__ctor_m58685_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m58686_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58686(__this, method) (( uint64_t (*) (Task_1_t1503 *, const MethodInfo*))Task_1_get_Result_m58686_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58687_gshared (Task_1_t1503 * __this, Action_1_t8222 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58687(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1503 *, Action_1_t8222 *, const MethodInfo*))Task_1_ContinueWith_m58687_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58688_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58688(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1_RunContinuations_m58688_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58689_gshared (Task_1_t1503 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58689(__this, ___result, method) (( bool (*) (Task_1_t1503 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m58689_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58690_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58690(__this, method) (( bool (*) (Task_1_t1503 *, const MethodInfo*))Task_1_TrySetCanceled_m58690_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58691_gshared (Task_1_t1503 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58691(__this, ___exception, method) (( bool (*) (Task_1_t1503 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58691_gshared)(__this, ___exception, method)
