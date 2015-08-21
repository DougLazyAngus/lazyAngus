#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Toggle
struct Toggle_t982;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t981;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t843;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C" void Toggle__ctor_m5499 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C" ToggleGroup_t981 * Toggle_get_group_m5500 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C" void Toggle_set_group_m5501 (Toggle_t982 * __this, ToggleGroup_t981 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Toggle_Rebuild_m5502 (Toggle_t982 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C" void Toggle_OnEnable_m5503 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C" void Toggle_OnDisable_m5504 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C" void Toggle_SetToggleGroup_m5505 (Toggle_t982 * __this, ToggleGroup_t981 * ___newGroup, bool ___setMemberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C" bool Toggle_get_isOn_m5506 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C" void Toggle_set_isOn_m5507 (Toggle_t982 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C" void Toggle_Set_m5508 (Toggle_t982 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C" void Toggle_Set_m5509 (Toggle_t982 * __this, bool ___value, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C" void Toggle_PlayEffect_m5510 (Toggle_t982 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C" void Toggle_Start_m5511 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C" void Toggle_InternalToggle_m5512 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Toggle_OnPointerClick_m5513 (Toggle_t982 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Toggle_OnSubmit_m5514 (Toggle_t982 * __this, BaseEventData_t843 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Toggle_UnityEngine_UI_ICanvasElement_IsDestroyed_m5515 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t406 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m5516 (Toggle_t982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
