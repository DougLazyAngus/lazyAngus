#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameUIController
struct GameUIController_t520;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// GameUIController/GameUIsType
#include "AssemblyU2DCSharp_GameUIController_GameUIsType.h"

// System.Void GameUIController::.ctor()
extern "C" void GameUIController__ctor_m2804 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameUIController GameUIController::get_instance()
extern "C" GameUIController_t520 * GameUIController_get_instance_m2805 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::set_instance(GameUIController)
extern "C" void GameUIController_set_instance_m2806 (Object_t * __this /* static, unused */, GameUIController_t520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::Awake()
extern "C" void GameUIController_Awake_m2807 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::Start()
extern "C" void GameUIController_Start_m2808 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameUIController::ConfirmUIsSetup()
extern "C" Object_t * GameUIController_ConfirmUIsSetup_m2809 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::OnDestroy()
extern "C" void GameUIController_OnDestroy_m2810 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::RegisterForEvents()
extern "C" void GameUIController_RegisterForEvents_m2811 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::UnregisterForEvents()
extern "C" void GameUIController_UnregisterForEvents_m2812 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::OnGamePhaseChanged()
extern "C" void GameUIController_OnGamePhaseChanged_m2813 (GameUIController_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIController::SetActiveUI(GameUIController/GameUIsType)
extern "C" void GameUIController_SetActiveUI_m2814 (GameUIController_t520 * __this, int32_t ___uiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
