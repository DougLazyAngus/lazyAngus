#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1509;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8238;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m58778_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1__ctor_m58778(__this, method) (( void (*) (Task_1_t1509 *, const MethodInfo*))Task_1__ctor_m58778_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m58779_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58779(__this, method) (( double (*) (Task_1_t1509 *, const MethodInfo*))Task_1_get_Result_m58779_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m58780_gshared (Task_1_t1509 * __this, Action_1_t8238 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58780(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1509 *, Action_1_t8238 *, const MethodInfo*))Task_1_ContinueWith_m58780_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58781_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58781(__this, method) (( void (*) (Task_1_t1509 *, const MethodInfo*))Task_1_RunContinuations_m58781_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58782_gshared (Task_1_t1509 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58782(__this, ___result, method) (( bool (*) (Task_1_t1509 *, double, const MethodInfo*))Task_1_TrySetResult_m58782_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58783_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58783(__this, method) (( bool (*) (Task_1_t1509 *, const MethodInfo*))Task_1_TrySetCanceled_m58783_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58784_gshared (Task_1_t1509 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58784(__this, ___exception, method) (( bool (*) (Task_1_t1509 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58784_gshared)(__this, ___exception, method)
