#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions
struct InternalExtensions_t1194;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1308;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1189;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1192;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1191;

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
extern "C" Task_t1227 * InternalExtensions_Safe_m6581 (Object_t * __this /* static, unused */, Task_t1227 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1227 * InternalExtensions_PartialAsync_m6582 (Object_t * __this /* static, unused */, Object_t * ___self, PartialAccessor_1_t1308 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1227 * InternalExtensions_PartialAsync_m6583 (Object_t * __this /* static, unused */, PartialAccessor_1_t1308 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1227 * InternalExtensions_OnSuccess_m6584 (Object_t * __this /* static, unused */, Task_t1227 * ___task, Action_1_t1189 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
extern "C" Task_t1227 * InternalExtensions_WhileAsync_m6585 (Object_t * __this /* static, unused */, Func_1_t1192 * ___predicate, Func_1_t1191 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
