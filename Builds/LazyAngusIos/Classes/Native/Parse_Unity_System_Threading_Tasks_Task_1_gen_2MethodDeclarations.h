#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1421;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1455;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m35302_gshared (Task_1_t1421 * __this, const MethodInfo* method);
#define Task_1__ctor_m35302(__this, method) (( void (*) (Task_1_t1421 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m35303_gshared (Task_1_t1421 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35303(__this, method) (( Object_t * (*) (Task_1_t1421 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m35305_gshared (Task_1_t1421 * __this, Action_1_t1455 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35305(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1421 *, Action_1_t1455 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35307_gshared (Task_1_t1421 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35307(__this, method) (( void (*) (Task_1_t1421 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35309_gshared (Task_1_t1421 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35309(__this, ___result, method) (( bool (*) (Task_1_t1421 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35311_gshared (Task_1_t1421 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35311(__this, method) (( bool (*) (Task_1_t1421 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35313_gshared (Task_1_t1421 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35313(__this, ___exception, method) (( bool (*) (Task_1_t1421 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
