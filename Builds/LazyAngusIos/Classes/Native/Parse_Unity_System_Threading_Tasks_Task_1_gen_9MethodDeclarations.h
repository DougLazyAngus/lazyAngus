#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1331;
// Parse.ParseUser
struct ParseUser_t1245;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Action_1_t6099;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32420(__this, method) (( void (*) (Task_1_t1331 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseUser>::get_Result()
#define Task_1_get_Result_m7375(__this, method) (( ParseUser_t1245 * (*) (Task_1_t1331 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32421(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1331 *, Action_1_t6099 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::RunContinuations()
#define Task_1_RunContinuations_m32422(__this, method) (( void (*) (Task_1_t1331 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetResult(T)
#define Task_1_TrySetResult_m32423(__this, ___result, method) (( bool (*) (Task_1_t1331 *, ParseUser_t1245 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32424(__this, method) (( bool (*) (Task_1_t1331 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32425(__this, ___exception, method) (( bool (*) (Task_1_t1331 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
