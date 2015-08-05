#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1344;
// Parse.ParseObject
struct ParseObject_t1169;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6107;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32205(__this, method) (( void (*) (Task_1_t1344 *, const MethodInfo*))Task_1__ctor_m29860_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseObject>::get_Result()
#define Task_1_get_Result_m7478(__this, method) (( ParseObject_t1169 * (*) (Task_1_t1344 *, const MethodInfo*))Task_1_get_Result_m29861_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseObject>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32206(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1344 *, Action_1_t6107 *, const MethodInfo*))Task_1_ContinueWith_m29863_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::RunContinuations()
#define Task_1_RunContinuations_m32207(__this, method) (( void (*) (Task_1_t1344 *, const MethodInfo*))Task_1_RunContinuations_m29865_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetResult(T)
#define Task_1_TrySetResult_m32208(__this, ___result, method) (( bool (*) (Task_1_t1344 *, ParseObject_t1169 *, const MethodInfo*))Task_1_TrySetResult_m29867_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32209(__this, method) (( bool (*) (Task_1_t1344 *, const MethodInfo*))Task_1_TrySetCanceled_m29869_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32210(__this, ___exception, method) (( bool (*) (Task_1_t1344 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m29871_gshared)(__this, ___exception, method)
