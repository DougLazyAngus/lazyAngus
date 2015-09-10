#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TipController
struct TipController_t651;
// TipConfig
struct TipConfig_t623;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m3543 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Awake()
extern "C" void TipController_Awake_m3544 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Start()
extern "C" void TipController_Start_m3545 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m3546 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::RegisterForEvents()
extern "C" void TipController_RegisterForEvents_m3547 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::UnregisterForEvents()
extern "C" void TipController_UnregisterForEvents_m3548 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m3549 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m3550 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m3551 (TipController_t651 * __this, TipConfig_t623 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueAnytimeTip(System.String)
extern "C" void TipController_EnqueueAnytimeTip_m3552 (TipController_t651 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern "C" Object_t * TipController_PlayTipWithPause_m3553 (TipController_t651 * __this, TipConfig_t623 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m3554 (TipController_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TipController::DidShowTip(System.String)
extern "C" bool TipController_DidShowTip_m3555 (TipController_t651 * __this, String_t* ___tipID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern "C" bool TipController_MaybeShowTip_m3556 (TipController_t651 * __this, TipConfig_t623 * ___tipConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
