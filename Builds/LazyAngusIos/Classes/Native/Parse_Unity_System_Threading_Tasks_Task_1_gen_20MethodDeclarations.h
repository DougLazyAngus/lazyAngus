#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1572;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8844;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m63997_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1__ctor_m63997(__this, method) (( void (*) (Task_1_t1572 *, const MethodInfo*))Task_1__ctor_m63997_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m63998_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1_get_Result_m63998(__this, method) (( uint32_t (*) (Task_1_t1572 *, const MethodInfo*))Task_1_get_Result_m63998_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m63999_gshared (Task_1_t1572 * __this, Action_1_t8844 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m63999(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1572 *, Action_1_t8844 *, const MethodInfo*))Task_1_ContinueWith_m63999_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64000_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64000(__this, method) (( void (*) (Task_1_t1572 *, const MethodInfo*))Task_1_RunContinuations_m64000_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64001_gshared (Task_1_t1572 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64001(__this, ___result, method) (( bool (*) (Task_1_t1572 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m64001_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64002_gshared (Task_1_t1572 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64002(__this, method) (( bool (*) (Task_1_t1572 *, const MethodInfo*))Task_1_TrySetCanceled_m64002_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64003_gshared (Task_1_t1572 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64003(__this, ___exception, method) (( bool (*) (Task_1_t1572 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m64003_gshared)(__this, ___exception, method)
