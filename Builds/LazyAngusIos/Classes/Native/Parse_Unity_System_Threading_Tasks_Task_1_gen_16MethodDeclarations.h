#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1368;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5882;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m29907_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1__ctor_m29907(__this, method) (( void (*) (Task_1_t1368 *, const MethodInfo*))Task_1__ctor_m29907_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m29908_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29908(__this, method) (( uint8_t (*) (Task_1_t1368 *, const MethodInfo*))Task_1_get_Result_m29908_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m29910_gshared (Task_1_t1368 * __this, Action_1_t5882 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29910(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1368 *, Action_1_t5882 *, const MethodInfo*))Task_1_ContinueWith_m29910_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29912_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29912(__this, method) (( void (*) (Task_1_t1368 *, const MethodInfo*))Task_1_RunContinuations_m29912_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29914_gshared (Task_1_t1368 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29914(__this, ___result, method) (( bool (*) (Task_1_t1368 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m29914_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29916_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29916(__this, method) (( bool (*) (Task_1_t1368 *, const MethodInfo*))Task_1_TrySetCanceled_m29916_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29918_gshared (Task_1_t1368 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29918(__this, ___exception, method) (( bool (*) (Task_1_t1368 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m29918_gshared)(__this, ___exception, method)
