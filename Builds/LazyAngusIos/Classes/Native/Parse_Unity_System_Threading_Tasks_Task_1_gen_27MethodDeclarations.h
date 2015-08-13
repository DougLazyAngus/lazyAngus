#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1415;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1342;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>
struct Action_1_t2160;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59975(__this, method) (( void (*) (Task_1_t1415 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::get_Result()
#define Task_1_get_Result_m7834(__this, method) (( TaskU5BU5D_t1342* (*) (Task_1_t1415 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m7839(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1415 *, Action_1_t2160 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::RunContinuations()
#define Task_1_RunContinuations_m59976(__this, method) (( void (*) (Task_1_t1415 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define Task_1_TrySetResult_m59977(__this, ___result, method) (( bool (*) (Task_1_t1415 *, TaskU5BU5D_t1342*, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59978(__this, method) (( bool (*) (Task_1_t1415 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59979(__this, ___exception, method) (( bool (*) (Task_1_t1415 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
