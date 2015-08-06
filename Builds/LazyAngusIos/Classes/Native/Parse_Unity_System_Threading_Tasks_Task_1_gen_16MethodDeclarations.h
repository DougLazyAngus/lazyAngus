#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1367;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5881;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m29900_gshared (Task_1_t1367 * __this, const MethodInfo* method);
#define Task_1__ctor_m29900(__this, method) (( void (*) (Task_1_t1367 *, const MethodInfo*))Task_1__ctor_m29900_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m29901_gshared (Task_1_t1367 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29901(__this, method) (( uint8_t (*) (Task_1_t1367 *, const MethodInfo*))Task_1_get_Result_m29901_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m29903_gshared (Task_1_t1367 * __this, Action_1_t5881 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29903(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1367 *, Action_1_t5881 *, const MethodInfo*))Task_1_ContinueWith_m29903_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29905_gshared (Task_1_t1367 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29905(__this, method) (( void (*) (Task_1_t1367 *, const MethodInfo*))Task_1_RunContinuations_m29905_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29907_gshared (Task_1_t1367 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29907(__this, ___result, method) (( bool (*) (Task_1_t1367 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m29907_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29909_gshared (Task_1_t1367 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29909(__this, method) (( bool (*) (Task_1_t1367 *, const MethodInfo*))Task_1_TrySetCanceled_m29909_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29911_gshared (Task_1_t1367 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29911(__this, ___exception, method) (( bool (*) (Task_1_t1367 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29911_gshared)(__this, ___exception, method)
