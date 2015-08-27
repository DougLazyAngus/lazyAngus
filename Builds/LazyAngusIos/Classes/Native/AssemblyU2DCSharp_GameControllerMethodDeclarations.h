﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController
struct GameController_t555;
// MouseMove
struct MouseMove_t527;
// MouseSinkController
struct MouseSinkController_t601;

// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m2950 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController GameController::get_instance()
extern "C" GameController_t555 * GameController_get_instance_m2951 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::set_instance(GameController)
extern "C" void GameController_set_instance_m2952 (Object_t * __this /* static, unused */, GameController_t555 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C" void GameController_Awake_m2953 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C" void GameController_Start_m2954 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C" void GameController_Update_m2955 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnDestroy()
extern "C" void GameController_OnDestroy_m2956 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RegisterForEvents()
extern "C" void GameController_RegisterForEvents_m2957 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UnregisterForEvents()
extern "C" void GameController_UnregisterForEvents_m2958 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m2959 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m2960 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m2961 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::UpdateMouseSinkTrapCount()
extern "C" void GameController_UpdateMouseSinkTrapCount_m2962 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m2963 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m2964 (GameController_t555 * __this, MouseMove_t527 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m2965 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseSinkController GameController::FindDoomedExit()
extern "C" MouseSinkController_t601 * GameController_FindDoomedExit_m2966 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::CheckForLevelEnd()
extern "C" bool GameController_CheckForLevelEnd_m2967 (GameController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m2968 (GameController_t555 * __this, MouseMove_t527 * ___mouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<Start>m__4D(System.Boolean)
extern "C" void GameController_U3CStartU3Em__4D_m2969 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
