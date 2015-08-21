#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1552;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8276;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m59357_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1__ctor_m59357(__this, method) (( void (*) (Task_1_t1552 *, const MethodInfo*))Task_1__ctor_m59357_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m59358_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59358(__this, method) (( uint32_t (*) (Task_1_t1552 *, const MethodInfo*))Task_1_get_Result_m59358_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59359_gshared (Task_1_t1552 * __this, Action_1_t8276 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59359(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1552 *, Action_1_t8276 *, const MethodInfo*))Task_1_ContinueWith_m59359_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59360_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59360(__this, method) (( void (*) (Task_1_t1552 *, const MethodInfo*))Task_1_RunContinuations_m59360_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59361_gshared (Task_1_t1552 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59361(__this, ___result, method) (( bool (*) (Task_1_t1552 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m59361_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59362_gshared (Task_1_t1552 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59362(__this, method) (( bool (*) (Task_1_t1552 *, const MethodInfo*))Task_1_TrySetCanceled_m59362_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59363_gshared (Task_1_t1552 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59363(__this, ___exception, method) (( bool (*) (Task_1_t1552 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59363_gshared)(__this, ___exception, method)
