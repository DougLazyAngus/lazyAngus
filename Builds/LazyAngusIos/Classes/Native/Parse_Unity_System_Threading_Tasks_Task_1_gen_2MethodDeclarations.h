#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1394;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1428;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m30665_gshared (Task_1_t1394 * __this, const MethodInfo* method);
#define Task_1__ctor_m30665(__this, method) (( void (*) (Task_1_t1394 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m30666_gshared (Task_1_t1394 * __this, const MethodInfo* method);
#define Task_1_get_Result_m30666(__this, method) (( Object_t * (*) (Task_1_t1394 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m30668_gshared (Task_1_t1394 * __this, Action_1_t1428 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30668(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1394 *, Action_1_t1428 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30670_gshared (Task_1_t1394 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30670(__this, method) (( void (*) (Task_1_t1394 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30672_gshared (Task_1_t1394 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30672(__this, ___result, method) (( bool (*) (Task_1_t1394 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30674_gshared (Task_1_t1394 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30674(__this, method) (( bool (*) (Task_1_t1394 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30676_gshared (Task_1_t1394 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30676(__this, ___exception, method) (( bool (*) (Task_1_t1394 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
