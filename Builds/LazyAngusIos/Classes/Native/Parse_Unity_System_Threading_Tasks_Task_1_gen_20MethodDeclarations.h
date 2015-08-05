#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1504;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8201;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m58592_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1__ctor_m58592(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1__ctor_m58592_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m58593_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58593(__this, method) (( uint32_t (*) (Task_1_t1504 *, const MethodInfo*))Task_1_get_Result_m58593_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m58594_gshared (Task_1_t1504 * __this, Action_1_t8201 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58594(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1504 *, Action_1_t8201 *, const MethodInfo*))Task_1_ContinueWith_m58594_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58595_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58595(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1_RunContinuations_m58595_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58596_gshared (Task_1_t1504 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58596(__this, ___result, method) (( bool (*) (Task_1_t1504 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m58596_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58597_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58597(__this, method) (( bool (*) (Task_1_t1504 *, const MethodInfo*))Task_1_TrySetCanceled_m58597_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58598_gshared (Task_1_t1504 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58598(__this, ___exception, method) (( bool (*) (Task_1_t1504 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58598_gshared)(__this, ___exception, method)
