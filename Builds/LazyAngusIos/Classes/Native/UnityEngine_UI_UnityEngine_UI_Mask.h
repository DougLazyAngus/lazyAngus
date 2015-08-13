#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t523;
// UnityEngine.UI.Graphic
struct Graphic_t922;
// UnityEngine.RectTransform
struct RectTransform_t543;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct  Mask_t1010  : public UIBehaviour_t848
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t523 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t922 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t543 * ___m_RectTransform_5;
};
