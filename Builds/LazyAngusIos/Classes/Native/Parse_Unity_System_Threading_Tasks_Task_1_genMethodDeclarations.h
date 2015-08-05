#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1320;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5885;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m29911(__this, method) (( void (*) (Task_1_t1320 *, const MethodInfo*))Task_1__ctor_m29912_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7088(__this, method) (( bool (*) (Task_1_t1320 *, const MethodInfo*))Task_1_get_Result_m29913_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m29914(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1320 *, Action_1_t5885 *, const MethodInfo*))Task_1_ContinueWith_m29915_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m29916(__this, method) (( void (*) (Task_1_t1320 *, const MethodInfo*))Task_1_RunContinuations_m29917_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m29918(__this, ___result, method) (( bool (*) (Task_1_t1320 *, bool, const MethodInfo*))Task_1_TrySetResult_m29919_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m29920(__this, method) (( bool (*) (Task_1_t1320 *, const MethodInfo*))Task_1_TrySetCanceled_m29921_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m29922(__this, ___exception, method) (( bool (*) (Task_1_t1320 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29923_gshared)(__this, ___exception, method)
