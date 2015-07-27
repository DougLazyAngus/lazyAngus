#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// CameraController
#include "AssemblyU2DCSharp_CameraController.h"
#ifndef _MSC_VER
#else
#endif
// CameraController
#include "AssemblyU2DCSharp_CameraControllerMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// SizeCamera
#include "AssemblyU2DCSharp_SizeCamera.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// SizeCamera
#include "AssemblyU2DCSharp_SizeCameraMethodDeclarations.h"
// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdControllerMethodDeclarations.h"


// System.Void CameraController::.ctor()
extern "C" void CameraController__ctor_m254 (CameraController_t65 * __this, const MethodInfo* method)
{
	{
		__this->___worldCameraTopMargin_4 = (180.0f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C" void CameraController_Start_m255 (CameraController_t65 * __this, const MethodInfo* method)
{
	{
		SizeCamera_t64 * L_0 = (__this->___uxCamera_3);
		NullCheck(L_0);
		L_0->___screenPixelsBottomToIgnore_5 = (0.0f);
		SizeCamera_t64 * L_1 = (__this->___uxCamera_3);
		NullCheck(L_1);
		L_1->___screenPixelsTopToIgnore_4 = (0.0f);
		SizeCamera_t64 * L_2 = (__this->___uxCamera_3);
		NullCheck(L_2);
		SizeCamera_Configure_m2891(L_2, /*hidden argument*/NULL);
		SizeCamera_t64 * L_3 = (__this->___worldCamera_2);
		float L_4 = (__this->___worldCameraTopMargin_4);
		NullCheck(L_3);
		L_3->___screenPixelsTopToIgnore_4 = L_4;
		SizeCamera_t64 * L_5 = (__this->___worldCamera_2);
		float L_6 = GoogleAdController_GetBannerHeight_m2518(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___screenPixelsBottomToIgnore_5 = L_6;
		SizeCamera_t64 * L_7 = (__this->___worldCamera_2);
		NullCheck(L_7);
		SizeCamera_Configure_m2891(L_7, /*hidden argument*/NULL);
		return;
	}
}
// ConsoleBase
#include "AssemblyU2DCSharp_ConsoleBase.h"
#ifndef _MSC_VER
#else
#endif
// ConsoleBase
#include "AssemblyU2DCSharp_ConsoleBaseMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// FBResult
#include "AssemblyU2DCSharp_FBResult.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegate.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegate.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegate.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// FBResult
#include "AssemblyU2DCSharp_FBResultMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// FB
#include "AssemblyU2DCSharp_FBMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegateMethodDeclarations.h"
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegateMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegateMethodDeclarations.h"


// System.Void ConsoleBase::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t67_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase__ctor_m256 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUIStyle_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___status_2 = (String_t*) &_stringLiteral27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastResponse_3 = L_0;
		GUIStyle_t67 * L_1 = (GUIStyle_t67 *)il2cpp_codegen_object_new (GUIStyle_t67_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3064(L_1, /*hidden argument*/NULL);
		__this->___textStyle_4 = L_1;
		Vector2_t70  L_2 = Vector2_get_zero_m3065(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollPosition_6 = L_2;
		__this->___buttonHeight_7 = ((int32_t)60);
		int32_t L_3 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mainWindowWidth_8 = ((int32_t)((int32_t)L_3-(int32_t)((int32_t)30)));
		int32_t L_4 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mainWindowFullWidth_9 = L_4;
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::Awake()
extern TypeInfo* RectOffset_t597_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_Awake_m257 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t67 * L_0 = (__this->___textStyle_4);
		NullCheck(L_0);
		GUIStyle_set_alignment_m3067(L_0, 0, /*hidden argument*/NULL);
		GUIStyle_t67 * L_1 = (__this->___textStyle_4);
		NullCheck(L_1);
		GUIStyle_set_wordWrap_m3068(L_1, 1, /*hidden argument*/NULL);
		GUIStyle_t67 * L_2 = (__this->___textStyle_4);
		RectOffset_t597 * L_3 = (RectOffset_t597 *)il2cpp_codegen_object_new (RectOffset_t597_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3069(L_3, ((int32_t)10), ((int32_t)10), ((int32_t)10), ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_set_padding_m3070(L_2, L_3, /*hidden argument*/NULL);
		GUIStyle_t67 * L_4 = (__this->___textStyle_4);
		NullCheck(L_4);
		GUIStyle_set_stretchHeight_m3071(L_4, 1, /*hidden argument*/NULL);
		GUIStyle_t67 * L_5 = (__this->___textStyle_4);
		NullCheck(L_5);
		GUIStyle_set_stretchWidth_m3072(L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ConsoleBase::Button(System.String)
extern TypeInfo* GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var;
extern "C" bool ConsoleBase_Button_m258 (ConsoleBase_t69 * __this, String_t* ___label, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___label;
		GUILayoutOptionU5BU5D_t598* L_1 = ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 2));
		int32_t L_2 = (__this->___buttonHeight_7);
		GUILayoutOption_t599 * L_3 = GUILayout_MinHeight_m3073(NULL /*static, unused*/, (((float)L_2)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_1, 0)) = (GUILayoutOption_t599 *)L_3;
		GUILayoutOptionU5BU5D_t598* L_4 = L_1;
		int32_t L_5 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t599 * L_6 = GUILayout_MaxWidth_m3074(NULL /*static, unused*/, (((float)L_5)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_6);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_4, 1)) = (GUILayoutOption_t599 *)L_6;
		bool L_7 = GUILayout_Button_m3075(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void ConsoleBase::LabelAndTextField(System.String,System.String&)
extern TypeInfo* GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_LabelAndTextField_m259 (ConsoleBase_t69 * __this, String_t* ___label, String_t** ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_BeginHorizontal_m3076(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		String_t* L_0 = ___label;
		GUILayoutOptionU5BU5D_t598* L_1 = ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t599 * L_2 = GUILayout_MaxWidth_m3074(NULL /*static, unused*/, (150.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_1, 0)) = (GUILayoutOption_t599 *)L_2;
		GUILayout_Label_m3077(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		String_t** L_3 = ___text;
		String_t** L_4 = ___text;
		GUILayoutOptionU5BU5D_t598* L_5 = ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 1));
		int32_t L_6 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t599 * L_7 = GUILayout_MaxWidth_m3074(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_6-(int32_t)((int32_t)150))))), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_5, 0)) = (GUILayoutOption_t599 *)L_7;
		String_t* L_8 = GUILayout_TextField_m3078(NULL /*static, unused*/, (*((String_t**)L_4)), L_5, /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_8;
		GUILayout_EndHorizontal_m3079(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ConsoleBase::IsHorizontalLayout()
extern "C" bool ConsoleBase_IsHorizontalLayout_m260 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_orientation_m3080(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Int32 ConsoleBase::get_TextWindowHeight()
extern "C" int32_t ConsoleBase_get_TextWindowHeight_m261 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ConsoleBase_IsHorizontalLayout_m260(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Screen_get_height_m3081(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0015:
	{
		G_B3_0 = ((int32_t)85);
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Void ConsoleBase::Callback(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_Callback_m262 (ConsoleBase_t69 * __this, FBResult_t241 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___lastResponseTexture_5 = (Texture2D_t68 *)NULL;
		FBResult_t241 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Error_m2024(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		FBResult_t241 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Error_m2024(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral28, L_4, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_5;
		goto IL_0095;
	}

IL_0032:
	{
		FBResult_t241 * L_6 = ___result;
		NullCheck(L_6);
		String_t* L_7 = FBResult_get_Text_m2023(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		FBResult_t241 * L_9 = ___result;
		NullCheck(L_9);
		String_t* L_10 = FBResult_get_Text_m2023(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral29, L_10, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_11;
		goto IL_0095;
	}

IL_005d:
	{
		FBResult_t241 * L_12 = ___result;
		NullCheck(L_12);
		Texture2D_t68 * L_13 = FBResult_get_Texture_m2022(L_12, /*hidden argument*/NULL);
		bool L_14 = Object_op_Inequality_m3082(NULL /*static, unused*/, L_13, (Object_t600 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		FBResult_t241 * L_15 = ___result;
		NullCheck(L_15);
		Texture2D_t68 * L_16 = FBResult_get_Texture_m2022(L_15, /*hidden argument*/NULL);
		__this->___lastResponseTexture_5 = L_16;
		__this->___lastResponse_3 = (String_t*) &_stringLiteral30;
		goto IL_0095;
	}

IL_008a:
	{
		__this->___lastResponse_3 = (String_t*) &_stringLiteral31;
	}

IL_0095:
	{
		return;
	}
}
// System.Void ConsoleBase::AddCommonFooter()
extern TypeInfo* GUILayoutUtility_t601_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t602_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_AddCommonFooter_m263 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t595  V_0 = {0};
	float V_1 = 0.0f;
	{
		int32_t L_0 = ConsoleBase_get_TextWindowHeight_m261(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t601_il2cpp_TypeInfo_var);
		Rect_t595  L_1 = GUILayoutUtility_GetRect_m3083(NULL /*static, unused*/, (640.0f), (((float)L_0)), /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t595  L_2 = V_0;
		ObjectU5BU5D_t582* L_3 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		String_t* L_4 = FB_get_AppId_m1981(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t582* L_5 = L_3;
		String_t* L_6 = FB_get_UserId_m1982(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t582* L_7 = L_5;
		bool L_8 = FB_get_IsLoggedIn_m1985(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_10;
		ObjectU5BU5D_t582* L_11 = L_7;
		String_t* L_12 = (__this->___lastResponse_3);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 3)) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m3084(NULL /*static, unused*/, (String_t*) &_stringLiteral32, L_11, /*hidden argument*/NULL);
		GUIStyle_t67 * L_14 = (__this->___textStyle_4);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_TextArea_m3085(NULL /*static, unused*/, L_2, L_13, L_14, /*hidden argument*/NULL);
		Texture2D_t68 * L_15 = (__this->___lastResponseTexture_5);
		bool L_16 = Object_op_Inequality_m3082(NULL /*static, unused*/, L_15, (Object_t600 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		float L_17 = Rect_get_y_m3086((&V_0), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_17+(float)(200.0f)));
		int32_t L_18 = Screen_get_height_m3081(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t68 * L_19 = (__this->___lastResponseTexture_5);
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		float L_21 = V_1;
		if ((!(((float)(((float)((int32_t)((int32_t)L_18-(int32_t)L_20))))) < ((float)L_21))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_22 = Screen_get_height_m3081(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t68 * L_23 = (__this->___lastResponseTexture_5);
		NullCheck(L_23);
		int32_t L_24 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		V_1 = (((float)((int32_t)((int32_t)L_22-(int32_t)L_24))));
	}

IL_009f:
	{
		float L_25 = Rect_get_x_m3087((&V_0), /*hidden argument*/NULL);
		float L_26 = V_1;
		Texture2D_t68 * L_27 = (__this->___lastResponseTexture_5);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_27);
		Texture2D_t68 * L_29 = (__this->___lastResponseTexture_5);
		NullCheck(L_29);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_29);
		Rect_t595  L_31 = {0};
		Rect__ctor_m3088(&L_31, ((float)((float)L_25+(float)(5.0f))), L_26, (((float)L_28)), (((float)L_30)), /*hidden argument*/NULL);
		Texture2D_t68 * L_32 = (__this->___lastResponseTexture_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_Label_m3089(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		return;
	}
}
// System.Void ConsoleBase::AddCommonHeader()
extern TypeInfo* GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t604_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t602_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_AddCommonHeader_m264 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Input_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t603  V_0 = {0};
	Touch_t603  V_1 = {0};
	Vector2_t70  V_2 = {0};
	{
		bool L_0 = ConsoleBase_IsHorizontalLayout_m260(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GUILayout_BeginHorizontal_m3076(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_BeginVertical_m3090(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0021:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (5.0f), /*hidden argument*/NULL);
		String_t* L_1 = (__this->___status_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral33, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t598* L_3 = ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 1));
		int32_t L_4 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t599 * L_5 = GUILayout_MinWidth_m3092(NULL /*static, unused*/, (((float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_5);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_3, 0)) = (GUILayoutOption_t599 *)L_5;
		GUILayout_Box_m3093(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t604_il2cpp_TypeInfo_var);
		int32_t L_6 = Input_get_touchCount_m3094(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t604_il2cpp_TypeInfo_var);
		Touch_t603  L_7 = Input_GetTouch_m3095(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Touch_get_phase_m3096((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		Vector2_t70 * L_9 = &(__this->___scrollPosition_6);
		Vector2_t70 * L_10 = L_9;
		float L_11 = (L_10->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t604_il2cpp_TypeInfo_var);
		Touch_t603  L_12 = Input_GetTouch_m3095(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_12;
		Vector2_t70  L_13 = Touch_get_deltaPosition_m3097((&V_1), /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = ((&V_2)->___y_2);
		L_10->___y_2 = ((float)((float)L_11+(float)L_14));
	}

IL_009c:
	{
		Vector2_t70  L_15 = (__this->___scrollPosition_6);
		GUILayoutOptionU5BU5D_t598* L_16 = ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 1));
		int32_t L_17 = (__this->___mainWindowFullWidth_9);
		GUILayoutOption_t599 * L_18 = GUILayout_MinWidth_m3092(NULL /*static, unused*/, (((float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, L_18);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_16, 0)) = (GUILayoutOption_t599 *)L_18;
		Vector2_t70  L_19 = GUILayout_BeginScrollView_m3098(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->___scrollPosition_6 = L_19;
		GUILayout_BeginVertical_m3090(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_20 = FB_get_IsInitialized_m1986(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, ((((int32_t)L_20) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		bool L_21 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral34, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0105;
		}
	}
	{
		ConsoleBase_CallFBInit_m265(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		String_t* L_22 = FB_get_AppId_m1981(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral35, L_22, /*hidden argument*/NULL);
		__this->___status_2 = L_23;
	}

IL_0105:
	{
		GUILayout_BeginHorizontal_m3076(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_24 = FB_get_IsInitialized_m1986(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		bool L_25 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral36, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_013b;
		}
	}
	{
		ConsoleBase_CallFBLogin_m268(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral37;
	}

IL_013b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_26 = FB_get_IsLoggedIn_m1985(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		bool L_27 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral38, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0166;
		}
	}
	{
		ConsoleBase_CallFBLoginForPublish_m269(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral39;
	}

IL_0166:
	{
		bool L_28 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral40, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0187;
		}
	}
	{
		ConsoleBase_CallFBLogout_m271(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral41;
	}

IL_0187:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_29 = FB_get_IsInitialized_m1986(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		GUILayout_EndHorizontal_m3079(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBInit()
extern TypeInfo* InitDelegate_t379_il2cpp_TypeInfo_var;
extern TypeInfo* HideUnityDelegate_t380_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_OnInitComplete_m266_MethodInfo_var;
extern const MethodInfo* ConsoleBase_OnHideUnity_m267_MethodInfo_var;
extern "C" void ConsoleBase_CallFBInit_m265 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InitDelegate_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		HideUnityDelegate_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_OnInitComplete_m266_MethodInfo_var = il2cpp_codegen_method_info_from_index(24);
		ConsoleBase_OnHideUnity_m267_MethodInfo_var = il2cpp_codegen_method_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_OnInitComplete_m266_MethodInfo_var };
		InitDelegate_t379 * L_1 = (InitDelegate_t379 *)il2cpp_codegen_object_new (InitDelegate_t379_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m3051(L_1, __this, L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConsoleBase_OnHideUnity_m267_MethodInfo_var };
		HideUnityDelegate_t380 * L_3 = (HideUnityDelegate_t380 *)il2cpp_codegen_object_new (HideUnityDelegate_t380_il2cpp_TypeInfo_var);
		HideUnityDelegate__ctor_m3059(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_Init_m1987(NULL /*static, unused*/, L_1, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::OnInitComplete()
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_OnInitComplete_m266 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1985(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral42, L_2, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::OnHideUnity(System.Boolean)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_OnHideUnity_m267 (ConsoleBase_t69 * __this, bool ___isGameShown, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___isGameShown;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral43, L_2, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBLogin()
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_LoginCallback_m270_MethodInfo_var;
extern "C" void ConsoleBase_CallFBLogin_m268 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_LoginCallback_m270_MethodInfo_var = il2cpp_codegen_method_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_LoginCallback_m270_MethodInfo_var };
		FacebookDelegate_t393 * L_1 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_Login_m1990(NULL /*static, unused*/, (String_t*) &_stringLiteral44, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBLoginForPublish()
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_LoginCallback_m270_MethodInfo_var;
extern "C" void ConsoleBase_CallFBLoginForPublish_m269 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_LoginCallback_m270_MethodInfo_var = il2cpp_codegen_method_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_LoginCallback_m270_MethodInfo_var };
		FacebookDelegate_t393 * L_1 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_Login_m1990(NULL /*static, unused*/, (String_t*) &_stringLiteral45, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::LoginCallback(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_LoginCallback_m270 (ConsoleBase_t69 * __this, FBResult_t241 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBResult_t241 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Error_m2024(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		FBResult_t241 * L_2 = ___result;
		NullCheck(L_2);
		String_t* L_3 = FBResult_get_Error_m2024(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral28, L_3, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_4;
		goto IL_004b;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_5 = FB_get_IsLoggedIn_m1985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		__this->___lastResponse_3 = (String_t*) &_stringLiteral46;
		goto IL_004b;
	}

IL_0040:
	{
		__this->___lastResponse_3 = (String_t*) &_stringLiteral47;
	}

IL_004b:
	{
		return;
	}
}
// System.Void ConsoleBase::CallFBLogout()
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_CallFBLogout_m271 (ConsoleBase_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_Logout_m1991(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// GameGroupsConsole
#include "AssemblyU2DCSharp_GameGroupsConsole.h"
#ifndef _MSC_VER
#else
#endif
// GameGroupsConsole
#include "AssemblyU2DCSharp_GameGroupsConsoleMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// Facebook.HttpMethod
#include "AssemblyU2DCSharp_Facebook_HttpMethod.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// Facebook.MiniJSON.Json
#include "AssemblyU2DCSharp_Facebook_MiniJSON_JsonMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// Facebook.HttpMethod
#include "AssemblyU2DCSharp_Facebook_HttpMethodMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"


// System.Void GameGroupsConsole::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole__ctor_m272 (GameGroupsConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___GamerGroupName_10 = (String_t*) &_stringLiteral48;
		__this->___GamerGroupDesc_11 = (String_t*) &_stringLiteral49;
		__this->___GamerGroupPrivacy_12 = (String_t*) &_stringLiteral50;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GamerGroupAdmin_13 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GamerGroupCurrentGroup_14 = L_1;
		ConsoleBase__ctor_m256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::GroupCreateCB(FBResult)
extern TypeInfo* Json_t413_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t272_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GroupCreateCB_m273 (GameGroupsConsole_t71 * __this, FBResult_t241 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t272 * V_0 = {0};
	{
		FBResult_t241 * L_0 = ___result;
		ConsoleBase_Callback_m262(__this, L_0, /*hidden argument*/NULL);
		FBResult_t241 * L_1 = ___result;
		NullCheck(L_1);
		String_t* L_2 = FBResult_get_Text_m2023(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		FBResult_t241 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Text_m2023(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t413_il2cpp_TypeInfo_var);
		Object_t * L_5 = Json_Deserialize_m2240(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t272 *)Castclass(L_5, Dictionary_2_t272_il2cpp_TypeInfo_var));
		Dictionary_2_t272 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_6, (String_t*) &_stringLiteral51);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t272 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral51);
		__this->___GamerGroupCurrentGroup_14 = ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var));
	}

IL_0049:
	{
		return;
	}
}
// System.Void GameGroupsConsole::GroupDeleteCB(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GroupDeleteCB_m274 (GameGroupsConsole_t71 * __this, FBResult_t241 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBResult_t241 * L_0 = ___result;
		ConsoleBase_Callback_m262(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GamerGroupCurrentGroup_14 = L_1;
		return;
	}
}
// System.Void GameGroupsConsole::GetAllGroupsCB(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t413_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t272_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t584_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GetAllGroupsCB_m275 (GameGroupsConsole_t71 * __this, FBResult_t241 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Json_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		List_1_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t272 * V_0 = {0};
	List_1_t584 * V_1 = {0};
	Dictionary_2_t272 * V_2 = {0};
	{
		FBResult_t241 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Text_m2023(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_007d;
		}
	}
	{
		FBResult_t241 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Text_m2023(L_3, /*hidden argument*/NULL);
		((ConsoleBase_t69 *)__this)->___lastResponse_3 = L_4;
		FBResult_t241 * L_5 = ___result;
		NullCheck(L_5);
		String_t* L_6 = FBResult_get_Text_m2023(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t413_il2cpp_TypeInfo_var);
		Object_t * L_7 = Json_Deserialize_m2240(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t272 *)Castclass(L_7, Dictionary_2_t272_il2cpp_TypeInfo_var));
		Dictionary_2_t272 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_8, (String_t*) &_stringLiteral52);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t272 * L_10 = V_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral52);
		V_1 = ((List_1_t584 *)Castclass(L_11, List_1_t584_il2cpp_TypeInfo_var));
		List_1_t584 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_12);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		List_1_t584 * L_14 = V_1;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_14, 0);
		V_2 = ((Dictionary_2_t272 *)Castclass(L_15, Dictionary_2_t272_il2cpp_TypeInfo_var));
		Dictionary_2_t272 * L_16 = V_2;
		NullCheck(L_16);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_16, (String_t*) &_stringLiteral51);
		__this->___GamerGroupCurrentGroup_14 = ((String_t*)Castclass(L_17, String_t_il2cpp_TypeInfo_var));
	}

IL_007d:
	{
		FBResult_t241 * L_18 = ___result;
		NullCheck(L_18);
		String_t* L_19 = FBResult_get_Error_m2024(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0099;
		}
	}
	{
		FBResult_t241 * L_21 = ___result;
		NullCheck(L_21);
		String_t* L_22 = FBResult_get_Error_m2024(L_21, /*hidden argument*/NULL);
		((ConsoleBase_t69 *)__this)->___lastResponse_3 = L_22;
	}

IL_0099:
	{
		return;
	}
}
// System.Void GameGroupsConsole::CallFbGetAllOwnedGroups()
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t408_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GetAllGroupsCB_m275_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbGetAllOwnedGroups_m276 (GameGroupsConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		HttpMethod_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		GameGroupsConsole_GetAllGroupsCB_m275_MethodInfo_var = il2cpp_codegen_method_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		String_t* L_0 = FB_get_AppId_m1981(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m174(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t408_il2cpp_TypeInfo_var);
		HttpMethod_t408 * L_2 = HttpMethod_get_GET_m2214(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)GameGroupsConsole_GetAllGroupsCB_m275_MethodInfo_var };
		FacebookDelegate_t393 * L_4 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_4, __this, L_3, /*hidden argument*/NULL);
		FB_API_m1996(NULL /*static, unused*/, L_1, L_2, L_4, (Dictionary_2_t82 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallFbGetUserGroups()
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t408_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbGetUserGroups_m277 (GameGroupsConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		HttpMethod_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		String_t* L_0 = FB_get_AppId_m1981(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral54, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t408_il2cpp_TypeInfo_var);
		HttpMethod_t408 * L_2 = HttpMethod_get_GET_m2214(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_4 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_4, __this, L_3, /*hidden argument*/NULL);
		FB_API_m1996(NULL /*static, unused*/, L_1, L_2, L_4, (Dictionary_2_t82 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallCreateGroupDialog()
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GroupCreateCB_m273_MethodInfo_var;
extern "C" void GameGroupsConsole_CallCreateGroupDialog_m278 (GameGroupsConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GameGroupsConsole_GroupCreateCB_m273_MethodInfo_var = il2cpp_codegen_method_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___GamerGroupName_10);
		String_t* L_1 = (__this->___GamerGroupDesc_11);
		String_t* L_2 = (__this->___GamerGroupPrivacy_12);
		IntPtr_t L_3 = { (void*)GameGroupsConsole_GroupCreateCB_m273_MethodInfo_var };
		FacebookDelegate_t393 * L_4 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_4, __this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_GameGroupCreate_m2001(NULL /*static, unused*/, L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallJoinGroupDialog()
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GroupCreateCB_m273_MethodInfo_var;
extern "C" void GameGroupsConsole_CallJoinGroupDialog_m279 (GameGroupsConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GameGroupsConsole_GroupCreateCB_m273_MethodInfo_var = il2cpp_codegen_method_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___GamerGroupCurrentGroup_14);
		IntPtr_t L_1 = { (void*)GameGroupsConsole_GroupCreateCB_m273_MethodInfo_var };
		FacebookDelegate_t393 * L_2 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_2, __this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_GameGroupJoin_m2002(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallFbPostToGamerGroup()
extern TypeInfo* Dictionary_2_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t408_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3101_MethodInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbPostToGamerGroup_m280 (GameGroupsConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		HttpMethod_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Dictionary_2__ctor_m3101_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t82 * V_0 = {0};
	{
		Dictionary_2_t82 * L_0 = (Dictionary_2_t82 *)il2cpp_codegen_object_new (Dictionary_2_t82_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3101(L_0, /*hidden argument*/Dictionary_2__ctor_m3101_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t82 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral56);
		String_t* L_2 = (__this->___GamerGroupCurrentGroup_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t408_il2cpp_TypeInfo_var);
		HttpMethod_t408 * L_4 = HttpMethod_get_POST_m2215(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_6 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_6, __this, L_5, /*hidden argument*/NULL);
		Dictionary_2_t82 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_API_m1996(NULL /*static, unused*/, L_3, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::OnGUI()
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t602_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_OnGUI_m281 (GameGroupsConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConsoleBase_AddCommonHeader_m264(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1985(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_1 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral58, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameGroupsConsole_CallFbGetAllOwnedGroups_m276(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		String_t** L_2 = &(__this->___GamerGroupName_10);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral59, L_2, /*hidden argument*/NULL);
		String_t** L_3 = &(__this->___GamerGroupDesc_11);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral60, L_3, /*hidden argument*/NULL);
		String_t** L_4 = &(__this->___GamerGroupPrivacy_12);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral61, L_4, /*hidden argument*/NULL);
		bool L_5 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral62, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		GameGroupsConsole_CallCreateGroupDialog_m278(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
		String_t** L_6 = &(__this->___GamerGroupCurrentGroup_14);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral63, L_6, /*hidden argument*/NULL);
		bool L_7 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral64, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0096;
		}
	}
	{
		GameGroupsConsole_CallJoinGroupDialog_m279(__this, /*hidden argument*/NULL);
	}

IL_0096:
	{
		bool L_8 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral65, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		GameGroupsConsole_CallFbGetUserGroups_m277(__this, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		bool L_9 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral66, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00cc;
		}
	}
	{
		GameGroupsConsole_CallFbPostToGamerGroup_m280(__this, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_EndVertical_m3102(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndScrollView_m3103(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_10 = ConsoleBase_IsHorizontalLayout_m260(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00f0;
		}
	}
	{
		GUILayout_EndVertical_m3102(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		ConsoleBase_AddCommonFooter_m263(__this, /*hidden argument*/NULL);
		bool L_11 = ConsoleBase_IsHorizontalLayout_m260(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_010c;
		}
	}
	{
		GUILayout_EndHorizontal_m3079(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_010c:
	{
		return;
	}
}
// InteractiveConsole/<TakeScreenshot>c__Iterator0
#include "AssemblyU2DCSharp_InteractiveConsole_U3CTakeScreenshotU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// InteractiveConsole/<TakeScreenshot>c__Iterator0
#include "AssemblyU2DCSharp_InteractiveConsole_U3CTakeScreenshotU3Ec__MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// InteractiveConsole
#include "AssemblyU2DCSharp_InteractiveConsole.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void InteractiveConsole/<TakeScreenshot>c__Iterator0::.ctor()
extern "C" void U3CTakeScreenshotU3Ec__Iterator0__ctor_m282 (U3CTakeScreenshotU3Ec__Iterator0_t74 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object InteractiveConsole/<TakeScreenshot>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTakeScreenshotU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m283 (U3CTakeScreenshotU3Ec__Iterator0_t74 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object InteractiveConsole/<TakeScreenshot>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTakeScreenshotU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m284 (U3CTakeScreenshotU3Ec__Iterator0_t74 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean InteractiveConsole/<TakeScreenshot>c__Iterator0::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t605_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t68_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t72_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t408_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" bool U3CTakeScreenshotU3Ec__Iterator0_MoveNext_m285 (U3CTakeScreenshotU3Ec__Iterator0_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t605_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		Texture2D_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		WWWForm_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(104);
		HttpMethod_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_5);
		V_0 = L_0;
		__this->___U24PC_5 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0115;
	}

IL_0021:
	{
		WaitForEndOfFrame_t605 * L_2 = (WaitForEndOfFrame_t605 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t605_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m3104(L_2, /*hidden argument*/NULL);
		__this->___U24current_6 = L_2;
		__this->___U24PC_5 = 1;
		goto IL_0117;
	}

IL_0038:
	{
		int32_t L_3 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CwidthU3E__0_0 = L_3;
		int32_t L_4 = Screen_get_height_m3081(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CheightU3E__1_1 = L_4;
		int32_t L_5 = (__this->___U3CwidthU3E__0_0);
		int32_t L_6 = (__this->___U3CheightU3E__1_1);
		Texture2D_t68 * L_7 = (Texture2D_t68 *)il2cpp_codegen_object_new (Texture2D_t68_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3105(L_7, L_5, L_6, 3, 0, /*hidden argument*/NULL);
		__this->___U3CtexU3E__2_2 = L_7;
		Texture2D_t68 * L_8 = (__this->___U3CtexU3E__2_2);
		int32_t L_9 = (__this->___U3CwidthU3E__0_0);
		int32_t L_10 = (__this->___U3CheightU3E__1_1);
		Rect_t595  L_11 = {0};
		Rect__ctor_m3088(&L_11, (0.0f), (0.0f), (((float)L_9)), (((float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m3106(L_8, L_11, 0, 0, /*hidden argument*/NULL);
		Texture2D_t68 * L_12 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_12);
		Texture2D_Apply_m3107(L_12, /*hidden argument*/NULL);
		Texture2D_t68 * L_13 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_13);
		ByteU5BU5D_t36* L_14 = Texture2D_EncodeToPNG_m3108(L_13, /*hidden argument*/NULL);
		__this->___U3CscreenshotU3E__3_3 = L_14;
		WWWForm_t72 * L_15 = (WWWForm_t72 *)il2cpp_codegen_object_new (WWWForm_t72_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3109(L_15, /*hidden argument*/NULL);
		__this->___U3CwwwFormU3E__4_4 = L_15;
		WWWForm_t72 * L_16 = (__this->___U3CwwwFormU3E__4_4);
		ByteU5BU5D_t36* L_17 = (__this->___U3CscreenshotU3E__3_3);
		NullCheck(L_16);
		WWWForm_AddBinaryData_m3110(L_16, (String_t*) &_stringLiteral122, L_17, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
		WWWForm_t72 * L_18 = (__this->___U3CwwwFormU3E__4_4);
		NullCheck(L_18);
		WWWForm_AddField_m3111(L_18, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral124, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t408_il2cpp_TypeInfo_var);
		HttpMethod_t408 * L_19 = HttpMethod_get_POST_m2215(NULL /*static, unused*/, /*hidden argument*/NULL);
		InteractiveConsole_t73 * L_20 = (__this->___U3CU3Ef__this_7);
		IntPtr_t L_21 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_22 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_22, L_20, L_21, /*hidden argument*/NULL);
		WWWForm_t72 * L_23 = (__this->___U3CwwwFormU3E__4_4);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_API_m1997(NULL /*static, unused*/, (String_t*) &_stringLiteral125, L_19, L_22, L_23, /*hidden argument*/NULL);
		__this->___U24PC_5 = (-1);
	}

IL_0115:
	{
		return 0;
	}

IL_0117:
	{
		return 1;
	}
	// Dead block : IL_0119: ldloc.1
}
// System.Void InteractiveConsole/<TakeScreenshot>c__Iterator0::Dispose()
extern "C" void U3CTakeScreenshotU3Ec__Iterator0_Dispose_m286 (U3CTakeScreenshotU3Ec__Iterator0_t74 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void InteractiveConsole/<TakeScreenshot>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CTakeScreenshotU3Ec__Iterator0_Reset_m287 (U3CTakeScreenshotU3Ec__Iterator0_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m162(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// InteractiveConsole
#include "AssemblyU2DCSharp_InteractiveConsoleMethodDeclarations.h"

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Char
#include "mscorlib_System_Char.h"
// FBAppRequestsFilterGroup
#include "AssemblyU2DCSharp_FBAppRequestsFilterGroup.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// FBAppRequestsFilterGroup
#include "AssemblyU2DCSharp_FBAppRequestsFilterGroupMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// FB/Canvas
#include "AssemblyU2DCSharp_FB_CanvasMethodDeclarations.h"
// FB/AppEvents
#include "AssemblyU2DCSharp_FB_AppEventsMethodDeclarations.h"
struct Enumerable_t38;
struct List_1_t75;
struct IEnumerable_1_t606;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t38;
struct List_1_t584;
struct IEnumerable_1_t607;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t584 * Enumerable_ToList_TisObject_t_m3113_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m3113(__this /* static, unused */, p0, method) (( List_1_t584 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3113_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisString_t_m3112(__this /* static, unused */, p0, method) (( List_1_t75 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3113_gshared)(__this /* static, unused */, p0, method)


// System.Void InteractiveConsole::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t76_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3114_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3115_MethodInfo_var;
extern "C" void InteractiveConsole__ctor_m288 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		List_1_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Dictionary_2_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		List_1__ctor_m3114_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Dictionary_2__ctor_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FriendSelectorTitle_10 = L_0;
		__this->___FriendSelectorMessage_11 = (String_t*) &_stringLiteral67;
		StringU5BU5D_t45* L_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 3));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral68);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral68;
		StringU5BU5D_t45* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral69);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 1)) = (String_t*)(String_t*) &_stringLiteral69;
		StringU5BU5D_t45* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral70);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral70;
		__this->___FriendFilterTypes_12 = L_3;
		List_1_t75 * L_4 = (List_1_t75 *)il2cpp_codegen_object_new (List_1_t75_il2cpp_TypeInfo_var);
		List_1__ctor_m3114(L_4, /*hidden argument*/List_1__ctor_m3114_MethodInfo_var);
		__this->___FriendFilterGroupNames_14 = L_4;
		List_1_t75 * L_5 = (List_1_t75 *)il2cpp_codegen_object_new (List_1_t75_il2cpp_TypeInfo_var);
		List_1__ctor_m3114(L_5, /*hidden argument*/List_1__ctor_m3114_MethodInfo_var);
		__this->___FriendFilterGroupIDs_15 = L_5;
		__this->___FriendSelectorData_17 = (String_t*) &_stringLiteral71;
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FriendSelectorExcludeIds_18 = L_6;
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FriendSelectorMax_19 = L_7;
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___DirectRequestTitle_20 = L_8;
		__this->___DirectRequestMessage_21 = (String_t*) &_stringLiteral72;
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___DirectRequestTo_22 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedToId_23 = L_10;
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedLink_24 = L_11;
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedLinkName_25 = L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedLinkCaption_26 = L_13;
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedLinkDescription_27 = L_14;
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedPicture_28 = L_15;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedMediaSource_29 = L_16;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedActionName_30 = L_17;
		String_t* L_18 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedActionLink_31 = L_18;
		String_t* L_19 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FeedReference_32 = L_19;
		Dictionary_2_t76 * L_20 = (Dictionary_2_t76 *)il2cpp_codegen_object_new (Dictionary_2_t76_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3115(L_20, /*hidden argument*/Dictionary_2__ctor_m3115_MethodInfo_var);
		__this->___FeedProperties_34 = L_20;
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___PayProduct_35 = L_21;
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___ApiQuery_36 = L_22;
		ConsoleBase__ctor_m256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBActivateApp()
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t241_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_CallFBActivateApp_m289 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FBResult_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_ActivateApp_m1999(NULL /*static, unused*/, /*hidden argument*/NULL);
		FBResult_t241 * L_0 = (FBResult_t241 *)il2cpp_codegen_object_new (FBResult_t241_il2cpp_TypeInfo_var);
		FBResult__ctor_m2021(L_0, (String_t*) &_stringLiteral73, (String_t*)NULL, /*hidden argument*/NULL);
		ConsoleBase_Callback_m262(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppRequestAsFriendSelector()
extern TypeInfo* Nullable_1_t590_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t608_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t584_il2cpp_TypeInfo_var;
extern TypeInfo* FBAppRequestsFilterGroup_t384_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m3117_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3119_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisString_t_m3112_MethodInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppRequestAsFriendSelector_m290 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		CharU5BU5D_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		List_1_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		FBAppRequestsFilterGroup_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Nullable_1__ctor_m3117_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		List_1__ctor_m3119_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerable_ToList_TisString_t_m3112_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t590  V_0 = {0};
	Exception_t27 * V_1 = {0};
	StringU5BU5D_t45* V_2 = {0};
	List_1_t584 * V_3 = {0};
	int32_t V_4 = 0;
	Nullable_1_t590  V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	StringU5BU5D_t45* G_B6_0 = {0};
	Object_t * G_B14_0 = {0};
	String_t* G_B14_1 = {0};
	Object_t * G_B13_0 = {0};
	String_t* G_B13_1 = {0};
	List_1_t584 * G_B15_0 = {0};
	Object_t * G_B15_1 = {0};
	String_t* G_B15_2 = {0};
	{
		Initobj (Nullable_1_t590_il2cpp_TypeInfo_var, (&V_5));
		Nullable_1_t590  L_0 = V_5;
		V_0 = L_0;
		String_t* L_1 = (__this->___FriendSelectorMax_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		String_t* L_4 = (__this->___FriendSelectorMax_19);
		int32_t L_5 = Int32_Parse_m3116(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Nullable_1_t590  L_6 = {0};
		Nullable_1__ctor_m3117(&L_6, L_5, /*hidden argument*/Nullable_1__ctor_m3117_MethodInfo_var);
		V_0 = L_6;
		goto IL_0048;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t27_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t27 *)__exception_local);
		Exception_t27 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_7);
		((ConsoleBase_t69 *)__this)->___status_2 = L_8;
		goto IL_0048;
	} // end catch (depth: 1)

IL_0048:
	{
		String_t* L_9 = (__this->___FriendSelectorExcludeIds_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_11 = String_op_Equality_m223(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		G_B6_0 = ((StringU5BU5D_t45*)(NULL));
		goto IL_0079;
	}

IL_0063:
	{
		String_t* L_12 = (__this->___FriendSelectorExcludeIds_18);
		CharU5BU5D_t608* L_13 = ((CharU5BU5D_t608*)SZArrayNew(CharU5BU5D_t608_il2cpp_TypeInfo_var, 1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_12);
		StringU5BU5D_t45* L_14 = String_Split_m3118(L_12, L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
	}

IL_0079:
	{
		V_2 = G_B6_0;
		List_1_t584 * L_15 = (List_1_t584 *)il2cpp_codegen_object_new (List_1_t584_il2cpp_TypeInfo_var);
		List_1__ctor_m3119(L_15, /*hidden argument*/List_1__ctor_m3119_MethodInfo_var);
		V_3 = L_15;
		int32_t L_16 = (__this->___FriendFilterSelection_13);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		List_1_t584 * L_17 = V_3;
		StringU5BU5D_t45* L_18 = (__this->___FriendFilterTypes_12);
		int32_t L_19 = (__this->___FriendFilterSelection_13);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck(L_17);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_17, (*(String_t**)(String_t**)SZArrayLdElema(L_18, L_20)));
	}

IL_009f:
	{
		int32_t L_21 = (__this->___NumFriendFilterGroups_16);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		V_4 = 0;
		goto IL_00f3;
	}

IL_00b3:
	{
		List_1_t584 * L_22 = V_3;
		List_1_t75 * L_23 = (__this->___FriendFilterGroupNames_14);
		int32_t L_24 = V_4;
		NullCheck(L_23);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_23, L_24);
		List_1_t75 * L_26 = (__this->___FriendFilterGroupIDs_15);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		String_t* L_28 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_26, L_27);
		CharU5BU5D_t608* L_29 = ((CharU5BU5D_t608*)SZArrayNew(CharU5BU5D_t608_il2cpp_TypeInfo_var, 1));
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_29, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_28);
		StringU5BU5D_t45* L_30 = String_Split_m3118(L_28, L_29, /*hidden argument*/NULL);
		List_1_t75 * L_31 = Enumerable_ToList_TisString_t_m3112(NULL /*static, unused*/, (Object_t*)(Object_t*)L_30, /*hidden argument*/Enumerable_ToList_TisString_t_m3112_MethodInfo_var);
		FBAppRequestsFilterGroup_t384 * L_32 = (FBAppRequestsFilterGroup_t384 *)il2cpp_codegen_object_new (FBAppRequestsFilterGroup_t384_il2cpp_TypeInfo_var);
		FBAppRequestsFilterGroup__ctor_m2005(L_32, L_25, L_31, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_22, L_32);
		int32_t L_33 = V_4;
		V_4 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00f3:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = (__this->___NumFriendFilterGroups_16);
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_00b3;
		}
	}

IL_0100:
	{
		String_t* L_36 = (__this->___FriendSelectorMessage_11);
		List_1_t584 * L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_37);
		G_B13_0 = NULL;
		G_B13_1 = L_36;
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			G_B14_0 = NULL;
			G_B14_1 = L_36;
			goto IL_0119;
		}
	}
	{
		List_1_t584 * L_39 = V_3;
		G_B15_0 = L_39;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_011a;
	}

IL_0119:
	{
		G_B15_0 = ((List_1_t584 *)(NULL));
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_011a:
	{
		StringU5BU5D_t45* L_40 = V_2;
		Nullable_1_t590  L_41 = V_0;
		String_t* L_42 = (__this->___FriendSelectorData_17);
		String_t* L_43 = (__this->___FriendSelectorTitle_10);
		IntPtr_t L_44 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_45 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_45, __this, L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_AppRequest_m1994(NULL /*static, unused*/, G_B15_2, (StringU5BU5D_t45*)(StringU5BU5D_t45*)G_B15_1, G_B15_0, L_40, L_41, L_42, L_43, L_45, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppRequestAsDirectRequest()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t609_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t590_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppRequestAsDirectRequest_m291 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		CharU5BU5D_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Nullable_1_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t590  V_0 = {0};
	{
		String_t* L_0 = (__this->___DirectRequestTo_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m223(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_t609 * L_3 = (ArgumentException_t609 *)il2cpp_codegen_object_new (ArgumentException_t609_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3120(L_3, (String_t*) &_stringLiteral74, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		String_t* L_4 = (__this->___DirectRequestMessage_21);
		String_t* L_5 = (__this->___DirectRequestTo_22);
		CharU5BU5D_t608* L_6 = ((CharU5BU5D_t608*)SZArrayNew(CharU5BU5D_t608_il2cpp_TypeInfo_var, 1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_5);
		StringU5BU5D_t45* L_7 = String_Split_m3118(L_5, L_6, /*hidden argument*/NULL);
		Initobj (Nullable_1_t590_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t590  L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = (__this->___DirectRequestTitle_20);
		IntPtr_t L_11 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_12 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_12, __this, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_AppRequest_m1994(NULL /*static, unused*/, L_4, L_7, (List_1_t584 *)NULL, (StringU5BU5D_t45*)(StringU5BU5D_t45*)NULL, L_8, L_9, L_10, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBFeed()
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBFeed_m292 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t76 * V_0 = {0};
	{
		V_0 = (Dictionary_2_t76 *)NULL;
		bool L_0 = (__this->___IncludeFeedProperties_33);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t76 * L_1 = (__this->___FeedProperties_34);
		V_0 = L_1;
	}

IL_0014:
	{
		String_t* L_2 = (__this->___FeedToId_23);
		String_t* L_3 = (__this->___FeedLink_24);
		String_t* L_4 = (__this->___FeedLinkName_25);
		String_t* L_5 = (__this->___FeedLinkCaption_26);
		String_t* L_6 = (__this->___FeedLinkDescription_27);
		String_t* L_7 = (__this->___FeedPicture_28);
		String_t* L_8 = (__this->___FeedMediaSource_29);
		String_t* L_9 = (__this->___FeedActionName_30);
		String_t* L_10 = (__this->___FeedActionLink_31);
		String_t* L_11 = (__this->___FeedReference_32);
		Dictionary_2_t76 * L_12 = V_0;
		IntPtr_t L_13 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_14 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_14, __this, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_Feed_m1995(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBPay()
extern TypeInfo* Nullable_1_t590_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_CallFBPay_m293 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t590  V_0 = {0};
	Nullable_1_t590  V_1 = {0};
	{
		String_t* L_0 = (__this->___PayProduct_35);
		Initobj (Nullable_1_t590_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t590  L_1 = V_0;
		Initobj (Nullable_1_t590_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t590  L_2 = V_1;
		Canvas_Pay_m1973(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral76, 1, L_1, L_2, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (FacebookDelegate_t393 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBAPI()
extern TypeInfo* HttpMethod_t408_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBAPI_m294 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___ApiQuery_36);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t408_il2cpp_TypeInfo_var);
		HttpMethod_t408 * L_1 = HttpMethod_get_GET_m2214(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_3 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_API_m1996(NULL /*static, unused*/, L_0, L_1, L_3, (Dictionary_2_t82 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBGetDeepLink()
extern TypeInfo* FacebookDelegate_t393_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m262_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBGetDeepLink_m295 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m262_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_Callback_m262_MethodInfo_var };
		FacebookDelegate_t393 * L_1 = (FacebookDelegate_t393 *)il2cpp_codegen_object_new (FacebookDelegate_t393_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3055(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		FB_GetDeepLink_m2000(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppEventLogEvent()
extern TypeInfo* Nullable_1_t591_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t272_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t241_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3121_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppEventLogEvent_m296 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Dictionary_2_t272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2__ctor_m3121_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t591  V_0 = {0};
	Dictionary_2_t272 * V_1 = {0};
	{
		Initobj (Nullable_1_t591_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t591  L_0 = V_0;
		Dictionary_2_t272 * L_1 = (Dictionary_2_t272 *)il2cpp_codegen_object_new (Dictionary_2_t272_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3121(L_1, /*hidden argument*/Dictionary_2__ctor_m3121_MethodInfo_var);
		V_1 = L_1;
		Dictionary_2_t272 * L_2 = V_1;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_2, (String_t*) &_stringLiteral78, (String_t*) &_stringLiteral79);
		Dictionary_2_t272 * L_3 = V_1;
		AppEvents_LogEvent_m1970(NULL /*static, unused*/, (String_t*) &_stringLiteral77, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		String_t* L_4 = FB_get_AppId_m1981(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m222(NULL /*static, unused*/, (String_t*) &_stringLiteral80, L_4, (String_t*) &_stringLiteral81, /*hidden argument*/NULL);
		FBResult_t241 * L_6 = (FBResult_t241 *)il2cpp_codegen_object_new (FBResult_t241_il2cpp_TypeInfo_var);
		FBResult__ctor_m2021(L_6, L_5, (String_t*)NULL, /*hidden argument*/NULL);
		ConsoleBase_Callback_m262(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::Awake()
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_Awake_m297 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConsoleBase_Awake_m257(__this, /*hidden argument*/NULL);
		Dictionary_2_t76 * L_0 = (__this->___FeedProperties_34);
		StringU5BU5D_t45* L_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral83);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral83;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, StringU5BU5D_t45* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(!0,!1) */, L_0, (String_t*) &_stringLiteral82, L_1);
		Dictionary_2_t76 * L_2 = (__this->___FeedProperties_34);
		StringU5BU5D_t45* L_3 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral85);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral85;
		StringU5BU5D_t45* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral86);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral86;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, StringU5BU5D_t45* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(!0,!1) */, L_2, (String_t*) &_stringLiteral84, L_4);
		return;
	}
}
// System.Void InteractiveConsole::FriendFilterArea()
extern TypeInfo* GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_FriendFilterArea_m298 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_Label_m3077(NULL /*static, unused*/, (String_t*) &_stringLiteral87, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		int32_t L_0 = (__this->___FriendFilterSelection_13);
		StringU5BU5D_t45* L_1 = (__this->___FriendFilterTypes_12);
		GUILayoutOptionU5BU5D_t598* L_2 = ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 1));
		int32_t L_3 = (((ConsoleBase_t69 *)__this)->___buttonHeight_7);
		GUILayoutOption_t599 * L_4 = GUILayout_MinHeight_m3073(NULL /*static, unused*/, (((float)L_3)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_2, 0)) = (GUILayoutOption_t599 *)L_4;
		int32_t L_5 = GUILayout_SelectionGrid_m3122(NULL /*static, unused*/, L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		__this->___FriendFilterSelection_13 = L_5;
		return;
	}
}
// System.Void InteractiveConsole::OnGUI()
extern TypeInfo* FB_t381_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t602_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_OnGUI_m299 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t27 * V_0 = {0};
	Exception_t27 * V_1 = {0};
	Exception_t27 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConsoleBase_AddCommonHeader_m264(__this, /*hidden argument*/NULL);
		bool L_0 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral88, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InteractiveConsole_CallFBActivateApp_m289(__this, /*hidden argument*/NULL);
		((ConsoleBase_t69 *)__this)->___status_2 = (String_t*) &_stringLiteral89;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t381_il2cpp_TypeInfo_var);
		bool L_1 = FB_get_IsLoggedIn_m1985(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_2 = &(__this->___FriendSelectorTitle_10);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral90, L_2, /*hidden argument*/NULL);
		String_t** L_3 = &(__this->___FriendSelectorMessage_11);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral91, L_3, /*hidden argument*/NULL);
		String_t** L_4 = &(__this->___FriendSelectorExcludeIds_18);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral92, L_4, /*hidden argument*/NULL);
		InteractiveConsole_FriendFilterArea_m298(__this, /*hidden argument*/NULL);
		String_t** L_5 = &(__this->___FriendSelectorMax_19);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral93, L_5, /*hidden argument*/NULL);
		String_t** L_6 = &(__this->___FriendSelectorData_17);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral94, L_6, /*hidden argument*/NULL);
		bool L_7 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral95, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00ce;
		}
	}

IL_00a6:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallAppRequestAsFriendSelector_m290(__this, /*hidden argument*/NULL);
		((ConsoleBase_t69 *)__this)->___status_2 = (String_t*) &_stringLiteral96;
		goto IL_00ce;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t27_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00bc;
		throw e;
	}

CATCH_00bc:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t27 *)__exception_local);
		Exception_t27 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		((ConsoleBase_t69 *)__this)->___status_2 = L_9;
		goto IL_00ce;
	} // end catch (depth: 1)

IL_00ce:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_10 = &(__this->___DirectRequestTitle_20);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral90, L_10, /*hidden argument*/NULL);
		String_t** L_11 = &(__this->___DirectRequestMessage_21);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral91, L_11, /*hidden argument*/NULL);
		String_t** L_12 = &(__this->___DirectRequestTo_22);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral97, L_12, /*hidden argument*/NULL);
		bool L_13 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral98, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0143;
		}
	}

IL_011b:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallAppRequestAsDirectRequest_m291(__this, /*hidden argument*/NULL);
		((ConsoleBase_t69 *)__this)->___status_2 = (String_t*) &_stringLiteral99;
		goto IL_0143;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t27_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0131;
		throw e;
	}

CATCH_0131:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t27 *)__exception_local);
		Exception_t27 * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_14);
		((ConsoleBase_t69 *)__this)->___status_2 = L_15;
		goto IL_0143;
	} // end catch (depth: 1)

IL_0143:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_16 = &(__this->___FeedToId_23);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral100, L_16, /*hidden argument*/NULL);
		String_t** L_17 = &(__this->___FeedLink_24);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral101, L_17, /*hidden argument*/NULL);
		String_t** L_18 = &(__this->___FeedLinkName_25);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral102, L_18, /*hidden argument*/NULL);
		String_t** L_19 = &(__this->___FeedLinkDescription_27);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral103, L_19, /*hidden argument*/NULL);
		String_t** L_20 = &(__this->___FeedLinkCaption_26);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral104, L_20, /*hidden argument*/NULL);
		String_t** L_21 = &(__this->___FeedPicture_28);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral105, L_21, /*hidden argument*/NULL);
		String_t** L_22 = &(__this->___FeedMediaSource_29);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral106, L_22, /*hidden argument*/NULL);
		String_t** L_23 = &(__this->___FeedActionName_30);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral107, L_23, /*hidden argument*/NULL);
		String_t** L_24 = &(__this->___FeedActionLink_31);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral108, L_24, /*hidden argument*/NULL);
		String_t** L_25 = &(__this->___FeedReference_32);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral109, L_25, /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3076(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t598* L_26 = ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t599 * L_27 = GUILayout_Width_m3123(NULL /*static, unused*/, (150.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_27);
		*((GUILayoutOption_t599 **)(GUILayoutOption_t599 **)SZArrayLdElema(L_26, 0)) = (GUILayoutOption_t599 *)L_27;
		GUILayout_Label_m3077(NULL /*static, unused*/, (String_t*) &_stringLiteral110, L_26, /*hidden argument*/NULL);
		bool L_28 = (__this->___IncludeFeedProperties_33);
		bool L_29 = GUILayout_Toggle_m3124(NULL /*static, unused*/, L_28, (String_t*) &_stringLiteral111, ((GUILayoutOptionU5BU5D_t598*)SZArrayNew(GUILayoutOptionU5BU5D_t598_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___IncludeFeedProperties_33 = L_29;
		GUILayout_EndHorizontal_m3079(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_30 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral112, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0278;
		}
	}

IL_0250:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallFBFeed_m292(__this, /*hidden argument*/NULL);
		((ConsoleBase_t69 *)__this)->___status_2 = (String_t*) &_stringLiteral113;
		goto IL_0278;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t27_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0266;
		throw e;
	}

CATCH_0266:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t27 *)__exception_local);
		Exception_t27 * L_31 = V_2;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_31);
		((ConsoleBase_t69 *)__this)->___status_2 = L_32;
		goto IL_0278;
	} // end catch (depth: 1)

IL_0278:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_33 = &(__this->___ApiQuery_36);
		ConsoleBase_LabelAndTextField_m259(__this, (String_t*) &_stringLiteral114, L_33, /*hidden argument*/NULL);
		bool L_34 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral115, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_02b4;
		}
	}
	{
		((ConsoleBase_t69 *)__this)->___status_2 = (String_t*) &_stringLiteral116;
		InteractiveConsole_CallFBAPI_m294(__this, /*hidden argument*/NULL);
	}

IL_02b4:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		bool L_35 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_02e6;
		}
	}
	{
		((ConsoleBase_t69 *)__this)->___status_2 = (String_t*) &_stringLiteral118;
		Object_t * L_36 = InteractiveConsole_TakeScreenshot_m300(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3125(__this, L_36, /*hidden argument*/NULL);
	}

IL_02e6:
	{
		bool L_37 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral119, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_02fc;
		}
	}
	{
		InteractiveConsole_CallFBGetDeepLink_m295(__this, /*hidden argument*/NULL);
	}

IL_02fc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		bool L_38 = ConsoleBase_Button_m258(__this, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0323;
		}
	}
	{
		((ConsoleBase_t69 *)__this)->___status_2 = (String_t*) &_stringLiteral121;
		InteractiveConsole_CallAppEventLogEvent_m296(__this, /*hidden argument*/NULL);
	}

IL_0323:
	{
		GUILayout_Space_m3091(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_EndVertical_m3102(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndScrollView_m3103(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_39 = ConsoleBase_IsHorizontalLayout_m260(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0347;
		}
	}
	{
		GUILayout_EndVertical_m3102(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0347:
	{
		ConsoleBase_AddCommonFooter_m263(__this, /*hidden argument*/NULL);
		bool L_40 = ConsoleBase_IsHorizontalLayout_m260(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_035d;
		}
	}
	{
		GUILayout_EndHorizontal_m3079(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_035d:
	{
		return;
	}
}
// System.Collections.IEnumerator InteractiveConsole::TakeScreenshot()
extern TypeInfo* U3CTakeScreenshotU3Ec__Iterator0_t74_il2cpp_TypeInfo_var;
extern "C" Object_t * InteractiveConsole_TakeScreenshot_m300 (InteractiveConsole_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTakeScreenshotU3Ec__Iterator0_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	U3CTakeScreenshotU3Ec__Iterator0_t74 * V_0 = {0};
	{
		U3CTakeScreenshotU3Ec__Iterator0_t74 * L_0 = (U3CTakeScreenshotU3Ec__Iterator0_t74 *)il2cpp_codegen_object_new (U3CTakeScreenshotU3Ec__Iterator0_t74_il2cpp_TypeInfo_var);
		U3CTakeScreenshotU3Ec__Iterator0__ctor_m282(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTakeScreenshotU3Ec__Iterator0_t74 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_7 = __this;
		U3CTakeScreenshotU3Ec__Iterator0_t74 * L_2 = V_0;
		return L_2;
	}
}
// AN_ActivityTemplate
#include "AssemblyU2DCSharp_AN_ActivityTemplate.h"
#ifndef _MSC_VER
#else
#endif
// AN_ActivityTemplate
#include "AssemblyU2DCSharp_AN_ActivityTemplateMethodDeclarations.h"

// AN_BaseTemplate
#include "AssemblyU2DCSharp_AN_BaseTemplate.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// AN_PropertyTemplate
#include "AssemblyU2DCSharp_AN_PropertyTemplate.h"
// System.Collections.Generic.List`1/Enumerator<AN_PropertyTemplate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Collections.Generic.List`1<AN_PropertyTemplate>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocument.h"
// System.Xml.XmlElement
#include "System_Xml_System_Xml_XmlElement.h"
// AN_BaseTemplate
#include "AssemblyU2DCSharp_AN_BaseTemplateMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// AN_PropertyTemplate
#include "AssemblyU2DCSharp_AN_PropertyTemplateMethodDeclarations.h"
// System.Collections.Generic.List`1<AN_PropertyTemplate>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<AN_PropertyTemplate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"


// System.Void AN_ActivityTemplate::.ctor(System.Boolean,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t81_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3101_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3126_MethodInfo_var;
extern "C" void AN_ActivityTemplate__ctor_m301 (AN_ActivityTemplate_t77 * __this, bool ___isLauncher, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Dictionary_2_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		Dictionary_2__ctor_m3101_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Dictionary_2__ctor_m3126_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->____name_5 = L_0;
		AN_BaseTemplate__ctor_m318(__this, /*hidden argument*/NULL);
		bool L_1 = ___isLauncher;
		__this->____isLauncher_4 = L_1;
		String_t* L_2 = ___name;
		__this->____name_5 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, __this);
		__this->____id_3 = L_3;
		Dictionary_2_t82 * L_4 = (Dictionary_2_t82 *)il2cpp_codegen_object_new (Dictionary_2_t82_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3101(L_4, /*hidden argument*/Dictionary_2__ctor_m3101_MethodInfo_var);
		((AN_BaseTemplate_t78 *)__this)->____values_1 = L_4;
		Dictionary_2_t81 * L_5 = (Dictionary_2_t81 *)il2cpp_codegen_object_new (Dictionary_2_t81_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3126(L_5, /*hidden argument*/Dictionary_2__ctor_m3126_MethodInfo_var);
		((AN_BaseTemplate_t78 *)__this)->____properties_0 = L_5;
		String_t* L_6 = ___name;
		AN_BaseTemplate_SetValue_m329(__this, (String_t*) &_stringLiteral126, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ActivityTemplate::SetName(System.String)
extern "C" void AN_ActivityTemplate_SetName_m302 (AN_ActivityTemplate_t77 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->____name_5 = L_0;
		String_t* L_1 = ___name;
		AN_BaseTemplate_SetValue_m329(__this, (String_t*) &_stringLiteral126, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ActivityTemplate::SetAsLauncher(System.Boolean)
extern "C" void AN_ActivityTemplate_SetAsLauncher_m303 (AN_ActivityTemplate_t77 * __this, bool ___isLauncher, const MethodInfo* method)
{
	{
		bool L_0 = ___isLauncher;
		__this->____isLauncher_4 = L_0;
		return;
	}
}
// AN_PropertyTemplate AN_ActivityTemplate::GetLauncherPropertyTemplate()
extern TypeInfo* AN_PropertyTemplate_t86_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t86 * AN_ActivityTemplate_GetLauncherPropertyTemplate_m304 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	AN_PropertyTemplate_t86 * V_1 = {0};
	{
		AN_PropertyTemplate_t86 * L_0 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_0, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		V_0 = L_0;
		AN_PropertyTemplate_t86 * L_1 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_1, (String_t*) &_stringLiteral128, /*hidden argument*/NULL);
		V_1 = L_1;
		AN_PropertyTemplate_t86 * L_2 = V_1;
		NullCheck(L_2);
		AN_BaseTemplate_SetValue_m329(L_2, (String_t*) &_stringLiteral126, (String_t*) &_stringLiteral129, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_3 = V_0;
		AN_PropertyTemplate_t86 * L_4 = V_1;
		NullCheck(L_3);
		AN_BaseTemplate_AddProperty_m328(L_3, (String_t*) &_stringLiteral128, L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_5 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_5, (String_t*) &_stringLiteral130, /*hidden argument*/NULL);
		V_1 = L_5;
		AN_PropertyTemplate_t86 * L_6 = V_1;
		NullCheck(L_6);
		AN_BaseTemplate_SetValue_m329(L_6, (String_t*) &_stringLiteral126, (String_t*) &_stringLiteral131, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_7 = V_0;
		AN_PropertyTemplate_t86 * L_8 = V_1;
		NullCheck(L_7);
		AN_BaseTemplate_AddProperty_m328(L_7, (String_t*) &_stringLiteral130, L_8, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean AN_ActivityTemplate::IsLauncherProperty(AN_PropertyTemplate)
extern TypeInfo* Enumerator_t610_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3127_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3128_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3129_MethodInfo_var;
extern "C" bool AN_ActivityTemplate_IsLauncherProperty_m305 (AN_ActivityTemplate_t77 * __this, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m3128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	Enumerator_t610  V_1 = {0};
	bool V_2 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_PropertyTemplate_t86 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = AN_PropertyTemplate_get_Tag_m348(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_1, (String_t*) &_stringLiteral127);
		if (!L_2)
		{
			goto IL_0090;
		}
	}
	{
		AN_PropertyTemplate_t86 * L_3 = ___property;
		NullCheck(L_3);
		Dictionary_2_t81 * L_4 = AN_BaseTemplate_get_Properties_m336(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_t83 * L_5 = (List_1_t83 *)VirtFuncInvoker1< List_1_t83 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral130);
		NullCheck(L_5);
		Enumerator_t610  L_6 = List_1_GetEnumerator_m3127(L_5, /*hidden argument*/List_1_GetEnumerator_m3127_MethodInfo_var);
		V_1 = L_6;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0030:
		{
			AN_PropertyTemplate_t86 * L_7 = Enumerator_get_Current_m3128((&V_1), /*hidden argument*/Enumerator_get_Current_m3128_MethodInfo_var);
			V_0 = L_7;
			AN_PropertyTemplate_t86 * L_8 = V_0;
			NullCheck(L_8);
			Dictionary_2_t82 * L_9 = AN_BaseTemplate_get_Values_m335(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			bool L_10 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_9, (String_t*) &_stringLiteral126);
			if (!L_10)
			{
				goto IL_0073;
			}
		}

IL_004d:
		{
			AN_PropertyTemplate_t86 * L_11 = V_0;
			NullCheck(L_11);
			Dictionary_2_t82 * L_12 = AN_BaseTemplate_get_Values_m335(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			String_t* L_13 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_12, (String_t*) &_stringLiteral126);
			NullCheck(L_13);
			bool L_14 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_13, (String_t*) &_stringLiteral131);
			if (!L_14)
			{
				goto IL_0073;
			}
		}

IL_006c:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}

IL_0073:
		{
			bool L_15 = Enumerator_MoveNext_m3129((&V_1), /*hidden argument*/Enumerator_MoveNext_m3129_MethodInfo_var);
			if (L_15)
			{
				goto IL_0030;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_t610  L_16 = V_1;
		Enumerator_t610  L_17 = L_16;
		Object_t * L_18 = Box(Enumerator_t610_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_18);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x92, IL_0092)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Void AN_ActivityTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_ActivityTemplate_ToXmlElement_m306 (AN_ActivityTemplate_t77 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, const MethodInfo* method)
{
	AN_PropertyTemplate_t86 * V_0 = {0};
	{
		XmlDocument_t577 * L_0 = ___doc;
		XmlElement_t578 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m334(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		V_0 = (AN_PropertyTemplate_t86 *)NULL;
		bool L_2 = (__this->____isLauncher_4);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		AN_PropertyTemplate_t86 * L_3 = AN_ActivityTemplate_GetLauncherPropertyTemplate_m304(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		AN_PropertyTemplate_t86 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = AN_PropertyTemplate_get_Tag_m348(L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_6 = V_0;
		AN_BaseTemplate_AddProperty_m328(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		XmlDocument_t577 * L_7 = ___doc;
		XmlElement_t578 * L_8 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m333(__this, L_7, L_8, __this, /*hidden argument*/NULL);
		bool L_9 = (__this->____isLauncher_4);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_t81 * L_10 = (((AN_BaseTemplate_t78 *)__this)->____properties_0);
		NullCheck(L_10);
		List_1_t83 * L_11 = (List_1_t83 *)VirtFuncInvoker1< List_1_t83 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral127);
		AN_PropertyTemplate_t86 * L_12 = V_0;
		NullCheck(L_11);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t86 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_11, L_12);
	}

IL_0054:
	{
		return;
	}
}
// System.Boolean AN_ActivityTemplate::get_IsLauncher()
extern "C" bool AN_ActivityTemplate_get_IsLauncher_m307 (AN_ActivityTemplate_t77 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isLauncher_4);
		return L_0;
	}
}
// System.String AN_ActivityTemplate::get_Name()
extern "C" String_t* AN_ActivityTemplate_get_Name_m308 (AN_ActivityTemplate_t77 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_5);
		return L_0;
	}
}
// System.Int32 AN_ActivityTemplate::get_Id()
extern "C" int32_t AN_ActivityTemplate_get_Id_m309 (AN_ActivityTemplate_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_3);
		return L_0;
	}
}
// AN_ApplicationTemplate
#include "AssemblyU2DCSharp_AN_ApplicationTemplate.h"
#ifndef _MSC_VER
#else
#endif
// AN_ApplicationTemplate
#include "AssemblyU2DCSharp_AN_ApplicationTemplateMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2.h"
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,AN_ActivityTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1MethodDeclarations.h"
// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocumentMethodDeclarations.h"
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNodeMethodDeclarations.h"


// System.Void AN_ApplicationTemplate::.ctor()
extern TypeInfo* Dictionary_2_t79_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3130_MethodInfo_var;
extern "C" void AN_ApplicationTemplate__ctor_m310 (AN_ApplicationTemplate_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Dictionary_2__ctor_m3130_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BaseTemplate__ctor_m318(__this, /*hidden argument*/NULL);
		Dictionary_2_t79 * L_0 = (Dictionary_2_t79 *)il2cpp_codegen_object_new (Dictionary_2_t79_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3130(L_0, /*hidden argument*/Dictionary_2__ctor_m3130_MethodInfo_var);
		__this->____activities_2 = L_0;
		return;
	}
}
// System.Void AN_ApplicationTemplate::AddActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_AddActivity_m311 (AN_ApplicationTemplate_t80 * __this, AN_ActivityTemplate_t77 * ___activity, const MethodInfo* method)
{
	{
		Dictionary_2_t79 * L_0 = (__this->____activities_2);
		AN_ActivityTemplate_t77 * L_1 = ___activity;
		NullCheck(L_1);
		int32_t L_2 = AN_ActivityTemplate_get_Id_m309(L_1, /*hidden argument*/NULL);
		AN_ActivityTemplate_t77 * L_3 = ___activity;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, AN_ActivityTemplate_t77 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::Add(!0,!1) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void AN_ApplicationTemplate::RemoveActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_RemoveActivity_m312 (AN_ApplicationTemplate_t80 * __this, AN_ActivityTemplate_t77 * ___activity, const MethodInfo* method)
{
	{
		Dictionary_2_t79 * L_0 = (__this->____activities_2);
		AN_ActivityTemplate_t77 * L_1 = ___activity;
		NullCheck(L_1);
		int32_t L_2 = AN_ActivityTemplate_get_Id_m309(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::Remove(!0) */, L_0, L_2);
		return;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetOrCreateActivityWithName(System.String)
extern TypeInfo* AN_ActivityTemplate_t77_il2cpp_TypeInfo_var;
extern "C" AN_ActivityTemplate_t77 * AN_ApplicationTemplate_GetOrCreateActivityWithName_m313 (AN_ApplicationTemplate_t80 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_ActivityTemplate_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	AN_ActivityTemplate_t77 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		AN_ActivityTemplate_t77 * L_1 = AN_ApplicationTemplate_GetActivityWithName_m314(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_ActivityTemplate_t77 * L_2 = V_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___name;
		AN_ActivityTemplate_t77 * L_4 = (AN_ActivityTemplate_t77 *)il2cpp_codegen_object_new (AN_ActivityTemplate_t77_il2cpp_TypeInfo_var);
		AN_ActivityTemplate__ctor_m301(L_4, 0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AN_ActivityTemplate_t77 * L_5 = V_0;
		AN_ApplicationTemplate_AddActivity_m311(__this, L_5, /*hidden argument*/NULL);
	}

IL_001d:
	{
		AN_ActivityTemplate_t77 * L_6 = V_0;
		return L_6;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetActivityWithName(System.String)
extern TypeInfo* Enumerator_t612_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3131_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3132_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3133_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3134_MethodInfo_var;
extern "C" AN_ActivityTemplate_t77 * AN_ApplicationTemplate_GetActivityWithName_m314 (AN_ApplicationTemplate_t80 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m3131_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		Enumerator_get_Current_m3132_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		KeyValuePair_2_get_Value_m3133_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m3134_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t611  V_0 = {0};
	Enumerator_t612  V_1 = {0};
	AN_ActivityTemplate_t77 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t79 * L_0 = AN_ApplicationTemplate_get_Activities_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t612  L_1 = Dictionary_2_GetEnumerator_m3131(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3131_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_0011:
		{
			KeyValuePair_2_t611  L_2 = Enumerator_get_Current_m3132((&V_1), /*hidden argument*/Enumerator_get_Current_m3132_MethodInfo_var);
			V_0 = L_2;
			AN_ActivityTemplate_t77 * L_3 = KeyValuePair_2_get_Value_m3133((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3133_MethodInfo_var);
			NullCheck(L_3);
			String_t* L_4 = AN_ActivityTemplate_get_Name_m308(L_3, /*hidden argument*/NULL);
			String_t* L_5 = ___name;
			NullCheck(L_4);
			bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_4, L_5);
			if (!L_6)
			{
				goto IL_003d;
			}
		}

IL_0030:
		{
			AN_ActivityTemplate_t77 * L_7 = KeyValuePair_2_get_Value_m3133((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3133_MethodInfo_var);
			V_2 = L_7;
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}

IL_003d:
		{
			bool L_8 = Enumerator_MoveNext_m3134((&V_1), /*hidden argument*/Enumerator_MoveNext_m3134_MethodInfo_var);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Enumerator_t612  L_9 = V_1;
		Enumerator_t612  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t612_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_005a:
	{
		return (AN_ActivityTemplate_t77 *)NULL;
	}

IL_005c:
	{
		AN_ActivityTemplate_t77 * L_12 = V_2;
		return L_12;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetLauncherActivity()
extern TypeInfo* Enumerator_t612_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3131_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3132_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3133_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3134_MethodInfo_var;
extern "C" AN_ActivityTemplate_t77 * AN_ApplicationTemplate_GetLauncherActivity_m315 (AN_ApplicationTemplate_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m3131_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		Enumerator_get_Current_m3132_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		KeyValuePair_2_get_Value_m3133_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m3134_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t611  V_0 = {0};
	Enumerator_t612  V_1 = {0};
	AN_ActivityTemplate_t77 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t79 * L_0 = AN_ApplicationTemplate_get_Activities_m317(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t612  L_1 = Dictionary_2_GetEnumerator_m3131(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3131_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0011:
		{
			KeyValuePair_2_t611  L_2 = Enumerator_get_Current_m3132((&V_1), /*hidden argument*/Enumerator_get_Current_m3132_MethodInfo_var);
			V_0 = L_2;
			AN_ActivityTemplate_t77 * L_3 = KeyValuePair_2_get_Value_m3133((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3133_MethodInfo_var);
			NullCheck(L_3);
			bool L_4 = AN_ActivityTemplate_get_IsLauncher_m307(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_002a:
		{
			AN_ActivityTemplate_t77 * L_5 = KeyValuePair_2_get_Value_m3133((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3133_MethodInfo_var);
			V_2 = L_5;
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}

IL_0037:
		{
			bool L_6 = Enumerator_MoveNext_m3134((&V_1), /*hidden argument*/Enumerator_MoveNext_m3134_MethodInfo_var);
			if (L_6)
			{
				goto IL_0011;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_t612  L_7 = V_1;
		Enumerator_t612  L_8 = L_7;
		Object_t * L_9 = Box(Enumerator_t612_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_9);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0054:
	{
		return (AN_ActivityTemplate_t77 *)NULL;
	}

IL_0056:
	{
		AN_ActivityTemplate_t77 * L_10 = V_2;
		return L_10;
	}
}
// System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern TypeInfo* Enumerator_t613_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3135_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3136_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3137_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3139_MethodInfo_var;
extern "C" void AN_ApplicationTemplate_ToXmlElement_m316 (AN_ApplicationTemplate_t80 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_get_Keys_m3135_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		KeyCollection_GetEnumerator_m3136_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_get_Current_m3137_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		Enumerator_MoveNext_m3139_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t613  V_1 = {0};
	XmlElement_t578 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t577 * L_0 = ___doc;
		XmlElement_t578 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m334(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t577 * L_2 = ___doc;
		XmlElement_t578 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m333(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		Dictionary_2_t79 * L_4 = (__this->____activities_2);
		NullCheck(L_4);
		KeyCollection_t614 * L_5 = Dictionary_2_get_Keys_m3135(L_4, /*hidden argument*/Dictionary_2_get_Keys_m3135_MethodInfo_var);
		NullCheck(L_5);
		Enumerator_t613  L_6 = KeyCollection_GetEnumerator_m3136(L_5, /*hidden argument*/KeyCollection_GetEnumerator_m3136_MethodInfo_var);
		V_1 = L_6;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0028:
		{
			int32_t L_7 = Enumerator_get_Current_m3137((&V_1), /*hidden argument*/Enumerator_get_Current_m3137_MethodInfo_var);
			V_0 = L_7;
			XmlDocument_t577 * L_8 = ___doc;
			NullCheck(L_8);
			XmlElement_t578 * L_9 = XmlDocument_CreateElement_m3138(L_8, (String_t*) &_stringLiteral132, /*hidden argument*/NULL);
			V_2 = L_9;
			Dictionary_2_t79 * L_10 = (__this->____activities_2);
			int32_t L_11 = V_0;
			NullCheck(L_10);
			AN_ActivityTemplate_t77 * L_12 = (AN_ActivityTemplate_t77 *)VirtFuncInvoker1< AN_ActivityTemplate_t77 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::get_Item(!0) */, L_10, L_11);
			XmlDocument_t577 * L_13 = ___doc;
			XmlElement_t578 * L_14 = V_2;
			NullCheck(L_12);
			VirtActionInvoker2< XmlDocument_t577 *, XmlElement_t578 * >::Invoke(4 /* System.Void AN_ActivityTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_12, L_13, L_14);
			XmlElement_t578 * L_15 = ___parent;
			XmlElement_t578 * L_16 = V_2;
			NullCheck(L_15);
			VirtFuncInvoker1< XmlNode_t615 *, XmlNode_t615 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_15, L_16);
		}

IL_0057:
		{
			bool L_17 = Enumerator_MoveNext_m3139((&V_1), /*hidden argument*/Enumerator_MoveNext_m3139_MethodInfo_var);
			if (L_17)
			{
				goto IL_0028;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_t613  L_18 = V_1;
		Enumerator_t613  L_19 = L_18;
		Object_t * L_20 = Box(Enumerator_t613_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_20);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_20);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0074:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate> AN_ApplicationTemplate::get_Activities()
extern "C" Dictionary_2_t79 * AN_ApplicationTemplate_get_Activities_m317 (AN_ApplicationTemplate_t80 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t79 * L_0 = (__this->____activities_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5.h"
// System.Xml.XmlAttribute
#include "System_Xml_System_Xml_XmlAttribute.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6.h"
// System.Xml.XmlAttributeCollection
#include "System_Xml_System_Xml_XmlAttributeCollection.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"
// System.Xml.XmlAttribute
#include "System_Xml_System_Xml_XmlAttributeMethodDeclarations.h"
// System.Xml.XmlElement
#include "System_Xml_System_Xml_XmlElementMethodDeclarations.h"
// System.Xml.XmlAttributeCollection
#include "System_Xml_System_Xml_XmlAttributeCollectionMethodDeclarations.h"


// System.Void AN_BaseTemplate::.ctor()
extern TypeInfo* Dictionary_2_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t81_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3101_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3126_MethodInfo_var;
extern "C" void AN_BaseTemplate__ctor_m318 (AN_BaseTemplate_t78 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Dictionary_2_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		Dictionary_2__ctor_m3101_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Dictionary_2__ctor_m3126_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		Dictionary_2_t82 * L_0 = (Dictionary_2_t82 *)il2cpp_codegen_object_new (Dictionary_2_t82_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3101(L_0, /*hidden argument*/Dictionary_2__ctor_m3101_MethodInfo_var);
		__this->____values_1 = L_0;
		Dictionary_2_t81 * L_1 = (Dictionary_2_t81 *)il2cpp_codegen_object_new (Dictionary_2_t81_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3126(L_1, /*hidden argument*/Dictionary_2__ctor_m3126_MethodInfo_var);
		__this->____properties_0 = L_1;
		return;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreateIntentFilterWithName(System.String)
extern TypeInfo* AN_PropertyTemplate_t86_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetOrCreateIntentFilterWithName_m319 (AN_BaseTemplate_t78 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	AN_PropertyTemplate_t86 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		AN_PropertyTemplate_t86 * L_1 = AN_BaseTemplate_GetIntentFilterWithName_m320(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_PropertyTemplate_t86 * L_2 = V_0;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		AN_PropertyTemplate_t86 * L_3 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_3, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		V_0 = L_3;
		AN_PropertyTemplate_t86 * L_4 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_4, (String_t*) &_stringLiteral128, /*hidden argument*/NULL);
		V_1 = L_4;
		AN_PropertyTemplate_t86 * L_5 = V_1;
		String_t* L_6 = ___name;
		NullCheck(L_5);
		AN_BaseTemplate_SetValue_m329(L_5, (String_t*) &_stringLiteral126, L_6, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_7 = V_0;
		AN_PropertyTemplate_t86 * L_8 = V_1;
		NullCheck(L_7);
		AN_BaseTemplate_AddProperty_m327(L_7, L_8, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_9 = V_0;
		AN_BaseTemplate_AddProperty_m327(__this, L_9, /*hidden argument*/NULL);
	}

IL_003e:
	{
		AN_PropertyTemplate_t86 * L_10 = V_0;
		return L_10;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetIntentFilterWithName(System.String)
extern TypeInfo* Enumerator_t610_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3127_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3128_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3129_MethodInfo_var;
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetIntentFilterWithName_m320 (AN_BaseTemplate_t78 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m3128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	List_1_t83 * V_1 = {0};
	AN_PropertyTemplate_t86 * V_2 = {0};
	Enumerator_t610  V_3 = {0};
	String_t* V_4 = {0};
	AN_PropertyTemplate_t86 * V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral127;
		String_t* L_0 = V_0;
		List_1_t83 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m326(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		List_1_t83 * L_2 = V_1;
		NullCheck(L_2);
		Enumerator_t610  L_3 = List_1_GetEnumerator_m3127(L_2, /*hidden argument*/List_1_GetEnumerator_m3127_MethodInfo_var);
		V_3 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001a:
		{
			AN_PropertyTemplate_t86 * L_4 = Enumerator_get_Current_m3128((&V_3), /*hidden argument*/Enumerator_get_Current_m3128_MethodInfo_var);
			V_2 = L_4;
			AN_PropertyTemplate_t86 * L_5 = V_2;
			String_t* L_6 = AN_BaseTemplate_GetIntentFilterName_m321(__this, L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			String_t* L_7 = V_4;
			String_t* L_8 = ___name;
			NullCheck(L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_7, L_8);
			if (!L_9)
			{
				goto IL_0040;
			}
		}

IL_0038:
		{
			AN_PropertyTemplate_t86 * L_10 = V_2;
			V_5 = L_10;
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}

IL_0040:
		{
			bool L_11 = Enumerator_MoveNext_m3129((&V_3), /*hidden argument*/Enumerator_MoveNext_m3129_MethodInfo_var);
			if (L_11)
			{
				goto IL_001a;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_t610  L_12 = V_3;
		Enumerator_t610  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t610_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_005d:
	{
		return (AN_PropertyTemplate_t86 *)NULL;
	}

IL_005f:
	{
		AN_PropertyTemplate_t86 * L_15 = V_5;
		return L_15;
	}
}
// System.String AN_BaseTemplate::GetIntentFilterName(AN_PropertyTemplate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AN_BaseTemplate_GetIntentFilterName_m321 (AN_BaseTemplate_t78 * __this, AN_PropertyTemplate_t86 * ___intent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t83 * V_0 = {0};
	{
		AN_PropertyTemplate_t86 * L_0 = ___intent;
		NullCheck(L_0);
		List_1_t83 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m326(L_0, (String_t*) &_stringLiteral128, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t83 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_t83 * L_4 = V_0;
		NullCheck(L_4);
		AN_PropertyTemplate_t86 * L_5 = (AN_PropertyTemplate_t86 *)VirtFuncInvoker1< AN_PropertyTemplate_t86 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Item(System.Int32) */, L_4, 0);
		NullCheck(L_5);
		String_t* L_6 = AN_BaseTemplate_GetValue_m330(L_5, (String_t*) &_stringLiteral126, /*hidden argument*/NULL);
		return L_6;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_7;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithName(System.String,System.String)
extern TypeInfo* AN_PropertyTemplate_t86_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetOrCreatePropertyWithName_m322 (AN_BaseTemplate_t78 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		String_t* L_1 = ___name;
		AN_PropertyTemplate_t86 * L_2 = AN_BaseTemplate_GetPropertyWithName_m323(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		AN_PropertyTemplate_t86 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___tag;
		AN_PropertyTemplate_t86 * L_5 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		AN_PropertyTemplate_t86 * L_6 = V_0;
		String_t* L_7 = ___name;
		NullCheck(L_6);
		AN_BaseTemplate_SetValue_m329(L_6, (String_t*) &_stringLiteral126, L_7, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_8 = V_0;
		AN_BaseTemplate_AddProperty_m327(__this, L_8, /*hidden argument*/NULL);
	}

IL_0029:
	{
		AN_PropertyTemplate_t86 * L_9 = V_0;
		return L_9;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithName(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t610_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3127_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3128_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3129_MethodInfo_var;
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetPropertyWithName_m323 (AN_BaseTemplate_t78 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m3128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t83 * V_0 = {0};
	AN_PropertyTemplate_t86 * V_1 = {0};
	Enumerator_t610  V_2 = {0};
	AN_PropertyTemplate_t86 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___tag;
		List_1_t83 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m326(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t83 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t610  L_3 = List_1_GetEnumerator_m3127(L_2, /*hidden argument*/List_1_GetEnumerator_m3127_MethodInfo_var);
		V_2 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0014:
		{
			AN_PropertyTemplate_t86 * L_4 = Enumerator_get_Current_m3128((&V_2), /*hidden argument*/Enumerator_get_Current_m3128_MethodInfo_var);
			V_1 = L_4;
			AN_PropertyTemplate_t86 * L_5 = V_1;
			NullCheck(L_5);
			Dictionary_2_t82 * L_6 = AN_BaseTemplate_get_Values_m335(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_6, (String_t*) &_stringLiteral126);
			if (!L_7)
			{
				goto IL_0053;
			}
		}

IL_0031:
		{
			AN_PropertyTemplate_t86 * L_8 = V_1;
			NullCheck(L_8);
			Dictionary_2_t82 * L_9 = AN_BaseTemplate_get_Values_m335(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral126);
			String_t* L_11 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_12 = String_op_Equality_m223(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0053;
			}
		}

IL_004c:
		{
			AN_PropertyTemplate_t86 * L_13 = V_1;
			V_3 = L_13;
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}

IL_0053:
		{
			bool L_14 = Enumerator_MoveNext_m3129((&V_2), /*hidden argument*/Enumerator_MoveNext_m3129_MethodInfo_var);
			if (L_14)
			{
				goto IL_0014;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_t610  L_15 = V_2;
		Enumerator_t610  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t610_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0070:
	{
		return (AN_PropertyTemplate_t86 *)NULL;
	}

IL_0072:
	{
		AN_PropertyTemplate_t86 * L_18 = V_3;
		return L_18;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithTag(System.String)
extern TypeInfo* AN_PropertyTemplate_t86_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetOrCreatePropertyWithTag_m324 (AN_BaseTemplate_t78 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		AN_PropertyTemplate_t86 * L_1 = AN_BaseTemplate_GetPropertyWithTag_m325(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_PropertyTemplate_t86 * L_2 = V_0;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = ___tag;
		AN_PropertyTemplate_t86 * L_4 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AN_PropertyTemplate_t86 * L_5 = V_0;
		AN_BaseTemplate_AddProperty_m327(__this, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		AN_PropertyTemplate_t86 * L_6 = V_0;
		return L_6;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithTag(System.String)
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetPropertyWithTag_m325 (AN_BaseTemplate_t78 * __this, String_t* ___tag, const MethodInfo* method)
{
	List_1_t83 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		List_1_t83 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m326(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t83 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t83 * L_4 = V_0;
		NullCheck(L_4);
		AN_PropertyTemplate_t86 * L_5 = (AN_PropertyTemplate_t86 *)VirtFuncInvoker1< AN_PropertyTemplate_t86 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Item(System.Int32) */, L_4, 0);
		return L_5;
	}

IL_001c:
	{
		return (AN_PropertyTemplate_t86 *)NULL;
	}
}
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_BaseTemplate::GetPropertiesWithTag(System.String)
extern TypeInfo* List_1_t83_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3140_MethodInfo_var;
extern "C" List_1_t83 * AN_BaseTemplate_GetPropertiesWithTag_m326 (AN_BaseTemplate_t78 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		List_1__ctor_m3140_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t81 * L_0 = AN_BaseTemplate_get_Properties_m336(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t81 * L_3 = AN_BaseTemplate_get_Properties_m336(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___tag;
		NullCheck(L_3);
		List_1_t83 * L_5 = (List_1_t83 *)VirtFuncInvoker1< List_1_t83 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		List_1_t83 * L_6 = (List_1_t83 *)il2cpp_codegen_object_new (List_1_t83_il2cpp_TypeInfo_var);
		List_1__ctor_m3140(L_6, /*hidden argument*/List_1__ctor_m3140_MethodInfo_var);
		return L_6;
	}
}
// System.Void AN_BaseTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
// System.Void AN_BaseTemplate::AddProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_AddProperty_m327 (AN_BaseTemplate_t78 * __this, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method)
{
	{
		AN_PropertyTemplate_t86 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = AN_PropertyTemplate_get_Tag_m348(L_0, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_2 = ___property;
		AN_BaseTemplate_AddProperty_m328(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BaseTemplate::AddProperty(System.String,AN_PropertyTemplate)
extern TypeInfo* List_1_t83_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3140_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddProperty_m328 (AN_BaseTemplate_t78 * __this, String_t* ___tag, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		List_1__ctor_m3140_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t83 * V_0 = {0};
	{
		Dictionary_2_t81 * L_0 = (__this->____properties_0);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		List_1_t83 * L_3 = (List_1_t83 *)il2cpp_codegen_object_new (List_1_t83_il2cpp_TypeInfo_var);
		List_1__ctor_m3140(L_3, /*hidden argument*/List_1__ctor_m3140_MethodInfo_var);
		V_0 = L_3;
		Dictionary_2_t81 * L_4 = (__this->____properties_0);
		String_t* L_5 = ___tag;
		List_1_t83 * L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, List_1_t83 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Add(!0,!1) */, L_4, L_5, L_6);
	}

IL_0024:
	{
		Dictionary_2_t81 * L_7 = (__this->____properties_0);
		String_t* L_8 = ___tag;
		NullCheck(L_7);
		List_1_t83 * L_9 = (List_1_t83 *)VirtFuncInvoker1< List_1_t83 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_7, L_8);
		AN_PropertyTemplate_t86 * L_10 = ___property;
		NullCheck(L_9);
		VirtActionInvoker1< AN_PropertyTemplate_t86 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<AN_PropertyTemplate>::Add(!0) */, L_9, L_10);
		return;
	}
}
// System.Void AN_BaseTemplate::SetValue(System.String,System.String)
extern "C" void AN_BaseTemplate_SetValue_m329 (AN_BaseTemplate_t78 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t82 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t82 * L_3 = (__this->____values_1);
		String_t* L_4 = ___key;
		String_t* L_5 = ___value;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_3, L_4, L_5);
		goto IL_0030;
	}

IL_0023:
	{
		Dictionary_2_t82 * L_6 = (__this->____values_1);
		String_t* L_7 = ___key;
		String_t* L_8 = ___value;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1) */, L_6, L_7, L_8);
	}

IL_0030:
	{
		return;
	}
}
// System.String AN_BaseTemplate::GetValue(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AN_BaseTemplate_GetValue_m330 (AN_BaseTemplate_t78 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t82 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t82 * L_3 = (__this->____values_1);
		String_t* L_4 = ___key;
		NullCheck(L_3);
		String_t* L_5 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_6;
	}
}
// System.Void AN_BaseTemplate::RemoveProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_RemoveProperty_m331 (AN_BaseTemplate_t78 * __this, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method)
{
	{
		Dictionary_2_t81 * L_0 = (__this->____properties_0);
		AN_PropertyTemplate_t86 * L_1 = ___property;
		NullCheck(L_1);
		String_t* L_2 = AN_PropertyTemplate_get_Tag_m348(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t83 * L_3 = (List_1_t83 *)VirtFuncInvoker1< List_1_t83 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_0, L_2);
		AN_PropertyTemplate_t86 * L_4 = ___property;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t86 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_3, L_4);
		return;
	}
}
// System.Void AN_BaseTemplate::RemoveValue(System.String)
extern "C" void AN_BaseTemplate_RemoveValue_m332 (AN_BaseTemplate_t78 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t82 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_BaseTemplate::AddPropertiesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern TypeInfo* Enumerator_t610_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t616_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3141_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3142_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3143_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3127_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3128_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3129_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3144_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddPropertiesToXml_m333 (AN_BaseTemplate_t78 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, AN_BaseTemplate_t78 * ___template, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Enumerator_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		Dictionary_2_get_Keys_m3141_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		KeyCollection_GetEnumerator_m3142_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		Enumerator_get_Current_m3143_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		List_1_GetEnumerator_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m3128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		Enumerator_MoveNext_m3144_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t616  V_1 = {0};
	AN_PropertyTemplate_t86 * V_2 = {0};
	Enumerator_t610  V_3 = {0};
	XmlElement_t578 * V_4 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_BaseTemplate_t78 * L_0 = ___template;
		NullCheck(L_0);
		Dictionary_2_t81 * L_1 = AN_BaseTemplate_get_Properties_m336(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeyCollection_t617 * L_2 = Dictionary_2_get_Keys_m3141(L_1, /*hidden argument*/Dictionary_2_get_Keys_m3141_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t616  L_3 = KeyCollection_GetEnumerator_m3142(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m3142_MethodInfo_var);
		V_1 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0080;
		}

IL_0016:
		{
			String_t* L_4 = Enumerator_get_Current_m3143((&V_1), /*hidden argument*/Enumerator_get_Current_m3143_MethodInfo_var);
			V_0 = L_4;
			AN_BaseTemplate_t78 * L_5 = ___template;
			NullCheck(L_5);
			Dictionary_2_t81 * L_6 = AN_BaseTemplate_get_Properties_m336(L_5, /*hidden argument*/NULL);
			String_t* L_7 = V_0;
			NullCheck(L_6);
			List_1_t83 * L_8 = (List_1_t83 *)VirtFuncInvoker1< List_1_t83 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_6, L_7);
			NullCheck(L_8);
			Enumerator_t610  L_9 = List_1_GetEnumerator_m3127(L_8, /*hidden argument*/List_1_GetEnumerator_m3127_MethodInfo_var);
			V_3 = L_9;
		}

IL_0030:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0063;
			}

IL_0035:
			{
				AN_PropertyTemplate_t86 * L_10 = Enumerator_get_Current_m3128((&V_3), /*hidden argument*/Enumerator_get_Current_m3128_MethodInfo_var);
				V_2 = L_10;
				XmlDocument_t577 * L_11 = ___doc;
				String_t* L_12 = V_0;
				NullCheck(L_11);
				XmlElement_t578 * L_13 = XmlDocument_CreateElement_m3138(L_11, L_12, /*hidden argument*/NULL);
				V_4 = L_13;
				XmlDocument_t577 * L_14 = ___doc;
				XmlElement_t578 * L_15 = V_4;
				AN_PropertyTemplate_t86 * L_16 = V_2;
				AN_BaseTemplate_AddAttributesToXml_m334(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
				XmlDocument_t577 * L_17 = ___doc;
				XmlElement_t578 * L_18 = V_4;
				AN_PropertyTemplate_t86 * L_19 = V_2;
				AN_BaseTemplate_AddPropertiesToXml_m333(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
				XmlElement_t578 * L_20 = ___parent;
				XmlElement_t578 * L_21 = V_4;
				NullCheck(L_20);
				VirtFuncInvoker1< XmlNode_t615 *, XmlNode_t615 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_20, L_21);
			}

IL_0063:
			{
				bool L_22 = Enumerator_MoveNext_m3129((&V_3), /*hidden argument*/Enumerator_MoveNext_m3129_MethodInfo_var);
				if (L_22)
				{
					goto IL_0035;
				}
			}

IL_006f:
			{
				IL2CPP_LEAVE(0x80, FINALLY_0074);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t27 *)e.ex;
			goto FINALLY_0074;
		}

FINALLY_0074:
		{ // begin finally (depth: 2)
			Enumerator_t610  L_23 = V_3;
			Enumerator_t610  L_24 = L_23;
			Object_t * L_25 = Box(Enumerator_t610_il2cpp_TypeInfo_var, &L_24);
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(116)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(116)
		{
			IL2CPP_JUMP_TBL(0x80, IL_0080)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
		}

IL_0080:
		{
			bool L_26 = Enumerator_MoveNext_m3144((&V_1), /*hidden argument*/Enumerator_MoveNext_m3144_MethodInfo_var);
			if (L_26)
			{
				goto IL_0016;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		Enumerator_t616  L_27 = V_1;
		Enumerator_t616  L_28 = L_27;
		Object_t * L_29 = Box(Enumerator_t616_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_29);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_29);
		IL2CPP_END_FINALLY(145)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_009d:
	{
		return;
	}
}
// System.Void AN_BaseTemplate::AddAttributesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern TypeInfo* Enumerator_t618_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3145_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3146_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3147_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3152_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddAttributesToXml_m334 (AN_BaseTemplate_t78 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, AN_BaseTemplate_t78 * ___template, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_get_Keys_m3145_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483703);
		KeyCollection_GetEnumerator_m3146_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483704);
		Enumerator_get_Current_m3147_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		Enumerator_MoveNext_m3152_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t618  V_1 = {0};
	String_t* V_2 = {0};
	XmlAttribute_t619 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_BaseTemplate_t78 * L_0 = ___template;
		NullCheck(L_0);
		Dictionary_2_t82 * L_1 = AN_BaseTemplate_get_Values_m335(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeyCollection_t620 * L_2 = Dictionary_2_get_Keys_m3145(L_1, /*hidden argument*/Dictionary_2_get_Keys_m3145_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t618  L_3 = KeyCollection_GetEnumerator_m3146(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m3146_MethodInfo_var);
		V_1 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_0016:
		{
			String_t* L_4 = Enumerator_get_Current_m3147((&V_1), /*hidden argument*/Enumerator_get_Current_m3147_MethodInfo_var);
			V_0 = L_4;
			String_t* L_5 = V_0;
			V_2 = L_5;
			String_t* L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = String_Contains_m3148(L_6, (String_t*) &_stringLiteral133, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0030:
		{
			String_t* L_8 = V_0;
			NullCheck(L_8);
			String_t* L_9 = String_Replace_m3149(L_8, (String_t*) &_stringLiteral133, (String_t*) &_stringLiteral134, /*hidden argument*/NULL);
			V_2 = L_9;
		}

IL_0041:
		{
			XmlDocument_t577 * L_10 = ___doc;
			String_t* L_11 = V_2;
			NullCheck(L_10);
			XmlAttribute_t619 * L_12 = XmlDocument_CreateAttribute_m3150(L_10, L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			XmlAttribute_t619 * L_13 = V_3;
			AN_BaseTemplate_t78 * L_14 = ___template;
			NullCheck(L_14);
			Dictionary_2_t82 * L_15 = AN_BaseTemplate_get_Values_m335(L_14, /*hidden argument*/NULL);
			String_t* L_16 = V_0;
			NullCheck(L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_15, L_16);
			NullCheck(L_13);
			VirtActionInvoker1< String_t* >::Invoke(24 /* System.Void System.Xml.XmlAttribute::set_Value(System.String) */, L_13, L_17);
			XmlElement_t578 * L_18 = ___parent;
			NullCheck(L_18);
			XmlAttributeCollection_t621 * L_19 = (XmlAttributeCollection_t621 *)VirtFuncInvoker0< XmlAttributeCollection_t621 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_18);
			XmlAttribute_t619 * L_20 = V_3;
			NullCheck(L_19);
			XmlAttributeCollection_Append_m3151(L_19, L_20, /*hidden argument*/NULL);
		}

IL_0068:
		{
			bool L_21 = Enumerator_MoveNext_m3152((&V_1), /*hidden argument*/Enumerator_MoveNext_m3152_MethodInfo_var);
			if (L_21)
			{
				goto IL_0016;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Enumerator_t618  L_22 = V_1;
		Enumerator_t618  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t618_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_24);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0085:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> AN_BaseTemplate::get_Values()
extern "C" Dictionary_2_t82 * AN_BaseTemplate_get_Values_m335 (AN_BaseTemplate_t78 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t82 * L_0 = (__this->____values_1);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>> AN_BaseTemplate::get_Properties()
extern "C" Dictionary_2_t81 * AN_BaseTemplate_get_Properties_m336 (AN_BaseTemplate_t78 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t81 * L_0 = (__this->____properties_0);
		return L_0;
	}
}
// AN_ManifestTemplate
#include "AssemblyU2DCSharp_AN_ManifestTemplate.h"
#ifndef _MSC_VER
#else
#endif
// AN_ManifestTemplate
#include "AssemblyU2DCSharp_AN_ManifestTemplateMethodDeclarations.h"



// System.Void AN_ManifestTemplate::.ctor()
extern TypeInfo* AN_ApplicationTemplate_t80_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t83_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3140_MethodInfo_var;
extern "C" void AN_ManifestTemplate__ctor_m337 (AN_ManifestTemplate_t84 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_ApplicationTemplate_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		List_1_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		List_1__ctor_m3140_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BaseTemplate__ctor_m318(__this, /*hidden argument*/NULL);
		AN_ApplicationTemplate_t80 * L_0 = (AN_ApplicationTemplate_t80 *)il2cpp_codegen_object_new (AN_ApplicationTemplate_t80_il2cpp_TypeInfo_var);
		AN_ApplicationTemplate__ctor_m310(L_0, /*hidden argument*/NULL);
		__this->____applicationTemplate_2 = L_0;
		List_1_t83 * L_1 = (List_1_t83 *)il2cpp_codegen_object_new (List_1_t83_il2cpp_TypeInfo_var);
		List_1__ctor_m3140(L_1, /*hidden argument*/List_1__ctor_m3140_MethodInfo_var);
		__this->____permissions_3 = L_1;
		return;
	}
}
// System.Boolean AN_ManifestTemplate::HasPermission(System.String)
extern TypeInfo* Enumerator_t610_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3127_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3128_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3129_MethodInfo_var;
extern "C" bool AN_ManifestTemplate_HasPermission_m338 (AN_ManifestTemplate_t84 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m3128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	Enumerator_t610  V_1 = {0};
	bool V_2 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t83 * L_0 = AN_ManifestTemplate_get_Permissions_m345(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t610  L_1 = List_1_GetEnumerator_m3127(L_0, /*hidden argument*/List_1_GetEnumerator_m3127_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0011:
		{
			AN_PropertyTemplate_t86 * L_2 = Enumerator_get_Current_m3128((&V_1), /*hidden argument*/Enumerator_get_Current_m3128_MethodInfo_var);
			V_0 = L_2;
			AN_PropertyTemplate_t86 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = AN_PropertyTemplate_get_Name_m349(L_3, /*hidden argument*/NULL);
			String_t* L_5 = ___name;
			NullCheck(L_4);
			bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_4, L_5);
			if (!L_6)
			{
				goto IL_0031;
			}
		}

IL_002a:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}

IL_0031:
		{
			bool L_7 = Enumerator_MoveNext_m3129((&V_1), /*hidden argument*/Enumerator_MoveNext_m3129_MethodInfo_var);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_t610  L_8 = V_1;
		Enumerator_t610  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t610_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_10);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_004e:
	{
		return 0;
	}

IL_0050:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void AN_ManifestTemplate::RemovePermission(System.String)
extern TypeInfo* Enumerator_t610_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3127_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3128_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3129_MethodInfo_var;
extern "C" void AN_ManifestTemplate_RemovePermission_m339 (AN_ManifestTemplate_t84 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m3128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	Enumerator_t610  V_1 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		goto IL_0058;
	}

IL_0005:
	{
		List_1_t83 * L_0 = AN_ManifestTemplate_get_Permissions_m345(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t610  L_1 = List_1_GetEnumerator_m3127(L_0, /*hidden argument*/List_1_GetEnumerator_m3127_MethodInfo_var);
		V_1 = L_1;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0016:
		{
			AN_PropertyTemplate_t86 * L_2 = Enumerator_get_Current_m3128((&V_1), /*hidden argument*/Enumerator_get_Current_m3128_MethodInfo_var);
			V_0 = L_2;
			AN_PropertyTemplate_t86 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = AN_PropertyTemplate_get_Name_m349(L_3, /*hidden argument*/NULL);
			String_t* L_5 = ___name;
			NullCheck(L_4);
			bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_4, L_5);
			if (!L_6)
			{
				goto IL_003b;
			}
		}

IL_002f:
		{
			AN_PropertyTemplate_t86 * L_7 = V_0;
			AN_ManifestTemplate_RemovePermission_m340(__this, L_7, /*hidden argument*/NULL);
			goto IL_0047;
		}

IL_003b:
		{
			bool L_8 = Enumerator_MoveNext_m3129((&V_1), /*hidden argument*/Enumerator_MoveNext_m3129_MethodInfo_var);
			if (L_8)
			{
				goto IL_0016;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x58, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_t610  L_9 = V_1;
		Enumerator_t610  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t610_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0058:
	{
		String_t* L_12 = ___name;
		bool L_13 = AN_ManifestTemplate_HasPermission_m338(__this, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void AN_ManifestTemplate::RemovePermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_RemovePermission_m340 (AN_ManifestTemplate_t84 * __this, AN_PropertyTemplate_t86 * ___permission, const MethodInfo* method)
{
	{
		List_1_t83 * L_0 = (__this->____permissions_3);
		AN_PropertyTemplate_t86 * L_1 = ___permission;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t86 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_ManifestTemplate::AddPermission(System.String)
extern TypeInfo* AN_PropertyTemplate_t86_il2cpp_TypeInfo_var;
extern "C" void AN_ManifestTemplate_AddPermission_m341 (AN_ManifestTemplate_t84 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t86 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		bool L_1 = AN_ManifestTemplate_HasPermission_m338(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		AN_PropertyTemplate_t86 * L_2 = (AN_PropertyTemplate_t86 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t86_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m346(L_2, (String_t*) &_stringLiteral135, /*hidden argument*/NULL);
		V_0 = L_2;
		AN_PropertyTemplate_t86 * L_3 = V_0;
		String_t* L_4 = ___name;
		NullCheck(L_3);
		AN_PropertyTemplate_set_Name_m350(L_3, L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t86 * L_5 = V_0;
		AN_ManifestTemplate_AddPermission_m342(__this, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void AN_ManifestTemplate::AddPermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_AddPermission_m342 (AN_ManifestTemplate_t84 * __this, AN_PropertyTemplate_t86 * ___permission, const MethodInfo* method)
{
	{
		List_1_t83 * L_0 = (__this->____permissions_3);
		AN_PropertyTemplate_t86 * L_1 = ___permission;
		NullCheck(L_0);
		VirtActionInvoker1< AN_PropertyTemplate_t86 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<AN_PropertyTemplate>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_ManifestTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern TypeInfo* Enumerator_t610_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3127_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3128_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3129_MethodInfo_var;
extern "C" void AN_ManifestTemplate_ToXmlElement_m343 (AN_ManifestTemplate_t84 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m3128_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	XmlElement_t578 * V_0 = {0};
	AN_PropertyTemplate_t86 * V_1 = {0};
	Enumerator_t610  V_2 = {0};
	XmlElement_t578 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t577 * L_0 = ___doc;
		XmlElement_t578 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m334(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t577 * L_2 = ___doc;
		XmlElement_t578 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m333(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		XmlDocument_t577 * L_4 = ___doc;
		NullCheck(L_4);
		XmlElement_t578 * L_5 = XmlDocument_CreateElement_m3138(L_4, (String_t*) &_stringLiteral136, /*hidden argument*/NULL);
		V_0 = L_5;
		AN_ApplicationTemplate_t80 * L_6 = (__this->____applicationTemplate_2);
		XmlDocument_t577 * L_7 = ___doc;
		XmlElement_t578 * L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< XmlDocument_t577 *, XmlElement_t578 * >::Invoke(4 /* System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_6, L_7, L_8);
		XmlElement_t578 * L_9 = ___parent;
		XmlElement_t578 * L_10 = V_0;
		NullCheck(L_9);
		VirtFuncInvoker1< XmlNode_t615 *, XmlNode_t615 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_9, L_10);
		List_1_t83 * L_11 = AN_ManifestTemplate_get_Permissions_m345(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Enumerator_t610  L_12 = List_1_GetEnumerator_m3127(L_11, /*hidden argument*/List_1_GetEnumerator_m3127_MethodInfo_var);
		V_2 = L_12;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_0044:
		{
			AN_PropertyTemplate_t86 * L_13 = Enumerator_get_Current_m3128((&V_2), /*hidden argument*/Enumerator_get_Current_m3128_MethodInfo_var);
			V_1 = L_13;
			XmlDocument_t577 * L_14 = ___doc;
			NullCheck(L_14);
			XmlElement_t578 * L_15 = XmlDocument_CreateElement_m3138(L_14, (String_t*) &_stringLiteral135, /*hidden argument*/NULL);
			V_3 = L_15;
			AN_PropertyTemplate_t86 * L_16 = V_1;
			XmlDocument_t577 * L_17 = ___doc;
			XmlElement_t578 * L_18 = V_3;
			NullCheck(L_16);
			VirtActionInvoker2< XmlDocument_t577 *, XmlElement_t578 * >::Invoke(4 /* System.Void AN_PropertyTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_16, L_17, L_18);
			XmlElement_t578 * L_19 = ___parent;
			XmlElement_t578 * L_20 = V_3;
			NullCheck(L_19);
			VirtFuncInvoker1< XmlNode_t615 *, XmlNode_t615 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_19, L_20);
		}

IL_0068:
		{
			bool L_21 = Enumerator_MoveNext_m3129((&V_2), /*hidden argument*/Enumerator_MoveNext_m3129_MethodInfo_var);
			if (L_21)
			{
				goto IL_0044;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Enumerator_t610  L_22 = V_2;
		Enumerator_t610  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t610_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_24);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0085:
	{
		return;
	}
}
// AN_ApplicationTemplate AN_ManifestTemplate::get_ApplicationTemplate()
extern "C" AN_ApplicationTemplate_t80 * AN_ManifestTemplate_get_ApplicationTemplate_m344 (AN_ManifestTemplate_t84 * __this, const MethodInfo* method)
{
	{
		AN_ApplicationTemplate_t80 * L_0 = (__this->____applicationTemplate_2);
		return L_0;
	}
}
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_ManifestTemplate::get_Permissions()
extern "C" List_1_t83 * AN_ManifestTemplate_get_Permissions_m345 (AN_ManifestTemplate_t84 * __this, const MethodInfo* method)
{
	{
		List_1_t83 * L_0 = (__this->____permissions_3);
		return L_0;
	}
}
// AN_Permissions
#include "AssemblyU2DCSharp_AN_Permissions.h"
#ifndef _MSC_VER
#else
#endif
// AN_Permissions
#include "AssemblyU2DCSharp_AN_PermissionsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void AN_PropertyTemplate::.ctor(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AN_PropertyTemplate__ctor_m346 (AN_PropertyTemplate_t86 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->____tag_3 = L_0;
		AN_BaseTemplate__ctor_m318(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___tag;
		__this->____tag_3 = L_1;
		return;
	}
}
// System.Void AN_PropertyTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_PropertyTemplate_ToXmlElement_m347 (AN_PropertyTemplate_t86 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, const MethodInfo* method)
{
	{
		XmlDocument_t577 * L_0 = ___doc;
		XmlElement_t578 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m334(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t577 * L_2 = ___doc;
		XmlElement_t578 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m333(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Tag()
extern "C" String_t* AN_PropertyTemplate_get_Tag_m348 (AN_PropertyTemplate_t86 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____tag_3);
		return L_0;
	}
}
// System.String AN_PropertyTemplate::get_Name()
extern "C" String_t* AN_PropertyTemplate_get_Name_m349 (AN_PropertyTemplate_t86 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m330(__this, (String_t*) &_stringLiteral126, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Name(System.String)
extern "C" void AN_PropertyTemplate_set_Name_m350 (AN_PropertyTemplate_t86 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m329(__this, (String_t*) &_stringLiteral126, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Value()
extern "C" String_t* AN_PropertyTemplate_get_Value_m351 (AN_PropertyTemplate_t86 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m330(__this, (String_t*) &_stringLiteral137, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Value(System.String)
extern "C" void AN_PropertyTemplate_set_Value_m352 (AN_PropertyTemplate_t86 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m329(__this, (String_t*) &_stringLiteral137, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Label()
extern "C" String_t* AN_PropertyTemplate_get_Label_m353 (AN_PropertyTemplate_t86 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m330(__this, (String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Label(System.String)
extern "C" void AN_PropertyTemplate_set_Label_m354 (AN_PropertyTemplate_t86 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m329(__this, (String_t*) &_stringLiteral138, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnionAssets.FLE.EventDispatcher
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcher.h"
#ifndef _MSC_VER
#else
#endif
// UnionAssets.FLE.EventDispatcher
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcherMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunction.h"
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// UnionAssets.FLE.DataEventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_DataEventHandlerFunction.h"
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// UnionAssets.FLE.CEvent
#include "AssemblyU2DCSharp_UnionAssets_FLE_CEvent.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// UnionAssets.FLE.CEvent
#include "AssemblyU2DCSharp_UnionAssets_FLE_CEventMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnionAssets.FLE.DataEventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_DataEventHandlerFunctionMethodDeclarations.h"
// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunctionMethodDeclarations.h"


// System.Void UnionAssets.FLE.EventDispatcher::.ctor()
extern TypeInfo* Dictionary_2_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t88_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3153_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3154_MethodInfo_var;
extern "C" void EventDispatcher__ctor_m355 (EventDispatcher_t89 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Dictionary_2_t88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Dictionary_2__ctor_m3153_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		Dictionary_2__ctor_m3154_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t87 * L_0 = (Dictionary_2_t87 *)il2cpp_codegen_object_new (Dictionary_2_t87_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3153(L_0, /*hidden argument*/Dictionary_2__ctor_m3153_MethodInfo_var);
		__this->___listners_2 = L_0;
		Dictionary_2_t88 * L_1 = (Dictionary_2_t88 *)il2cpp_codegen_object_new (Dictionary_2_t88_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3154(L_1, /*hidden argument*/Dictionary_2__ctor_m3154_MethodInfo_var);
		__this->___dataListners_3 = L_1;
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m356 (EventDispatcher_t89 * __this, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t575 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_addEventListener_m358(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m357 (EventDispatcher_t89 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t575 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_addEventListener_m358(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern TypeInfo* List_1_t579_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3155_MethodInfo_var;
extern "C" void EventDispatcher_addEventListener_m358 (EventDispatcher_t89 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m3155_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t579 * V_0 = {0};
	{
		Dictionary_2_t87 * L_0 = (__this->___listners_2);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t87 * L_3 = (__this->___listners_2);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t579 * L_5 = (List_1_t579 *)VirtFuncInvoker1< List_1_t579 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		EventHandlerFunction_t575 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< EventHandlerFunction_t575 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t579 * L_7 = (List_1_t579 *)il2cpp_codegen_object_new (List_1_t579_il2cpp_TypeInfo_var);
		List_1__ctor_m3155(L_7, /*hidden argument*/List_1__ctor_m3155_MethodInfo_var);
		V_0 = L_7;
		List_1_t579 * L_8 = V_0;
		EventHandlerFunction_t575 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< EventHandlerFunction_t575 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t87 * L_10 = (__this->___listners_2);
		int32_t L_11 = ___eventID;
		List_1_t579 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t579 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m359 (EventDispatcher_t89 * __this, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t576 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_addEventListener_m361(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m360 (EventDispatcher_t89 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t576 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_addEventListener_m361(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3156_MethodInfo_var;
extern "C" void EventDispatcher_addEventListener_m361 (EventDispatcher_t89 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m3156_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	{
		Dictionary_2_t88 * L_0 = (__this->___dataListners_3);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t88 * L_3 = (__this->___dataListners_3);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t580 * L_5 = (List_1_t580 *)VirtFuncInvoker1< List_1_t580 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		DataEventHandlerFunction_t576 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< DataEventHandlerFunction_t576 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t580 * L_7 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m3156(L_7, /*hidden argument*/List_1__ctor_m3156_MethodInfo_var);
		V_0 = L_7;
		List_1_t580 * L_8 = V_0;
		DataEventHandlerFunction_t576 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< DataEventHandlerFunction_t576 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t88 * L_10 = (__this->___dataListners_3);
		int32_t L_11 = ___eventID;
		List_1_t580 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t580 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m362 (EventDispatcher_t89 * __this, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t575 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_removeEventListener_m364(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m363 (EventDispatcher_t89 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t575 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_removeEventListener_m364(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m364 (EventDispatcher_t89 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t579 * V_0 = {0};
	{
		Dictionary_2_t87 * L_0 = (__this->___listners_2);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t87 * L_3 = (__this->___listners_2);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t579 * L_5 = (List_1_t579 *)VirtFuncInvoker1< List_1_t579 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t579 * L_6 = V_0;
		EventHandlerFunction_t575 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, EventHandlerFunction_t575 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t579 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t87 * L_10 = (__this->___listners_2);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m365 (EventDispatcher_t89 * __this, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t576 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_removeEventListener_m367(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m366 (EventDispatcher_t89 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t576 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_removeEventListener_m367(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m367 (EventDispatcher_t89 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t580 * V_0 = {0};
	{
		Dictionary_2_t88 * L_0 = (__this->___dataListners_3);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t88 * L_3 = (__this->___dataListners_3);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t580 * L_5 = (List_1_t580 *)VirtFuncInvoker1< List_1_t580 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t580 * L_6 = V_0;
		DataEventHandlerFunction_t576 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, DataEventHandlerFunction_t576 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t580 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t88 * L_10 = (__this->___dataListners_3);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String)
extern "C" void EventDispatcher_dispatchEvent_m368 (EventDispatcher_t89 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcher_dispatch_m376(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcher_dispatchEvent_m369 (EventDispatcher_t89 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcher_dispatch_m376(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatchEvent_m370 (EventDispatcher_t89 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m376(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatchEvent_m371 (EventDispatcher_t89 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m376(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String)
extern "C" void EventDispatcher_dispatch_m372 (EventDispatcher_t89 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcher_dispatch_m376(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object)
extern "C" void EventDispatcher_dispatch_m373 (EventDispatcher_t89 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcher_dispatch_m376(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m374 (EventDispatcher_t89 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m376(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m375 (EventDispatcher_t89 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m376(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object,System.String)
extern TypeInfo* CEvent_t93_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m376 (EventDispatcher_t89 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CEvent_t93_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	CEvent_t93 * V_0 = {0};
	List_1_t580 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t579 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___eventID;
		String_t* L_1 = ___eventName;
		Object_t * L_2 = ___data;
		CEvent_t93 * L_3 = (CEvent_t93 *)il2cpp_codegen_object_new (CEvent_t93_il2cpp_TypeInfo_var);
		CEvent__ctor_m408(L_3, L_0, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t88 * L_4 = (__this->___dataListners_3);
		int32_t L_5 = ___eventID;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t88 * L_7 = (__this->___dataListners_3);
		int32_t L_8 = ___eventID;
		NullCheck(L_7);
		List_1_t580 * L_9 = (List_1_t580 *)VirtFuncInvoker1< List_1_t580 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_7, L_8);
		List_1_t580 * L_10 = EventDispatcher_cloenArray_m379(__this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		List_1_t580 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_11);
		V_2 = L_12;
		V_3 = 0;
		goto IL_0064;
	}

IL_003c:
	{
		CEvent_t93 * L_13 = V_0;
		List_1_t580 * L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		DataEventHandlerFunction_t576 * L_16 = (DataEventHandlerFunction_t576 *)VirtFuncInvoker1< DataEventHandlerFunction_t576 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_14, L_15);
		NullCheck(L_16);
		Object_t * L_17 = Delegate_get_Target_m3157(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_18 = CEvent_canBeDisptached_m411(L_13, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t580 * L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		DataEventHandlerFunction_t576 * L_21 = (DataEventHandlerFunction_t576 *)VirtFuncInvoker1< DataEventHandlerFunction_t576 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_19, L_20);
		CEvent_t93 * L_22 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< CEvent_t93 * >::Invoke(10 /* System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent) */, L_21, L_22);
	}

IL_0060:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_003c;
		}
	}

IL_006b:
	{
		Dictionary_2_t87 * L_26 = (__this->___listners_2);
		int32_t L_27 = ___eventID;
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00d7;
		}
	}
	{
		Dictionary_2_t87 * L_29 = (__this->___listners_2);
		int32_t L_30 = ___eventID;
		NullCheck(L_29);
		List_1_t579 * L_31 = (List_1_t579 *)VirtFuncInvoker1< List_1_t579 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_29, L_30);
		List_1_t579 * L_32 = EventDispatcher_cloenArray_m378(__this, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		List_1_t579 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_33);
		V_5 = L_34;
		V_6 = 0;
		goto IL_00ce;
	}

IL_00a1:
	{
		CEvent_t93 * L_35 = V_0;
		List_1_t579 * L_36 = V_4;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		EventHandlerFunction_t575 * L_38 = (EventHandlerFunction_t575 *)VirtFuncInvoker1< EventHandlerFunction_t575 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_36, L_37);
		NullCheck(L_38);
		Object_t * L_39 = Delegate_get_Target_m3157(L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_40 = CEvent_canBeDisptached_m411(L_35, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00c8;
		}
	}
	{
		List_1_t579 * L_41 = V_4;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		EventHandlerFunction_t575 * L_43 = (EventHandlerFunction_t575 *)VirtFuncInvoker1< EventHandlerFunction_t575 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_41, L_42);
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(10 /* System.Void UnionAssets.FLE.EventHandlerFunction::Invoke() */, L_43);
	}

IL_00c8:
	{
		int32_t L_44 = V_6;
		V_6 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_45 = V_6;
		int32_t L_46 = V_5;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00a1;
		}
	}

IL_00d7:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::clearEvents()
extern "C" void EventDispatcher_clearEvents_m377 (EventDispatcher_t89 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t87 * L_0 = (__this->___listners_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear() */, L_0);
		Dictionary_2_t88 * L_1 = (__this->___dataListners_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Clear() */, L_1);
		return;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern TypeInfo* List_1_t579_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3155_MethodInfo_var;
extern "C" List_1_t579 * EventDispatcher_cloenArray_m378 (EventDispatcher_t89 * __this, List_1_t579 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m3155_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t579 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t579 * L_0 = (List_1_t579 *)il2cpp_codegen_object_new (List_1_t579_il2cpp_TypeInfo_var);
		List_1__ctor_m3155(L_0, /*hidden argument*/List_1__ctor_m3155_MethodInfo_var);
		V_0 = L_0;
		List_1_t579 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t579 * L_3 = V_0;
		List_1_t579 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		EventHandlerFunction_t575 * L_6 = (EventHandlerFunction_t575 *)VirtFuncInvoker1< EventHandlerFunction_t575 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< EventHandlerFunction_t575 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_3, L_6);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_t579 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3156_MethodInfo_var;
extern "C" List_1_t580 * EventDispatcher_cloenArray_m379 (EventDispatcher_t89 * __this, List_1_t580 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m3156_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t580 * L_0 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m3156(L_0, /*hidden argument*/List_1__ctor_m3156_MethodInfo_var);
		V_0 = L_0;
		List_1_t580 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t580 * L_3 = V_0;
		List_1_t580 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		DataEventHandlerFunction_t576 * L_6 = (DataEventHandlerFunction_t576 *)VirtFuncInvoker1< DataEventHandlerFunction_t576 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< DataEventHandlerFunction_t576 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_3, L_6);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_t580 * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::OnDestroy()
extern "C" void EventDispatcher_OnDestroy_m380 (EventDispatcher_t89 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(20 /* System.Void UnionAssets.FLE.EventDispatcher::clearEvents() */, __this);
		return;
	}
}
// UnionAssets.FLE.EventDispatcherBase
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcherBase.h"
#ifndef _MSC_VER
#else
#endif
// UnionAssets.FLE.EventDispatcherBase
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcherBaseMethodDeclarations.h"



// System.Void UnionAssets.FLE.EventDispatcherBase::.ctor()
extern TypeInfo* Dictionary_2_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t88_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3153_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3154_MethodInfo_var;
extern "C" void EventDispatcherBase__ctor_m381 (EventDispatcherBase_t90 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Dictionary_2_t88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Dictionary_2__ctor_m3153_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		Dictionary_2__ctor_m3154_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t87 * L_0 = (Dictionary_2_t87 *)il2cpp_codegen_object_new (Dictionary_2_t87_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3153(L_0, /*hidden argument*/Dictionary_2__ctor_m3153_MethodInfo_var);
		__this->___listners_0 = L_0;
		Dictionary_2_t88 * L_1 = (Dictionary_2_t88 *)il2cpp_codegen_object_new (Dictionary_2_t88_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3154(L_1, /*hidden argument*/Dictionary_2__ctor_m3154_MethodInfo_var);
		__this->___dataListners_1 = L_1;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m382 (EventDispatcherBase_t90 * __this, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t575 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_addEventListener_m384(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m383 (EventDispatcherBase_t90 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t575 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_addEventListener_m384(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern TypeInfo* List_1_t579_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3155_MethodInfo_var;
extern "C" void EventDispatcherBase_addEventListener_m384 (EventDispatcherBase_t90 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m3155_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t579 * V_0 = {0};
	{
		Dictionary_2_t87 * L_0 = (__this->___listners_0);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t87 * L_3 = (__this->___listners_0);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t579 * L_5 = (List_1_t579 *)VirtFuncInvoker1< List_1_t579 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		EventHandlerFunction_t575 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< EventHandlerFunction_t575 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t579 * L_7 = (List_1_t579 *)il2cpp_codegen_object_new (List_1_t579_il2cpp_TypeInfo_var);
		List_1__ctor_m3155(L_7, /*hidden argument*/List_1__ctor_m3155_MethodInfo_var);
		V_0 = L_7;
		List_1_t579 * L_8 = V_0;
		EventHandlerFunction_t575 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< EventHandlerFunction_t575 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t87 * L_10 = (__this->___listners_0);
		int32_t L_11 = ___eventID;
		List_1_t579 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t579 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m385 (EventDispatcherBase_t90 * __this, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t576 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_addEventListener_m387(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m386 (EventDispatcherBase_t90 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t576 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_addEventListener_m387(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3156_MethodInfo_var;
extern "C" void EventDispatcherBase_addEventListener_m387 (EventDispatcherBase_t90 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m3156_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	{
		Dictionary_2_t88 * L_0 = (__this->___dataListners_1);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t88 * L_3 = (__this->___dataListners_1);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t580 * L_5 = (List_1_t580 *)VirtFuncInvoker1< List_1_t580 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		DataEventHandlerFunction_t576 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< DataEventHandlerFunction_t576 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t580 * L_7 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m3156(L_7, /*hidden argument*/List_1__ctor_m3156_MethodInfo_var);
		V_0 = L_7;
		List_1_t580 * L_8 = V_0;
		DataEventHandlerFunction_t576 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< DataEventHandlerFunction_t576 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t88 * L_10 = (__this->___dataListners_1);
		int32_t L_11 = ___eventID;
		List_1_t580 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t580 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m388 (EventDispatcherBase_t90 * __this, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t575 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_removeEventListener_m390(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m389 (EventDispatcherBase_t90 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t575 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_removeEventListener_m390(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m390 (EventDispatcherBase_t90 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t579 * V_0 = {0};
	{
		Dictionary_2_t87 * L_0 = (__this->___listners_0);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t87 * L_3 = (__this->___listners_0);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t579 * L_5 = (List_1_t579 *)VirtFuncInvoker1< List_1_t579 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t579 * L_6 = V_0;
		EventHandlerFunction_t575 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, EventHandlerFunction_t575 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t579 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t87 * L_10 = (__this->___listners_0);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m391 (EventDispatcherBase_t90 * __this, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t576 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_removeEventListener_m393(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m392 (EventDispatcherBase_t90 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t576 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_removeEventListener_m393(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m393 (EventDispatcherBase_t90 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t580 * V_0 = {0};
	{
		Dictionary_2_t88 * L_0 = (__this->___dataListners_1);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t88 * L_3 = (__this->___dataListners_1);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t580 * L_5 = (List_1_t580 *)VirtFuncInvoker1< List_1_t580 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t580 * L_6 = V_0;
		DataEventHandlerFunction_t576 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, DataEventHandlerFunction_t576 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t580 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t88 * L_10 = (__this->___dataListners_1);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String)
extern "C" void EventDispatcherBase_dispatchEvent_m394 (EventDispatcherBase_t90 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcherBase_dispatch_m402(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatchEvent_m395 (EventDispatcherBase_t90 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_dispatch_m402(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatchEvent_m396 (EventDispatcherBase_t90 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m402(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatchEvent_m397 (EventDispatcherBase_t90 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m402(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String)
extern "C" void EventDispatcherBase_dispatch_m398 (EventDispatcherBase_t90 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcherBase_dispatch_m402(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatch_m399 (EventDispatcherBase_t90 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_dispatch_m402(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m400 (EventDispatcherBase_t90 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m402(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m401 (EventDispatcherBase_t90 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m402(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object,System.String)
extern TypeInfo* CEvent_t93_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m402 (EventDispatcherBase_t90 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CEvent_t93_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	CEvent_t93 * V_0 = {0};
	List_1_t580 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t579 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___eventID;
		String_t* L_1 = ___eventName;
		Object_t * L_2 = ___data;
		CEvent_t93 * L_3 = (CEvent_t93 *)il2cpp_codegen_object_new (CEvent_t93_il2cpp_TypeInfo_var);
		CEvent__ctor_m408(L_3, L_0, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t88 * L_4 = (__this->___dataListners_1);
		int32_t L_5 = ___eventID;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t88 * L_7 = (__this->___dataListners_1);
		int32_t L_8 = ___eventID;
		NullCheck(L_7);
		List_1_t580 * L_9 = (List_1_t580 *)VirtFuncInvoker1< List_1_t580 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_7, L_8);
		List_1_t580 * L_10 = EventDispatcherBase_cloenArray_m405(__this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		List_1_t580 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_11);
		V_2 = L_12;
		V_3 = 0;
		goto IL_0064;
	}

IL_003c:
	{
		CEvent_t93 * L_13 = V_0;
		List_1_t580 * L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		DataEventHandlerFunction_t576 * L_16 = (DataEventHandlerFunction_t576 *)VirtFuncInvoker1< DataEventHandlerFunction_t576 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_14, L_15);
		NullCheck(L_16);
		Object_t * L_17 = Delegate_get_Target_m3157(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_18 = CEvent_canBeDisptached_m411(L_13, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t580 * L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		DataEventHandlerFunction_t576 * L_21 = (DataEventHandlerFunction_t576 *)VirtFuncInvoker1< DataEventHandlerFunction_t576 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_19, L_20);
		CEvent_t93 * L_22 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< CEvent_t93 * >::Invoke(10 /* System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent) */, L_21, L_22);
	}

IL_0060:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_003c;
		}
	}

IL_006b:
	{
		Dictionary_2_t87 * L_26 = (__this->___listners_0);
		int32_t L_27 = ___eventID;
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00d7;
		}
	}
	{
		Dictionary_2_t87 * L_29 = (__this->___listners_0);
		int32_t L_30 = ___eventID;
		NullCheck(L_29);
		List_1_t579 * L_31 = (List_1_t579 *)VirtFuncInvoker1< List_1_t579 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_29, L_30);
		List_1_t579 * L_32 = EventDispatcherBase_cloenArray_m404(__this, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		List_1_t579 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_33);
		V_5 = L_34;
		V_6 = 0;
		goto IL_00ce;
	}

IL_00a1:
	{
		CEvent_t93 * L_35 = V_0;
		List_1_t579 * L_36 = V_4;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		EventHandlerFunction_t575 * L_38 = (EventHandlerFunction_t575 *)VirtFuncInvoker1< EventHandlerFunction_t575 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_36, L_37);
		NullCheck(L_38);
		Object_t * L_39 = Delegate_get_Target_m3157(L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_40 = CEvent_canBeDisptached_m411(L_35, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00c8;
		}
	}
	{
		List_1_t579 * L_41 = V_4;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		EventHandlerFunction_t575 * L_43 = (EventHandlerFunction_t575 *)VirtFuncInvoker1< EventHandlerFunction_t575 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_41, L_42);
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(10 /* System.Void UnionAssets.FLE.EventHandlerFunction::Invoke() */, L_43);
	}

IL_00c8:
	{
		int32_t L_44 = V_6;
		V_6 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_45 = V_6;
		int32_t L_46 = V_5;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00a1;
		}
	}

IL_00d7:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::clearEvents()
extern "C" void EventDispatcherBase_clearEvents_m403 (EventDispatcherBase_t90 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t87 * L_0 = (__this->___listners_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear() */, L_0);
		Dictionary_2_t88 * L_1 = (__this->___dataListners_1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Clear() */, L_1);
		return;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern TypeInfo* List_1_t579_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3155_MethodInfo_var;
extern "C" List_1_t579 * EventDispatcherBase_cloenArray_m404 (EventDispatcherBase_t90 * __this, List_1_t579 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m3155_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t579 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t579 * L_0 = (List_1_t579 *)il2cpp_codegen_object_new (List_1_t579_il2cpp_TypeInfo_var);
		List_1__ctor_m3155(L_0, /*hidden argument*/List_1__ctor_m3155_MethodInfo_var);
		V_0 = L_0;
		List_1_t579 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t579 * L_3 = V_0;
		List_1_t579 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		EventHandlerFunction_t575 * L_6 = (EventHandlerFunction_t575 *)VirtFuncInvoker1< EventHandlerFunction_t575 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< EventHandlerFunction_t575 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_3, L_6);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_t579 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3156_MethodInfo_var;
extern "C" List_1_t580 * EventDispatcherBase_cloenArray_m405 (EventDispatcherBase_t90 * __this, List_1_t580 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m3156_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t580 * L_0 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m3156(L_0, /*hidden argument*/List_1__ctor_m3156_MethodInfo_var);
		V_0 = L_0;
		List_1_t580 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t580 * L_3 = V_0;
		List_1_t580 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		DataEventHandlerFunction_t576 * L_6 = (DataEventHandlerFunction_t576 *)VirtFuncInvoker1< DataEventHandlerFunction_t576 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< DataEventHandlerFunction_t576 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_3, L_6);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_t580 * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::OnDestroy()
extern "C" void EventDispatcherBase_OnDestroy_m406 (EventDispatcherBase_t90 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(20 /* System.Void UnionAssets.FLE.EventDispatcherBase::clearEvents() */, __this);
		return;
	}
}
// UnionAssets.FLE.BaseEvent
#include "AssemblyU2DCSharp_UnionAssets_FLE_BaseEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnionAssets.FLE.BaseEvent
#include "AssemblyU2DCSharp_UnionAssets_FLE_BaseEventMethodDeclarations.h"



// System.Void UnionAssets.FLE.BaseEvent::.ctor()
extern "C" void BaseEvent__ctor_m407 (BaseEvent_t91 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnionAssets.FLE.CEvent::.ctor(System.Int32,System.String,System.Object,UnionAssets.FLE.IDispatcher)
extern "C" void CEvent__ctor_m408 (CEvent_t93 * __this, int32_t ___id, String_t* ___name, Object_t * ___data, Object_t * ___dispatcher, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___id;
		__this->____id_0 = L_0;
		String_t* L_1 = ___name;
		__this->____name_1 = L_1;
		Object_t * L_2 = ___data;
		__this->____data_2 = L_2;
		Object_t * L_3 = ___dispatcher;
		__this->____dispatcher_3 = L_3;
		return;
	}
}
// System.Void UnionAssets.FLE.CEvent::stopPropagation()
extern "C" void CEvent_stopPropagation_m409 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		__this->____isStoped_4 = 1;
		return;
	}
}
// System.Void UnionAssets.FLE.CEvent::stopImmediatePropagation()
extern "C" void CEvent_stopImmediatePropagation_m410 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		__this->____isStoped_4 = 1;
		__this->____isLocked_5 = 1;
		return;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::canBeDisptached(System.Object)
extern "C" bool CEvent_canBeDisptached_m411 (CEvent_t93 * __this, Object_t * ___val, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isLocked_5);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		bool L_1 = (__this->____isStoped_4);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_2 = (__this->____currentTarget_6);
		Object_t * L_3 = ___val;
		if ((!(((Object_t*)(Object_t *)L_2) == ((Object_t*)(Object_t *)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		return 1;
	}

IL_0026:
	{
		return 0;
	}

IL_0028:
	{
		Object_t * L_4 = ___val;
		__this->____currentTarget_6 = L_4;
		return 1;
	}
}
// System.Int32 UnionAssets.FLE.CEvent::get_id()
extern "C" int32_t CEvent_get_id_m412 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String UnionAssets.FLE.CEvent::get_name()
extern "C" String_t* CEvent_get_name_m413 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_1);
		return L_0;
	}
}
// System.Object UnionAssets.FLE.CEvent::get_data()
extern "C" Object_t * CEvent_get_data_m414 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____data_2);
		return L_0;
	}
}
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_target()
extern "C" Object_t * CEvent_get_target_m415 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____dispatcher_3);
		return L_0;
	}
}
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_dispatcher()
extern "C" Object_t * CEvent_get_dispatcher_m416 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____dispatcher_3);
		return L_0;
	}
}
// System.Object UnionAssets.FLE.CEvent::get_currentTarget()
extern "C" Object_t * CEvent_get_currentTarget_m417 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____currentTarget_6);
		return L_0;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::get_isStoped()
extern "C" bool CEvent_get_isStoped_m418 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isStoped_4);
		return L_0;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::get_isLocked()
extern "C" bool CEvent_get_isLocked_m419 (CEvent_t93 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isLocked_5);
		return L_0;
	}
}
// EventButtonExample
#include "AssemblyU2DCSharp_EventButtonExample.h"
#ifndef _MSC_VER
#else
#endif
// EventButtonExample
#include "AssemblyU2DCSharp_EventButtonExampleMethodDeclarations.h"



// System.Void EventButtonExample::.ctor()
extern "C" void EventButtonExample__ctor_m420 (EventButtonExample_t94 * __this, const MethodInfo* method)
{
	{
		__this->___w_5 = (150.0f);
		__this->___h_6 = (50.0f);
		EventDispatcher__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventButtonExample::.cctor()
extern "C" void EventButtonExample__cctor_m421 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void EventButtonExample::Awake()
extern TypeInfo* EventButtonExample_t94_il2cpp_TypeInfo_var;
extern "C" void EventButtonExample_Awake_m422 (EventButtonExample_t94 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventButtonExample_t94_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventButtonExample_t94_il2cpp_TypeInfo_var);
		((EventButtonExample_t94_StaticFields*)EventButtonExample_t94_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void EventButtonExample::OnGUI()
extern TypeInfo* GUI_t602_il2cpp_TypeInfo_var;
extern "C" void EventButtonExample_OnGUI_m423 (EventButtonExample_t94 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t595  V_0 = {0};
	{
		int32_t L_0 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___w_5);
		int32_t L_2 = Screen_get_height_m3081(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___h_6);
		float L_4 = (__this->___w_5);
		float L_5 = (__this->___h_6);
		Rect__ctor_m3088((&V_0), ((float)((float)((float)((float)(((float)L_0))-(float)L_1))/(float)(2.0f))), ((float)((float)((float)((float)(((float)L_2))-(float)L_3))/(float)(2.0f))), L_4, L_5, /*hidden argument*/NULL);
		Rect_t595  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m3158(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral139, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral140, (String_t*) &_stringLiteral141);
	}

IL_0059:
	{
		return;
	}
}
// ExampleListner
#include "AssemblyU2DCSharp_ExampleListner.h"
#ifndef _MSC_VER
#else
#endif
// ExampleListner
#include "AssemblyU2DCSharp_ExampleListnerMethodDeclarations.h"



// System.Void ExampleListner::.ctor()
extern "C" void ExampleListner__ctor_m424 (ExampleListner_t95 * __this, const MethodInfo* method)
{
	{
		__this->___label_3 = (String_t*) &_stringLiteral142;
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleListner::Start()
extern TypeInfo* EventButtonExample_t94_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandlerFunction_t575_il2cpp_TypeInfo_var;
extern TypeInfo* DataEventHandlerFunction_t576_il2cpp_TypeInfo_var;
extern const MethodInfo* ExampleListner_onButtonClick_m426_MethodInfo_var;
extern const MethodInfo* ExampleListner_onButtonClickData_m427_MethodInfo_var;
extern "C" void ExampleListner_Start_m425 (ExampleListner_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventButtonExample_t94_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		EventHandlerFunction_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		DataEventHandlerFunction_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		ExampleListner_onButtonClick_m426_MethodInfo_var = il2cpp_codegen_method_info_from_index(63);
		ExampleListner_onButtonClickData_m427_MethodInfo_var = il2cpp_codegen_method_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventButtonExample_t94_il2cpp_TypeInfo_var);
		EventButtonExample_t94 * L_0 = ((EventButtonExample_t94_StaticFields*)EventButtonExample_t94_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_1 = { (void*)ExampleListner_onButtonClick_m426_MethodInfo_var };
		EventHandlerFunction_t575 * L_2 = (EventHandlerFunction_t575 *)il2cpp_codegen_object_new (EventHandlerFunction_t575_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3043(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, EventHandlerFunction_t575 * >::Invoke(4 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, L_0, (String_t*) &_stringLiteral140, L_2);
		EventButtonExample_t94 * L_3 = ((EventButtonExample_t94_StaticFields*)EventButtonExample_t94_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_4 = { (void*)ExampleListner_onButtonClickData_m427_MethodInfo_var };
		DataEventHandlerFunction_t576 * L_5 = (DataEventHandlerFunction_t576 *)il2cpp_codegen_object_new (DataEventHandlerFunction_t576_il2cpp_TypeInfo_var);
		DataEventHandlerFunction__ctor_m3047(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, DataEventHandlerFunction_t576 * >::Invoke(6 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction) */, L_3, (String_t*) &_stringLiteral140, L_5);
		return;
	}
}
// System.Void ExampleListner::onButtonClick()
extern "C" void ExampleListner_onButtonClick_m426 (ExampleListner_t95 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_4);
		__this->___count_4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
// System.Void ExampleListner::onButtonClickData(UnionAssets.FLE.CEvent)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ExampleListner_onButtonClickData_m427 (ExampleListner_t95 * __this, CEvent_t93 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m3100(NULL /*static, unused*/, (String_t*) &_stringLiteral143, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, (String_t*) &_stringLiteral144, /*hidden argument*/NULL);
		CEvent_t93 * L_0 = ___e;
		NullCheck(L_0);
		Object_t * L_1 = CEvent_get_dispatcher_m416(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral145, L_2, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		CEvent_t93 * L_4 = ___e;
		NullCheck(L_4);
		Object_t * L_5 = CEvent_get_data_m414(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral146, L_6, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		CEvent_t93 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = CEvent_get_name_m413(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_9);
		String_t* L_11 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral147, L_10, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, (String_t*) &_stringLiteral143, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleListner::OnGUI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t602_il2cpp_TypeInfo_var;
extern "C" void ExampleListner_OnGUI_m428 (ExampleListner_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t595  L_0 = {0};
		Rect__ctor_m3088(&L_0, (0.0f), (0.0f), (200.0f), (200.0f), /*hidden argument*/NULL);
		String_t* L_1 = (__this->___label_3);
		int32_t* L_2 = &(__this->___count_4);
		String_t* L_3 = Int32_ToString_m164(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m174(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		GUIStyle_t67 * L_5 = (__this->___style_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_Label_m3159(NULL /*static, unused*/, L_0, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// AdMobBanner
#include "AssemblyU2DCSharp_AdMobBanner.h"
#ifndef _MSC_VER
#else
#endif
// AdMobBanner
#include "AssemblyU2DCSharp_AdMobBannerMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// GoogleMobileAd
#include "AssemblyU2DCSharp_GoogleMobileAdMethodDeclarations.h"


// System.Void AdMobBanner::.ctor()
extern "C" void AdMobBanner__ctor_m429 (AdMobBanner_t97 * __this, const MethodInfo* method)
{
	{
		__this->___size_2 = 2;
		__this->___anchor_3 = 7;
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBanner::.cctor()
extern "C" void AdMobBanner__cctor_m430 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AdMobBanner::Awake()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void AdMobBanner_Awake_m431 (AdMobBanner_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = GoogleMobileAd_get_IsInited_m477(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m460(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void AdMobBanner::Start()
extern "C" void AdMobBanner_Start_m432 (AdMobBanner_t97 * __this, const MethodInfo* method)
{
	{
		AdMobBanner_ShowBanner_m434(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBanner::OnDestroy()
extern "C" void AdMobBanner_OnDestroy_m433 (AdMobBanner_t97 * __this, const MethodInfo* method)
{
	{
		AdMobBanner_HideBanner_m435(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBanner::ShowBanner()
extern TypeInfo* AdMobBanner_t97_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var;
extern "C" void AdMobBanner_ShowBanner_m434 (AdMobBanner_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AdMobBanner_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		Dictionary_2_t96 * L_0 = AdMobBanner_get_registerdBanners_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = AdMobBanner_get_sceneBannerId_m437(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		Dictionary_2_t96 * L_3 = AdMobBanner_get_registerdBanners_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = AdMobBanner_get_sceneBannerId_m437(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		goto IL_004e;
	}

IL_002b:
	{
		int32_t L_6 = (__this->___anchor_3);
		int32_t L_7 = (__this->___size_2);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_8 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		Dictionary_2_t96 * L_9 = AdMobBanner_get_registerdBanners_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = AdMobBanner_get_sceneBannerId_m437(__this, /*hidden argument*/NULL);
		Object_t * L_11 = V_0;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::Add(!0,!1) */, L_9, L_10, L_11);
	}

IL_004e:
	{
		Object_t * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_14);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_16 = V_0;
		NullCheck(L_16);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_16);
	}

IL_006a:
	{
		return;
	}
}
// System.Void AdMobBanner::HideBanner()
extern TypeInfo* AdMobBanner_t97_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var;
extern "C" void AdMobBanner_HideBanner_m435 (AdMobBanner_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AdMobBanner_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		Dictionary_2_t96 * L_0 = AdMobBanner_get_registerdBanners_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = AdMobBanner_get_sceneBannerId_m437(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		Dictionary_2_t96 * L_3 = AdMobBanner_get_registerdBanners_m436(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = AdMobBanner_get_sceneBannerId_m437(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_10 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_10);
	}

IL_0042:
	{
		goto IL_004e;
	}

IL_0047:
	{
		Object_t * L_11 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void GoogleMobileAdBanner::set_ShowOnLoad(System.Boolean) */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_11, 0);
	}

IL_004e:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner> AdMobBanner::get_registerdBanners()
extern TypeInfo* AdMobBanner_t97_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t96_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3160_MethodInfo_var;
extern "C" Dictionary_2_t96 * AdMobBanner_get_registerdBanners_m436 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AdMobBanner_t97_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		Dictionary_2_t96_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		Dictionary_2__ctor_m3160_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		Dictionary_2_t96 * L_0 = ((AdMobBanner_t97_StaticFields*)AdMobBanner_t97_il2cpp_TypeInfo_var->static_fields)->____registerdBanners_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t96 * L_1 = (Dictionary_2_t96 *)il2cpp_codegen_object_new (Dictionary_2_t96_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3160(L_1, /*hidden argument*/Dictionary_2__ctor_m3160_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		((AdMobBanner_t97_StaticFields*)AdMobBanner_t97_il2cpp_TypeInfo_var->static_fields)->____registerdBanners_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t97_il2cpp_TypeInfo_var);
		Dictionary_2_t96 * L_2 = ((AdMobBanner_t97_StaticFields*)AdMobBanner_t97_il2cpp_TypeInfo_var->static_fields)->____registerdBanners_4;
		return L_2;
	}
}
// System.String AdMobBanner::get_sceneBannerId()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AdMobBanner_get_sceneBannerId_m437 (AdMobBanner_t97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_loadedLevelName_m3161(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t312 * L_1 = Component_get_gameObject_m3162(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m3163(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m222(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral148, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// AdMobBannerInterstitial
#include "AssemblyU2DCSharp_AdMobBannerInterstitial.h"
#ifndef _MSC_VER
#else
#endif
// AdMobBannerInterstitial
#include "AssemblyU2DCSharp_AdMobBannerInterstitialMethodDeclarations.h"



// System.Void AdMobBannerInterstitial::.ctor()
extern "C" void AdMobBannerInterstitial__ctor_m438 (AdMobBannerInterstitial_t98 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBannerInterstitial::Awake()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void AdMobBannerInterstitial_Awake_m439 (AdMobBannerInterstitial_t98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = GoogleMobileAd_get_IsInited_m477(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m460(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void AdMobBannerInterstitial::Start()
extern "C" void AdMobBannerInterstitial_Start_m440 (AdMobBannerInterstitial_t98 * __this, const MethodInfo* method)
{
	{
		AdMobBannerInterstitial_ShowBanner_m441(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBannerInterstitial::ShowBanner()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void AdMobBannerInterstitial_ShowBanner_m441 (AdMobBannerInterstitial_t98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_StartInterstitialAd_m473(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.String AdMobBannerInterstitial::get_sceneBannerId()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AdMobBannerInterstitial_get_sceneBannerId_m442 (AdMobBannerInterstitial_t98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_loadedLevelName_m3161(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t312 * L_1 = Component_get_gameObject_m3162(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m3163(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m222(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral148, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// CustomInterstisialExample
#include "AssemblyU2DCSharp_CustomInterstisialExample.h"
#ifndef _MSC_VER
#else
#endif
// CustomInterstisialExample
#include "AssemblyU2DCSharp_CustomInterstisialExampleMethodDeclarations.h"

// GoogleMobileAd
#include "AssemblyU2DCSharp_GoogleMobileAd.h"


// System.Void CustomInterstisialExample::.ctor()
extern "C" void CustomInterstisialExample__ctor_m443 (CustomInterstisialExample_t99 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomInterstisialExample::Start()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandlerFunction_t575_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern const MethodInfo* CustomInterstisialExample_OnInterstisialsLoaded_m445_MethodInfo_var;
extern const MethodInfo* CustomInterstisialExample_OnInterstisialsOpen_m446_MethodInfo_var;
extern const MethodInfo* CustomInterstisialExample_OnInterstisialsClosed_m447_MethodInfo_var;
extern "C" void CustomInterstisialExample_Start_m444 (CustomInterstisialExample_t99 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		EventHandlerFunction_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		CustomInterstisialExample_OnInterstisialsLoaded_m445_MethodInfo_var = il2cpp_codegen_method_info_from_index(66);
		CustomInterstisialExample_OnInterstisialsOpen_m446_MethodInfo_var = il2cpp_codegen_method_info_from_index(67);
		CustomInterstisialExample_OnInterstisialsClosed_m447_MethodInfo_var = il2cpp_codegen_method_info_from_index(68);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m460(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_1 = { (void*)CustomInterstisialExample_OnInterstisialsLoaded_m445_MethodInfo_var };
		EventHandlerFunction_t575 * L_2 = (EventHandlerFunction_t575 *)il2cpp_codegen_object_new (EventHandlerFunction_t575_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3043(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t575 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_0, (String_t*) &_stringLiteral149, L_2);
		Object_t * L_3 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_4 = { (void*)CustomInterstisialExample_OnInterstisialsOpen_m446_MethodInfo_var };
		EventHandlerFunction_t575 * L_5 = (EventHandlerFunction_t575 *)il2cpp_codegen_object_new (EventHandlerFunction_t575_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3043(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t575 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_3, (String_t*) &_stringLiteral150, L_5);
		Object_t * L_6 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_7 = { (void*)CustomInterstisialExample_OnInterstisialsClosed_m447_MethodInfo_var };
		EventHandlerFunction_t575 * L_8 = (EventHandlerFunction_t575 *)il2cpp_codegen_object_new (EventHandlerFunction_t575_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3043(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t575 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_6, (String_t*) &_stringLiteral151, L_8);
		GoogleMobileAd_LoadInterstitialAd_m474(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomInterstisialExample::OnInterstisialsLoaded()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void CustomInterstisialExample_OnInterstisialsLoaded_m445 (CustomInterstisialExample_t99 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_ShowInterstitialAd_m475(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomInterstisialExample::OnInterstisialsOpen()
extern "C" void CustomInterstisialExample_OnInterstisialsOpen_m446 (CustomInterstisialExample_t99 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CustomInterstisialExample::OnInterstisialsClosed()
extern "C" void CustomInterstisialExample_OnInterstisialsClosed_m447 (CustomInterstisialExample_t99 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// GoogleAdsExample
#include "AssemblyU2DCSharp_GoogleAdsExample.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAdsExample
#include "AssemblyU2DCSharp_GoogleAdsExampleMethodDeclarations.h"

// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// AndroidMonth
#include "AssemblyU2DCSharp_AndroidMonth.h"
// System.Action
#include "System_Core_System_Action.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Action`1<GoogleMobileAdBanner>
#include "mscorlib_System_Action_1_gen.h"
// GADInAppResolution
#include "AssemblyU2DCSharp_GADInAppResolution.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.Action`1<GoogleMobileAdBanner>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"


// System.Void GoogleAdsExample::.ctor()
extern "C" void GoogleAdsExample__ctor_m448 (GoogleAdsExample_t101 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::Start()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandlerFunction_t575_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t103_il2cpp_TypeInfo_var;
extern TypeInfo* DataEventHandlerFunction_t576_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInterstisialsLoaded_m452_MethodInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInterstisialsOpen_m453_MethodInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInterstitialLoaded_m455_MethodInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInAppRequest_m454_MethodInfo_var;
extern "C" void GoogleAdsExample_Start_m449 (GoogleAdsExample_t101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		EventHandlerFunction_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		Action_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		DataEventHandlerFunction_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		GoogleAdsExample_OnInterstisialsLoaded_m452_MethodInfo_var = il2cpp_codegen_method_info_from_index(69);
		GoogleAdsExample_OnInterstisialsOpen_m453_MethodInfo_var = il2cpp_codegen_method_info_from_index(70);
		GoogleAdsExample_OnInterstitialLoaded_m455_MethodInfo_var = il2cpp_codegen_method_info_from_index(71);
		GoogleAdsExample_OnInAppRequest_m454_MethodInfo_var = il2cpp_codegen_method_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m460(NULL /*static, unused*/, /*hidden argument*/NULL);
		GoogleMobileAd_SetGender_m472(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GoogleMobileAd_AddKeyword_m467(NULL /*static, unused*/, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		GoogleMobileAd_SetBirthday_m468(NULL /*static, unused*/, ((int32_t)1989), 2, ((int32_t)18), /*hidden argument*/NULL);
		GoogleMobileAd_TagForChildDirectedTreatment_m469(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		GoogleMobileAd_AddTestDevice_m470(NULL /*static, unused*/, (String_t*) &_stringLiteral153, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GoogleAdsExample_OnInterstisialsLoaded_m452_MethodInfo_var };
		EventHandlerFunction_t575 * L_1 = (EventHandlerFunction_t575 *)il2cpp_codegen_object_new (EventHandlerFunction_t575_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3043(L_1, __this, L_0, /*hidden argument*/NULL);
		GoogleMobileAd_addEventListener_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral149, L_1, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdsExample_OnInterstisialsOpen_m453_MethodInfo_var };
		EventHandlerFunction_t575 * L_3 = (EventHandlerFunction_t575 *)il2cpp_codegen_object_new (EventHandlerFunction_t575_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3043(L_3, __this, L_2, /*hidden argument*/NULL);
		GoogleMobileAd_addEventListener_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral150, L_3, /*hidden argument*/NULL);
		Action_t103 * L_4 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2;
		IntPtr_t L_5 = { (void*)GoogleAdsExample_OnInterstitialLoaded_m455_MethodInfo_var };
		Action_t103 * L_6 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t622 * L_7 = Delegate_Combine_m3165(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = ((Action_t103 *)Castclass(L_7, Action_t103_il2cpp_TypeInfo_var));
		IntPtr_t L_8 = { (void*)GoogleAdsExample_OnInAppRequest_m454_MethodInfo_var };
		DataEventHandlerFunction_t576 * L_9 = (DataEventHandlerFunction_t576 *)il2cpp_codegen_object_new (DataEventHandlerFunction_t576_il2cpp_TypeInfo_var);
		DataEventHandlerFunction__ctor_m3047(L_9, __this, L_8, /*hidden argument*/NULL);
		GoogleMobileAd_addEventListener_m487(NULL /*static, unused*/, (String_t*) &_stringLiteral154, L_9, /*hidden argument*/NULL);
		GoogleAdsExample_InitStyles_m450(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::InitStyles()
extern TypeInfo* GUIStyle_t67_il2cpp_TypeInfo_var;
extern "C" void GoogleAdsExample_InitStyles_m450 (GoogleAdsExample_t101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t67 * L_0 = (GUIStyle_t67 *)il2cpp_codegen_object_new (GUIStyle_t67_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3064(L_0, /*hidden argument*/NULL);
		__this->___style_2 = L_0;
		GUIStyle_t67 * L_1 = (__this->___style_2);
		NullCheck(L_1);
		GUIStyleState_t623 * L_2 = GUIStyle_get_normal_m3166(L_1, /*hidden argument*/NULL);
		Color_t285  L_3 = Color_get_white_m3167(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_textColor_m3168(L_2, L_3, /*hidden argument*/NULL);
		GUIStyle_t67 * L_4 = (__this->___style_2);
		NullCheck(L_4);
		GUIStyle_set_fontSize_m3169(L_4, ((int32_t)16), /*hidden argument*/NULL);
		GUIStyle_t67 * L_5 = (__this->___style_2);
		NullCheck(L_5);
		GUIStyle_set_fontStyle_m3170(L_5, 3, /*hidden argument*/NULL);
		GUIStyle_t67 * L_6 = (__this->___style_2);
		NullCheck(L_6);
		GUIStyle_set_alignment_m3067(L_6, 0, /*hidden argument*/NULL);
		GUIStyle_t67 * L_7 = (__this->___style_2);
		NullCheck(L_7);
		GUIStyle_set_wordWrap_m3068(L_7, 1, /*hidden argument*/NULL);
		GUIStyle_t67 * L_8 = (GUIStyle_t67 *)il2cpp_codegen_object_new (GUIStyle_t67_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3064(L_8, /*hidden argument*/NULL);
		__this->___style2_3 = L_8;
		GUIStyle_t67 * L_9 = (__this->___style2_3);
		NullCheck(L_9);
		GUIStyleState_t623 * L_10 = GUIStyle_get_normal_m3166(L_9, /*hidden argument*/NULL);
		Color_t285  L_11 = Color_get_white_m3167(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyleState_set_textColor_m3168(L_10, L_11, /*hidden argument*/NULL);
		GUIStyle_t67 * L_12 = (__this->___style2_3);
		NullCheck(L_12);
		GUIStyle_set_fontSize_m3169(L_12, ((int32_t)12), /*hidden argument*/NULL);
		GUIStyle_t67 * L_13 = (__this->___style2_3);
		NullCheck(L_13);
		GUIStyle_set_fontStyle_m3170(L_13, 2, /*hidden argument*/NULL);
		GUIStyle_t67 * L_14 = (__this->___style2_3);
		NullCheck(L_14);
		GUIStyle_set_alignment_m3067(L_14, 0, /*hidden argument*/NULL);
		GUIStyle_t67 * L_15 = (__this->___style2_3);
		NullCheck(L_15);
		GUIStyle_set_wordWrap_m3068(L_15, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnGUI()
extern TypeInfo* GUI_t602_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnBannerLoadedAction_m457_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern "C" void GoogleAdsExample_OnGUI_m451 (GoogleAdsExample_t101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		GoogleAdsExample_OnBannerLoadedAction_m457_MethodInfo_var = il2cpp_codegen_method_info_from_index(73);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (20.0f);
		V_1 = (10.0f);
		float L_0 = V_1;
		float L_1 = V_0;
		int32_t L_2 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t595  L_3 = {0};
		Rect__ctor_m3088(&L_3, L_0, L_1, (((float)L_2)), (40.0f), /*hidden argument*/NULL);
		GUIStyle_t67 * L_4 = (__this->___style_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_Label_m3159(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral155, L_4, /*hidden argument*/NULL);
		float L_5 = V_0;
		V_0 = ((float)((float)L_5+(float)(40.0f)));
		float L_6 = V_1;
		float L_7 = V_0;
		Rect_t595  L_8 = {0};
		Rect__ctor_m3088(&L_8, L_6, L_7, (150.0f), (50.0f), /*hidden argument*/NULL);
		bool L_9 = GUI_Button_m3158(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral156, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_StartInterstitialAd_m473(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_005b:
	{
		float L_10 = V_1;
		V_1 = ((float)((float)L_10+(float)(170.0f)));
		float L_11 = V_1;
		float L_12 = V_0;
		Rect_t595  L_13 = {0};
		Rect__ctor_m3088(&L_13, L_11, L_12, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_14 = GUI_Button_m3158(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral157, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_LoadInterstitialAd_m474(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0088:
	{
		float L_15 = V_1;
		V_1 = ((float)((float)L_15+(float)(170.0f)));
		bool L_16 = (__this->___IsInterstisialsAdReady_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		float L_17 = V_1;
		float L_18 = V_0;
		Rect_t595  L_19 = {0};
		Rect__ctor_m3088(&L_19, L_17, L_18, (150.0f), (50.0f), /*hidden argument*/NULL);
		bool L_20 = GUI_Button_m3158(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral158, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_ShowInterstitialAd_m475(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		float L_21 = V_0;
		V_0 = ((float)((float)L_21+(float)(80.0f)));
		V_1 = (10.0f);
		float L_22 = V_1;
		float L_23 = V_0;
		int32_t L_24 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t595  L_25 = {0};
		Rect__ctor_m3088(&L_25, L_22, L_23, (((float)L_24)), (40.0f), /*hidden argument*/NULL);
		GUIStyle_t67 * L_26 = (__this->___style_2);
		GUI_Label_m3159(NULL /*static, unused*/, L_25, (String_t*) &_stringLiteral159, L_26, /*hidden argument*/NULL);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_27 = (__this->___banner1_4);
		if (L_27)
		{
			goto IL_010d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_010d:
	{
		float L_28 = V_0;
		V_0 = ((float)((float)L_28+(float)(40.0f)));
		float L_29 = V_1;
		float L_30 = V_0;
		Rect_t595  L_31 = {0};
		Rect__ctor_m3088(&L_31, L_29, L_30, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_32 = GUI_Button_m3158(NULL /*static, unused*/, L_31, (String_t*) &_stringLiteral160, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0148;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_33 = GoogleMobileAd_CreateAdBanner_m464(NULL /*static, unused*/, ((int32_t)300), ((int32_t)100), 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_33;
	}

IL_0148:
	{
		float L_34 = V_1;
		V_1 = ((float)((float)L_34+(float)(170.0f)));
		float L_35 = V_1;
		float L_36 = V_0;
		Rect_t595  L_37 = {0};
		Rect__ctor_m3088(&L_37, L_35, L_36, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_38 = GUI_Button_m3158(NULL /*static, unused*/, L_37, (String_t*) &_stringLiteral161, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_017d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_39 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, 0, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_39;
	}

IL_017d:
	{
		float L_40 = V_1;
		V_1 = ((float)((float)L_40+(float)(170.0f)));
		float L_41 = V_1;
		float L_42 = V_0;
		Rect_t595  L_43 = {0};
		Rect__ctor_m3088(&L_43, L_41, L_42, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_44 = GUI_Button_m3158(NULL /*static, unused*/, L_43, (String_t*) &_stringLiteral162, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_45 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, 1, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_45;
	}

IL_01b2:
	{
		float L_46 = V_1;
		V_1 = ((float)((float)L_46+(float)(170.0f)));
		float L_47 = V_1;
		float L_48 = V_0;
		Rect_t595  L_49 = {0};
		Rect__ctor_m3088(&L_49, L_47, L_48, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_50 = GUI_Button_m3158(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral163, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01e7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_51 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, 2, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_51;
	}

IL_01e7:
	{
		float L_52 = V_1;
		V_1 = ((float)((float)L_52+(float)(170.0f)));
		float L_53 = V_1;
		float L_54 = V_0;
		Rect_t595  L_55 = {0};
		Rect__ctor_m3088(&L_55, L_53, L_54, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_56 = GUI_Button_m3158(NULL /*static, unused*/, L_55, (String_t*) &_stringLiteral164, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_021c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_57 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, 6, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_57;
	}

IL_021c:
	{
		float L_58 = V_1;
		V_1 = ((float)((float)L_58+(float)(170.0f)));
		float L_59 = V_1;
		float L_60 = V_0;
		Rect_t595  L_61 = {0};
		Rect__ctor_m3088(&L_61, L_59, L_60, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_62 = GUI_Button_m3158(NULL /*static, unused*/, L_61, (String_t*) &_stringLiteral165, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0251;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_63 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, 7, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_63;
	}

IL_0251:
	{
		float L_64 = V_1;
		V_1 = ((float)((float)L_64+(float)(170.0f)));
		float L_65 = V_1;
		float L_66 = V_0;
		Rect_t595  L_67 = {0};
		Rect__ctor_m3088(&L_67, L_65, L_66, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_68 = GUI_Button_m3158(NULL /*static, unused*/, L_67, (String_t*) &_stringLiteral166, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0286;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_69 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, 8, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_69;
	}

IL_0286:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_70 = (__this->___banner1_4);
		if (!L_70)
		{
			goto IL_02ad;
		}
	}
	{
		Object_t * L_71 = (__this->___banner1_4);
		NullCheck(L_71);
		bool L_72 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_71);
		if (!L_72)
		{
			goto IL_02ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_02ad:
	{
		float L_73 = V_0;
		V_0 = ((float)((float)L_73+(float)(80.0f)));
		V_1 = (10.0f);
		float L_74 = V_1;
		float L_75 = V_0;
		Rect_t595  L_76 = {0};
		Rect__ctor_m3088(&L_76, L_74, L_75, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_77 = GUI_Button_m3158(NULL /*static, unused*/, L_76, (String_t*) &_stringLiteral167, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_02e6;
		}
	}
	{
		Object_t * L_78 = (__this->___banner1_4);
		NullCheck(L_78);
		InterfaceActionInvoker0::Invoke(2 /* System.Void GoogleMobileAdBanner::Refresh() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_78);
	}

IL_02e6:
	{
		float L_79 = V_1;
		V_1 = ((float)((float)L_79+(float)(170.0f)));
		float L_80 = V_1;
		float L_81 = V_0;
		Rect_t595  L_82 = {0};
		Rect__ctor_m3088(&L_82, L_80, L_81, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_83 = GUI_Button_m3158(NULL /*static, unused*/, L_82, (String_t*) &_stringLiteral168, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_031a;
		}
	}
	{
		Object_t * L_84 = (__this->___banner1_4);
		NullCheck(L_84);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void GoogleMobileAdBanner::SetBannerPosition(UnityEngine.TextAnchor) */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_84, 4);
	}

IL_031a:
	{
		float L_85 = V_1;
		V_1 = ((float)((float)L_85+(float)(170.0f)));
		float L_86 = V_1;
		float L_87 = V_0;
		Rect_t595  L_88 = {0};
		Rect__ctor_m3088(&L_88, L_86, L_87, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_89 = GUI_Button_m3158(NULL /*static, unused*/, L_88, (String_t*) &_stringLiteral169, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0363;
		}
	}
	{
		Object_t * L_90 = (__this->___banner1_4);
		int32_t L_91 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_92 = Random_Range_m3171(NULL /*static, unused*/, 0, L_91, /*hidden argument*/NULL);
		int32_t L_93 = Screen_get_height_m3081(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_94 = Random_Range_m3171(NULL /*static, unused*/, 0, L_93, /*hidden argument*/NULL);
		NullCheck(L_90);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(3 /* System.Void GoogleMobileAdBanner::SetBannerPosition(System.Int32,System.Int32) */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_90, L_92, L_94);
	}

IL_0363:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_95 = (__this->___banner1_4);
		if (!L_95)
		{
			goto IL_039a;
		}
	}
	{
		Object_t * L_96 = (__this->___banner1_4);
		NullCheck(L_96);
		bool L_97 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_96);
		if (!L_97)
		{
			goto IL_039a;
		}
	}
	{
		Object_t * L_98 = (__this->___banner1_4);
		NullCheck(L_98);
		bool L_99 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_98);
		if (!L_99)
		{
			goto IL_039a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_039a:
	{
		float L_100 = V_1;
		V_1 = ((float)((float)L_100+(float)(170.0f)));
		float L_101 = V_1;
		float L_102 = V_0;
		Rect_t595  L_103 = {0};
		Rect__ctor_m3088(&L_103, L_101, L_102, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_104 = GUI_Button_m3158(NULL /*static, unused*/, L_103, (String_t*) &_stringLiteral170, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_03cd;
		}
	}
	{
		Object_t * L_105 = (__this->___banner1_4);
		NullCheck(L_105);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_105);
	}

IL_03cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_106 = (__this->___banner1_4);
		if (!L_106)
		{
			goto IL_0404;
		}
	}
	{
		Object_t * L_107 = (__this->___banner1_4);
		NullCheck(L_107);
		bool L_108 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_107);
		if (!L_108)
		{
			goto IL_0404;
		}
	}
	{
		Object_t * L_109 = (__this->___banner1_4);
		NullCheck(L_109);
		bool L_110 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_109);
		if (L_110)
		{
			goto IL_0404;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0404:
	{
		float L_111 = V_1;
		V_1 = ((float)((float)L_111+(float)(170.0f)));
		float L_112 = V_1;
		float L_113 = V_0;
		Rect_t595  L_114 = {0};
		Rect__ctor_m3088(&L_114, L_112, L_113, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_115 = GUI_Button_m3158(NULL /*static, unused*/, L_114, (String_t*) &_stringLiteral171, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_0437;
		}
	}
	{
		Object_t * L_116 = (__this->___banner1_4);
		NullCheck(L_116);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_116);
	}

IL_0437:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_117 = (__this->___banner1_4);
		if (!L_117)
		{
			goto IL_044e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_044e:
	{
		float L_118 = V_1;
		V_1 = ((float)((float)L_118+(float)(170.0f)));
		float L_119 = V_1;
		float L_120 = V_0;
		Rect_t595  L_121 = {0};
		Rect__ctor_m3088(&L_121, L_119, L_120, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_122 = GUI_Button_m3158(NULL /*static, unused*/, L_121, (String_t*) &_stringLiteral172, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_048d;
		}
	}
	{
		Object_t * L_123 = (__this->___banner1_4);
		NullCheck(L_123);
		int32_t L_124 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 GoogleMobileAdBanner::get_id() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_123);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_DestroyBanner_m466(NULL /*static, unused*/, L_124, /*hidden argument*/NULL);
		__this->___banner1_4 = (Object_t *)NULL;
	}

IL_048d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		float L_125 = V_0;
		V_0 = ((float)((float)L_125+(float)(80.0f)));
		V_1 = (10.0f);
		float L_126 = V_1;
		float L_127 = V_0;
		int32_t L_128 = Screen_get_width_m3066(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t595  L_129 = {0};
		Rect__ctor_m3088(&L_129, L_126, L_127, (((float)L_128)), (40.0f), /*hidden argument*/NULL);
		GUIStyle_t67 * L_130 = (__this->___style_2);
		GUI_Label_m3159(NULL /*static, unused*/, L_129, (String_t*) &_stringLiteral173, L_130, /*hidden argument*/NULL);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_131 = (__this->___banner2_5);
		if (L_131)
		{
			goto IL_04da;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_04da:
	{
		float L_132 = V_0;
		V_0 = ((float)((float)L_132+(float)(40.0f)));
		float L_133 = V_1;
		float L_134 = V_0;
		Rect_t595  L_135 = {0};
		Rect__ctor_m3088(&L_135, L_133, L_134, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_136 = GUI_Button_m3158(NULL /*static, unused*/, L_135, (String_t*) &_stringLiteral174, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0542;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_137 = GoogleMobileAd_CreateAdBanner_m463(NULL /*static, unused*/, 6, 2, /*hidden argument*/NULL);
		__this->___banner2_5 = L_137;
		Object_t * L_138 = (__this->___banner2_5);
		Object_t * L_139 = L_138;
		NullCheck(L_139);
		Action_1_t109 * L_140 = (Action_1_t109 *)InterfaceFuncInvoker0< Action_1_t109 * >::Invoke(14 /* System.Action`1<GoogleMobileAdBanner> GoogleMobileAdBanner::get_OnLoadedAction() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_139);
		IntPtr_t L_141 = { (void*)GoogleAdsExample_OnBannerLoadedAction_m457_MethodInfo_var };
		Action_1_t109 * L_142 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_142, __this, L_141, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		Delegate_t622 * L_143 = Delegate_Combine_m3165(NULL /*static, unused*/, L_140, L_142, /*hidden argument*/NULL);
		NullCheck(L_139);
		InterfaceActionInvoker1< Action_1_t109 * >::Invoke(15 /* System.Void GoogleMobileAdBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>) */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_139, ((Action_1_t109 *)Castclass(L_143, Action_1_t109_il2cpp_TypeInfo_var)));
		Object_t * L_144 = (__this->___banner2_5);
		NullCheck(L_144);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void GoogleMobileAdBanner::set_ShowOnLoad(System.Boolean) */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_144, 0);
	}

IL_0542:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_145 = (__this->___banner2_5);
		if (!L_145)
		{
			goto IL_0569;
		}
	}
	{
		Object_t * L_146 = (__this->___banner2_5);
		NullCheck(L_146);
		bool L_147 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_146);
		if (!L_147)
		{
			goto IL_0569;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0569:
	{
		float L_148 = V_1;
		V_1 = ((float)((float)L_148+(float)(170.0f)));
		float L_149 = V_1;
		float L_150 = V_0;
		Rect_t595  L_151 = {0};
		Rect__ctor_m3088(&L_151, L_149, L_150, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_152 = GUI_Button_m3158(NULL /*static, unused*/, L_151, (String_t*) &_stringLiteral167, /*hidden argument*/NULL);
		if (!L_152)
		{
			goto IL_059c;
		}
	}
	{
		Object_t * L_153 = (__this->___banner2_5);
		NullCheck(L_153);
		InterfaceActionInvoker0::Invoke(2 /* System.Void GoogleMobileAdBanner::Refresh() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_153);
	}

IL_059c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_154 = (__this->___banner2_5);
		if (!L_154)
		{
			goto IL_05d3;
		}
	}
	{
		Object_t * L_155 = (__this->___banner2_5);
		NullCheck(L_155);
		bool L_156 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_155);
		if (!L_156)
		{
			goto IL_05d3;
		}
	}
	{
		Object_t * L_157 = (__this->___banner2_5);
		NullCheck(L_157);
		bool L_158 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_157);
		if (!L_158)
		{
			goto IL_05d3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_05d3:
	{
		float L_159 = V_1;
		V_1 = ((float)((float)L_159+(float)(170.0f)));
		float L_160 = V_1;
		float L_161 = V_0;
		Rect_t595  L_162 = {0};
		Rect__ctor_m3088(&L_162, L_160, L_161, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_163 = GUI_Button_m3158(NULL /*static, unused*/, L_162, (String_t*) &_stringLiteral170, /*hidden argument*/NULL);
		if (!L_163)
		{
			goto IL_0606;
		}
	}
	{
		Object_t * L_164 = (__this->___banner2_5);
		NullCheck(L_164);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_164);
	}

IL_0606:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_165 = (__this->___banner2_5);
		if (!L_165)
		{
			goto IL_063d;
		}
	}
	{
		Object_t * L_166 = (__this->___banner2_5);
		NullCheck(L_166);
		bool L_167 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_166);
		if (!L_167)
		{
			goto IL_063d;
		}
	}
	{
		Object_t * L_168 = (__this->___banner2_5);
		NullCheck(L_168);
		bool L_169 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_168);
		if (L_169)
		{
			goto IL_063d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_063d:
	{
		float L_170 = V_1;
		V_1 = ((float)((float)L_170+(float)(170.0f)));
		float L_171 = V_1;
		float L_172 = V_0;
		Rect_t595  L_173 = {0};
		Rect__ctor_m3088(&L_173, L_171, L_172, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_174 = GUI_Button_m3158(NULL /*static, unused*/, L_173, (String_t*) &_stringLiteral171, /*hidden argument*/NULL);
		if (!L_174)
		{
			goto IL_0670;
		}
	}
	{
		Object_t * L_175 = (__this->___banner2_5);
		NullCheck(L_175);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_175);
	}

IL_0670:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_176 = (__this->___banner2_5);
		if (!L_176)
		{
			goto IL_0687;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0687:
	{
		float L_177 = V_1;
		V_1 = ((float)((float)L_177+(float)(170.0f)));
		float L_178 = V_1;
		float L_179 = V_0;
		Rect_t595  L_180 = {0};
		Rect__ctor_m3088(&L_180, L_178, L_179, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		bool L_181 = GUI_Button_m3158(NULL /*static, unused*/, L_180, (String_t*) &_stringLiteral172, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_06c6;
		}
	}
	{
		Object_t * L_182 = (__this->___banner2_5);
		NullCheck(L_182);
		int32_t L_183 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 GoogleMobileAdBanner::get_id() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_182);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_DestroyBanner_m466(NULL /*static, unused*/, L_183, /*hidden argument*/NULL);
		__this->___banner2_5 = (Object_t *)NULL;
	}

IL_06c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t602_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3099(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnInterstisialsLoaded()
extern "C" void GoogleAdsExample_OnInterstisialsLoaded_m452 (GoogleAdsExample_t101 * __this, const MethodInfo* method)
{
	{
		__this->___IsInterstisialsAdReady_6 = 1;
		return;
	}
}
// System.Void GoogleAdsExample::OnInterstisialsOpen()
extern "C" void GoogleAdsExample_OnInterstisialsOpen_m453 (GoogleAdsExample_t101 * __this, const MethodInfo* method)
{
	{
		__this->___IsInterstisialsAdReady_6 = 0;
		return;
	}
}
// System.Void GoogleAdsExample::OnInAppRequest(UnionAssets.FLE.CEvent)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void GoogleAdsExample_OnInAppRequest_m454 (GoogleAdsExample_t101 * __this, CEvent_t93 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		CEvent_t93 * L_0 = ___e;
		NullCheck(L_0);
		Object_t * L_1 = CEvent_get_data_m414(L_0, /*hidden argument*/NULL);
		V_0 = ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m222(NULL /*static, unused*/, (String_t*) &_stringLiteral175, L_2, (String_t*) &_stringLiteral176, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_RecordInAppResolution_m476(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnInterstitialLoaded()
extern "C" void GoogleAdsExample_OnInterstitialLoaded_m455 (GoogleAdsExample_t101 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m3100(NULL /*static, unused*/, (String_t*) &_stringLiteral177, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnOpenedAction(GoogleMobileAdBanner)
extern TypeInfo* GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnOpenedAction_m456_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern "C" void GoogleAdsExample_OnOpenedAction_m456 (GoogleAdsExample_t101 * __this, Object_t * ___banner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		GoogleAdsExample_OnOpenedAction_m456_MethodInfo_var = il2cpp_codegen_method_info_from_index(75);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___banner;
		Object_t * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t109 * L_2 = (Action_1_t109 *)InterfaceFuncInvoker0< Action_1_t109 * >::Invoke(18 /* System.Action`1<GoogleMobileAdBanner> GoogleMobileAdBanner::get_OnOpenedAction() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_1);
		IntPtr_t L_3 = { (void*)GoogleAdsExample_OnOpenedAction_m456_MethodInfo_var };
		Action_1_t109 * L_4 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_4, __this, L_3, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		Delegate_t622 * L_5 = Delegate_Remove_m3173(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t109 * >::Invoke(19 /* System.Void GoogleMobileAdBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>) */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_1, ((Action_1_t109 *)Castclass(L_5, Action_1_t109_il2cpp_TypeInfo_var)));
		Debug_Log_m3100(NULL /*static, unused*/, (String_t*) &_stringLiteral178, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnBannerLoadedAction(GoogleMobileAdBanner)
extern TypeInfo* GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnBannerLoadedAction_m457_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern "C" void GoogleAdsExample_OnBannerLoadedAction_m457 (GoogleAdsExample_t101 * __this, Object_t * ___banner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		GoogleAdsExample_OnBannerLoadedAction_m457_MethodInfo_var = il2cpp_codegen_method_info_from_index(73);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___banner;
		Object_t * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t109 * L_2 = (Action_1_t109 *)InterfaceFuncInvoker0< Action_1_t109 * >::Invoke(14 /* System.Action`1<GoogleMobileAdBanner> GoogleMobileAdBanner::get_OnLoadedAction() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_1);
		IntPtr_t L_3 = { (void*)GoogleAdsExample_OnBannerLoadedAction_m457_MethodInfo_var };
		Action_1_t109 * L_4 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_4, __this, L_3, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		Delegate_t622 * L_5 = Delegate_Remove_m3173(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t109 * >::Invoke(15 /* System.Void GoogleMobileAdBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>) */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_1, ((Action_1_t109 *)Castclass(L_5, Action_1_t109_il2cpp_TypeInfo_var)));
		Object_t * L_6 = ___banner;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t100_il2cpp_TypeInfo_var, L_6);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.String>
#include "mscorlib_System_Action_1_gen_0.h"
// GADTestDevice
#include "AssemblyU2DCSharp_GADTestDevice.h"
// System.Collections.Generic.List`1/Enumerator<GADTestDevice>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// IOSAdMobController
#include "AssemblyU2DCSharp_IOSAdMobController.h"
// GoogleMobileAdSettings
#include "AssemblyU2DCSharp_GoogleMobileAdSettings.h"
// AndroidAdMobController
#include "AssemblyU2DCSharp_AndroidAdMobController.h"
// WP8AdMobController
#include "AssemblyU2DCSharp_WP8AdMobController.h"
// System.Collections.Generic.List`1<GADTestDevice>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Action`1<System.String>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// SA_Singleton`1<IOSAdMobController>
#include "AssemblyU2DCSharp_SA_Singleton_1_genMethodDeclarations.h"
// GoogleMobileAdSettings
#include "AssemblyU2DCSharp_GoogleMobileAdSettingsMethodDeclarations.h"
// SA_Singleton`1<AndroidAdMobController>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_1MethodDeclarations.h"
// SA_Singleton`1<WP8AdMobController>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<GADTestDevice>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<GADTestDevice>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"


// System.Void GoogleMobileAd::.ctor()
extern "C" void GoogleMobileAd__ctor_m458 (GoogleMobileAd_t105 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAd::.cctor()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m490_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m491_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m492_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m493_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m494_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m495_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3174_MethodInfo_var;
extern "C" void GoogleMobileAd__cctor_m459 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		Action_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Action_1_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m490_MethodInfo_var = il2cpp_codegen_method_info_from_index(76);
		GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m491_MethodInfo_var = il2cpp_codegen_method_info_from_index(77);
		GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m492_MethodInfo_var = il2cpp_codegen_method_info_from_index(78);
		GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m493_MethodInfo_var = il2cpp_codegen_method_info_from_index(79);
		GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m494_MethodInfo_var = il2cpp_codegen_method_info_from_index(80);
		GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m495_MethodInfo_var = il2cpp_codegen_method_info_from_index(81);
		Action_1__ctor_m3174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1 = 0;
		Action_t103 * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_8;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = { (void*)GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m490_MethodInfo_var };
		Action_t103 * L_2 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_2, NULL, L_1, /*hidden argument*/NULL);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_8 = L_2;
	}

IL_001e:
	{
		Action_t103 * L_3 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_8;
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = L_3;
		Action_t103 * L_4 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_9;
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_5 = { (void*)GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m491_MethodInfo_var };
		Action_t103 * L_6 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_6, NULL, L_5, /*hidden argument*/NULL);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_9 = L_6;
	}

IL_0040:
	{
		Action_t103 * L_7 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_9;
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialFailedLoading_3 = L_7;
		Action_t103 * L_8 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_10;
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		IntPtr_t L_9 = { (void*)GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m492_MethodInfo_var };
		Action_t103 * L_10 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_10, NULL, L_9, /*hidden argument*/NULL);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_10 = L_10;
	}

IL_0062:
	{
		Action_t103 * L_11 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_10;
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4 = L_11;
		Action_t103 * L_12 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_11;
		if (L_12)
		{
			goto IL_0084;
		}
	}
	{
		IntPtr_t L_13 = { (void*)GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m493_MethodInfo_var };
		Action_t103 * L_14 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_14, NULL, L_13, /*hidden argument*/NULL);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_11 = L_14;
	}

IL_0084:
	{
		Action_t103 * L_15 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_11;
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5 = L_15;
		Action_t103 * L_16 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_12;
		if (L_16)
		{
			goto IL_00a6;
		}
	}
	{
		IntPtr_t L_17 = { (void*)GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m494_MethodInfo_var };
		Action_t103 * L_18 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_18, NULL, L_17, /*hidden argument*/NULL);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_12 = L_18;
	}

IL_00a6:
	{
		Action_t103 * L_19 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_12;
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLeftApplication_6 = L_19;
		Action_1_t104 * L_20 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_13;
		if (L_20)
		{
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m495_MethodInfo_var };
		Action_1_t104 * L_22 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_13 = L_22;
	}

IL_00c8:
	{
		Action_1_t104 * L_23 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_13;
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnAdInAppRequest_7 = L_23;
		return;
	}
}
// System.Void GoogleMobileAd::Init()
extern TypeInfo* SA_Singleton_1_t113_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t121_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t118_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t104_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t624_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3176_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3177_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3178_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialLoadedListner_m480_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialFailedLoadingListner_m481_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialOpenedListner_m482_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialClosedListner_m483_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialLeftApplicationListner_m484_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnAdInAppRequestListner_m485_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3174_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3114_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3179_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3180_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3181_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3182_MethodInfo_var;
extern "C" void GoogleMobileAd_Init_m460 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SA_Singleton_1_t121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		SA_Singleton_1_t118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		Action_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Action_1_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		List_1_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Enumerator_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		SA_Singleton_1_get_instance_m3176_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		SA_Singleton_1_get_instance_m3177_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		SA_Singleton_1_get_instance_m3178_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		GoogleMobileAd_OnInterstitialLoadedListner_m480_MethodInfo_var = il2cpp_codegen_method_info_from_index(86);
		GoogleMobileAd_OnInterstitialFailedLoadingListner_m481_MethodInfo_var = il2cpp_codegen_method_info_from_index(87);
		GoogleMobileAd_OnInterstitialOpenedListner_m482_MethodInfo_var = il2cpp_codegen_method_info_from_index(88);
		GoogleMobileAd_OnInterstitialClosedListner_m483_MethodInfo_var = il2cpp_codegen_method_info_from_index(89);
		GoogleMobileAd_OnInterstitialLeftApplicationListner_m484_MethodInfo_var = il2cpp_codegen_method_info_from_index(90);
		GoogleMobileAd_OnAdInAppRequestListner_m485_MethodInfo_var = il2cpp_codegen_method_info_from_index(91);
		Action_1__ctor_m3174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		List_1__ctor_m3114_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		List_1_GetEnumerator_m3179_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483740);
		Enumerator_get_Current_m3180_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483741);
		Enumerator_MoveNext_m3181_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		List_1_ToArray_m3182_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t75 * V_0 = {0};
	GADTestDevice_t114 * V_1 = {0};
	Enumerator_t624  V_2 = {0};
	int32_t V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = Application_get_platform_m3175(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 0)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 1)
		{
			goto IL_00c3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 2)
		{
			goto IL_00c3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 3)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_00c3;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t113_il2cpp_TypeInfo_var);
		IOSAdMobController_t112 * L_2 = SA_Singleton_1_get_instance_m3176(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3176_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0 = L_2;
		Object_t * L_3 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_4 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = (L_4->___IOS_BannersUnitId_8);
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void GoogleMobileAdInterface::Init(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_3, L_5);
		GoogleMobileAdSettings_t107 * L_6 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (L_6->___IOS_InterstisialsUnitId_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_7, L_8);
		if (L_9)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_10 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_11 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = (L_11->___IOS_InterstisialsUnitId_7);
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_10, L_12);
	}

IL_006e:
	{
		goto IL_0113;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t121_il2cpp_TypeInfo_var);
		AndroidAdMobController_t120 * L_13 = SA_Singleton_1_get_instance_m3177(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3177_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0 = L_13;
		Object_t * L_14 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_15 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = (L_15->___Android_BannersUnitId_10);
		NullCheck(L_14);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void GoogleMobileAdInterface::Init(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_14, L_16);
		GoogleMobileAdSettings_t107 * L_17 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = (L_17->___Android_InterstisialsUnitId_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_18);
		bool L_20 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_18, L_19);
		if (L_20)
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_21 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_22 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = (L_22->___Android_InterstisialsUnitId_9);
		NullCheck(L_21);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_21, L_23);
	}

IL_00be:
	{
		goto IL_0113;
	}

IL_00c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t118_il2cpp_TypeInfo_var);
		WP8AdMobController_t117 * L_24 = SA_Singleton_1_get_instance_m3178(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3178_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0 = L_24;
		Object_t * L_25 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_26 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = (L_26->___WP8_BannersUnitId_12);
		NullCheck(L_25);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void GoogleMobileAdInterface::Init(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_25, L_27);
		GoogleMobileAdSettings_t107 * L_28 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29 = (L_28->___WP8_InterstisialsUnitId_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_29);
		bool L_31 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_29, L_30);
		if (L_31)
		{
			goto IL_010e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_32 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_33 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_34 = (L_33->___WP8_InterstisialsUnitId_11);
		NullCheck(L_32);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_32, L_34);
	}

IL_010e:
	{
		goto IL_0113;
	}

IL_0113:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_35 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_36 = { (void*)GoogleMobileAd_OnInterstitialLoadedListner_m480_MethodInfo_var };
		Action_t103 * L_37 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_37, NULL, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< Action_t103 * >::Invoke(23 /* System.Void GoogleMobileAdInterface::set_OnInterstitialLoaded(System.Action) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_35, L_37);
		Object_t * L_38 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_39 = { (void*)GoogleMobileAd_OnInterstitialFailedLoadingListner_m481_MethodInfo_var };
		Action_t103 * L_40 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_40, NULL, L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< Action_t103 * >::Invoke(25 /* System.Void GoogleMobileAdInterface::set_OnInterstitialFailedLoading(System.Action) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_38, L_40);
		Object_t * L_41 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_42 = { (void*)GoogleMobileAd_OnInterstitialOpenedListner_m482_MethodInfo_var };
		Action_t103 * L_43 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_43, NULL, L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< Action_t103 * >::Invoke(27 /* System.Void GoogleMobileAdInterface::set_OnInterstitialOpened(System.Action) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_41, L_43);
		Object_t * L_44 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_45 = { (void*)GoogleMobileAd_OnInterstitialClosedListner_m483_MethodInfo_var };
		Action_t103 * L_46 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_46, NULL, L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< Action_t103 * >::Invoke(29 /* System.Void GoogleMobileAdInterface::set_OnInterstitialClosed(System.Action) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_44, L_46);
		Object_t * L_47 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_48 = { (void*)GoogleMobileAd_OnInterstitialLeftApplicationListner_m484_MethodInfo_var };
		Action_t103 * L_49 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_49, NULL, L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< Action_t103 * >::Invoke(31 /* System.Void GoogleMobileAdInterface::set_OnInterstitialLeftApplication(System.Action) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_47, L_49);
		Object_t * L_50 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_51 = { (void*)GoogleMobileAd_OnAdInAppRequestListner_m485_MethodInfo_var };
		Action_1_t104 * L_52 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_52, NULL, L_51, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_50);
		InterfaceActionInvoker1< Action_1_t104 * >::Invoke(33 /* System.Void GoogleMobileAdInterface::set_OnAdInAppRequest(System.Action`1<System.String>) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_50, L_52);
		((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_53 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_53);
		List_1_t106 * L_54 = (L_53->___testDevices_19);
		NullCheck(L_54);
		int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GADTestDevice>::get_Count() */, L_54);
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0209;
		}
	}
	{
		List_1_t75 * L_56 = (List_1_t75 *)il2cpp_codegen_object_new (List_1_t75_il2cpp_TypeInfo_var);
		List_1__ctor_m3114(L_56, /*hidden argument*/List_1__ctor_m3114_MethodInfo_var);
		V_0 = L_56;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_57 = GoogleMobileAdSettings_get_Instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_57);
		List_1_t106 * L_58 = (L_57->___testDevices_19);
		NullCheck(L_58);
		Enumerator_t624  L_59 = List_1_GetEnumerator_m3179(L_58, /*hidden argument*/List_1_GetEnumerator_m3179_MethodInfo_var);
		V_2 = L_59;
	}

IL_01c8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01e1;
		}

IL_01cd:
		{
			GADTestDevice_t114 * L_60 = Enumerator_get_Current_m3180((&V_2), /*hidden argument*/Enumerator_get_Current_m3180_MethodInfo_var);
			V_1 = L_60;
			List_1_t75 * L_61 = V_0;
			GADTestDevice_t114 * L_62 = V_1;
			NullCheck(L_62);
			String_t* L_63 = (L_62->___ID_1);
			NullCheck(L_61);
			VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_61, L_63);
		}

IL_01e1:
		{
			bool L_64 = Enumerator_MoveNext_m3181((&V_2), /*hidden argument*/Enumerator_MoveNext_m3181_MethodInfo_var);
			if (L_64)
			{
				goto IL_01cd;
			}
		}

IL_01ed:
		{
			IL2CPP_LEAVE(0x1FE, FINALLY_01f2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01f2;
	}

FINALLY_01f2:
	{ // begin finally (depth: 1)
		Enumerator_t624  L_65 = V_2;
		Enumerator_t624  L_66 = L_65;
		Object_t * L_67 = Box(Enumerator_t624_il2cpp_TypeInfo_var, &L_66);
		NullCheck(L_67);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_67);
		IL2CPP_END_FINALLY(498)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(498)
	{
		IL2CPP_JUMP_TBL(0x1FE, IL_01fe)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01fe:
	{
		List_1_t75 * L_68 = V_0;
		NullCheck(L_68);
		StringU5BU5D_t45* L_69 = List_1_ToArray_m3182(L_68, /*hidden argument*/List_1_ToArray_m3182_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		GoogleMobileAd_AddTestDevices_m471(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
	}

IL_0209:
	{
		return;
	}
}
// System.Void GoogleMobileAd::SetBannersUnitID(System.String,System.String,System.String)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetBannersUnitID_m461 (Object_t * __this /* static, unused */, String_t* ___android_unit_id, String_t* ___ios_unit_id, String_t* ___wp8_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral179, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		int32_t L_1 = Application_get_platform_m3175(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 0)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 1)
		{
			goto IL_0058;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 2)
		{
			goto IL_0058;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 3)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0058;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_3 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_4 = ___ios_unit_id;
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void GoogleMobileAdInterface::SetBannersUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_3, L_4);
		goto IL_0068;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_5 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_6 = ___android_unit_id;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void GoogleMobileAdInterface::SetBannersUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_0068;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_8 = ___wp8_unit_id;
		NullCheck(L_7);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void GoogleMobileAdInterface::SetBannersUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_7, L_8);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// System.Void GoogleMobileAd::SetInterstisialsUnitID(System.String,System.String,System.String)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetInterstisialsUnitID_m462 (Object_t * __this /* static, unused */, String_t* ___android_unit_id, String_t* ___ios_unit_id, String_t* ___wp8_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral180, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		int32_t L_1 = Application_get_platform_m3175(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 0)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 1)
		{
			goto IL_0058;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 2)
		{
			goto IL_0058;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)8)) == 3)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0058;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_3 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_4 = ___ios_unit_id;
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_3, L_4);
		goto IL_0068;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_5 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_6 = ___android_unit_id;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_0068;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_8 = ___wp8_unit_id;
		NullCheck(L_7);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_7, L_8);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// GoogleMobileAdBanner GoogleMobileAd::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleMobileAd_CreateAdBanner_m463 (Object_t * __this /* static, unused */, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___anchor;
		int32_t L_3 = ___size;
		NullCheck(L_1);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker2< Object_t *, int32_t, int32_t >::Invoke(10 /* GoogleMobileAdBanner GoogleMobileAdInterface::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}
}
// GoogleMobileAdBanner GoogleMobileAd::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleMobileAd_CreateAdBanner_m464 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___x;
		int32_t L_3 = ___y;
		int32_t L_4 = ___size;
		NullCheck(L_1);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker3< Object_t *, int32_t, int32_t, int32_t >::Invoke(11 /* GoogleMobileAdBanner GoogleMobileAdInterface::CreateAdBanner(System.Int32,System.Int32,GADBannerSize) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// GoogleMobileAdBanner GoogleMobileAd::GetBanner(System.Int32)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleMobileAd_GetBanner_m465 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral182, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___id;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(17 /* GoogleMobileAdBanner GoogleMobileAdInterface::GetBanner(System.Int32) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void GoogleMobileAd::DestroyBanner(System.Int32)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_DestroyBanner_m466 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral183, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___id;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(12 /* System.Void GoogleMobileAdInterface::DestroyBanner(System.Int32) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::AddKeyword(System.String)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_AddKeyword_m467 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral184, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___keyword;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void GoogleMobileAdInterface::AddKeyword(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetBirthday_m468 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral185, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___year;
		int32_t L_3 = ___month;
		int32_t L_4 = ___day;
		NullCheck(L_1);
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(8 /* System.Void GoogleMobileAdInterface::SetBirthday(System.Int32,AndroidMonth,System.Int32) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void GoogleMobileAd::TagForChildDirectedTreatment(System.Boolean)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_TagForChildDirectedTreatment_m469 (Object_t * __this /* static, unused */, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral186, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		bool L_2 = ___tagForChildDirectedTreatment;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void GoogleMobileAdInterface::TagForChildDirectedTreatment(System.Boolean) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::AddTestDevice(System.String)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_AddTestDevice_m470 (Object_t * __this /* static, unused */, String_t* ___deviceId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___deviceId;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void GoogleMobileAdInterface::AddTestDevice(System.String) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::AddTestDevices(System.String[])
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_AddTestDevices_m471 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		StringU5BU5D_t45* L_2 = ___ids;
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_t45* >::Invoke(6 /* System.Void GoogleMobileAdInterface::AddTestDevices(System.String[]) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::SetGender(GoogleGender)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetGender_m472 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral188, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___gender;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void GoogleMobileAdInterface::SetGender(GoogleGender) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::StartInterstitialAd()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_StartInterstitialAd_m473 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral189, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(13 /* System.Void GoogleMobileAdInterface::StartInterstitialAd() */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::LoadInterstitialAd()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_LoadInterstitialAd_m474 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral190, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAdInterface::LoadInterstitialAd() */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::ShowInterstitialAd()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_ShowInterstitialAd_m475 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral191, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(15 /* System.Void GoogleMobileAdInterface::ShowInterstitialAd() */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::RecordInAppResolution(GADInAppResolution)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_RecordInAppResolution_m476 (Object_t * __this /* static, unused */, int32_t ___resolution, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral192, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___resolution;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void GoogleMobileAdInterface::RecordInAppResolution(GADInAppResolution) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAd::get_IsInited()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" bool GoogleMobileAd_get_IsInited_m477 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		return L_0;
	}
}
// System.String GoogleMobileAd::get_BannersUunitId()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleMobileAd_get_BannersUunitId_m478 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(20 /* System.String GoogleMobileAdInterface::get_BannersUunitId() */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAd::get_InterstisialUnitId()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleMobileAd_get_InterstisialUnitId_m479 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(21 /* System.String GoogleMobileAdInterface::get_InterstisialUnitId() */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void GoogleMobileAd::OnInterstitialLoadedListner()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialLoadedListner_m480 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Action_t103 * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialFailedLoadingListner()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialFailedLoadingListner_m481 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Action_t103 * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialFailedLoading_3;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialOpenedListner()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialOpenedListner_m482 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Action_t103 * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialClosedListner()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialClosedListner_m483 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Action_t103 * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialLeftApplicationListner()
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialLeftApplicationListner_m484 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Action_t103 * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLeftApplication_6;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnAdInAppRequestListner(System.String)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnAdInAppRequestListner_m485 (Object_t * __this /* static, unused */, String_t* ___productId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Action_1_t104 * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___OnAdInAppRequest_7;
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_addEventListener_m486 (Object_t * __this /* static, unused */, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		EventHandlerFunction_t575 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t575 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_addEventListener_m487 (Object_t * __this /* static, unused */, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		DataEventHandlerFunction_t576 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, DataEventHandlerFunction_t576 * >::Invoke(35 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_removeEventListener_m488 (Object_t * __this /* static, unused */, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		EventHandlerFunction_t575 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t575 * >::Invoke(36 /* System.Void GoogleMobileAdInterface::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_removeEventListener_m489 (Object_t * __this /* static, unused */, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t105_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t105_StaticFields*)GoogleMobileAd_t105_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		DataEventHandlerFunction_t576 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, DataEventHandlerFunction_t576 * >::Invoke(37 /* System.Void GoogleMobileAdInterface::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction) */, GoogleMobileAdInterface_t102_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialLoaded>m__0()
extern "C" void GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m490 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialFailedLoading>m__1()
extern "C" void GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m491 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialOpened>m__2()
extern "C" void GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m492 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialClosed>m__3()
extern "C" void GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m493 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialLeftApplication>m__4()
extern "C" void GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m494 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnAdInAppRequest>m__5(System.String)
extern "C" void GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m495 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
struct ScriptableObject_t108;
struct GoogleMobileAdSettings_t107;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
struct ScriptableObject_t108;
struct Object_t;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" Object_t * ScriptableObject_CreateInstance_TisObject_t_m3185_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ScriptableObject_CreateInstance_TisObject_t_m3185(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3185_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<GoogleMobileAdSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<GoogleMobileAdSettings>()
#define ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t107_m3184(__this /* static, unused */, method) (( GoogleMobileAdSettings_t107 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3185_gshared)(__this /* static, unused */, method)


// System.Void GoogleMobileAdSettings::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t106_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3186_MethodInfo_var;
extern "C" void GoogleMobileAdSettings__ctor_m496 (GoogleMobileAdSettings_t107 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		List_1__ctor_m3186_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483744);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___IOS_InterstisialsUnitId_7 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___IOS_BannersUnitId_8 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___Android_InterstisialsUnitId_9 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___Android_BannersUnitId_10 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___WP8_InterstisialsUnitId_11 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___WP8_BannersUnitId_12 = L_5;
		__this->___IsIOSSettinsOpened_13 = 1;
		__this->___IsAndroidSettinsOpened_14 = 1;
		__this->___IsWP8SettinsOpened_15 = 1;
		__this->___IsTestSettinsOpened_16 = 1;
		__this->___KeepManifestClean_18 = 1;
		List_1_t106 * L_6 = (List_1_t106 *)il2cpp_codegen_object_new (List_1_t106_il2cpp_TypeInfo_var);
		List_1__ctor_m3186(L_6, /*hidden argument*/List_1__ctor_m3186_MethodInfo_var);
		__this->___testDevices_19 = L_6;
		ScriptableObject__ctor_m3187(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAdSettings::.cctor()
extern "C" void GoogleMobileAdSettings__cctor_m497 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// GoogleMobileAdSettings GoogleMobileAdSettings::get_Instance()
extern TypeInfo* GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t107_m3184_MethodInfo_var;
extern "C" GoogleMobileAdSettings_t107 * GoogleMobileAdSettings_get_Instance_m498 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t107_m3184_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483745);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_0 = ((GoogleMobileAdSettings_t107_StaticFields*)GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var->static_fields)->___instance_20;
		bool L_1 = Object_op_Equality_m3188(NULL /*static, unused*/, L_0, (Object_t600 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t600 * L_2 = Resources_Load_m3189(NULL /*static, unused*/, (String_t*) &_stringLiteral193, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		((GoogleMobileAdSettings_t107_StaticFields*)GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var->static_fields)->___instance_20 = ((GoogleMobileAdSettings_t107 *)IsInst(L_2, GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var));
		GoogleMobileAdSettings_t107 * L_3 = ((GoogleMobileAdSettings_t107_StaticFields*)GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var->static_fields)->___instance_20;
		bool L_4 = Object_op_Equality_m3188(NULL /*static, unused*/, L_3, (Object_t600 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GoogleMobileAdSettings_t107 * L_5 = ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t107_m3184(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t107_m3184_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		((GoogleMobileAdSettings_t107_StaticFields*)GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var->static_fields)->___instance_20 = L_5;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t107 * L_6 = ((GoogleMobileAdSettings_t107_StaticFields*)GoogleMobileAdSettings_t107_il2cpp_TypeInfo_var->static_fields)->___instance_20;
		return L_6;
	}
}
// System.Void GoogleMobileAdSettings::AddDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_AddDevice_m499 (GoogleMobileAdSettings_t107 * __this, GADTestDevice_t114 * ___p, const MethodInfo* method)
{
	{
		List_1_t106 * L_0 = (__this->___testDevices_19);
		GADTestDevice_t114 * L_1 = ___p;
		NullCheck(L_0);
		VirtActionInvoker1< GADTestDevice_t114 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GADTestDevice>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAdSettings::RemoveDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_RemoveDevice_m500 (GoogleMobileAdSettings_t107 * __this, GADTestDevice_t114 * ___p, const MethodInfo* method)
{
	{
		List_1_t106 * L_0 = (__this->___testDevices_19);
		GADTestDevice_t114 * L_1 = ___p;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, GADTestDevice_t114 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<GADTestDevice>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// IOSADBanner
#include "AssemblyU2DCSharp_IOSADBanner.h"
#ifndef _MSC_VER
#else
#endif
// IOSADBanner
#include "AssemblyU2DCSharp_IOSADBannerMethodDeclarations.h"

// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// IOSAdMobController
#include "AssemblyU2DCSharp_IOSAdMobControllerMethodDeclarations.h"


// System.Void IOSADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLoadedActionU3Em__6_m542_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m543_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnOpenedActionU3Em__8_m544_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnClosedActionU3Em__9_m545_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m546_MethodInfo_var;
extern "C" void IOSADBanner__ctor_m501 (IOSADBanner_t110 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IOSADBanner_U3C_OnLoadedActionU3Em__6_m542_MethodInfo_var = il2cpp_codegen_method_info_from_index(98);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m543_MethodInfo_var = il2cpp_codegen_method_info_from_index(99);
		IOSADBanner_U3C_OnOpenedActionU3Em__8_m544_MethodInfo_var = il2cpp_codegen_method_info_from_index(100);
		IOSADBanner_U3C_OnClosedActionU3Em__9_m545_MethodInfo_var = il2cpp_codegen_method_info_from_index(101);
		IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m546_MethodInfo_var = il2cpp_codegen_method_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t110 * G_B2_0 = {0};
	IOSADBanner_t110 * G_B1_0 = {0};
	IOSADBanner_t110 * G_B4_0 = {0};
	IOSADBanner_t110 * G_B3_0 = {0};
	IOSADBanner_t110 * G_B6_0 = {0};
	IOSADBanner_t110 * G_B5_0 = {0};
	IOSADBanner_t110 * G_B8_0 = {0};
	IOSADBanner_t110 * G_B7_0 = {0};
	IOSADBanner_t110 * G_B10_0 = {0};
	IOSADBanner_t110 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t109 * L_0 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IOSADBanner_U3C_OnLoadedActionU3Em__6_m542_MethodInfo_var };
		Action_1_t109 * L_2 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t109 * L_3 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t109 * L_4 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m543_MethodInfo_var };
		Action_1_t109 * L_6 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t109 * L_7 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t109 * L_8 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)IOSADBanner_U3C_OnOpenedActionU3Em__8_m544_MethodInfo_var };
		Action_1_t109 * L_10 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t109 * L_11 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t109 * L_12 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)IOSADBanner_U3C_OnClosedActionU3Em__9_m545_MethodInfo_var };
		Action_1_t109 * L_14 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t109 * L_15 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t109 * L_16 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m546_MethodInfo_var };
		Action_1_t109 * L_18 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t109 * L_19 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m381(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___anchor;
		__this->____anchor_4 = L_22;
		int32_t L_23 = IOSADBanner_get_gravity_m526(__this, /*hidden argument*/NULL);
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		IOSADBanner__GADCreateBannerAd_m503(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLoadedActionU3Em__6_m542_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m543_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnOpenedActionU3Em__8_m544_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnClosedActionU3Em__9_m545_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m546_MethodInfo_var;
extern "C" void IOSADBanner__ctor_m502 (IOSADBanner_t110 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IOSADBanner_U3C_OnLoadedActionU3Em__6_m542_MethodInfo_var = il2cpp_codegen_method_info_from_index(98);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m543_MethodInfo_var = il2cpp_codegen_method_info_from_index(99);
		IOSADBanner_U3C_OnOpenedActionU3Em__8_m544_MethodInfo_var = il2cpp_codegen_method_info_from_index(100);
		IOSADBanner_U3C_OnClosedActionU3Em__9_m545_MethodInfo_var = il2cpp_codegen_method_info_from_index(101);
		IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m546_MethodInfo_var = il2cpp_codegen_method_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t110 * G_B2_0 = {0};
	IOSADBanner_t110 * G_B1_0 = {0};
	IOSADBanner_t110 * G_B4_0 = {0};
	IOSADBanner_t110 * G_B3_0 = {0};
	IOSADBanner_t110 * G_B6_0 = {0};
	IOSADBanner_t110 * G_B5_0 = {0};
	IOSADBanner_t110 * G_B8_0 = {0};
	IOSADBanner_t110 * G_B7_0 = {0};
	IOSADBanner_t110 * G_B10_0 = {0};
	IOSADBanner_t110 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t109 * L_0 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IOSADBanner_U3C_OnLoadedActionU3Em__6_m542_MethodInfo_var };
		Action_1_t109 * L_2 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t109 * L_3 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t109 * L_4 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m543_MethodInfo_var };
		Action_1_t109 * L_6 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t109 * L_7 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t109 * L_8 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)IOSADBanner_U3C_OnOpenedActionU3Em__8_m544_MethodInfo_var };
		Action_1_t109 * L_10 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t109 * L_11 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t109 * L_12 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)IOSADBanner_U3C_OnClosedActionU3Em__9_m545_MethodInfo_var };
		Action_1_t109 * L_14 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t109 * L_15 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t109 * L_16 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m546_MethodInfo_var };
		Action_1_t109 * L_18 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t109 * L_19 = ((IOSADBanner_t110_StaticFields*)IOSADBanner_t110_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m381(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___x;
		int32_t L_23 = ___y;
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		IOSADBanner__GADCreateBannerAdPos_m504(NULL /*static, unused*/, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::_GADCreateBannerAd(System.Int32,System.Int32,System.Int32)
extern "C" {void DEFAULT_CALL _GADCreateBannerAd(int32_t, int32_t, int32_t);}
extern "C" void IOSADBanner__GADCreateBannerAd_m503 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADCreateBannerAd;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADCreateBannerAd'"));
		}
	}

	// Marshaling of parameter '___gravity' to native representation

	// Marshaling of parameter '___size' to native representation

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___gravity, ___size, ___id);

	// Marshaling cleanup of parameter '___gravity' native representation

	// Marshaling cleanup of parameter '___size' native representation

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void IOSADBanner::_GADCreateBannerAdPos(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" {void DEFAULT_CALL _GADCreateBannerAdPos(int32_t, int32_t, int32_t, int32_t);}
extern "C" void IOSADBanner__GADCreateBannerAdPos_m504 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADCreateBannerAdPos;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADCreateBannerAdPos'"));
		}
	}

	// Marshaling of parameter '___x' to native representation

	// Marshaling of parameter '___y' to native representation

	// Marshaling of parameter '___size' to native representation

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___x, ___y, ___size, ___id);

	// Marshaling cleanup of parameter '___x' native representation

	// Marshaling cleanup of parameter '___y' native representation

	// Marshaling cleanup of parameter '___size' native representation

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void IOSADBanner::_GADShowAd(System.Int32)
extern "C" {void DEFAULT_CALL _GADShowAd(int32_t);}
extern "C" void IOSADBanner__GADShowAd_m505 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADShowAd;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADShowAd'"));
		}
	}

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void IOSADBanner::_GADHideAd(System.Int32)
extern "C" {void DEFAULT_CALL _GADHideAd(int32_t);}
extern "C" void IOSADBanner__GADHideAd_m506 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADHideAd;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADHideAd'"));
		}
	}

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void IOSADBanner::_GADRefresh(System.Int32)
extern "C" {void DEFAULT_CALL _GADRefresh(int32_t);}
extern "C" void IOSADBanner__GADRefresh_m507 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADRefresh;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADRefresh'"));
		}
	}

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void IOSADBanner::_GADSetPosition(System.Int32,System.Int32)
extern "C" {void DEFAULT_CALL _GADSetPosition(int32_t, int32_t);}
extern "C" void IOSADBanner__GADSetPosition_m508 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___bannerId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADSetPosition;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADSetPosition'"));
		}
	}

	// Marshaling of parameter '___gravity' to native representation

	// Marshaling of parameter '___bannerId' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___gravity, ___bannerId);

	// Marshaling cleanup of parameter '___gravity' native representation

	// Marshaling cleanup of parameter '___bannerId' native representation

}
// System.Void IOSADBanner::_GADSetPositionXY(System.Int32,System.Int32,System.Int32)
extern "C" {void DEFAULT_CALL _GADSetPositionXY(int32_t, int32_t, int32_t);}
extern "C" void IOSADBanner__GADSetPositionXY_m509 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___bannerId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADSetPositionXY;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADSetPositionXY'"));
		}
	}

	// Marshaling of parameter '___x' to native representation

	// Marshaling of parameter '___y' to native representation

	// Marshaling of parameter '___bannerId' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___x, ___y, ___bannerId);

	// Marshaling cleanup of parameter '___x' native representation

	// Marshaling cleanup of parameter '___y' native representation

	// Marshaling cleanup of parameter '___bannerId' native representation

}
// System.Void IOSADBanner::Hide()
extern "C" void IOSADBanner_Hide_m510 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
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
		__this->____IsOnScreen_6 = 0;
		int32_t L_1 = (__this->____id_2);
		IOSADBanner__GADHideAd_m506(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::Show()
extern "C" void IOSADBanner_Show_m511 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
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
		__this->____IsOnScreen_6 = 1;
		int32_t L_1 = (__this->____id_2);
		IOSADBanner__GADShowAd_m505(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::Refresh()
extern "C" void IOSADBanner_Refresh_m512 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
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
		int32_t L_1 = (__this->____id_2);
		IOSADBanner__GADRefresh_m507(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void IOSADBanner_SetBannerPosition_m513 (IOSADBanner_t110 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
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
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		int32_t L_3 = (__this->____id_2);
		IOSADBanner__GADSetPositionXY_m509(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void IOSADBanner_SetBannerPosition_m514 (IOSADBanner_t110 * __this, int32_t ___anchor, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
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
		int32_t L_1 = ___anchor;
		__this->____anchor_4 = L_1;
		int32_t L_2 = IOSADBanner_get_gravity_m526(__this, /*hidden argument*/NULL);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, __this);
		IOSADBanner__GADSetPosition_m508(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::DestroyAfterLoad()
extern "C" void IOSADBanner_DestroyAfterLoad_m515 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		__this->___destroyOnLoad_9 = 1;
		VirtActionInvoker1< bool >::Invoke(33 /* System.Void IOSADBanner::set_ShowOnLoad(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Void IOSADBanner::SetDimentions(System.Int32,System.Int32)
extern TypeInfo* Mathf_t625_il2cpp_TypeInfo_var;
extern "C" void IOSADBanner_SetDimentions_m516 (IOSADBanner_t110 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___w;
		float L_1 = Screen_get_dpi_m3190(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t625_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_FloorToInt_m3191(NULL /*static, unused*/, ((float)((float)(((float)L_0))*(float)((float)((float)L_1/(float)(160.0f))))), /*hidden argument*/NULL);
		__this->____width_10 = L_2;
		int32_t L_3 = ___h;
		float L_4 = Screen_get_dpi_m3190(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Mathf_FloorToInt_m3191(NULL /*static, unused*/, ((float)((float)(((float)L_3))*(float)((float)((float)L_4/(float)(160.0f))))), /*hidden argument*/NULL);
		__this->____height_11 = L_5;
		return;
	}
}
// System.Int32 IOSADBanner::get_id()
extern "C" int32_t IOSADBanner_get_id_m517 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_2);
		return L_0;
	}
}
// System.Int32 IOSADBanner::get_width()
extern "C" int32_t IOSADBanner_get_width_m518 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____width_10);
		return L_0;
	}
}
// System.Int32 IOSADBanner::get_height()
extern "C" int32_t IOSADBanner_get_height_m519 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____height_11);
		return L_0;
	}
}
// GADBannerSize IOSADBanner::get_size()
extern "C" int32_t IOSADBanner_get_size_m520 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_3);
		return L_0;
	}
}
// System.Boolean IOSADBanner::get_IsLoaded()
extern "C" bool IOSADBanner_get_IsLoaded_m521 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
		return L_0;
	}
}
// System.Boolean IOSADBanner::get_IsOnScreen()
extern "C" bool IOSADBanner_get_IsOnScreen_m522 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
		return L_0;
	}
}
// System.Boolean IOSADBanner::get_ShowOnLoad()
extern "C" bool IOSADBanner_get_ShowOnLoad_m523 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____ShowOnLoad_8);
		return L_0;
	}
}
// System.Void IOSADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void IOSADBanner_set_ShowOnLoad_m524 (IOSADBanner_t110 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____ShowOnLoad_8 = L_0;
		return;
	}
}
// UnityEngine.TextAnchor IOSADBanner::get_anchor()
extern "C" int32_t IOSADBanner_get_anchor_m525 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____anchor_4);
		return L_0;
	}
}
// System.Int32 IOSADBanner::get_gravity()
extern "C" int32_t IOSADBanner_get_gravity_m526 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->____anchor_4);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004b;
		}
		if (L_1 == 1)
		{
			goto IL_0048;
		}
		if (L_1 == 2)
		{
			goto IL_004e;
		}
		if (L_1 == 3)
		{
			goto IL_0042;
		}
		if (L_1 == 4)
		{
			goto IL_003f;
		}
		if (L_1 == 5)
		{
			goto IL_0045;
		}
		if (L_1 == 6)
		{
			goto IL_0039;
		}
		if (L_1 == 7)
		{
			goto IL_0036;
		}
		if (L_1 == 8)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0051;
	}

IL_0036:
	{
		return ((int32_t)81);
	}

IL_0039:
	{
		return ((int32_t)83);
	}

IL_003c:
	{
		return ((int32_t)85);
	}

IL_003f:
	{
		return ((int32_t)17);
	}

IL_0042:
	{
		return ((int32_t)19);
	}

IL_0045:
	{
		return ((int32_t)21);
	}

IL_0048:
	{
		return ((int32_t)49);
	}

IL_004b:
	{
		return ((int32_t)51);
	}

IL_004e:
	{
		return ((int32_t)53);
	}

IL_0051:
	{
		return ((int32_t)48);
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnLoadedAction()
extern "C" Action_1_t109 * IOSADBanner_get_OnLoadedAction_m527 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLoadedAction_12);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnLoadedAction_m528 (IOSADBanner_t110 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnLoadedAction_12 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t109 * IOSADBanner_get_OnFailedLoadingAction_m529 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnFailedLoadingAction_13);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnFailedLoadingAction_m530 (IOSADBanner_t110 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnFailedLoadingAction_13 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnOpenedAction()
extern "C" Action_1_t109 * IOSADBanner_get_OnOpenedAction_m531 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnOpenedAction_14);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnOpenedAction_m532 (IOSADBanner_t110 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnOpenedAction_14 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnClosedAction()
extern "C" Action_1_t109 * IOSADBanner_get_OnClosedAction_m533 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnClosedAction_15);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnClosedAction_m534 (IOSADBanner_t110 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnClosedAction_15 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t109 * IOSADBanner_get_OnLeftApplicationAction_m535 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLeftApplicationAction_16);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnLeftApplicationAction_m536 (IOSADBanner_t110 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnLeftApplicationAction_16 = L_0;
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdLoaded()
extern TypeInfo* SA_Singleton_1_t113_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3176_MethodInfo_var;
extern "C" void IOSADBanner_OnBannerAdLoaded_m537 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		SA_Singleton_1_get_instance_m3176_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___destroyOnLoad_9);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t113_il2cpp_TypeInfo_var);
		IOSAdMobController_t112 * L_1 = SA_Singleton_1_get_instance_m3176(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3176_MethodInfo_var);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, __this);
		NullCheck(L_1);
		IOSAdMobController_DirectBannerDestory_m570(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		__this->____IsLoaded_5 = 1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean IOSADBanner::get_ShowOnLoad() */, __this);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		bool L_4 = (__this->___firstLoad_7);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		VirtActionInvoker0::Invoke(23 /* System.Void IOSADBanner::Show() */, __this);
		__this->___firstLoad_7 = 0;
	}

IL_0046:
	{
		Action_1_t109 * L_5 = (__this->____OnLoadedAction_12);
		NullCheck(L_5);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_5, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral194);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdFailedToLoad()
extern "C" void IOSADBanner_OnBannerAdFailedToLoad_m538 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnFailedLoadingAction_13);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral195);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdOpened()
extern "C" void IOSADBanner_OnBannerAdOpened_m539 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnOpenedAction_14);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral196);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdClosed()
extern "C" void IOSADBanner_OnBannerAdClosed_m540 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnClosedAction_15);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral197);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdLeftApplication()
extern "C" void IOSADBanner_OnBannerAdLeftApplication_m541 (IOSADBanner_t110 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLeftApplicationAction_16);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral198);
		return;
	}
}
// System.Void IOSADBanner::<_OnLoadedAction>m__6(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnLoadedActionU3Em__6_m542 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnFailedLoadingAction>m__7(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m543 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnOpenedAction>m__8(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnOpenedActionU3Em__8_m544 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnClosedAction>m__9(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnClosedActionU3Em__9_m545 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnLeftApplicationAction>m__A(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m546 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
// System.Collections.Generic.List`1<GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// GADBannerIdFactory
#include "AssemblyU2DCSharp_GADBannerIdFactoryMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void IOSAdMobController::.ctor()
extern TypeInfo* IOSAdMobController_t112_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t104_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t113_il2cpp_TypeInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m609_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m610_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m611_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m612_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m613_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m614_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3174_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3192_MethodInfo_var;
extern "C" void IOSAdMobController__ctor_m547 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOSAdMobController_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		Action_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Action_1_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		SA_Singleton_1_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
		IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m609_MethodInfo_var = il2cpp_codegen_method_info_from_index(103);
		IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m610_MethodInfo_var = il2cpp_codegen_method_info_from_index(104);
		IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m611_MethodInfo_var = il2cpp_codegen_method_info_from_index(105);
		IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m612_MethodInfo_var = il2cpp_codegen_method_info_from_index(106);
		IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m613_MethodInfo_var = il2cpp_codegen_method_info_from_index(107);
		IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m614_MethodInfo_var = il2cpp_codegen_method_info_from_index(108);
		Action_1__ctor_m3174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		SA_Singleton_1__ctor_m3192_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483757);
		s_Il2CppMethodIntialized = true;
	}
	IOSAdMobController_t112 * G_B2_0 = {0};
	IOSAdMobController_t112 * G_B1_0 = {0};
	IOSAdMobController_t112 * G_B4_0 = {0};
	IOSAdMobController_t112 * G_B3_0 = {0};
	IOSAdMobController_t112 * G_B6_0 = {0};
	IOSAdMobController_t112 * G_B5_0 = {0};
	IOSAdMobController_t112 * G_B8_0 = {0};
	IOSAdMobController_t112 * G_B7_0 = {0};
	IOSAdMobController_t112 * G_B10_0 = {0};
	IOSAdMobController_t112 * G_B9_0 = {0};
	IOSAdMobController_t112 * G_B12_0 = {0};
	IOSAdMobController_t112 * G_B11_0 = {0};
	{
		Action_t103 * L_0 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m609_MethodInfo_var };
		Action_t103 * L_2 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_2, NULL, L_1, /*hidden argument*/NULL);
		((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_t103 * L_3 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnInterstitialLoaded_11 = L_3;
		Action_t103 * L_4 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		IntPtr_t L_5 = { (void*)IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m610_MethodInfo_var };
		Action_t103 * L_6 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_6, NULL, L_5, /*hidden argument*/NULL);
		((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_t103 * L_7 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnInterstitialFailedLoading_12 = L_7;
		Action_t103 * L_8 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_9 = { (void*)IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m611_MethodInfo_var };
		Action_t103 * L_10 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_10, NULL, L_9, /*hidden argument*/NULL);
		((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_005f:
	{
		Action_t103 * L_11 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnInterstitialOpened_13 = L_11;
		Action_t103 * L_12 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0082;
		}
	}
	{
		IntPtr_t L_13 = { (void*)IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m612_MethodInfo_var };
		Action_t103 * L_14 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_14, NULL, L_13, /*hidden argument*/NULL);
		((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0082:
	{
		Action_t103 * L_15 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnInterstitialClosed_14 = L_15;
		Action_t103 * L_16 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_17 = { (void*)IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m613_MethodInfo_var };
		Action_t103 * L_18 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_18, NULL, L_17, /*hidden argument*/NULL);
		((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00a5:
	{
		Action_t103 * L_19 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnInterstitialLeftApplication_15 = L_19;
		Action_1_t104 * L_20 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		G_B11_0 = __this;
		if (L_20)
		{
			G_B12_0 = __this;
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m614_MethodInfo_var };
		Action_1_t104 * L_22 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22 = L_22;
		G_B12_0 = G_B11_0;
	}

IL_00c8:
	{
		Action_1_t104 * L_23 = ((IOSAdMobController_t112_StaticFields*)IOSAdMobController_t112_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		NullCheck(G_B12_0);
		G_B12_0->____OnAdInAppRequest_16 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t113_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3192(__this, /*hidden argument*/SA_Singleton_1__ctor_m3192_MethodInfo_var);
		return;
	}
}
// System.Void IOSAdMobController::_initGoogleAd(System.String)
extern "C" {void DEFAULT_CALL _initGoogleAd(char*);}
extern "C" void IOSAdMobController__initGoogleAd_m548 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_initGoogleAd;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_initGoogleAd'"));
		}
	}

	// Marshaling of parameter '___unit_id' to native representation
	char* ____unit_id_marshaled = { 0 };
	____unit_id_marshaled = il2cpp_codegen_marshal_string(___unit_id);

	// Native function invocation
	_il2cpp_pinvoke_func(____unit_id_marshaled);

	// Marshaling cleanup of parameter '___unit_id' native representation
	il2cpp_codegen_marshal_free(____unit_id_marshaled);
	____unit_id_marshaled = NULL;

}
// System.Void IOSAdMobController::_GADChangeBannersUnitID(System.String)
extern "C" {void DEFAULT_CALL _GADChangeBannersUnitID(char*);}
extern "C" void IOSAdMobController__GADChangeBannersUnitID_m549 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADChangeBannersUnitID;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADChangeBannersUnitID'"));
		}
	}

	// Marshaling of parameter '___unit_id' to native representation
	char* ____unit_id_marshaled = { 0 };
	____unit_id_marshaled = il2cpp_codegen_marshal_string(___unit_id);

	// Native function invocation
	_il2cpp_pinvoke_func(____unit_id_marshaled);

	// Marshaling cleanup of parameter '___unit_id' native representation
	il2cpp_codegen_marshal_free(____unit_id_marshaled);
	____unit_id_marshaled = NULL;

}
// System.Void IOSAdMobController::_GADChangeInterstisialsUnitID(System.String)
extern "C" {void DEFAULT_CALL _GADChangeInterstisialsUnitID(char*);}
extern "C" void IOSAdMobController__GADChangeInterstisialsUnitID_m550 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADChangeInterstisialsUnitID;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADChangeInterstisialsUnitID'"));
		}
	}

	// Marshaling of parameter '___unit_id' to native representation
	char* ____unit_id_marshaled = { 0 };
	____unit_id_marshaled = il2cpp_codegen_marshal_string(___unit_id);

	// Native function invocation
	_il2cpp_pinvoke_func(____unit_id_marshaled);

	// Marshaling cleanup of parameter '___unit_id' native representation
	il2cpp_codegen_marshal_free(____unit_id_marshaled);
	____unit_id_marshaled = NULL;

}
// System.Void IOSAdMobController::_GADAddKeyWord(System.String)
extern "C" {void DEFAULT_CALL _GADAddKeyWord(char*);}
extern "C" void IOSAdMobController__GADAddKeyWord_m551 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADAddKeyWord;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADAddKeyWord'"));
		}
	}

	// Marshaling of parameter '___keyword' to native representation
	char* ____keyword_marshaled = { 0 };
	____keyword_marshaled = il2cpp_codegen_marshal_string(___keyword);

	// Native function invocation
	_il2cpp_pinvoke_func(____keyword_marshaled);

	// Marshaling cleanup of parameter '___keyword' native representation
	il2cpp_codegen_marshal_free(____keyword_marshaled);
	____keyword_marshaled = NULL;

}
// System.Void IOSAdMobController::_GADAddTestDevice(System.String)
extern "C" {void DEFAULT_CALL _GADAddTestDevice(char*);}
extern "C" void IOSAdMobController__GADAddTestDevice_m552 (Object_t * __this /* static, unused */, String_t* ___uid, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADAddTestDevice;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADAddTestDevice'"));
		}
	}

	// Marshaling of parameter '___uid' to native representation
	char* ____uid_marshaled = { 0 };
	____uid_marshaled = il2cpp_codegen_marshal_string(___uid);

	// Native function invocation
	_il2cpp_pinvoke_func(____uid_marshaled);

	// Marshaling cleanup of parameter '___uid' native representation
	il2cpp_codegen_marshal_free(____uid_marshaled);
	____uid_marshaled = NULL;

}
// System.Void IOSAdMobController::_GADAddTestDevices(System.String)
extern "C" {void DEFAULT_CALL _GADAddTestDevices(char*);}
extern "C" void IOSAdMobController__GADAddTestDevices_m553 (Object_t * __this /* static, unused */, String_t* ___uids, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADAddTestDevices;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADAddTestDevices'"));
		}
	}

	// Marshaling of parameter '___uids' to native representation
	char* ____uids_marshaled = { 0 };
	____uids_marshaled = il2cpp_codegen_marshal_string(___uids);

	// Native function invocation
	_il2cpp_pinvoke_func(____uids_marshaled);

	// Marshaling cleanup of parameter '___uids' native representation
	il2cpp_codegen_marshal_free(____uids_marshaled);
	____uids_marshaled = NULL;

}
// System.Void IOSAdMobController::_GADSetGender(System.Int32)
extern "C" {void DEFAULT_CALL _GADSetGender(int32_t);}
extern "C" void IOSAdMobController__GADSetGender_m554 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADSetGender;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADSetGender'"));
		}
	}

	// Marshaling of parameter '___gender' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___gender);

	// Marshaling cleanup of parameter '___gender' native representation

}
// System.Void IOSAdMobController::_GADSetBirthday(System.Int32,System.Int32,System.Int32)
extern "C" {void DEFAULT_CALL _GADSetBirthday(int32_t, int32_t, int32_t);}
extern "C" void IOSAdMobController__GADSetBirthday_m555 (Object_t * __this /* static, unused */, int32_t ___day, int32_t ___month, int32_t ___year, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADSetBirthday;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADSetBirthday'"));
		}
	}

	// Marshaling of parameter '___day' to native representation

	// Marshaling of parameter '___month' to native representation

	// Marshaling of parameter '___year' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___day, ___month, ___year);

	// Marshaling cleanup of parameter '___day' native representation

	// Marshaling cleanup of parameter '___month' native representation

	// Marshaling cleanup of parameter '___year' native representation

}
// System.Void IOSAdMobController::_GADTagForChildDirectedTreatment(System.Boolean)
extern "C" {void DEFAULT_CALL _GADTagForChildDirectedTreatment(int32_t);}
extern "C" void IOSAdMobController__GADTagForChildDirectedTreatment_m556 (Object_t * __this /* static, unused */, bool ___val, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADTagForChildDirectedTreatment;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADTagForChildDirectedTreatment'"));
		}
	}

	// Marshaling of parameter '___val' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___val);

	// Marshaling cleanup of parameter '___val' native representation

}
// System.Void IOSAdMobController::_GADDestroyBanner(System.Int32)
extern "C" {void DEFAULT_CALL _GADDestroyBanner(int32_t);}
extern "C" void IOSAdMobController__GADDestroyBanner_m557 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADDestroyBanner;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADDestroyBanner'"));
		}
	}

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void IOSAdMobController::_GADStartInterstitialAd()
extern "C" {void DEFAULT_CALL _GADStartInterstitialAd();}
extern "C" void IOSAdMobController__GADStartInterstitialAd_m558 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADStartInterstitialAd;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADStartInterstitialAd'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void IOSAdMobController::_GADLoadInterstitialAd()
extern "C" {void DEFAULT_CALL _GADLoadInterstitialAd();}
extern "C" void IOSAdMobController__GADLoadInterstitialAd_m559 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADLoadInterstitialAd;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADLoadInterstitialAd'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void IOSAdMobController::_GADShowInterstitialAd()
extern "C" {void DEFAULT_CALL _GADShowInterstitialAd();}
extern "C" void IOSAdMobController__GADShowInterstitialAd_m560 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADShowInterstitialAd;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADShowInterstitialAd'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void IOSAdMobController::_GADReportPurchaseStatus(System.Int32)
extern "C" {void DEFAULT_CALL _GADReportPurchaseStatus(int32_t);}
extern "C" void IOSAdMobController__GADReportPurchaseStatus_m561 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GADReportPurchaseStatus;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GADReportPurchaseStatus'"));
		}
	}

	// Marshaling of parameter '___status' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___status);

	// Marshaling cleanup of parameter '___status' native representation

}
// System.Void IOSAdMobController::Awake()
extern "C" void IOSAdMobController_Awake_m562 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		GameObject_t312 * L_0 = Component_get_gameObject_m3162(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3193(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::Init(System.String)
extern TypeInfo* Dictionary_2_t111_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3194_MethodInfo_var;
extern "C" void IOSAdMobController_Init_m563 (IOSAdMobController_t112 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		Dictionary_2__ctor_m3194_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483758);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral199, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		__this->____IsInited_7 = 1;
		String_t* L_1 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_1;
		String_t* L_2 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_2;
		Dictionary_2_t111 * L_3 = (Dictionary_2_t111 *)il2cpp_codegen_object_new (Dictionary_2_t111_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3194(L_3, /*hidden argument*/Dictionary_2__ctor_m3194_MethodInfo_var);
		__this->____banners_8 = L_3;
		String_t* L_4 = ___ad_unit_id;
		IOSAdMobController__initGoogleAd_m548(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::Init(System.String,System.String)
extern "C" void IOSAdMobController_Init_m564 (IOSAdMobController_t112 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral199, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___banners_unit_id;
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void IOSAdMobController::Init(System.String) */, __this, L_1);
		String_t* L_2 = ___interstisial_unit_id;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void IOSAdMobController::SetInterstisialsUnitID(System.String) */, __this, L_2);
		return;
	}
}
// System.Void IOSAdMobController::SetBannersUnitID(System.String)
extern "C" void IOSAdMobController_SetBannersUnitID_m565 (IOSAdMobController_t112 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_0;
		String_t* L_1 = ___ad_unit_id;
		IOSAdMobController__GADChangeBannersUnitID_m549(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::SetInterstisialsUnitID(System.String)
extern "C" void IOSAdMobController_SetInterstisialsUnitID_m566 (IOSAdMobController_t112 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_0;
		String_t* L_1 = ___ad_unit_id;
		IOSAdMobController__GADChangeInterstisialsUnitID_m550(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner IOSAdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t179_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern "C" Object_t * IOSAdMobController_CreateAdBanner_m567 (IOSAdMobController_t112 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t110 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___anchor;
		int32_t L_2 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t179_il2cpp_TypeInfo_var);
		int32_t L_3 = GADBannerIdFactory_get_nextId_m1029(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOSADBanner_t110 * L_4 = (IOSADBanner_t110 *)il2cpp_codegen_object_new (IOSADBanner_t110_il2cpp_TypeInfo_var);
		IOSADBanner__ctor_m501(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Dictionary_2_t111 * L_5 = (__this->____banners_8);
		IOSADBanner_t110 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, L_6);
		IOSADBanner_t110 * L_8 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, IOSADBanner_t110 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(!0,!1) */, L_5, L_7, L_8);
		IOSADBanner_t110 * L_9 = V_0;
		return L_9;
	}
}
// GoogleMobileAdBanner IOSAdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t179_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern "C" Object_t * IOSAdMobController_CreateAdBanner_m568 (IOSAdMobController_t112 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t110 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t179_il2cpp_TypeInfo_var);
		int32_t L_4 = GADBannerIdFactory_get_nextId_m1029(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOSADBanner_t110 * L_5 = (IOSADBanner_t110 *)il2cpp_codegen_object_new (IOSADBanner_t110_il2cpp_TypeInfo_var);
		IOSADBanner__ctor_m502(L_5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Dictionary_2_t111 * L_6 = (__this->____banners_8);
		IOSADBanner_t110 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, L_7);
		IOSADBanner_t110 * L_9 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, IOSADBanner_t110 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(!0,!1) */, L_6, L_8, L_9);
		IOSADBanner_t110 * L_10 = V_0;
		return L_10;
	}
}
// System.Void IOSAdMobController::DestroyBanner(System.Int32)
extern "C" void IOSAdMobController_DestroyBanner_m569 (IOSAdMobController_t112 * __this, int32_t ___id, const MethodInfo* method)
{
	IOSADBanner_t110 * V_0 = {0};
	{
		Dictionary_2_t111 * L_0 = (__this->____banners_8);
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t111 * L_1 = (__this->____banners_8);
		int32_t L_2 = ___id;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(!0) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t111 * L_4 = (__this->____banners_8);
		int32_t L_5 = ___id;
		NullCheck(L_4);
		IOSADBanner_t110 * L_6 = (IOSADBanner_t110 *)VirtFuncInvoker1< IOSADBanner_t110 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(!0) */, L_4, L_5);
		V_0 = L_6;
		IOSADBanner_t110 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean IOSADBanner::get_IsLoaded() */, L_7);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t111 * L_9 = (__this->____banners_8);
		int32_t L_10 = ___id;
		NullCheck(L_9);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Remove(!0) */, L_9, L_10);
		int32_t L_11 = ___id;
		IOSAdMobController__GADDestroyBanner_m557(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_004c:
	{
		IOSADBanner_t110 * L_12 = V_0;
		NullCheck(L_12);
		IOSADBanner_DestroyAfterLoad_m515(L_12, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void IOSAdMobController::DirectBannerDestory(System.Int32)
extern "C" void IOSAdMobController_DirectBannerDestory_m570 (IOSAdMobController_t112 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		IOSAdMobController__GADDestroyBanner_m557(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void IOSAdMobController_RecordInAppResolution_m571 (IOSAdMobController_t112 * __this, int32_t ___resolution, const MethodInfo* method)
{
	{
		int32_t L_0 = ___resolution;
		IOSAdMobController__GADReportPurchaseStatus_m561(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::AddKeyword(System.String)
extern "C" void IOSAdMobController_AddKeyword_m572 (IOSAdMobController_t112 * __this, String_t* ___keyword, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral184, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___keyword;
		IOSAdMobController__GADAddKeyWord_m551(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::AddTestDevice(System.String)
extern "C" void IOSAdMobController_AddTestDevice_m573 (IOSAdMobController_t112 * __this, String_t* ___deviceId, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___deviceId;
		IOSAdMobController__GADAddTestDevice_m552(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::AddTestDevices(System.String[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_AddTestDevices_m574 (IOSAdMobController_t112 * __this, StringU5BU5D_t45* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		StringU5BU5D_t45* L_1 = ___ids;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		StringU5BU5D_t45* L_2 = ___ids;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Join_m3195(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_2, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		StringU5BU5D_t45* L_4 = ___ids;
		String_t* L_5 = String_Join_m3195(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_4, /*hidden argument*/NULL);
		IOSAdMobController__GADAddTestDevices_m553(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::SetGender(GoogleGender)
extern "C" void IOSAdMobController_SetGender_m575 (IOSAdMobController_t112 * __this, int32_t ___gender, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral188, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___gender;
		IOSAdMobController__GADSetGender_m554(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void IOSAdMobController_SetBirthday_m576 (IOSAdMobController_t112 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral185, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___day;
		int32_t L_2 = ___month;
		int32_t L_3 = ___year;
		IOSAdMobController__GADSetBirthday_m555(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void IOSAdMobController_TagForChildDirectedTreatment_m577 (IOSAdMobController_t112 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral186, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		bool L_1 = ___tagForChildDirectedTreatment;
		IOSAdMobController__GADTagForChildDirectedTreatment_m556(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::StartInterstitialAd()
extern "C" void IOSAdMobController_StartInterstitialAd_m578 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral189, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		IOSAdMobController__GADStartInterstitialAd_m558(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::LoadInterstitialAd()
extern "C" void IOSAdMobController_LoadInterstitialAd_m579 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral190, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		IOSAdMobController__GADLoadInterstitialAd_m559(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::ShowInterstitialAd()
extern "C" void IOSAdMobController_ShowInterstitialAd_m580 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral191, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		IOSAdMobController__GADShowInterstitialAd_m560(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * IOSAdMobController_GetBanner_m581 (IOSAdMobController_t112 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t111 * L_0 = (__this->____banners_8);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t111 * L_3 = (__this->____banners_8);
		int32_t L_4 = ___id;
		NullCheck(L_3);
		IOSADBanner_t110 * L_5 = (IOSADBanner_t110 *)VirtFuncInvoker1< IOSADBanner_t110 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m222(NULL /*static, unused*/, (String_t*) &_stringLiteral201, L_6, (String_t*) &_stringLiteral202, /*hidden argument*/NULL);
		Debug_LogWarning_m3183(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAdBanner> IOSAdMobController::get_banners()
extern TypeInfo* List_1_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t627_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3196_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3197_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3198_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3199_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3200_MethodInfo_var;
extern "C" List_1_t581 * IOSAdMobController_get_banners_m582 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		Enumerator_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(156);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1__ctor_m3196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		Dictionary_2_GetEnumerator_m3197_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483760);
		Enumerator_get_Current_m3198_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483761);
		KeyValuePair_2_get_Value_m3199_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483762);
		Enumerator_MoveNext_m3200_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483763);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t581 * V_0 = {0};
	KeyValuePair_2_t626  V_1 = {0};
	Enumerator_t627  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t581 * L_0 = (List_1_t581 *)il2cpp_codegen_object_new (List_1_t581_il2cpp_TypeInfo_var);
		List_1__ctor_m3196(L_0, /*hidden argument*/List_1__ctor_m3196_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t111 * L_1 = (__this->____banners_8);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t581 * L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t111 * L_3 = (__this->____banners_8);
		NullCheck(L_3);
		Enumerator_t627  L_4 = Dictionary_2_GetEnumerator_m3197(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3197_MethodInfo_var);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0024:
		{
			KeyValuePair_2_t626  L_5 = Enumerator_get_Current_m3198((&V_2), /*hidden argument*/Enumerator_get_Current_m3198_MethodInfo_var);
			V_1 = L_5;
			List_1_t581 * L_6 = V_0;
			IOSADBanner_t110 * L_7 = KeyValuePair_2_get_Value_m3199((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3199_MethodInfo_var);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(!0) */, L_6, L_7);
		}

IL_0039:
		{
			bool L_8 = Enumerator_MoveNext_m3200((&V_2), /*hidden argument*/Enumerator_MoveNext_m3200_MethodInfo_var);
			if (L_8)
			{
				goto IL_0024;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t627  L_9 = V_2;
		Enumerator_t627  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t627_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0056:
	{
		List_1_t581 * L_12 = V_0;
		return L_12;
	}
}
// System.Boolean IOSAdMobController::get_IsInited()
extern "C" bool IOSAdMobController_get_IsInited_m583 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		return L_0;
	}
}
// System.String IOSAdMobController::get_BannersUunitId()
extern "C" String_t* IOSAdMobController_get_BannersUunitId_m584 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____BannersUunitId_9);
		return L_0;
	}
}
// System.String IOSAdMobController::get_InterstisialUnitId()
extern "C" String_t* IOSAdMobController_get_InterstisialUnitId_m585 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____InterstisialUnitId_10);
		return L_0;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialLoaded()
extern "C" Action_t103 * IOSAdMobController_get_OnInterstitialLoaded_m586 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLoaded_11);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialLoaded_m587 (IOSAdMobController_t112 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialLoaded_11 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t103 * IOSAdMobController_get_OnInterstitialFailedLoading_m588 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialFailedLoading_m589 (IOSAdMobController_t112 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialFailedLoading_12 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialOpened()
extern "C" Action_t103 * IOSAdMobController_get_OnInterstitialOpened_m590 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialOpened_13);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialOpened_m591 (IOSAdMobController_t112 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialOpened_13 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialClosed()
extern "C" Action_t103 * IOSAdMobController_get_OnInterstitialClosed_m592 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialClosed_14);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialClosed_m593 (IOSAdMobController_t112 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialClosed_14 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t103 * IOSAdMobController_get_OnInterstitialLeftApplication_m594 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialLeftApplication_m595 (IOSAdMobController_t112 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialLeftApplication_15 = L_0;
		return;
	}
}
// System.Action`1<System.String> IOSAdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t104 * IOSAdMobController_get_OnAdInAppRequest_m596 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = (__this->____OnAdInAppRequest_16);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void IOSAdMobController_set_OnAdInAppRequest_m597 (IOSAdMobController_t112 * __this, Action_1_t104 * ___value, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = ___value;
		__this->____OnAdInAppRequest_16 = L_0;
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdLoaded(System.String)
extern TypeInfo* CharU5BU5D_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdLoaded_m598 (IOSAdMobController_t112 * __this, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t45* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	IOSADBanner_t110 * V_4 = {0};
	{
		String_t* L_0 = ___data;
		CharU5BU5D_t608* L_1 = ((CharU5BU5D_t608*)SZArrayNew(CharU5BU5D_t608_il2cpp_TypeInfo_var, 1));
		NullCheck((String_t*) &_stringLiteral203);
		uint16_t L_2 = String_get_Chars_m173((String_t*) &_stringLiteral203, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)L_2;
		NullCheck(L_0);
		StringU5BU5D_t45* L_3 = String_Split_m3118(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t45* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t45* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		int32_t L_9 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t45* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		int32_t L_11 = 2;
		int32_t L_12 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = V_1;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_13);
		V_4 = ((IOSADBanner_t110 *)IsInst(L_14, IOSADBanner_t110_il2cpp_TypeInfo_var));
		IOSADBanner_t110 * L_15 = V_4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		IOSADBanner_t110 * L_16 = V_4;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		IOSADBanner_SetDimentions_m516(L_16, L_17, L_18, /*hidden argument*/NULL);
		IOSADBanner_t110 * L_19 = V_4;
		NullCheck(L_19);
		IOSADBanner_OnBannerAdLoaded_m537(L_19, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdFailedToLoad(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdFailedToLoad_m599 (IOSAdMobController_t112 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t110 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t110 *)IsInst(L_3, IOSADBanner_t110_il2cpp_TypeInfo_var));
		IOSADBanner_t110 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t110 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdFailedToLoad_m538(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdOpened(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdOpened_m600 (IOSAdMobController_t112 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t110 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t110 *)IsInst(L_3, IOSADBanner_t110_il2cpp_TypeInfo_var));
		IOSADBanner_t110 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t110 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdOpened_m539(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdClosed(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdClosed_m601 (IOSAdMobController_t112 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t110 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t110 *)IsInst(L_3, IOSADBanner_t110_il2cpp_TypeInfo_var));
		IOSADBanner_t110 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t110 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdClosed_m540(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdLeftApplication(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t110_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdLeftApplication_m602 (IOSAdMobController_t112 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IOSADBanner_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t110 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t110 *)IsInst(L_3, IOSADBanner_t110_il2cpp_TypeInfo_var));
		IOSADBanner_t110 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t110 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdLeftApplication_m541(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdLoaded()
extern "C" void IOSAdMobController_OnInterstitialAdLoaded_m603 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLoaded_11);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral149);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdFailedToLoad()
extern "C" void IOSAdMobController_OnInterstitialAdFailedToLoad_m604 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral204);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdOpened()
extern "C" void IOSAdMobController_OnInterstitialAdOpened_m605 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialOpened_13);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral150);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdClosed()
extern "C" void IOSAdMobController_OnInterstitialAdClosed_m606 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialClosed_14);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral151);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdLeftApplication()
extern "C" void IOSAdMobController_OnInterstitialAdLeftApplication_m607 (IOSAdMobController_t112 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral205);
		return;
	}
}
// System.Void IOSAdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void IOSAdMobController_OnInAppPurchaseRequested_m608 (IOSAdMobController_t112 * __this, String_t* ___productId, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = (__this->____OnAdInAppRequest_16);
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		String_t* L_2 = ___productId;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral154, L_2);
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialLoaded>m__B()
extern "C" void IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m609 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialFailedLoading>m__C()
extern "C" void IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m610 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialOpened>m__D()
extern "C" void IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m611 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialClosed>m__E()
extern "C" void IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m612 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialLeftApplication>m__F()
extern "C" void IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m613 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnAdInAppRequest>m__10(System.String)
extern "C" void IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m614 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// GADTestDevice
#include "AssemblyU2DCSharp_GADTestDeviceMethodDeclarations.h"



// System.Void GADTestDevice::.ctor()
extern "C" void GADTestDevice__ctor_m615 (GADTestDevice_t114 * __this, const MethodInfo* method)
{
	{
		__this->___Name_0 = (String_t*) &_stringLiteral206;
		__this->___ID_1 = (String_t*) &_stringLiteral207;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// WP8ADBanner
#include "AssemblyU2DCSharp_WP8ADBanner.h"
#ifndef _MSC_VER
#else
#endif
// WP8ADBanner
#include "AssemblyU2DCSharp_WP8ADBannerMethodDeclarations.h"



// System.Void WP8ADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLoadedActionU3Em__11_m650_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m651_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnOpenedActionU3Em__13_m652_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnClosedActionU3Em__14_m653_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m654_MethodInfo_var;
extern "C" void WP8ADBanner__ctor_m616 (WP8ADBanner_t115 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		WP8ADBanner_U3C_OnLoadedActionU3Em__11_m650_MethodInfo_var = il2cpp_codegen_method_info_from_index(116);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m651_MethodInfo_var = il2cpp_codegen_method_info_from_index(117);
		WP8ADBanner_U3C_OnOpenedActionU3Em__13_m652_MethodInfo_var = il2cpp_codegen_method_info_from_index(118);
		WP8ADBanner_U3C_OnClosedActionU3Em__14_m653_MethodInfo_var = il2cpp_codegen_method_info_from_index(119);
		WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m654_MethodInfo_var = il2cpp_codegen_method_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t115 * G_B2_0 = {0};
	WP8ADBanner_t115 * G_B1_0 = {0};
	WP8ADBanner_t115 * G_B4_0 = {0};
	WP8ADBanner_t115 * G_B3_0 = {0};
	WP8ADBanner_t115 * G_B6_0 = {0};
	WP8ADBanner_t115 * G_B5_0 = {0};
	WP8ADBanner_t115 * G_B8_0 = {0};
	WP8ADBanner_t115 * G_B7_0 = {0};
	WP8ADBanner_t115 * G_B10_0 = {0};
	WP8ADBanner_t115 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t109 * L_0 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)WP8ADBanner_U3C_OnLoadedActionU3Em__11_m650_MethodInfo_var };
		Action_1_t109 * L_2 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t109 * L_3 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t109 * L_4 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m651_MethodInfo_var };
		Action_1_t109 * L_6 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t109 * L_7 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t109 * L_8 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)WP8ADBanner_U3C_OnOpenedActionU3Em__13_m652_MethodInfo_var };
		Action_1_t109 * L_10 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t109 * L_11 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t109 * L_12 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)WP8ADBanner_U3C_OnClosedActionU3Em__14_m653_MethodInfo_var };
		Action_1_t109 * L_14 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t109 * L_15 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t109 * L_16 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m654_MethodInfo_var };
		Action_1_t109 * L_18 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t109 * L_19 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m381(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___anchor;
		__this->____anchor_4 = L_22;
		return;
	}
}
// System.Void WP8ADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLoadedActionU3Em__11_m650_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m651_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnOpenedActionU3Em__13_m652_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnClosedActionU3Em__14_m653_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m654_MethodInfo_var;
extern "C" void WP8ADBanner__ctor_m617 (WP8ADBanner_t115 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		WP8ADBanner_U3C_OnLoadedActionU3Em__11_m650_MethodInfo_var = il2cpp_codegen_method_info_from_index(116);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m651_MethodInfo_var = il2cpp_codegen_method_info_from_index(117);
		WP8ADBanner_U3C_OnOpenedActionU3Em__13_m652_MethodInfo_var = il2cpp_codegen_method_info_from_index(118);
		WP8ADBanner_U3C_OnClosedActionU3Em__14_m653_MethodInfo_var = il2cpp_codegen_method_info_from_index(119);
		WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m654_MethodInfo_var = il2cpp_codegen_method_info_from_index(120);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t115 * G_B2_0 = {0};
	WP8ADBanner_t115 * G_B1_0 = {0};
	WP8ADBanner_t115 * G_B4_0 = {0};
	WP8ADBanner_t115 * G_B3_0 = {0};
	WP8ADBanner_t115 * G_B6_0 = {0};
	WP8ADBanner_t115 * G_B5_0 = {0};
	WP8ADBanner_t115 * G_B8_0 = {0};
	WP8ADBanner_t115 * G_B7_0 = {0};
	WP8ADBanner_t115 * G_B10_0 = {0};
	WP8ADBanner_t115 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t109 * L_0 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)WP8ADBanner_U3C_OnLoadedActionU3Em__11_m650_MethodInfo_var };
		Action_1_t109 * L_2 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t109 * L_3 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t109 * L_4 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m651_MethodInfo_var };
		Action_1_t109 * L_6 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t109 * L_7 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t109 * L_8 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)WP8ADBanner_U3C_OnOpenedActionU3Em__13_m652_MethodInfo_var };
		Action_1_t109 * L_10 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t109 * L_11 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t109 * L_12 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)WP8ADBanner_U3C_OnClosedActionU3Em__14_m653_MethodInfo_var };
		Action_1_t109 * L_14 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t109 * L_15 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t109 * L_16 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m654_MethodInfo_var };
		Action_1_t109 * L_18 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t109 * L_19 = ((WP8ADBanner_t115_StaticFields*)WP8ADBanner_t115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m381(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		return;
	}
}
// System.Void WP8ADBanner::Hide()
extern "C" void WP8ADBanner_Hide_m618 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
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
		__this->____IsOnScreen_6 = 0;
		return;
	}
}
// System.Void WP8ADBanner::Show()
extern "C" void WP8ADBanner_Show_m619 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
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
		__this->____IsOnScreen_6 = 1;
		return;
	}
}
// System.Void WP8ADBanner::Refresh()
extern "C" void WP8ADBanner_Refresh_m620 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void WP8ADBanner_SetBannerPosition_m621 (WP8ADBanner_t115 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void WP8ADBanner_SetBannerPosition_m622 (WP8ADBanner_t115 * __this, int32_t ___anchor, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::DestroyAfterLoad()
extern "C" void WP8ADBanner_DestroyAfterLoad_m623 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		__this->___destroyOnLoad_9 = 1;
		VirtActionInvoker1< bool >::Invoke(33 /* System.Void WP8ADBanner::set_ShowOnLoad(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Void WP8ADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void WP8ADBanner_SetDimentions_m624 (WP8ADBanner_t115 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	{
		int32_t L_0 = ___w;
		__this->____width_10 = L_0;
		int32_t L_1 = ___h;
		__this->____height_11 = L_1;
		return;
	}
}
// System.Int32 WP8ADBanner::get_id()
extern "C" int32_t WP8ADBanner_get_id_m625 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_2);
		return L_0;
	}
}
// System.Int32 WP8ADBanner::get_width()
extern "C" int32_t WP8ADBanner_get_width_m626 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____width_10);
		return L_0;
	}
}
// System.Int32 WP8ADBanner::get_height()
extern "C" int32_t WP8ADBanner_get_height_m627 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____height_11);
		return L_0;
	}
}
// GADBannerSize WP8ADBanner::get_size()
extern "C" int32_t WP8ADBanner_get_size_m628 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_3);
		return L_0;
	}
}
// System.Boolean WP8ADBanner::get_IsLoaded()
extern "C" bool WP8ADBanner_get_IsLoaded_m629 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
		return L_0;
	}
}
// System.Boolean WP8ADBanner::get_IsOnScreen()
extern "C" bool WP8ADBanner_get_IsOnScreen_m630 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
		return L_0;
	}
}
// System.Boolean WP8ADBanner::get_ShowOnLoad()
extern "C" bool WP8ADBanner_get_ShowOnLoad_m631 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____ShowOnLoad_8);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void WP8ADBanner_set_ShowOnLoad_m632 (WP8ADBanner_t115 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____ShowOnLoad_8 = L_0;
		return;
	}
}
// UnityEngine.TextAnchor WP8ADBanner::get_anchor()
extern "C" int32_t WP8ADBanner_get_anchor_m633 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____anchor_4);
		return L_0;
	}
}
// System.Int32 WP8ADBanner::get_gravity()
extern "C" int32_t WP8ADBanner_get_gravity_m634 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->____anchor_4);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004b;
		}
		if (L_1 == 1)
		{
			goto IL_0048;
		}
		if (L_1 == 2)
		{
			goto IL_004e;
		}
		if (L_1 == 3)
		{
			goto IL_0042;
		}
		if (L_1 == 4)
		{
			goto IL_003f;
		}
		if (L_1 == 5)
		{
			goto IL_0045;
		}
		if (L_1 == 6)
		{
			goto IL_0039;
		}
		if (L_1 == 7)
		{
			goto IL_0036;
		}
		if (L_1 == 8)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0051;
	}

IL_0036:
	{
		return ((int32_t)81);
	}

IL_0039:
	{
		return ((int32_t)83);
	}

IL_003c:
	{
		return ((int32_t)85);
	}

IL_003f:
	{
		return ((int32_t)17);
	}

IL_0042:
	{
		return ((int32_t)19);
	}

IL_0045:
	{
		return ((int32_t)21);
	}

IL_0048:
	{
		return ((int32_t)49);
	}

IL_004b:
	{
		return ((int32_t)51);
	}

IL_004e:
	{
		return ((int32_t)53);
	}

IL_0051:
	{
		return ((int32_t)48);
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnLoadedAction()
extern "C" Action_1_t109 * WP8ADBanner_get_OnLoadedAction_m635 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLoadedAction_12);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnLoadedAction_m636 (WP8ADBanner_t115 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnLoadedAction_12 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t109 * WP8ADBanner_get_OnFailedLoadingAction_m637 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnFailedLoadingAction_13);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnFailedLoadingAction_m638 (WP8ADBanner_t115 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnFailedLoadingAction_13 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnOpenedAction()
extern "C" Action_1_t109 * WP8ADBanner_get_OnOpenedAction_m639 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnOpenedAction_14);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnOpenedAction_m640 (WP8ADBanner_t115 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnOpenedAction_14 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnClosedAction()
extern "C" Action_1_t109 * WP8ADBanner_get_OnClosedAction_m641 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnClosedAction_15);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnClosedAction_m642 (WP8ADBanner_t115 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnClosedAction_15 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t109 * WP8ADBanner_get_OnLeftApplicationAction_m643 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLeftApplicationAction_16);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnLeftApplicationAction_m644 (WP8ADBanner_t115 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnLeftApplicationAction_16 = L_0;
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdLoaded()
extern "C" void WP8ADBanner_OnBannerAdLoaded_m645 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___destroyOnLoad_9);
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
		__this->____IsLoaded_5 = 1;
		bool L_1 = (__this->___firstLoad_7);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean WP8ADBanner::get_ShowOnLoad() */, __this);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		VirtActionInvoker0::Invoke(23 /* System.Void WP8ADBanner::Show() */, __this);
		goto IL_003a;
	}

IL_0034:
	{
		VirtActionInvoker0::Invoke(22 /* System.Void WP8ADBanner::Hide() */, __this);
	}

IL_003a:
	{
		__this->___firstLoad_7 = 0;
	}

IL_0041:
	{
		Action_1_t109 * L_3 = (__this->____OnLoadedAction_12);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_3, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral194);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdFailedToLoad()
extern "C" void WP8ADBanner_OnBannerAdFailedToLoad_m646 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnFailedLoadingAction_13);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral195);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdOpened()
extern "C" void WP8ADBanner_OnBannerAdOpened_m647 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnOpenedAction_14);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral196);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdClosed()
extern "C" void WP8ADBanner_OnBannerAdClosed_m648 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnClosedAction_15);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral197);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdLeftApplication()
extern "C" void WP8ADBanner_OnBannerAdLeftApplication_m649 (WP8ADBanner_t115 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLeftApplicationAction_16);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral198);
		return;
	}
}
// System.Void WP8ADBanner::<_OnLoadedAction>m__11(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnLoadedActionU3Em__11_m650 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnFailedLoadingAction>m__12(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m651 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnOpenedAction>m__13(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnOpenedActionU3Em__13_m652 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnClosedAction>m__14(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnClosedActionU3Em__14_m653 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnLeftApplicationAction>m__15(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m654 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// WP8AdMobController
#include "AssemblyU2DCSharp_WP8AdMobControllerMethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.Int32,WP8ADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,WP8ADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// GoogleAdsWP8.AdManager
#include "GoogleAdsWP8_GoogleAdsWP8_AdManager.h"
// System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,WP8ADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,WP8ADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"
// GoogleAdsWP8.AdManager
#include "GoogleAdsWP8_GoogleAdsWP8_AdManagerMethodDeclarations.h"


// System.Void WP8AdMobController::.ctor()
extern TypeInfo* WP8AdMobController_t117_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t104_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t118_il2cpp_TypeInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m703_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m704_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m705_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m706_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m707_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m708_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3174_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3202_MethodInfo_var;
extern "C" void WP8AdMobController__ctor_m655 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WP8AdMobController_t117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		Action_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Action_1_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		SA_Singleton_1_t118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m703_MethodInfo_var = il2cpp_codegen_method_info_from_index(121);
		WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m704_MethodInfo_var = il2cpp_codegen_method_info_from_index(122);
		WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m705_MethodInfo_var = il2cpp_codegen_method_info_from_index(123);
		WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m706_MethodInfo_var = il2cpp_codegen_method_info_from_index(124);
		WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m707_MethodInfo_var = il2cpp_codegen_method_info_from_index(125);
		WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m708_MethodInfo_var = il2cpp_codegen_method_info_from_index(126);
		Action_1__ctor_m3174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		SA_Singleton_1__ctor_m3202_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483775);
		s_Il2CppMethodIntialized = true;
	}
	WP8AdMobController_t117 * G_B2_0 = {0};
	WP8AdMobController_t117 * G_B1_0 = {0};
	WP8AdMobController_t117 * G_B4_0 = {0};
	WP8AdMobController_t117 * G_B3_0 = {0};
	WP8AdMobController_t117 * G_B6_0 = {0};
	WP8AdMobController_t117 * G_B5_0 = {0};
	WP8AdMobController_t117 * G_B8_0 = {0};
	WP8AdMobController_t117 * G_B7_0 = {0};
	WP8AdMobController_t117 * G_B10_0 = {0};
	WP8AdMobController_t117 * G_B9_0 = {0};
	WP8AdMobController_t117 * G_B12_0 = {0};
	WP8AdMobController_t117 * G_B11_0 = {0};
	{
		Action_t103 * L_0 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m703_MethodInfo_var };
		Action_t103 * L_2 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_2, NULL, L_1, /*hidden argument*/NULL);
		((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_t103 * L_3 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnInterstitialLoaded_11 = L_3;
		Action_t103 * L_4 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		IntPtr_t L_5 = { (void*)WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m704_MethodInfo_var };
		Action_t103 * L_6 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_6, NULL, L_5, /*hidden argument*/NULL);
		((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_t103 * L_7 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnInterstitialFailedLoading_12 = L_7;
		Action_t103 * L_8 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_9 = { (void*)WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m705_MethodInfo_var };
		Action_t103 * L_10 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_10, NULL, L_9, /*hidden argument*/NULL);
		((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_005f:
	{
		Action_t103 * L_11 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnInterstitialOpened_13 = L_11;
		Action_t103 * L_12 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0082;
		}
	}
	{
		IntPtr_t L_13 = { (void*)WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m706_MethodInfo_var };
		Action_t103 * L_14 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_14, NULL, L_13, /*hidden argument*/NULL);
		((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0082:
	{
		Action_t103 * L_15 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnInterstitialClosed_14 = L_15;
		Action_t103 * L_16 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_17 = { (void*)WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m707_MethodInfo_var };
		Action_t103 * L_18 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_18, NULL, L_17, /*hidden argument*/NULL);
		((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00a5:
	{
		Action_t103 * L_19 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnInterstitialLeftApplication_15 = L_19;
		Action_1_t104 * L_20 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		G_B11_0 = __this;
		if (L_20)
		{
			G_B12_0 = __this;
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m708_MethodInfo_var };
		Action_1_t104 * L_22 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22 = L_22;
		G_B12_0 = G_B11_0;
	}

IL_00c8:
	{
		Action_1_t104 * L_23 = ((WP8AdMobController_t117_StaticFields*)WP8AdMobController_t117_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		NullCheck(G_B12_0);
		G_B12_0->____OnAdInAppRequest_16 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t118_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3202(__this, /*hidden argument*/SA_Singleton_1__ctor_m3202_MethodInfo_var);
		return;
	}
}
// System.Void WP8AdMobController::Awake()
extern "C" void WP8AdMobController_Awake_m656 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		GameObject_t312 * L_0 = Component_get_gameObject_m3162(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3193(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::Init(System.String)
extern TypeInfo* Dictionary_2_t116_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3203_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdLoaded_m697_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3174_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdFailedToLoad_m698_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdOpened_m699_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdClosed_m700_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdLeftApplication_m701_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdLoaded_m692_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdFailedToLoad_m693_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdOpened_m694_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdClosed_m695_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdLeftApplication_m696_MethodInfo_var;
extern "C" void WP8AdMobController_Init_m657 (WP8AdMobController_t117 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		Action_1_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		Dictionary_2__ctor_m3203_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483776);
		WP8AdMobController_OnInterstitialAdLoaded_m697_MethodInfo_var = il2cpp_codegen_method_info_from_index(129);
		Action_1__ctor_m3174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		WP8AdMobController_OnInterstitialAdFailedToLoad_m698_MethodInfo_var = il2cpp_codegen_method_info_from_index(130);
		WP8AdMobController_OnInterstitialAdOpened_m699_MethodInfo_var = il2cpp_codegen_method_info_from_index(131);
		WP8AdMobController_OnInterstitialAdClosed_m700_MethodInfo_var = il2cpp_codegen_method_info_from_index(132);
		WP8AdMobController_OnInterstitialAdLeftApplication_m701_MethodInfo_var = il2cpp_codegen_method_info_from_index(133);
		WP8AdMobController_OnBannerAdLoaded_m692_MethodInfo_var = il2cpp_codegen_method_info_from_index(134);
		WP8AdMobController_OnBannerAdFailedToLoad_m693_MethodInfo_var = il2cpp_codegen_method_info_from_index(135);
		WP8AdMobController_OnBannerAdOpened_m694_MethodInfo_var = il2cpp_codegen_method_info_from_index(136);
		WP8AdMobController_OnBannerAdClosed_m695_MethodInfo_var = il2cpp_codegen_method_info_from_index(137);
		WP8AdMobController_OnBannerAdLeftApplication_m696_MethodInfo_var = il2cpp_codegen_method_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral199, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		__this->____IsInited_7 = 1;
		String_t* L_1 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_1;
		String_t* L_2 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_2;
		Dictionary_2_t116 * L_3 = (Dictionary_2_t116 *)il2cpp_codegen_object_new (Dictionary_2_t116_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3203(L_3, /*hidden argument*/Dictionary_2__ctor_m3203_MethodInfo_var);
		__this->____banners_8 = L_3;
		AdManager_t628 * L_4 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___ad_unit_id;
		NullCheck(L_4);
		AdManager_Init_m3205(L_4, L_5, /*hidden argument*/NULL);
		AdManager_t628 * L_6 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_7 = { (void*)WP8AdMobController_OnInterstitialAdLoaded_m697_MethodInfo_var };
		Action_1_t104 * L_8 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_8, __this, L_7, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_6);
		L_6->___InterstisialOnLoad_0 = L_8;
		AdManager_t628 * L_9 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)WP8AdMobController_OnInterstitialAdFailedToLoad_m698_MethodInfo_var };
		Action_1_t104 * L_11 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_11, __this, L_10, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_9);
		L_9->___InterstisialFailedToLoad_1 = L_11;
		AdManager_t628 * L_12 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_13 = { (void*)WP8AdMobController_OnInterstitialAdOpened_m699_MethodInfo_var };
		Action_1_t104 * L_14 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_14, __this, L_13, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_12);
		L_12->___InterstisialOnAdOpened_2 = L_14;
		AdManager_t628 * L_15 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_16 = { (void*)WP8AdMobController_OnInterstitialAdClosed_m700_MethodInfo_var };
		Action_1_t104 * L_17 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_17, __this, L_16, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_15);
		L_15->___InterstisialOnAdClosed_3 = L_17;
		AdManager_t628 * L_18 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_19 = { (void*)WP8AdMobController_OnInterstitialAdLeftApplication_m701_MethodInfo_var };
		Action_1_t104 * L_20 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_20, __this, L_19, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_18);
		L_18->___InterstisialAdLeftApplication_4 = L_20;
		AdManager_t628 * L_21 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_22 = { (void*)WP8AdMobController_OnBannerAdLoaded_m692_MethodInfo_var };
		Action_1_t104 * L_23 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_23, __this, L_22, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_21);
		L_21->___BannerOnLoad_5 = L_23;
		AdManager_t628 * L_24 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_25 = { (void*)WP8AdMobController_OnBannerAdFailedToLoad_m693_MethodInfo_var };
		Action_1_t104 * L_26 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_26, __this, L_25, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_24);
		L_24->___BannerFailedToLoad_6 = L_26;
		AdManager_t628 * L_27 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_28 = { (void*)WP8AdMobController_OnBannerAdOpened_m694_MethodInfo_var };
		Action_1_t104 * L_29 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_29, __this, L_28, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_27);
		L_27->___BannerOnAdOpened_7 = L_29;
		AdManager_t628 * L_30 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_31 = { (void*)WP8AdMobController_OnBannerAdClosed_m695_MethodInfo_var };
		Action_1_t104 * L_32 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_32, __this, L_31, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_30);
		L_30->___BannerOnAdClosed_8 = L_32;
		AdManager_t628 * L_33 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_34 = { (void*)WP8AdMobController_OnBannerAdLeftApplication_m696_MethodInfo_var };
		Action_1_t104 * L_35 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_35, __this, L_34, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		NullCheck(L_33);
		L_33->___BannerAdLeftApplication_9 = L_35;
		int32_t L_36 = Screen_get_orientation_m3080(NULL /*static, unused*/, /*hidden argument*/NULL);
		WP8AdMobController_SetOrientation_m658(__this, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::SetOrientation(UnityEngine.ScreenOrientation)
extern "C" void WP8AdMobController_SetOrientation_m658 (WP8AdMobController_t117 * __this, int32_t ___orientation, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___orientation;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___orientation;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___orientation;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		V_0 = 1;
	}

IL_0019:
	{
		int32_t L_3 = ___orientation;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___orientation;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		V_0 = 2;
	}

IL_0029:
	{
		AdManager_t628 * L_5 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		AdManager_SetOrientation_m3206(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::Init(System.String,System.String)
extern "C" void WP8AdMobController_Init_m659 (WP8AdMobController_t117 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral199, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___banners_unit_id;
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void WP8AdMobController::Init(System.String) */, __this, L_1);
		String_t* L_2 = ___interstisial_unit_id;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void WP8AdMobController::SetInterstisialsUnitID(System.String) */, __this, L_2);
		return;
	}
}
// System.Void WP8AdMobController::SetBannersUnitID(System.String)
extern "C" void WP8AdMobController_SetBannersUnitID_m660 (WP8AdMobController_t117 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_0;
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___ad_unit_id;
		NullCheck(L_1);
		AdManager_ChangeBannersUnitID_m3207(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::SetInterstisialsUnitID(System.String)
extern "C" void WP8AdMobController_SetInterstisialsUnitID_m661 (WP8AdMobController_t117 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_0;
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___ad_unit_id;
		NullCheck(L_1);
		AdManager_ChangeInterstisialsUnitID_m3208(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner WP8AdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t179_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern "C" Object_t * WP8AdMobController_CreateAdBanner_m662 (WP8AdMobController_t117 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t115 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___anchor;
		int32_t L_2 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t179_il2cpp_TypeInfo_var);
		int32_t L_3 = GADBannerIdFactory_get_nextId_m1029(NULL /*static, unused*/, /*hidden argument*/NULL);
		WP8ADBanner_t115 * L_4 = (WP8ADBanner_t115 *)il2cpp_codegen_object_new (WP8ADBanner_t115_il2cpp_TypeInfo_var);
		WP8ADBanner__ctor_m616(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Dictionary_2_t116 * L_5 = (__this->____banners_8);
		WP8ADBanner_t115 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 WP8ADBanner::get_id() */, L_6);
		WP8ADBanner_t115 * L_8 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, WP8ADBanner_t115 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::Add(!0,!1) */, L_5, L_7, L_8);
		WP8ADBanner_t115 * L_9 = V_0;
		return L_9;
	}
}
// GoogleMobileAdBanner WP8AdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t179_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern "C" Object_t * WP8AdMobController_CreateAdBanner_m663 (WP8AdMobController_t117 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t115 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t179_il2cpp_TypeInfo_var);
		int32_t L_2 = GADBannerIdFactory_get_nextId_m1029(NULL /*static, unused*/, /*hidden argument*/NULL);
		WP8ADBanner_t115 * L_3 = (WP8ADBanner_t115 *)il2cpp_codegen_object_new (WP8ADBanner_t115_il2cpp_TypeInfo_var);
		WP8ADBanner__ctor_m616(L_3, 4, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t116 * L_4 = (__this->____banners_8);
		WP8ADBanner_t115 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 WP8ADBanner::get_id() */, L_5);
		WP8ADBanner_t115 * L_7 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< int32_t, WP8ADBanner_t115 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::Add(!0,!1) */, L_4, L_6, L_7);
		WP8ADBanner_t115 * L_8 = V_0;
		return L_8;
	}
}
// System.Void WP8AdMobController::DestroyBanner(System.Int32)
extern "C" void WP8AdMobController_DestroyBanner_m664 (WP8AdMobController_t117 * __this, int32_t ___id, const MethodInfo* method)
{
	WP8ADBanner_t115 * V_0 = {0};
	{
		Dictionary_2_t116 * L_0 = (__this->____banners_8);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_t116 * L_1 = (__this->____banners_8);
		int32_t L_2 = ___id;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::ContainsKey(!0) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_t116 * L_4 = (__this->____banners_8);
		int32_t L_5 = ___id;
		NullCheck(L_4);
		WP8ADBanner_t115 * L_6 = (WP8ADBanner_t115 *)VirtFuncInvoker1< WP8ADBanner_t115 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::get_Item(!0) */, L_4, L_5);
		V_0 = L_6;
		WP8ADBanner_t115 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean WP8ADBanner::get_IsLoaded() */, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		Dictionary_2_t116 * L_9 = (__this->____banners_8);
		int32_t L_10 = ___id;
		NullCheck(L_9);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::Remove(!0) */, L_9, L_10);
		AdManager_t628 * L_11 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_12 = ___id;
		NullCheck(L_11);
		AdManager_DestroyBanner_m3209(L_11, L_12, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0051:
	{
		WP8ADBanner_t115 * L_13 = V_0;
		NullCheck(L_13);
		WP8ADBanner_DestroyAfterLoad_m623(L_13, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void WP8AdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void WP8AdMobController_RecordInAppResolution_m665 (WP8AdMobController_t117 * __this, int32_t ___resolution, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::AddKeyword(System.String)
extern "C" void WP8AdMobController_AddKeyword_m666 (WP8AdMobController_t117 * __this, String_t* ___keyword, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral184, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___keyword;
		NullCheck(L_1);
		AdManager_AddKeyword_m3210(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::AddTestDevice(System.String)
extern "C" void WP8AdMobController_AddTestDevice_m667 (WP8AdMobController_t117 * __this, String_t* ___deviceId, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_EnableForceTesting_m3211(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::AddTestDevices(System.String[])
extern "C" void WP8AdMobController_AddTestDevices_m668 (WP8AdMobController_t117 * __this, StringU5BU5D_t45* ___ids, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		StringU5BU5D_t45* L_1 = ___ids;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		return;
	}
}
// System.Void WP8AdMobController::SetGender(GoogleGender)
extern "C" void WP8AdMobController_SetGender_m669 (WP8AdMobController_t117 * __this, int32_t ___gender, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral188, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___gender;
		NullCheck(L_1);
		AdManager_SetGender_m3212(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void WP8AdMobController_SetBirthday_m670 (WP8AdMobController_t117 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral185, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___year;
		int32_t L_3 = ___month;
		int32_t L_4 = ___day;
		NullCheck(L_1);
		AdManager_SetBirthday_m3213(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void WP8AdMobController_TagForChildDirectedTreatment_m671 (WP8AdMobController_t117 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral186, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		return;
	}
}
// System.Void WP8AdMobController::StartInterstitialAd()
extern "C" void WP8AdMobController_StartInterstitialAd_m672 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral189, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_StartInterstitialAd_m3214(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::LoadInterstitialAd()
extern "C" void WP8AdMobController_LoadInterstitialAd_m673 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral190, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_LoadInterstitialAd_m3215(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::ShowInterstitialAd()
extern "C" void WP8AdMobController_ShowInterstitialAd_m674 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral191, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t628 * L_1 = AdManager_get_instance_m3204(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_ShowInterstitialAd_m3216(L_1, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * WP8AdMobController_GetBanner_m675 (WP8AdMobController_t117 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t116 * L_0 = (__this->____banners_8);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t116 * L_3 = (__this->____banners_8);
		int32_t L_4 = ___id;
		NullCheck(L_3);
		WP8ADBanner_t115 * L_5 = (WP8ADBanner_t115 *)VirtFuncInvoker1< WP8ADBanner_t115 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m222(NULL /*static, unused*/, (String_t*) &_stringLiteral201, L_6, (String_t*) &_stringLiteral202, /*hidden argument*/NULL);
		Debug_LogWarning_m3183(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAdBanner> WP8AdMobController::get_banners()
extern TypeInfo* List_1_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t630_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3196_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3217_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3218_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3219_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3220_MethodInfo_var;
extern "C" List_1_t581 * WP8AdMobController_get_banners_m676 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		Enumerator_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1__ctor_m3196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		Dictionary_2_GetEnumerator_m3217_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483787);
		Enumerator_get_Current_m3218_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483788);
		KeyValuePair_2_get_Value_m3219_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483789);
		Enumerator_MoveNext_m3220_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483790);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t581 * V_0 = {0};
	KeyValuePair_2_t629  V_1 = {0};
	Enumerator_t630  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t581 * L_0 = (List_1_t581 *)il2cpp_codegen_object_new (List_1_t581_il2cpp_TypeInfo_var);
		List_1__ctor_m3196(L_0, /*hidden argument*/List_1__ctor_m3196_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t116 * L_1 = (__this->____banners_8);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t581 * L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t116 * L_3 = (__this->____banners_8);
		NullCheck(L_3);
		Enumerator_t630  L_4 = Dictionary_2_GetEnumerator_m3217(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3217_MethodInfo_var);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0024:
		{
			KeyValuePair_2_t629  L_5 = Enumerator_get_Current_m3218((&V_2), /*hidden argument*/Enumerator_get_Current_m3218_MethodInfo_var);
			V_1 = L_5;
			List_1_t581 * L_6 = V_0;
			WP8ADBanner_t115 * L_7 = KeyValuePair_2_get_Value_m3219((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3219_MethodInfo_var);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(!0) */, L_6, L_7);
		}

IL_0039:
		{
			bool L_8 = Enumerator_MoveNext_m3220((&V_2), /*hidden argument*/Enumerator_MoveNext_m3220_MethodInfo_var);
			if (L_8)
			{
				goto IL_0024;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t630  L_9 = V_2;
		Enumerator_t630  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t630_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0056:
	{
		List_1_t581 * L_12 = V_0;
		return L_12;
	}
}
// System.Boolean WP8AdMobController::get_IsInited()
extern "C" bool WP8AdMobController_get_IsInited_m677 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		return L_0;
	}
}
// System.String WP8AdMobController::get_BannersUunitId()
extern "C" String_t* WP8AdMobController_get_BannersUunitId_m678 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____BannersUunitId_9);
		return L_0;
	}
}
// System.String WP8AdMobController::get_InterstisialUnitId()
extern "C" String_t* WP8AdMobController_get_InterstisialUnitId_m679 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____InterstisialUnitId_10);
		return L_0;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialLoaded()
extern "C" Action_t103 * WP8AdMobController_get_OnInterstitialLoaded_m680 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLoaded_11);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialLoaded_m681 (WP8AdMobController_t117 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialLoaded_11 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t103 * WP8AdMobController_get_OnInterstitialFailedLoading_m682 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialFailedLoading_m683 (WP8AdMobController_t117 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialFailedLoading_12 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialOpened()
extern "C" Action_t103 * WP8AdMobController_get_OnInterstitialOpened_m684 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialOpened_13);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialOpened_m685 (WP8AdMobController_t117 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialOpened_13 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialClosed()
extern "C" Action_t103 * WP8AdMobController_get_OnInterstitialClosed_m686 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialClosed_14);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialClosed_m687 (WP8AdMobController_t117 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialClosed_14 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t103 * WP8AdMobController_get_OnInterstitialLeftApplication_m688 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialLeftApplication_m689 (WP8AdMobController_t117 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialLeftApplication_15 = L_0;
		return;
	}
}
// System.Action`1<System.String> WP8AdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t104 * WP8AdMobController_get_OnAdInAppRequest_m690 (WP8AdMobController_t117 * __this, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = (__this->____OnAdInAppRequest_16);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void WP8AdMobController_set_OnAdInAppRequest_m691 (WP8AdMobController_t117 * __this, Action_1_t104 * ___value, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = ___value;
		__this->____OnAdInAppRequest_16 = L_0;
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdLoaded(System.String)
extern TypeInfo* CharU5BU5D_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdLoaded_m692 (WP8AdMobController_t117 * __this, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t45* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	WP8ADBanner_t115 * V_4 = {0};
	{
		String_t* L_0 = ___data;
		CharU5BU5D_t608* L_1 = ((CharU5BU5D_t608*)SZArrayNew(CharU5BU5D_t608_il2cpp_TypeInfo_var, 1));
		NullCheck((String_t*) &_stringLiteral203);
		uint16_t L_2 = String_get_Chars_m173((String_t*) &_stringLiteral203, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)L_2;
		NullCheck(L_0);
		StringU5BU5D_t45* L_3 = String_Split_m3118(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t45* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t45* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		int32_t L_9 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t45* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		int32_t L_11 = 2;
		int32_t L_12 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = V_1;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_13);
		V_4 = ((WP8ADBanner_t115 *)IsInst(L_14, WP8ADBanner_t115_il2cpp_TypeInfo_var));
		WP8ADBanner_t115 * L_15 = V_4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		WP8ADBanner_t115 * L_16 = V_4;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		WP8ADBanner_SetDimentions_m624(L_16, L_17, L_18, /*hidden argument*/NULL);
		WP8ADBanner_t115 * L_19 = V_4;
		NullCheck(L_19);
		WP8ADBanner_OnBannerAdLoaded_m645(L_19, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdFailedToLoad(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdFailedToLoad_m693 (WP8AdMobController_t117 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t115 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t115 *)IsInst(L_3, WP8ADBanner_t115_il2cpp_TypeInfo_var));
		WP8ADBanner_t115 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t115 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdFailedToLoad_m646(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdOpened(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdOpened_m694 (WP8AdMobController_t117 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t115 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t115 *)IsInst(L_3, WP8ADBanner_t115_il2cpp_TypeInfo_var));
		WP8ADBanner_t115 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t115 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdOpened_m647(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdClosed(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdClosed_m695 (WP8AdMobController_t117 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t115 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t115 *)IsInst(L_3, WP8ADBanner_t115_il2cpp_TypeInfo_var));
		WP8ADBanner_t115 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t115 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdClosed_m648(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdLeftApplication(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t115_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdLeftApplication_m696 (WP8AdMobController_t117 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		WP8ADBanner_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(157);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t115 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t115 *)IsInst(L_3, WP8ADBanner_t115_il2cpp_TypeInfo_var));
		WP8ADBanner_t115 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t115 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdLeftApplication_m649(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdLoaded(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdLoaded_m697 (WP8AdMobController_t117 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLoaded_11);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral149);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdFailedToLoad(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdFailedToLoad_m698 (WP8AdMobController_t117 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral204);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdOpened(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdOpened_m699 (WP8AdMobController_t117 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialOpened_13);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral150);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdClosed(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdClosed_m700 (WP8AdMobController_t117 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialClosed_14);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral151);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdLeftApplication(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdLeftApplication_m701 (WP8AdMobController_t117 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral205);
		return;
	}
}
// System.Void WP8AdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void WP8AdMobController_OnInAppPurchaseRequested_m702 (WP8AdMobController_t117 * __this, String_t* ___productId, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = (__this->____OnAdInAppRequest_16);
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		String_t* L_2 = ___productId;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral154, L_2);
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialLoaded>m__16()
extern "C" void WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m703 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialFailedLoading>m__17()
extern "C" void WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m704 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialOpened>m__18()
extern "C" void WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m705 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialClosed>m__19()
extern "C" void WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m706 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialLeftApplication>m__1A()
extern "C" void WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m707 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnAdInAppRequest>m__1B(System.String)
extern "C" void WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m708 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// AndroidAdMobController
#include "AssemblyU2DCSharp_AndroidAdMobControllerMethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.Int32,AndroidADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,AndroidADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// AndroidADBanner
#include "AssemblyU2DCSharp_AndroidADBanner.h"
// System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,AndroidADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,AndroidADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5MethodDeclarations.h"
// AN_GoogleAdProxy
#include "AssemblyU2DCSharp_AN_GoogleAdProxyMethodDeclarations.h"
// AndroidADBanner
#include "AssemblyU2DCSharp_AndroidADBannerMethodDeclarations.h"


// System.Void AndroidAdMobController::.ctor()
extern TypeInfo* AndroidAdMobController_t120_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t103_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t104_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t121_il2cpp_TypeInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m756_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m757_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m758_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m759_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m760_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m761_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3174_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3221_MethodInfo_var;
extern "C" void AndroidAdMobController__ctor_m709 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AndroidAdMobController_t120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		Action_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Action_1_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		SA_Singleton_1_t121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m756_MethodInfo_var = il2cpp_codegen_method_info_from_index(143);
		AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m757_MethodInfo_var = il2cpp_codegen_method_info_from_index(144);
		AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m758_MethodInfo_var = il2cpp_codegen_method_info_from_index(145);
		AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m759_MethodInfo_var = il2cpp_codegen_method_info_from_index(146);
		AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m760_MethodInfo_var = il2cpp_codegen_method_info_from_index(147);
		AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m761_MethodInfo_var = il2cpp_codegen_method_info_from_index(148);
		Action_1__ctor_m3174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		SA_Singleton_1__ctor_m3221_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483797);
		s_Il2CppMethodIntialized = true;
	}
	AndroidAdMobController_t120 * G_B2_0 = {0};
	AndroidAdMobController_t120 * G_B1_0 = {0};
	AndroidAdMobController_t120 * G_B4_0 = {0};
	AndroidAdMobController_t120 * G_B3_0 = {0};
	AndroidAdMobController_t120 * G_B6_0 = {0};
	AndroidAdMobController_t120 * G_B5_0 = {0};
	AndroidAdMobController_t120 * G_B8_0 = {0};
	AndroidAdMobController_t120 * G_B7_0 = {0};
	AndroidAdMobController_t120 * G_B10_0 = {0};
	AndroidAdMobController_t120 * G_B9_0 = {0};
	AndroidAdMobController_t120 * G_B12_0 = {0};
	AndroidAdMobController_t120 * G_B11_0 = {0};
	{
		Action_t103 * L_0 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m756_MethodInfo_var };
		Action_t103 * L_2 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_2, NULL, L_1, /*hidden argument*/NULL);
		((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_t103 * L_3 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnInterstitialLoaded_11 = L_3;
		Action_t103 * L_4 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		IntPtr_t L_5 = { (void*)AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m757_MethodInfo_var };
		Action_t103 * L_6 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_6, NULL, L_5, /*hidden argument*/NULL);
		((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_t103 * L_7 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnInterstitialFailedLoading_12 = L_7;
		Action_t103 * L_8 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_9 = { (void*)AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m758_MethodInfo_var };
		Action_t103 * L_10 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_10, NULL, L_9, /*hidden argument*/NULL);
		((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_005f:
	{
		Action_t103 * L_11 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnInterstitialOpened_13 = L_11;
		Action_t103 * L_12 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0082;
		}
	}
	{
		IntPtr_t L_13 = { (void*)AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m759_MethodInfo_var };
		Action_t103 * L_14 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_14, NULL, L_13, /*hidden argument*/NULL);
		((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0082:
	{
		Action_t103 * L_15 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnInterstitialClosed_14 = L_15;
		Action_t103 * L_16 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_17 = { (void*)AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m760_MethodInfo_var };
		Action_t103 * L_18 = (Action_t103 *)il2cpp_codegen_object_new (Action_t103_il2cpp_TypeInfo_var);
		Action__ctor_m3164(L_18, NULL, L_17, /*hidden argument*/NULL);
		((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00a5:
	{
		Action_t103 * L_19 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnInterstitialLeftApplication_15 = L_19;
		Action_1_t104 * L_20 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		G_B11_0 = __this;
		if (L_20)
		{
			G_B12_0 = __this;
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m761_MethodInfo_var };
		Action_1_t104 * L_22 = (Action_1_t104 *)il2cpp_codegen_object_new (Action_1_t104_il2cpp_TypeInfo_var);
		Action_1__ctor_m3174(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3174_MethodInfo_var);
		((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22 = L_22;
		G_B12_0 = G_B11_0;
	}

IL_00c8:
	{
		Action_1_t104 * L_23 = ((AndroidAdMobController_t120_StaticFields*)AndroidAdMobController_t120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		NullCheck(G_B12_0);
		G_B12_0->____OnAdInAppRequest_16 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t121_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3221(__this, /*hidden argument*/SA_Singleton_1__ctor_m3221_MethodInfo_var);
		return;
	}
}
// System.Void AndroidAdMobController::Awake()
extern "C" void AndroidAdMobController_Awake_m710 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		GameObject_t312 * L_0 = Component_get_gameObject_m3162(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3193(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::Init(System.String)
extern TypeInfo* Dictionary_2_t119_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3222_MethodInfo_var;
extern "C" void AndroidAdMobController_Init_m711 (AndroidAdMobController_t120 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		Dictionary_2__ctor_m3222_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483798);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral199, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		__this->____IsInited_7 = 1;
		String_t* L_1 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_1;
		String_t* L_2 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_2;
		Dictionary_2_t119 * L_3 = (Dictionary_2_t119 *)il2cpp_codegen_object_new (Dictionary_2_t119_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3222(L_3, /*hidden argument*/Dictionary_2__ctor_m3222_MethodInfo_var);
		__this->____banners_8 = L_3;
		String_t* L_4 = ___ad_unit_id;
		AN_GoogleAdProxy_InitMobileAd_m764(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::Init(System.String,System.String)
extern "C" void AndroidAdMobController_Init_m712 (AndroidAdMobController_t120 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral199, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___banners_unit_id;
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void AndroidAdMobController::Init(System.String) */, __this, L_1);
		String_t* L_2 = ___interstisial_unit_id;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void AndroidAdMobController::SetInterstisialsUnitID(System.String) */, __this, L_2);
		return;
	}
}
// System.Void AndroidAdMobController::SetBannersUnitID(System.String)
extern "C" void AndroidAdMobController_SetBannersUnitID_m713 (AndroidAdMobController_t120 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_0;
		String_t* L_1 = ___ad_unit_id;
		AN_GoogleAdProxy_ChangeBannersUnitID_m765(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::SetInterstisialsUnitID(System.String)
extern "C" void AndroidAdMobController_SetInterstisialsUnitID_m714 (AndroidAdMobController_t120 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_0;
		String_t* L_1 = ___ad_unit_id;
		AN_GoogleAdProxy_ChangeInterstisialsUnitID_m766(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::AddKeyword(System.String)
extern "C" void AndroidAdMobController_AddKeyword_m715 (AndroidAdMobController_t120 * __this, String_t* ___keyword, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral184, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___keyword;
		AN_GoogleAdProxy_AddKeyword_m779(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void AndroidAdMobController_SetBirthday_m716 (AndroidAdMobController_t120 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral185, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___year;
		int32_t L_2 = ___month;
		int32_t L_3 = ___day;
		AN_GoogleAdProxy_SetBirthday_m780(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void AndroidAdMobController_TagForChildDirectedTreatment_m717 (AndroidAdMobController_t120 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral186, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		bool L_1 = ___tagForChildDirectedTreatment;
		AN_GoogleAdProxy_TagForChildDirectedTreatment_m781(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::AddTestDevice(System.String)
extern "C" void AndroidAdMobController_AddTestDevice_m718 (AndroidAdMobController_t120 * __this, String_t* ___deviceId, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___deviceId;
		AN_GoogleAdProxy_AddTestDevice_m782(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::AddTestDevices(System.String[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_AddTestDevices_m719 (AndroidAdMobController_t120 * __this, StringU5BU5D_t45* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		StringU5BU5D_t45* L_1 = ___ids;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		StringU5BU5D_t45* L_2 = ___ids;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Join_m3195(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_2, /*hidden argument*/NULL);
		AN_GoogleAdProxy_AddTestDevices_m783(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::SetGender(GoogleGender)
extern "C" void AndroidAdMobController_SetGender_m720 (AndroidAdMobController_t120 * __this, int32_t ___gender, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral188, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___gender;
		AN_GoogleAdProxy_SetGender_m784(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner AndroidAdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t179_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern "C" Object_t * AndroidAdMobController_CreateAdBanner_m721 (AndroidAdMobController_t120 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t175 * V_0 = {0};
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___anchor;
		int32_t L_2 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t179_il2cpp_TypeInfo_var);
		int32_t L_3 = GADBannerIdFactory_get_nextId_m1029(NULL /*static, unused*/, /*hidden argument*/NULL);
		AndroidADBanner_t175 * L_4 = (AndroidADBanner_t175 *)il2cpp_codegen_object_new (AndroidADBanner_t175_il2cpp_TypeInfo_var);
		AndroidADBanner__ctor_m980(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Dictionary_2_t119 * L_5 = (__this->____banners_8);
		AndroidADBanner_t175 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, L_6);
		AndroidADBanner_t175 * L_8 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, AndroidADBanner_t175 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::Add(!0,!1) */, L_5, L_7, L_8);
		AndroidADBanner_t175 * L_9 = V_0;
		return L_9;
	}
}
// GoogleMobileAdBanner AndroidAdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t179_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern "C" Object_t * AndroidAdMobController_CreateAdBanner_m722 (AndroidAdMobController_t120 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t175 * V_0 = {0};
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral181, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t179_il2cpp_TypeInfo_var);
		int32_t L_4 = GADBannerIdFactory_get_nextId_m1029(NULL /*static, unused*/, /*hidden argument*/NULL);
		AndroidADBanner_t175 * L_5 = (AndroidADBanner_t175 *)il2cpp_codegen_object_new (AndroidADBanner_t175_il2cpp_TypeInfo_var);
		AndroidADBanner__ctor_m981(L_5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Dictionary_2_t119 * L_6 = (__this->____banners_8);
		AndroidADBanner_t175 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, L_7);
		AndroidADBanner_t175 * L_9 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, AndroidADBanner_t175 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::Add(!0,!1) */, L_6, L_8, L_9);
		AndroidADBanner_t175 * L_10 = V_0;
		return L_10;
	}
}
// System.Void AndroidAdMobController::DestroyBanner(System.Int32)
extern "C" void AndroidAdMobController_DestroyBanner_m723 (AndroidAdMobController_t120 * __this, int32_t ___id, const MethodInfo* method)
{
	AndroidADBanner_t175 * V_0 = {0};
	{
		Dictionary_2_t119 * L_0 = (__this->____banners_8);
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t119 * L_1 = (__this->____banners_8);
		int32_t L_2 = ___id;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::ContainsKey(!0) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t119 * L_4 = (__this->____banners_8);
		int32_t L_5 = ___id;
		NullCheck(L_4);
		AndroidADBanner_t175 * L_6 = (AndroidADBanner_t175 *)VirtFuncInvoker1< AndroidADBanner_t175 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::get_Item(!0) */, L_4, L_5);
		V_0 = L_6;
		AndroidADBanner_t175 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean AndroidADBanner::get_IsLoaded() */, L_7);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t119 * L_9 = (__this->____banners_8);
		int32_t L_10 = ___id;
		NullCheck(L_9);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::Remove(!0) */, L_9, L_10);
		int32_t L_11 = ___id;
		AN_GoogleAdProxy_DestroyBanner_m774(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_004c:
	{
		AndroidADBanner_t175 * L_12 = V_0;
		NullCheck(L_12);
		AndroidADBanner_DestroyAfterLoad_m987(L_12, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void AndroidAdMobController::StartInterstitialAd()
extern "C" void AndroidAdMobController_StartInterstitialAd_m724 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral189, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AN_GoogleAdProxy_StartInterstitialAd_m775(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::LoadInterstitialAd()
extern "C" void AndroidAdMobController_LoadInterstitialAd_m725 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral190, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AN_GoogleAdProxy_LoadInterstitialAd_m776(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::ShowInterstitialAd()
extern "C" void AndroidAdMobController_ShowInterstitialAd_m726 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m3183(NULL /*static, unused*/, (String_t*) &_stringLiteral191, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AN_GoogleAdProxy_ShowInterstitialAd_m777(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void AndroidAdMobController_RecordInAppResolution_m727 (AndroidAdMobController_t120 * __this, int32_t ___resolution, const MethodInfo* method)
{
	{
		int32_t L_0 = ___resolution;
		AN_GoogleAdProxy_RecordInAppResolution_m778(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * AndroidAdMobController_GetBanner_m728 (AndroidAdMobController_t120 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t119 * L_0 = (__this->____banners_8);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t119 * L_3 = (__this->____banners_8);
		int32_t L_4 = ___id;
		NullCheck(L_3);
		AndroidADBanner_t175 * L_5 = (AndroidADBanner_t175 *)VirtFuncInvoker1< AndroidADBanner_t175 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m222(NULL /*static, unused*/, (String_t*) &_stringLiteral201, L_6, (String_t*) &_stringLiteral202, /*hidden argument*/NULL);
		Debug_LogWarning_m3183(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAdBanner> AndroidAdMobController::get_banners()
extern TypeInfo* List_1_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t632_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3196_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3223_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3224_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3225_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3226_MethodInfo_var;
extern "C" List_1_t581 * AndroidAdMobController_get_banners_m729 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		Enumerator_t632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1__ctor_m3196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		Dictionary_2_GetEnumerator_m3223_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483799);
		Enumerator_get_Current_m3224_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483800);
		KeyValuePair_2_get_Value_m3225_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483801);
		Enumerator_MoveNext_m3226_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483802);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t581 * V_0 = {0};
	KeyValuePair_2_t631  V_1 = {0};
	Enumerator_t632  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t581 * L_0 = (List_1_t581 *)il2cpp_codegen_object_new (List_1_t581_il2cpp_TypeInfo_var);
		List_1__ctor_m3196(L_0, /*hidden argument*/List_1__ctor_m3196_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t119 * L_1 = (__this->____banners_8);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t581 * L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t119 * L_3 = (__this->____banners_8);
		NullCheck(L_3);
		Enumerator_t632  L_4 = Dictionary_2_GetEnumerator_m3223(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3223_MethodInfo_var);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0024:
		{
			KeyValuePair_2_t631  L_5 = Enumerator_get_Current_m3224((&V_2), /*hidden argument*/Enumerator_get_Current_m3224_MethodInfo_var);
			V_1 = L_5;
			List_1_t581 * L_6 = V_0;
			AndroidADBanner_t175 * L_7 = KeyValuePair_2_get_Value_m3225((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3225_MethodInfo_var);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(!0) */, L_6, L_7);
		}

IL_0039:
		{
			bool L_8 = Enumerator_MoveNext_m3226((&V_2), /*hidden argument*/Enumerator_MoveNext_m3226_MethodInfo_var);
			if (L_8)
			{
				goto IL_0024;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t632  L_9 = V_2;
		Enumerator_t632  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t632_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0056:
	{
		List_1_t581 * L_12 = V_0;
		return L_12;
	}
}
// System.Boolean AndroidAdMobController::get_IsInited()
extern "C" bool AndroidAdMobController_get_IsInited_m730 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		return L_0;
	}
}
// System.String AndroidAdMobController::get_BannersUunitId()
extern "C" String_t* AndroidAdMobController_get_BannersUunitId_m731 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____BannersUunitId_9);
		return L_0;
	}
}
// System.String AndroidAdMobController::get_InterstisialUnitId()
extern "C" String_t* AndroidAdMobController_get_InterstisialUnitId_m732 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____InterstisialUnitId_10);
		return L_0;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialLoaded()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialLoaded_m733 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLoaded_11);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialLoaded_m734 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialLoaded_11 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialFailedLoading_m735 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialFailedLoading_m736 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialFailedLoading_12 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialOpened()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialOpened_m737 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialOpened_13);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialOpened_m738 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialOpened_13 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialClosed()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialClosed_m739 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialClosed_14);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialClosed_m740 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialClosed_14 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialLeftApplication_m741 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialLeftApplication_m742 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = ___value;
		__this->____OnInterstitialLeftApplication_15 = L_0;
		return;
	}
}
// System.Action`1<System.String> AndroidAdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t104 * AndroidAdMobController_get_OnAdInAppRequest_m743 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = (__this->____OnAdInAppRequest_16);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void AndroidAdMobController_set_OnAdInAppRequest_m744 (AndroidAdMobController_t120 * __this, Action_1_t104 * ___value, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = ___value;
		__this->____OnAdInAppRequest_16 = L_0;
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdLoaded(System.String)
extern TypeInfo* CharU5BU5D_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdLoaded_m745 (AndroidAdMobController_t120 * __this, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t45* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	AndroidADBanner_t175 * V_4 = {0};
	{
		String_t* L_0 = ___data;
		CharU5BU5D_t608* L_1 = ((CharU5BU5D_t608*)SZArrayNew(CharU5BU5D_t608_il2cpp_TypeInfo_var, 1));
		NullCheck((String_t*) &_stringLiteral203);
		uint16_t L_2 = String_get_Chars_m173((String_t*) &_stringLiteral203, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)L_2;
		NullCheck(L_0);
		StringU5BU5D_t45* L_3 = String_Split_m3118(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t45* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t45* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		int32_t L_9 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t45* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		int32_t L_11 = 2;
		int32_t L_12 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = V_1;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_13);
		V_4 = ((AndroidADBanner_t175 *)IsInst(L_14, AndroidADBanner_t175_il2cpp_TypeInfo_var));
		AndroidADBanner_t175 * L_15 = V_4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		AndroidADBanner_t175 * L_16 = V_4;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		AndroidADBanner_SetDimentions_m988(L_16, L_17, L_18, /*hidden argument*/NULL);
		AndroidADBanner_t175 * L_19 = V_4;
		NullCheck(L_19);
		AndroidADBanner_OnBannerAdLoaded_m1009(L_19, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdFailedToLoad(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdFailedToLoad_m746 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t175 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t175 *)IsInst(L_3, AndroidADBanner_t175_il2cpp_TypeInfo_var));
		AndroidADBanner_t175 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t175 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdFailedToLoad_m1010(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdOpened(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdOpened_m747 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t175 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t175 *)IsInst(L_3, AndroidADBanner_t175_il2cpp_TypeInfo_var));
		AndroidADBanner_t175 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t175 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdOpened_m1011(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdClosed(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdClosed_m748 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t175 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t175 *)IsInst(L_3, AndroidADBanner_t175_il2cpp_TypeInfo_var));
		AndroidADBanner_t175 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t175 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdClosed_m1012(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdLeftApplication(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdLeftApplication_m749 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t175 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t175 *)IsInst(L_3, AndroidADBanner_t175_il2cpp_TypeInfo_var));
		AndroidADBanner_t175 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t175 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdLeftApplication_m1013(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdLoaded()
extern "C" void AndroidAdMobController_OnInterstitialAdLoaded_m750 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLoaded_11);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral149);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdFailedToLoad()
extern "C" void AndroidAdMobController_OnInterstitialAdFailedToLoad_m751 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral204);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdOpened()
extern "C" void AndroidAdMobController_OnInterstitialAdOpened_m752 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialOpened_13);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral150);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdClosed()
extern "C" void AndroidAdMobController_OnInterstitialAdClosed_m753 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialClosed_14);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral151);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdLeftApplication()
extern "C" void AndroidAdMobController_OnInterstitialAdLeftApplication_m754 (AndroidAdMobController_t120 * __this, const MethodInfo* method)
{
	{
		Action_t103 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral205);
		return;
	}
}
// System.Void AndroidAdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void AndroidAdMobController_OnInAppPurchaseRequested_m755 (AndroidAdMobController_t120 * __this, String_t* ___productId, const MethodInfo* method)
{
	{
		Action_1_t104 * L_0 = (__this->____OnAdInAppRequest_16);
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		String_t* L_2 = ___productId;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral154, L_2);
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialLoaded>m__1C()
extern "C" void AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m756 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialFailedLoading>m__1D()
extern "C" void AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m757 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialOpened>m__1E()
extern "C" void AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m758 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialClosed>m__1F()
extern "C" void AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m759 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialLeftApplication>m__20()
extern "C" void AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m760 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnAdInAppRequest>m__21(System.String)
extern "C" void AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m761 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
{
	{
		return;
	}
}
// AN_GoogleAdProxy
#include "AssemblyU2DCSharp_AN_GoogleAdProxy.h"
#ifndef _MSC_VER
#else
#endif

// AN_ProxyPool
#include "AssemblyU2DCSharp_AN_ProxyPoolMethodDeclarations.h"


// System.Void AN_GoogleAdProxy::.ctor()
extern "C" void AN_GoogleAdProxy__ctor_m762 (AN_GoogleAdProxy_t122 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAdProxy_CallActivityFunction_m763 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::InitMobileAd(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_InitMobileAd_m764 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___id;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral209, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ChangeBannersUnitID(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ChangeBannersUnitID_m765 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___id;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral210, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ChangeInterstisialsUnitID(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ChangeInterstisialsUnitID_m766 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___id;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral211, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::CreateBannerAd(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_CreateBannerAd_m767 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m164((&___gravity), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___size), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral212, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::CreateBannerAdPos(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_CreateBannerAdPos_m768 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Int32_ToString_m164((&___x), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___y), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___size), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral213, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetBannerPosition(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetBannerPosition_m769 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___bannerId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m164((&___gravity), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___bannerId), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral214, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetBannerPosition(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetBannerPosition_m770 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___bannerId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m164((&___x), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___y), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___bannerId), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral214, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::HideAd(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_HideAd_m771 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral215, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ShowAd(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ShowAd_m772 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral216, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::RefreshAd(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_RefreshAd_m773 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral217, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::DestroyBanner(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_DestroyBanner_m774 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral218, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::StartInterstitialAd()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_StartInterstitialAd_m775 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral219, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::LoadInterstitialAd()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_LoadInterstitialAd_m776 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral220, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ShowInterstitialAd()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ShowInterstitialAd_m777 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral221, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::RecordInAppResolution(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_RecordInAppResolution_m778 (Object_t * __this /* static, unused */, int32_t ___res, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___res), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral222, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::AddKeyword(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_AddKeyword_m779 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___keyword;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral223, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetBirthday(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetBirthday_m780 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m164((&___year), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___month), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___day), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral224, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::TagForChildDirectedTreatment(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_TagForChildDirectedTreatment_m781 (Object_t * __this /* static, unused */, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___tagForChildDirectedTreatment;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t582* L_1 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral226);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral226;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral225, L_1, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0023:
	{
		ObjectU5BU5D_t582* L_2 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral227);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)(String_t*) &_stringLiteral227;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral225, L_2, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void AN_GoogleAdProxy::AddTestDevice(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_AddTestDevice_m782 (Object_t * __this /* static, unused */, String_t* ___deviceId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___deviceId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral228, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::AddTestDevices(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_AddTestDevices_m783 (Object_t * __this /* static, unused */, String_t* ___cvsDeviceIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___cvsDeviceIds;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral229, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetGender(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetGender_m784 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___gender), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m763(NULL /*static, unused*/, (String_t*) &_stringLiteral230, L_0, /*hidden argument*/NULL);
		return;
	}
}
// AN_ProxyPool
#include "AssemblyU2DCSharp_AN_ProxyPool.h"
#ifndef _MSC_VER
#else
#endif



// System.Void AN_ProxyPool::.ctor()
extern "C" void AN_ProxyPool__ctor_m785 (AN_ProxyPool_t123 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ProxyPool::CallStatic(System.String,System.String,System.Object[])
extern "C" void AN_ProxyPool_CallStatic_m786 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		return;
	}
}
// AN_BillingProxy
#include "AssemblyU2DCSharp_AN_BillingProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_BillingProxy
#include "AssemblyU2DCSharp_AN_BillingProxyMethodDeclarations.h"



// System.Void AN_BillingProxy::.ctor()
extern "C" void AN_BillingProxy__ctor_m787 (AN_BillingProxy_t124 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_BillingProxy_CallActivityFunction_m788 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral231, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Connect(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Connect_m789 (Object_t * __this /* static, unused */, String_t* ___ids, String_t* ___base64EncodedPublicKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___base64EncodedPublicKey;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m788(NULL /*static, unused*/, (String_t*) &_stringLiteral232, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::RetrieveProducDetails()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_RetrieveProducDetails_m790 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BillingProxy_CallActivityFunction_m788(NULL /*static, unused*/, (String_t*) &_stringLiteral233, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Consume(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Consume_m791 (Object_t * __this /* static, unused */, String_t* ___SKU, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_BillingProxy_CallActivityFunction_m788(NULL /*static, unused*/, (String_t*) &_stringLiteral234, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Purchase(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Purchase_m792 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___developerPayload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m788(NULL /*static, unused*/, (String_t*) &_stringLiteral235, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Subscribe(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Subscribe_m793 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___developerPayload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m788(NULL /*static, unused*/, (String_t*) &_stringLiteral236, L_2, /*hidden argument*/NULL);
		return;
	}
}
// AN_FBProxy
#include "AssemblyU2DCSharp_AN_FBProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_FBProxy
#include "AssemblyU2DCSharp_AN_FBProxyMethodDeclarations.h"



// System.Void AN_FBProxy::.ctor()
extern "C" void AN_FBProxy__ctor_m794 (AN_FBProxy_t125 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_FBProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_FBProxy_CallActivityFunction_m795 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral237, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_FBProxy::SendTrunRequest(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_FBProxy_SendTrunRequest_m796 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___messgae, String_t* ___data, String_t* ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___title;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___messgae;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___data;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___to;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_FBProxy_CallActivityFunction_m795(NULL /*static, unused*/, (String_t*) &_stringLiteral238, L_6, /*hidden argument*/NULL);
		return;
	}
}
// AN_GMSGeneralProxy
#include "AssemblyU2DCSharp_AN_GMSGeneralProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_GMSGeneralProxy
#include "AssemblyU2DCSharp_AN_GMSGeneralProxyMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"


// System.Void AN_GMSGeneralProxy::.ctor()
extern "C" void AN_GMSGeneralProxy__ctor_m797 (AN_GMSGeneralProxy_t126 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGeneralProxy_CallActivityFunction_m798 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral239, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadGoogleAccountNames()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadGoogleAccountNames_m799 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral240, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::clearDefaultAccount()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_clearDefaultAccount_m800 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral241, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceInit(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceInit_m801 (Object_t * __this /* static, unused */, String_t* ___scopes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___scopes;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral242, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::setConnectionParams(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_setConnectionParams_m802 (Object_t * __this /* static, unused */, bool ___showPopup, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Boolean_ToString_m3227((&___showPopup), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceConnect()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m803 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral244, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceConnect(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m804 (Object_t * __this /* static, unused */, String_t* ___accountName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___accountName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral244, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadToken(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadToken_m805 (Object_t * __this /* static, unused */, String_t* ___accountName, String_t* ___scope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___accountName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___scope;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral245, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadToken()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadToken_m806 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral245, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::invalidateToken(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_invalidateToken_m807 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___token;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral246, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceDisconnect()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceDisconnect_m808 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral247, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showAchievementsUI()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showAchievementsUI_m809 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral248, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoardsUI()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoardsUI_m810 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral249, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadConnectedPlayers()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadConnectedPlayers_m811 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral250, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoard(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoard_m812 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral251, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoardById(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoardById_m813 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral252, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::submitScore(System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_submitScore_m814 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, int64_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___leaderboardName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int64_ToString_m3228((&___score), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral253, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::submitScoreById(System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_submitScoreById_m815 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int64_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int64_ToString_m3228((&___score), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral254, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadLeaderBoards()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadLeaderBoards_m816 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral255, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::UpdatePlayerScore(System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_UpdatePlayerScore_m817 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral256, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadPlayerCenteredScores(System.String,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadPlayerCenteredScores_m818 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m164((&___maxResults), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral257, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadTopScores(System.String,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadTopScores_m819 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m164((&___maxResults), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral258, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::reportAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_reportAchievement_m820 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral259, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::reportAchievementById(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_reportAchievementById_m821 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral260, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::revealAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_revealAchievement_m822 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral261, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::revealAchievementById(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_revealAchievementById_m823 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral262, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::incrementAchievement(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_incrementAchievement_m824 (Object_t * __this /* static, unused */, String_t* ___achievementName, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral263, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::incrementAchievementById(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_incrementAchievementById_m825 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral264, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::setStepsImmediate(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_setStepsImmediate_m826 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral265, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadAchievements()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadAchievements_m827 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral266, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::resetAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_resetAchievement_m828 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral267, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResetAllAchievements()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResetAllAchievements_m829 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral268, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::resetLeaderBoard(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_resetLeaderBoard_m830 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral269, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::OnApplicationPause(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_OnApplicationPause_m831 (Object_t * __this /* static, unused */, bool ___isPaused, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		bool L_1 = ___isPaused;
		bool L_2 = L_1;
		Object_t * L_3 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral270, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ShowSavedGamesUI_Bridge(System.String,System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ShowSavedGamesUI_Bridge_m832 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___maxNumberOfSavedGamesToShow, bool ___allowAddButton, bool ___allowDelete, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___title;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		int32_t L_3 = ___maxNumberOfSavedGamesToShow;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_2;
		bool L_7 = ___allowAddButton;
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t582* L_10 = L_6;
		bool L_11 = ___allowDelete;
		bool L_12 = L_11;
		Object_t * L_13 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_13;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral271, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::CreateNewSpanshot_Bridge(System.String,System.String,System.String,System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t633_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_CreateNewSpanshot_Bridge_m833 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___ImageData, String_t* ___Data, int64_t ___PlayedTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int64_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___description;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___ImageData;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___Data;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		int64_t L_9 = ___PlayedTime;
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(Int64_t633_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral272, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResolveSnapshotsConflict_Bridge(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResolveSnapshotsConflict_Bridge_m834 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___index;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral273, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::LoadSpanshots_Bridge()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_LoadSpanshots_Bridge_m835 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral274, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::OpenSpanshotByName_Bridge(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_OpenSpanshotByName_Bridge_m836 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral275, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::DeleteSpanshotByName_Bridge(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_DeleteSpanshotByName_Bridge_m837 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral276, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ListStates()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ListStates_m838 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral277, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::UpdateState(System.Int32,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_UpdateState_m839 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___data;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral278, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResolveState(System.Int32,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResolveState_m840 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___resolvedData, String_t* ___resolvedVersion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___resolvedData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___resolvedVersion;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral279, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::DeleteState(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_DeleteState_m841 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral280, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::LoadState(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_LoadState_m842 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral281, L_0, /*hidden argument*/NULL);
		return;
	}
}
// AN_GMSGiftsProxy
#include "AssemblyU2DCSharp_AN_GMSGiftsProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_GMSGiftsProxy
#include "AssemblyU2DCSharp_AN_GMSGiftsProxyMethodDeclarations.h"



// System.Void AN_GMSGiftsProxy::.ctor()
extern "C" void AN_GMSGiftsProxy__ctor_m843 (AN_GMSGiftsProxy_t127 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGiftsProxy_CallActivityFunction_m844 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral239, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::sendGiftRequest(System.Int32,System.String,System.Int32,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_sendGiftRequest_m845 (Object_t * __this /* static, unused */, int32_t ___type, String_t* ___playload, int32_t ___requestLifetimeDays, String_t* ___icon, String_t* ___description, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = Int32_ToString_m164((&___type), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___playload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___requestLifetimeDays), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___icon;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		String_t* L_9 = ___description;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_GMSGiftsProxy_CallActivityFunction_m844(NULL /*static, unused*/, (String_t*) &_stringLiteral282, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::showRequestAccepDialog()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_showRequestAccepDialog_m846 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m844(NULL /*static, unused*/, (String_t*) &_stringLiteral283, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::acceptRequests(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_acceptRequests_m847 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGiftsProxy_CallActivityFunction_m844(NULL /*static, unused*/, (String_t*) &_stringLiteral284, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::dismissRequest(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_dismissRequest_m848 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGiftsProxy_CallActivityFunction_m844(NULL /*static, unused*/, (String_t*) &_stringLiteral285, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::leaveRoom()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_leaveRoom_m849 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m844(NULL /*static, unused*/, (String_t*) &_stringLiteral286, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::showInvitationBox()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_showInvitationBox_m850 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m844(NULL /*static, unused*/, (String_t*) &_stringLiteral287, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// AN_GMSInvitationProxy
#include "AssemblyU2DCSharp_AN_GMSInvitationProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_GMSInvitationProxy
#include "AssemblyU2DCSharp_AN_GMSInvitationProxyMethodDeclarations.h"



// System.Void AN_GMSInvitationProxy::.ctor()
extern "C" void AN_GMSInvitationProxy__ctor_m851 (AN_GMSInvitationProxy_t128 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSInvitationProxy_CallActivityFunction_m852 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral288, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::registerInvitationListener()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSInvitationProxy_registerInvitationListener_m853 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSInvitationProxy_CallActivityFunction_m852(NULL /*static, unused*/, (String_t*) &_stringLiteral289, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::unregisterInvitationListener()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSInvitationProxy_unregisterInvitationListener_m854 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSInvitationProxy_CallActivityFunction_m852(NULL /*static, unused*/, (String_t*) &_stringLiteral290, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// AN_GMSQuestsEventsProxy
#include "AssemblyU2DCSharp_AN_GMSQuestsEventsProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_GMSQuestsEventsProxy
#include "AssemblyU2DCSharp_AN_GMSQuestsEventsProxyMethodDeclarations.h"



// System.Void AN_GMSQuestsEventsProxy::.ctor()
extern "C" void AN_GMSQuestsEventsProxy__ctor_m855 (AN_GMSQuestsEventsProxy_t129 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSQuestsEventsProxy_CallActivityFunction_m856 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral239, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::sumbitEvent(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_sumbitEvent_m857 (Object_t * __this /* static, unused */, String_t* ___eventId, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___eventId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___count), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m856(NULL /*static, unused*/, (String_t*) &_stringLiteral291, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::loadEvents()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_loadEvents_m858 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSQuestsEventsProxy_CallActivityFunction_m856(NULL /*static, unused*/, (String_t*) &_stringLiteral292, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::showSelectedQuests(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_showSelectedQuests_m859 (Object_t * __this /* static, unused */, String_t* ___questSelectors, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___questSelectors;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m856(NULL /*static, unused*/, (String_t*) &_stringLiteral293, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::acceptQuest(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_acceptQuest_m860 (Object_t * __this /* static, unused */, String_t* ___questId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___questId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m856(NULL /*static, unused*/, (String_t*) &_stringLiteral294, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::loadQuests(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_loadQuests_m861 (Object_t * __this /* static, unused */, String_t* ___questSelectors, int32_t ___sortOrder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___questSelectors;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___sortOrder), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m856(NULL /*static, unused*/, (String_t*) &_stringLiteral295, L_2, /*hidden argument*/NULL);
		return;
	}
}
// AN_GMSRTMProxy
#include "AssemblyU2DCSharp_AN_GMSRTMProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_GMSRTMProxy
#include "AssemblyU2DCSharp_AN_GMSRTMProxyMethodDeclarations.h"



// System.Void AN_GMSRTMProxy::.ctor()
extern "C" void AN_GMSRTMProxy__ctor_m862 (AN_GMSRTMProxy_t130 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSRTMProxy_CallActivityFunction_m863 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral239, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.Int32,System.Int32,System.String[])
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m864 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___pIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_4;
		StringU5BU5D_t45* L_9 = ___pIds;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_9;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral296, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.String[])
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m865 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___pIds, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = ___pIds;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral296, (ObjectU5BU5D_t582*)(ObjectU5BU5D_t582*)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::sendDataToAll(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_sendDataToAll_m866 (Object_t * __this /* static, unused */, String_t* ___data, int32_t ___sendType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___sendType), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral297, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::sendDataToPlayers(System.String,System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_sendDataToPlayers_m867 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___players, int32_t ___sendType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___players;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___sendType), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral297, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::ShowWaitingRoomIntent()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_ShowWaitingRoomIntent_m868 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral298, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::InvitePlayers(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_InvitePlayers_m869 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m164((&___minPlayers), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___maxPlayers), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral299, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_SetVariant(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_SetVariant_m870 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral300, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_SetExclusiveBitMask(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_SetExclusiveBitMask_m871 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral301, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_AcceptInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_AcceptInvitation_m872 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral302, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_DeclineInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_DeclineInvitation_m873 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral303, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_DismissInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_DismissInvitation_m874 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral304, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_AcceptInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_AcceptInvitation_m875 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral305, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_DeclineInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_DeclineInvitation_m876 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral306, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_DismissInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_DismissInvitation_m877 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral307, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_CreateMatch(System.Int32,System.Int32,System.String[])
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_CreateMatch_m878 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___playersIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_4;
		StringU5BU5D_t45* L_9 = ___playersIds;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_9;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral308, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::CancelMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_CancelMatch_m879 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral309, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::DismissMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_DismissMatch_m880 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral310, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_FinishMatch(System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_FinishMatch_m881 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t496* ___results, Int32U5BU5D_t496* ___placing, Int32U5BU5D_t496* ___versions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___matchData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		StringU5BU5D_t45* L_5 = ___pIds;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		Int32U5BU5D_t496* L_7 = ___results;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		Int32U5BU5D_t496* L_9 = ___placing;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t582* L_10 = L_8;
		Int32U5BU5D_t496* L_11 = ___versions;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral311, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LeaveMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatch_m882 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral312, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LeaveMatchDuringTurn(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatchDuringTurn_m883 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___pendingParticipantId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___pendingParticipantId;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral313, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadMatchInfo(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchInfo_m884 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral314, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadMatchesInfo(System.Int32,System.Int32[])
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchesInfo_m885 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, Int32U5BU5D_t496* ___matchTurnStatuses, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		int32_t L_1 = ___invitationSortOrder;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_0;
		Int32U5BU5D_t496* L_5 = ___matchTurnStatuses;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral315, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadAllMatchesInfo(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadAllMatchesInfo_m886 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___invitationSortOrder;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral316, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_Rematch(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_Rematch_m887 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral317, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_RegisterMatchUpdateListener()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_RegisterMatchUpdateListener_m888 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral318, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_UnregisterMatchUpdateListener()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_UnregisterMatchUpdateListener_m889 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral319, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_TakeTrun(System.String,System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_TakeTrun_m890 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, String_t* ___pendingParticipantId, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t496* ___results, Int32U5BU5D_t496* ___placing, Int32U5BU5D_t496* ___versions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___matchData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___pendingParticipantId;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		StringU5BU5D_t45* L_7 = ___pIds;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		Int32U5BU5D_t496* L_9 = ___results;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t582* L_10 = L_8;
		Int32U5BU5D_t496* L_11 = ___placing;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		ObjectU5BU5D_t582* L_12 = L_10;
		Int32U5BU5D_t496* L_13 = ___versions;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 6)) = (Object_t *)L_13;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral320, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::StartSelectOpponentsView(System.Int32,System.Int32,System.Boolean)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_StartSelectOpponentsView_m891 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, bool ___allowAutomatch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_4;
		bool L_9 = ___allowAutomatch;
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral321, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_ShowInbox()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_ShowInbox_m892 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral322, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_SetVariant(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_SetVariant_m893 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral323, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_SetExclusiveBitMask(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_SetExclusiveBitMask_m894 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m863(NULL /*static, unused*/, (String_t*) &_stringLiteral324, L_0, /*hidden argument*/NULL);
		return;
	}
}
// AN_GoogleAnalyticsProxy
#include "AssemblyU2DCSharp_AN_GoogleAnalyticsProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_GoogleAnalyticsProxy
#include "AssemblyU2DCSharp_AN_GoogleAnalyticsProxyMethodDeclarations.h"



// System.Void AN_GoogleAnalyticsProxy::.ctor()
extern "C" void AN_GoogleAnalyticsProxy__ctor_m895 (AN_GoogleAnalyticsProxy_t131 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAnalyticsProxy_CallActivityFunction_m896 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral325, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::StartAnalyticsTracking()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_StartAnalyticsTracking_m897 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral326, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetTrackerID(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetTrackerID_m898 (Object_t * __this /* static, unused */, String_t* ___trackingID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___trackingID;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral327, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendView()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendView_m899 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral328, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendView(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendView_m900 (Object_t * __this /* static, unused */, String_t* ___appScreen, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___appScreen;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral328, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m901 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___action;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___label;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral329, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m902 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, String_t* ___key, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___action;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___label;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		String_t* L_9 = ___key;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t582* L_10 = L_8;
		String_t* L_11 = ___val;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral329, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendTiming(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendTiming_m903 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___intervalInMilliseconds, String_t* ___name, String_t* ___label, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___intervalInMilliseconds;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___name;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___label;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral330, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CreateTransaction(System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_CreateTransaction_m904 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___affiliation, String_t* ___revenue, String_t* ___tax, String_t* ___shipping, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___transactionId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___affiliation;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___revenue;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___tax;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		String_t* L_9 = ___shipping;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t582* L_10 = L_8;
		String_t* L_11 = ___currencyCode;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral331, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CreateItem(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_CreateItem_m905 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___name, String_t* ___sku, String_t* ___category, String_t* ___price, String_t* ___quantity, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = ___transactionId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___sku;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___category;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		String_t* L_9 = ___price;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t582* L_10 = L_8;
		String_t* L_11 = ___quantity;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		ObjectU5BU5D_t582* L_12 = L_10;
		String_t* L_13 = ___currencyCode;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 6)) = (Object_t *)L_13;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral332, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetKey(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetKey_m906 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral333, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::ClearKey(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_ClearKey_m907 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral334, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetLogLevel(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetLogLevel_m908 (Object_t * __this /* static, unused */, int32_t ___lvl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___lvl), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetDryRun(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetDryRun_m909 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___mode;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral336, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::EnableAdvertisingIdCollection(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_EnableAdvertisingIdCollection_m910 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___mode;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m896(NULL /*static, unused*/, (String_t*) &_stringLiteral337, L_0, /*hidden argument*/NULL);
		return;
	}
}
// AN_GooglePlayUtilsProxy
#include "AssemblyU2DCSharp_AN_GooglePlayUtilsProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_GooglePlayUtilsProxy
#include "AssemblyU2DCSharp_AN_GooglePlayUtilsProxyMethodDeclarations.h"



// System.Void AN_GooglePlayUtilsProxy::.ctor()
extern "C" void AN_GooglePlayUtilsProxy__ctor_m911 (AN_GooglePlayUtilsProxy_t132 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GooglePlayUtilsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GooglePlayUtilsProxy_CallActivityFunction_m912 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral338, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GooglePlayUtilsProxy::GetAdvertisingId()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_GooglePlayUtilsProxy_GetAdvertisingId_m913 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GooglePlayUtilsProxy_CallActivityFunction_m912(NULL /*static, unused*/, (String_t*) &_stringLiteral339, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// AN_ImmersiveModeProxy
#include "AssemblyU2DCSharp_AN_ImmersiveModeProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_ImmersiveModeProxy
#include "AssemblyU2DCSharp_AN_ImmersiveModeProxyMethodDeclarations.h"



// System.Void AN_ImmersiveModeProxy::.ctor()
extern "C" void AN_ImmersiveModeProxy__ctor_m914 (AN_ImmersiveModeProxy_t133 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ImmersiveModeProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_ImmersiveModeProxy_CallActivityFunction_m915 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral340, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ImmersiveModeProxy::enableImmersiveMode()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_ImmersiveModeProxy_enableImmersiveMode_m916 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_ImmersiveModeProxy_CallActivityFunction_m915(NULL /*static, unused*/, (String_t*) &_stringLiteral341, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// AN_LicenseManagerProxy
#include "AssemblyU2DCSharp_AN_LicenseManagerProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_LicenseManagerProxy
#include "AssemblyU2DCSharp_AN_LicenseManagerProxyMethodDeclarations.h"



// System.Void AN_LicenseManagerProxy::.ctor()
extern "C" void AN_LicenseManagerProxy__ctor_m917 (AN_LicenseManagerProxy_t134 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_LicenseManagerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_LicenseManagerProxy_CallActivityFunction_m918 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral342, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_LicenseManagerProxy::StartLicenseRequest(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_LicenseManagerProxy_StartLicenseRequest_m919 (Object_t * __this /* static, unused */, String_t* ___base64PublicKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___base64PublicKey;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_LicenseManagerProxy_CallActivityFunction_m918(NULL /*static, unused*/, (String_t*) &_stringLiteral343, L_0, /*hidden argument*/NULL);
		return;
	}
}
// AN_PlusButtonProxy
#include "AssemblyU2DCSharp_AN_PlusButtonProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_PlusButtonProxy
#include "AssemblyU2DCSharp_AN_PlusButtonProxyMethodDeclarations.h"



// System.Void AN_PlusButtonProxy::.ctor()
extern "C" void AN_PlusButtonProxy__ctor_m920 (AN_PlusButtonProxy_t135 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_PlusButtonProxy_CallActivityFunction_m921 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral344, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::createPlusButton(System.Int32,System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_createPlusButton_m922 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___url, int32_t ___size, int32_t ___annotation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_0;
		String_t* L_5 = ___url;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		int32_t L_7 = ___size;
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t582* L_10 = L_6;
		int32_t L_11 = ___annotation;
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_13;
		AN_PlusButtonProxy_CallActivityFunction_m921(NULL /*static, unused*/, (String_t*) &_stringLiteral345, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::setGravity(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_setGravity_m923 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		int32_t L_1 = ___gravity;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_0;
		int32_t L_5 = ___id;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		AN_PlusButtonProxy_CallActivityFunction_m921(NULL /*static, unused*/, (String_t*) &_stringLiteral346, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::setPosition(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_setPosition_m924 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___x;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_0;
		int32_t L_5 = ___y;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_4;
		int32_t L_9 = ___id;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		AN_PlusButtonProxy_CallActivityFunction_m921(NULL /*static, unused*/, (String_t*) &_stringLiteral347, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::show(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_show_m925 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m921(NULL /*static, unused*/, (String_t*) &_stringLiteral348, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::hide(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_hide_m926 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m921(NULL /*static, unused*/, (String_t*) &_stringLiteral349, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::refresh(System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_refresh_m927 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m921(NULL /*static, unused*/, (String_t*) &_stringLiteral350, L_0, /*hidden argument*/NULL);
		return;
	}
}
// AN_SocialSharingProxy
#include "AssemblyU2DCSharp_AN_SocialSharingProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_SocialSharingProxy
#include "AssemblyU2DCSharp_AN_SocialSharingProxyMethodDeclarations.h"



// System.Void AN_SocialSharingProxy::.ctor()
extern "C" void AN_SocialSharingProxy__ctor_m928 (AN_SocialSharingProxy_t136 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_SocialSharingProxy_CallActivityFunction_m929 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral351, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartGooglePlusShareIntent(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartGooglePlusShareIntent_m930 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___media, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___text;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___media;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_SocialSharingProxy_CallActivityFunction_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral352, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartShareIntent_m931 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___filters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___filters;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_SocialSharingProxy_CallActivityFunction_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral353, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartShareIntent_m932 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___media, String_t* ___filters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___media;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		String_t* L_9 = ___filters;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_SocialSharingProxy_CallActivityFunction_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral354, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::SendMailWithImage(System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_SendMailWithImage_m933 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, String_t* ___media, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___email;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t582* L_8 = L_6;
		String_t* L_9 = ___media;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_SocialSharingProxy_CallActivityFunction_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral355, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::SendMail(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_SendMail_m934 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t582* L_6 = L_4;
		String_t* L_7 = ___email;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_SocialSharingProxy_CallActivityFunction_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral356, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::InstagramPostImage(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_InstagramPostImage_m935 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___cpation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___cpation;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_SocialSharingProxy_CallActivityFunction_m929(NULL /*static, unused*/, (String_t*) &_stringLiteral357, L_2, /*hidden argument*/NULL);
		return;
	}
}
// AN_TVControllerProxy
#include "AssemblyU2DCSharp_AN_TVControllerProxy.h"
#ifndef _MSC_VER
#else
#endif
// AN_TVControllerProxy
#include "AssemblyU2DCSharp_AN_TVControllerProxyMethodDeclarations.h"



// System.Void AN_TVControllerProxy::.ctor()
extern "C" void AN_TVControllerProxy__ctor_m936 (AN_TVControllerProxy_t137 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_TVControllerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_TVControllerProxy_CallActivityFunction_m937 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral358, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_TVControllerProxy::AN_CheckForATVDevice()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AN_TVControllerProxy_AN_CheckForATVDevice_m938 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_TVControllerProxy_CallActivityFunction_m937(NULL /*static, unused*/, (String_t*) &_stringLiteral359, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// AndroidNative
#include "AssemblyU2DCSharp_AndroidNative.h"
#ifndef _MSC_VER
#else
#endif
// AndroidNative
#include "AssemblyU2DCSharp_AndroidNativeMethodDeclarations.h"



// System.Void AndroidNative::.ctor()
extern "C" void AndroidNative__ctor_m939 (AndroidNative_t138 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterInit(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterInit_m940 (Object_t * __this /* static, unused */, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___consumer_key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___consumer_secret;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral360, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::AuthificateUser()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_AuthificateUser_m941 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral361, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadUserData()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadUserData_m942 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral362, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterPost(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterPost_m943 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___status;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral363, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterPostWithImage(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterPostWithImage_m944 (Object_t * __this /* static, unused */, String_t* ___status, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___status;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___data;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral364, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LogoutFromTwitter()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LogoutFromTwitter_m945 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral365, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::InitCameraAPI(System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_InitCameraAPI_m946 (Object_t * __this /* static, unused */, String_t* ___folderName, int32_t ___maxSize, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___folderName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___maxSize), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t582* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___mode), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral366, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::SaveToGalalry(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_SaveToGalalry_m947 (Object_t * __this /* static, unused */, String_t* ___ImageData, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___ImageData;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t582* L_2 = L_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral367, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetImageFromGallery()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetImageFromGallery_m948 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral368, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetImageFromCamera(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetImageFromCamera_m949 (Object_t * __this /* static, unused */, bool ___bSaveToGallery, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Boolean_ToString_m3227((&___bSaveToGallery), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral369, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::isPackageInstalled(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_isPackageInstalled_m950 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___packagename;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral370, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::runPackage(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_runPackage_m951 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___packagename;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral371, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadAndroidId()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadAndroidId_m952 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral372, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadPackagesList()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadPackagesList_m953 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m964(NULL /*static, unused*/, (String_t*) &_stringLiteral373, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadNetworkInfo()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadNetworkInfo_m954 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m964(NULL /*static, unused*/, (String_t*) &_stringLiteral374, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::OpenSettingsPage(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_OpenSettingsPage_m955 (Object_t * __this /* static, unused */, String_t* ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___action;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallUtility_m964(NULL /*static, unused*/, (String_t*) &_stringLiteral375, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadContacts()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadContacts_m956 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral376, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadPackageInfo()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadPackageInfo_m957 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral377, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetInternalStoragePath()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetInternalStoragePath_m958 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m964(NULL /*static, unused*/, (String_t*) &_stringLiteral378, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetExternalStoragePath()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetExternalStoragePath_m959 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m964(NULL /*static, unused*/, (String_t*) &_stringLiteral379, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadLocaleInfo()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadLocaleInfo_m960 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m964(NULL /*static, unused*/, (String_t*) &_stringLiteral380, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::StartLockTask()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_StartLockTask_m961 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral381, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::StopLockTask()
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_StopLockTask_m962 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral382, ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::OpenAppInStore(System.String)
extern TypeInfo* ObjectU5BU5D_t582_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_OpenAppInStore_m963 (Object_t * __this /* static, unused */, String_t* ___appPackageName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t582* L_0 = ((ObjectU5BU5D_t582*)SZArrayNew(ObjectU5BU5D_t582_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___appPackageName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m965(NULL /*static, unused*/, (String_t*) &_stringLiteral383, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::CallUtility(System.String,System.Object[])
extern "C" void AndroidNative_CallUtility_m964 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral384, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::CallAndroidNativeBridge(System.String,System.Object[])
extern "C" void AndroidNative_CallAndroidNativeBridge_m965 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t582* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t582* L_1 = ___args;
		AN_ProxyPool_CallStatic_m786(NULL /*static, unused*/, (String_t*) &_stringLiteral385, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// SocialPlatfromSettings
#include "AssemblyU2DCSharp_SocialPlatfromSettings.h"
#ifndef _MSC_VER
#else
#endif
// SocialPlatfromSettings
#include "AssemblyU2DCSharp_SocialPlatfromSettingsMethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
struct ScriptableObject_t108;
struct SocialPlatfromSettings_t139;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<SocialPlatfromSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<SocialPlatfromSettings>()
#define ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t139_m3229(__this /* static, unused */, method) (( SocialPlatfromSettings_t139 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3185_gshared)(__this /* static, unused */, method)


// System.Void SocialPlatfromSettings::.ctor()
extern TypeInfo* List_1_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3114_MethodInfo_var;
extern "C" void SocialPlatfromSettings__ctor_m966 (SocialPlatfromSettings_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1__ctor_m3114_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___showPermitions_7 = 1;
		__this->___ShowActions_8 = 1;
		__this->___ShowAPIS_9 = 1;
		List_1_t75 * L_0 = (List_1_t75 *)il2cpp_codegen_object_new (List_1_t75_il2cpp_TypeInfo_var);
		List_1__ctor_m3114(L_0, /*hidden argument*/List_1__ctor_m3114_MethodInfo_var);
		__this->___fb_scopes_list_10 = L_0;
		__this->___TWITTER_CONSUMER_KEY_11 = (String_t*) &_stringLiteral387;
		__this->___TWITTER_CONSUMER_SECRET_12 = (String_t*) &_stringLiteral388;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___TWITTER_ACCESS_TOKEN_13 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___TWITTER_ACCESS_TOKEN_SECRET_14 = L_2;
		__this->___TwitterAPI_16 = 1;
		__this->___NativeSharingAPI_17 = 1;
		__this->___InstagramAPI_18 = 1;
		__this->___EnableImageSharing_19 = 1;
		__this->___KeepManifestClean_20 = 1;
		ScriptableObject__ctor_m3187(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialPlatfromSettings::.cctor()
extern "C" void SocialPlatfromSettings__cctor_m967 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// SocialPlatfromSettings SocialPlatfromSettings::get_Instance()
extern TypeInfo* SocialPlatfromSettings_t139_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t139_m3229_MethodInfo_var;
extern "C" SocialPlatfromSettings_t139 * SocialPlatfromSettings_get_Instance_m968 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialPlatfromSettings_t139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t139_m3229_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483803);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t139_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t139 * L_0 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		bool L_1 = Object_op_Equality_m3188(NULL /*static, unused*/, L_0, (Object_t600 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t600 * L_2 = Resources_Load_m3189(NULL /*static, unused*/, (String_t*) &_stringLiteral386, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t139_il2cpp_TypeInfo_var);
		((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21 = ((SocialPlatfromSettings_t139 *)IsInst(L_2, SocialPlatfromSettings_t139_il2cpp_TypeInfo_var));
		SocialPlatfromSettings_t139 * L_3 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		bool L_4 = Object_op_Equality_m3188(NULL /*static, unused*/, L_3, (Object_t600 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		SocialPlatfromSettings_t139 * L_5 = ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t139_m3229(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t139_m3229_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t139_il2cpp_TypeInfo_var);
		((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21 = L_5;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t139_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t139 * L_6 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		return L_6;
	}
}
// System.String SocialPlatfromSettings::get_fb_scopes()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t634_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3230_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3231_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3232_MethodInfo_var;
extern "C" String_t* SocialPlatfromSettings_get_fb_scopes_m969 (SocialPlatfromSettings_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3230_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483804);
		Enumerator_get_Current_m3231_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483805);
		Enumerator_MoveNext_m3232_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483806);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Enumerator_t634  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		List_1_t75 * L_1 = (__this->___fb_scopes_list_10);
		NullCheck(L_1);
		Enumerator_t634  L_2 = List_1_GetEnumerator_m3230(L_1, /*hidden argument*/List_1_GetEnumerator_m3230_MethodInfo_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0017:
		{
			String_t* L_3 = Enumerator_get_Current_m3231((&V_2), /*hidden argument*/Enumerator_get_Current_m3231_MethodInfo_var);
			V_1 = L_3;
			String_t* L_4 = V_0;
			String_t* L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m222(NULL /*static, unused*/, L_4, L_5, (String_t*) &_stringLiteral200, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_002c:
		{
			bool L_7 = Enumerator_MoveNext_m3232((&V_2), /*hidden argument*/Enumerator_MoveNext_m3232_MethodInfo_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_t634  L_8 = V_2;
		Enumerator_t634  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t634_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_10);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0049:
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m176(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_13 = V_0;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m176(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = String_Substring_m184(L_13, 0, ((int32_t)((int32_t)L_15-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_0065:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.Void SocialPlatfromSettings::AddDefaultScopes()
extern TypeInfo* SocialPlatfromSettings_t139_il2cpp_TypeInfo_var;
extern "C" void SocialPlatfromSettings_AddDefaultScopes_m970 (SocialPlatfromSettings_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialPlatfromSettings_t139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t139_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t139 * L_0 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_0);
		List_1_t75 * L_1 = (L_0->___fb_scopes_list_10);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_1, (String_t*) &_stringLiteral389);
		SocialPlatfromSettings_t139 * L_2 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_2);
		List_1_t75 * L_3 = (L_2->___fb_scopes_list_10);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, (String_t*) &_stringLiteral390);
		SocialPlatfromSettings_t139 * L_4 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_4);
		List_1_t75 * L_5 = (L_4->___fb_scopes_list_10);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_5, (String_t*) &_stringLiteral391);
		SocialPlatfromSettings_t139 * L_6 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_6);
		List_1_t75 * L_7 = (L_6->___fb_scopes_list_10);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, (String_t*) &_stringLiteral45);
		SocialPlatfromSettings_t139 * L_8 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_8);
		List_1_t75 * L_9 = (L_8->___fb_scopes_list_10);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_9, (String_t*) &_stringLiteral392);
		SocialPlatfromSettings_t139 * L_10 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_10);
		List_1_t75 * L_11 = (L_10->___fb_scopes_list_10);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_11, (String_t*) &_stringLiteral393);
		SocialPlatfromSettings_t139 * L_12 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_12);
		List_1_t75 * L_13 = (L_12->___fb_scopes_list_10);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_13, (String_t*) &_stringLiteral394);
		SocialPlatfromSettings_t139 * L_14 = ((SocialPlatfromSettings_t139_StaticFields*)SocialPlatfromSettings_t139_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_14);
		List_1_t75 * L_15 = (L_14->___fb_scopes_list_10);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_15, (String_t*) &_stringLiteral395);
		return;
	}
}
// AdroidActivityResultCodes
#include "AssemblyU2DCSharp_AdroidActivityResultCodes.h"
#ifndef _MSC_VER
#else
#endif
// AdroidActivityResultCodes
#include "AssemblyU2DCSharp_AdroidActivityResultCodesMethodDeclarations.h"



// AndroidGravity
#include "AssemblyU2DCSharp_AndroidGravity.h"
#ifndef _MSC_VER
#else
#endif
// AndroidGravity
#include "AssemblyU2DCSharp_AndroidGravityMethodDeclarations.h"



// System.Void AndroidGravity::.ctor()
extern "C" void AndroidGravity__ctor_m971 (AndroidGravity_t141 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// AndroidLogLevel
#include "AssemblyU2DCSharp_AndroidLogLevel.h"
#ifndef _MSC_VER
#else
#endif
// AndroidLogLevel
#include "AssemblyU2DCSharp_AndroidLogLevelMethodDeclarations.h"



// System.Void AndroidLogLevel::.ctor()
extern "C" void AndroidLogLevel__ctor_m972 (AndroidLogLevel_t142 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// AndroidMonth
#include "AssemblyU2DCSharp_AndroidMonthMethodDeclarations.h"



// GoogleCloudSlot
#include "AssemblyU2DCSharp_GoogleCloudSlot.h"
#ifndef _MSC_VER
#else
#endif
// GoogleCloudSlot
#include "AssemblyU2DCSharp_GoogleCloudSlotMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGenderMethodDeclarations.h"



// GoogleGravity
#include "AssemblyU2DCSharp_GoogleGravity.h"
#ifndef _MSC_VER
#else
#endif
// GoogleGravity
#include "AssemblyU2DCSharp_GoogleGravityMethodDeclarations.h"



// System.Void GoogleGravity::.ctor()
extern "C" void GoogleGravity__ctor_m973 (GoogleGravity_t146 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSizeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// GADInAppResolution
#include "AssemblyU2DCSharp_GADInAppResolutionMethodDeclarations.h"



// GPAchievementState
#include "AssemblyU2DCSharp_GPAchievementState.h"
#ifndef _MSC_VER
#else
#endif
// GPAchievementState
#include "AssemblyU2DCSharp_GPAchievementStateMethodDeclarations.h"



// GPAchievementType
#include "AssemblyU2DCSharp_GPAchievementType.h"
#ifndef _MSC_VER
#else
#endif
// GPAchievementType
#include "AssemblyU2DCSharp_GPAchievementTypeMethodDeclarations.h"



// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpan.h"
#ifndef _MSC_VER
#else
#endif
// GPBoardTimeSpan
#include "AssemblyU2DCSharp_GPBoardTimeSpanMethodDeclarations.h"



// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionType.h"
#ifndef _MSC_VER
#else
#endif
// GPCollectionType
#include "AssemblyU2DCSharp_GPCollectionTypeMethodDeclarations.h"



// GPConnectionState
#include "AssemblyU2DCSharp_GPConnectionState.h"
#ifndef _MSC_VER
#else
#endif
// GPConnectionState
#include "AssemblyU2DCSharp_GPConnectionStateMethodDeclarations.h"



// GPGameRequestType
#include "AssemblyU2DCSharp_GPGameRequestType.h"
#ifndef _MSC_VER
#else
#endif
// GPGameRequestType
#include "AssemblyU2DCSharp_GPGameRequestTypeMethodDeclarations.h"



// GPLogLevel
#include "AssemblyU2DCSharp_GPLogLevel.h"
#ifndef _MSC_VER
#else
#endif
// GPLogLevel
#include "AssemblyU2DCSharp_GPLogLevelMethodDeclarations.h"



// GP_AppStateStatusCodes
#include "AssemblyU2DCSharp_GP_AppStateStatusCodes.h"
#ifndef _MSC_VER
#else
#endif
// GP_AppStateStatusCodes
#include "AssemblyU2DCSharp_GP_AppStateStatusCodesMethodDeclarations.h"



// GP_ConnectionResultCode
#include "AssemblyU2DCSharp_GP_ConnectionResultCode.h"
#ifndef _MSC_VER
#else
#endif
// GP_ConnectionResultCode
#include "AssemblyU2DCSharp_GP_ConnectionResultCodeMethodDeclarations.h"



// GP_GamesActivityResultCodes
#include "AssemblyU2DCSharp_GP_GamesActivityResultCodes.h"
#ifndef _MSC_VER
#else
#endif
// GP_GamesActivityResultCodes
#include "AssemblyU2DCSharp_GP_GamesActivityResultCodesMethodDeclarations.h"



// GP_GamesStatusCodes
#include "AssemblyU2DCSharp_GP_GamesStatusCodes.h"
#ifndef _MSC_VER
#else
#endif
// GP_GamesStatusCodes
#include "AssemblyU2DCSharp_GP_GamesStatusCodesMethodDeclarations.h"



// GP_InvitationType
#include "AssemblyU2DCSharp_GP_InvitationType.h"
#ifndef _MSC_VER
#else
#endif
// GP_InvitationType
#include "AssemblyU2DCSharp_GP_InvitationTypeMethodDeclarations.h"



// GP_MatchesSortOrder
#include "AssemblyU2DCSharp_GP_MatchesSortOrder.h"
#ifndef _MSC_VER
#else
#endif
// GP_MatchesSortOrder
#include "AssemblyU2DCSharp_GP_MatchesSortOrderMethodDeclarations.h"



// System.Void GP_MatchesSortOrder::.ctor()
extern "C" void GP_MatchesSortOrder__ctor_m974 (GP_MatchesSortOrder_t161 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_MatchesSortOrder::Start()
extern "C" void GP_MatchesSortOrder_Start_m975 (GP_MatchesSortOrder_t161 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GP_MatchesSortOrder::Update()
extern "C" void GP_MatchesSortOrder_Update_m976 (GP_MatchesSortOrder_t161 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// GP_RTM_MessageType
#include "AssemblyU2DCSharp_GP_RTM_MessageType.h"
#ifndef _MSC_VER
#else
#endif
// GP_RTM_MessageType
#include "AssemblyU2DCSharp_GP_RTM_MessageTypeMethodDeclarations.h"



// GP_RTM_PackageType
#include "AssemblyU2DCSharp_GP_RTM_PackageType.h"
#ifndef _MSC_VER
#else
#endif
// GP_RTM_PackageType
#include "AssemblyU2DCSharp_GP_RTM_PackageTypeMethodDeclarations.h"



// GP_RTM_ParticipantStatus
#include "AssemblyU2DCSharp_GP_RTM_ParticipantStatus.h"
#ifndef _MSC_VER
#else
#endif
// GP_RTM_ParticipantStatus
#include "AssemblyU2DCSharp_GP_RTM_ParticipantStatusMethodDeclarations.h"



// GP_RTM_RoomStatus
#include "AssemblyU2DCSharp_GP_RTM_RoomStatus.h"
#ifndef _MSC_VER
#else
#endif
// GP_RTM_RoomStatus
#include "AssemblyU2DCSharp_GP_RTM_RoomStatusMethodDeclarations.h"



// GP_QuestSortOrder
#include "AssemblyU2DCSharp_GP_QuestSortOrder.h"
#ifndef _MSC_VER
#else
#endif
// GP_QuestSortOrder
#include "AssemblyU2DCSharp_GP_QuestSortOrderMethodDeclarations.h"



// GP_QuestState
#include "AssemblyU2DCSharp_GP_QuestState.h"
#ifndef _MSC_VER
#else
#endif
// GP_QuestState
#include "AssemblyU2DCSharp_GP_QuestStateMethodDeclarations.h"



// GP_QuestsSelect
#include "AssemblyU2DCSharp_GP_QuestsSelect.h"
#ifndef _MSC_VER
#else
#endif
// GP_QuestsSelect
#include "AssemblyU2DCSharp_GP_QuestsSelectMethodDeclarations.h"



// GP_TBM_MatchStatus
#include "AssemblyU2DCSharp_GP_TBM_MatchStatus.h"
#ifndef _MSC_VER
#else
#endif
// GP_TBM_MatchStatus
#include "AssemblyU2DCSharp_GP_TBM_MatchStatusMethodDeclarations.h"



// GP_TBM_MatchTurnStatus
#include "AssemblyU2DCSharp_GP_TBM_MatchTurnStatus.h"
#ifndef _MSC_VER
#else
#endif
// GP_TBM_MatchTurnStatus
#include "AssemblyU2DCSharp_GP_TBM_MatchTurnStatusMethodDeclarations.h"



// GP_TBM_MatchesSortOrder
#include "AssemblyU2DCSharp_GP_TBM_MatchesSortOrder.h"
#ifndef _MSC_VER
#else
#endif
// GP_TBM_MatchesSortOrder
#include "AssemblyU2DCSharp_GP_TBM_MatchesSortOrderMethodDeclarations.h"



// FacebookEvents
#include "AssemblyU2DCSharp_FacebookEvents.h"
#ifndef _MSC_VER
#else
#endif
// FacebookEvents
#include "AssemblyU2DCSharp_FacebookEventsMethodDeclarations.h"



// System.Void FacebookEvents::.ctor()
extern "C" void FacebookEvents__ctor_m977 (FacebookEvents_t172 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdEvents
#include "AssemblyU2DCSharp_GoogleMobileAdEvents.h"
#ifndef _MSC_VER
#else
#endif
// GoogleMobileAdEvents
#include "AssemblyU2DCSharp_GoogleMobileAdEventsMethodDeclarations.h"



// System.Void GoogleMobileAdEvents::.ctor()
extern "C" void GoogleMobileAdEvents__ctor_m978 (GoogleMobileAdEvents_t173 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// TwitterEvents
#include "AssemblyU2DCSharp_TwitterEvents.h"
#ifndef _MSC_VER
#else
#endif
// TwitterEvents
#include "AssemblyU2DCSharp_TwitterEventsMethodDeclarations.h"



// System.Void TwitterEvents::.ctor()
extern "C" void TwitterEvents__ctor_m979 (TwitterEvents_t174 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void AndroidADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018_MethodInfo_var;
extern "C" void AndroidADBanner__ctor_m980 (AndroidADBanner_t175 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014_MethodInfo_var = il2cpp_codegen_method_info_from_index(159);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015_MethodInfo_var = il2cpp_codegen_method_info_from_index(160);
		AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016_MethodInfo_var = il2cpp_codegen_method_info_from_index(161);
		AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017_MethodInfo_var = il2cpp_codegen_method_info_from_index(162);
		AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018_MethodInfo_var = il2cpp_codegen_method_info_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t175 * G_B2_0 = {0};
	AndroidADBanner_t175 * G_B1_0 = {0};
	AndroidADBanner_t175 * G_B4_0 = {0};
	AndroidADBanner_t175 * G_B3_0 = {0};
	AndroidADBanner_t175 * G_B6_0 = {0};
	AndroidADBanner_t175 * G_B5_0 = {0};
	AndroidADBanner_t175 * G_B8_0 = {0};
	AndroidADBanner_t175 * G_B7_0 = {0};
	AndroidADBanner_t175 * G_B10_0 = {0};
	AndroidADBanner_t175 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_9 = 1;
		Action_1_t109 * L_0 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014_MethodInfo_var };
		Action_1_t109 * L_2 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t109 * L_3 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t109 * L_4 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015_MethodInfo_var };
		Action_1_t109 * L_6 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t109 * L_7 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t109 * L_8 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016_MethodInfo_var };
		Action_1_t109 * L_10 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t109 * L_11 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t109 * L_12 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017_MethodInfo_var };
		Action_1_t109 * L_14 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t109 * L_15 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t109 * L_16 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018_MethodInfo_var };
		Action_1_t109 * L_18 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t109 * L_19 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m381(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___anchor;
		__this->____anchor_4 = L_22;
		int32_t L_23 = AndroidADBanner_get_gravity_m998(__this, /*hidden argument*/NULL);
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		AN_GoogleAdProxy_CreateBannerAd_m767(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern TypeInfo* AndroidADBanner_t175_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t109_il2cpp_TypeInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3172_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018_MethodInfo_var;
extern "C" void AndroidADBanner__ctor_m981 (AndroidADBanner_t175 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AndroidADBanner_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		Action_1_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014_MethodInfo_var = il2cpp_codegen_method_info_from_index(159);
		Action_1__ctor_m3172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015_MethodInfo_var = il2cpp_codegen_method_info_from_index(160);
		AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016_MethodInfo_var = il2cpp_codegen_method_info_from_index(161);
		AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017_MethodInfo_var = il2cpp_codegen_method_info_from_index(162);
		AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018_MethodInfo_var = il2cpp_codegen_method_info_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t175 * G_B2_0 = {0};
	AndroidADBanner_t175 * G_B1_0 = {0};
	AndroidADBanner_t175 * G_B4_0 = {0};
	AndroidADBanner_t175 * G_B3_0 = {0};
	AndroidADBanner_t175 * G_B6_0 = {0};
	AndroidADBanner_t175 * G_B5_0 = {0};
	AndroidADBanner_t175 * G_B8_0 = {0};
	AndroidADBanner_t175 * G_B7_0 = {0};
	AndroidADBanner_t175 * G_B10_0 = {0};
	AndroidADBanner_t175 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_9 = 1;
		Action_1_t109 * L_0 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014_MethodInfo_var };
		Action_1_t109 * L_2 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t109 * L_3 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t109 * L_4 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015_MethodInfo_var };
		Action_1_t109 * L_6 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t109 * L_7 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t109 * L_8 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016_MethodInfo_var };
		Action_1_t109 * L_10 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t109 * L_11 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t109 * L_12 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017_MethodInfo_var };
		Action_1_t109 * L_14 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t109 * L_15 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t109 * L_16 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018_MethodInfo_var };
		Action_1_t109 * L_18 = (Action_1_t109 *)il2cpp_codegen_object_new (Action_1_t109_il2cpp_TypeInfo_var);
		Action_1__ctor_m3172(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3172_MethodInfo_var);
		((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t109 * L_19 = ((AndroidADBanner_t175_StaticFields*)AndroidADBanner_t175_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m381(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___x;
		int32_t L_23 = ___y;
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		AN_GoogleAdProxy_CreateBannerAdPos_m768(NULL /*static, unused*/, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::Hide()
extern "C" void AndroidADBanner_Hide_m982 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
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
		__this->____IsOnScreen_6 = 0;
		int32_t L_1 = (__this->____id_2);
		AN_GoogleAdProxy_HideAd_m771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::Show()
extern "C" void AndroidADBanner_Show_m983 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
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
		__this->____IsOnScreen_6 = 1;
		int32_t L_1 = (__this->____id_2);
		AN_GoogleAdProxy_ShowAd_m772(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::Refresh()
extern "C" void AndroidADBanner_Refresh_m984 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
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
		int32_t L_1 = (__this->____id_2);
		AN_GoogleAdProxy_RefreshAd_m773(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetBannerPosition_m985 (AndroidADBanner_t175 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = ___y;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, __this);
		AN_GoogleAdProxy_SetBannerPosition_m770(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void AndroidADBanner_SetBannerPosition_m986 (AndroidADBanner_t175 * __this, int32_t ___anchor, const MethodInfo* method)
{
	{
		int32_t L_0 = ___anchor;
		__this->____anchor_4 = L_0;
		int32_t L_1 = AndroidADBanner_get_gravity_m998(__this, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, __this);
		AN_GoogleAdProxy_SetBannerPosition_m769(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::DestroyAfterLoad()
extern "C" void AndroidADBanner_DestroyAfterLoad_m987 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		__this->___destroyOnLoad_8 = 1;
		VirtActionInvoker1< bool >::Invoke(33 /* System.Void AndroidADBanner::set_ShowOnLoad(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Void AndroidADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetDimentions_m988 (AndroidADBanner_t175 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	{
		int32_t L_0 = ___w;
		__this->____width_10 = L_0;
		int32_t L_1 = ___h;
		__this->____height_11 = L_1;
		return;
	}
}
// System.Int32 AndroidADBanner::get_id()
extern "C" int32_t AndroidADBanner_get_id_m989 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_2);
		return L_0;
	}
}
// System.Int32 AndroidADBanner::get_width()
extern "C" int32_t AndroidADBanner_get_width_m990 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____width_10);
		return L_0;
	}
}
// System.Int32 AndroidADBanner::get_height()
extern "C" int32_t AndroidADBanner_get_height_m991 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____height_11);
		return L_0;
	}
}
// GADBannerSize AndroidADBanner::get_size()
extern "C" int32_t AndroidADBanner_get_size_m992 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_3);
		return L_0;
	}
}
// System.Boolean AndroidADBanner::get_IsLoaded()
extern "C" bool AndroidADBanner_get_IsLoaded_m993 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
		return L_0;
	}
}
// System.Boolean AndroidADBanner::get_IsOnScreen()
extern "C" bool AndroidADBanner_get_IsOnScreen_m994 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
		return L_0;
	}
}
// System.Boolean AndroidADBanner::get_ShowOnLoad()
extern "C" bool AndroidADBanner_get_ShowOnLoad_m995 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____ShowOnLoad_9);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void AndroidADBanner_set_ShowOnLoad_m996 (AndroidADBanner_t175 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____ShowOnLoad_9 = L_0;
		return;
	}
}
// UnityEngine.TextAnchor AndroidADBanner::get_anchor()
extern "C" int32_t AndroidADBanner_get_anchor_m997 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____anchor_4);
		return L_0;
	}
}
// System.Int32 AndroidADBanner::get_gravity()
extern "C" int32_t AndroidADBanner_get_gravity_m998 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->____anchor_4);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004b;
		}
		if (L_1 == 1)
		{
			goto IL_0048;
		}
		if (L_1 == 2)
		{
			goto IL_004e;
		}
		if (L_1 == 3)
		{
			goto IL_0042;
		}
		if (L_1 == 4)
		{
			goto IL_003f;
		}
		if (L_1 == 5)
		{
			goto IL_0045;
		}
		if (L_1 == 6)
		{
			goto IL_0039;
		}
		if (L_1 == 7)
		{
			goto IL_0036;
		}
		if (L_1 == 8)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0051;
	}

IL_0036:
	{
		return ((int32_t)81);
	}

IL_0039:
	{
		return ((int32_t)83);
	}

IL_003c:
	{
		return ((int32_t)85);
	}

IL_003f:
	{
		return ((int32_t)17);
	}

IL_0042:
	{
		return ((int32_t)19);
	}

IL_0045:
	{
		return ((int32_t)21);
	}

IL_0048:
	{
		return ((int32_t)49);
	}

IL_004b:
	{
		return ((int32_t)51);
	}

IL_004e:
	{
		return ((int32_t)53);
	}

IL_0051:
	{
		return ((int32_t)48);
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnLoadedAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnLoadedAction_m999 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLoadedAction_12);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLoadedAction_m1000 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnLoadedAction_12 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnFailedLoadingAction_m1001 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnFailedLoadingAction_13);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnFailedLoadingAction_m1002 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnFailedLoadingAction_13 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnOpenedAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnOpenedAction_m1003 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnOpenedAction_14);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnOpenedAction_m1004 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnOpenedAction_14 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnClosedAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnClosedAction_m1005 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnClosedAction_15);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnClosedAction_m1006 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnClosedAction_15 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnLeftApplicationAction_m1007 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLeftApplicationAction_16);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLeftApplicationAction_m1008 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = ___value;
		__this->____OnLeftApplicationAction_16 = L_0;
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdLoaded()
extern "C" void AndroidADBanner_OnBannerAdLoaded_m1009 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___destroyOnLoad_8);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, __this);
		AN_GoogleAdProxy_DestroyBanner_m774(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		__this->____IsLoaded_5 = 1;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean AndroidADBanner::get_ShowOnLoad() */, __this);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		bool L_3 = (__this->___firstLoad_7);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		VirtActionInvoker0::Invoke(23 /* System.Void AndroidADBanner::Show() */, __this);
		__this->___firstLoad_7 = 0;
	}

IL_0041:
	{
		Action_1_t109 * L_4 = (__this->____OnLoadedAction_12);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_4, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral194);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdFailedToLoad()
extern "C" void AndroidADBanner_OnBannerAdFailedToLoad_m1010 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnFailedLoadingAction_13);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral195);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdOpened()
extern "C" void AndroidADBanner_OnBannerAdOpened_m1011 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnOpenedAction_14);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral196);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdClosed()
extern "C" void AndroidADBanner_OnBannerAdClosed_m1012 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnClosedAction_15);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral197);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdLeftApplication()
extern "C" void AndroidADBanner_OnBannerAdLeftApplication_m1013 (AndroidADBanner_t175 * __this, const MethodInfo* method)
{
	{
		Action_1_t109 * L_0 = (__this->____OnLeftApplicationAction_16);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral198);
		return;
	}
}
// System.Void AndroidADBanner::<_OnLoadedAction>m__22(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnFailedLoadingAction>m__23(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnOpenedAction>m__24(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnClosedAction>m__25(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnLeftApplicationAction>m__26(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// AndroidActivityResult
#include "AssemblyU2DCSharp_AndroidActivityResult.h"
#ifndef _MSC_VER
#else
#endif
// AndroidActivityResult
#include "AssemblyU2DCSharp_AndroidActivityResultMethodDeclarations.h"



// System.Void AndroidActivityResult::.ctor(System.String,System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void AndroidActivityResult__ctor_m1019 (AndroidActivityResult_t176 * __this, String_t* ___rId, String_t* ___codeString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rId;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____requestId_1 = L_1;
		String_t* L_2 = ___codeString;
		int32_t L_3 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____code_0 = L_3;
		return;
	}
}
// AdroidActivityResultCodes AndroidActivityResult::get_code()
extern "C" int32_t AndroidActivityResult_get_code_m1020 (AndroidActivityResult_t176 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____code_0);
		return L_0;
	}
}
// System.Int32 AndroidActivityResult::get_requestId()
extern "C" int32_t AndroidActivityResult_get_requestId_m1021 (AndroidActivityResult_t176 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____requestId_1);
		return L_0;
	}
}
// System.Boolean AndroidActivityResult::get_IsSucceeded()
extern "C" bool AndroidActivityResult_get_IsSucceeded_m1022 (AndroidActivityResult_t176 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = AndroidActivityResult_get_code_m1020(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
// System.Boolean AndroidActivityResult::get_IsFailed()
extern "C" bool AndroidActivityResult_get_IsFailed_m1023 (AndroidActivityResult_t176 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AndroidActivityResult_get_IsSucceeded_m1022(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// AndroidGameActivityResult
#include "AssemblyU2DCSharp_AndroidGameActivityResult.h"
#ifndef _MSC_VER
#else
#endif
// AndroidGameActivityResult
#include "AssemblyU2DCSharp_AndroidGameActivityResultMethodDeclarations.h"



// System.Void AndroidGameActivityResult::.ctor()
extern "C" void AndroidGameActivityResult__ctor_m1024 (AndroidGameActivityResult_t177 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// AsyncTask
#include "AssemblyU2DCSharp_AsyncTask.h"
#ifndef _MSC_VER
#else
#endif
// AsyncTask
#include "AssemblyU2DCSharp_AsyncTaskMethodDeclarations.h"



// System.Void AsyncTask::.ctor()
extern "C" void AsyncTask__ctor_m1025 (AsyncTask_t178 * __this, const MethodInfo* method)
{
	{
		EventDispatcher__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AsyncTask::Awake()
extern "C" void AsyncTask_Awake_m1026 (AsyncTask_t178 * __this, const MethodInfo* method)
{
	{
		GameObject_t312 * L_0 = Component_get_gameObject_m3162(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3193(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GADBannerIdFactory
#include "AssemblyU2DCSharp_GADBannerIdFactory.h"
#ifndef _MSC_VER
#else
#endif



// System.Void GADBannerIdFactory::.ctor()
extern "C" void GADBannerIdFactory__ctor_m1027 (GADBannerIdFactory_t179 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GADBannerIdFactory::.cctor()
extern "C" void GADBannerIdFactory__cctor_m1028 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 GADBannerIdFactory::get_nextId()
extern TypeInfo* GADBannerIdFactory_t179_il2cpp_TypeInfo_var;
extern "C" int32_t GADBannerIdFactory_get_nextId_m1029 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t179_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GADBannerIdFactory_t179_StaticFields*)GADBannerIdFactory_t179_il2cpp_TypeInfo_var->static_fields)->____nextId_0;
		((GADBannerIdFactory_t179_StaticFields*)GADBannerIdFactory_t179_il2cpp_TypeInfo_var->static_fields)->____nextId_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = ((GADBannerIdFactory_t179_StaticFields*)GADBannerIdFactory_t179_il2cpp_TypeInfo_var->static_fields)->____nextId_0;
		return L_1;
	}
}
// GPAchievement
#include "AssemblyU2DCSharp_GPAchievement.h"
#ifndef _MSC_VER
#else
#endif
// GPAchievement
#include "AssemblyU2DCSharp_GPAchievementMethodDeclarations.h"

// PlayServiceUtil
#include "AssemblyU2DCSharp_PlayServiceUtilMethodDeclarations.h"


// System.Void GPAchievement::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void GPAchievement__ctor_m1030 (GPAchievement_t180 * __this, String_t* ___aId, String_t* ___aName, String_t* ___aDescr, String_t* ___aCurentSteps, String_t* ___aTotalSteps, String_t* ___aState, String_t* ___aType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___aId;
		__this->____id_0 = L_0;
		String_t* L_1 = ___aName;
		__this->____name_1 = L_1;
		String_t* L_2 = ___aDescr;
		__this->____description_2 = L_2;
		String_t* L_3 = ___aCurentSteps;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____currentSteps_3 = L_4;
		String_t* L_5 = ___aTotalSteps;
		int32_t L_6 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->____totalSteps_4 = L_6;
		String_t* L_7 = ___aType;
		int32_t L_8 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_9 = PlayServiceUtil_GetAchievementTypeById_m1167(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->____type_5 = L_9;
		String_t* L_10 = ___aState;
		int32_t L_11 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_12 = PlayServiceUtil_GetAchievementStateById_m1166(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->____state_6 = L_12;
		return;
	}
}
// System.String GPAchievement::get_id()
extern "C" String_t* GPAchievement_get_id_m1031 (GPAchievement_t180 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GPAchievement::get_name()
extern "C" String_t* GPAchievement_get_name_m1032 (GPAchievement_t180 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_1);
		return L_0;
	}
}
// System.String GPAchievement::get_description()
extern "C" String_t* GPAchievement_get_description_m1033 (GPAchievement_t180 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____description_2);
		return L_0;
	}
}
// System.Int32 GPAchievement::get_currentSteps()
extern "C" int32_t GPAchievement_get_currentSteps_m1034 (GPAchievement_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentSteps_3);
		return L_0;
	}
}
// System.Int32 GPAchievement::get_totalSteps()
extern "C" int32_t GPAchievement_get_totalSteps_m1035 (GPAchievement_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____totalSteps_4);
		return L_0;
	}
}
// GPAchievementType GPAchievement::get_type()
extern "C" int32_t GPAchievement_get_type_m1036 (GPAchievement_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____type_5);
		return L_0;
	}
}
// GPAchievementState GPAchievement::get_state()
extern "C" int32_t GPAchievement_get_state_m1037 (GPAchievement_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____state_6);
		return L_0;
	}
}
// GPGameRequest
#include "AssemblyU2DCSharp_GPGameRequest.h"
#ifndef _MSC_VER
#else
#endif
// GPGameRequest
#include "AssemblyU2DCSharp_GPGameRequestMethodDeclarations.h"



// System.Void GPGameRequest::.ctor()
extern "C" void GPGameRequest__ctor_m1038 (GPGameRequest_t181 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// GPLeaderBoard
#include "AssemblyU2DCSharp_GPLeaderBoard.h"
#ifndef _MSC_VER
#else
#endif
// GPLeaderBoard
#include "AssemblyU2DCSharp_GPLeaderBoardMethodDeclarations.h"

// GPScoreCollection
#include "AssemblyU2DCSharp_GPScoreCollection.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Collections.Generic.List`1<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec.h"
// GPScore
#include "AssemblyU2DCSharp_GPScore.h"
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// GPScoreCollection
#include "AssemblyU2DCSharp_GPScoreCollectionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.List`1<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"
// GPScore
#include "AssemblyU2DCSharp_GPScoreMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void GPLeaderBoard::.ctor(System.String,System.String)
extern TypeInfo* GPScoreCollection_t182_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t183_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3233_MethodInfo_var;
extern "C" void GPLeaderBoard__ctor_m1039 (GPLeaderBoard_t184 * __this, String_t* ___lId, String_t* ___lName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPScoreCollection_t182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		Dictionary_2_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Dictionary_2__ctor_m3233_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483812);
		s_Il2CppMethodIntialized = true;
	}
	{
		GPScoreCollection_t182 * L_0 = (GPScoreCollection_t182 *)il2cpp_codegen_object_new (GPScoreCollection_t182_il2cpp_TypeInfo_var);
		GPScoreCollection__ctor_m1049(L_0, /*hidden argument*/NULL);
		__this->___SocsialCollection_2 = L_0;
		GPScoreCollection_t182 * L_1 = (GPScoreCollection_t182 *)il2cpp_codegen_object_new (GPScoreCollection_t182_il2cpp_TypeInfo_var);
		GPScoreCollection__ctor_m1049(L_1, /*hidden argument*/NULL);
		__this->___GlobalCollection_3 = L_1;
		Dictionary_2_t183 * L_2 = (Dictionary_2_t183 *)il2cpp_codegen_object_new (Dictionary_2_t183_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3233(L_2, /*hidden argument*/Dictionary_2__ctor_m3233_MethodInfo_var);
		__this->___currentPlayerRank_4 = L_2;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___lId;
		__this->____id_0 = L_3;
		String_t* L_4 = ___lName;
		__this->____name_1 = L_4;
		return;
	}
}
// System.Void GPLeaderBoard::UpdateName(System.String)
extern "C" void GPLeaderBoard_UpdateName_m1040 (GPLeaderBoard_t184 * __this, String_t* ___lName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___lName;
		__this->____name_1 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<GPScore> GPLeaderBoard::GetScoresList(GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* List_1_t583_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3234_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m3235_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m3236_MethodInfo_var;
extern "C" List_1_t583 * GPLeaderBoard_GetScoresList_m1041 (GPLeaderBoard_t184 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		List_1__ctor_m3234_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483813);
		Dictionary_2_get_Values_m3235_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483814);
		List_1_AddRange_m3236_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483815);
		s_Il2CppMethodIntialized = true;
	}
	GPScoreCollection_t182 * V_0 = {0};
	Dictionary_2_t185 * V_1 = {0};
	List_1_t583 * V_2 = {0};
	int32_t V_3 = {0};
	int32_t V_4 = {0};
	{
		GPScoreCollection_t182 * L_0 = (__this->___GlobalCollection_3);
		V_0 = L_0;
		int32_t L_1 = ___collection;
		V_3 = L_1;
		int32_t L_2 = V_3;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = V_3;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0033;
	}

IL_001b:
	{
		GPScoreCollection_t182 * L_4 = (__this->___GlobalCollection_3);
		V_0 = L_4;
		goto IL_0033;
	}

IL_0027:
	{
		GPScoreCollection_t182 * L_5 = (__this->___SocsialCollection_2);
		V_0 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		GPScoreCollection_t182 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_t185 * L_7 = (L_6->___AllTimeScores_0);
		V_1 = L_7;
		int32_t L_8 = ___timeSpan;
		V_4 = L_8;
		int32_t L_9 = V_4;
		if (L_9 == 0)
		{
			goto IL_0061;
		}
		if (L_9 == 1)
		{
			goto IL_006d;
		}
		if (L_9 == 2)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0079;
	}

IL_0055:
	{
		GPScoreCollection_t182 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_t185 * L_11 = (L_10->___AllTimeScores_0);
		V_1 = L_11;
		goto IL_0079;
	}

IL_0061:
	{
		GPScoreCollection_t182 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t185 * L_13 = (L_12->___TodayScores_2);
		V_1 = L_13;
		goto IL_0079;
	}

IL_006d:
	{
		GPScoreCollection_t182 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t185 * L_15 = (L_14->___WeekScores_1);
		V_1 = L_15;
		goto IL_0079;
	}

IL_0079:
	{
		List_1_t583 * L_16 = (List_1_t583 *)il2cpp_codegen_object_new (List_1_t583_il2cpp_TypeInfo_var);
		List_1__ctor_m3234(L_16, /*hidden argument*/List_1__ctor_m3234_MethodInfo_var);
		V_2 = L_16;
		List_1_t583 * L_17 = V_2;
		Dictionary_2_t185 * L_18 = V_1;
		NullCheck(L_18);
		ValueCollection_t635 * L_19 = Dictionary_2_get_Values_m3235(L_18, /*hidden argument*/Dictionary_2_get_Values_m3235_MethodInfo_var);
		NullCheck(L_17);
		List_1_AddRange_m3236(L_17, L_19, /*hidden argument*/List_1_AddRange_m3236_MethodInfo_var);
		List_1_t583 * L_20 = V_2;
		return L_20;
	}
}
// GPScore GPLeaderBoard::GetScoreByPlayerId(System.String,GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* Enumerator_t636_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3237_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3238_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3239_MethodInfo_var;
extern "C" GPScore_t303 * GPLeaderBoard_GetScoreByPlayerId_m1042 (GPLeaderBoard_t184 * __this, String_t* ___playerId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3237_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483816);
		Enumerator_get_Current_m3238_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483817);
		Enumerator_MoveNext_m3239_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483818);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t583 * V_0 = {0};
	GPScore_t303 * V_1 = {0};
	Enumerator_t636  V_2 = {0};
	GPScore_t303 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = ___collection;
		List_1_t583 * L_2 = GPLeaderBoard_GetScoresList_m1041(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t583 * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t636  L_4 = List_1_GetEnumerator_m3237(L_3, /*hidden argument*/List_1_GetEnumerator_m3237_MethodInfo_var);
		V_2 = L_4;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0015:
		{
			GPScore_t303 * L_5 = Enumerator_get_Current_m3238((&V_2), /*hidden argument*/Enumerator_get_Current_m3238_MethodInfo_var);
			V_1 = L_5;
			GPScore_t303 * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = GPScore_get_playerId_m1508(L_6, /*hidden argument*/NULL);
			String_t* L_8 = ___playerId;
			NullCheck(L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_7, L_8);
			if (!L_9)
			{
				goto IL_0035;
			}
		}

IL_002e:
		{
			GPScore_t303 * L_10 = V_1;
			V_3 = L_10;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_0035:
		{
			bool L_11 = Enumerator_MoveNext_m3239((&V_2), /*hidden argument*/Enumerator_MoveNext_m3239_MethodInfo_var);
			if (L_11)
			{
				goto IL_0015;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_t636  L_12 = V_2;
		Enumerator_t636  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t636_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0052:
	{
		return (GPScore_t303 *)NULL;
	}

IL_0054:
	{
		GPScore_t303 * L_15 = V_3;
		return L_15;
	}
}
// GPScore GPLeaderBoard::GetScore(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t303 * GPLeaderBoard_GetScore_m1043 (GPLeaderBoard_t184 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	GPScoreCollection_t182 * V_0 = {0};
	Dictionary_2_t185 * V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	{
		GPScoreCollection_t182 * L_0 = (__this->___GlobalCollection_3);
		V_0 = L_0;
		int32_t L_1 = ___collection;
		V_2 = L_1;
		int32_t L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0033;
	}

IL_001b:
	{
		GPScoreCollection_t182 * L_4 = (__this->___GlobalCollection_3);
		V_0 = L_4;
		goto IL_0033;
	}

IL_0027:
	{
		GPScoreCollection_t182 * L_5 = (__this->___SocsialCollection_2);
		V_0 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		GPScoreCollection_t182 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_t185 * L_7 = (L_6->___AllTimeScores_0);
		V_1 = L_7;
		int32_t L_8 = ___timeSpan;
		V_3 = L_8;
		int32_t L_9 = V_3;
		if (L_9 == 0)
		{
			goto IL_005f;
		}
		if (L_9 == 1)
		{
			goto IL_006b;
		}
		if (L_9 == 2)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0077;
	}

IL_0053:
	{
		GPScoreCollection_t182 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_t185 * L_11 = (L_10->___AllTimeScores_0);
		V_1 = L_11;
		goto IL_0077;
	}

IL_005f:
	{
		GPScoreCollection_t182 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t185 * L_13 = (L_12->___TodayScores_2);
		V_1 = L_13;
		goto IL_0077;
	}

IL_006b:
	{
		GPScoreCollection_t182 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t185 * L_15 = (L_14->___WeekScores_1);
		V_1 = L_15;
		goto IL_0077;
	}

IL_0077:
	{
		Dictionary_2_t185 * L_16 = V_1;
		int32_t L_17 = ___rank;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(!0) */, L_16, L_17);
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Dictionary_2_t185 * L_19 = V_1;
		int32_t L_20 = ___rank;
		NullCheck(L_19);
		GPScore_t303 * L_21 = (GPScore_t303 *)VirtFuncInvoker1< GPScore_t303 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(!0) */, L_19, L_20);
		return L_21;
	}

IL_008b:
	{
		return (GPScore_t303 *)NULL;
	}
}
// GPScore GPLeaderBoard::GetCurrentPlayerScore(GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* GPBoardTimeSpan_t151_il2cpp_TypeInfo_var;
extern TypeInfo* GPCollectionType_t152_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GPScore_t303 * GPLeaderBoard_GetCurrentPlayerScore_m1044 (GPLeaderBoard_t184 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPBoardTimeSpan_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		GPCollectionType_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(GPBoardTimeSpan_t151_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		int32_t L_4 = ___collection;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(GPCollectionType_t152_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m222(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral148, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t183 * L_9 = (__this->___currentPlayerRank_4);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(!0) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t183 * L_12 = (__this->___currentPlayerRank_4);
		String_t* L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)VirtFuncInvoker1< int32_t, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(!0) */, L_12, L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		int32_t L_16 = ___timeSpan;
		int32_t L_17 = ___collection;
		GPScore_t303 * L_18 = GPLeaderBoard_GetScore_m1043(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0049:
	{
		return (GPScore_t303 *)NULL;
	}
}
// System.Void GPLeaderBoard::UpdateCurrentPlayerRank(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* GPBoardTimeSpan_t151_il2cpp_TypeInfo_var;
extern TypeInfo* GPCollectionType_t152_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GPLeaderBoard_UpdateCurrentPlayerRank_m1045 (GPLeaderBoard_t184 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPBoardTimeSpan_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		GPCollectionType_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(GPBoardTimeSpan_t151_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		int32_t L_4 = ___collection;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(GPCollectionType_t152_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m222(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral148, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t183 * L_9 = (__this->___currentPlayerRank_4);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(!0) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t183 * L_12 = (__this->___currentPlayerRank_4);
		String_t* L_13 = V_0;
		int32_t L_14 = ___rank;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, L_12, L_13, L_14);
		goto IL_0051;
	}

IL_0044:
	{
		Dictionary_2_t183 * L_15 = (__this->___currentPlayerRank_4);
		String_t* L_16 = V_0;
		int32_t L_17 = ___rank;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_15, L_16, L_17);
	}

IL_0051:
	{
		return;
	}
}
// System.Void GPLeaderBoard::UpdateScore(GPScore)
extern "C" void GPLeaderBoard_UpdateScore_m1046 (GPLeaderBoard_t184 * __this, GPScore_t303 * ___score, const MethodInfo* method)
{
	GPScoreCollection_t182 * V_0 = {0};
	Dictionary_2_t185 * V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	{
		GPScoreCollection_t182 * L_0 = (__this->___GlobalCollection_3);
		V_0 = L_0;
		GPScore_t303 * L_1 = ___score;
		NullCheck(L_1);
		int32_t L_2 = GPScore_get_collection_m1510(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0038;
	}

IL_0020:
	{
		GPScoreCollection_t182 * L_5 = (__this->___GlobalCollection_3);
		V_0 = L_5;
		goto IL_0038;
	}

IL_002c:
	{
		GPScoreCollection_t182 * L_6 = (__this->___SocsialCollection_2);
		V_0 = L_6;
		goto IL_0038;
	}

IL_0038:
	{
		GPScoreCollection_t182 * L_7 = V_0;
		NullCheck(L_7);
		Dictionary_2_t185 * L_8 = (L_7->___AllTimeScores_0);
		V_1 = L_8;
		GPScore_t303 * L_9 = ___score;
		NullCheck(L_9);
		int32_t L_10 = GPScore_get_timeSpan_m1511(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		if (L_11 == 0)
		{
			goto IL_0069;
		}
		if (L_11 == 1)
		{
			goto IL_0075;
		}
		if (L_11 == 2)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0081;
	}

IL_005d:
	{
		GPScoreCollection_t182 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t185 * L_13 = (L_12->___AllTimeScores_0);
		V_1 = L_13;
		goto IL_0081;
	}

IL_0069:
	{
		GPScoreCollection_t182 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t185 * L_15 = (L_14->___TodayScores_2);
		V_1 = L_15;
		goto IL_0081;
	}

IL_0075:
	{
		GPScoreCollection_t182 * L_16 = V_0;
		NullCheck(L_16);
		Dictionary_2_t185 * L_17 = (L_16->___WeekScores_1);
		V_1 = L_17;
		goto IL_0081;
	}

IL_0081:
	{
		Dictionary_2_t185 * L_18 = V_1;
		GPScore_t303 * L_19 = ___score;
		NullCheck(L_19);
		int32_t L_20 = GPScore_get_rank_m1506(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_21 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(!0) */, L_18, L_20);
		if (!L_21)
		{
			goto IL_00a4;
		}
	}
	{
		Dictionary_2_t185 * L_22 = V_1;
		GPScore_t303 * L_23 = ___score;
		NullCheck(L_23);
		int32_t L_24 = GPScore_get_rank_m1506(L_23, /*hidden argument*/NULL);
		GPScore_t303 * L_25 = ___score;
		NullCheck(L_22);
		VirtActionInvoker2< int32_t, GPScore_t303 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(!0,!1) */, L_22, L_24, L_25);
		goto IL_00b1;
	}

IL_00a4:
	{
		Dictionary_2_t185 * L_26 = V_1;
		GPScore_t303 * L_27 = ___score;
		NullCheck(L_27);
		int32_t L_28 = GPScore_get_rank_m1506(L_27, /*hidden argument*/NULL);
		GPScore_t303 * L_29 = ___score;
		NullCheck(L_26);
		VirtActionInvoker2< int32_t, GPScore_t303 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(!0,!1) */, L_26, L_28, L_29);
	}

IL_00b1:
	{
		return;
	}
}
// System.String GPLeaderBoard::get_id()
extern "C" String_t* GPLeaderBoard_get_id_m1047 (GPLeaderBoard_t184 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GPLeaderBoard::get_name()
extern "C" String_t* GPLeaderBoard_get_name_m1048 (GPLeaderBoard_t184 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void GPScoreCollection::.ctor()
extern TypeInfo* Dictionary_2_t185_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3240_MethodInfo_var;
extern "C" void GPScoreCollection__ctor_m1049 (GPScoreCollection_t182 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		Dictionary_2__ctor_m3240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483819);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t185 * L_0 = (Dictionary_2_t185 *)il2cpp_codegen_object_new (Dictionary_2_t185_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3240(L_0, /*hidden argument*/Dictionary_2__ctor_m3240_MethodInfo_var);
		__this->___AllTimeScores_0 = L_0;
		Dictionary_2_t185 * L_1 = (Dictionary_2_t185 *)il2cpp_codegen_object_new (Dictionary_2_t185_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3240(L_1, /*hidden argument*/Dictionary_2__ctor_m3240_MethodInfo_var);
		__this->___WeekScores_1 = L_1;
		Dictionary_2_t185 * L_2 = (Dictionary_2_t185 *)il2cpp_codegen_object_new (Dictionary_2_t185_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3240(L_2, /*hidden argument*/Dictionary_2__ctor_m3240_MethodInfo_var);
		__this->___TodayScores_2 = L_2;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// GP_Invite
#include "AssemblyU2DCSharp_GP_Invite.h"
#ifndef _MSC_VER
#else
#endif
// GP_Invite
#include "AssemblyU2DCSharp_GP_InviteMethodDeclarations.h"



// System.Void GP_Invite::.ctor()
extern "C" void GP_Invite__ctor_m1050 (GP_Invite_t187 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// GP_Participant
#include "AssemblyU2DCSharp_GP_Participant.h"
#ifndef _MSC_VER
#else
#endif
// GP_Participant
#include "AssemblyU2DCSharp_GP_ParticipantMethodDeclarations.h"

// GP_ParticipantResult
#include "AssemblyU2DCSharp_GP_ParticipantResult.h"


// System.Void GP_Participant::.ctor(System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void GP_Participant__ctor_m1051 (GP_Participant_t186 * __this, String_t* ___uid, String_t* ___playerUid, String_t* ___stat, String_t* ___hiResImg, String_t* ___IconImg, String_t* ___Name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____status_6 = 6;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___uid;
		__this->____id_0 = L_0;
		String_t* L_1 = ___playerUid;
		__this->____playerid_1 = L_1;
		String_t* L_2 = ___stat;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_3 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____status_6 = L_3;
		String_t* L_4 = ___hiResImg;
		__this->____HiResImageUrl_2 = L_4;
		String_t* L_5 = ___IconImg;
		__this->____IconImageUrl_3 = L_5;
		String_t* L_6 = ___Name;
		__this->____DisplayName_4 = L_6;
		return;
	}
}
// System.Void GP_Participant::SetResult(GP_ParticipantResult)
extern "C" void GP_Participant_SetResult_m1052 (GP_Participant_t186 * __this, GP_ParticipantResult_t188 * ___r, const MethodInfo* method)
{
	{
		GP_ParticipantResult_t188 * L_0 = ___r;
		__this->____result_5 = L_0;
		return;
	}
}
// System.String GP_Participant::get_id()
extern "C" String_t* GP_Participant_get_id_m1053 (GP_Participant_t186 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GP_Participant::get_playerId()
extern "C" String_t* GP_Participant_get_playerId_m1054 (GP_Participant_t186 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____playerid_1);
		return L_0;
	}
}
// System.String GP_Participant::get_HiResImageUrl()
extern "C" String_t* GP_Participant_get_HiResImageUrl_m1055 (GP_Participant_t186 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____HiResImageUrl_2);
		return L_0;
	}
}
// System.String GP_Participant::get_IconImageUrl()
extern "C" String_t* GP_Participant_get_IconImageUrl_m1056 (GP_Participant_t186 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____IconImageUrl_3);
		return L_0;
	}
}
// System.String GP_Participant::get_DisplayName()
extern "C" String_t* GP_Participant_get_DisplayName_m1057 (GP_Participant_t186 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____DisplayName_4);
		return L_0;
	}
}
// GP_RTM_ParticipantStatus GP_Participant::get_Status()
extern "C" int32_t GP_Participant_get_Status_m1058 (GP_Participant_t186 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____status_6);
		return L_0;
	}
}
// GP_ParticipantResult GP_Participant::get_Result()
extern "C" GP_ParticipantResult_t188 * GP_Participant_get_Result_m1059 (GP_Participant_t186 * __this, const MethodInfo* method)
{
	{
		GP_ParticipantResult_t188 * L_0 = (__this->____result_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// GP_ParticipantResult
#include "AssemblyU2DCSharp_GP_ParticipantResultMethodDeclarations.h"



// System.Void GP_ParticipantResult::.ctor(System.String,System.Int32,System.Int32)
extern "C" void GP_ParticipantResult__ctor_m1060 (GP_ParticipantResult_t188 * __this, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___participantId;
		__this->____ParticipantId_3 = L_0;
		int32_t L_1 = ___result;
		__this->____Result_1 = L_1;
		int32_t L_2 = ___placing;
		__this->____Placing_0 = L_2;
		return;
	}
}
// System.Void GP_ParticipantResult::.ctor(System.Int32,System.String,System.Int32,System.Int32)
extern "C" void GP_ParticipantResult__ctor_m1061 (GP_ParticipantResult_t188 * __this, int32_t ___versionCode, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___participantId;
		__this->____ParticipantId_3 = L_0;
		int32_t L_1 = ___result;
		__this->____Result_1 = L_1;
		int32_t L_2 = ___placing;
		__this->____Placing_0 = L_2;
		int32_t L_3 = ___versionCode;
		__this->____VersionCode_2 = L_3;
		return;
	}
}
// System.Void GP_ParticipantResult::.ctor(System.String[],System.Int32)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void GP_ParticipantResult__ctor_m1062 (GP_ParticipantResult_t188 * __this, StringU5BU5D_t45* ___data, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		StringU5BU5D_t45* L_0 = ___data;
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		__this->____ParticipantId_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2));
		StringU5BU5D_t45* L_3 = ___data;
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		__this->____Placing_0 = L_6;
		StringU5BU5D_t45* L_7 = ___data;
		int32_t L_8 = ___index;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)L_8+(int32_t)2)));
		int32_t L_9 = ((int32_t)((int32_t)L_8+(int32_t)2));
		int32_t L_10 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)), /*hidden argument*/NULL);
		__this->____Result_1 = L_10;
		StringU5BU5D_t45* L_11 = ___data;
		int32_t L_12 = ___index;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12+(int32_t)3)));
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)3));
		int32_t L_14 = Convert_ToInt32_m3201(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_13)), /*hidden argument*/NULL);
		__this->____VersionCode_2 = L_14;
		return;
	}
}
// System.Int32 GP_ParticipantResult::get_Placing()
extern "C" int32_t GP_ParticipantResult_get_Placing_m1063 (GP_ParticipantResult_t188 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Placing_0);
		return L_0;
	}
}
// System.Int32 GP_ParticipantResult::get_Result()
extern "C" int32_t GP_ParticipantResult_get_Result_m1064 (GP_ParticipantResult_t188 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Result_1);
		return L_0;
	}
}
// System.Int32 GP_ParticipantResult::get_VersionCode()
extern "C" int32_t GP_ParticipantResult_get_VersionCode_m1065 (GP_ParticipantResult_t188 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____VersionCode_2);
		return L_0;
	}
}
// System.String GP_ParticipantResult::get_ParticipantId()
extern "C" String_t* GP_ParticipantResult_get_ParticipantId_m1066 (GP_ParticipantResult_t188 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____ParticipantId_3);
		return L_0;
	}
}
// GP_RTM_Network_Package
#include "AssemblyU2DCSharp_GP_RTM_Network_Package.h"
#ifndef _MSC_VER
#else
#endif
// GP_RTM_Network_Package
#include "AssemblyU2DCSharp_GP_RTM_Network_PackageMethodDeclarations.h"



// System.Void GP_RTM_Network_Package::.ctor(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GP_RTM_Network_Package__ctor_m1067 (GP_RTM_Network_Package_t189 * __this, String_t* ___player, String_t* ___recievedData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___player;
		__this->____playerId_1 = L_0;
		String_t* L_1 = ___recievedData;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral396, L_1, /*hidden argument*/NULL);
		Debug_Log_m3100(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___recievedData;
		ByteU5BU5D_t36* L_4 = GP_RTM_Network_Package_ConvertStringToByteData_m1070(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____buffer_2 = L_4;
		return;
	}
}
// System.String GP_RTM_Network_Package::get_participantId()
extern "C" String_t* GP_RTM_Network_Package_get_participantId_m1068 (GP_RTM_Network_Package_t189 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____playerId_1);
		return L_0;
	}
}
// System.Byte[] GP_RTM_Network_Package::get_buffer()
extern "C" ByteU5BU5D_t36* GP_RTM_Network_Package_get_buffer_m1069 (GP_RTM_Network_Package_t189 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t36* L_0 = (__this->____buffer_2);
		return L_0;
	}
}
// System.Byte[] GP_RTM_Network_Package::ConvertStringToByteData(System.String)
extern TypeInfo* ByteU5BU5D_t36_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t36* GP_RTM_Network_Package_ConvertStringToByteData_m1070 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		return ((ByteU5BU5D_t36*)SZArrayNew(ByteU5BU5D_t36_il2cpp_TypeInfo_var, 0));
	}
}
// GP_RTM_Result
#include "AssemblyU2DCSharp_GP_RTM_Result.h"
#ifndef _MSC_VER
#else
#endif
// GP_RTM_Result
#include "AssemblyU2DCSharp_GP_RTM_ResultMethodDeclarations.h"



// System.Void GP_RTM_Result::.ctor(System.String,System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void GP_RTM_Result__ctor_m1071 (GP_RTM_Result_t190 * __this, String_t* ___r_status, String_t* ___r_roomId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___r_status;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____status_0 = L_1;
		String_t* L_2 = ___r_roomId;
		__this->____roomId_1 = L_2;
		return;
	}
}
// GP_GamesStatusCodes GP_RTM_Result::get_status()
extern "C" int32_t GP_RTM_Result_get_status_m1072 (GP_RTM_Result_t190 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____status_0);
		return L_0;
	}
}
// System.String GP_RTM_Result::get_roomId()
extern "C" String_t* GP_RTM_Result_get_roomId_m1073 (GP_RTM_Result_t190 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____roomId_1);
		return L_0;
	}
}
// GP_RTM_Room
#include "AssemblyU2DCSharp_GP_RTM_Room.h"
#ifndef _MSC_VER
#else
#endif
// GP_RTM_Room
#include "AssemblyU2DCSharp_GP_RTM_RoomMethodDeclarations.h"

// System.Collections.Generic.List`1<GP_Participant>
#include "mscorlib_System_Collections_Generic_List_1_gen_8.h"
// System.Collections.Generic.List`1/Enumerator<GP_Participant>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// System.Collections.Generic.List`1<GP_Participant>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<GP_Participant>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"


// System.Void GP_RTM_Room::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t191_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3241_MethodInfo_var;
extern "C" void GP_RTM_Room__ctor_m1074 (GP_RTM_Room_t192 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		List_1__ctor_m3241_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483820);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___id_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___creatorId_1 = L_1;
		__this->___status_2 = (-1);
		List_1_t191 * L_2 = (List_1_t191 *)il2cpp_codegen_object_new (List_1_t191_il2cpp_TypeInfo_var);
		List_1__ctor_m3241(L_2, /*hidden argument*/List_1__ctor_m3241_MethodInfo_var);
		__this->___participants_4 = L_2;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		List_1_t191 * L_3 = (List_1_t191 *)il2cpp_codegen_object_new (List_1_t191_il2cpp_TypeInfo_var);
		List_1__ctor_m3241(L_3, /*hidden argument*/List_1__ctor_m3241_MethodInfo_var);
		__this->___participants_4 = L_3;
		return;
	}
}
// System.Void GP_RTM_Room::AddParticipant(GP_Participant)
extern "C" void GP_RTM_Room_AddParticipant_m1075 (GP_RTM_Room_t192 * __this, GP_Participant_t186 * ___p, const MethodInfo* method)
{
	{
		List_1_t191 * L_0 = (__this->___participants_4);
		GP_Participant_t186 * L_1 = ___p;
		NullCheck(L_0);
		VirtActionInvoker1< GP_Participant_t186 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GP_Participant>::Add(!0) */, L_0, L_1);
		return;
	}
}
// GP_Participant GP_RTM_Room::GetParticipantById(System.String)
extern TypeInfo* Enumerator_t637_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3242_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3243_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3244_MethodInfo_var;
extern "C" GP_Participant_t186 * GP_RTM_Room_GetParticipantById_m1076 (GP_RTM_Room_t192 * __this, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3242_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483821);
		Enumerator_get_Current_m3243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483822);
		Enumerator_MoveNext_m3244_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483823);
		s_Il2CppMethodIntialized = true;
	}
	GP_Participant_t186 * V_0 = {0};
	Enumerator_t637  V_1 = {0};
	GP_Participant_t186 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t191 * L_0 = (__this->___participants_4);
		NullCheck(L_0);
		Enumerator_t637  L_1 = List_1_GetEnumerator_m3242(L_0, /*hidden argument*/List_1_GetEnumerator_m3242_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0011:
		{
			GP_Participant_t186 * L_2 = Enumerator_get_Current_m3243((&V_1), /*hidden argument*/Enumerator_get_Current_m3243_MethodInfo_var);
			V_0 = L_2;
			GP_Participant_t186 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = GP_Participant_get_id_m1053(L_3, /*hidden argument*/NULL);
			String_t* L_5 = ___id;
			NullCheck(L_4);
			bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_4, L_5);
			if (!L_6)
			{
				goto IL_0031;
			}
		}

IL_002a:
		{
			GP_Participant_t186 * L_7 = V_0;
			V_2 = L_7;
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}

IL_0031:
		{
			bool L_8 = Enumerator_MoveNext_m3244((&V_1), /*hidden argument*/Enumerator_MoveNext_m3244_MethodInfo_var);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_t637  L_9 = V_1;
		Enumerator_t637  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t637_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_004e:
	{
		return (GP_Participant_t186 *)NULL;
	}

IL_0050:
	{
		GP_Participant_t186 * L_12 = V_2;
		return L_12;
	}
}
// GoogleCloudResult
#include "AssemblyU2DCSharp_GoogleCloudResult.h"
#ifndef _MSC_VER
#else
#endif
// GoogleCloudResult
#include "AssemblyU2DCSharp_GoogleCloudResultMethodDeclarations.h"

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"


// System.Void GoogleCloudResult::.ctor(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* GP_AppStateStatusCodes_t156_il2cpp_TypeInfo_var;
extern "C" void GoogleCloudResult__ctor_m1077 (GoogleCloudResult_t193 * __this, String_t* ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GP_AppStateStatusCodes_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____response_0 = L_1;
		int32_t L_2 = (__this->____response_0);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(GP_AppStateStatusCodes_t156_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_4);
		__this->____message_1 = L_5;
		return;
	}
}
// System.Void GoogleCloudResult::.ctor(System.String,System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* GP_AppStateStatusCodes_t156_il2cpp_TypeInfo_var;
extern "C" void GoogleCloudResult__ctor_m1078 (GoogleCloudResult_t193 * __this, String_t* ___code, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GP_AppStateStatusCodes_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____response_0 = L_1;
		int32_t L_2 = (__this->____response_0);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(GP_AppStateStatusCodes_t156_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_4);
		__this->____message_1 = L_5;
		String_t* L_6 = ___key;
		int32_t L_7 = Convert_ToInt32_m3201(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____stateKey_2 = L_7;
		return;
	}
}
// GP_AppStateStatusCodes GoogleCloudResult::get_response()
extern "C" int32_t GoogleCloudResult_get_response_m1079 (GoogleCloudResult_t193 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return L_0;
	}
}
// System.String GoogleCloudResult::get_stateDataString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t638_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleCloudResult_get_stateDataString_m1080 (GoogleCloudResult_t193 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Encoding_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t36* L_0 = (__this->___stateData_3);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t638_il2cpp_TypeInfo_var);
		Encoding_t638 * L_2 = Encoding_get_UTF8_m3245(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t36* L_3 = (__this->___stateData_3);
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t36* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.String GoogleCloudResult::get_serverConflictDataString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t638_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleCloudResult_get_serverConflictDataString_m1081 (GoogleCloudResult_t193 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Encoding_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t36* L_0 = (__this->___serverConflictData_4);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t638_il2cpp_TypeInfo_var);
		Encoding_t638 * L_2 = Encoding_get_UTF8_m3245(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t36* L_3 = (__this->___stateData_3);
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t36* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.String GoogleCloudResult::get_message()
extern "C" String_t* GoogleCloudResult_get_message_m1082 (GoogleCloudResult_t193 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____message_1);
		return L_0;
	}
}
// System.Int32 GoogleCloudResult::get_stateKey()
extern "C" int32_t GoogleCloudResult_get_stateKey_m1083 (GoogleCloudResult_t193 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____stateKey_2);
		return L_0;
	}
}
// System.Boolean GoogleCloudResult::get_isSuccess()
extern "C" bool GoogleCloudResult_get_isSuccess_m1084 (GoogleCloudResult_t193 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GoogleCloudResult::get_isFailure()
extern "C" bool GoogleCloudResult_get_isFailure_m1085 (GoogleCloudResult_t193 * __this, const MethodInfo* method)
{
	{
		bool L_0 = GoogleCloudResult_get_isSuccess_m1084(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayConnectionResult
#include "AssemblyU2DCSharp_GooglePlayConnectionResult.h"
#ifndef _MSC_VER
#else
#endif
// GooglePlayConnectionResult
#include "AssemblyU2DCSharp_GooglePlayConnectionResultMethodDeclarations.h"



// System.Void GooglePlayConnectionResult::.ctor()
extern "C" void GooglePlayConnectionResult__ctor_m1086 (GooglePlayConnectionResult_t194 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GooglePlayConnectionResult::get_IsSuccess()
extern "C" bool GooglePlayConnectionResult_get_IsSuccess_m1087 (GooglePlayConnectionResult_t194 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___code_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		return 0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
