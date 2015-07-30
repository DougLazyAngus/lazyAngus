#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1340;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1374;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m29837_gshared (Task_1_t1340 * __this, const MethodInfo* method);
#define Task_1__ctor_m29837(__this, method) (( void (*) (Task_1_t1340 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m29838_gshared (Task_1_t1340 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29838(__this, method) (( Object_t * (*) (Task_1_t1340 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m29840_gshared (Task_1_t1340 * __this, Action_1_t1374 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29840(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1340 *, Action_1_t1374 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29842_gshared (Task_1_t1340 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29842(__this, method) (( void (*) (Task_1_t1340 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29844_gshared (Task_1_t1340 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29844(__this, ___result, method) (( bool (*) (Task_1_t1340 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29846_gshared (Task_1_t1340 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29846(__this, method) (( bool (*) (Task_1_t1340 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29848_gshared (Task_1_t1340 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29848(__this, ___exception, method) (( bool (*) (Task_1_t1340 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
