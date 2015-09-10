#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions
struct InternalExtensions_t1205;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1319;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1200;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1203;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1202;

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
extern "C" Task_t1238 * InternalExtensions_Safe_m6652 (Object_t * __this /* static, unused */, Task_t1238 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1238 * InternalExtensions_PartialAsync_m6653 (Object_t * __this /* static, unused */, Object_t * ___self, PartialAccessor_1_t1319 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1238 * InternalExtensions_PartialAsync_m6654 (Object_t * __this /* static, unused */, PartialAccessor_1_t1319 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1238 * InternalExtensions_OnSuccess_m6655 (Object_t * __this /* static, unused */, Task_t1238 * ___task, Action_1_t1200 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
extern "C" Task_t1238 * InternalExtensions_WhileAsync_m6656 (Object_t * __this /* static, unused */, Func_1_t1203 * ___predicate, Func_1_t1202 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
