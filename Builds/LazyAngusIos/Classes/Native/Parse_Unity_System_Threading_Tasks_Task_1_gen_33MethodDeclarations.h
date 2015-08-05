#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object[]>
struct Task_1_t6094;
// System.Object[]
struct ObjectU5BU5D_t637;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object[]>>
struct Action_1_t6095;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Object[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32430(__this, method) (( void (*) (Task_1_t6094 *, const MethodInfo*))Task_1__ctor_m29865_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object[]>::get_Result()
#define Task_1_get_Result_m32431(__this, method) (( ObjectU5BU5D_t637* (*) (Task_1_t6094 *, const MethodInfo*))Task_1_get_Result_m29866_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32432(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t6094 *, Action_1_t6095 *, const MethodInfo*))Task_1_ContinueWith_m29868_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object[]>::RunContinuations()
#define Task_1_RunContinuations_m32433(__this, method) (( void (*) (Task_1_t6094 *, const MethodInfo*))Task_1_RunContinuations_m29870_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetResult(T)
#define Task_1_TrySetResult_m32434(__this, ___result, method) (( bool (*) (Task_1_t6094 *, ObjectU5BU5D_t637*, const MethodInfo*))Task_1_TrySetResult_m29872_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32435(__this, method) (( bool (*) (Task_1_t6094 *, const MethodInfo*))Task_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32436(__this, ___exception, method) (( bool (*) (Task_1_t6094 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29876_gshared)(__this, ___exception, method)
