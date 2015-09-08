#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1576;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8880;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m64178_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1__ctor_m64178(__this, method) (( void (*) (Task_1_t1576 *, const MethodInfo*))Task_1__ctor_m64178_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m64179_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64179(__this, method) (( double (*) (Task_1_t1576 *, const MethodInfo*))Task_1_get_Result_m64179_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m64180_gshared (Task_1_t1576 * __this, Action_1_t8880 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64180(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1576 *, Action_1_t8880 *, const MethodInfo*))Task_1_ContinueWith_m64180_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64181_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64181(__this, method) (( void (*) (Task_1_t1576 *, const MethodInfo*))Task_1_RunContinuations_m64181_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64182_gshared (Task_1_t1576 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64182(__this, ___result, method) (( bool (*) (Task_1_t1576 *, double, const MethodInfo*))Task_1_TrySetResult_m64182_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64183_gshared (Task_1_t1576 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64183(__this, method) (( bool (*) (Task_1_t1576 *, const MethodInfo*))Task_1_TrySetCanceled_m64183_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64184_gshared (Task_1_t1576 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64184(__this, ___exception, method) (( bool (*) (Task_1_t1576 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m64184_gshared)(__this, ___exception, method)
