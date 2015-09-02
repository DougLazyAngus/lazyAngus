#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object[]>
struct Task_1_t6201;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object[]>>
struct Action_1_t6202;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Object[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33562(__this, method) (( void (*) (Task_1_t6201 *, const MethodInfo*))Task_1__ctor_m30997_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object[]>::get_Result()
#define Task_1_get_Result_m33563(__this, method) (( ObjectU5BU5D_t696* (*) (Task_1_t6201 *, const MethodInfo*))Task_1_get_Result_m30998_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33564(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t6201 *, Action_1_t6202 *, const MethodInfo*))Task_1_ContinueWith_m31000_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object[]>::RunContinuations()
#define Task_1_RunContinuations_m33565(__this, method) (( void (*) (Task_1_t6201 *, const MethodInfo*))Task_1_RunContinuations_m31002_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetResult(T)
#define Task_1_TrySetResult_m33566(__this, ___result, method) (( bool (*) (Task_1_t6201 *, ObjectU5BU5D_t696*, const MethodInfo*))Task_1_TrySetResult_m31004_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33567(__this, method) (( bool (*) (Task_1_t6201 *, const MethodInfo*))Task_1_TrySetCanceled_m31006_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33568(__this, ___exception, method) (( bool (*) (Task_1_t6201 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m31008_gshared)(__this, ___exception, method)
