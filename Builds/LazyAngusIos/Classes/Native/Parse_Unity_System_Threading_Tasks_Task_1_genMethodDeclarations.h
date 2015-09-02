#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1386;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5992;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m31043(__this, method) (( void (*) (Task_1_t1386 *, const MethodInfo*))Task_1__ctor_m31044_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7488(__this, method) (( bool (*) (Task_1_t1386 *, const MethodInfo*))Task_1_get_Result_m31045_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m31046(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1386 *, Action_1_t5992 *, const MethodInfo*))Task_1_ContinueWith_m31047_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m31048(__this, method) (( void (*) (Task_1_t1386 *, const MethodInfo*))Task_1_RunContinuations_m31049_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m31050(__this, ___result, method) (( bool (*) (Task_1_t1386 *, bool, const MethodInfo*))Task_1_TrySetResult_m31051_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m31052(__this, method) (( bool (*) (Task_1_t1386 *, const MethodInfo*))Task_1_TrySetCanceled_m31053_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m31054(__this, ___exception, method) (( bool (*) (Task_1_t1386 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m31055_gshared)(__this, ___exception, method)
