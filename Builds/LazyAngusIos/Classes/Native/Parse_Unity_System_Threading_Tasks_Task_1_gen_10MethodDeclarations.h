#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1345;
// Parse.ParseObject
struct ParseObject_t1170;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6108;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32213(__this, method) (( void (*) (Task_1_t1345 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseObject>::get_Result()
#define Task_1_get_Result_m7486(__this, method) (( ParseObject_t1170 * (*) (Task_1_t1345 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseObject>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32214(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1345 *, Action_1_t6108 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::RunContinuations()
#define Task_1_RunContinuations_m32215(__this, method) (( void (*) (Task_1_t1345 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetResult(T)
#define Task_1_TrySetResult_m32216(__this, ___result, method) (( bool (*) (Task_1_t1345 *, ParseObject_t1170 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32217(__this, method) (( bool (*) (Task_1_t1345 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32218(__this, ___exception, method) (( bool (*) (Task_1_t1345 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
