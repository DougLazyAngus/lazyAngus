#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TipController
struct TipController_t560;
// TipConfig
struct TipConfig_t433;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m2977 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Awake()
extern "C" void TipController_Awake_m2978 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::Start()
extern "C" void TipController_Start_m2979 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m2980 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::RegisterForEvents()
extern "C" void TipController_RegisterForEvents_m2981 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::UnregisterForEvents()
extern "C" void TipController_UnregisterForEvents_m2982 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m2983 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m2984 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m2985 (TipController_t560 * __this, TipConfig_t433 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern "C" Object_t * TipController_PlayTipWithPause_m2986 (TipController_t560 * __this, TipConfig_t433 * ___tipConfig, float ___tipPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m2987 (TipController_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern "C" bool TipController_MaybeShowTip_m2988 (TipController_t560 * __this, TipConfig_t433 * ___tipConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
