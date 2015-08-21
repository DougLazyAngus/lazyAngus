#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreController
struct ScoreController_t637;
// MouseMove
struct MouseMove_t527;

// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3420 (ScoreController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3421 (ScoreController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3422 (ScoreController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::RegisterForEvents()
extern "C" void ScoreController_RegisterForEvents_m3423 (ScoreController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::UnregisterForEvents()
extern "C" void ScoreController_UnregisterForEvents_m3424 (ScoreController_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3425 (ScoreController_t637 * __this, MouseMove_t527 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern "C" void ScoreController_MakeScoreEffect_m3426 (ScoreController_t637 * __this, MouseMove_t527 * ___deadMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
