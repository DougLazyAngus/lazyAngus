#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1579;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8820;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C" void Task_1__ctor_m63892_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1__ctor_m63892(__this, method) (( void (*) (Task_1_t1579 *, const MethodInfo*))Task_1__ctor_m63892_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m63893_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63893(__this, method) (( int8_t (*) (Task_1_t1579 *, const MethodInfo*))Task_1_get_Result_m63893_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m63894_gshared (Task_1_t1579 * __this, Action_1_t8820 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63894(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1579 *, Action_1_t8820 *, const MethodInfo*))Task_1_ContinueWith_m63894_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m63895_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m63895(__this, method) (( void (*) (Task_1_t1579 *, const MethodInfo*))Task_1_RunContinuations_m63895_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m63896_gshared (Task_1_t1579 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m63896(__this, ___result, method) (( bool (*) (Task_1_t1579 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m63896_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m63897_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m63897(__this, method) (( bool (*) (Task_1_t1579 *, const MethodInfo*))Task_1_TrySetCanceled_m63897_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m63898_gshared (Task_1_t1579 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m63898(__this, ___exception, method) (( bool (*) (Task_1_t1579 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m63898_gshared)(__this, ___exception, method)
