#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5961;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m30708_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1__ctor_m30708(__this, method) (( void (*) (Task_1_t1368 *, const MethodInfo*))Task_1__ctor_m30708_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7274_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7274(__this, method) (( int32_t (*) (Task_1_t1368 *, const MethodInfo*))Task_1_get_Result_m7274_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m30709_gshared (Task_1_t1368 * __this, Action_1_t5961 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m30709(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1368 *, Action_1_t5961 *, const MethodInfo*))Task_1_ContinueWith_m30709_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m30710_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m30710(__this, method) (( void (*) (Task_1_t1368 *, const MethodInfo*))Task_1_RunContinuations_m30710_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30711_gshared (Task_1_t1368 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m30711(__this, ___result, method) (( bool (*) (Task_1_t1368 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m30711_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30712_gshared (Task_1_t1368 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m30712(__this, method) (( bool (*) (Task_1_t1368 *, const MethodInfo*))Task_1_TrySetCanceled_m30712_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30713_gshared (Task_1_t1368 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m30713(__this, ___exception, method) (( bool (*) (Task_1_t1368 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30713_gshared)(__this, ___exception, method)
