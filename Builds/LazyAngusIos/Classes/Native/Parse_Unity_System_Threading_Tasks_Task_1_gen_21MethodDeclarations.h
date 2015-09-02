#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1572;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8320;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m59780_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1__ctor_m59780(__this, method) (( void (*) (Task_1_t1572 *, const MethodInfo*))Task_1__ctor_m59780_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m59781_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59781(__this, method) (( int64_t (*) (Task_1_t1572 *, const MethodInfo*))Task_1_get_Result_m59781_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m59782_gshared (Task_1_t1572 * __this, Action_1_t8320 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59782(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1572 *, Action_1_t8320 *, const MethodInfo*))Task_1_ContinueWith_m59782_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59783_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59783(__this, method) (( void (*) (Task_1_t1572 *, const MethodInfo*))Task_1_RunContinuations_m59783_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59784_gshared (Task_1_t1572 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59784(__this, ___result, method) (( bool (*) (Task_1_t1572 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m59784_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59785_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59785(__this, method) (( bool (*) (Task_1_t1572 *, const MethodInfo*))Task_1_TrySetCanceled_m59785_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59786_gshared (Task_1_t1572 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59786(__this, ___exception, method) (( bool (*) (Task_1_t1572 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m59786_gshared)(__this, ___exception, method)
