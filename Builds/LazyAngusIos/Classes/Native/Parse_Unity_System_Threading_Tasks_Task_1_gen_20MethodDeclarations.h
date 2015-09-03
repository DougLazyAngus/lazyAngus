#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1571;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8843;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m63984_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1__ctor_m63984(__this, method) (( void (*) (Task_1_t1571 *, const MethodInfo*))Task_1__ctor_m63984_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m63985_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63985(__this, method) (( uint32_t (*) (Task_1_t1571 *, const MethodInfo*))Task_1_get_Result_m63985_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m63986_gshared (Task_1_t1571 * __this, Action_1_t8843 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63986(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1571 *, Action_1_t8843 *, const MethodInfo*))Task_1_ContinueWith_m63986_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63987_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63987(__this, method) (( void (*) (Task_1_t1571 *, const MethodInfo*))Task_1_RunContinuations_m63987_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63988_gshared (Task_1_t1571 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63988(__this, ___result, method) (( bool (*) (Task_1_t1571 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m63988_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63989_gshared (Task_1_t1571 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63989(__this, method) (( bool (*) (Task_1_t1571 *, const MethodInfo*))Task_1_TrySetCanceled_m63989_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63990_gshared (Task_1_t1571 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63990(__this, ___exception, method) (( bool (*) (Task_1_t1571 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m63990_gshared)(__this, ___exception, method)
