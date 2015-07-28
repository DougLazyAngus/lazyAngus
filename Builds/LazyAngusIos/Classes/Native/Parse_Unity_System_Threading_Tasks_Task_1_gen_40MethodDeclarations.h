#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6208;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6209;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>>
struct Action_1_t9082;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34131(__this, method) (( void (*) (Task_1_t6208 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::get_Result()
#define Task_1_get_Result_m34132(__this, method) (( Object_t* (*) (Task_1_t6208 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34133(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t6208 *, Action_1_t9082 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::RunContinuations()
#define Task_1_RunContinuations_m34134(__this, method) (( void (*) (Task_1_t6208 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::TrySetResult(T)
#define Task_1_TrySetResult_m34135(__this, ___result, method) (( bool (*) (Task_1_t6208 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34136(__this, method) (( bool (*) (Task_1_t6208 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34137(__this, ___exception, method) (( bool (*) (Task_1_t6208 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
