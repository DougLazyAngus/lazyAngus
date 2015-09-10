#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1581;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8844;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m64008_gshared (Task_1_t1581 * __this, const MethodInfo* method);
#define Task_1__ctor_m64008(__this, method) (( void (*) (Task_1_t1581 *, const MethodInfo*))Task_1__ctor_m64008_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m64009_gshared (Task_1_t1581 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64009(__this, method) (( uint16_t (*) (Task_1_t1581 *, const MethodInfo*))Task_1_get_Result_m64009_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m64010_gshared (Task_1_t1581 * __this, Action_1_t8844 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64010(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1581 *, Action_1_t8844 *, const MethodInfo*))Task_1_ContinueWith_m64010_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64011_gshared (Task_1_t1581 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64011(__this, method) (( void (*) (Task_1_t1581 *, const MethodInfo*))Task_1_RunContinuations_m64011_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64012_gshared (Task_1_t1581 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64012(__this, ___result, method) (( bool (*) (Task_1_t1581 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m64012_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64013_gshared (Task_1_t1581 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64013(__this, method) (( bool (*) (Task_1_t1581 *, const MethodInfo*))Task_1_TrySetCanceled_m64013_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64014_gshared (Task_1_t1581 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64014(__this, ___exception, method) (( bool (*) (Task_1_t1581 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m64014_gshared)(__this, ___exception, method)
