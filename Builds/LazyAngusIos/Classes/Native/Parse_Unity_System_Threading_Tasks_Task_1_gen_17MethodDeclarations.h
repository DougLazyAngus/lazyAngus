#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1569;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8808;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m63823_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1__ctor_m63823(__this, method) (( void (*) (Task_1_t1569 *, const MethodInfo*))Task_1__ctor_m63823_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m63824_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63824(__this, method) (( int8_t (*) (Task_1_t1569 *, const MethodInfo*))Task_1_get_Result_m63824_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m63825_gshared (Task_1_t1569 * __this, Action_1_t8808 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63825(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1569 *, Action_1_t8808 *, const MethodInfo*))Task_1_ContinueWith_m63825_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63826_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63826(__this, method) (( void (*) (Task_1_t1569 *, const MethodInfo*))Task_1_RunContinuations_m63826_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63827_gshared (Task_1_t1569 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63827(__this, ___result, method) (( bool (*) (Task_1_t1569 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m63827_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63828_gshared (Task_1_t1569 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63828(__this, method) (( bool (*) (Task_1_t1569 *, const MethodInfo*))Task_1_TrySetCanceled_m63828_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63829_gshared (Task_1_t1569 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63829(__this, ___exception, method) (( bool (*) (Task_1_t1569 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m63829_gshared)(__this, ___exception, method)
