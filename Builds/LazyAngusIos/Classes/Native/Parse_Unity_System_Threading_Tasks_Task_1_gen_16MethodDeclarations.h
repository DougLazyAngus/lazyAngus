#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1436;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t6524;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m35280_gshared (Task_1_t1436 * __this, const MethodInfo* method);
#define Task_1__ctor_m35280(__this, method) (( void (*) (Task_1_t1436 *, const MethodInfo*))Task_1__ctor_m35280_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m35281_gshared (Task_1_t1436 * __this, const MethodInfo* method);
#define Task_1_get_Result_m35281(__this, method) (( uint8_t (*) (Task_1_t1436 *, const MethodInfo*))Task_1_get_Result_m35281_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m35283_gshared (Task_1_t1436 * __this, Action_1_t6524 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35283(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1436 *, Action_1_t6524 *, const MethodInfo*))Task_1_ContinueWith_m35283_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35285_gshared (Task_1_t1436 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35285(__this, method) (( void (*) (Task_1_t1436 *, const MethodInfo*))Task_1_RunContinuations_m35285_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35287_gshared (Task_1_t1436 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35287(__this, ___result, method) (( bool (*) (Task_1_t1436 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m35287_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35289_gshared (Task_1_t1436 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35289(__this, method) (( bool (*) (Task_1_t1436 *, const MethodInfo*))Task_1_TrySetCanceled_m35289_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35291_gshared (Task_1_t1436 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35291(__this, ___exception, method) (( bool (*) (Task_1_t1436 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m35291_gshared)(__this, ___exception, method)
