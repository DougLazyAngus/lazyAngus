#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreController
struct ScoreController_t640;
// MouseMove
struct MouseMove_t527;

// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3442 (ScoreController_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3443 (ScoreController_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3444 (ScoreController_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::RegisterForEvents()
extern "C" void ScoreController_RegisterForEvents_m3445 (ScoreController_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::UnregisterForEvents()
extern "C" void ScoreController_UnregisterForEvents_m3446 (ScoreController_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3447 (ScoreController_t640 * __this, MouseMove_t527 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern "C" void ScoreController_MakeScoreEffect_m3448 (ScoreController_t640 * __this, MouseMove_t527 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
