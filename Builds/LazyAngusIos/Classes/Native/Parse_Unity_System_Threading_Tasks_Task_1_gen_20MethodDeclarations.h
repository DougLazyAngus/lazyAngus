#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1555;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8279;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m59390_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1__ctor_m59390(__this, method) (( void (*) (Task_1_t1555 *, const MethodInfo*))Task_1__ctor_m59390_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m59391_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59391(__this, method) (( uint32_t (*) (Task_1_t1555 *, const MethodInfo*))Task_1_get_Result_m59391_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59392_gshared (Task_1_t1555 * __this, Action_1_t8279 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59392(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1555 *, Action_1_t8279 *, const MethodInfo*))Task_1_ContinueWith_m59392_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59393_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59393(__this, method) (( void (*) (Task_1_t1555 *, const MethodInfo*))Task_1_RunContinuations_m59393_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59394_gshared (Task_1_t1555 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59394(__this, ___result, method) (( bool (*) (Task_1_t1555 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m59394_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59395_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59395(__this, method) (( bool (*) (Task_1_t1555 *, const MethodInfo*))Task_1_TrySetCanceled_m59395_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59396_gshared (Task_1_t1555 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59396(__this, ___exception, method) (( bool (*) (Task_1_t1555 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59396_gshared)(__this, ___exception, method)
