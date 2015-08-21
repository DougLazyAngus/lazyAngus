#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1553;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8288;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m59416_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1__ctor_m59416(__this, method) (( void (*) (Task_1_t1553 *, const MethodInfo*))Task_1__ctor_m59416_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m59417_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59417(__this, method) (( int64_t (*) (Task_1_t1553 *, const MethodInfo*))Task_1_get_Result_m59417_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59418_gshared (Task_1_t1553 * __this, Action_1_t8288 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59418(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1553 *, Action_1_t8288 *, const MethodInfo*))Task_1_ContinueWith_m59418_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59419_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59419(__this, method) (( void (*) (Task_1_t1553 *, const MethodInfo*))Task_1_RunContinuations_m59419_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59420_gshared (Task_1_t1553 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59420(__this, ___result, method) (( bool (*) (Task_1_t1553 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m59420_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59421_gshared (Task_1_t1553 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59421(__this, method) (( bool (*) (Task_1_t1553 *, const MethodInfo*))Task_1_TrySetCanceled_m59421_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59422_gshared (Task_1_t1553 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59422(__this, ___exception, method) (( bool (*) (Task_1_t1553 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59422_gshared)(__this, ___exception, method)
