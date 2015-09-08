#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusElementButton
struct RealAngusElementButton_t640;
// RealAngusItemDesc
struct RealAngusItemDesc_t647;
// RealAngusElementButton/ButtonHandler
struct ButtonHandler_t646;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void RealAngusElementButton::.ctor()
extern "C" void RealAngusElementButton__ctor_m3497 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RealAngusItemDesc RealAngusElementButton::get_raid()
extern "C" RealAngusItemDesc_t647 * RealAngusElementButton_get_raid_m3498 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::set_raid(RealAngusItemDesc)
extern "C" void RealAngusElementButton_set_raid_m3499 (RealAngusElementButton_t640 * __this, RealAngusItemDesc_t647 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::Awake()
extern "C" void RealAngusElementButton_Awake_m3500 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::Start()
extern "C" void RealAngusElementButton_Start_m3501 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::Update()
extern "C" void RealAngusElementButton_Update_m3502 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::UpdateSelectionState()
extern "C" void RealAngusElementButton_UpdateSelectionState_m3503 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::SetClickHandler(RealAngusElementButton/ButtonHandler)
extern "C" void RealAngusElementButton_SetClickHandler_m3504 (RealAngusElementButton_t640 * __this, ButtonHandler_t646 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::SetTransitionCompleteHandler(RealAngusElementButton/ButtonHandler)
extern "C" void RealAngusElementButton_SetTransitionCompleteHandler_m3505 (RealAngusElementButton_t640 * __this, ButtonHandler_t646 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::Configure(RealAngusItemDesc)
extern "C" void RealAngusElementButton_Configure_m3506 (RealAngusElementButton_t640 * __this, RealAngusItemDesc_t647 * ___raid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::UpdateState()
extern "C" void RealAngusElementButton_UpdateState_m3507 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::ViewImage()
extern "C" void RealAngusElementButton_ViewImage_m3508 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::OnFirstDisplayed()
extern "C" void RealAngusElementButton_OnFirstDisplayed_m3509 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::SetSelected(System.Boolean,System.Boolean)
extern "C" void RealAngusElementButton_SetSelected_m3510 (RealAngusElementButton_t640 * __this, bool ___selected, bool ___skipTransition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RealAngusElementButton::IsSelected()
extern "C" bool RealAngusElementButton_IsSelected_m3511 (RealAngusElementButton_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::SetSelectedTransform(UnityEngine.Vector2,System.Single,System.Single)
extern "C" void RealAngusElementButton_SetSelectedTransform_m3512 (RealAngusElementButton_t640 * __this, Vector2_t110  ___position, float ___rotation, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton::SetHomeTransform(UnityEngine.Vector2,System.Single)
extern "C" void RealAngusElementButton_SetHomeTransform_m3513 (RealAngusElementButton_t640 * __this, Vector2_t110  ___position, float ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
