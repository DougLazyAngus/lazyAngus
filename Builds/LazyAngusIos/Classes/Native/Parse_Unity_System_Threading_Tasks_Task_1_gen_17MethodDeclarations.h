#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1501;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8165;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m58418_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1__ctor_m58418(__this, method) (( void (*) (Task_1_t1501 *, const MethodInfo*))Task_1__ctor_m58418_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m58419_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58419(__this, method) (( int8_t (*) (Task_1_t1501 *, const MethodInfo*))Task_1_get_Result_m58419_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m58420_gshared (Task_1_t1501 * __this, Action_1_t8165 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58420(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1501 *, Action_1_t8165 *, const MethodInfo*))Task_1_ContinueWith_m58420_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58421_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58421(__this, method) (( void (*) (Task_1_t1501 *, const MethodInfo*))Task_1_RunContinuations_m58421_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58422_gshared (Task_1_t1501 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58422(__this, ___result, method) (( bool (*) (Task_1_t1501 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m58422_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58423_gshared (Task_1_t1501 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58423(__this, method) (( bool (*) (Task_1_t1501 *, const MethodInfo*))Task_1_TrySetCanceled_m58423_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58424_gshared (Task_1_t1501 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58424(__this, ___exception, method) (( bool (*) (Task_1_t1501 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58424_gshared)(__this, ___exception, method)
