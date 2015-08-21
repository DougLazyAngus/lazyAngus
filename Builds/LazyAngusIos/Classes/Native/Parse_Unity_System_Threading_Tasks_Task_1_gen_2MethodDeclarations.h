#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1391;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1425;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m30633_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1__ctor_m30633(__this, method) (( void (*) (Task_1_t1391 *, const MethodInfo*))Task_1__ctor_m30633_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m30634_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1_get_Result_m30634(__this, method) (( Object_t * (*) (Task_1_t1391 *, const MethodInfo*))Task_1_get_Result_m30634_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m30636_gshared (Task_1_t1391 * __this, Action_1_t1425 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30636(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1391 *, Action_1_t1425 *, const MethodInfo*))Task_1_ContinueWith_m30636_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30638_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30638(__this, method) (( void (*) (Task_1_t1391 *, const MethodInfo*))Task_1_RunContinuations_m30638_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30640_gshared (Task_1_t1391 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30640(__this, ___result, method) (( bool (*) (Task_1_t1391 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m30640_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30642_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30642(__this, method) (( bool (*) (Task_1_t1391 *, const MethodInfo*))Task_1_TrySetCanceled_m30642_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30644_gshared (Task_1_t1391 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30644(__this, ___exception, method) (( bool (*) (Task_1_t1391 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30644_gshared)(__this, ___exception, method)
