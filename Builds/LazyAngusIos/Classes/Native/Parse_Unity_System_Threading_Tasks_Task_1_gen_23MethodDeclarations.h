#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1578;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t10209;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m64183(__this, method) (( void (*) (Task_1_t1578 *, const MethodInfo*))Task_1__ctor_m63951_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m64184(__this, method) (( uint16_t (*) (Task_1_t1578 *, const MethodInfo*))Task_1_get_Result_m63952_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m64185(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1578 *, Action_1_t10209 *, const MethodInfo*))Task_1_ContinueWith_m63953_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m64186(__this, method) (( void (*) (Task_1_t1578 *, const MethodInfo*))Task_1_RunContinuations_m63954_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m64187(__this, ___result, method) (( bool (*) (Task_1_t1578 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m63955_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m64188(__this, method) (( bool (*) (Task_1_t1578 *, const MethodInfo*))Task_1_TrySetCanceled_m63956_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m64189(__this, ___exception, method) (( bool (*) (Task_1_t1578 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m63957_gshared)(__this, ___exception, method)
