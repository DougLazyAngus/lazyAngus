#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1587;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8904;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m64305_gshared (Task_1_t1587 * __this, const MethodInfo* method);
#define Task_1__ctor_m64305(__this, method) (( void (*) (Task_1_t1587 *, const MethodInfo*))Task_1__ctor_m64305_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m64306_gshared (Task_1_t1587 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64306(__this, method) (( float (*) (Task_1_t1587 *, const MethodInfo*))Task_1_get_Result_m64306_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m64307_gshared (Task_1_t1587 * __this, Action_1_t8904 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64307(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1587 *, Action_1_t8904 *, const MethodInfo*))Task_1_ContinueWith_m64307_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64308_gshared (Task_1_t1587 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64308(__this, method) (( void (*) (Task_1_t1587 *, const MethodInfo*))Task_1_RunContinuations_m64308_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64309_gshared (Task_1_t1587 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64309(__this, ___result, method) (( bool (*) (Task_1_t1587 *, float, const MethodInfo*))Task_1_TrySetResult_m64309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64310_gshared (Task_1_t1587 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64310(__this, method) (( bool (*) (Task_1_t1587 *, const MethodInfo*))Task_1_TrySetCanceled_m64310_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64311_gshared (Task_1_t1587 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64311(__this, ___exception, method) (( bool (*) (Task_1_t1587 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m64311_gshared)(__this, ___exception, method)
