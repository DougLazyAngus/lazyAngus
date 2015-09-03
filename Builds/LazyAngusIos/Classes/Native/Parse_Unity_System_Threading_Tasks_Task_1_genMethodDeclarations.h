#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1386;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t6525;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m35266(__this, method) (( void (*) (Task_1_t1386 *, const MethodInfo*))Task_1__ctor_m35267_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7492(__this, method) (( bool (*) (Task_1_t1386 *, const MethodInfo*))Task_1_get_Result_m35268_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35269(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1386 *, Action_1_t6525 *, const MethodInfo*))Task_1_ContinueWith_m35270_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m35271(__this, method) (( void (*) (Task_1_t1386 *, const MethodInfo*))Task_1_RunContinuations_m35272_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m35273(__this, ___result, method) (( bool (*) (Task_1_t1386 *, bool, const MethodInfo*))Task_1_TrySetResult_m35274_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35275(__this, method) (( bool (*) (Task_1_t1386 *, const MethodInfo*))Task_1_TrySetCanceled_m35276_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35277(__this, ___exception, method) (( bool (*) (Task_1_t1386 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m35278_gshared)(__this, ___exception, method)
