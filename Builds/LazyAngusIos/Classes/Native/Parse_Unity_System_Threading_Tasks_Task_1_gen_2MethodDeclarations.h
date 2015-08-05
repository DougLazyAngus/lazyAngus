#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1344;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1378;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m29868_gshared (Task_1_t1344 * __this, const MethodInfo* method);
#define Task_1__ctor_m29868(__this, method) (( void (*) (Task_1_t1344 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m29869_gshared (Task_1_t1344 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29869(__this, method) (( Object_t * (*) (Task_1_t1344 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m29871_gshared (Task_1_t1344 * __this, Action_1_t1378 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29871(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1344 *, Action_1_t1378 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29873_gshared (Task_1_t1344 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29873(__this, method) (( void (*) (Task_1_t1344 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29875_gshared (Task_1_t1344 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29875(__this, ___result, method) (( bool (*) (Task_1_t1344 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29877_gshared (Task_1_t1344 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29877(__this, method) (( bool (*) (Task_1_t1344 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29879_gshared (Task_1_t1344 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29879(__this, ___exception, method) (( bool (*) (Task_1_t1344 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
