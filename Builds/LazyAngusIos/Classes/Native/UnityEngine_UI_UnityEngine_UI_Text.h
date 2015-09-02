#pragma once
#include <stdint.h>
// UnityEngine.UI.FontData
struct FontData_t930;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t966;
// UnityEngine.Material
struct Material_t526;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Text
struct  Text_t502  : public MaskableGraphic_t952
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t930 * ___m_FontData_23;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_24;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t966 * ___m_TextCache_25;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t966 * ___m_TextCacheForLayout_26;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_28;
};
struct Text_t502_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t526 * ___s_DefaultText_27;
};
