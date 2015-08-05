#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Task_1_t8210;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1504;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>>
struct Action_1_t8211;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58636(__this, method) (( void (*) (Task_1_t8210 *, const MethodInfo*))Task_1__ctor_m29860_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::get_Result()
#define Task_1_get_Result_m58637(__this, method) (( Task_1_t1504 * (*) (Task_1_t8210 *, const MethodInfo*))Task_1_get_Result_m29861_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58638(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t8210 *, Action_1_t8211 *, const MethodInfo*))Task_1_ContinueWith_m29863_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::RunContinuations()
#define Task_1_RunContinuations_m58639(__this, method) (( void (*) (Task_1_t8210 *, const MethodInfo*))Task_1_RunContinuations_m29865_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetResult(T)
#define Task_1_TrySetResult_m58640(__this, ___result, method) (( bool (*) (Task_1_t8210 *, Task_1_t1504 *, const MethodInfo*))Task_1_TrySetResult_m29867_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58641(__this, method) (( bool (*) (Task_1_t8210 *, const MethodInfo*))Task_1_TrySetCanceled_m29869_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58642(__this, ___exception, method) (( bool (*) (Task_1_t8210 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m29871_gshared)(__this, ___exception, method)
