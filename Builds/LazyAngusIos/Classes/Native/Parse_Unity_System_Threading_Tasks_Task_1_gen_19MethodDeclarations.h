#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1503;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8189;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m58534_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1__ctor_m58534(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1__ctor_m58534_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m58535_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58535(__this, method) (( uint16_t (*) (Task_1_t1503 *, const MethodInfo*))Task_1_get_Result_m58535_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m58536_gshared (Task_1_t1503 * __this, Action_1_t8189 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58536(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1503 *, Action_1_t8189 *, const MethodInfo*))Task_1_ContinueWith_m58536_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58537_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58537(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1_RunContinuations_m58537_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58538_gshared (Task_1_t1503 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58538(__this, ___result, method) (( bool (*) (Task_1_t1503 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58538_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58539_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58539(__this, method) (( bool (*) (Task_1_t1503 *, const MethodInfo*))Task_1_TrySetCanceled_m58539_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58540_gshared (Task_1_t1503 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58540(__this, ___exception, method) (( bool (*) (Task_1_t1503 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58540_gshared)(__this, ___exception, method)
