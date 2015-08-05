#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1506;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8214;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m58658_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1__ctor_m58658(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1__ctor_m58658_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m58659_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58659(__this, method) (( int64_t (*) (Task_1_t1506 *, const MethodInfo*))Task_1_get_Result_m58659_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m58660_gshared (Task_1_t1506 * __this, Action_1_t8214 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58660(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1506 *, Action_1_t8214 *, const MethodInfo*))Task_1_ContinueWith_m58660_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58661_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58661(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1_RunContinuations_m58661_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58662_gshared (Task_1_t1506 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58662(__this, ___result, method) (( bool (*) (Task_1_t1506 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m58662_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58663_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58663(__this, method) (( bool (*) (Task_1_t1506 *, const MethodInfo*))Task_1_TrySetCanceled_m58663_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58664_gshared (Task_1_t1506 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58664(__this, ___exception, method) (( bool (*) (Task_1_t1506 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58664_gshared)(__this, ___exception, method)
