#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreController
struct ScoreController_t599;
// MouseMove
struct MouseMove_t487;

// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3236 (ScoreController_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3237 (ScoreController_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3238 (ScoreController_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::RegisterForEvents()
extern "C" void ScoreController_RegisterForEvents_m3239 (ScoreController_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::UnregisterForEvents()
extern "C" void ScoreController_UnregisterForEvents_m3240 (ScoreController_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3241 (ScoreController_t599 * __this, MouseMove_t487 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern "C" void ScoreController_MakeScoreEffect_m3242 (ScoreController_t599 * __this, MouseMove_t487 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
