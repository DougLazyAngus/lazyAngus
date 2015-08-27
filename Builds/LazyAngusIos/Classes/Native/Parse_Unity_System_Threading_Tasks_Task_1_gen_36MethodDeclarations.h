#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>
struct Task_1_t6281;
// System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>
struct IEnumerable_1_t6282;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>>
struct Action_1_t9187;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34714(__this, method) (( void (*) (Task_1_t6281 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::get_Result()
#define Task_1_get_Result_m34715(__this, method) (( Object_t* (*) (Task_1_t6281 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34716(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t6281 *, Action_1_t9187 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::RunContinuations()
#define Task_1_RunContinuations_m34717(__this, method) (( void (*) (Task_1_t6281 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::TrySetResult(T)
#define Task_1_TrySetResult_m34718(__this, ___result, method) (( bool (*) (Task_1_t6281 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34719(__this, method) (( bool (*) (Task_1_t6281 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseInstallation>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34720(__this, ___exception, method) (( bool (*) (Task_1_t6281 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
