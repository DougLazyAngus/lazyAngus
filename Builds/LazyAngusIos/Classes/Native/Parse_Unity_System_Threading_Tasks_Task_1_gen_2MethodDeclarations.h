#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1414;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1448;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m35245_gshared (Task_1_t1414 * __this, const MethodInfo* method);
#define Task_1__ctor_m35245(__this, method) (( void (*) (Task_1_t1414 *, const MethodInfo*))Task_1__ctor_m35245_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m35246_gshared (Task_1_t1414 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35246(__this, method) (( Object_t * (*) (Task_1_t1414 *, const MethodInfo*))Task_1_get_Result_m35246_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m35248_gshared (Task_1_t1414 * __this, Action_1_t1448 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35248(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1414 *, Action_1_t1448 *, const MethodInfo*))Task_1_ContinueWith_m35248_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35250_gshared (Task_1_t1414 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35250(__this, method) (( void (*) (Task_1_t1414 *, const MethodInfo*))Task_1_RunContinuations_m35250_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35252_gshared (Task_1_t1414 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35252(__this, ___result, method) (( bool (*) (Task_1_t1414 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m35252_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35254_gshared (Task_1_t1414 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35254(__this, method) (( bool (*) (Task_1_t1414 *, const MethodInfo*))Task_1_TrySetCanceled_m35254_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35256_gshared (Task_1_t1414 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35256(__this, ___exception, method) (( bool (*) (Task_1_t1414 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35256_gshared)(__this, ___exception, method)
