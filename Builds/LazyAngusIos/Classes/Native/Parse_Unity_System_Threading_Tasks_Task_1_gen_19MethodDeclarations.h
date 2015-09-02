#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1570;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8296;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m59664_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1__ctor_m59664(__this, method) (( void (*) (Task_1_t1570 *, const MethodInfo*))Task_1__ctor_m59664_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m59665_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59665(__this, method) (( uint16_t (*) (Task_1_t1570 *, const MethodInfo*))Task_1_get_Result_m59665_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m59666_gshared (Task_1_t1570 * __this, Action_1_t8296 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59666(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1570 *, Action_1_t8296 *, const MethodInfo*))Task_1_ContinueWith_m59666_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59667_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59667(__this, method) (( void (*) (Task_1_t1570 *, const MethodInfo*))Task_1_RunContinuations_m59667_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59668_gshared (Task_1_t1570 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59668(__this, ___result, method) (( bool (*) (Task_1_t1570 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m59668_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59669_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59669(__this, method) (( bool (*) (Task_1_t1570 *, const MethodInfo*))Task_1_TrySetCanceled_m59669_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59670_gshared (Task_1_t1570 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59670(__this, ___exception, method) (( bool (*) (Task_1_t1570 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m59670_gshared)(__this, ___exception, method)
