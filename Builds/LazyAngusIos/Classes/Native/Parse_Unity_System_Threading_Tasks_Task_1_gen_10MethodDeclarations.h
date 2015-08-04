#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1343;
// Parse.ParseObject
struct ParseObject_t1168;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6106;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32198(__this, method) (( void (*) (Task_1_t1343 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseObject>::get_Result()
#define Task_1_get_Result_m7471(__this, method) (( ParseObject_t1168 * (*) (Task_1_t1343 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseObject>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32199(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1343 *, Action_1_t6106 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::RunContinuations()
#define Task_1_RunContinuations_m32200(__this, method) (( void (*) (Task_1_t1343 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetResult(T)
#define Task_1_TrySetResult_m32201(__this, ___result, method) (( bool (*) (Task_1_t1343 *, ParseObject_t1168 *, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32202(__this, method) (( bool (*) (Task_1_t1343 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32203(__this, ___exception, method) (( bool (*) (Task_1_t1343 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
