#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Task_1_t5890;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1359;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>>
struct Action_1_t5891;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m29996(__this, method) (( void (*) (Task_1_t5890 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::get_Result()
#define Task_1_get_Result_m29997(__this, method) (( Task_1_t1359 * (*) (Task_1_t5890 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m29998(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t5890 *, Action_1_t5891 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::RunContinuations()
#define Task_1_RunContinuations_m29999(__this, method) (( void (*) (Task_1_t5890 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetResult(T)
#define Task_1_TrySetResult_m30000(__this, ___result, method) (( bool (*) (Task_1_t5890 *, Task_1_t1359 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30001(__this, method) (( bool (*) (Task_1_t5890 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30002(__this, ___exception, method) (( bool (*) (Task_1_t5890 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
