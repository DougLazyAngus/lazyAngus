#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreController
struct ScoreController_t639;
// MouseMove
struct MouseMove_t527;
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3435 (ScoreController_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3436 (ScoreController_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3437 (ScoreController_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::RegisterForEvents()
extern "C" void ScoreController_RegisterForEvents_m3438 (ScoreController_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::UnregisterForEvents()
extern "C" void ScoreController_UnregisterForEvents_m3439 (ScoreController_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3440 (ScoreController_t639 * __this, MouseMove_t527 * ___killedMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDeadMouseDone(UnityEngine.GameObject)
extern "C" void ScoreController_OnDeadMouseDone_m3441 (ScoreController_t639 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScoreController::DestroyMouse(UnityEngine.GameObject)
extern "C" Object_t * ScoreController_DestroyMouse_m3442 (ScoreController_t639 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeFlyingAnimation(UnityEngine.GameObject)
extern "C" void ScoreController_MakeFlyingAnimation_m3443 (ScoreController_t639 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern "C" void ScoreController_MakeScoreEffect_m3444 (ScoreController_t639 * __this, MouseMove_t527 * ___killedMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
