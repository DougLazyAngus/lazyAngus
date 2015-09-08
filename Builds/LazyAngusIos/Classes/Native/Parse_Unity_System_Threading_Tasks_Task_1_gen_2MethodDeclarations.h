#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1411;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1445;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m35233_gshared (Task_1_t1411 * __this, const MethodInfo* method);
#define Task_1__ctor_m35233(__this, method) (( void (*) (Task_1_t1411 *, const MethodInfo*))Task_1__ctor_m35233_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m35234_gshared (Task_1_t1411 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35234(__this, method) (( Object_t * (*) (Task_1_t1411 *, const MethodInfo*))Task_1_get_Result_m35234_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m35236_gshared (Task_1_t1411 * __this, Action_1_t1445 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35236(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1411 *, Action_1_t1445 *, const MethodInfo*))Task_1_ContinueWith_m35236_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35238_gshared (Task_1_t1411 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35238(__this, method) (( void (*) (Task_1_t1411 *, const MethodInfo*))Task_1_RunContinuations_m35238_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35240_gshared (Task_1_t1411 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35240(__this, ___result, method) (( bool (*) (Task_1_t1411 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m35240_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35242_gshared (Task_1_t1411 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35242(__this, method) (( bool (*) (Task_1_t1411 *, const MethodInfo*))Task_1_TrySetCanceled_m35242_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35244_gshared (Task_1_t1411 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35244(__this, ___exception, method) (( bool (*) (Task_1_t1411 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m35244_gshared)(__this, ___exception, method)
