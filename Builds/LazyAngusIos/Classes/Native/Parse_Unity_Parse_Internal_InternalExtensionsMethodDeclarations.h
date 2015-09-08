#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions
struct InternalExtensions_t1198;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1312;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1193;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1196;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1195;

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
extern "C" Task_t1231 * InternalExtensions_Safe_m6594 (Object_t * __this /* static, unused */, Task_t1231 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1231 * InternalExtensions_PartialAsync_m6595 (Object_t * __this /* static, unused */, Object_t * ___self, PartialAccessor_1_t1312 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1231 * InternalExtensions_PartialAsync_m6596 (Object_t * __this /* static, unused */, PartialAccessor_1_t1312 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1231 * InternalExtensions_OnSuccess_m6597 (Object_t * __this /* static, unused */, Task_t1231 * ___task, Action_1_t1193 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
extern "C" Task_t1231 * InternalExtensions_WhileAsync_m6598 (Object_t * __this /* static, unused */, Func_1_t1196 * ___predicate, Func_1_t1195 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
