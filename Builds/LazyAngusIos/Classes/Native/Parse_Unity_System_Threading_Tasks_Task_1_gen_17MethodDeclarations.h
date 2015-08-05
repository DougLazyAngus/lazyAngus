#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1502;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8166;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m58423_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1__ctor_m58423(__this, method) (( void (*) (Task_1_t1502 *, const MethodInfo*))Task_1__ctor_m58423_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m58424_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58424(__this, method) (( int8_t (*) (Task_1_t1502 *, const MethodInfo*))Task_1_get_Result_m58424_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m58425_gshared (Task_1_t1502 * __this, Action_1_t8166 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58425(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1502 *, Action_1_t8166 *, const MethodInfo*))Task_1_ContinueWith_m58425_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58426_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58426(__this, method) (( void (*) (Task_1_t1502 *, const MethodInfo*))Task_1_RunContinuations_m58426_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58427_gshared (Task_1_t1502 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58427(__this, ___result, method) (( bool (*) (Task_1_t1502 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m58427_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58428_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58428(__this, method) (( bool (*) (Task_1_t1502 *, const MethodInfo*))Task_1_TrySetCanceled_m58428_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58429_gshared (Task_1_t1502 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58429(__this, ___exception, method) (( bool (*) (Task_1_t1502 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58429_gshared)(__this, ___exception, method)
