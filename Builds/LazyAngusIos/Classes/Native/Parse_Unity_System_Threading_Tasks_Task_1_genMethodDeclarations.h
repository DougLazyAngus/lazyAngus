#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1316;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5881;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m29883(__this, method) (( void (*) (Task_1_t1316 *, const MethodInfo*))Task_1__ctor_m29884_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7063(__this, method) (( bool (*) (Task_1_t1316 *, const MethodInfo*))Task_1_get_Result_m29885_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m29886(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1316 *, Action_1_t5881 *, const MethodInfo*))Task_1_ContinueWith_m29887_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m29888(__this, method) (( void (*) (Task_1_t1316 *, const MethodInfo*))Task_1_RunContinuations_m29889_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m29890(__this, ___result, method) (( bool (*) (Task_1_t1316 *, bool, const MethodInfo*))Task_1_TrySetResult_m29891_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m29892(__this, method) (( bool (*) (Task_1_t1316 *, const MethodInfo*))Task_1_TrySetCanceled_m29893_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m29894(__this, ___exception, method) (( bool (*) (Task_1_t1316 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29895_gshared)(__this, ___exception, method)
