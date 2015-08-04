#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Task_1_t8173;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1500;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>
struct Action_1_t8174;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58455(__this, method) (( void (*) (Task_1_t8173 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::get_Result()
#define Task_1_get_Result_m58456(__this, method) (( Task_1_t1500 * (*) (Task_1_t8173 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58457(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t8173 *, Action_1_t8174 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::RunContinuations()
#define Task_1_RunContinuations_m58458(__this, method) (( void (*) (Task_1_t8173 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetResult(T)
#define Task_1_TrySetResult_m58459(__this, ___result, method) (( bool (*) (Task_1_t8173 *, Task_1_t1500 *, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58460(__this, method) (( bool (*) (Task_1_t8173 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58461(__this, ___exception, method) (( bool (*) (Task_1_t8173 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
