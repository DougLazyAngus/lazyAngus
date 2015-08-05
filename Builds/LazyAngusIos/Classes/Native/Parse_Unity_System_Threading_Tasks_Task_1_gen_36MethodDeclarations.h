#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6204;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6205;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>>
struct Action_1_t9087;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33924(__this, method) (( void (*) (Task_1_t6204 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::get_Result()
#define Task_1_get_Result_m33925(__this, method) (( Object_t* (*) (Task_1_t6204 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33926(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t6204 *, Action_1_t9087 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::RunContinuations()
#define Task_1_RunContinuations_m33927(__this, method) (( void (*) (Task_1_t6204 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::TrySetResult(T)
#define Task_1_TrySetResult_m33928(__this, ___result, method) (( bool (*) (Task_1_t6204 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33929(__this, method) (( bool (*) (Task_1_t6204 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33930(__this, ___exception, method) (( bool (*) (Task_1_t6204 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
