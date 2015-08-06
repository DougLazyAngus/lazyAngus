#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1507;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8236;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m58766_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1__ctor_m58766(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1__ctor_m58766_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m58767_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58767(__this, method) (( double (*) (Task_1_t1507 *, const MethodInfo*))Task_1_get_Result_m58767_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m58768_gshared (Task_1_t1507 * __this, Action_1_t8236 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58768(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1507 *, Action_1_t8236 *, const MethodInfo*))Task_1_ContinueWith_m58768_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58769_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58769(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1_RunContinuations_m58769_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58770_gshared (Task_1_t1507 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58770(__this, ___result, method) (( bool (*) (Task_1_t1507 *, double, const MethodInfo*))Task_1_TrySetResult_m58770_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58771_gshared (Task_1_t1507 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58771(__this, method) (( bool (*) (Task_1_t1507 *, const MethodInfo*))Task_1_TrySetCanceled_m58771_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58772_gshared (Task_1_t1507 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58772(__this, ___exception, method) (( bool (*) (Task_1_t1507 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58772_gshared)(__this, ___exception, method)
