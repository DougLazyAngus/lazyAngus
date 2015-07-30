#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1498;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8162;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m58395_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1__ctor_m58395(__this, method) (( void (*) (Task_1_t1498 *, const MethodInfo*))Task_1__ctor_m58395_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m58396_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58396(__this, method) (( int8_t (*) (Task_1_t1498 *, const MethodInfo*))Task_1_get_Result_m58396_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58397_gshared (Task_1_t1498 * __this, Action_1_t8162 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58397(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1498 *, Action_1_t8162 *, const MethodInfo*))Task_1_ContinueWith_m58397_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58398_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58398(__this, method) (( void (*) (Task_1_t1498 *, const MethodInfo*))Task_1_RunContinuations_m58398_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58399_gshared (Task_1_t1498 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58399(__this, ___result, method) (( bool (*) (Task_1_t1498 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m58399_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58400_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58400(__this, method) (( bool (*) (Task_1_t1498 *, const MethodInfo*))Task_1_TrySetCanceled_m58400_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58401_gshared (Task_1_t1498 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58401(__this, ___exception, method) (( bool (*) (Task_1_t1498 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58401_gshared)(__this, ___exception, method)
