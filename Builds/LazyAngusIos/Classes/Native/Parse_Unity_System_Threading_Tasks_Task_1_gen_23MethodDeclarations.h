﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t1498;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t9468;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"
#define Task_1__ctor_m58696(__this, method) (( void (*) (Task_1_t1498 *, const MethodInfo*))Task_1__ctor_m58464_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
#define Task_1_get_Result_m58697(__this, method) (( uint16_t (*) (Task_1_t1498 *, const MethodInfo*))Task_1_get_Result_m58465_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58698(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1498 *, Action_1_t9468 *, const MethodInfo*))Task_1_ContinueWith_m58466_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
#define Task_1_RunContinuations_m58699(__this, method) (( void (*) (Task_1_t1498 *, const MethodInfo*))Task_1_RunContinuations_m58467_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
#define Task_1_TrySetResult_m58700(__this, ___result, method) (( bool (*) (Task_1_t1498 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m58468_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58701(__this, method) (( bool (*) (Task_1_t1498 *, const MethodInfo*))Task_1_TrySetCanceled_m58469_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58702(__this, ___exception, method) (( bool (*) (Task_1_t1498 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m58470_gshared)(__this, ___exception, method)
