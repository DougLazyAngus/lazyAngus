#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1571;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8308;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m59722_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1__ctor_m59722(__this, method) (( void (*) (Task_1_t1571 *, const MethodInfo*))Task_1__ctor_m59722_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m59723_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59723(__this, method) (( uint32_t (*) (Task_1_t1571 *, const MethodInfo*))Task_1_get_Result_m59723_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m59724_gshared (Task_1_t1571 * __this, Action_1_t8308 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59724(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1571 *, Action_1_t8308 *, const MethodInfo*))Task_1_ContinueWith_m59724_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59725_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59725(__this, method) (( void (*) (Task_1_t1571 *, const MethodInfo*))Task_1_RunContinuations_m59725_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59726_gshared (Task_1_t1571 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59726(__this, ___result, method) (( bool (*) (Task_1_t1571 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m59726_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59727_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59727(__this, method) (( bool (*) (Task_1_t1571 *, const MethodInfo*))Task_1_TrySetCanceled_m59727_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59728_gshared (Task_1_t1571 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59728(__this, ___exception, method) (( bool (*) (Task_1_t1571 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m59728_gshared)(__this, ___exception, method)
