#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Task_1_t8852;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1571;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>>
struct Action_1_t8853;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m64028(__this, method) (( void (*) (Task_1_t8852 *, const MethodInfo*))Task_1__ctor_m35220_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::get_Result()
#define Task_1_get_Result_m64029(__this, method) (( Task_1_t1571 * (*) (Task_1_t8852 *, const MethodInfo*))Task_1_get_Result_m35221_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m64030(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t8852 *, Action_1_t8853 *, const MethodInfo*))Task_1_ContinueWith_m35223_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::RunContinuations()
#define Task_1_RunContinuations_m64031(__this, method) (( void (*) (Task_1_t8852 *, const MethodInfo*))Task_1_RunContinuations_m35225_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetResult(T)
#define Task_1_TrySetResult_m64032(__this, ___result, method) (( bool (*) (Task_1_t8852 *, Task_1_t1571 *, const MethodInfo*))Task_1_TrySetResult_m35227_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m64033(__this, method) (( bool (*) (Task_1_t8852 *, const MethodInfo*))Task_1_TrySetCanceled_m35229_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m64034(__this, ___exception, method) (( bool (*) (Task_1_t8852 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m35231_gshared)(__this, ___exception, method)
