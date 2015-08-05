#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1508;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t9479;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m58774(__this, method) (( void (*) (Task_1_t1508 *, const MethodInfo*))Task_1__ctor_m58542_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m58775(__this, method) (( uint16_t (*) (Task_1_t1508 *, const MethodInfo*))Task_1_get_Result_m58543_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58776(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1508 *, Action_1_t9479 *, const MethodInfo*))Task_1_ContinueWith_m58544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m58777(__this, method) (( void (*) (Task_1_t1508 *, const MethodInfo*))Task_1_RunContinuations_m58545_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m58778(__this, ___result, method) (( bool (*) (Task_1_t1508 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58546_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58779(__this, method) (( bool (*) (Task_1_t1508 *, const MethodInfo*))Task_1_TrySetCanceled_m58547_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58780(__this, ___exception, method) (( bool (*) (Task_1_t1508 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58548_gshared)(__this, ___exception, method)
