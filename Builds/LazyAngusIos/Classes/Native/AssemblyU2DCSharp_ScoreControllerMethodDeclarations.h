#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreController
struct ScoreController_t597;
// MouseMove
struct MouseMove_t488;

// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3213 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3214 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3215 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::RegisterForEvents()
extern "C" void ScoreController_RegisterForEvents_m3216 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::UnregisterForEvents()
extern "C" void ScoreController_UnregisterForEvents_m3217 (ScoreController_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3218 (ScoreController_t597 * __this, MouseMove_t488 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern "C" void ScoreController_MakeScoreEffect_m3219 (ScoreController_t597 * __this, MouseMove_t488 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
