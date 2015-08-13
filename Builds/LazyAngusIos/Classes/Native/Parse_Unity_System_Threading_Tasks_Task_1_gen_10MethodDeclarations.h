#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1394;
// Parse.ParseObject
struct ParseObject_t1221;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6179;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32889(__this, method) (( void (*) (Task_1_t1394 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseObject>::get_Result()
#define Task_1_get_Result_m7731(__this, method) (( ParseObject_t1221 * (*) (Task_1_t1394 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseObject>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32890(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1394 *, Action_1_t6179 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::RunContinuations()
#define Task_1_RunContinuations_m32891(__this, method) (( void (*) (Task_1_t1394 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetResult(T)
#define Task_1_TrySetResult_m32892(__this, ___result, method) (( bool (*) (Task_1_t1394 *, ParseObject_t1221 *, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32893(__this, method) (( bool (*) (Task_1_t1394 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32894(__this, ___exception, method) (( bool (*) (Task_1_t1394 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
