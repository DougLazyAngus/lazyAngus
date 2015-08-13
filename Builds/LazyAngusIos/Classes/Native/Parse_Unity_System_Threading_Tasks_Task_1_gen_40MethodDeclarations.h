#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>
struct Task_1_t6290;
// System.Collections.Generic.IEnumerable`1<Parse.ParseSession>
struct IEnumerable_1_t6291;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>>
struct Action_1_t9183;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34878(__this, method) (( void (*) (Task_1_t6290 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::get_Result()
#define Task_1_get_Result_m34879(__this, method) (( Object_t* (*) (Task_1_t6290 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34880(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t6290 *, Action_1_t9183 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::RunContinuations()
#define Task_1_RunContinuations_m34881(__this, method) (( void (*) (Task_1_t6290 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::TrySetResult(T)
#define Task_1_TrySetResult_m34882(__this, ___result, method) (( bool (*) (Task_1_t6290 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34883(__this, method) (( bool (*) (Task_1_t6290 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseSession>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34884(__this, ___exception, method) (( bool (*) (Task_1_t6290 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
