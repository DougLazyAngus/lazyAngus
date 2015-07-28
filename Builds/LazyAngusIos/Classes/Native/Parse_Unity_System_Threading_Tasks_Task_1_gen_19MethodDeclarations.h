#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1493;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t8178;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C" void Task_1__ctor_m58464_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1__ctor_m58464(__this, method) (( void (*) (Task_1_t1493 *, const MethodInfo*))Task_1__ctor_m58464_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m58465_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58465(__this, method) (( uint16_t (*) (Task_1_t1493 *, const MethodInfo*))Task_1_get_Result_m58465_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1148 * Task_1_ContinueWith_m58466_gshared (Task_1_t1493 * __this, Action_1_t8178 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58466(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t1493 *, Action_1_t8178 *, const MethodInfo*))Task_1_ContinueWith_m58466_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58467_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58467(__this, method) (( void (*) (Task_1_t1493 *, const MethodInfo*))Task_1_RunContinuations_m58467_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58468_gshared (Task_1_t1493 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58468(__this, ___result, method) (( bool (*) (Task_1_t1493 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58468_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58469_gshared (Task_1_t1493 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58469(__this, method) (( bool (*) (Task_1_t1493 *, const MethodInfo*))Task_1_TrySetCanceled_m58469_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58470_gshared (Task_1_t1493 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58470(__this, ___exception, method) (( bool (*) (Task_1_t1493 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m58470_gshared)(__this, ___exception, method)
