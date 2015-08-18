#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1393;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1427;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m30541_gshared (Task_1_t1393 * __this, const MethodInfo* method);
#define Task_1__ctor_m30541(__this, method) (( void (*) (Task_1_t1393 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m30542_gshared (Task_1_t1393 * __this, const MethodInfo* method);
#define Task_1_get_Result_m30542(__this, method) (( Object_t * (*) (Task_1_t1393 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m30544_gshared (Task_1_t1393 * __this, Action_1_t1427 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30544(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1393 *, Action_1_t1427 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30546_gshared (Task_1_t1393 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30546(__this, method) (( void (*) (Task_1_t1393 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30548_gshared (Task_1_t1393 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30548(__this, ___result, method) (( bool (*) (Task_1_t1393 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30550_gshared (Task_1_t1393 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30550(__this, method) (( bool (*) (Task_1_t1393 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30552_gshared (Task_1_t1393 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30552(__this, ___exception, method) (( bool (*) (Task_1_t1393 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
