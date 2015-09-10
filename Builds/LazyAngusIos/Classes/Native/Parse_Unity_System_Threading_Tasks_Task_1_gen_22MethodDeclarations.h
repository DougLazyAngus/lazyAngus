#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1584;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8880;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m64182_gshared (Task_1_t1584 * __this, const MethodInfo* method);
#define Task_1__ctor_m64182(__this, method) (( void (*) (Task_1_t1584 *, const MethodInfo*))Task_1__ctor_m64182_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m64183_gshared (Task_1_t1584 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64183(__this, method) (( uint64_t (*) (Task_1_t1584 *, const MethodInfo*))Task_1_get_Result_m64183_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m64184_gshared (Task_1_t1584 * __this, Action_1_t8880 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64184(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1584 *, Action_1_t8880 *, const MethodInfo*))Task_1_ContinueWith_m64184_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64185_gshared (Task_1_t1584 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64185(__this, method) (( void (*) (Task_1_t1584 *, const MethodInfo*))Task_1_RunContinuations_m64185_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64186_gshared (Task_1_t1584 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64186(__this, ___result, method) (( bool (*) (Task_1_t1584 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m64186_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64187_gshared (Task_1_t1584 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64187(__this, method) (( bool (*) (Task_1_t1584 *, const MethodInfo*))Task_1_TrySetCanceled_m64187_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64188_gshared (Task_1_t1584 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64188(__this, ___exception, method) (( bool (*) (Task_1_t1584 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m64188_gshared)(__this, ___exception, method)
