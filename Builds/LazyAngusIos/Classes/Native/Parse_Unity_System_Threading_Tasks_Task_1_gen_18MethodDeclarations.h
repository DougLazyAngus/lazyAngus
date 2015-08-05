#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1503;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8178;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m58481_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1__ctor_m58481(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1__ctor_m58481_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m58482_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58482(__this, method) (( int16_t (*) (Task_1_t1503 *, const MethodInfo*))Task_1_get_Result_m58482_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m58483_gshared (Task_1_t1503 * __this, Action_1_t8178 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58483(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1503 *, Action_1_t8178 *, const MethodInfo*))Task_1_ContinueWith_m58483_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58484_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58484(__this, method) (( void (*) (Task_1_t1503 *, const MethodInfo*))Task_1_RunContinuations_m58484_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58485_gshared (Task_1_t1503 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58485(__this, ___result, method) (( bool (*) (Task_1_t1503 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m58485_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58486_gshared (Task_1_t1503 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58486(__this, method) (( bool (*) (Task_1_t1503 *, const MethodInfo*))Task_1_TrySetCanceled_m58486_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58487_gshared (Task_1_t1503 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58487(__this, ___exception, method) (( bool (*) (Task_1_t1503 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58487_gshared)(__this, ___exception, method)
