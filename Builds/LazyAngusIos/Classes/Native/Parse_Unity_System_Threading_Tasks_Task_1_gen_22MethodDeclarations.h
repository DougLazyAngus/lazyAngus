#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1506;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8225;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m58708_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1__ctor_m58708(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1__ctor_m58708_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m58709_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58709(__this, method) (( uint64_t (*) (Task_1_t1506 *, const MethodInfo*))Task_1_get_Result_m58709_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m58710_gshared (Task_1_t1506 * __this, Action_1_t8225 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58710(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1506 *, Action_1_t8225 *, const MethodInfo*))Task_1_ContinueWith_m58710_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58711_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58711(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1_RunContinuations_m58711_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58712_gshared (Task_1_t1506 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58712(__this, ___result, method) (( bool (*) (Task_1_t1506 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m58712_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58713_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58713(__this, method) (( bool (*) (Task_1_t1506 *, const MethodInfo*))Task_1_TrySetCanceled_m58713_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58714_gshared (Task_1_t1506 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58714(__this, ___exception, method) (( bool (*) (Task_1_t1506 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58714_gshared)(__this, ___exception, method)
