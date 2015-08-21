#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1550;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8252;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m59241_gshared (Task_1_t1550 * __this, const MethodInfo* method);
#define Task_1__ctor_m59241(__this, method) (( void (*) (Task_1_t1550 *, const MethodInfo*))Task_1__ctor_m59241_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m59242_gshared (Task_1_t1550 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59242(__this, method) (( int16_t (*) (Task_1_t1550 *, const MethodInfo*))Task_1_get_Result_m59242_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59243_gshared (Task_1_t1550 * __this, Action_1_t8252 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59243(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1550 *, Action_1_t8252 *, const MethodInfo*))Task_1_ContinueWith_m59243_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59244_gshared (Task_1_t1550 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59244(__this, method) (( void (*) (Task_1_t1550 *, const MethodInfo*))Task_1_RunContinuations_m59244_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59245_gshared (Task_1_t1550 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59245(__this, ___result, method) (( bool (*) (Task_1_t1550 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m59245_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59246_gshared (Task_1_t1550 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59246(__this, method) (( bool (*) (Task_1_t1550 *, const MethodInfo*))Task_1_TrySetCanceled_m59246_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59247_gshared (Task_1_t1550 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59247(__this, ___exception, method) (( bool (*) (Task_1_t1550 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59247_gshared)(__this, ___exception, method)
