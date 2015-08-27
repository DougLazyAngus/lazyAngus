﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object[]>
struct Task_1_t6172;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object[]>>
struct Action_1_t6173;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Object[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33230(__this, method) (( void (*) (Task_1_t6172 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object[]>::get_Result()
#define Task_1_get_Result_m33231(__this, method) (( ObjectU5BU5D_t683* (*) (Task_1_t6172 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33232(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t6172 *, Action_1_t6173 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object[]>::RunContinuations()
#define Task_1_RunContinuations_m33233(__this, method) (( void (*) (Task_1_t6172 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetResult(T)
#define Task_1_TrySetResult_m33234(__this, ___result, method) (( bool (*) (Task_1_t6172 *, ObjectU5BU5D_t683*, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33235(__this, method) (( bool (*) (Task_1_t6172 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33236(__this, ___exception, method) (( bool (*) (Task_1_t6172 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
