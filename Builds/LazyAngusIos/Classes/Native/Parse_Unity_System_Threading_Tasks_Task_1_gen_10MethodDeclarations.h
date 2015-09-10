#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1422;
// Parse.ParseObject
struct ParseObject_t1249;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6761;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m37657(__this, method) (( void (*) (Task_1_t1422 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseObject>::get_Result()
#define Task_1_get_Result_m7958(__this, method) (( ParseObject_t1249 * (*) (Task_1_t1422 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseObject>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m37658(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1422 *, Action_1_t6761 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::RunContinuations()
#define Task_1_RunContinuations_m37659(__this, method) (( void (*) (Task_1_t1422 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetResult(T)
#define Task_1_TrySetResult_m37660(__this, ___result, method) (( bool (*) (Task_1_t1422 *, ParseObject_t1249 *, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetCanceled()
#define Task_1_TrySetCanceled_m37661(__this, method) (( bool (*) (Task_1_t1422 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m37662(__this, ___exception, method) (( bool (*) (Task_1_t1422 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
