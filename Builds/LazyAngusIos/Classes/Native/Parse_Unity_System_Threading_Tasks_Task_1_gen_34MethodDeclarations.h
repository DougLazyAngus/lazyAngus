#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>
struct Task_1_t6091;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6024;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>>
struct Action_1_t9028;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32389(__this, method) (( void (*) (Task_1_t6091 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::get_Result()
#define Task_1_get_Result_m32390(__this, method) (( Task_1_t6024 * (*) (Task_1_t6091 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32391(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t6091 *, Action_1_t9028 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::RunContinuations()
#define Task_1_RunContinuations_m32392(__this, method) (( void (*) (Task_1_t6091 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::TrySetResult(T)
#define Task_1_TrySetResult_m32393(__this, ___result, method) (( bool (*) (Task_1_t6091 *, Task_1_t6024 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32394(__this, method) (( bool (*) (Task_1_t6091 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32395(__this, ___exception, method) (( bool (*) (Task_1_t6091 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
