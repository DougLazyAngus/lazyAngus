#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine
struct EditorCoroutine_t459;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Func`1<System.Boolean>
struct Func_1_t458;
// System.Action
struct Action_t143;

// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::.ctor(System.Collections.IEnumerator,System.Func`1<System.Boolean>)
extern "C" void EditorCoroutine__ctor_m2568 (EditorCoroutine_t459 * __this, Object_t * ___routine, Func_1_t458 * ___done, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::get_Routine()
extern "C" Object_t * EditorCoroutine_get_Routine_m2569 (EditorCoroutine_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::set_Routine(System.Collections.IEnumerator)
extern "C" void EditorCoroutine_set_Routine_m2570 (EditorCoroutine_t459 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<System.Boolean> GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::get_Done()
extern "C" Func_1_t458 * EditorCoroutine_get_Done_m2571 (EditorCoroutine_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::set_Done(System.Func`1<System.Boolean>)
extern "C" void EditorCoroutine_set_Done_m2572 (EditorCoroutine_t459 * __this, Func_1_t458 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::get_ContinueWith()
extern "C" Action_t143 * EditorCoroutine_get_ContinueWith_m2573 (EditorCoroutine_t459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::set_ContinueWith(System.Action)
extern "C" void EditorCoroutine_set_ContinueWith_m2574 (EditorCoroutine_t459 * __this, Action_t143 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
