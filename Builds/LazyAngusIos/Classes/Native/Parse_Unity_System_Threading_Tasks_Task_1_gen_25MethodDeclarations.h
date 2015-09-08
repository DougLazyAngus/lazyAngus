#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1577;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8892;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m64236_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1__ctor_m64236(__this, method) (( void (*) (Task_1_t1577 *, const MethodInfo*))Task_1__ctor_m64236_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m64237_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64237(__this, method) (( float (*) (Task_1_t1577 *, const MethodInfo*))Task_1_get_Result_m64237_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m64238_gshared (Task_1_t1577 * __this, Action_1_t8892 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64238(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1577 *, Action_1_t8892 *, const MethodInfo*))Task_1_ContinueWith_m64238_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64239_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64239(__this, method) (( void (*) (Task_1_t1577 *, const MethodInfo*))Task_1_RunContinuations_m64239_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64240_gshared (Task_1_t1577 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64240(__this, ___result, method) (( bool (*) (Task_1_t1577 *, float, const MethodInfo*))Task_1_TrySetResult_m64240_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64241_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64241(__this, method) (( bool (*) (Task_1_t1577 *, const MethodInfo*))Task_1_TrySetCanceled_m64241_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64242_gshared (Task_1_t1577 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64242(__this, ___exception, method) (( bool (*) (Task_1_t1577 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m64242_gshared)(__this, ___exception, method)
