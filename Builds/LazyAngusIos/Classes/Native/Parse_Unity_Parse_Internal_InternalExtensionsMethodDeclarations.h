#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions
struct InternalExtensions_t1123;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1239;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1118;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1121;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1120;

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
extern "C" Task_t1157 * InternalExtensions_Safe_m6165 (Object_t * __this /* static, unused */, Task_t1157 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1157 * InternalExtensions_PartialAsync_m6166 (Object_t * __this /* static, unused */, Object_t * ___self, PartialAccessor_1_t1239 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1157 * InternalExtensions_PartialAsync_m6167 (Object_t * __this /* static, unused */, PartialAccessor_1_t1239 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1157 * InternalExtensions_OnSuccess_m6168 (Object_t * __this /* static, unused */, Task_t1157 * ___task, Action_1_t1118 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
extern "C" Task_t1157 * InternalExtensions_WhileAsync_m6169 (Object_t * __this /* static, unused */, Func_1_t1121 * ___predicate, Func_1_t1120 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
