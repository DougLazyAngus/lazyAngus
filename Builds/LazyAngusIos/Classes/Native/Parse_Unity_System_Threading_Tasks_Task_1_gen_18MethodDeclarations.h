#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1573;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8825;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m63893_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1__ctor_m63893(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1__ctor_m63893_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m63894_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63894(__this, method) (( int16_t (*) (Task_1_t1573 *, const MethodInfo*))Task_1_get_Result_m63894_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m63895_gshared (Task_1_t1573 * __this, Action_1_t8825 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63895(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1573 *, Action_1_t8825 *, const MethodInfo*))Task_1_ContinueWith_m63895_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63896_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63896(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1_RunContinuations_m63896_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63897_gshared (Task_1_t1573 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63897(__this, ___result, method) (( bool (*) (Task_1_t1573 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m63897_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63898_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63898(__this, method) (( bool (*) (Task_1_t1573 *, const MethodInfo*))Task_1_TrySetCanceled_m63898_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63899_gshared (Task_1_t1573 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63899(__this, ___exception, method) (( bool (*) (Task_1_t1573 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m63899_gshared)(__this, ___exception, method)
