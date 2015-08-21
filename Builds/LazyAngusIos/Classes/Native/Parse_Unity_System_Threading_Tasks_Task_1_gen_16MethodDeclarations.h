#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1416;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5958;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m30679_gshared (Task_1_t1416 * __this, const MethodInfo* method);
#define Task_1__ctor_m30679(__this, method) (( void (*) (Task_1_t1416 *, const MethodInfo*))Task_1__ctor_m30679_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m30680_gshared (Task_1_t1416 * __this, const MethodInfo* method);
#define Task_1_get_Result_m30680(__this, method) (( uint8_t (*) (Task_1_t1416 *, const MethodInfo*))Task_1_get_Result_m30680_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m30682_gshared (Task_1_t1416 * __this, Action_1_t5958 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30682(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1416 *, Action_1_t5958 *, const MethodInfo*))Task_1_ContinueWith_m30682_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30684_gshared (Task_1_t1416 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30684(__this, method) (( void (*) (Task_1_t1416 *, const MethodInfo*))Task_1_RunContinuations_m30684_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30686_gshared (Task_1_t1416 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30686(__this, ___result, method) (( bool (*) (Task_1_t1416 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m30686_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30688_gshared (Task_1_t1416 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30688(__this, method) (( bool (*) (Task_1_t1416 *, const MethodInfo*))Task_1_TrySetCanceled_m30688_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30690_gshared (Task_1_t1416 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30690(__this, ___exception, method) (( bool (*) (Task_1_t1416 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30690_gshared)(__this, ___exception, method)
