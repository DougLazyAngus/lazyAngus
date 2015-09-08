#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreController
struct ScoreController_t656;
// MouseMove
struct MouseMove_t530;
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3582 (ScoreController_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3583 (ScoreController_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3584 (ScoreController_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::RegisterForEvents()
extern "C" void ScoreController_RegisterForEvents_m3585 (ScoreController_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::UnregisterForEvents()
extern "C" void ScoreController_UnregisterForEvents_m3586 (ScoreController_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3587 (ScoreController_t656 * __this, MouseMove_t530 * ___killedMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDeadMouseDone(UnityEngine.GameObject)
extern "C" void ScoreController_OnDeadMouseDone_m3588 (ScoreController_t656 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScoreController::DestroyMouse(UnityEngine.GameObject)
extern "C" Object_t * ScoreController_DestroyMouse_m3589 (ScoreController_t656 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeFlyingAnimation(UnityEngine.GameObject)
extern "C" void ScoreController_MakeFlyingAnimation_m3590 (ScoreController_t656 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeDeadMouseAnimation(MouseMove)
extern "C" void ScoreController_MakeDeadMouseAnimation_m3591 (ScoreController_t656 * __this, MouseMove_t530 * ___killedMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
