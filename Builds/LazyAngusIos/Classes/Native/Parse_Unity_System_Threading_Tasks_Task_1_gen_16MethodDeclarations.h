#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1446;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t6536;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m35349_gshared (Task_1_t1446 * __this, const MethodInfo* method);
#define Task_1__ctor_m35349(__this, method) (( void (*) (Task_1_t1446 *, const MethodInfo*))Task_1__ctor_m35349_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m35350_gshared (Task_1_t1446 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35350(__this, method) (( uint8_t (*) (Task_1_t1446 *, const MethodInfo*))Task_1_get_Result_m35350_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m35352_gshared (Task_1_t1446 * __this, Action_1_t6536 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35352(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1446 *, Action_1_t6536 *, const MethodInfo*))Task_1_ContinueWith_m35352_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35354_gshared (Task_1_t1446 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35354(__this, method) (( void (*) (Task_1_t1446 *, const MethodInfo*))Task_1_RunContinuations_m35354_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35356_gshared (Task_1_t1446 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35356(__this, ___result, method) (( bool (*) (Task_1_t1446 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m35356_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35358_gshared (Task_1_t1446 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35358(__this, method) (( bool (*) (Task_1_t1446 *, const MethodInfo*))Task_1_TrySetCanceled_m35358_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35360_gshared (Task_1_t1446 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35360(__this, ___exception, method) (( bool (*) (Task_1_t1446 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35360_gshared)(__this, ___exception, method)
