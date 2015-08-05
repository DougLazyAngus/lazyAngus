#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Task_1_t8199;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1504;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>
struct Action_1_t8200;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58586(__this, method) (( void (*) (Task_1_t8199 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::get_Result()
#define Task_1_get_Result_m58587(__this, method) (( Task_1_t1504 * (*) (Task_1_t8199 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58588(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t8199 *, Action_1_t8200 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::RunContinuations()
#define Task_1_RunContinuations_m58589(__this, method) (( void (*) (Task_1_t8199 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetResult(T)
#define Task_1_TrySetResult_m58590(__this, ___result, method) (( bool (*) (Task_1_t8199 *, Task_1_t1504 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58591(__this, method) (( bool (*) (Task_1_t8199 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58592(__this, ___exception, method) (( bool (*) (Task_1_t8199 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
