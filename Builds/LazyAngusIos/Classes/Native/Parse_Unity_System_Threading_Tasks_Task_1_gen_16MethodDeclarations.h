#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1365;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5879;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m29884_gshared (Task_1_t1365 * __this, const MethodInfo* method);
#define Task_1__ctor_m29884(__this, method) (( void (*) (Task_1_t1365 *, const MethodInfo*))Task_1__ctor_m29884_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m29885_gshared (Task_1_t1365 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29885(__this, method) (( uint8_t (*) (Task_1_t1365 *, const MethodInfo*))Task_1_get_Result_m29885_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m29887_gshared (Task_1_t1365 * __this, Action_1_t5879 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29887(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1365 *, Action_1_t5879 *, const MethodInfo*))Task_1_ContinueWith_m29887_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29889_gshared (Task_1_t1365 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29889(__this, method) (( void (*) (Task_1_t1365 *, const MethodInfo*))Task_1_RunContinuations_m29889_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29891_gshared (Task_1_t1365 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29891(__this, ___result, method) (( bool (*) (Task_1_t1365 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m29891_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29893_gshared (Task_1_t1365 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29893(__this, method) (( bool (*) (Task_1_t1365 *, const MethodInfo*))Task_1_TrySetCanceled_m29893_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29895_gshared (Task_1_t1365 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29895(__this, ___exception, method) (( bool (*) (Task_1_t1365 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29895_gshared)(__this, ___exception, method)
