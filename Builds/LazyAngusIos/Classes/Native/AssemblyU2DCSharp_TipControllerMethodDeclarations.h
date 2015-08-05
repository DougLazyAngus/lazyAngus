#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TipController
struct TipController_t614;
// TipConfig
struct TipConfig_t473;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m3330 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Awake()
extern "C" void TipController_Awake_m3331 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Start()
extern "C" void TipController_Start_m3332 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m3333 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::RegisterForEvents()
extern "C" void TipController_RegisterForEvents_m3334 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::UnregisterForEvents()
extern "C" void TipController_UnregisterForEvents_m3335 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m3336 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m3337 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m3338 (TipController_t614 * __this, TipConfig_t473 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern "C" Object_t * TipController_PlayTipWithPause_m3339 (TipController_t614 * __this, TipConfig_t473 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m3340 (TipController_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern "C" bool TipController_MaybeShowTip_m3341 (TipController_t614 * __this, TipConfig_t473 * ___tipConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
