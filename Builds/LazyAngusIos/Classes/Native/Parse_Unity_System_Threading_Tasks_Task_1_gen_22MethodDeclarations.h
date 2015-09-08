#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1574;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8868;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m64113_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1__ctor_m64113(__this, method) (( void (*) (Task_1_t1574 *, const MethodInfo*))Task_1__ctor_m64113_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m64114_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64114(__this, method) (( uint64_t (*) (Task_1_t1574 *, const MethodInfo*))Task_1_get_Result_m64114_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m64115_gshared (Task_1_t1574 * __this, Action_1_t8868 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64115(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1574 *, Action_1_t8868 *, const MethodInfo*))Task_1_ContinueWith_m64115_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64116_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64116(__this, method) (( void (*) (Task_1_t1574 *, const MethodInfo*))Task_1_RunContinuations_m64116_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64117_gshared (Task_1_t1574 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64117(__this, ___result, method) (( bool (*) (Task_1_t1574 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m64117_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64118_gshared (Task_1_t1574 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64118(__this, method) (( bool (*) (Task_1_t1574 *, const MethodInfo*))Task_1_TrySetCanceled_m64118_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64119_gshared (Task_1_t1574 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64119(__this, ___exception, method) (( bool (*) (Task_1_t1574 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m64119_gshared)(__this, ___exception, method)
