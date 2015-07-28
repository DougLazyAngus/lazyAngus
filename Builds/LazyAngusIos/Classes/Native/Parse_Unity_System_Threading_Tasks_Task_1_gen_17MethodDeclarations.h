#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1492;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8155;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m58348_gshared (Task_1_t1492 * __this, const MethodInfo* method);
#define Task_1__ctor_m58348(__this, method) (( void (*) (Task_1_t1492 *, const MethodInfo*))Task_1__ctor_m58348_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m58349_gshared (Task_1_t1492 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58349(__this, method) (( int8_t (*) (Task_1_t1492 *, const MethodInfo*))Task_1_get_Result_m58349_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1149 * Task_1_ContinueWith_m58350_gshared (Task_1_t1492 * __this, Action_1_t8155 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58350(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1492 *, Action_1_t8155 *, const MethodInfo*))Task_1_ContinueWith_m58350_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58351_gshared (Task_1_t1492 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58351(__this, method) (( void (*) (Task_1_t1492 *, const MethodInfo*))Task_1_RunContinuations_m58351_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58352_gshared (Task_1_t1492 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58352(__this, ___result, method) (( bool (*) (Task_1_t1492 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m58352_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58353_gshared (Task_1_t1492 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58353(__this, method) (( bool (*) (Task_1_t1492 *, const MethodInfo*))Task_1_TrySetCanceled_m58353_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58354_gshared (Task_1_t1492 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58354(__this, ___exception, method) (( bool (*) (Task_1_t1492 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m58354_gshared)(__this, ___exception, method)
