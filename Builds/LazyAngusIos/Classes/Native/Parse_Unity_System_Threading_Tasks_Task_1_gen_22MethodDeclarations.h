#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1507;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8226;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m58716_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1__ctor_m58716(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1__ctor_m58716_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m58717_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58717(__this, method) (( uint64_t (*) (Task_1_t1507 *, const MethodInfo*))Task_1_get_Result_m58717_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m58718_gshared (Task_1_t1507 * __this, Action_1_t8226 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58718(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1507 *, Action_1_t8226 *, const MethodInfo*))Task_1_ContinueWith_m58718_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58719_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58719(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1_RunContinuations_m58719_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58720_gshared (Task_1_t1507 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58720(__this, ___result, method) (( bool (*) (Task_1_t1507 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m58720_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58721_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58721(__this, method) (( bool (*) (Task_1_t1507 *, const MethodInfo*))Task_1_TrySetCanceled_m58721_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58722_gshared (Task_1_t1507 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58722(__this, ___exception, method) (( bool (*) (Task_1_t1507 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58722_gshared)(__this, ___exception, method)
