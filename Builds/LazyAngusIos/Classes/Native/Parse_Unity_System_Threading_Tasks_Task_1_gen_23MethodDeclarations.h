#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1574;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t10203;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m64158(__this, method) (( void (*) (Task_1_t1574 *, const MethodInfo*))Task_1__ctor_m63926_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m64159(__this, method) (( uint16_t (*) (Task_1_t1574 *, const MethodInfo*))Task_1_get_Result_m63927_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m64160(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1574 *, Action_1_t10203 *, const MethodInfo*))Task_1_ContinueWith_m63928_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m64161(__this, method) (( void (*) (Task_1_t1574 *, const MethodInfo*))Task_1_RunContinuations_m63929_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m64162(__this, ___result, method) (( bool (*) (Task_1_t1574 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m63930_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m64163(__this, method) (( bool (*) (Task_1_t1574 *, const MethodInfo*))Task_1_TrySetCanceled_m63931_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m64164(__this, ___exception, method) (( bool (*) (Task_1_t1574 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m63932_gshared)(__this, ___exception, method)
