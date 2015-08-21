#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1551;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8264;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m59300_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1__ctor_m59300(__this, method) (( void (*) (Task_1_t1551 *, const MethodInfo*))Task_1__ctor_m59300_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m59301_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59301(__this, method) (( uint16_t (*) (Task_1_t1551 *, const MethodInfo*))Task_1_get_Result_m59301_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59302_gshared (Task_1_t1551 * __this, Action_1_t8264 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59302(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1551 *, Action_1_t8264 *, const MethodInfo*))Task_1_ContinueWith_m59302_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59303_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59303(__this, method) (( void (*) (Task_1_t1551 *, const MethodInfo*))Task_1_RunContinuations_m59303_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59304_gshared (Task_1_t1551 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59304(__this, ___result, method) (( bool (*) (Task_1_t1551 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m59304_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59305_gshared (Task_1_t1551 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59305(__this, method) (( bool (*) (Task_1_t1551 *, const MethodInfo*))Task_1_TrySetCanceled_m59305_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59306_gshared (Task_1_t1551 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59306(__this, ___exception, method) (( bool (*) (Task_1_t1551 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59306_gshared)(__this, ___exception, method)
