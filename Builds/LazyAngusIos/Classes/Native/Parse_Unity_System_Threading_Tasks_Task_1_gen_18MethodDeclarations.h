#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1493;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t8167;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C" void Task_1__ctor_m58406_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1__ctor_m58406(__this, method) (( void (*) (Task_1_t1493 *, const MethodInfo*))Task_1__ctor_m58406_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m58407_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58407(__this, method) (( int16_t (*) (Task_1_t1493 *, const MethodInfo*))Task_1_get_Result_m58407_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1149 * Task_1_ContinueWith_m58408_gshared (Task_1_t1493 * __this, Action_1_t8167 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58408(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1493 *, Action_1_t8167 *, const MethodInfo*))Task_1_ContinueWith_m58408_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58409_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58409(__this, method) (( void (*) (Task_1_t1493 *, const MethodInfo*))Task_1_RunContinuations_m58409_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58410_gshared (Task_1_t1493 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58410(__this, ___result, method) (( bool (*) (Task_1_t1493 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m58410_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58411_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58411(__this, method) (( bool (*) (Task_1_t1493 *, const MethodInfo*))Task_1_TrySetCanceled_m58411_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58412_gshared (Task_1_t1493 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58412(__this, ___exception, method) (( bool (*) (Task_1_t1493 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m58412_gshared)(__this, ___exception, method)
