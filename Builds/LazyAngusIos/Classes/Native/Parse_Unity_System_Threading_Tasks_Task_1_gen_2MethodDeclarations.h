#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1342;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1376;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m29853_gshared (Task_1_t1342 * __this, const MethodInfo* method);
#define Task_1__ctor_m29853(__this, method) (( void (*) (Task_1_t1342 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m29854_gshared (Task_1_t1342 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29854(__this, method) (( Object_t * (*) (Task_1_t1342 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m29856_gshared (Task_1_t1342 * __this, Action_1_t1376 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29856(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1342 *, Action_1_t1376 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29858_gshared (Task_1_t1342 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29858(__this, method) (( void (*) (Task_1_t1342 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29860_gshared (Task_1_t1342 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29860(__this, ___result, method) (( bool (*) (Task_1_t1342 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29862_gshared (Task_1_t1342 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29862(__this, method) (( bool (*) (Task_1_t1342 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29864_gshared (Task_1_t1342 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29864(__this, ___exception, method) (( bool (*) (Task_1_t1342 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
