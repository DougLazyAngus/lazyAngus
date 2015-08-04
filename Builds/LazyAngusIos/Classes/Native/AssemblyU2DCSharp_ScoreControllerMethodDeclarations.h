#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreController
struct ScoreController_t597;
// MouseMove
struct MouseMove_t486;

// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3221 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3222 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3223 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::RegisterForEvents()
extern "C" void ScoreController_RegisterForEvents_m3224 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::UnregisterForEvents()
extern "C" void ScoreController_UnregisterForEvents_m3225 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3226 (ScoreController_t597 * __this, MouseMove_t486 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern "C" void ScoreController_MakeScoreEffect_m3227 (ScoreController_t597 * __this, MouseMove_t486 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
