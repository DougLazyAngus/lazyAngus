#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1507;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t9478;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m58766(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1__ctor_m58534_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m58767(__this, method) (( uint16_t (*) (Task_1_t1507 *, const MethodInfo*))Task_1_get_Result_m58535_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58768(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1507 *, Action_1_t9478 *, const MethodInfo*))Task_1_ContinueWith_m58536_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m58769(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1_RunContinuations_m58537_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m58770(__this, ___result, method) (( bool (*) (Task_1_t1507 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58538_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58771(__this, method) (( bool (*) (Task_1_t1507 *, const MethodInfo*))Task_1_TrySetCanceled_m58539_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58772(__this, ___exception, method) (( bool (*) (Task_1_t1507 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58540_gshared)(__this, ___exception, method)
