#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1499;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8174;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m58453_gshared (Task_1_t1499 * __this, const MethodInfo* method);
#define Task_1__ctor_m58453(__this, method) (( void (*) (Task_1_t1499 *, const MethodInfo*))Task_1__ctor_m58453_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m58454_gshared (Task_1_t1499 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58454(__this, method) (( int16_t (*) (Task_1_t1499 *, const MethodInfo*))Task_1_get_Result_m58454_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58455_gshared (Task_1_t1499 * __this, Action_1_t8174 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58455(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1499 *, Action_1_t8174 *, const MethodInfo*))Task_1_ContinueWith_m58455_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58456_gshared (Task_1_t1499 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58456(__this, method) (( void (*) (Task_1_t1499 *, const MethodInfo*))Task_1_RunContinuations_m58456_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58457_gshared (Task_1_t1499 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58457(__this, ___result, method) (( bool (*) (Task_1_t1499 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m58457_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58458_gshared (Task_1_t1499 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58458(__this, method) (( bool (*) (Task_1_t1499 *, const MethodInfo*))Task_1_TrySetCanceled_m58458_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58459_gshared (Task_1_t1499 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58459(__this, ___exception, method) (( bool (*) (Task_1_t1499 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58459_gshared)(__this, ___exception, method)
