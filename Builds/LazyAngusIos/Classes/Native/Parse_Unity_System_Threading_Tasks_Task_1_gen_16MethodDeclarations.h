#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1358;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5871;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m29837_gshared (Task_1_t1358 * __this, const MethodInfo* method);
#define Task_1__ctor_m29837(__this, method) (( void (*) (Task_1_t1358 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m29838_gshared (Task_1_t1358 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29838(__this, method) (( uint8_t (*) (Task_1_t1358 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1148 * Task_1_ContinueWith_m29840_gshared (Task_1_t1358 * __this, Action_1_t5871 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29840(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t1358 *, Action_1_t5871 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29842_gshared (Task_1_t1358 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29842(__this, method) (( void (*) (Task_1_t1358 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29844_gshared (Task_1_t1358 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29844(__this, ___result, method) (( bool (*) (Task_1_t1358 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29846_gshared (Task_1_t1358 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29846(__this, method) (( bool (*) (Task_1_t1358 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29848_gshared (Task_1_t1358 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29848(__this, ___exception, method) (( bool (*) (Task_1_t1358 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
