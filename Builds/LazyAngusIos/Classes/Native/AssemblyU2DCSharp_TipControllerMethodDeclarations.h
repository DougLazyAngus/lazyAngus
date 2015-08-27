#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TipController
struct TipController_t662;
// TipConfig
struct TipConfig_t511;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m3565 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Awake()
extern "C" void TipController_Awake_m3566 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Start()
extern "C" void TipController_Start_m3567 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m3568 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::RegisterForEvents()
extern "C" void TipController_RegisterForEvents_m3569 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::UnregisterForEvents()
extern "C" void TipController_UnregisterForEvents_m3570 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m3571 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m3572 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m3573 (TipController_t662 * __this, TipConfig_t511 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern "C" Object_t * TipController_PlayTipWithPause_m3574 (TipController_t662 * __this, TipConfig_t511 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m3575 (TipController_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern "C" bool TipController_MaybeShowTip_m3576 (TipController_t662 * __this, TipConfig_t511 * ___tipConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
