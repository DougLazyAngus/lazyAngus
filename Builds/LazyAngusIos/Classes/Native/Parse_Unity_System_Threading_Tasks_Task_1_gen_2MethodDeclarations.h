#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1333;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1367;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m29790_gshared (Task_1_t1333 * __this, const MethodInfo* method);
#define Task_1__ctor_m29790(__this, method) (( void (*) (Task_1_t1333 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m29791_gshared (Task_1_t1333 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29791(__this, method) (( Object_t * (*) (Task_1_t1333 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1148 * Task_1_ContinueWith_m29793_gshared (Task_1_t1333 * __this, Action_1_t1367 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29793(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t1333 *, Action_1_t1367 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29795_gshared (Task_1_t1333 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29795(__this, method) (( void (*) (Task_1_t1333 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29797_gshared (Task_1_t1333 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29797(__this, ___result, method) (( bool (*) (Task_1_t1333 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29799_gshared (Task_1_t1333 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29799(__this, method) (( bool (*) (Task_1_t1333 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29801_gshared (Task_1_t1333 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29801(__this, ___exception, method) (( bool (*) (Task_1_t1333 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
