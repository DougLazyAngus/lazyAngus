#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1559;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8315;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m59571_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1__ctor_m59571(__this, method) (( void (*) (Task_1_t1559 *, const MethodInfo*))Task_1__ctor_m59571_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m59572_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59572(__this, method) (( double (*) (Task_1_t1559 *, const MethodInfo*))Task_1_get_Result_m59572_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59573_gshared (Task_1_t1559 * __this, Action_1_t8315 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59573(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1559 *, Action_1_t8315 *, const MethodInfo*))Task_1_ContinueWith_m59573_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59574_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59574(__this, method) (( void (*) (Task_1_t1559 *, const MethodInfo*))Task_1_RunContinuations_m59574_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59575_gshared (Task_1_t1559 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59575(__this, ___result, method) (( bool (*) (Task_1_t1559 *, double, const MethodInfo*))Task_1_TrySetResult_m59575_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59576_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59576(__this, method) (( bool (*) (Task_1_t1559 *, const MethodInfo*))Task_1_TrySetCanceled_m59576_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59577_gshared (Task_1_t1559 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59577(__this, ___exception, method) (( bool (*) (Task_1_t1559 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59577_gshared)(__this, ___exception, method)
