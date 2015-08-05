#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Task_1_t8211;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1505;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>>
struct Action_1_t8212;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58644(__this, method) (( void (*) (Task_1_t8211 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::get_Result()
#define Task_1_get_Result_m58645(__this, method) (( Task_1_t1505 * (*) (Task_1_t8211 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58646(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t8211 *, Action_1_t8212 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::RunContinuations()
#define Task_1_RunContinuations_m58647(__this, method) (( void (*) (Task_1_t8211 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetResult(T)
#define Task_1_TrySetResult_m58648(__this, ___result, method) (( bool (*) (Task_1_t8211 *, Task_1_t1505 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58649(__this, method) (( bool (*) (Task_1_t8211 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58650(__this, ___exception, method) (( bool (*) (Task_1_t8211 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
