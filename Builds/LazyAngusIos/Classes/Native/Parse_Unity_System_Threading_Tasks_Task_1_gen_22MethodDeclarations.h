#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1556;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8296;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m59382_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1__ctor_m59382(__this, method) (( void (*) (Task_1_t1556 *, const MethodInfo*))Task_1__ctor_m59382_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m59383_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59383(__this, method) (( uint64_t (*) (Task_1_t1556 *, const MethodInfo*))Task_1_get_Result_m59383_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59384_gshared (Task_1_t1556 * __this, Action_1_t8296 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59384(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1556 *, Action_1_t8296 *, const MethodInfo*))Task_1_ContinueWith_m59384_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59385_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59385(__this, method) (( void (*) (Task_1_t1556 *, const MethodInfo*))Task_1_RunContinuations_m59385_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59386_gshared (Task_1_t1556 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59386(__this, ___result, method) (( bool (*) (Task_1_t1556 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m59386_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59387_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59387(__this, method) (( bool (*) (Task_1_t1556 *, const MethodInfo*))Task_1_TrySetCanceled_m59387_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59388_gshared (Task_1_t1556 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59388(__this, ___exception, method) (( bool (*) (Task_1_t1556 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59388_gshared)(__this, ___exception, method)
