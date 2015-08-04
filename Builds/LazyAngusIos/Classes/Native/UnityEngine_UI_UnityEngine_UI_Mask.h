#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t481;
// UnityEngine.UI.Graphic
struct Graphic_t861;
// UnityEngine.RectTransform
struct RectTransform_t502;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct  Mask_t952  : public UIBehaviour_t787
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t481 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t861 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t502 * ___m_RectTransform_5;
};
