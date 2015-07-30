#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Task_1_t1485;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1337;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>>
struct Action_1_t9096;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34334(__this, method) (( void (*) (Task_1_t1485 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::get_Result()
#define Task_1_get_Result_m34335(__this, method) (( Task_1_t1337 * (*) (Task_1_t1485 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34336(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1485 *, Action_1_t9096 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::RunContinuations()
#define Task_1_RunContinuations_m34337(__this, method) (( void (*) (Task_1_t1485 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetResult(T)
#define Task_1_TrySetResult_m34338(__this, ___result, method) (( bool (*) (Task_1_t1485 *, Task_1_t1337 *, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34339(__this, method) (( bool (*) (Task_1_t1485 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34340(__this, ___exception, method) (( bool (*) (Task_1_t1485 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
