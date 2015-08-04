#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>
struct Task_1_t6214;
// System.Collections.Generic.IEnumerable`1<Parse.ParseRole>
struct IEnumerable_1_t6215;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>>
struct Action_1_t9090;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34114(__this, method) (( void (*) (Task_1_t6214 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>::get_Result()
#define Task_1_get_Result_m34115(__this, method) (( Object_t* (*) (Task_1_t6214 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34116(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t6214 *, Action_1_t9090 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>::RunContinuations()
#define Task_1_RunContinuations_m34117(__this, method) (( void (*) (Task_1_t6214 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>::TrySetResult(T)
#define Task_1_TrySetResult_m34118(__this, ___result, method) (( bool (*) (Task_1_t6214 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34119(__this, method) (( bool (*) (Task_1_t6214 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseRole>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34120(__this, ___exception, method) (( bool (*) (Task_1_t6214 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
