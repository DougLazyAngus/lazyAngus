#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1570;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8831;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m63926_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1__ctor_m63926(__this, method) (( void (*) (Task_1_t1570 *, const MethodInfo*))Task_1__ctor_m63926_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m63927_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63927(__this, method) (( uint16_t (*) (Task_1_t1570 *, const MethodInfo*))Task_1_get_Result_m63927_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m63928_gshared (Task_1_t1570 * __this, Action_1_t8831 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63928(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1570 *, Action_1_t8831 *, const MethodInfo*))Task_1_ContinueWith_m63928_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63929_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63929(__this, method) (( void (*) (Task_1_t1570 *, const MethodInfo*))Task_1_RunContinuations_m63929_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63930_gshared (Task_1_t1570 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63930(__this, ___result, method) (( bool (*) (Task_1_t1570 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m63930_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63931_gshared (Task_1_t1570 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63931(__this, method) (( bool (*) (Task_1_t1570 *, const MethodInfo*))Task_1_TrySetCanceled_m63931_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63932_gshared (Task_1_t1570 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63932(__this, ___exception, method) (( bool (*) (Task_1_t1570 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m63932_gshared)(__this, ___exception, method)
