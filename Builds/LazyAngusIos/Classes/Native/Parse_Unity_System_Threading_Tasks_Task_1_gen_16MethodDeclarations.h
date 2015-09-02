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
struct Action_1_t5990;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m31044_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1__ctor_m31044(__this, method) (( void (*) (Task_1_t1435 *, const MethodInfo*))Task_1__ctor_m31044_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m31045_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1_get_Result_m31045(__this, method) (( uint8_t (*) (Task_1_t1435 *, const MethodInfo*))Task_1_get_Result_m31045_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m31047_gshared (Task_1_t1435 * __this, Action_1_t5990 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m31047(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1435 *, Action_1_t5990 *, const MethodInfo*))Task_1_ContinueWith_m31047_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m31049_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m31049(__this, method) (( void (*) (Task_1_t1435 *, const MethodInfo*))Task_1_RunContinuations_m31049_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m31051_gshared (Task_1_t1435 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m31051(__this, ___result, method) (( bool (*) (Task_1_t1435 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m31051_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m31053_gshared (Task_1_t1435 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m31053(__this, method) (( bool (*) (Task_1_t1435 *, const MethodInfo*))Task_1_TrySetCanceled_m31053_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m31055_gshared (Task_1_t1435 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m31055(__this, ___exception, method) (( bool (*) (Task_1_t1435 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m31055_gshared)(__this, ___exception, method)
