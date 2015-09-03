#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1435;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t6523;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m35267_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1__ctor_m35267(__this, method) (( void (*) (Task_1_t1435 *, const MethodInfo*))Task_1__ctor_m35267_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m35268_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35268(__this, method) (( uint8_t (*) (Task_1_t1435 *, const MethodInfo*))Task_1_get_Result_m35268_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m35270_gshared (Task_1_t1435 * __this, Action_1_t6523 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35270(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1435 *, Action_1_t6523 *, const MethodInfo*))Task_1_ContinueWith_m35270_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35272_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35272(__this, method) (( void (*) (Task_1_t1435 *, const MethodInfo*))Task_1_RunContinuations_m35272_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35274_gshared (Task_1_t1435 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35274(__this, ___result, method) (( bool (*) (Task_1_t1435 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m35274_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35276_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35276(__this, method) (( bool (*) (Task_1_t1435 *, const MethodInfo*))Task_1_TrySetCanceled_m35276_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35278_gshared (Task_1_t1435 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35278(__this, ___exception, method) (( bool (*) (Task_1_t1435 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m35278_gshared)(__this, ___exception, method)
