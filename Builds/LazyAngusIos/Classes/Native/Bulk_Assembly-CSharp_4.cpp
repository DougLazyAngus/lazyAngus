#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// RealAngusSelectedButtonParent
#include "AssemblyU2DCSharp_RealAngusSelectedButtonParent.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// RealAngusSelectedButtonParent
#include "AssemblyU2DCSharp_RealAngusSelectedButtonParentMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// InOutTransitioner
#include "AssemblyU2DCSharp_InOutTransitioner.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// InOutTransitioner
#include "AssemblyU2DCSharp_InOutTransitionerMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
struct Component_t776;
struct Image_t503;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t776;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m4156_gshared (Component_t776 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m4156(__this, method) (( Object_t * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t503_m4477(__this, method) (( Image_t503 * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)

// System.Array
#include "mscorlib_System_Array.h"

// System.Void RealAngusSelectedButtonParent::.ctor()
extern "C" void RealAngusSelectedButtonParent__ctor_m3529 (RealAngusSelectedButtonParent_t639 * __this, const MethodInfo* method)
{
	{
		__this->___selectedBackgroundAlpha_4 = (0.4f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Awake()
extern const MethodInfo* Component_GetComponent_TisImage_t503_m4477_MethodInfo_var;
extern "C" void RealAngusSelectedButtonParent_Awake_m3530 (RealAngusSelectedButtonParent_t639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisImage_t503_m4477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484242);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t503 * L_0 = Component_GetComponent_TisImage_t503_m4477(__this, /*hidden argument*/Component_GetComponent_TisImage_t503_m4477_MethodInfo_var);
		__this->___image_3 = L_0;
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Start()
extern "C" void RealAngusSelectedButtonParent_Start_m3531 (RealAngusSelectedButtonParent_t639 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Update()
extern "C" void RealAngusSelectedButtonParent_Update_m3532 (RealAngusSelectedButtonParent_t639 * __this, const MethodInfo* method)
{
	{
		RealAngusSelectedButtonParent_MaybeMakeTransitioner_m3536(__this, /*hidden argument*/NULL);
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_2);
		NullCheck(L_0);
		bool L_1 = InOutTransitioner_IsTransitioning_m3108(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		InOutTransitioner_t575 * L_2 = (__this->___transitioner_2);
		NullCheck(L_2);
		float L_3 = InOutTransitioner_GetFractionIn_m3109(L_2, /*hidden argument*/NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4116(L_4, 0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		RealAngusSelectedButtonParent_UpdateSelectionState_m3533(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::UpdateSelectionState()
extern "C" void RealAngusSelectedButtonParent_UpdateSelectionState_m3533 (RealAngusSelectedButtonParent_t639 * __this, const MethodInfo* method)
{
	{
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_2);
		NullCheck(L_0);
		InOutTransitioner_UpdateTransitionFraction_m3106(L_0, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_UpdateImage_m3534(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::UpdateImage()
extern "C" void RealAngusSelectedButtonParent_UpdateImage_m3534 (RealAngusSelectedButtonParent_t639 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_2);
		NullCheck(L_0);
		float L_1 = InOutTransitioner_GetFractionIn_m3109(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Image_t503 * L_2 = (__this->___image_3);
		float L_3 = (__this->___selectedBackgroundAlpha_4);
		float L_4 = V_0;
		Color_t325  L_5 = {0};
		Color__ctor_m4478(&L_5, (0.0f), (0.0f), (0.0f), ((float)((float)L_3*(float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_2);
		Graphic_set_color_m4362(L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::StartVisibilityTransition(System.Boolean)
extern "C" void RealAngusSelectedButtonParent_StartVisibilityTransition_m3535 (RealAngusSelectedButtonParent_t639 * __this, bool ___visible, const MethodInfo* method)
{
	{
		RealAngusSelectedButtonParent_MaybeMakeTransitioner_m3536(__this, /*hidden argument*/NULL);
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_2);
		bool L_1 = ___visible;
		NullCheck(L_0);
		InOutTransitioner_Transition_m3107(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___visible;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_t352 * L_3 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m4116(L_3, 1, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_UpdateImage_m3534(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::MaybeMakeTransitioner()
extern TypeInfo* InOutTransitioner_t575_il2cpp_TypeInfo_var;
extern "C" void RealAngusSelectedButtonParent_MaybeMakeTransitioner_m3536 (RealAngusSelectedButtonParent_t639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InOutTransitioner_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	{
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_2);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		InOutTransitioner_t575 * L_1 = (InOutTransitioner_t575 *)il2cpp_codegen_object_new (InOutTransitioner_t575_il2cpp_TypeInfo_var);
		InOutTransitioner__ctor_m3102(L_1, (0.6f), /*hidden argument*/NULL);
		__this->___transitioner_2 = L_1;
	}

IL_001b:
	{
		return;
	}
}
// RealAngusTextWidget
#include "AssemblyU2DCSharp_RealAngusTextWidget.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusTextWidget
#include "AssemblyU2DCSharp_RealAngusTextWidgetMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDesc.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDescMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
struct Component_t776;
struct RectTransform_t545;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t545_m4364(__this, method) (( RectTransform_t545 * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)


// System.Void RealAngusTextWidget::.ctor()
extern "C" void RealAngusTextWidget__ctor_m3537 (RealAngusTextWidget_t638 * __this, const MethodInfo* method)
{
	{
		__this->___offscreenRotation_5 = (20.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::Awake()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var;
extern "C" void RealAngusTextWidget_Awake_m3538 (RealAngusTextWidget_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t545 * L_0 = Component_GetComponent_TisRectTransform_t545_m4364(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var);
		__this->___rectTransform_7 = L_0;
		RealAngusTextWidget_MaybeMakeTransitioner_m3544(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::Start()
extern "C" void RealAngusTextWidget_Start_m3539 (RealAngusTextWidget_t638 * __this, const MethodInfo* method)
{
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3544(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::Update()
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern "C" void RealAngusTextWidget_Update_m3540 (RealAngusTextWidget_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3544(__this, /*hidden argument*/NULL);
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_8);
		NullCheck(L_0);
		bool L_1 = InOutTransitioner_IsTransitioning_m3108(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		InOutTransitioner_t575 * L_2 = (__this->___transitioner_8);
		NullCheck(L_2);
		InOutTransitioner_UpdateTransitionFraction_m3106(L_2, /*hidden argument*/NULL);
		InOutTransitioner_t575 * L_3 = (__this->___transitioner_8);
		NullCheck(L_3);
		float L_4 = InOutTransitioner_GetFractionIn_m3109(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = V_0;
		Vector3_t538  L_6 = (__this->___offscreenPosition_4);
		Vector2_t110  L_7 = Vector2_op_Implicit_m4377(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		float L_8 = (__this->___offscreenRotation_5);
		Vector3_t538  L_9 = (__this->___onscreenPosition_3);
		Vector2_t110  L_10 = Vector2_op_Implicit_m4377(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		float L_11 = (__this->___onscreenRotation_6);
		Transform_t406 * L_12 = Component_get_transform_m4196(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		Utilities_LerpTransform_m3777(NULL /*static, unused*/, L_5, L_7, L_8, (1.0f), L_10, L_11, (1.0f), L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::ConfigureLayout(System.Single,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern const MethodInfo* Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var;
extern "C" void RealAngusTextWidget_ConfigureLayout_m3541 (RealAngusTextWidget_t638 * __this, float ___width, float ___height, Vector2_t110  ___onscreenPosition, Vector2_t110  ___offscreenPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3544(__this, /*hidden argument*/NULL);
		RectTransform_t545 * L_0 = Component_GetComponent_TisRectTransform_t545_m4364(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var);
		__this->___rectTransform_7 = L_0;
		Vector2_t110  L_1 = ___onscreenPosition;
		Vector3_t538  L_2 = Vector2_op_Implicit_m4368(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___onscreenPosition_3 = L_2;
		Vector2_t110  L_3 = ___offscreenPosition;
		Vector3_t538  L_4 = Vector2_op_Implicit_m4368(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___offscreenPosition_4 = L_4;
		RectTransform_t545 * L_5 = (__this->___rectTransform_7);
		float L_6 = ___width;
		float L_7 = ___height;
		Vector2_t110  L_8 = {0};
		Vector2__ctor_m4367(&L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_sizeDelta_m4369(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::TransitionIn(RealAngusItemDesc)
extern "C" void RealAngusTextWidget_TransitionIn_m3542 (RealAngusTextWidget_t638 * __this, RealAngusItemDesc_t647 * ___raid, const MethodInfo* method)
{
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3544(__this, /*hidden argument*/NULL);
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_8);
		NullCheck(L_0);
		InOutTransitioner_Transition_m3107(L_0, 1, /*hidden argument*/NULL);
		Text_t502 * L_1 = (__this->___mainText_2);
		RealAngusItemDesc_t647 * L_2 = ___raid;
		NullCheck(L_2);
		String_t* L_3 = RealAngusItemDesc_get_text_m3517(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		return;
	}
}
// System.Void RealAngusTextWidget::TransitionOut()
extern "C" void RealAngusTextWidget_TransitionOut_m3543 (RealAngusTextWidget_t638 * __this, const MethodInfo* method)
{
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3544(__this, /*hidden argument*/NULL);
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_8);
		NullCheck(L_0);
		InOutTransitioner_Transition_m3107(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::MaybeMakeTransitioner()
extern TypeInfo* InOutTransitioner_t575_il2cpp_TypeInfo_var;
extern "C" void RealAngusTextWidget_MaybeMakeTransitioner_m3544 (RealAngusTextWidget_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InOutTransitioner_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	{
		InOutTransitioner_t575 * L_0 = (__this->___transitioner_8);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		InOutTransitioner_t575 * L_1 = (InOutTransitioner_t575 *)il2cpp_codegen_object_new (InOutTransitioner_t575_il2cpp_TypeInfo_var);
		InOutTransitioner__ctor_m3102(L_1, (0.5f), /*hidden argument*/NULL);
		__this->___transitioner_8 = L_1;
	}

IL_001b:
	{
		return;
	}
}
// RestartGameHandler
#include "AssemblyU2DCSharp_RestartGameHandler.h"
#ifndef _MSC_VER
#else
#endif
// RestartGameHandler
#include "AssemblyU2DCSharp_RestartGameHandlerMethodDeclarations.h"

// GameController
#include "AssemblyU2DCSharp_GameController.h"
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"


// System.Void RestartGameHandler::.ctor()
extern "C" void RestartGameHandler__ctor_m3545 (RestartGameHandler_t648 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::RestartGame()
extern "C" void RestartGameHandler_RestartGame_m3546 (RestartGameHandler_t648 * __this, const MethodInfo* method)
{
	{
		GameController_t557 * L_0 = GameController_get_instance_m2975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameController_RestartGame_m2983(L_0, /*hidden argument*/NULL);
		return;
	}
}
// SFXButton
#include "AssemblyU2DCSharp_SFXButton.h"
#ifndef _MSC_VER
#else
#endif
// SFXButton
#include "AssemblyU2DCSharp_SFXButtonMethodDeclarations.h"

// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandl.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandlMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
struct Resources_t805;
struct Sprite_t512;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t805;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m4342_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m4342(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4342_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t512_m4341(__this /* static, unused */, p0, method) (( Sprite_t512 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4342_gshared)(__this /* static, unused */, p0, method)


// System.Void SFXButton::.ctor()
extern "C" void SFXButton__ctor_m3547 (SFXButton_t649 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t512_m4341_MethodInfo_var;
extern "C" void SFXButton_Awake_m3548 (SFXButton_t649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t512_m4341_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1159;
		String_t* L_0 = V_0;
		Sprite_t512 * L_1 = Resources_Load_TisSprite_t512_m4341(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t512_m4341_MethodInfo_var);
		__this->___soundOnSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1160;
		String_t* L_2 = V_0;
		Sprite_t512 * L_3 = Resources_Load_TisSprite_t512_m4341(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t512_m4341_MethodInfo_var);
		__this->___soundOffSprite_4 = L_3;
		return;
	}
}
// System.Void SFXButton::Start()
extern "C" void SFXButton_Start_m3549 (SFXButton_t649 * __this, const MethodInfo* method)
{
	{
		SFXButton_RegisterForEvents_m3551(__this, /*hidden argument*/NULL);
		SFXButton_UpdateButtonImage_m3554(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::OnDestroy()
extern "C" void SFXButton_OnDestroy_m3550 (SFXButton_t649 * __this, const MethodInfo* method)
{
	{
		SFXButton_UnregisterForEvents_m3552(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::RegisterForEvents()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3553_MethodInfo_var;
extern "C" void SFXButton_RegisterForEvents_m3551 (SFXButton_t649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		SFXButton_OnSoundMuteChanged_m3553_MethodInfo_var = il2cpp_codegen_method_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___registeredForEvents_2 = 1;
		SoundController_t670 * L_1 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3553_MethodInfo_var };
		SoundMuteChangedEventHandler_t668 * L_3 = (SoundMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3660(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3669(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UnregisterForEvents()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3553_MethodInfo_var;
extern "C" void SFXButton_UnregisterForEvents_m3552 (SFXButton_t649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		SFXButton_OnSoundMuteChanged_m3553_MethodInfo_var = il2cpp_codegen_method_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		SoundController_t670 * L_1 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3553_MethodInfo_var };
		SoundMuteChangedEventHandler_t668 * L_3 = (SoundMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3660(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3670(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXButton::OnSoundMuteChanged()
extern "C" void SFXButton_OnSoundMuteChanged_m3553 (SFXButton_t649 * __this, const MethodInfo* method)
{
	{
		SFXButton_UpdateButtonImage_m3554(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UpdateButtonImage()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern "C" void SFXButton_UpdateButtonImage_m3554 (SFXButton_t649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t670 * L_0 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3673(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t503 * L_2 = (__this->___buttonImage_5);
		Sprite_t512 * L_3 = (__this->___soundOffSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m4330(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t503 * L_4 = (__this->___buttonImage_5);
		Sprite_t512 * L_5 = (__this->___soundOnSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m4330(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"
#ifndef _MSC_VER
#else
#endif
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXTypeMethodDeclarations.h"



// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayer.h"
#ifndef _MSC_VER
#else
#endif
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayerMethodDeclarations.h"

#include "Assembly-CSharp_ArrayTypes.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
struct GameObject_t352;
struct AudioSource_t614;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m4017_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m4017(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4017_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t614_m4157(__this, method) (( AudioSource_t614 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4017_gshared)(__this, method)


// System.Void SFXPlayer::.ctor()
extern TypeInfo* SFXTypeU5BU5D_t652_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer__ctor_m3555 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXTypeU5BU5D_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(577);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXTypeU5BU5D_t652* L_0 = ((SFXTypeU5BU5D_t652*)SZArrayNew(SFXTypeU5BU5D_t652_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 1)) = (int32_t)1;
		__this->___deadMouseIds_4 = L_0;
		SFXTypeU5BU5D_t652* L_1 = ((SFXTypeU5BU5D_t652*)SZArrayNew(SFXTypeU5BU5D_t652_il2cpp_TypeInfo_var, 3));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 0)) = (int32_t)3;
		SFXTypeU5BU5D_t652* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 1)) = (int32_t)4;
		SFXTypeU5BU5D_t652* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, 2)) = (int32_t)5;
		__this->___slapIds_5 = L_3;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// SFXPlayer SFXPlayer::get_instance()
extern TypeInfo* SFXPlayer_t653_il2cpp_TypeInfo_var;
extern "C" SFXPlayer_t653 * SFXPlayer_get_instance_m3556 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(579);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t653 * L_0 = ((SFXPlayer_t653_StaticFields*)SFXPlayer_t653_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SFXPlayer::set_instance(SFXPlayer)
extern TypeInfo* SFXPlayer_t653_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_set_instance_m3557 (Object_t * __this /* static, unused */, SFXPlayer_t653 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(579);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t653 * L_0 = ___value;
		((SFXPlayer_t653_StaticFields*)SFXPlayer_t653_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void SFXPlayer::Awake()
extern "C" void SFXPlayer_Awake_m3558 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_set_instance_m3557(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSources_m3559(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSources()
extern TypeInfo* AudioSourceU5BU5D_t651_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_LoadAudioSources_m3559 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSourceU5BU5D_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(580);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___audioSources_2 = ((AudioSourceU5BU5D_t651*)SZArrayNew(AudioSourceU5BU5D_t651_il2cpp_TypeInfo_var, ((int32_t)10)));
		SFXPlayer_LoadAudioSource_m3560(__this, 0, (String_t*) &_stringLiteral1089, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 1, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 2, (String_t*) &_stringLiteral1161, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 3, (String_t*) &_stringLiteral1162, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 4, (String_t*) &_stringLiteral1163, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 5, (String_t*) &_stringLiteral1164, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 6, (String_t*) &_stringLiteral1165, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 7, (String_t*) &_stringLiteral1166, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, 8, (String_t*) &_stringLiteral1167, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3560(__this, ((int32_t)9), (String_t*) &_stringLiteral1168, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSource(SFXPlayer/SFXType,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* AudioClip_t395_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t614_m4157_MethodInfo_var;
extern "C" void SFXPlayer_LoadAudioSource_m3560 (SFXPlayer_t653 * __this, int32_t ___type, String_t* ___resourceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		AudioClip_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(581);
		GameObject_AddComponent_TisAudioSource_t614_m4157_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t614 * V_0 = {0};
	AudioClip_t395 * V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_t614 * L_1 = GameObject_AddComponent_TisAudioSource_t614_m4157(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t614_m4157_MethodInfo_var);
		V_0 = L_1;
		String_t* L_2 = ___resourceName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1169, L_2, /*hidden argument*/NULL);
		Object_t718 * L_4 = Resources_Load_m3942(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = ((AudioClip_t395 *)IsInst(L_4, AudioClip_t395_il2cpp_TypeInfo_var));
		AudioSource_t614 * L_5 = V_0;
		AudioClip_t395 * L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_clip_m4159(L_5, L_6, /*hidden argument*/NULL);
		AudioSourceU5BU5D_t651* L_7 = (__this->___audioSources_2);
		int32_t L_8 = ___type;
		AudioSource_t614 * L_9 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ArrayElementTypeCheck (L_7, L_9);
		*((AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_7, L_8)) = (AudioSource_t614 *)L_9;
		return;
	}
}
// System.Void SFXPlayer::Play(SFXPlayer/SFXType)
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_Play_m3561 (SFXPlayer_t653 * __this, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t670 * L_0 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3673(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		AudioSourceU5BU5D_t651* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Play_m4447((*(AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayDelayed(SFXPlayer/SFXType,System.Single)
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_PlayDelayed_m3562 (SFXPlayer_t653 * __this, int32_t ___type, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t670 * L_0 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3673(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		AudioSourceU5BU5D_t651* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		float L_5 = ___delay;
		NullCheck((*(AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_PlayDelayed_m4479((*(AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_2, L_4)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayRandom(SFXPlayer/SFXType[],System.Single)
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_PlayRandom_m3563 (SFXPlayer_t653 * __this, SFXTypeU5BU5D_t652* ___types, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AudioSource_t614 * V_1 = {0};
	{
		SoundController_t670 * L_0 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3673(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		SFXTypeU5BU5D_t652* L_2 = ___types;
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m3925(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		AudioSourceU5BU5D_t651* L_4 = (__this->___audioSources_2);
		SFXTypeU5BU5D_t652* L_5 = ___types;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)));
		int32_t L_8 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7));
		V_1 = (*(AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_4, L_8));
		AudioSource_t614 * L_9 = V_1;
		float L_10 = ___delay;
		NullCheck(L_9);
		AudioSource_PlayDelayed_m4479(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::Start()
extern "C" void SFXPlayer_Start_m3564 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_RegisterForEvents_m3566(__this, /*hidden argument*/NULL);
		SFXPlayer_OnSoundMuteChanged_m3568(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::OnDestroy()
extern "C" void SFXPlayer_OnDestroy_m3565 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_UnregisterForEvents_m3567(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::RegisterForEvents()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3568_MethodInfo_var;
extern "C" void SFXPlayer_RegisterForEvents_m3566 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		SFXPlayer_OnSoundMuteChanged_m3568_MethodInfo_var = il2cpp_codegen_method_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_3);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___registeredForEvents_3 = 1;
		SoundController_t670 * L_1 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3568_MethodInfo_var };
		SoundMuteChangedEventHandler_t668 * L_3 = (SoundMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3660(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3669(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::UnregisterForEvents()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3568_MethodInfo_var;
extern "C" void SFXPlayer_UnregisterForEvents_m3567 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		SFXPlayer_OnSoundMuteChanged_m3568_MethodInfo_var = il2cpp_codegen_method_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_3);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		SoundController_t670 * L_1 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3568_MethodInfo_var };
		SoundMuteChangedEventHandler_t668 * L_3 = (SoundMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3660(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3670(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXPlayer::OnSoundMuteChanged()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_OnSoundMuteChanged_m3568 (SFXPlayer_t653 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		SoundController_t670 * L_0 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3673(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_0016:
	{
		AudioSourceU5BU5D_t651* L_2 = (__this->___audioSources_2);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Stop_m4160((*(AudioSource_t614 **)(AudioSource_t614 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)10))))
		{
			goto IL_0016;
		}
	}

IL_002f:
	{
		return;
	}
}
// SFXSilencer
#include "AssemblyU2DCSharp_SFXSilencer.h"
#ifndef _MSC_VER
#else
#endif
// SFXSilencer
#include "AssemblyU2DCSharp_SFXSilencerMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void SFXSilencer::.ctor()
extern "C" void SFXSilencer__ctor_m3569 (SFXSilencer_t654 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::Start()
extern "C" void SFXSilencer_Start_m3570 (SFXSilencer_t654 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_RegisterForEvents_m3572(__this, /*hidden argument*/NULL);
		SFXSilencer_UpdateSoundsActive_m3575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::OnDestroy()
extern "C" void SFXSilencer_OnDestroy_m3571 (SFXSilencer_t654 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UnregisterForEvents_m3573(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::RegisterForEvents()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3574_MethodInfo_var;
extern "C" void SFXSilencer_RegisterForEvents_m3572 (SFXSilencer_t654 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		SFXSilencer_OnSoundMuteChanged_m3574_MethodInfo_var = il2cpp_codegen_method_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___registeredForEvents_2 = 1;
		SoundController_t670 * L_1 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3574_MethodInfo_var };
		SoundMuteChangedEventHandler_t668 * L_3 = (SoundMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3660(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3669(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UnregisterForEvents()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3574_MethodInfo_var;
extern "C" void SFXSilencer_UnregisterForEvents_m3573 (SFXSilencer_t654 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		SFXSilencer_OnSoundMuteChanged_m3574_MethodInfo_var = il2cpp_codegen_method_info_from_index(597);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		SoundController_t670 * L_1 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3574_MethodInfo_var };
		SoundMuteChangedEventHandler_t668 * L_3 = (SoundMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3660(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3670(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXSilencer::OnSoundMuteChanged()
extern "C" void SFXSilencer_OnSoundMuteChanged_m3574 (SFXSilencer_t654 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UpdateSoundsActive_m3575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UpdateSoundsActive()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern "C" void SFXSilencer_UpdateSoundsActive_m3575 (SFXSilencer_t654 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t352 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		Transform_t406 * L_0 = Component_get_transform_m4196(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_t406 * L_2 = Transform_GetChild_m4480(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3916(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t352 * L_4 = V_1;
		SoundController_t670 * L_5 = ((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		bool L_6 = SoundController_get_sfxMuted_m3673(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4116(L_4, ((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		Transform_t406 * L_9 = Component_get_transform_m4196(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m4481(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// ScoreController/<DestroyMouse>c__Iterator19
#include "AssemblyU2DCSharp_ScoreController_U3CDestroyMouseU3Ec__Itera.h"
#ifndef _MSC_VER
#else
#endif
// ScoreController/<DestroyMouse>c__Iterator19
#include "AssemblyU2DCSharp_ScoreController_U3CDestroyMouseU3Ec__IteraMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void ScoreController/<DestroyMouse>c__Iterator19::.ctor()
extern "C" void U3CDestroyMouseU3Ec__Iterator19__ctor_m3576 (U3CDestroyMouseU3Ec__Iterator19_t655 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object ScoreController/<DestroyMouse>c__Iterator19::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDestroyMouseU3Ec__Iterator19_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3577 (U3CDestroyMouseU3Ec__Iterator19_t655 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object ScoreController/<DestroyMouse>c__Iterator19::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDestroyMouseU3Ec__Iterator19_System_Collections_IEnumerator_get_Current_m3578 (U3CDestroyMouseU3Ec__Iterator19_t655 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean ScoreController/<DestroyMouse>c__Iterator19::MoveNext()
extern TypeInfo* WaitForSeconds_t800_il2cpp_TypeInfo_var;
extern "C" bool U3CDestroyMouseU3Ec__Iterator19_MoveNext_m3579 (U3CDestroyMouseU3Ec__Iterator19_t655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_1);
		V_0 = L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_004f;
	}

IL_0021:
	{
		WaitForSeconds_t800 * L_2 = (WaitForSeconds_t800 *)il2cpp_codegen_object_new (WaitForSeconds_t800_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4299(L_2, (0.001f), /*hidden argument*/NULL);
		__this->___U24current_2 = L_2;
		__this->___U24PC_1 = 1;
		goto IL_0051;
	}

IL_003d:
	{
		GameObject_t352 * L_3 = (__this->___deadMouseGameObject_0);
		Object_Destroy_m4060(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___U24PC_1 = (-1);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}
	// Dead block : IL_0053: ldloc.1
}
// System.Void ScoreController/<DestroyMouse>c__Iterator19::Dispose()
extern "C" void U3CDestroyMouseU3Ec__Iterator19_Dispose_m3580 (U3CDestroyMouseU3Ec__Iterator19_t655 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void ScoreController/<DestroyMouse>c__Iterator19::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDestroyMouseU3Ec__Iterator19_Reset_m3581 (U3CDestroyMouseU3Ec__Iterator19_t655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// ScoreController
#include "AssemblyU2DCSharp_ScoreController.h"
#ifndef _MSC_VER
#else
#endif
// ScoreController
#include "AssemblyU2DCSharp_ScoreControllerMethodDeclarations.h"

// DeadMouseRelay
#include "AssemblyU2DCSharp_DeadMouseRelay.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMove.h"
// DeadMouseRelay/MouseKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MouseKillEventHandler.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouse.h"
// MouseTypeDesc
#include "AssemblyU2DCSharp_MouseTypeDesc.h"
// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimation.h"
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinner.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfig.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// BounceLerp
#include "AssemblyU2DCSharp_BounceLerp.h"
// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandler.h"
// DeadMouseRelay
#include "AssemblyU2DCSharp_DeadMouseRelayMethodDeclarations.h"
// DeadMouseRelay/MouseKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MouseKillEventHandlerMethodDeclarations.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfigMethodDeclarations.h"
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouseMethodDeclarations.h"
// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimationMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinnerMethodDeclarations.h"
// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandlerMethodDeclarations.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct GameObject_t352;
struct DeadMouse_t528;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m4189_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m4189(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
// !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
#define GameObject_GetComponent_TisDeadMouse_t528_m4482(__this, method) (( DeadMouse_t528 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)
struct Object_t718;
struct GameObject_t352;
struct Object_t718;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m4423_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m4423(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m4423_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t352_m4422(__this /* static, unused */, p0, method) (( GameObject_t352 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Object_Instantiate_TisObject_t_m4423_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t352;
struct FlyingAnimation_t549;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
// !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
#define GameObject_GetComponent_TisFlyingAnimation_t549_m4424(__this, method) (( FlyingAnimation_t549 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)
struct GameObject_t352;
struct AcceleratingSpinner_t491;
// Declaration !!0 UnityEngine.GameObject::GetComponent<AcceleratingSpinner>()
// !!0 UnityEngine.GameObject::GetComponent<AcceleratingSpinner>()
#define GameObject_GetComponent_TisAcceleratingSpinner_t491_m4442(__this, method) (( AcceleratingSpinner_t491 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)
struct Component_t776;
struct DistortForEffect_t537;
// Declaration !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
// !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
#define Component_GetComponent_TisDistortForEffect_t537_m4327(__this, method) (( DistortForEffect_t537 * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)


// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3582 (ScoreController_t656 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3583 (ScoreController_t656 * __this, const MethodInfo* method)
{
	{
		ScoreController_RegisterForEvents_m3585(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3584 (ScoreController_t656 * __this, const MethodInfo* method)
{
	{
		ScoreController_UnregisterForEvents_m3586(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t531_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3587_MethodInfo_var;
extern "C" void ScoreController_RegisterForEvents_m3585 (ScoreController_t656 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ScoreController_OnMouseKill_m3587_MethodInfo_var = il2cpp_codegen_method_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___registeredForEvents_2 = 1;
		DeadMouseRelay_t532 * L_1 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3587_MethodInfo_var };
		MouseKillEventHandler_t531 * L_3 = (MouseKillEventHandler_t531 *)il2cpp_codegen_object_new (MouseKillEventHandler_t531_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2865(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MouseKill_m2872(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t531_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3587_MethodInfo_var;
extern "C" void ScoreController_UnregisterForEvents_m3586 (ScoreController_t656 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ScoreController_OnMouseKill_m3587_MethodInfo_var = il2cpp_codegen_method_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DeadMouseRelay_t532 * L_1 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3587_MethodInfo_var };
		MouseKillEventHandler_t531 * L_3 = (MouseKillEventHandler_t531 *)il2cpp_codegen_object_new (MouseKillEventHandler_t531_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2865(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MouseKill_m2873(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3587 (ScoreController_t656 * __this, MouseMove_t530 * ___killedMouse, const MethodInfo* method)
{
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayerStats_IncrementScore_m3418(L_0, 1, /*hidden argument*/NULL);
		MouseMove_t530 * L_1 = ___killedMouse;
		ScoreController_MakeDeadMouseAnimation_m3591(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::OnDeadMouseDone(UnityEngine.GameObject)
extern "C" void ScoreController_OnDeadMouseDone_m3588 (ScoreController_t656 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3032(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		GamePhaseState_t564 * L_2 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3032(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)6))))
		{
			goto IL_0027;
		}
	}

IL_0020:
	{
		GameObject_t352 * L_4 = ___deadMouseGameObject;
		ScoreController_MakeFlyingAnimation_m3590(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		GameObject_t352 * L_5 = ___deadMouseGameObject;
		Object_t * L_6 = ScoreController_DestroyMouse_m3589(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3879(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ScoreController::DestroyMouse(UnityEngine.GameObject)
extern TypeInfo* U3CDestroyMouseU3Ec__Iterator19_t655_il2cpp_TypeInfo_var;
extern "C" Object_t * ScoreController_DestroyMouse_m3589 (ScoreController_t656 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDestroyMouseU3Ec__Iterator19_t655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(582);
		s_Il2CppMethodIntialized = true;
	}
	U3CDestroyMouseU3Ec__Iterator19_t655 * V_0 = {0};
	{
		U3CDestroyMouseU3Ec__Iterator19_t655 * L_0 = (U3CDestroyMouseU3Ec__Iterator19_t655 *)il2cpp_codegen_object_new (U3CDestroyMouseU3Ec__Iterator19_t655_il2cpp_TypeInfo_var);
		U3CDestroyMouseU3Ec__Iterator19__ctor_m3576(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDestroyMouseU3Ec__Iterator19_t655 * L_1 = V_0;
		GameObject_t352 * L_2 = ___deadMouseGameObject;
		NullCheck(L_1);
		L_1->___deadMouseGameObject_0 = L_2;
		U3CDestroyMouseU3Ec__Iterator19_t655 * L_3 = V_0;
		GameObject_t352 * L_4 = ___deadMouseGameObject;
		NullCheck(L_3);
		L_3->___U3CU24U3EdeadMouseGameObject_3 = L_4;
		U3CDestroyMouseU3Ec__Iterator19_t655 * L_5 = V_0;
		return L_5;
	}
}
// System.Void ScoreController::MakeFlyingAnimation(UnityEngine.GameObject)
extern TypeInfo* MouseConfig_t602_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t528_m4482_MethodInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4422_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t549_m4424_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAcceleratingSpinner_t491_m4442_MethodInfo_var;
extern "C" void ScoreController_MakeFlyingAnimation_m3590 (ScoreController_t656 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		GameObject_GetComponent_TisDeadMouse_t528_m4482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484247);
		Object_Instantiate_TisGameObject_t352_m4422_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t549_m4424_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		GameObject_GetComponent_TisAcceleratingSpinner_t491_m4442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484215);
		s_Il2CppMethodIntialized = true;
	}
	DeadMouse_t528 * V_0 = {0};
	MouseTypeDesc_t611 * V_1 = {0};
	GameObject_t352 * V_2 = {0};
	FlyingAnimation_t549 * V_3 = {0};
	float V_4 = 0.0f;
	AcceleratingSpinner_t491 * V_5 = {0};
	Vector3_t538  V_6 = {0};
	Vector3_t538  V_7 = {0};
	Vector3_t538  V_8 = {0};
	{
		GameObject_t352 * L_0 = ___deadMouseGameObject;
		NullCheck(L_0);
		DeadMouse_t528 * L_1 = GameObject_GetComponent_TisDeadMouse_t528_m4482(L_0, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t528_m4482_MethodInfo_var);
		V_0 = L_1;
		MouseConfig_t602 * L_2 = ((MouseConfig_t602_StaticFields*)MouseConfig_t602_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		DeadMouse_t528 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = DeadMouse_get_mouseType_m2857(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MouseTypeDesc_t611 * L_5 = MouseConfig_GetMouseTypeDesc_m3191(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		GameObject_t352 * L_6 = (__this->___scoreEffectPrototype_4);
		GameObject_t352 * L_7 = Object_Instantiate_TisGameObject_t352_m4422(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4422_MethodInfo_var);
		V_2 = L_7;
		GameObject_t352 * L_8 = V_2;
		NullCheck(L_8);
		FlyingAnimation_t549 * L_9 = GameObject_GetComponent_TisFlyingAnimation_t549_m4424(L_8, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t549_m4424_MethodInfo_var);
		V_3 = L_9;
		FlyingAnimation_t549 * L_10 = V_3;
		DeadMouse_t528 * L_11 = V_0;
		NullCheck(L_11);
		Transform_t406 * L_12 = Component_get_transform_m4196(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t538  L_13 = Transform_get_position_m4201(L_12, /*hidden argument*/NULL);
		GameObject_t352 * L_14 = (__this->___scoreDisplay_5);
		NullCheck(L_10);
		FlyingAnimation_Configure_m2954(L_10, L_13, L_14, /*hidden argument*/NULL);
		FlyingAnimation_t549 * L_15 = V_3;
		NullCheck(L_15);
		Image_t503 * L_16 = (L_15->___image_18);
		MouseTypeDesc_t611 * L_17 = V_1;
		NullCheck(L_17);
		Sprite_t512 * L_18 = (L_17->___deadMouseSprite_0);
		NullCheck(L_16);
		Image_set_sprite_m4330(L_16, L_18, /*hidden argument*/NULL);
		FlyingAnimation_t549 * L_19 = V_3;
		NullCheck(L_19);
		Transform_t406 * L_20 = Component_get_transform_m4196(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t538  L_21 = Transform_get_localScale_m4204(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		float L_22 = ((&V_6)->___x_1);
		V_4 = L_22;
		float L_23 = V_4;
		MouseTypeDesc_t611 * L_24 = V_1;
		NullCheck(L_24);
		float L_25 = (L_24->___scale_5);
		V_4 = ((float)((float)L_23*(float)L_25));
		FlyingAnimation_t549 * L_26 = V_3;
		NullCheck(L_26);
		Transform_t406 * L_27 = Component_get_transform_m4196(L_26, /*hidden argument*/NULL);
		float L_28 = V_4;
		float L_29 = V_4;
		Vector3_t538  L_30 = {0};
		Vector3__ctor_m4194(&L_30, L_28, L_29, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localScale_m4205(L_27, L_30, /*hidden argument*/NULL);
		FlyingAnimation_t549 * L_31 = V_3;
		NullCheck(L_31);
		FlyingAnimation_Run_m2956(L_31, /*hidden argument*/NULL);
		GameObject_t352 * L_32 = V_2;
		NullCheck(L_32);
		AcceleratingSpinner_t491 * L_33 = GameObject_GetComponent_TisAcceleratingSpinner_t491_m4442(L_32, /*hidden argument*/GameObject_GetComponent_TisAcceleratingSpinner_t491_m4442_MethodInfo_var);
		V_5 = L_33;
		AcceleratingSpinner_t491 * L_34 = V_5;
		DeadMouse_t528 * L_35 = V_0;
		NullCheck(L_35);
		Transform_t406 * L_36 = Component_get_transform_m4196(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t538  L_37 = Transform_get_eulerAngles_m4445(L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		float L_38 = ((&V_7)->___z_3);
		Camera_t548 * L_39 = Camera_get_main_m4167(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_t406 * L_40 = Component_get_transform_m4196(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t538  L_41 = Transform_get_eulerAngles_m4445(L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		float L_42 = ((&V_8)->___z_3);
		NullCheck(L_34);
		AcceleratingSpinner_Configure_m2713(L_34, ((float)((float)L_38-(float)L_42)), /*hidden argument*/NULL);
		bool L_43 = (__this->___scoreEffectClockwise_6);
		if (!L_43)
		{
			goto IL_0100;
		}
	}
	{
		AcceleratingSpinner_t491 * L_44 = V_5;
		AcceleratingSpinner_t491 * L_45 = L_44;
		NullCheck(L_45);
		float L_46 = (L_45->___initialAngleVelocityDeg_2);
		NullCheck(L_45);
		L_45->___initialAngleVelocityDeg_2 = ((float)((float)L_46*(float)(-1.0f)));
		AcceleratingSpinner_t491 * L_47 = V_5;
		AcceleratingSpinner_t491 * L_48 = L_47;
		NullCheck(L_48);
		float L_49 = (L_48->___angleAccelerationDeg_3);
		NullCheck(L_48);
		L_48->___angleAccelerationDeg_3 = ((float)((float)L_49*(float)(-1.0f)));
	}

IL_0100:
	{
		bool L_50 = (__this->___scoreEffectClockwise_6);
		__this->___scoreEffectClockwise_6 = ((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void ScoreController::MakeDeadMouseAnimation(MouseMove)
extern TypeInfo* DistortFinishedHandler_t536_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4422_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t528_m4482_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t537_m4327_MethodInfo_var;
extern const MethodInfo* ScoreController_OnDeadMouseDone_m3588_MethodInfo_var;
extern "C" void ScoreController_MakeDeadMouseAnimation_m3591 (ScoreController_t656 * __this, MouseMove_t530 * ___killedMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DistortFinishedHandler_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		Object_Instantiate_TisGameObject_t352_m4422_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisDeadMouse_t528_m4482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484247);
		Component_GetComponent_TisDistortForEffect_t537_m4327_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		ScoreController_OnDeadMouseDone_m3588_MethodInfo_var = il2cpp_codegen_method_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	DeadMouse_t528 * V_1 = {0};
	DistortForEffect_t537 * V_2 = {0};
	{
		GameObject_t352 * L_0 = (__this->___deadMousePrototype_3);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4422(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4422_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		DeadMouse_t528 * L_3 = GameObject_GetComponent_TisDeadMouse_t528_m4482(L_2, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t528_m4482_MethodInfo_var);
		V_1 = L_3;
		DeadMouse_t528 * L_4 = V_1;
		MouseMove_t530 * L_5 = ___killedMouse;
		NullCheck(L_4);
		DeadMouse_Configure_m2860(L_4, L_5, /*hidden argument*/NULL);
		DeadMouse_t528 * L_6 = V_1;
		NullCheck(L_6);
		DistortForEffect_t537 * L_7 = Component_GetComponent_TisDistortForEffect_t537_m4327(L_6, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t537_m4327_MethodInfo_var);
		V_2 = L_7;
		DistortForEffect_t537 * L_8 = V_2;
		NullCheck(L_8);
		((BounceLerp_t515 *)L_8)->___totalPeriods_3 = (1.0f);
		DistortForEffect_t537 * L_9 = V_2;
		NullCheck(L_9);
		((BounceLerp_t515 *)L_9)->___secondsPerPeriod_2 = (0.3f);
		DistortForEffect_t537 * L_10 = V_2;
		IntPtr_t L_11 = { (void*)ScoreController_OnDeadMouseDone_m3588_MethodInfo_var };
		DistortFinishedHandler_t536 * L_12 = (DistortFinishedHandler_t536 *)il2cpp_codegen_object_new (DistortFinishedHandler_t536_il2cpp_TypeInfo_var);
		DistortFinishedHandler__ctor_m2897(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		DistortForEffect_SetDistortFinishedHandler_m2907(L_10, L_12, /*hidden argument*/NULL);
		DistortForEffect_t537 * L_13 = V_2;
		NullCheck(L_13);
		DistortForEffect_Distort_m2908(L_13, /*hidden argument*/NULL);
		return;
	}
}
// ScoreDisplay
#include "AssemblyU2DCSharp_ScoreDisplay.h"
#ifndef _MSC_VER
#else
#endif
// ScoreDisplay
#include "AssemblyU2DCSharp_ScoreDisplayMethodDeclarations.h"

// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandler.h"
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandlerMethodDeclarations.h"
struct GameObject_t352;
struct Text_t502;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t502_m4372(__this, method) (( Text_t502 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)
struct GameObject_t352;
struct DistortForEffect_t537;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t537_m4483(__this, method) (( DistortForEffect_t537 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)


// System.Void ScoreDisplay::.ctor()
extern "C" void ScoreDisplay__ctor_m3592 (ScoreDisplay_t657 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::Awake()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t537_m4327_MethodInfo_var;
extern "C" void ScoreDisplay_Awake_m3593 (ScoreDisplay_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t537_m4327_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	{
		DistortForEffect_t537 * L_0 = Component_GetComponent_TisDistortForEffect_t537_m4327(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t537_m4327_MethodInfo_var);
		__this->___distortForEffect_3 = L_0;
		return;
	}
}
// System.Void ScoreDisplay::Start()
extern const MethodInfo* GameObject_GetComponent_TisText_t502_m4372_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t537_m4483_MethodInfo_var;
extern "C" void ScoreDisplay_Start_m3594 (ScoreDisplay_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisText_t502_m4372_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		GameObject_GetComponent_TisDistortForEffect_t537_m4483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484249);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t502 * L_1 = GameObject_GetComponent_TisText_t502_m4372(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t502_m4372_MethodInfo_var);
		__this->___scoreText_2 = L_1;
		GameObject_t352 * L_2 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		DistortForEffect_t537 * L_3 = GameObject_GetComponent_TisDistortForEffect_t537_m4483(L_2, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t537_m4483_MethodInfo_var);
		__this->___distortForEffect_3 = L_3;
		ScoreDisplay_RegisterForEvents_m3595(__this, /*hidden argument*/NULL);
		ScoreDisplay_SetScoreText_m3597(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::RegisterForEvents()
extern TypeInfo* ScoreChangedEventHandler_t630_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreDisplay_DynamicUpdateScoreText_m3598_MethodInfo_var;
extern "C" void ScoreDisplay_RegisterForEvents_m3595 (ScoreDisplay_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		ScoreDisplay_DynamicUpdateScoreText_m3598_MethodInfo_var = il2cpp_codegen_method_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)ScoreDisplay_DynamicUpdateScoreText_m3598_MethodInfo_var };
		ScoreChangedEventHandler_t630 * L_2 = (ScoreChangedEventHandler_t630 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t630_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3387(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayerStats_add_ScoreChanged_m3400(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_4 = 1;
		return;
	}
}
// System.Void ScoreDisplay::OnDestroy()
extern TypeInfo* ScoreChangedEventHandler_t630_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreDisplay_DynamicUpdateScoreText_m3598_MethodInfo_var;
extern "C" void ScoreDisplay_OnDestroy_m3596 (ScoreDisplay_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		ScoreDisplay_DynamicUpdateScoreText_m3598_MethodInfo_var = il2cpp_codegen_method_info_from_index(602);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		PlayerStats_t516 * L_1 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ScoreDisplay_DynamicUpdateScoreText_m3598_MethodInfo_var };
		ScoreChangedEventHandler_t630 * L_3 = (ScoreChangedEventHandler_t630 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t630_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3387(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_ScoreChanged_m3401(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean ScoreDisplay::SetScoreText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool ScoreDisplay_SetScoreText_m3597 (ScoreDisplay_t657 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t516 * L_1 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_get_gameScore_m3406(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Text_t502 * L_7 = (__this->___scoreText_2);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		bool L_9 = String_op_Inequality_m415(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Text_t502 * L_10 = (__this->___scoreText_2);
		String_t* L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		return 1;
	}

IL_003e:
	{
		return 0;
	}
}
// System.Void ScoreDisplay::DynamicUpdateScoreText()
extern "C" void ScoreDisplay_DynamicUpdateScoreText_m3598 (ScoreDisplay_t657 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ScoreDisplay_SetScoreText_m3597(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		DistortForEffect_t537 * L_1 = (__this->___distortForEffect_3);
		NullCheck(L_1);
		DistortForEffect_DistortWithDelay_m2906(L_1, (1.3f), /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// SecretUI
#include "AssemblyU2DCSharp_SecretUI.h"
#ifndef _MSC_VER
#else
#endif
// SecretUI
#include "AssemblyU2DCSharp_SecretUIMethodDeclarations.h"

// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"
// UnityEngine.UI.InputField/SubmitEvent
#include "UnityEngine_UI_UnityEngine_UI_InputField_SubmitEvent.h"
// UnityEngine.Events.UnityAction`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputFieldMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"
// UnityEngine.Events.UnityEvent`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_genMethodDeclarations.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"


// System.Void SecretUI::.ctor()
extern "C" void SecretUI__ctor_m3599 (SecretUI_t658 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::LaunchShareWidget(System.Int32,System.Boolean)
extern "C" {void DEFAULT_CALL LaunchShareWidget(int32_t, int32_t);}
extern "C" void SecretUI_LaunchShareWidget_m3600 (Object_t * __this /* static, unused */, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)LaunchShareWidget;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'LaunchShareWidget'"));
		}
	}

	// Marshaling of parameter '___score' to native representation

	// Marshaling of parameter '___isHighScore' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___score, ___isHighScore);

	// Marshaling cleanup of parameter '___score' native representation

	// Marshaling cleanup of parameter '___isHighScore' native representation

}
// System.Void SecretUI::ResetPreferences()
extern TypeInfo* PersistentStorage_t625_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ResetPreferences_m3601 (SecretUI_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t625 * L_0 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		PersistentStorage_ClearAll_m3354(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Awake()
extern TypeInfo* SecretUI_t658_il2cpp_TypeInfo_var;
extern "C" void SecretUI_Awake_m3602 (SecretUI_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SecretUI_t658_StaticFields*)SecretUI_t658_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void SecretUI::UpdateInputs()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void SecretUI_UpdateInputs_m3603 (SecretUI_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		DebugConfig_t533 * L_0 = DebugConfig_get_instance_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = DebugConfig_GetDebugFlags_m2886(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InputField_t659 * L_2 = (__this->___debugFlagsInputField_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m409(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputField_set_text_m4484(L_2, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Start()
extern TypeInfo* UnityAction_1_t815_il2cpp_TypeInfo_var;
extern const MethodInfo* SecretUI_U3CStartU3Em__4B_m3609_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m4486_MethodInfo_var;
extern const MethodInfo* UnityEvent_1_AddListener_m4487_MethodInfo_var;
extern const MethodInfo* SecretUI_U3CStartU3Em__4C_m3610_MethodInfo_var;
extern "C" void SecretUI_Start_m3604 (SecretUI_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_1_t815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		SecretUI_U3CStartU3Em__4B_m3609_MethodInfo_var = il2cpp_codegen_method_info_from_index(603);
		UnityAction_1__ctor_m4486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484252);
		UnityEvent_1_AddListener_m4487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484253);
		SecretUI_U3CStartU3Em__4C_m3610_MethodInfo_var = il2cpp_codegen_method_info_from_index(606);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t659 * L_0 = (__this->___levelInputField_4);
		NullCheck(L_0);
		SubmitEvent_t814 * L_1 = InputField_get_onEndEdit_m4485(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)SecretUI_U3CStartU3Em__4B_m3609_MethodInfo_var };
		UnityAction_1_t815 * L_3 = (UnityAction_1_t815 *)il2cpp_codegen_object_new (UnityAction_1_t815_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4486(L_3, __this, L_2, /*hidden argument*/UnityAction_1__ctor_m4486_MethodInfo_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m4487(L_1, L_3, /*hidden argument*/UnityEvent_1_AddListener_m4487_MethodInfo_var);
		InputField_t659 * L_4 = (__this->___debugFlagsInputField_5);
		NullCheck(L_4);
		SubmitEvent_t814 * L_5 = InputField_get_onEndEdit_m4485(L_4, /*hidden argument*/NULL);
		IntPtr_t L_6 = { (void*)SecretUI_U3CStartU3Em__4C_m3610_MethodInfo_var };
		UnityAction_1_t815 * L_7 = (UnityAction_1_t815 *)il2cpp_codegen_object_new (UnityAction_1_t815_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4486(L_7, __this, L_6, /*hidden argument*/UnityAction_1__ctor_m4486_MethodInfo_var);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m4487(L_5, L_7, /*hidden argument*/UnityEvent_1_AddListener_m4487_MethodInfo_var);
		return;
	}
}
// System.Void SecretUI::ApplyLevelInput()
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ApplyLevelInput_m3605 (SecretUI_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		InputField_t659 * L_0 = (__this->___levelInputField_4);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m4488(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		int32_t L_2 = Utilities_ParseIntWithDefault_m3773(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		GameLevelState_t560 * L_4 = GameLevelState_get_instance_m3008(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameLevelState_SetGameLevel_m3012(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void SecretUI::ToggleVisibility()
extern "C" void SecretUI_ToggleVisibility_m3606 (SecretUI_t658 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___inputs_3);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m4489(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___inputs_3);
		NullCheck(L_2);
		GameObject_SetActive_m4116(L_2, 0, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_0021:
	{
		GameObject_t352 * L_3 = (__this->___inputs_3);
		NullCheck(L_3);
		GameObject_SetActive_m4116(L_3, 1, /*hidden argument*/NULL);
		SecretUI_UpdateInputs_m3603(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void SecretUI::ApplyDebugFlags()
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ApplyDebugFlags_m3607 (SecretUI_t658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		InputField_t659 * L_0 = (__this->___debugFlagsInputField_5);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m4488(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		int32_t L_2 = Utilities_ParseIntWithDefault_m3773(NULL /*static, unused*/, L_1, (-1), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		DebugConfig_t533 * L_4 = DebugConfig_get_instance_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		DebugConfig_SetDebugFlags_m2885(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void SecretUI::DebugShowSharing()
extern "C" void SecretUI_DebugShowSharing_m3608 (SecretUI_t658 * __this, const MethodInfo* method)
{
	{
		SecretUI_LaunchShareWidget_m3600(NULL /*static, unused*/, ((int32_t)100), 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::<Start>m__4B(System.String)
extern "C" void SecretUI_U3CStartU3Em__4B_m3609 (SecretUI_t658 * __this, String_t* p0, const MethodInfo* method)
{
	{
		SecretUI_ApplyLevelInput_m3605(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::<Start>m__4C(System.String)
extern "C" void SecretUI_U3CStartU3Em__4C_m3610 (SecretUI_t658 * __this, String_t* p0, const MethodInfo* method)
{
	{
		SecretUI_ApplyDebugFlags_m3607(__this, /*hidden argument*/NULL);
		return;
	}
}
// SizeCamera/CameraConfiguredHandler
#include "AssemblyU2DCSharp_SizeCamera_CameraConfiguredHandler.h"
#ifndef _MSC_VER
#else
#endif
// SizeCamera/CameraConfiguredHandler
#include "AssemblyU2DCSharp_SizeCamera_CameraConfiguredHandlerMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void SizeCamera/CameraConfiguredHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CameraConfiguredHandler__ctor_m3611 (CameraConfiguredHandler_t660 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SizeCamera/CameraConfiguredHandler::Invoke()
extern "C" void CameraConfiguredHandler_Invoke_m3612 (CameraConfiguredHandler_t660 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraConfiguredHandler_Invoke_m3612((CameraConfiguredHandler_t660 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraConfiguredHandler_t660(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SizeCamera/CameraConfiguredHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CameraConfiguredHandler_BeginInvoke_m3613 (CameraConfiguredHandler_t660 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SizeCamera/CameraConfiguredHandler::EndInvoke(System.IAsyncResult)
extern "C" void CameraConfiguredHandler_EndInvoke_m3614 (CameraConfiguredHandler_t660 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// SizeCamera
#include "AssemblyU2DCSharp_SizeCamera.h"
#ifndef _MSC_VER
#else
#endif
// SizeCamera
#include "AssemblyU2DCSharp_SizeCameraMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCamera.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCameraMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
struct Component_t776;
struct Camera_t548;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t548_m4310(__this, method) (( Camera_t548 * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)
struct Component_t776;
struct ZoomCamera_t661;
// Declaration !!0 UnityEngine.Component::GetComponent<ZoomCamera>()
// !!0 UnityEngine.Component::GetComponent<ZoomCamera>()
#define Component_GetComponent_TisZoomCamera_t661_m4490(__this, method) (( ZoomCamera_t661 * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)


// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m3615 (SizeCamera_t519 * __this, const MethodInfo* method)
{
	{
		__this->___minWorldAspectRatio_2 = (1.33333337f);
		__this->___targetWorldHalfHeight_3 = (5.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::add_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern TypeInfo* CameraConfiguredHandler_t660_il2cpp_TypeInfo_var;
extern "C" void SizeCamera_add_CameraConfigured_m3616 (SizeCamera_t519 * __this, CameraConfiguredHandler_t660 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraConfiguredHandler_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraConfiguredHandler_t660 * L_0 = (__this->___CameraConfigured_11);
		CameraConfiguredHandler_t660 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CameraConfigured_11 = ((CameraConfiguredHandler_t660 *)Castclass(L_2, CameraConfiguredHandler_t660_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SizeCamera::remove_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern TypeInfo* CameraConfiguredHandler_t660_il2cpp_TypeInfo_var;
extern "C" void SizeCamera_remove_CameraConfigured_m3617 (SizeCamera_t519 * __this, CameraConfiguredHandler_t660 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraConfiguredHandler_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraConfiguredHandler_t660 * L_0 = (__this->___CameraConfigured_11);
		CameraConfiguredHandler_t660 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CameraConfigured_11 = ((CameraConfiguredHandler_t660 *)Castclass(L_2, CameraConfiguredHandler_t660_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Single SizeCamera::get_finalActualWorldHalfHeight()
extern "C" float SizeCamera_get_finalActualWorldHalfHeight_m3618 (SizeCamera_t519 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CfinalActualWorldHalfHeightU3Ek__BackingField_12);
		return L_0;
	}
}
// System.Void SizeCamera::set_finalActualWorldHalfHeight(System.Single)
extern "C" void SizeCamera_set_finalActualWorldHalfHeight_m3619 (SizeCamera_t519 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CfinalActualWorldHalfHeightU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void SizeCamera::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t548_m4310_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisZoomCamera_t661_m4490_MethodInfo_var;
extern "C" void SizeCamera_Awake_m3620 (SizeCamera_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t548_m4310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484115);
		Component_GetComponent_TisZoomCamera_t661_m4490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484255);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___finalAspectRatio_10 = (0.0f);
		Camera_t548 * L_0 = Component_GetComponent_TisCamera_t548_m4310(__this, /*hidden argument*/Component_GetComponent_TisCamera_t548_m4310_MethodInfo_var);
		__this->___myCamera_7 = L_0;
		ZoomCamera_t661 * L_1 = Component_GetComponent_TisZoomCamera_t661_m4490(__this, /*hidden argument*/Component_GetComponent_TisZoomCamera_t661_m4490_MethodInfo_var);
		__this->___myZoomCamera_8 = L_1;
		return;
	}
}
// System.Void SizeCamera::UpdateCameraSize()
extern "C" void SizeCamera_UpdateCameraSize_m3621 (SizeCamera_t519 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_t661 * L_0 = (__this->___myZoomCamera_8);
		bool L_1 = Object_op_Implicit_m4259(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ZoomCamera_t661 * L_2 = (__this->___myZoomCamera_8);
		NullCheck(L_2);
		ZoomCamera_UpdateCameraSize_m3795(L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		Camera_t548 * L_3 = (__this->___myCamera_7);
		float L_4 = SizeCamera_get_finalActualWorldHalfHeight_m3618(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Camera_set_orthographicSize_m4491(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Single SizeCamera::GetAspectRatio()
extern "C" float SizeCamera_GetAspectRatio_m3622 (SizeCamera_t519 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___finalAspectRatio_10);
		return L_0;
	}
}
// System.Void SizeCamera::Configure()
extern "C" void SizeCamera_Configure_m3623 (SizeCamera_t519 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t538  V_8 = {0};
	Rect_t709  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3836(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___screenPixelsTopCameraSlop_4);
		float L_2 = (__this->___screenPixelsBottomToIgnore_5);
		V_0 = ((float)((float)(((float)L_0))-(float)((float)((float)L_1+(float)L_2))));
		int32_t L_3 = Screen_get_height_m3836(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___screenPixelsBottomToIgnore_5);
		V_1 = ((float)((float)(((float)L_3))-(float)L_4));
		int32_t L_5 = Screen_get_width_m3821(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = V_0;
		__this->___finalAspectRatio_10 = ((float)((float)(((float)L_5))/(float)L_6));
		float L_7 = (__this->___targetWorldHalfHeight_3);
		V_2 = L_7;
		float L_8 = (__this->___finalAspectRatio_10);
		float L_9 = V_2;
		V_3 = ((float)((float)L_8*(float)L_9));
		float L_10 = (__this->___finalAspectRatio_10);
		float L_11 = (__this->___minWorldAspectRatio_2);
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0069;
		}
	}
	{
		float L_12 = (__this->___minWorldAspectRatio_2);
		float L_13 = (__this->___targetWorldHalfHeight_3);
		V_3 = ((float)((float)L_12*(float)L_13));
		float L_14 = V_3;
		float L_15 = (__this->___finalAspectRatio_10);
		V_2 = ((float)((float)L_14/(float)L_15));
	}

IL_0069:
	{
		float L_16 = V_2;
		float L_17 = V_0;
		V_4 = ((float)((float)L_16/(float)L_17));
		float L_18 = V_1;
		float L_19 = V_4;
		V_5 = ((float)((float)L_18*(float)L_19));
		float L_20 = V_5;
		SizeCamera_set_finalActualWorldHalfHeight_m3619(__this, L_20, /*hidden argument*/NULL);
		SizeCamera_UpdateCameraSize_m3621(__this, /*hidden argument*/NULL);
		float L_21 = V_5;
		float L_22 = V_2;
		V_6 = ((float)((float)((float)((float)(2.0f)*(float)L_21))-(float)((float)((float)(2.0f)*(float)L_22))));
		float L_23 = V_6;
		V_7 = ((float)((float)L_23/(float)(2.0f)));
		float L_24 = V_7;
		Vector3__ctor_m4194((&V_8), (0.0f), L_24, (0.0f), /*hidden argument*/NULL);
		Camera_t548 * L_25 = (__this->___myCamera_7);
		NullCheck(L_25);
		Transform_t406 * L_26 = Component_get_transform_m4196(L_25, /*hidden argument*/NULL);
		Vector3_t538  L_27 = V_8;
		NullCheck(L_26);
		Vector3_t538  L_28 = Transform_TransformVector_m4459(L_26, L_27, /*hidden argument*/NULL);
		V_8 = L_28;
		Camera_t548 * L_29 = (__this->___myCamera_7);
		NullCheck(L_29);
		Transform_t406 * L_30 = Component_get_transform_m4196(L_29, /*hidden argument*/NULL);
		Camera_t548 * L_31 = (__this->___myCamera_7);
		NullCheck(L_31);
		Transform_t406 * L_32 = Component_get_transform_m4196(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t538  L_33 = Transform_get_localPosition_m4358(L_32, /*hidden argument*/NULL);
		Vector3_t538  L_34 = V_8;
		Vector3_t538  L_35 = Vector3_op_Addition_m4359(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m4360(L_30, L_35, /*hidden argument*/NULL);
		Camera_t548 * L_36 = (__this->___myCamera_7);
		NullCheck(L_36);
		Rect_t709  L_37 = Camera_get_rect_m4311(L_36, /*hidden argument*/NULL);
		V_9 = L_37;
		float L_38 = (__this->___screenPixelsBottomToIgnore_5);
		int32_t L_39 = Screen_get_height_m3836(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_10 = ((float)((float)L_38/(float)(((float)L_39))));
		float L_40 = V_1;
		int32_t L_41 = Screen_get_height_m3836(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_11 = ((float)((float)L_40/(float)(((float)L_41))));
		Rect_set_width_m4312((&V_9), (1.0f), /*hidden argument*/NULL);
		float L_42 = V_11;
		Rect_set_height_m4313((&V_9), L_42, /*hidden argument*/NULL);
		Rect_set_x_m4314((&V_9), (0.0f), /*hidden argument*/NULL);
		float L_43 = V_10;
		Rect_set_y_m4315((&V_9), L_43, /*hidden argument*/NULL);
		Camera_t548 * L_44 = (__this->___myCamera_7);
		Rect_t709  L_45 = V_9;
		NullCheck(L_44);
		Camera_set_rect_m4316(L_44, L_45, /*hidden argument*/NULL);
		CameraConfiguredHandler_t660 * L_46 = (__this->___CameraConfigured_11);
		if (!L_46)
		{
			goto IL_015f;
		}
	}
	{
		CameraConfiguredHandler_t660 * L_47 = (__this->___CameraConfigured_11);
		NullCheck(L_47);
		VirtActionInvoker0::Invoke(12 /* System.Void SizeCamera/CameraConfiguredHandler::Invoke() */, L_47);
	}

IL_015f:
	{
		return;
	}
}
// SlowByCollision
#include "AssemblyU2DCSharp_SlowByCollision.h"
#ifndef _MSC_VER
#else
#endif
// SlowByCollision
#include "AssemblyU2DCSharp_SlowByCollisionMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMoveMethodDeclarations.h"
struct Utilities_t688;
struct MouseMove_t530;
struct GameObject_t352;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t688;
struct Object_t;
struct GameObject_t352;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m4437_gshared (Object_t * __this /* static, unused */, GameObject_t352 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m4437(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4437_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t530_m4436(__this /* static, unused */, p0, method) (( MouseMove_t530 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4437_gshared)(__this /* static, unused */, p0, method)


// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m3624 (SlowByCollision_t662 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3625 (SlowByCollision_t662 * __this, Collider2D_t714 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t714 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3627(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3626 (SlowByCollision_t662 * __this, Collider2D_t714 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t714 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3627(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t530_m4436_MethodInfo_var;
extern "C" void SlowByCollision_HandleCollision_m3627 (SlowByCollision_t662 * __this, Collider2D_t714 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		Utilities_FindComponentInAncestor_TisMouseMove_t530_m4436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484209);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t530 * V_0 = {0};
	{
		Collider2D_t714 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4379(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Collider2D_t714 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3916(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		MouseMove_t530 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t530_m4436(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t530_m4436_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t530 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m3196(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		MouseMove_t530 * L_8 = V_0;
		NullCheck(L_8);
		MouseMove_OnFartedUpon_m3208(L_8, /*hidden argument*/NULL);
		return;
	}
}
// SocialHelper/<DebugScoreAndAchievement>c__Iterator1A
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<DebugScoreAndAchievement>c__Iterator1A
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3MethodDeclarations.h"

// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"


// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::.ctor()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator1A__ctor_m3628 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator1A_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3629 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator1A_System_Collections_IEnumerator_get_Current_m3630 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::MoveNext()
extern TypeInfo* WaitForSeconds_t800_il2cpp_TypeInfo_var;
extern "C" bool U3CDebugScoreAndAchievementU3Ec__Iterator1A_MoveNext_m3631 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0063;
	}

IL_0021:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1174, /*hidden argument*/NULL);
		WaitForSeconds_t800 * L_2 = (WaitForSeconds_t800 *)il2cpp_codegen_object_new (WaitForSeconds_t800_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4299(L_2, (2.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0065;
	}

IL_0047:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1175, /*hidden argument*/NULL);
		SocialHelper_CustomReportAchievement_m3639(NULL /*static, unused*/, (String_t*) &_stringLiteral1176, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0063:
	{
		return 0;
	}

IL_0065:
	{
		return 1;
	}
	// Dead block : IL_0067: ldloc.1
}
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::Dispose()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator1A_Dispose_m3632 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator1A_Reset_m3633 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// SocialHelper/<Authenticate>c__AnonStorey1D
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStor.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<Authenticate>c__AnonStorey1D
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStorMethodDeclarations.h"

// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"


// System.Void SocialHelper/<Authenticate>c__AnonStorey1D::.ctor()
extern "C" void U3CAuthenticateU3Ec__AnonStorey1D__ctor_m3634 (U3CAuthenticateU3Ec__AnonStorey1D_t664 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<Authenticate>c__AnonStorey1D::<>m__4D(System.Boolean)
extern TypeInfo* GameCenterPlatform_t816_il2cpp_TypeInfo_var;
extern "C" void U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__4D_m3635 (U3CAuthenticateU3Ec__AnonStorey1D_t664 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___success;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t816_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m4492(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Action_1_t277 * L_2 = (__this->___handler_0);
		bool L_3 = ___success;
		NullCheck(L_2);
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_2, L_3);
		return;
	}
}
// SocialHelper/<RecordAchievement>c__AnonStorey1E
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<RecordAchievement>c__AnonStorey1E
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__AnoMethodDeclarations.h"



// System.Void SocialHelper/<RecordAchievement>c__AnonStorey1E::.ctor()
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1E__ctor_m3636 (U3CRecordAchievementU3Ec__AnonStorey1E_t665 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<RecordAchievement>c__AnonStorey1E::<>m__4F(System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__4F_m3637 (U3CRecordAchievementU3Ec__AnonStorey1E_t665 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___achievementID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1177, L_0, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = ___success;
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1178, L_4, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelper.h"
#ifndef _MSC_VER
#else
#endif

// System.Int64
#include "mscorlib_System_Int64.h"
// System.Double
#include "mscorlib_System_Double.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"


// System.Void SocialHelper::.ctor()
extern "C" void SocialHelper__ctor_m3638 (SocialHelper_t666 * __this, const MethodInfo* method)
{
	{
		__this->___leaderboardID_2 = (String_t*) &_stringLiteral1170;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" {int32_t DEFAULT_CALL CustomReportAchievement(char*);}
extern "C" bool SocialHelper_CustomReportAchievement_m3639 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)CustomReportAchievement;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CustomReportAchievement'"));
		}
	}

	// Marshaling of parameter '___achievementID' to native representation
	char* ____achievementID_marshaled = { 0 };
	____achievementID_marshaled = il2cpp_codegen_marshal_string(___achievementID);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____achievementID_marshaled);

	// Marshaling cleanup of parameter '___achievementID' native representation
	il2cpp_codegen_marshal_free(____achievementID_marshaled);
	____achievementID_marshaled = NULL;

	return _return_value;
}
// System.Boolean SocialHelper::CustomClearAchivements()
extern "C" {int32_t DEFAULT_CALL CustomClearAchivements();}
extern "C" bool SocialHelper_CustomClearAchivements_m3640 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)CustomClearAchivements;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CustomClearAchivements'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void SocialHelper::Awake()
extern TypeInfo* SocialHelper_t666_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_Awake_m3641 (SocialHelper_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SocialHelper_t666_StaticFields*)SocialHelper_t666_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		int32_t L_0 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		__this->___socialHelperEnabled_4 = 1;
		goto IL_0024;
	}

IL_001d:
	{
		__this->___socialHelperEnabled_4 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void SocialHelper::Authenticate(System.Action`1<System.Boolean>)
extern TypeInfo* U3CAuthenticateU3Ec__AnonStorey1D_t664_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t810_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__4D_m3635_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4023_MethodInfo_var;
extern "C" void SocialHelper_Authenticate_m3642 (SocialHelper_t666 * __this, Action_1_t277 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAuthenticateU3Ec__AnonStorey1D_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		ILocalUser_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__4D_m3635_MethodInfo_var = il2cpp_codegen_method_info_from_index(608);
		Action_1__ctor_m4023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CAuthenticateU3Ec__AnonStorey1D_t664 * V_0 = {0};
	{
		U3CAuthenticateU3Ec__AnonStorey1D_t664 * L_0 = (U3CAuthenticateU3Ec__AnonStorey1D_t664 *)il2cpp_codegen_object_new (U3CAuthenticateU3Ec__AnonStorey1D_t664_il2cpp_TypeInfo_var);
		U3CAuthenticateU3Ec__AnonStorey1D__ctor_m3634(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAuthenticateU3Ec__AnonStorey1D_t664 * L_1 = V_0;
		Action_1_t277 * L_2 = ___handler;
		NullCheck(L_1);
		L_1->___handler_0 = L_2;
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m4371(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CAuthenticateU3Ec__AnonStorey1D_t664 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__4D_m3635_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4023(L_7, L_5, L_6, /*hidden argument*/Action_1__ctor_m4023_MethodInfo_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t277 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t810_il2cpp_TypeInfo_var, L_4, L_7);
		goto IL_003f;
	}

IL_0033:
	{
		U3CAuthenticateU3Ec__AnonStorey1D_t664 * L_8 = V_0;
		NullCheck(L_8);
		Action_1_t277 * L_9 = (L_8->___handler_0);
		NullCheck(L_9);
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_9, 0);
	}

IL_003f:
	{
		return;
	}
}
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern TypeInfo* U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663_il2cpp_TypeInfo_var;
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m3643 (SocialHelper_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * V_0 = {0};
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * L_0 = (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 *)il2cpp_codegen_object_new (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663_il2cpp_TypeInfo_var);
		U3CDebugScoreAndAchievementU3Ec__Iterator1A__ctor_m3628(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDebugScoreAndAchievementU3Ec__Iterator1A_t663 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m3644 (SocialHelper_t666 * __this, const MethodInfo* method)
{
	{
		SocialHelper_CustomClearAchivements_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ReportScore(System.Int32)
extern TypeInfo* ILocalUser_t810_il2cpp_TypeInfo_var;
extern TypeInfo* SocialHelper_t666_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CReportScoreU3Em__4E_m3650_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4023_MethodInfo_var;
extern "C" void SocialHelper_ReportScore_m3645 (SocialHelper_t666 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		SocialHelper_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CReportScoreU3Em__4E_m3650_MethodInfo_var = il2cpp_codegen_method_info_from_index(609);
		Action_1__ctor_m4023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B4_0 = {0};
	int64_t G_B4_1 = 0;
	String_t* G_B3_0 = {0};
	int64_t G_B3_1 = 0;
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/NULL);
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		Object_t * L_1 = Social_get_localUser_m4371(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t810_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_3 = ___score;
		String_t* L_4 = (__this->___leaderboardID_2);
		Action_1_t277 * L_5 = ((SocialHelper_t666_StaticFields*)SocialHelper_t666_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		G_B3_0 = L_4;
		G_B3_1 = (((int64_t)L_3));
		if (L_5)
		{
			G_B4_0 = L_4;
			G_B4_1 = (((int64_t)L_3));
			goto IL_0044;
		}
	}
	{
		IntPtr_t L_6 = { (void*)SocialHelper_U3CReportScoreU3Em__4E_m3650_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4023(L_7, NULL, L_6, /*hidden argument*/Action_1__ctor_m4023_MethodInfo_var);
		((SocialHelper_t666_StaticFields*)SocialHelper_t666_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_7;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		Action_1_t277 * L_8 = ((SocialHelper_t666_StaticFields*)SocialHelper_t666_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		Social_ReportScore_m4493(NULL /*static, unused*/, G_B4_1, G_B4_0, L_8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void SocialHelper::RecordAchievement(System.String)
extern TypeInfo* U3CRecordAchievementU3Ec__AnonStorey1E_t665_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t810_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__4F_m3637_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4023_MethodInfo_var;
extern "C" void SocialHelper_RecordAchievement_m3646 (SocialHelper_t666 * __this, String_t* ___achievementID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		ILocalUser_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__4F_m3637_MethodInfo_var = il2cpp_codegen_method_info_from_index(610);
		Action_1__ctor_m4023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CRecordAchievementU3Ec__AnonStorey1E_t665 * V_0 = {0};
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t665 * L_0 = (U3CRecordAchievementU3Ec__AnonStorey1E_t665 *)il2cpp_codegen_object_new (U3CRecordAchievementU3Ec__AnonStorey1E_t665_il2cpp_TypeInfo_var);
		U3CRecordAchievementU3Ec__AnonStorey1E__ctor_m3636(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRecordAchievementU3Ec__AnonStorey1E_t665 * L_1 = V_0;
		String_t* L_2 = ___achievementID;
		NullCheck(L_1);
		L_1->___achievementID_0 = L_2;
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1172, /*hidden argument*/NULL);
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m4371(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t810_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t665 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___achievementID_0);
		SocialHelper_CustomReportAchievement_m3639(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_004d:
	{
		U3CRecordAchievementU3Ec__AnonStorey1E_t665 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___achievementID_0);
		U3CRecordAchievementU3Ec__AnonStorey1E_t665 * L_11 = V_0;
		IntPtr_t L_12 = { (void*)U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__4F_m3637_MethodInfo_var };
		Action_1_t277 * L_13 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4023(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m4023_MethodInfo_var);
		Social_ReportProgress_m4494(NULL /*static, unused*/, L_10, (100.0), L_13, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m3647 (SocialHelper_t666 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		return L_0;
	}
}
// System.Void SocialHelper::ShowLeaderBoard()
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowLeaderBoardU3Em__50_m3651_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4023_MethodInfo_var;
extern "C" void SocialHelper_ShowLeaderBoard_m3648 (SocialHelper_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowLeaderBoardU3Em__50_m3651_MethodInfo_var = il2cpp_codegen_method_info_from_index(611);
		Action_1__ctor_m4023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IntPtr_t L_1 = { (void*)SocialHelper_U3CShowLeaderBoardU3Em__50_m3651_MethodInfo_var };
		Action_1_t277 * L_2 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4023(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m4023_MethodInfo_var);
		SocialHelper_Authenticate_m3642(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ShowAchievements()
extern TypeInfo* SocialHelper_t666_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowAchievementsU3Em__51_m3652_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4023_MethodInfo_var;
extern "C" void SocialHelper_ShowAchievements_m3649 (SocialHelper_t666 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowAchievementsU3Em__51_m3652_MethodInfo_var = il2cpp_codegen_method_info_from_index(612);
		Action_1__ctor_m4023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t666 * G_B4_0 = {0};
	SocialHelper_t666 * G_B3_0 = {0};
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Action_1_t277 * L_1 = ((SocialHelper_t666_StaticFields*)SocialHelper_t666_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B3_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		IntPtr_t L_2 = { (void*)SocialHelper_U3CShowAchievementsU3Em__51_m3652_MethodInfo_var };
		Action_1_t277 * L_3 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4023(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m4023_MethodInfo_var);
		((SocialHelper_t666_StaticFields*)SocialHelper_t666_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_3;
		G_B4_0 = G_B3_0;
	}

IL_0025:
	{
		Action_1_t277 * L_4 = ((SocialHelper_t666_StaticFields*)SocialHelper_t666_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B4_0);
		SocialHelper_Authenticate_m3642(G_B4_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ReportScore>m__4E(System.Boolean)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CReportScoreU3Em__4E_m3650 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___success;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ShowLeaderBoard>m__50(System.Boolean)
extern TypeInfo* GameCenterPlatform_t816_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__50_m3651 (SocialHelper_t666 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = (__this->___leaderboardID_2);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t816_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowLeaderboardUI_m4495(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void SocialHelper::<ShowAchievements>m__51(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__51_m3652 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	{
		Social_ShowAchievementsUI_m4496(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// SocialMediaButtons
#include "AssemblyU2DCSharp_SocialMediaButtons.h"
#ifndef _MSC_VER
#else
#endif
// SocialMediaButtons
#include "AssemblyU2DCSharp_SocialMediaButtonsMethodDeclarations.h"

// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharing.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharing.h"
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharingMethodDeclarations.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharingMethodDeclarations.h"


// System.Void SocialMediaButtons::.ctor()
extern "C" void SocialMediaButtons__ctor_m3653 (SocialMediaButtons_t667 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::LaunchShareWidget(System.Int32,System.Boolean)
extern "C" void SocialMediaButtons_LaunchShareWidget_m3654 (Object_t * __this /* static, unused */, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)LaunchShareWidget;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'LaunchShareWidget'"));
		}
	}

	// Marshaling of parameter '___score' to native representation

	// Marshaling of parameter '___isHighScore' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___score, ___isHighScore);

	// Marshaling cleanup of parameter '___score' native representation

	// Marshaling cleanup of parameter '___isHighScore' native representation

}
// System.Void SocialMediaButtons::Start()
extern "C" void SocialMediaButtons_Start_m3655 (SocialMediaButtons_t667 * __this, const MethodInfo* method)
{
	{
		SocialMediaButtons_UpdateButtonAvailability_m3656(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::UpdateButtonAvailability()
extern "C" void SocialMediaButtons_UpdateButtonAvailability_m3656 (SocialMediaButtons_t667 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_001b;
		}
	}
	{
		DebugConfig_t533 * L_1 = DebugConfig_get_instance_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = DebugConfig_IsDebugFlagSet_m2884(L_1, 1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}

IL_001b:
	{
		Button_t501 * L_3 = (__this->___fbButton_2);
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3916(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4116(L_4, 0, /*hidden argument*/NULL);
		Button_t501 * L_5 = (__this->___twitterButton_3);
		NullCheck(L_5);
		GameObject_t352 * L_6 = Component_get_gameObject_m3916(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m4116(L_6, 0, /*hidden argument*/NULL);
		Button_t501 * L_7 = (__this->___shareButton_4);
		NullCheck(L_7);
		GameObject_t352 * L_8 = Component_get_gameObject_m3916(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_m4116(L_8, 1, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0053:
	{
		Button_t501 * L_9 = (__this->___fbButton_2);
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3916(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m4116(L_10, 1, /*hidden argument*/NULL);
		Button_t501 * L_11 = (__this->___twitterButton_3);
		NullCheck(L_11);
		GameObject_t352 * L_12 = Component_get_gameObject_m3916(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m4116(L_12, 1, /*hidden argument*/NULL);
		Button_t501 * L_13 = (__this->___shareButton_4);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3916(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m4116(L_14, 0, /*hidden argument*/NULL);
	}

IL_0086:
	{
		return;
	}
}
// System.Void SocialMediaButtons::ShareInShareWidget()
extern "C" void SocialMediaButtons_ShareInShareWidget_m3657 (SocialMediaButtons_t667 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3427(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayerStats_t516 * L_2 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_get_gameScore_m3406(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		SocialMediaButtons_LaunchShareWidget_m3654(NULL /*static, unused*/, L_4, ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::ShareOnFB()
extern TypeInfo* FacebookSharing_t540_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_ShareOnFB_m3658 (SocialMediaButtons_t667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3427(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayerStats_t516 * L_2 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_get_gameScore_m3406(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		FacebookSharing_t540 * L_4 = ((FacebookSharing_t540_StaticFields*)FacebookSharing_t540_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_4);
		FacebookSharing_ShareScore_m2925(L_4, L_5, ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::ShareOnTwitter()
extern TypeInfo* TwitterSharing_t685_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_ShareOnTwitter_m3659 (SocialMediaButtons_t667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_get_gameScore_m3406(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TwitterSharing_t685 * L_2 = ((TwitterSharing_t685_StaticFields*)TwitterSharing_t685_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		TwitterSharing_ShareScore_m3746(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m3660 (SoundMuteChangedEventHandler_t668 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m3661 (SoundMuteChangedEventHandler_t668 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SoundMuteChangedEventHandler_Invoke_m3661((SoundMuteChangedEventHandler_t668 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t668(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m3662 (SoundMuteChangedEventHandler_t668 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m3663 (SoundMuteChangedEventHandler_t668 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandl.h"
#ifndef _MSC_VER
#else
#endif
// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandlMethodDeclarations.h"



// System.Void SoundController/MusicMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MusicMuteChangedEventHandler__ctor_m3664 (MusicMuteChangedEventHandler_t669 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/MusicMuteChangedEventHandler::Invoke()
extern "C" void MusicMuteChangedEventHandler_Invoke_m3665 (MusicMuteChangedEventHandler_t669 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MusicMuteChangedEventHandler_Invoke_m3665((MusicMuteChangedEventHandler_t669 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MusicMuteChangedEventHandler_t669(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/MusicMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MusicMuteChangedEventHandler_BeginInvoke_m3666 (MusicMuteChangedEventHandler_t669 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/MusicMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MusicMuteChangedEventHandler_EndInvoke_m3667 (MusicMuteChangedEventHandler_t669 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3668 (SoundController_t670 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_SoundMuteChanged_m3669 (SoundController_t670 * __this, SoundMuteChangedEventHandler_t668 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t668 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t668 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t668 *)Castclass(L_2, SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_SoundMuteChanged_m3670 (SoundController_t670 * __this, SoundMuteChangedEventHandler_t668 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t668 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t668 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t668 *)Castclass(L_2, SoundMuteChangedEventHandler_t668_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t669_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_MusicMuteChanged_m3671 (SoundController_t670 * __this, MusicMuteChangedEventHandler_t669 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t669 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t669 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t669 *)Castclass(L_2, MusicMuteChangedEventHandler_t669_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t669_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_MusicMuteChanged_m3672 (SoundController_t670 * __this, MusicMuteChangedEventHandler_t669 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t669 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t669 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t669 *)Castclass(L_2, MusicMuteChangedEventHandler_t669_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3673 (SoundController_t670 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsfxMutedU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3674 (SoundController_t670 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsfxMutedU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3675 (SoundController_t670 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmusicMutedU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3676 (SoundController_t670 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmusicMutedU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void SoundController::Awake()
extern TypeInfo* SoundController_t670_il2cpp_TypeInfo_var;
extern "C" void SoundController_Awake_m3677 (SoundController_t670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SoundController_t670_StaticFields*)SoundController_t670_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void SoundController::Start()
extern TypeInfo* PersistentStorage_t625_il2cpp_TypeInfo_var;
extern "C" void SoundController_Start_m3678 (SoundController_t670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t625 * L_0 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m3360(L_0, (String_t*) &_stringLiteral1179, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3674(__this, L_1, /*hidden argument*/NULL);
		PersistentStorage_t625 * L_2 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = PersistentStorage_GetBoolValue_m3360(L_2, (String_t*) &_stringLiteral1180, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3676(__this, L_3, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t668 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		SoundMuteChangedEventHandler_t668 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0042:
	{
		MusicMuteChangedEventHandler_t669 * L_6 = (__this->___MusicMuteChanged_6);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		MusicMuteChangedEventHandler_t669 * L_7 = (__this->___MusicMuteChanged_6);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_7);
	}

IL_0058:
	{
		return;
	}
}
// System.Void SoundController::ToggleSoundsMuted()
extern TypeInfo* PersistentStorage_t625_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleSoundsMuted_m3679 (SoundController_t670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_sfxMuted_m3673(__this, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3674(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		PersistentStorage_t625 * L_1 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_sfxMuted_m3673(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3359(L_1, (String_t*) &_stringLiteral1179, L_2, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t668 * L_3 = (__this->___SoundMuteChanged_5);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		SoundMuteChangedEventHandler_t668 * L_4 = (__this->___SoundMuteChanged_5);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::ToggleMusicMuted()
extern TypeInfo* PersistentStorage_t625_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleMusicMuted_m3680 (SoundController_t670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3675(__this, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3676(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		PersistentStorage_t625 * L_1 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_musicMuted_m3675(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3359(L_1, (String_t*) &_stringLiteral1180, L_2, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t669 * L_3 = (__this->___MusicMuteChanged_6);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MusicMuteChangedEventHandler_t669 * L_4 = (__this->___MusicMuteChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3681 (SoundController_t670 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SoundController_get_musicMuted_m3675(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		SoundController_set_musicMuted_m3676(__this, 1, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t669 * L_1 = (__this->___MusicMuteChanged_6);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		MusicMuteChangedEventHandler_t669 * L_2 = (__this->___MusicMuteChanged_6);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_2);
	}

IL_0028:
	{
		bool L_3 = SoundController_get_sfxMuted_m3673(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0050;
		}
	}
	{
		SoundController_set_sfxMuted_m3674(__this, 1, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t668 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		SoundMuteChangedEventHandler_t668 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0050:
	{
		return;
	}
}
// System.Void SoundController::UnsuppressSounds()
extern TypeInfo* PersistentStorage_t625_il2cpp_TypeInfo_var;
extern "C" void SoundController_UnsuppressSounds_m3682 (SoundController_t670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3675(__this, /*hidden argument*/NULL);
		PersistentStorage_t625 * L_1 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		bool L_2 = PersistentStorage_GetBoolValue_m3360(L_1, (String_t*) &_stringLiteral1180, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0047;
		}
	}
	{
		PersistentStorage_t625 * L_3 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		bool L_4 = PersistentStorage_GetBoolValue_m3360(L_3, (String_t*) &_stringLiteral1180, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3676(__this, L_4, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t669 * L_5 = (__this->___MusicMuteChanged_6);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		MusicMuteChangedEventHandler_t669 * L_6 = (__this->___MusicMuteChanged_6);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_6);
	}

IL_0047:
	{
		bool L_7 = SoundController_get_sfxMuted_m3673(__this, /*hidden argument*/NULL);
		PersistentStorage_t625 * L_8 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_8);
		bool L_9 = PersistentStorage_GetBoolValue_m3360(L_8, (String_t*) &_stringLiteral1179, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_008e;
		}
	}
	{
		PersistentStorage_t625 * L_10 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_10);
		bool L_11 = PersistentStorage_GetBoolValue_m3360(L_10, (String_t*) &_stringLiteral1179, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3674(__this, L_11, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t668 * L_12 = (__this->___SoundMuteChanged_5);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		SoundMuteChangedEventHandler_t668 * L_13 = (__this->___SoundMuteChanged_5);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_13);
	}

IL_008e:
	{
		return;
	}
}
// TailController
#include "AssemblyU2DCSharp_TailController.h"
#ifndef _MSC_VER
#else
#endif
// TailController
#include "AssemblyU2DCSharp_TailControllerMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"


// System.Void TailController::.ctor()
extern "C" void TailController__ctor_m3683 (TailController_t672 * __this, const MethodInfo* method)
{
	{
		__this->___cycleTime_4 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TailController::Start()
extern TypeInfo* MaterialU5BU5D_t671_il2cpp_TypeInfo_var;
extern "C" void TailController_Start_m3684 (TailController_t672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MaterialU5BU5D_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___currentMaterial_6 = ((MaterialU5BU5D_t671*)SZArrayNew(MaterialU5BU5D_t671_il2cpp_TypeInfo_var, 1));
		MaterialU5BU5D_t671* L_0 = (__this->___tailMaterials_3);
		NullCheck(L_0);
		__this->___numFrames_5 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2))-(int32_t)1));
		return;
	}
}
// System.Void TailController::Update()
extern TypeInfo* Mathf_t742_il2cpp_TypeInfo_var;
extern "C" void TailController_Update_m3685 (TailController_t672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		float L_0 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___cycleTime_4);
		V_1 = (fmodf(L_1, L_2));
		float L_3 = V_1;
		int32_t L_4 = (__this->___numFrames_5);
		float L_5 = (__this->___cycleTime_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t742_il2cpp_TypeInfo_var);
		float L_6 = floorf(((float)((float)((float)((float)L_3*(float)(((float)L_4))))/(float)L_5)));
		V_2 = (((int32_t)L_6));
		int32_t L_7 = V_2;
		MaterialU5BU5D_t671* L_8 = (__this->___tailMaterials_3);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		MaterialU5BU5D_t671* L_9 = (__this->___tailMaterials_3);
		NullCheck(L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)2*(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))))-(int32_t)1))-(int32_t)L_10));
	}

IL_0043:
	{
		MaterialU5BU5D_t671* L_11 = (__this->___currentMaterial_6);
		MaterialU5BU5D_t671* L_12 = (__this->___tailMaterials_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, (*(Material_t526 **)(Material_t526 **)SZArrayLdElema(L_12, L_14)));
		*((Material_t526 **)(Material_t526 **)SZArrayLdElema(L_11, 0)) = (Material_t526 *)(*(Material_t526 **)(Material_t526 **)SZArrayLdElema(L_12, L_14));
		Renderer_t603 * L_15 = (__this->___tailRenderer_2);
		MaterialU5BU5D_t671* L_16 = (__this->___currentMaterial_6);
		NullCheck(L_15);
		Renderer_set_materials_m4434(L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffect.h"
#ifndef _MSC_VER
#else
#endif
// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffectMethodDeclarations.h"



// System.Void ThrobForEffect::.ctor()
extern "C" void ThrobForEffect__ctor_m3686 (ThrobForEffect_t673 * __this, const MethodInfo* method)
{
	{
		__this->___throbPeriod_4 = (0.3f);
		__this->___throbScale_5 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThrobForEffect::Start()
extern "C" void ThrobForEffect_Start_m3687 (ThrobForEffect_t673 * __this, const MethodInfo* method)
{
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_0 = (__this->___thingToScale_6);
		NullCheck(L_0);
		Vector3_t538  L_1 = Transform_get_localScale_m4204(L_0, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_1;
		return;
	}
}
// System.Void ThrobForEffect::SetThrobbing(System.Boolean)
extern "C" void ThrobForEffect_SetThrobbing_m3688 (ThrobForEffect_t673 * __this, bool ___throbbing, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___throbbing_2);
		bool L_1 = ___throbbing;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___throbbing;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		__this->___throbbing_2 = 1;
		float L_3 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startThrobTime_3 = L_3;
		goto IL_0042;
	}

IL_002a:
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_4 = (__this->___thingToScale_6);
		Vector3_t538  L_5 = (__this->___originalScale_7);
		NullCheck(L_4);
		Transform_set_localScale_m4205(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ThrobForEffect::Update()
extern TypeInfo* Mathf_t742_il2cpp_TypeInfo_var;
extern "C" void ThrobForEffect_Update_m3689 (ThrobForEffect_t673 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		bool L_0 = (__this->___throbbing_2);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startThrobTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___throbPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t742_il2cpp_TypeInfo_var);
		float L_6 = sinf(((float)((float)((float)((float)L_4*(float)(3.14159274f)))/(float)L_5)));
		V_2 = L_6;
		float L_7 = V_2;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = (0.0f);
	}

IL_0040:
	{
		float L_8 = V_2;
		float L_9 = (__this->___throbScale_5);
		V_3 = ((float)((float)(1.0f)+(float)((float)((float)L_8*(float)L_9))));
		Transform_t406 * L_10 = (__this->___thingToScale_6);
		float L_11 = V_3;
		Vector3_t538 * L_12 = &(__this->___originalScale_7);
		float L_13 = (L_12->___x_1);
		float L_14 = V_3;
		Vector3_t538 * L_15 = &(__this->___originalScale_7);
		float L_16 = (L_15->___y_2);
		float L_17 = V_3;
		Vector3_t538 * L_18 = &(__this->___originalScale_7);
		float L_19 = (L_18->___z_3);
		Vector3_t538  L_20 = {0};
		Vector3__ctor_m4194(&L_20, ((float)((float)L_11*(float)L_13)), ((float)((float)L_14*(float)L_16)), ((float)((float)L_17*(float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m4205(L_10, L_20, /*hidden argument*/NULL);
		return;
	}
}
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeState.h"
#ifndef _MSC_VER
#else
#endif
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeStateMethodDeclarations.h"



// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandle.h"
#ifndef _MSC_VER
#else
#endif
// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandleMethodDeclarations.h"



// System.Void TimeController/TimeStateChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TimeStateChangedEventHandler__ctor_m3690 (TimeStateChangedEventHandler_t675 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void TimeController/TimeStateChangedEventHandler::Invoke()
extern "C" void TimeStateChangedEventHandler_Invoke_m3691 (TimeStateChangedEventHandler_t675 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TimeStateChangedEventHandler_Invoke_m3691((TimeStateChangedEventHandler_t675 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_TimeStateChangedEventHandler_t675(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult TimeController/TimeStateChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TimeStateChangedEventHandler_BeginInvoke_m3692 (TimeStateChangedEventHandler_t675 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void TimeController/TimeStateChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TimeStateChangedEventHandler_EndInvoke_m3693 (TimeStateChangedEventHandler_t675 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// TimeController
#include "AssemblyU2DCSharp_TimeController.h"
#ifndef _MSC_VER
#else
#endif
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"



// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m3694 (TimeController_t676 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeController::add_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern TypeInfo* TimeStateChangedEventHandler_t675_il2cpp_TypeInfo_var;
extern "C" void TimeController_add_TimeStateChanged_m3695 (TimeController_t676 * __this, TimeStateChangedEventHandler_t675 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeStateChangedEventHandler_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeStateChangedEventHandler_t675 * L_0 = (__this->___TimeStateChanged_3);
		TimeStateChangedEventHandler_t675 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TimeStateChanged_3 = ((TimeStateChangedEventHandler_t675 *)Castclass(L_2, TimeStateChangedEventHandler_t675_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TimeController::remove_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern TypeInfo* TimeStateChangedEventHandler_t675_il2cpp_TypeInfo_var;
extern "C" void TimeController_remove_TimeStateChanged_m3696 (TimeController_t676 * __this, TimeStateChangedEventHandler_t675 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeStateChangedEventHandler_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeStateChangedEventHandler_t675 * L_0 = (__this->___TimeStateChanged_3);
		TimeStateChangedEventHandler_t675 * L_1 = ___value;
		Delegate_t739 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TimeStateChanged_3 = ((TimeStateChangedEventHandler_t675 *)Castclass(L_2, TimeStateChangedEventHandler_t675_il2cpp_TypeInfo_var));
		return;
	}
}
// TimeController/TimeState TimeController::get_timeState()
extern "C" int32_t TimeController_get_timeState_m3697 (TimeController_t676 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeStateU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TimeController::set_timeState(TimeController/TimeState)
extern "C" void TimeController_set_timeState_m3698 (TimeController_t676 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeStateU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TimeController::Awake()
extern TypeInfo* TimeController_t676_il2cpp_TypeInfo_var;
extern "C" void TimeController_Awake_m3699 (TimeController_t676 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimeController_t676_StaticFields*)TimeController_t676_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void TimeController::SetTimeState(TimeController/TimeState)
extern "C" void TimeController_SetTimeState_m3700 (TimeController_t676 * __this, int32_t ___ts, const MethodInfo* method)
{
	{
		int32_t L_0 = ___ts;
		int32_t L_1 = TimeController_get_timeState_m3697(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_2 = ___ts;
		TimeController_set_timeState_m3698(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___ts;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		Time_set_timeScale_m4121(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_0028:
	{
		Time_set_timeScale_m4121(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
	}

IL_0032:
	{
		TimeStateChangedEventHandler_t675 * L_4 = (__this->___TimeStateChanged_3);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		TimeStateChangedEventHandler_t675 * L_5 = (__this->___TimeStateChanged_3);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(12 /* System.Void TimeController/TimeStateChangedEventHandler::Invoke() */, L_5);
	}

IL_0048:
	{
		return;
	}
}
// TimedFader
#include "AssemblyU2DCSharp_TimedFader.h"
#ifndef _MSC_VER
#else
#endif
// TimedFader
#include "AssemblyU2DCSharp_TimedFaderMethodDeclarations.h"

// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
struct Component_t776;
struct SpriteRenderer_t677;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t677_m4349(__this, method) (( SpriteRenderer_t677 * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)


// System.Void TimedFader::.ctor()
extern "C" void TimedFader__ctor_m3701 (TimedFader_t678 * __this, const MethodInfo* method)
{
	{
		__this->___staticLifespan_2 = (0.5f);
		__this->___fadingLifespan_3 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedFader::Awake()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t677_m4349_MethodInfo_var;
extern "C" void TimedFader_Awake_m3702 (TimedFader_t678 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t677_m4349_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_5 = L_0;
		SpriteRenderer_t677 * L_1 = Component_GetComponent_TisSpriteRenderer_t677_m4349(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t677_m4349_MethodInfo_var);
		__this->___spriteRenderer_4 = L_1;
		return;
	}
}
// System.Void TimedFader::Update()
extern "C" void TimedFader_Update_m3703 (TimedFader_t678 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___startTime_5);
		float L_3 = (__this->___staticLifespan_2);
		if ((!(((float)((float)((float)L_1-(float)L_2))) < ((float)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		float L_4 = V_0;
		float L_5 = (__this->___startTime_5);
		float L_6 = (__this->___staticLifespan_2);
		V_1 = ((float)((float)((float)((float)L_4-(float)L_5))-(float)L_6));
		float L_7 = V_1;
		float L_8 = (__this->___fadingLifespan_3);
		V_2 = ((float)((float)L_7/(float)L_8));
		SpriteRenderer_t677 * L_9 = (__this->___spriteRenderer_4);
		float L_10 = V_2;
		Color_t325  L_11 = {0};
		Color__ctor_m4478(&L_11, (1.0f), (1.0f), (1.0f), ((float)((float)(1.0f)-(float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_9);
		SpriteRenderer_set_color_m4497(L_9, L_11, /*hidden argument*/NULL);
		float L_12 = V_2;
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		GameObject_t352 * L_13 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		Object_Destroy_m4060(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// TimerWidget
#include "AssemblyU2DCSharp_TimerWidget.h"
#ifndef _MSC_VER
#else
#endif
// TimerWidget
#include "AssemblyU2DCSharp_TimerWidgetMethodDeclarations.h"

// TimerWidgetConfig
#include "AssemblyU2DCSharp_TimerWidgetConfig.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElementMethodDeclarations.h"
// TimerWidgetConfig
#include "AssemblyU2DCSharp_TimerWidgetConfigMethodDeclarations.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"


// System.Void TimerWidget::.ctor()
extern "C" void TimerWidget__ctor_m3704 (TimerWidget_t624 * __this, const MethodInfo* method)
{
	{
		__this->___actualCanvasSizePixels_9 = (100.0f);
		WorldRelativeGUIElement__ctor_m3783(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidget::Initialize()
extern "C" void TimerWidget_Initialize_m3705 (TimerWidget_t624 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidget::Awake()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var;
extern "C" void TimerWidget_Awake_m3706 (TimerWidget_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4365(NULL /*static, unused*/, (String_t*) &_stringLiteral1181, /*hidden argument*/NULL);
		__this->___worldCanvasGameObject_7 = L_0;
		GameObject_t352 * L_1 = (__this->___worldCanvasGameObject_7);
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3784(__this, L_1, /*hidden argument*/NULL);
		V_0 = (0.8f);
		float L_2 = V_0;
		float L_3 = WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3786(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = V_1;
		float L_5 = (__this->___actualCanvasSizePixels_9);
		__this->___desiredScaleNormal_10 = ((float)((float)L_4/(float)L_5));
		float L_6 = (__this->___desiredScaleNormal_10);
		__this->___desiredScaleBig_11 = ((float)((float)L_6*(float)(2.0f)));
		RectTransform_t545 * L_7 = Component_GetComponent_TisRectTransform_t545_m4364(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var);
		__this->___rectTransform_8 = L_7;
		return;
	}
}
// System.Void TimerWidget::Start()
extern "C" void TimerWidget_Start_m3707 (TimerWidget_t624 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidget::Update()
extern TypeInfo* TimerWidgetConfig_t680_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t742_il2cpp_TypeInfo_var;
extern "C" void TimerWidget_Update_m3708 (TimerWidget_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerWidgetConfig_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		Mathf_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		float L_0 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___startTime_14);
		V_0 = ((float)((float)L_0-(float)L_1));
		float L_2 = V_0;
		float L_3 = (__this->___lifespan_13);
		V_1 = ((float)((float)L_2/(float)L_3));
		float L_4 = V_1;
		TimerWidgetConfig_t680 * L_5 = ((TimerWidgetConfig_t680_StaticFields*)TimerWidgetConfig_t680_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_5);
		SpriteU5BU5D_t679* L_6 = (L_5->___frames_2);
		NullCheck(L_6);
		V_2 = ((float)((float)L_4*(float)(((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1))))));
		float L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t742_il2cpp_TypeInfo_var);
		float L_8 = floorf(L_7);
		V_3 = (((int32_t)L_8));
		int32_t L_9 = V_3;
		TimerWidgetConfig_t680 * L_10 = ((TimerWidgetConfig_t680_StaticFields*)TimerWidgetConfig_t680_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_10);
		SpriteU5BU5D_t679* L_11 = (L_10->___frames_2);
		NullCheck(L_11);
		int32_t L_12 = Mathf_Min_m4498(NULL /*static, unused*/, L_9, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_12;
		Image_t503 * L_13 = (__this->___image_15);
		TimerWidgetConfig_t680 * L_14 = ((TimerWidgetConfig_t680_StaticFields*)TimerWidgetConfig_t680_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_14);
		SpriteU5BU5D_t679* L_15 = (L_14->___frames_2);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck(L_13);
		Image_set_sprite_m4330(L_13, (*(Sprite_t512 **)(Sprite_t512 **)SZArrayLdElema(L_15, L_17)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidget::Configure(System.Single,UnityEngine.Vector3)
extern "C" void TimerWidget_Configure_m3709 (TimerWidget_t624 * __this, float ___lifespan, Vector3_t538  ___worldPosition, const MethodInfo* method)
{
	{
		float L_0 = ___lifespan;
		__this->___lifespan_13 = L_0;
		Vector3_t538  L_1 = ___worldPosition;
		TimerWidget_UpdatePosition_m3710(__this, L_1, /*hidden argument*/NULL);
		float L_2 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_14 = L_2;
		return;
	}
}
// System.Void TimerWidget::UpdatePosition(UnityEngine.Vector3)
extern "C" void TimerWidget_UpdatePosition_m3710 (TimerWidget_t624 * __this, Vector3_t538  ___worldLocation, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	Vector3_t538  V_1 = {0};
	{
		Vector3_t538  L_0 = ___worldLocation;
		Vector3_t538  L_1 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3787(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RectTransform_t545 * L_2 = (__this->___rectTransform_8);
		Vector3_t538  L_3 = V_0;
		NullCheck(L_2);
		Transform_set_localPosition_m4360(L_2, L_3, /*hidden argument*/NULL);
		BoostConfig_t496 * L_4 = BoostConfig_get_instance_m2802(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = BoostConfig_get_activeBoost_m2804(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0041;
		}
	}
	{
		float L_6 = (__this->___desiredScaleBig_11);
		float L_7 = (__this->___desiredScaleBig_11);
		Vector3__ctor_m4194((&V_1), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0041:
	{
		float L_8 = (__this->___desiredScaleNormal_10);
		float L_9 = (__this->___desiredScaleNormal_10);
		Vector3__ctor_m4194((&V_1), L_8, L_9, (1.0f), /*hidden argument*/NULL);
	}

IL_0059:
	{
		RectTransform_t545 * L_10 = (__this->___rectTransform_8);
		Vector3_t538  L_11 = V_1;
		NullCheck(L_10);
		Transform_set_localScale_m4205(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimerWidgetConfig::.ctor()
extern "C" void TimerWidgetConfig__ctor_m3711 (TimerWidgetConfig_t680 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidgetConfig::Awake()
extern TypeInfo* TimerWidgetConfig_t680_il2cpp_TypeInfo_var;
extern "C" void TimerWidgetConfig_Awake_m3712 (TimerWidgetConfig_t680 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerWidgetConfig_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimerWidgetConfig_t680_StaticFields*)TimerWidgetConfig_t680_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.Void TimerWidgetConfig::Start()
extern "C" void TimerWidgetConfig_Start_m3713 (TimerWidgetConfig_t680 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidgetConfig::Update()
extern "C" void TimerWidgetConfig_Update_m3714 (TimerWidgetConfig_t680 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
#ifndef _MSC_VER
#else
#endif
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"



// System.Void TipConfig::.ctor(System.String,System.String,UnityEngine.Vector2)
extern "C" void TipConfig__ctor_m3715 (TipConfig_t513 * __this, String_t* ___tipID, String_t* ___tipText, Vector2_t110  ___tipPosition, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		Vector2_t110  L_2 = ___tipPosition;
		__this->___tipPosition_2 = L_2;
		return;
	}
}
// System.Void TipConfig::.ctor(System.String,System.String)
extern "C" void TipConfig__ctor_m3716 (TipConfig_t513 * __this, String_t* ___tipID, String_t* ___tipText, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		Vector2_t110  L_2 = {0};
		Vector2__ctor_m4367(&L_2, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___tipPosition_2 = L_2;
		return;
	}
}
// TipController/<PlayTipWithPause>c__Iterator1B
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__Ite.h"
#ifndef _MSC_VER
#else
#endif
// TipController/<PlayTipWithPause>c__Iterator1B
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__IteMethodDeclarations.h"

// TipController
#include "AssemblyU2DCSharp_TipController.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"


// System.Void TipController/<PlayTipWithPause>c__Iterator1B::.ctor()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1B__ctor_m3717 (U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator1B::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator1B_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3718 (U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator1B::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator1B_System_Collections_IEnumerator_get_Current_m3719 (U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean TipController/<PlayTipWithPause>c__Iterator1B::MoveNext()
extern TypeInfo* WaitForSeconds_t800_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayTipWithPauseU3Ec__Iterator1B_MoveNext_m3720 (U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0063;
	}

IL_0021:
	{
		float L_2 = (__this->___tipPause_0);
		WaitForSeconds_t800 * L_3 = (WaitForSeconds_t800 *)il2cpp_codegen_object_new (WaitForSeconds_t800_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4299(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_3 = L_3;
		__this->___U24PC_2 = 1;
		goto IL_0065;
	}

IL_003e:
	{
		TipController_t681 * L_4 = (__this->___U3CU3Ef__this_6);
		TipConfig_t513 * L_5 = (__this->___tipConfig_1);
		NullCheck(L_4);
		TipController_MaybeShowTip_m3734(L_4, L_5, /*hidden argument*/NULL);
		TipController_t681 * L_6 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_6);
		L_6->___enqueuedTip_4 = (Object_t *)NULL;
		__this->___U24PC_2 = (-1);
	}

IL_0063:
	{
		return 0;
	}

IL_0065:
	{
		return 1;
	}
	// Dead block : IL_0067: ldloc.1
}
// System.Void TipController/<PlayTipWithPause>c__Iterator1B::Dispose()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1B_Dispose_m3721 (U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void TipController/<PlayTipWithPause>c__Iterator1B::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1B_Reset_m3722 (U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialog.h"
// DialogController
#include "AssemblyU2DCSharp_DialogController.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"
struct GameObject_t352;
struct TipDialog_t683;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t683_m4471(__this, method) (( TipDialog_t683 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)


// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m3723 (TipController_t681 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::Awake()
extern TypeInfo* TipController_t681_il2cpp_TypeInfo_var;
extern "C" void TipController_Awake_m3724 (TipController_t681 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TipController_t681_StaticFields*)TipController_t681_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_2 = 0;
		return;
	}
}
// System.Void TipController::Start()
extern "C" void TipController_Start_m3725 (TipController_t681 * __this, const MethodInfo* method)
{
	{
		TipController_RegisterForEvents_m3727(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m3726 (TipController_t681 * __this, const MethodInfo* method)
{
	{
		TipController_UnregisterForEvents_m3728(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3729_MethodInfo_var;
extern "C" void TipController_RegisterForEvents_m3727 (TipController_t681 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		TipController_OnPhaseChanged_m3729_MethodInfo_var = il2cpp_codegen_method_info_from_index(613);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)TipController_OnPhaseChanged_m3729_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_2 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3017(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m3030(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_2 = 1;
		return;
	}
}
// System.Void TipController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3729_MethodInfo_var;
extern "C" void TipController_UnregisterForEvents_m3728 (TipController_t681 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		TipController_OnPhaseChanged_m3729_MethodInfo_var = il2cpp_codegen_method_info_from_index(613);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TipController_OnPhaseChanged_m3729_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3017(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3031(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m3729 (TipController_t681 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3045(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TipController_EnqueueTipForLevel_m3730(__this, /*hidden argument*/NULL);
		goto IL_0020;
	}

IL_001a:
	{
		TipController_ClearEnqueuedTips_m3733(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m3730 (TipController_t681 * __this, const MethodInfo* method)
{
	LevelDescription_t587 * V_0 = {0};
	{
		LevelConfig_t593 * L_0 = LevelConfig_get_instance_m3135(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t587 * L_1 = LevelConfig_GetCurrentLevelDescription_m3144(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t587 * L_2 = V_0;
		NullCheck(L_2);
		TipConfig_t513 * L_3 = (L_2->___tipConfig_3);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		LevelDescription_t587 * L_4 = V_0;
		NullCheck(L_4);
		TipConfig_t513 * L_5 = (L_4->___tipConfig_3);
		LevelDescription_t587 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = (L_6->___tipPause_4);
		TipController_EnqueueTip_m3731(__this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m3731 (TipController_t681 * __this, TipConfig_t513 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	{
		TipConfig_t513 * L_0 = ___tipConfig;
		float L_1 = ___tipPause;
		Object_t * L_2 = TipController_PlayTipWithPause_m3732(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = L_2;
		Object_t * L_3 = (__this->___enqueuedTip_4);
		MonoBehaviour_StartCoroutine_m3879(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern TypeInfo* U3CPlayTipWithPauseU3Ec__Iterator1B_t682_il2cpp_TypeInfo_var;
extern "C" Object_t * TipController_PlayTipWithPause_m3732 (TipController_t681 * __this, TipConfig_t513 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * V_0 = {0};
	{
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * L_0 = (U3CPlayTipWithPauseU3Ec__Iterator1B_t682 *)il2cpp_codegen_object_new (U3CPlayTipWithPauseU3Ec__Iterator1B_t682_il2cpp_TypeInfo_var);
		U3CPlayTipWithPauseU3Ec__Iterator1B__ctor_m3717(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * L_1 = V_0;
		float L_2 = ___tipPause;
		NullCheck(L_1);
		L_1->___tipPause_0 = L_2;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * L_3 = V_0;
		TipConfig_t513 * L_4 = ___tipConfig;
		NullCheck(L_3);
		L_3->___tipConfig_1 = L_4;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * L_5 = V_0;
		float L_6 = ___tipPause;
		NullCheck(L_5);
		L_5->___U3CU24U3EtipPause_4 = L_6;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * L_7 = V_0;
		TipConfig_t513 * L_8 = ___tipConfig;
		NullCheck(L_7);
		L_7->___U3CU24U3EtipConfig_5 = L_8;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3Ef__this_6 = __this;
		U3CPlayTipWithPauseU3Ec__Iterator1B_t682 * L_10 = V_0;
		return L_10;
	}
}
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m3733 (TipController_t681 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___enqueuedTip_4);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___enqueuedTip_4);
		MonoBehaviour_StopCoroutine_m4340(__this, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = (Object_t *)NULL;
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern TypeInfo* PersistentStorage_t625_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t683_m4471_MethodInfo_var;
extern "C" bool TipController_MaybeShowTip_m3734 (TipController_t681 * __this, TipConfig_t513 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisTipDialog_t683_m4471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484239);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GameObject_t352 * V_1 = {0};
	TipDialog_t683 * V_2 = {0};
	{
		PersistentStorage_t625 * L_0 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t513 * L_1 = ___tipConfig;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1182, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = PersistentStorage_GetBoolValue_m3360(L_0, L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		DialogController_t535 * L_6 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_6);
		bool L_7 = DialogController_IsDialogShowing_m2896(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		GameObject_t352 * L_8 = (__this->___tipDialogPrototype_3);
		Vector3_t538  L_9 = {0};
		Vector3__ctor_m4194(&L_9, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t803  L_10 = Quaternion_get_identity_m4320(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t718 * L_11 = Object_Instantiate_m4321(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = ((GameObject_t352 *)IsInst(L_11, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_12 = V_1;
		NullCheck(L_12);
		Transform_t406 * L_13 = GameObject_get_transform_m4199(L_12, /*hidden argument*/NULL);
		Vector3_t538  L_14 = {0};
		Vector3__ctor_m4194(&L_14, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_m4205(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t352 * L_15 = V_1;
		NullCheck(L_15);
		TipDialog_t683 * L_16 = GameObject_GetComponent_TisTipDialog_t683_m4471(L_15, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t683_m4471_MethodInfo_var);
		V_2 = L_16;
		TipDialog_t683 * L_17 = V_2;
		TipConfig_t513 * L_18 = ___tipConfig;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___tipText_1);
		TipConfig_t513 * L_20 = ___tipConfig;
		NullCheck(L_20);
		Vector2_t110  L_21 = (L_20->___tipPosition_2);
		NullCheck(L_17);
		TipDialog_ConfigureDialog_m3738(L_17, L_19, L_21, /*hidden argument*/NULL);
		DialogController_t535 * L_22 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_23 = V_1;
		NullCheck(L_22);
		DialogController_ShowDialog_m2894(L_22, L_23, /*hidden argument*/NULL);
		PersistentStorage_t625 * L_24 = ((PersistentStorage_t625_StaticFields*)PersistentStorage_t625_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t513 * L_25 = ___tipConfig;
		NullCheck(L_25);
		String_t* L_26 = (L_25->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1182, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		PersistentStorage_SetBoolValue_m3359(L_24, L_27, 1, /*hidden argument*/NULL);
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TipDialog::.ctor()
extern "C" void TipDialog__ctor_m3735 (TipDialog_t683 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::CloseDialog()
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern "C" void TipDialog_CloseDialog_m3736 (TipDialog_t683 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t535 * L_0 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m2895(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::ConfigureDialog(System.String)
extern "C" void TipDialog_ConfigureDialog_m3737 (TipDialog_t683 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Vector2_t110  L_1 = {0};
		Vector2__ctor_m4367(&L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		TipDialog_ConfigureDialog_m3738(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::ConfigureDialog(System.String,UnityEngine.Vector2)
extern const MethodInfo* Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var;
extern "C" void TipDialog_ConfigureDialog_m3738 (TipDialog_t683 * __this, String_t* ___message, Vector2_t110  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t545 * V_0 = {0};
	{
		Text_t502 * L_0 = (__this->___dialogText_2);
		String_t* L_1 = ___message;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		RectTransform_t545 * L_2 = Component_GetComponent_TisRectTransform_t545_m4364(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4364_MethodInfo_var);
		V_0 = L_2;
		RectTransform_t545 * L_3 = V_0;
		Vector2_t110  L_4 = ___position;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m4499(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParams.h"
#ifndef _MSC_VER
#else
#endif
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"



// System.Void TweakableParams::.ctor()
extern "C" void TweakableParams__ctor_m3739 (TweakableParams_t684 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TweakableParams::GetInitialMoney()
extern "C" int32_t TweakableParams_GetInitialMoney_m3740 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t533 * L_0 = DebugConfig_get_instance_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_5);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return ((int32_t)100);
	}

IL_0012:
	{
		return 1;
	}
}
// System.Int32 TweakableParams::GetInitialBoosts()
extern "C" int32_t TweakableParams_GetInitialBoosts_m3741 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t533 * L_0 = DebugConfig_get_instance_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_5);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return 5;
	}

IL_0011:
	{
		return 0;
	}
}
// System.Int32 TweakableParams::GetInitialTrapsPerHole()
extern "C" int32_t TweakableParams_GetInitialTrapsPerHole_m3742 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t533 * L_0 = DebugConfig_get_instance_m2880(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_5);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return 6;
	}

IL_0011:
	{
		return 1;
	}
}
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
#ifndef _MSC_VER
#else
#endif
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSliderMethodDeclarations.h"



// System.Void TweakableSlider::.ctor()
extern "C" void TweakableSlider__ctor_m3743 (TweakableSlider_t604 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// SPTwitter
#include "AssemblyU2DCSharp_SPTwitter.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// SPTwitter
#include "AssemblyU2DCSharp_SPTwitterMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void TwitterSharing::.ctor()
extern "C" void TwitterSharing__ctor_m3744 (TwitterSharing_t685 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::Awake()
extern TypeInfo* TwitterSharing_t685_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_Awake_m3745 (TwitterSharing_t685 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TwitterSharing_t685_StaticFields*)TwitterSharing_t685_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_0 = SPTwitter_get_instance_m1949(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void SPTwitter::Init() */, L_0);
		return;
	}
}
// System.Void TwitterSharing::ShareScore(System.Int32)
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScore_m3746 (TwitterSharing_t685 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1183, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_0 = SPTwitter_get_instance_m1949(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean SPTwitter::get_IsAuthed() */, L_0);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___score;
		TwitterSharing_ShareScoreInternal_m3748(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0025:
	{
		int32_t L_3 = ___score;
		TwitterSharing_ShareScoreThroughURLs_m3747(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreThroughURLs_m3747 (TwitterSharing_t685 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1184, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3764(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t75* L_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1185);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral1185;
		StringU5BU5D_t75* L_3 = L_2;
		String_t* L_4 = V_0;
		String_t* L_5 = WWW_EscapeURL_m4356(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1186);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral1186;
		StringU5BU5D_t75* L_7 = L_6;
		String_t* L_8 = WWW_EscapeURL_m4356(NULL /*static, unused*/, (String_t*) &_stringLiteral1025, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t75* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1187);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral1187;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m450(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_m408(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral1188, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14 = WWW_EscapeURL_m4356(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1189, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17 = String_Replace_m3903(L_16, (String_t*) &_stringLiteral1190, (String_t*) &_stringLiteral1191, /*hidden argument*/NULL);
		V_2 = L_17;
		String_t* L_18 = V_2;
		String_t* L_19 = V_1;
		Object_t * L_20 = Utilities_LaunchAppOrWeb_m3768(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3879(__this, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreInternal_m3748 (TwitterSharing_t685 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1192, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3764(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_2 = SPTwitter_get_instance_m1949(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		Texture2D_t108 * L_4 = (__this->___lazyAngusIcon_5);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Texture2D_t108 * >::Invoke(26 /* System.Void SPTwitter::Post(System.String,UnityEngine.Texture2D) */, L_2, L_3, L_4);
		return;
	}
}
// UseBoost
#include "AssemblyU2DCSharp_UseBoost.h"
#ifndef _MSC_VER
#else
#endif
// UseBoost
#include "AssemblyU2DCSharp_UseBoostMethodDeclarations.h"

// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"
struct GameObject_t352;
struct BoostButton_t499;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t499_m4334(__this, method) (( BoostButton_t499 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)


// System.Void UseBoost::.ctor()
extern "C" void UseBoost__ctor_m3749 (UseBoost_t686 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UseBoost::Start()
extern "C" void UseBoost_Start_m3750 (UseBoost_t686 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2802(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t516 * L_1 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void UseBoost::Use()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t499_m4334_MethodInfo_var;
extern "C" void UseBoost_Use_m3751 (UseBoost_t686 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t499_m4334_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t499 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t499 * L_1 = GameObject_GetComponent_TisBoostButton_t499_m4334(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t499_m4334_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t499 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2765(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PlayerStats_t516 * L_4 = (__this->___playerStats_3);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = PlayerStats_GetAvailableBoostCount_m3424(L_4, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		PlayerStats_t516 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		PlayerStats_RemoveBoost_m3426(L_7, L_8, /*hidden argument*/NULL);
		BoostConfig_t496 * L_9 = (__this->___boostConfig_2);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		BoostConfig_ExecuteBoost_m2819(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// Utilities/<LaunchAppOrWeb>c__Iterator1C
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1.h"
#ifndef _MSC_VER
#else
#endif
// Utilities/<LaunchAppOrWeb>c__Iterator1C
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1MethodDeclarations.h"



// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1C::.ctor()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1C__ctor_m3752 (U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1C::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1C_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3753 (U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1C::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1C_System_Collections_IEnumerator_get_Current_m3754 (U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean Utilities/<LaunchAppOrWeb>c__Iterator1C::MoveNext()
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t800_il2cpp_TypeInfo_var;
extern "C" bool U3CLaunchAppOrWebU3Ec__Iterator1C_MoveNext_m3755 (U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		WaitForSeconds_t800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0065;
	}

IL_0021:
	{
		int32_t L_2 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_3 = (__this->___appURL_0);
		String_t* L_4 = (__this->___webURL_1);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		Utilities_LaunchAppOrWebOnIOS_m3767(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		WaitForSeconds_t800 * L_5 = (WaitForSeconds_t800 *)il2cpp_codegen_object_new (WaitForSeconds_t800_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4299(L_5, (0.001f), /*hidden argument*/NULL);
		__this->___U24current_3 = L_5;
		__this->___U24PC_2 = 1;
		goto IL_0067;
	}

IL_0059:
	{
		goto IL_005e;
	}

IL_005e:
	{
		__this->___U24PC_2 = (-1);
	}

IL_0065:
	{
		return 0;
	}

IL_0067:
	{
		return 1;
	}
	// Dead block : IL_0069: ldloc.1
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1C::Dispose()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1C_Dispose_m3756 (U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1C::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1C_Reset_m3757 (U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
struct GameObject_t352;
struct RectTransform_t545;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t545_m4319(__this, method) (( RectTransform_t545 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)


// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3758 (Utilities_t688 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Utilities::.cctor()
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern "C" void Utilities__cctor_m3759 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t287  L_0 = {0};
		DateTime__ctor_m4500(&L_0, ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		((Utilities_t688_StaticFields*)Utilities_t688_il2cpp_TypeInfo_var->static_fields)->___epoch_2 = L_0;
		return;
	}
}
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3760 (Object_t * __this /* static, unused */, Vector3_t538  ___vector, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		(&___vector)->___z_3 = (0.0f);
		Vector3_t538  L_0 = Vector3_get_right_m4429(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t538  L_1 = ___vector;
		float L_2 = Vector3_Angle_m4430(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&___vector)->___y_2);
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = V_0;
		return ((-L_4));
	}

IL_002c:
	{
		float L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.GameObject Utilities::FindChildWithTag(UnityEngine.GameObject,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GameObject_t352 * Utilities_FindChildWithTag_m3761 (Object_t * __this /* static, unused */, GameObject_t352 * ___gameObject, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Transform_t406 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0007:
	{
		GameObject_t352 * L_0 = ___gameObject;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4199(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t406 * L_3 = Transform_GetChild_m4480(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t406 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3916(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m4501(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___tag;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m456(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t406 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3916(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0031:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_12 = V_0;
		GameObject_t352 * L_13 = ___gameObject;
		NullCheck(L_13);
		Transform_t406 * L_14 = GameObject_get_transform_m4199(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m4481(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		return (GameObject_t352 *)NULL;
	}
}
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern TypeInfo* Mathf_t742_il2cpp_TypeInfo_var;
extern "C" Color_t325  Utilities_TrafficLightColorLerp_m3762 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___fractionFinished;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t742_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m4375(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___fractionFinished = L_1;
		float L_2 = ___fractionFinished;
		if ((!(((float)L_2) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		Color_t325  L_3 = Color_get_green_m4502(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_4 = Color_get_yellow_m4503(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___fractionFinished;
		Color_t325  L_6 = Color_Lerp_m4504(NULL /*static, unused*/, L_3, L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		Color_t325  L_7 = Color_get_yellow_m4503(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_8 = Color_get_red_m4505(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___fractionFinished;
		Color_t325  L_10 = Color_Lerp_m4504(NULL /*static, unused*/, L_7, L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3763 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3427(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*) &_stringLiteral1193;
	}

IL_0018:
	{
		return (String_t*) &_stringLiteral1194;
	}
}
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_GetShareMessageForScore_m3764 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3410(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3427(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = ___score;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m4033(NULL /*static, unused*/, (String_t*) &_stringLiteral1195, L_6, (String_t*) &_stringLiteral1196, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___score;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m4033(NULL /*static, unused*/, (String_t*) &_stringLiteral1197, L_10, (String_t*) &_stringLiteral1196, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" {int32_t DEFAULT_CALL CanLaunchURL(char*);}
extern "C" bool Utilities_CanLaunchURL_m3765 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)CanLaunchURL;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CanLaunchURL'"));
		}
	}

	// Marshaling of parameter '___url' to native representation
	char* ____url_marshaled = { 0 };
	____url_marshaled = il2cpp_codegen_marshal_string(___url);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____url_marshaled);

	// Marshaling cleanup of parameter '___url' native representation
	il2cpp_codegen_marshal_free(____url_marshaled);
	____url_marshaled = NULL;

	return _return_value;
}
// System.Boolean Utilities::AppCanLaunchURL(System.String)
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern "C" bool Utilities_AppCanLaunchURL_m3766 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral1025, /*hidden argument*/NULL);
		return L_1;
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3767 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appURL;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3765(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1198, /*hidden argument*/NULL);
		String_t* L_2 = ___appURL;
		Application_OpenURL_m4120(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1199, /*hidden argument*/NULL);
		String_t* L_3 = ___webURL;
		Application_OpenURL_m4120(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern TypeInfo* U3CLaunchAppOrWebU3Ec__Iterator1C_t687_il2cpp_TypeInfo_var;
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3768 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CLaunchAppOrWebU3Ec__Iterator1C_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		s_Il2CppMethodIntialized = true;
	}
	U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * V_0 = {0};
	{
		U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * L_0 = (U3CLaunchAppOrWebU3Ec__Iterator1C_t687 *)il2cpp_codegen_object_new (U3CLaunchAppOrWebU3Ec__Iterator1C_t687_il2cpp_TypeInfo_var);
		U3CLaunchAppOrWebU3Ec__Iterator1C__ctor_m3752(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * L_1 = V_0;
		String_t* L_2 = ___appURL;
		NullCheck(L_1);
		L_1->___appURL_0 = L_2;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * L_3 = V_0;
		String_t* L_4 = ___webURL;
		NullCheck(L_3);
		L_3->___webURL_1 = L_4;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * L_5 = V_0;
		String_t* L_6 = ___appURL;
		NullCheck(L_5);
		L_5->___U3CU24U3EappURL_4 = L_6;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * L_7 = V_0;
		String_t* L_8 = ___webURL;
		NullCheck(L_7);
		L_7->___U3CU24U3EwebURL_5 = L_8;
		U3CLaunchAppOrWebU3Ec__Iterator1C_t687 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t545_m4319_MethodInfo_var;
extern "C" void Utilities_SpaceHorizontally_m3769 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t507* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t545_m4319_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	GameObjectU5BU5D_t507* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t352 * V_10 = {0};
	GameObjectU5BU5D_t507* V_11 = {0};
	int32_t V_12 = 0;
	RectTransform_t545 * V_13 = {0};
	float V_14 = 0.0f;
	Vector2_t110  V_15 = {0};
	Rect_t709  V_16 = {0};
	Rect_t709  V_17 = {0};
	{
		float L_0 = ___containingWidth;
		V_0 = L_0;
		V_1 = (0.0f);
		GameObjectU5BU5D_t507* L_1 = ___objects;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		GameObjectU5BU5D_t507* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_2, L_4));
		float L_5 = V_1;
		GameObject_t352 * L_6 = V_2;
		NullCheck(L_6);
		RectTransform_t545 * L_7 = GameObject_GetComponent_TisRectTransform_t545_m4319(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t545_m4319_MethodInfo_var);
		NullCheck(L_7);
		Rect_t709  L_8 = RectTransform_get_rect_m4336(L_7, /*hidden argument*/NULL);
		V_16 = L_8;
		float L_9 = Rect_get_width_m4197((&V_16), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5+(float)L_9));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_4;
		GameObjectU5BU5D_t507* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = V_1;
		V_5 = ((float)((float)L_13-(float)L_14));
		float L_15 = V_5;
		GameObjectU5BU5D_t507* L_16 = ___objects;
		NullCheck(L_16);
		V_6 = ((float)((float)L_15/(float)(((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_16)->max_length)))+(int32_t)1))))));
		float L_17 = V_0;
		V_7 = ((float)((float)((-L_17))/(float)(2.0f)));
		V_9 = (0.0f);
		float L_18 = V_6;
		if ((!(((float)L_18) <= ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_19 = ___yWiggle;
		V_9 = L_19;
	}

IL_006e:
	{
		GameObjectU5BU5D_t507* L_20 = ___objects;
		V_11 = L_20;
		V_12 = 0;
		goto IL_00d7;
	}

IL_0079:
	{
		GameObjectU5BU5D_t507* L_21 = V_11;
		int32_t L_22 = V_12;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_10 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_21, L_23));
		GameObject_t352 * L_24 = V_10;
		NullCheck(L_24);
		RectTransform_t545 * L_25 = GameObject_GetComponent_TisRectTransform_t545_m4319(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t545_m4319_MethodInfo_var);
		V_13 = L_25;
		RectTransform_t545 * L_26 = V_13;
		NullCheck(L_26);
		Rect_t709  L_27 = RectTransform_get_rect_m4336(L_26, /*hidden argument*/NULL);
		V_17 = L_27;
		float L_28 = Rect_get_width_m4197((&V_17), /*hidden argument*/NULL);
		V_14 = L_28;
		float L_29 = V_7;
		float L_30 = V_6;
		V_7 = ((float)((float)L_29+(float)L_30));
		float L_31 = V_7;
		float L_32 = V_14;
		V_8 = ((float)((float)L_31+(float)((float)((float)L_32/(float)(2.0f)))));
		float L_33 = V_8;
		float L_34 = ___yOffset;
		float L_35 = V_9;
		Vector2__ctor_m4367((&V_15), L_33, ((float)((float)L_34+(float)L_35)), /*hidden argument*/NULL);
		float L_36 = V_9;
		V_9 = ((-L_36));
		RectTransform_t545 * L_37 = V_13;
		Vector2_t110  L_38 = V_15;
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_m4499(L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_7;
		float L_40 = V_14;
		V_7 = ((float)((float)L_39+(float)L_40));
		int32_t L_41 = V_12;
		V_12 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_42 = V_12;
		GameObjectU5BU5D_t507* L_43 = V_11;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)(((Array_t *)L_43)->max_length))))))
		{
			goto IL_0079;
		}
	}
	{
		return;
	}
}
// System.Single Utilities::GetIOSVersion()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t712_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t783_il2cpp_TypeInfo_var;
extern "C" float Utilities_GetIOSVersion_m3770 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		CultureInfo_t783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t75* V_1 = {0};
	String_t* V_2 = {0};
	{
		int32_t L_0 = Application_get_platform_m3929(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0011;
		}
	}
	{
		return (-1.0f);
	}

IL_0011:
	{
		String_t* L_1 = SystemInfo_get_operatingSystem_m4506(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1200, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		CharU5BU5D_t712* L_5 = ((CharU5BU5D_t712*)SZArrayNew(CharU5BU5D_t712_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)((int32_t)32);
		NullCheck(L_4);
		StringU5BU5D_t75* L_6 = String_Split_m3872(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t75* L_7 = V_1;
		StringU5BU5D_t75* L_8 = V_1;
		NullCheck(L_8);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1)));
		int32_t L_9 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1));
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9));
		String_t* L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t783_il2cpp_TypeInfo_var);
		CultureInfo_t783 * L_11 = CultureInfo_get_InvariantCulture_m4222(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = Single_Parse_m4507(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Utilities::SecondsSinceEpoch()
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t688_il2cpp_TypeInfo_var;
extern "C" float Utilities_SecondsSinceEpoch_m3771 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Utilities_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t334  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_0 = DateTime_get_UtcNow_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t688_il2cpp_TypeInfo_var);
		DateTime_t287  L_1 = ((Utilities_t688_StaticFields*)Utilities_t688_il2cpp_TypeInfo_var->static_fields)->___epoch_2;
		TimeSpan_t334  L_2 = DateTime_op_Subtraction_m4095(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = TimeSpan_get_TotalSeconds_m4097((&V_0), /*hidden argument*/NULL);
		return (((float)L_3));
	}
}
// System.Single[] Utilities::GetBlendingCoefficients(System.Single,System.Int32)
extern TypeInfo* SingleU5BU5D_t588_il2cpp_TypeInfo_var;
extern "C" SingleU5BU5D_t588* Utilities_GetBlendingCoefficients_m3772 (Object_t * __this /* static, unused */, float ___t, int32_t ___numPoints, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		s_Il2CppMethodIntialized = true;
	}
	SingleU5BU5D_t588* V_0 = {0};
	SingleU5BU5D_t588* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___numPoints;
		V_0 = ((SingleU5BU5D_t588*)SZArrayNew(SingleU5BU5D_t588_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___numPoints;
		V_1 = ((SingleU5BU5D_t588*)SZArrayNew(SingleU5BU5D_t588_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_0023;
	}

IL_0015:
	{
		SingleU5BU5D_t588* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = V_2;
		int32_t L_5 = ___numPoints;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((float*)(float*)SZArrayLdElema(L_2, L_3)) = (float)((float)((float)(((float)L_4))/(float)(((float)((int32_t)((int32_t)L_5-(int32_t)1))))));
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = ___numPoints;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		V_3 = 0;
		goto IL_0073;
	}

IL_0031:
	{
		V_4 = (1.0f);
		V_5 = 0;
		goto IL_0062;
	}

IL_0040:
	{
		int32_t L_9 = V_5;
		int32_t L_10 = V_3;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_005c;
		}
	}
	{
		float L_11 = V_4;
		float L_12 = ___t;
		SingleU5BU5D_t588* L_13 = V_1;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		SingleU5BU5D_t588* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		SingleU5BU5D_t588* L_19 = V_1;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_4 = ((float)((float)L_11*(float)((float)((float)((float)((float)L_12-(float)(*(float*)(float*)SZArrayLdElema(L_13, L_15))))/(float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_16, L_18))-(float)(*(float*)(float*)SZArrayLdElema(L_19, L_21))))))));
	}

IL_005c:
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_23 = V_5;
		int32_t L_24 = ___numPoints;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0040;
		}
	}
	{
		SingleU5BU5D_t588* L_25 = V_0;
		int32_t L_26 = V_3;
		float L_27 = V_4;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		*((float*)(float*)SZArrayLdElema(L_25, L_26)) = (float)L_27;
		int32_t L_28 = V_3;
		V_3 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = ___numPoints;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t588* L_31 = V_0;
		return L_31;
	}
}
// System.Int32 Utilities::ParseIntWithDefault(System.String,System.Int32)
extern "C" int32_t Utilities_ParseIntWithDefault_m3773 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___defaultValue, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text;
		bool L_1 = Int32_TryParse_m398(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		int32_t L_3 = ___defaultValue;
		return L_3;
	}
}
// System.Void Utilities::MakeFanWithAngleRange(UnityEngine.Mesh&,System.Single,System.Single,System.Single,System.Int32)
extern TypeInfo* Vector3U5BU5D_t546_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t817_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t742_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void Utilities_MakeFanWithAngleRange_m3774 (Object_t * __this /* static, unused */, Mesh_t525 ** ___mesh, float ___startAngle, float ___endAngle, float ___radius, int32_t ___numTriangles, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		Vector2U5BU5D_t817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(597);
		Mathf_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3U5BU5D_t546* V_2 = {0};
	Vector2U5BU5D_t817* V_3 = {0};
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Int32U5BU5D_t484* V_6 = {0};
	int32_t V_7 = 0;
	{
		float L_0 = ___endAngle;
		float L_1 = ___startAngle;
		V_0 = ((float)((float)L_0-(float)L_1));
		float L_2 = V_0;
		int32_t L_3 = ___numTriangles;
		V_1 = ((float)((float)L_2/(float)(((float)L_3))));
		int32_t L_4 = ___numTriangles;
		V_2 = ((Vector3U5BU5D_t546*)SZArrayNew(Vector3U5BU5D_t546_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4+(int32_t)2))));
		int32_t L_5 = ___numTriangles;
		V_3 = ((Vector2U5BU5D_t817*)SZArrayNew(Vector2U5BU5D_t817_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_5+(int32_t)2))));
		Vector3U5BU5D_t546* L_6 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_6, 0))->___x_1 = (0.0f);
		Vector3U5BU5D_t546* L_7 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_7, 0))->___y_2 = (0.0f);
		Vector3U5BU5D_t546* L_8 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_8, 0))->___z_3 = (0.0f);
		Vector2U5BU5D_t817* L_9 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_9, 0))->___x_1 = (0.0f);
		Vector2U5BU5D_t817* L_10 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_10, 0))->___y_2 = (0.0f);
		V_5 = 0;
		goto IL_0104;
	}

IL_007b:
	{
		float L_11 = ___startAngle;
		int32_t L_12 = V_5;
		float L_13 = V_1;
		V_4 = ((float)((float)L_11+(float)((float)((float)(((float)L_12))*(float)L_13))));
		Vector3U5BU5D_t546* L_14 = V_2;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15+(int32_t)1)));
		float L_16 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t742_il2cpp_TypeInfo_var);
		float L_17 = sinf(((float)((float)(0.0174532924f)*(float)L_16)));
		float L_18 = ___radius;
		((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15+(int32_t)1))))->___y_2 = ((float)((float)L_17*(float)L_18));
		Vector3U5BU5D_t546* L_19 = V_2;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)L_20+(int32_t)1)));
		float L_21 = V_4;
		float L_22 = cosf(((float)((float)(0.0174532924f)*(float)L_21)));
		float L_23 = ___radius;
		((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_19, ((int32_t)((int32_t)L_20+(int32_t)1))))->___x_1 = ((float)((float)L_22*(float)L_23));
		Vector3U5BU5D_t546* L_24 = V_2;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)L_25+(int32_t)1)));
		((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_24, ((int32_t)((int32_t)L_25+(int32_t)1))))->___z_3 = (0.0f);
		Vector2U5BU5D_t817* L_26 = V_3;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)1)));
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)1))))->___x_1 = (1.0f);
		Vector2U5BU5D_t817* L_28 = V_3;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)1)));
		int32_t L_30 = V_5;
		int32_t L_31 = ___numTriangles;
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_28, ((int32_t)((int32_t)L_29+(int32_t)1))))->___y_2 = ((float)((float)(((float)L_30))/(float)(((float)L_31))));
		int32_t L_32 = V_5;
		V_5 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0104:
	{
		int32_t L_33 = V_5;
		int32_t L_34 = ___numTriangles;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)L_34+(int32_t)1)))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_35 = ___numTriangles;
		V_6 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_35*(int32_t)3))));
		V_7 = 0;
		goto IL_014a;
	}

IL_0122:
	{
		Int32U5BU5D_t484* L_36 = V_6;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)((int32_t)L_37*(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_36, ((int32_t)((int32_t)L_37*(int32_t)3)))) = (int32_t)0;
		Int32U5BU5D_t484* L_38 = V_6;
		int32_t L_39 = V_7;
		int32_t L_40 = V_7;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)3))+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_38, ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)3))+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)L_40+(int32_t)2));
		Int32U5BU5D_t484* L_41 = V_6;
		int32_t L_42 = V_7;
		int32_t L_43 = V_7;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)3))+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_41, ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)3))+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)L_43+(int32_t)1));
		int32_t L_44 = V_7;
		V_7 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_45 = V_7;
		int32_t L_46 = ___numTriangles;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0122;
		}
	}
	{
		Mesh_t525 ** L_47 = ___mesh;
		Vector3U5BU5D_t546* L_48 = V_2;
		NullCheck((*((Mesh_t525 **)L_47)));
		Mesh_set_vertices_m4508((*((Mesh_t525 **)L_47)), L_48, /*hidden argument*/NULL);
		Mesh_t525 ** L_49 = ___mesh;
		Int32U5BU5D_t484* L_50 = V_6;
		NullCheck((*((Mesh_t525 **)L_49)));
		Mesh_set_triangles_m4509((*((Mesh_t525 **)L_49)), L_50, /*hidden argument*/NULL);
		Mesh_t525 ** L_51 = ___mesh;
		Vector2U5BU5D_t817* L_52 = V_3;
		NullCheck((*((Mesh_t525 **)L_51)));
		Mesh_set_uv_m4510((*((Mesh_t525 **)L_51)), L_52, /*hidden argument*/NULL);
		Mesh_t525 ** L_53 = ___mesh;
		NullCheck((*((Mesh_t525 **)L_53)));
		Mesh_RecalculateNormals_m4511((*((Mesh_t525 **)L_53)), /*hidden argument*/NULL);
		return;
	}
}
// System.String Utilities::AddTextColor(System.String,UnityEngine.Color)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_AddTextColor_m3775 (Object_t * __this /* static, unused */, String_t* ___input, Color_t325  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1201);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1201;
		StringU5BU5D_t75* L_1 = L_0;
		String_t* L_2 = Color_ToHexStringRGB_m4512((&___color), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t75* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1202);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral1202;
		StringU5BU5D_t75* L_4 = L_3;
		String_t* L_5 = ___input;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1203);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 4)) = (String_t*)(String_t*) &_stringLiteral1203;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m450(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String Utilities::AddFontSize(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_AddFontSize_m3776 (Object_t * __this /* static, unused */, String_t* ___input, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t697* L_0 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1204);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral1204;
		ObjectU5BU5D_t697* L_1 = L_0;
		int32_t L_2 = ___size;
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t697* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1202);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral1202;
		ObjectU5BU5D_t697* L_6 = L_5;
		String_t* L_7 = ___input;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t697* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral1205);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)(String_t*) &_stringLiteral1205;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m4034(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Utilities::LerpTransform(System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Transform)
extern TypeInfo* Mathf_t742_il2cpp_TypeInfo_var;
extern "C" void Utilities_LerpTransform_m3777 (Object_t * __this /* static, unused */, float ___timeFraction, Vector2_t110  ___fromPosition, float ___fromAngle, float ___fromScale, Vector2_t110  ___toPosition, float ___toAngle, float ___toScale, Transform_t406 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = ___timeFraction;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t110  L_1 = ___fromPosition;
		V_0 = L_1;
		float L_2 = ___fromAngle;
		V_1 = L_2;
		float L_3 = ___fromScale;
		V_2 = L_3;
		goto IL_004d;
	}

IL_0016:
	{
		float L_4 = ___timeFraction;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t110  L_5 = ___toPosition;
		V_0 = L_5;
		float L_6 = ___toAngle;
		V_1 = L_6;
		float L_7 = ___toScale;
		V_2 = L_7;
		goto IL_004d;
	}

IL_002f:
	{
		Vector2_t110  L_8 = ___fromPosition;
		Vector2_t110  L_9 = ___toPosition;
		float L_10 = ___timeFraction;
		Vector2_t110  L_11 = Vector2_Lerp_m4513(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		float L_12 = ___fromAngle;
		float L_13 = ___toAngle;
		float L_14 = ___timeFraction;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t742_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Lerp_m4431(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		float L_16 = ___fromScale;
		float L_17 = ___toScale;
		float L_18 = ___timeFraction;
		float L_19 = Mathf_Lerp_m4431(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
	}

IL_004d:
	{
		Transform_t406 * L_20 = ___t;
		Vector2_t110  L_21 = V_0;
		Vector3_t538  L_22 = Vector2_op_Implicit_m4368(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m4360(L_20, L_22, /*hidden argument*/NULL);
		Transform_t406 * L_23 = ___t;
		float L_24 = V_1;
		Quaternion_t803  L_25 = Quaternion_Euler_m4308(NULL /*static, unused*/, (0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localRotation_m4374(L_23, L_25, /*hidden argument*/NULL);
		Transform_t406 * L_26 = ___t;
		float L_27 = V_2;
		float L_28 = V_2;
		Vector2_t110  L_29 = {0};
		Vector2__ctor_m4367(&L_29, L_27, L_28, /*hidden argument*/NULL);
		Vector3_t538  L_30 = Vector2_op_Implicit_m4368(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_m4205(L_26, L_30, /*hidden argument*/NULL);
		return;
	}
}
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
#ifndef _MSC_VER
#else
#endif
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"



// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m3778 (WorldObjectFollower_t689 * __this, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = {0};
		Vector3__ctor_m4194(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_11 = L_0;
		WorldRelativeGUIElement__ctor_m3783(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldObjectFollower::Start()
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t545_m4319_MethodInfo_var;
extern "C" void WorldObjectFollower_Start_m3779 (WorldObjectFollower_t689 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t545_m4319_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4365(NULL /*static, unused*/, (String_t*) &_stringLiteral1181, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3784(__this, L_1, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_t545 * L_3 = GameObject_GetComponent_TisRectTransform_t545_m4319(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t545_m4319_MethodInfo_var);
		__this->___myRectTransform_8 = L_3;
		return;
	}
}
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m3780 (WorldObjectFollower_t689 * __this, const MethodInfo* method)
{
	{
		RectTransform_t545 * L_0 = (__this->___myRectTransform_8);
		bool L_1 = Object_op_Implicit_m4259(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = (__this->___followeeMoves_9);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = (__this->___positionDirty_10);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_0026:
	{
		__this->___positionDirty_10 = 0;
		WorldObjectFollower_ResetPosition_m3782(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m3781 (WorldObjectFollower_t689 * __this, GameObject_t352 * ___go, Vector3_t538  ___offset, bool ___followeeMoves, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___go;
		__this->___objectToFollow_7 = L_0;
		Vector3_t538  L_1 = ___offset;
		__this->___offset_11 = L_1;
		bool L_2 = ___followeeMoves;
		__this->___followeeMoves_9 = L_2;
		__this->___positionDirty_10 = 1;
		return;
	}
}
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m3782 (WorldObjectFollower_t689 * __this, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		GameObject_t352 * L_0 = (__this->___objectToFollow_7);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4199(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t538  L_2 = Transform_get_position_m4201(L_1, /*hidden argument*/NULL);
		Vector3_t538  L_3 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3787(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RectTransform_t545 * L_4 = (__this->___myRectTransform_8);
		Vector3_t538  L_5 = V_0;
		Vector3_t538  L_6 = (__this->___offset_11);
		Vector3_t538  L_7 = Vector3_op_Addition_m4359(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m4360(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
struct GameObject_t352;
struct Canvas_t547;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t547_m4363(__this, method) (( Canvas_t547 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4189_gshared)(__this, method)


// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3783 (WorldRelativeGUIElement_t550 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t547_m4363_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3784 (WorldRelativeGUIElement_t550 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t547_m4363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t709  V_0 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4199(L_0, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = ___parentCanvasGameObject;
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4199(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_SetParent_m4322(L_1, L_3, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = ___parentCanvasGameObject;
		NullCheck(L_4);
		Canvas_t547 * L_5 = GameObject_GetComponent_TisCanvas_t547_m4363(L_4, /*hidden argument*/GameObject_GetComponent_TisCanvas_t547_m4363_MethodInfo_var);
		__this->___parentCanvas_3 = L_5;
		Canvas_t547 * L_6 = (__this->___parentCanvas_3);
		NullCheck(L_6);
		Camera_t548 * L_7 = Canvas_get_worldCamera_m4366(L_6, /*hidden argument*/NULL);
		__this->___parentCamera_4 = L_7;
		Canvas_t547 * L_8 = (__this->___parentCanvas_3);
		NullCheck(L_8);
		Rect_t709  L_9 = Canvas_get_pixelRect_m4514(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = Rect_get_width_m4197((&V_0), /*hidden argument*/NULL);
		Canvas_t547 * L_11 = (__this->___parentCanvas_3);
		NullCheck(L_11);
		float L_12 = Canvas_get_scaleFactor_m4515(L_11, /*hidden argument*/NULL);
		__this->___parentCanvasWidth_5 = ((float)((float)L_10/(float)L_12));
		float L_13 = Rect_get_height_m4198((&V_0), /*hidden argument*/NULL);
		Canvas_t547 * L_14 = (__this->___parentCanvas_3);
		NullCheck(L_14);
		float L_15 = Canvas_get_scaleFactor_m4515(L_14, /*hidden argument*/NULL);
		__this->___parentCanvasHeight_6 = ((float)((float)L_13/(float)L_15));
		return;
	}
}
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t547_m4363_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3785 (WorldRelativeGUIElement_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t547_m4363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Canvas_t547 * V_1 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4365(NULL /*static, unused*/, (String_t*) &_stringLiteral1181, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		NullCheck(L_1);
		Canvas_t547 * L_2 = GameObject_GetComponent_TisCanvas_t547_m4363(L_1, /*hidden argument*/GameObject_GetComponent_TisCanvas_t547_m4363_MethodInfo_var);
		V_1 = L_2;
		Canvas_t547 * L_3 = V_1;
		NullCheck(L_3);
		Camera_t548 * L_4 = Canvas_get_worldCamera_m4366(L_3, /*hidden argument*/NULL);
		__this->___worldCamera_2 = L_4;
		return;
	}
}
// System.Single WorldRelativeGUIElement::WorldSizeToParentCanvasSize(System.Single)
extern "C" float WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3786 (WorldRelativeGUIElement_t550 * __this, float ___worldSize, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	Vector3_t538  V_1 = {0};
	Vector3_t538  V_2 = {0};
	Vector3_t538  V_3 = {0};
	{
		Vector3__ctor_m4194((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_0 = ___worldSize;
		Vector3__ctor_m4194((&V_1), (0.0f), L_0, (0.0f), /*hidden argument*/NULL);
		Vector3_t538  L_1 = V_0;
		Vector3_t538  L_2 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3787(__this, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector3_t538  L_3 = V_1;
		Vector3_t538  L_4 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3787(__this, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		Vector3_t538  L_5 = V_2;
		Vector3_t538  L_6 = V_3;
		float L_7 = Vector3_Distance_m4516(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t538  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3787 (WorldRelativeGUIElement_t550 * __this, Vector3_t538  ___worldPosition, const MethodInfo* method)
{
	{
		Camera_t548 * L_0 = (__this->___worldCamera_2);
		bool L_1 = Object_op_Equality_m3941(NULL /*static, unused*/, L_0, (Object_t718 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		WorldRelativeGUIElement_GetWorldCamera_m3785(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Camera_t548 * L_2 = (__this->___worldCamera_2);
		Vector3_t538  L_3 = ___worldPosition;
		Vector3_t538  L_4 = WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3788(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t538  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3788 (WorldRelativeGUIElement_t550 * __this, Camera_t548 * ___otherCamera, Vector3_t538  ___otherCameraPosition, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	Vector3_t538  V_1 = {0};
	{
		Camera_t548 * L_0 = ___otherCamera;
		Vector3_t538  L_1 = ___otherCameraPosition;
		NullCheck(L_0);
		Vector3_t538  L_2 = Camera_WorldToScreenPoint_m4195(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Camera_t548 * L_3 = (__this->___parentCamera_4);
		Vector3_t538  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t538  L_5 = Camera_ScreenToViewportPoint_m4517(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t538  L_6 = V_1;
		Vector3_t538  L_7 = WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3789(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertViewportPosToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t538  WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3789 (WorldRelativeGUIElement_t550 * __this, Vector3_t538  ___viewportPos, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ((&___viewportPos)->___x_1);
		float L_1 = (__this->___parentCanvasWidth_5);
		V_0 = ((float)((float)((float)((float)L_0-(float)(0.5f)))*(float)L_1));
		float L_2 = ((&___viewportPos)->___y_2);
		float L_3 = (__this->___parentCanvasHeight_6);
		V_1 = ((float)((float)((float)((float)L_2-(float)(0.5f)))*(float)L_3));
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3_t538  L_6 = {0};
		Vector3__ctor_m4194(&L_6, L_4, L_5, (0.0f), /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// BounceLerp
#include "AssemblyU2DCSharp_BounceLerpMethodDeclarations.h"
struct Component_t776;
struct SizeCamera_t519;
// Declaration !!0 UnityEngine.Component::GetComponent<SizeCamera>()
// !!0 UnityEngine.Component::GetComponent<SizeCamera>()
#define Component_GetComponent_TisSizeCamera_t519_m4435(__this, method) (( SizeCamera_t519 * (*) (Component_t776 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4156_gshared)(__this, method)


// System.Void ZoomCamera::.ctor()
extern "C" void ZoomCamera__ctor_m3790 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	{
		__this->___zoomOutScale_7 = (1.5f);
		BounceLerp__ctor_m2825(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t548_m4310_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSizeCamera_t519_m4435_MethodInfo_var;
extern "C" void ZoomCamera_Awake_m3791 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t548_m4310_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484115);
		Component_GetComponent_TisSizeCamera_t519_m4435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484206);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t548 * L_0 = Component_GetComponent_TisCamera_t548_m4310(__this, /*hidden argument*/Component_GetComponent_TisCamera_t548_m4310_MethodInfo_var);
		__this->___myCamera_10 = L_0;
		SizeCamera_t519 * L_1 = Component_GetComponent_TisSizeCamera_t519_m4435(__this, /*hidden argument*/Component_GetComponent_TisSizeCamera_t519_m4435_MethodInfo_var);
		__this->___mySizeCamera_11 = L_1;
		return;
	}
}
// System.Void ZoomCamera::Start()
extern "C" void ZoomCamera_Start_m3792 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_RegisterForEvents_m3796(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::OnDestroy()
extern "C" void ZoomCamera_OnDestroy_m3793 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_UnregisterForEvents_m3797(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::Update()
extern "C" void ZoomCamera_Update_m3794 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___zooming_13);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ZoomCamera_UpdateCameraSize_m3795(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ZoomCamera::UpdateCameraSize()
extern "C" void ZoomCamera_UpdateCameraSize_m3795 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = {0};
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3032(L_0, /*hidden argument*/NULL);
		V_5 = L_1;
		int32_t L_2 = V_5;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_3 = V_5;
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0121;
	}

IL_0021:
	{
		float L_4 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = (__this->___timeToStartZooming_9);
		V_2 = ((float)((float)L_4-(float)L_5));
		float L_6 = V_2;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		V_0 = (1.0f);
		goto IL_00a2;
	}

IL_0044:
	{
		((BounceLerp_t515 *)__this)->___periodOffsetDeg_5 = (270.0f);
		float L_7 = (__this->___zoomOutScale_7);
		((BounceLerp_t515 *)__this)->___additionalScale_4 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)L_7))));
		((BounceLerp_t515 *)__this)->___totalPeriods_3 = (0.5f);
		float L_8 = (((BounceLerp_t515 *)__this)->___totalPeriods_3);
		((BounceLerp_t515 *)__this)->___secondsPerPeriod_2 = ((float)((float)(1.4f)/(float)L_8));
		float L_9 = (__this->___zoomOutScale_7);
		float L_10 = V_2;
		float L_11 = BounceLerp_GetCoefficientForTime_m2826(__this, L_10, (&V_1), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_9*(float)L_11));
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_00a2;
		}
	}
	{
		__this->___zooming_13 = 0;
	}

IL_00a2:
	{
		goto IL_0134;
	}

IL_00a7:
	{
		float L_13 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = (__this->___timeToStartZooming_9);
		V_3 = ((float)((float)L_13-(float)L_14));
		float L_15 = V_3;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00cb;
		}
	}
	{
		float L_16 = (__this->___zoomOutScale_7);
		V_0 = L_16;
		goto IL_011c;
	}

IL_00cb:
	{
		((BounceLerp_t515 *)__this)->___periodOffsetDeg_5 = (90.0f);
		float L_17 = (__this->___zoomOutScale_7);
		((BounceLerp_t515 *)__this)->___additionalScale_4 = ((float)((float)L_17-(float)(1.0f)));
		((BounceLerp_t515 *)__this)->___totalPeriods_3 = (0.4f);
		float L_18 = (((BounceLerp_t515 *)__this)->___totalPeriods_3);
		((BounceLerp_t515 *)__this)->___secondsPerPeriod_2 = ((float)((float)(0.7f)/(float)L_18));
		float L_19 = V_3;
		float L_20 = BounceLerp_GetCoefficientForTime_m2826(__this, L_19, (&V_1), /*hidden argument*/NULL);
		V_0 = L_20;
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_011c;
		}
	}
	{
		__this->___zooming_13 = 0;
	}

IL_011c:
	{
		goto IL_0134;
	}

IL_0121:
	{
		__this->___zooming_13 = 0;
		float L_22 = (__this->___zoomOutScale_7);
		V_0 = L_22;
		goto IL_0134;
	}

IL_0134:
	{
		float L_23 = V_0;
		SizeCamera_t519 * L_24 = (__this->___mySizeCamera_11);
		NullCheck(L_24);
		float L_25 = SizeCamera_get_finalActualWorldHalfHeight_m3618(L_24, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_23*(float)L_25));
		Camera_t548 * L_26 = (__this->___myCamera_10);
		NullCheck(L_26);
		float L_27 = Camera_get_orthographicSize_m4518(L_26, /*hidden argument*/NULL);
		float L_28 = V_4;
		if ((((float)L_27) == ((float)L_28)))
		{
			goto IL_0162;
		}
	}
	{
		Camera_t548 * L_29 = (__this->___myCamera_10);
		float L_30 = V_4;
		NullCheck(L_29);
		Camera_set_orthographicSize_m4491(L_29, L_30, /*hidden argument*/NULL);
	}

IL_0162:
	{
		return;
	}
}
// System.Void ZoomCamera::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* ZoomCamera_OnGamePhaseChanged_m3798_MethodInfo_var;
extern "C" void ZoomCamera_RegisterForEvents_m3796 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		ZoomCamera_OnGamePhaseChanged_m3798_MethodInfo_var = il2cpp_codegen_method_info_from_index(614);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_12);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___registeredForEvents_12 = 1;
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ZoomCamera_OnGamePhaseChanged_m3798_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3017(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3030(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* ZoomCamera_OnGamePhaseChanged_m3798_MethodInfo_var;
extern "C" void ZoomCamera_UnregisterForEvents_m3797 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		ZoomCamera_OnGamePhaseChanged_m3798_MethodInfo_var = il2cpp_codegen_method_info_from_index(614);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_12);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ZoomCamera_OnGamePhaseChanged_m3798_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3017(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3031(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ZoomCamera::OnGamePhaseChanged()
extern "C" void ZoomCamera_OnGamePhaseChanged_m3798 (ZoomCamera_t661 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4301(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_8 = L_0;
		__this->___zooming_13 = 1;
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GamePhaseState_get_gamePhase_m3032(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = (__this->___phaseStartTime_8);
		__this->___timeToStartZooming_9 = ((float)((float)L_3+(float)(0.5f)));
	}

IL_0034:
	{
		GamePhaseState_t564 * L_4 = GamePhaseState_get_instance_m3040(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_gamePhase_m3032(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		float L_6 = (__this->___phaseStartTime_8);
		__this->___timeToStartZooming_9 = ((float)((float)L_6+(float)(0.3f)));
	}

IL_0056:
	{
		return;
	}
}
// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunction.h"
#ifndef _MSC_VER
#else
#endif
// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunctionMethodDeclarations.h"



// System.Void UnionAssets.FLE.EventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandlerFunction__ctor_m3799 (EventHandlerFunction_t690 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m3800 (EventHandlerFunction_t690 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandlerFunction_Invoke_m3800((EventHandlerFunction_t690 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t690(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m3801 (EventHandlerFunction_t690 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m3802 (EventHandlerFunction_t690 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnionAssets.FLE.DataEventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_DataEventHandlerFunction.h"
#ifndef _MSC_VER
#else
#endif
// UnionAssets.FLE.DataEventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_DataEventHandlerFunctionMethodDeclarations.h"

// UnionAssets.FLE.CEvent
#include "AssemblyU2DCSharp_UnionAssets_FLE_CEvent.h"


// System.Void UnionAssets.FLE.DataEventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void DataEventHandlerFunction__ctor_m3803 (DataEventHandlerFunction_t691 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m3804 (DataEventHandlerFunction_t691 * __this, CEvent_t133 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DataEventHandlerFunction_Invoke_m3804((DataEventHandlerFunction_t691 *)__this->___prev_9,___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, CEvent_t133 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, CEvent_t133 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t691(Il2CppObject* delegate, CEvent_t133 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	CEvent_t133 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnionAssets.FLE.CEvent'."));
}
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m3805 (DataEventHandlerFunction_t691 * __this, CEvent_t133 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m3806 (DataEventHandlerFunction_t691 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegate.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegateMethodDeclarations.h"



// System.Void Facebook.InitDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void InitDelegate__ctor_m3807 (InitDelegate_t419 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m3808 (InitDelegate_t419 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		InitDelegate_Invoke_m3808((InitDelegate_t419 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_InitDelegate_t419(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult Facebook.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * InitDelegate_BeginInvoke_m3809 (InitDelegate_t419 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m3810 (InitDelegate_t419 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegate.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegateMethodDeclarations.h"

// FBResult
#include "AssemblyU2DCSharp_FBResult.h"


// System.Void Facebook.FacebookDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FacebookDelegate__ctor_m3811 (FacebookDelegate_t433 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m3812 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FacebookDelegate_Invoke_m3812((FacebookDelegate_t433 *)__this->___prev_9,___result, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, FBResult_t281 * ___result, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, FBResult_t281 * ___result, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FacebookDelegate_t433(Il2CppObject* delegate, FBResult_t281 * ___result)
{
	// Marshaling of parameter '___result' to native representation
	FBResult_t281 * ____result_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'FBResult'."));
}
// System.IAsyncResult Facebook.FacebookDelegate::BeginInvoke(FBResult,System.AsyncCallback,System.Object)
extern "C" Object_t * FacebookDelegate_BeginInvoke_m3813 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m3814 (FacebookDelegate_t433 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegate.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegateMethodDeclarations.h"



// System.Void Facebook.HideUnityDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HideUnityDelegate__ctor_m3815 (HideUnityDelegate_t420 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C" void HideUnityDelegate_Invoke_m3816 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HideUnityDelegate_Invoke_m3816((HideUnityDelegate_t420 *)__this->___prev_9,___isUnityShown, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___isUnityShown, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___isUnityShown,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___isUnityShown, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___isUnityShown,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_HideUnityDelegate_t420(Il2CppObject* delegate, bool ___isUnityShown)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___isUnityShown' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___isUnityShown);

	// Marshaling cleanup of parameter '___isUnityShown' native representation

}
// System.IAsyncResult Facebook.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" Object_t * HideUnityDelegate_BeginInvoke_m3817 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t59_il2cpp_TypeInfo_var, &___isUnityShown);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.HideUnityDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HideUnityDelegate_EndInvoke_m3818 (HideUnityDelegate_t420 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
