#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameUIController
struct GameUIController_t565;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// GameUIController/GameUIsType
#include "AssemblyU2DCSharp_GameUIController_GameUIsType.h"

// System.Void GameUIController::.ctor()
extern "C" void GameUIController__ctor_m3032 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameUIController GameUIController::get_instance()
extern "C" GameUIController_t565 * GameUIController_get_instance_m3033 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::set_instance(GameUIController)
extern "C" void GameUIController_set_instance_m3034 (Object_t * __this /* static, unused */, GameUIController_t565 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::Awake()
extern "C" void GameUIController_Awake_m3035 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::Start()
extern "C" void GameUIController_Start_m3036 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameUIController::ConfirmComplete()
extern "C" Object_t * GameUIController_ConfirmComplete_m3037 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::OnDestroy()
extern "C" void GameUIController_OnDestroy_m3038 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::RegisterForEvents()
extern "C" void GameUIController_RegisterForEvents_m3039 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::UnregisterForEvents()
extern "C" void GameUIController_UnregisterForEvents_m3040 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::OnGamePhaseChanged()
extern "C" void GameUIController_OnGamePhaseChanged_m3041 (GameUIController_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::SetActiveUI(GameUIController/GameUIsType)
extern "C" void GameUIController_SetActiveUI_m3042 (GameUIController_t565 * __this, int32_t ___uiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
