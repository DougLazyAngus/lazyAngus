#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6688;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t735;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>
struct Action_1_t6689;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m37191(__this, method) (( void (*) (Task_1_t6688 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::get_Result()
#define Task_1_get_Result_m37192(__this, method) (( Object_t* (*) (Task_1_t6688 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m37193(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t6688 *, Action_1_t6689 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m37194(__this, method) (( void (*) (Task_1_t6688 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m37195(__this, ___result, method) (( bool (*) (Task_1_t6688 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m37196(__this, method) (( bool (*) (Task_1_t6688 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m37197(__this, ___exception, method) (( bool (*) (Task_1_t6688 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
