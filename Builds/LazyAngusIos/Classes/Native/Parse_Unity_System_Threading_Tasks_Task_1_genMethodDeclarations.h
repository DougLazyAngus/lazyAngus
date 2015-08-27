#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1370;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5963;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m30711(__this, method) (( void (*) (Task_1_t1370 *, const MethodInfo*))Task_1__ctor_m30712_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7356(__this, method) (( bool (*) (Task_1_t1370 *, const MethodInfo*))Task_1_get_Result_m30713_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30714(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1370 *, Action_1_t5963 *, const MethodInfo*))Task_1_ContinueWith_m30715_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m30716(__this, method) (( void (*) (Task_1_t1370 *, const MethodInfo*))Task_1_RunContinuations_m30717_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m30718(__this, ___result, method) (( bool (*) (Task_1_t1370 *, bool, const MethodInfo*))Task_1_TrySetResult_m30719_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30720(__this, method) (( bool (*) (Task_1_t1370 *, const MethodInfo*))Task_1_TrySetCanceled_m30721_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30722(__this, ___exception, method) (( bool (*) (Task_1_t1370 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30723_gshared)(__this, ___exception, method)
