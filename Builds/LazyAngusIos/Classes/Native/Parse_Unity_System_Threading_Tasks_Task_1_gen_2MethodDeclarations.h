#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1343;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1377;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m29860_gshared (Task_1_t1343 * __this, const MethodInfo* method);
#define Task_1__ctor_m29860(__this, method) (( void (*) (Task_1_t1343 *, const MethodInfo*))Task_1__ctor_m29860_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m29861_gshared (Task_1_t1343 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29861(__this, method) (( Object_t * (*) (Task_1_t1343 *, const MethodInfo*))Task_1_get_Result_m29861_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m29863_gshared (Task_1_t1343 * __this, Action_1_t1377 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29863(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1343 *, Action_1_t1377 *, const MethodInfo*))Task_1_ContinueWith_m29863_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29865_gshared (Task_1_t1343 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29865(__this, method) (( void (*) (Task_1_t1343 *, const MethodInfo*))Task_1_RunContinuations_m29865_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29867_gshared (Task_1_t1343 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29867(__this, ___result, method) (( bool (*) (Task_1_t1343 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m29867_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29869_gshared (Task_1_t1343 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29869(__this, method) (( bool (*) (Task_1_t1343 *, const MethodInfo*))Task_1_TrySetCanceled_m29869_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29871_gshared (Task_1_t1343 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29871(__this, ___exception, method) (( bool (*) (Task_1_t1343 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m29871_gshared)(__this, ___exception, method)
