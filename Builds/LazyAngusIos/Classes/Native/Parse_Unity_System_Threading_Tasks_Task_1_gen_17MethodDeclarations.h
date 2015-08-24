#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1552;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8243;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m59216_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1__ctor_m59216(__this, method) (( void (*) (Task_1_t1552 *, const MethodInfo*))Task_1__ctor_m59216_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m59217_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59217(__this, method) (( int8_t (*) (Task_1_t1552 *, const MethodInfo*))Task_1_get_Result_m59217_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59218_gshared (Task_1_t1552 * __this, Action_1_t8243 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59218(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1552 *, Action_1_t8243 *, const MethodInfo*))Task_1_ContinueWith_m59218_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59219_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59219(__this, method) (( void (*) (Task_1_t1552 *, const MethodInfo*))Task_1_RunContinuations_m59219_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59220_gshared (Task_1_t1552 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59220(__this, ___result, method) (( bool (*) (Task_1_t1552 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m59220_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59221_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59221(__this, method) (( bool (*) (Task_1_t1552 *, const MethodInfo*))Task_1_TrySetCanceled_m59221_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59222_gshared (Task_1_t1552 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59222(__this, ___exception, method) (( bool (*) (Task_1_t1552 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59222_gshared)(__this, ___exception, method)
