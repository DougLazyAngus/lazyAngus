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
// System.Void
#include "mscorlib_System_Void.h"
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
// System.Single
#include "mscorlib_System_Single.h"
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
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
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
extern TypeInfo* GUIStyle_t107_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase__ctor_m527 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GUIStyle_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___status_2 = (String_t*) &_stringLiteral130;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastResponse_3 = L_0;
		GUIStyle_t107 * L_1 = (GUIStyle_t107 *)il2cpp_codegen_object_new (GUIStyle_t107_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3365(L_1, /*hidden argument*/NULL);
		__this->___textStyle_4 = L_1;
		Vector2_t110  L_2 = Vector2_get_zero_m3366(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollPosition_6 = L_2;
		__this->___buttonHeight_7 = ((int32_t)60);
		int32_t L_3 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mainWindowWidth_8 = ((int32_t)((int32_t)L_3-(int32_t)((int32_t)30)));
		int32_t L_4 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mainWindowFullWidth_9 = L_4;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::Awake()
extern TypeInfo* RectOffset_t641_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_Awake_m528 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t107 * L_0 = (__this->___textStyle_4);
		NullCheck(L_0);
		GUIStyle_set_alignment_m3368(L_0, 0, /*hidden argument*/NULL);
		GUIStyle_t107 * L_1 = (__this->___textStyle_4);
		NullCheck(L_1);
		GUIStyle_set_wordWrap_m3369(L_1, 1, /*hidden argument*/NULL);
		GUIStyle_t107 * L_2 = (__this->___textStyle_4);
		RectOffset_t641 * L_3 = (RectOffset_t641 *)il2cpp_codegen_object_new (RectOffset_t641_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3370(L_3, ((int32_t)10), ((int32_t)10), ((int32_t)10), ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_set_padding_m3371(L_2, L_3, /*hidden argument*/NULL);
		GUIStyle_t107 * L_4 = (__this->___textStyle_4);
		NullCheck(L_4);
		GUIStyle_set_stretchHeight_m3372(L_4, 1, /*hidden argument*/NULL);
		GUIStyle_t107 * L_5 = (__this->___textStyle_4);
		NullCheck(L_5);
		GUIStyle_set_stretchWidth_m3373(L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ConsoleBase::Button(System.String)
extern TypeInfo* GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var;
extern "C" bool ConsoleBase_Button_m529 (ConsoleBase_t109 * __this, String_t* ___label, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___label;
		GUILayoutOptionU5BU5D_t642* L_1 = ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 2));
		int32_t L_2 = (__this->___buttonHeight_7);
		GUILayoutOption_t643 * L_3 = GUILayout_MinHeight_m3374(NULL /*static, unused*/, (((float)L_2)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_1, 0)) = (GUILayoutOption_t643 *)L_3;
		GUILayoutOptionU5BU5D_t642* L_4 = L_1;
		int32_t L_5 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t643 * L_6 = GUILayout_MaxWidth_m3375(NULL /*static, unused*/, (((float)L_5)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_6);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_4, 1)) = (GUILayoutOption_t643 *)L_6;
		bool L_7 = GUILayout_Button_m3376(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void ConsoleBase::LabelAndTextField(System.String,System.String&)
extern TypeInfo* GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_LabelAndTextField_m530 (ConsoleBase_t109 * __this, String_t* ___label, String_t** ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_BeginHorizontal_m3377(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		String_t* L_0 = ___label;
		GUILayoutOptionU5BU5D_t642* L_1 = ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t643 * L_2 = GUILayout_MaxWidth_m3375(NULL /*static, unused*/, (150.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_1, 0)) = (GUILayoutOption_t643 *)L_2;
		GUILayout_Label_m3378(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		String_t** L_3 = ___text;
		String_t** L_4 = ___text;
		GUILayoutOptionU5BU5D_t642* L_5 = ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 1));
		int32_t L_6 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t643 * L_7 = GUILayout_MaxWidth_m3375(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_6-(int32_t)((int32_t)150))))), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_5, 0)) = (GUILayoutOption_t643 *)L_7;
		String_t* L_8 = GUILayout_TextField_m3379(NULL /*static, unused*/, (*((String_t**)L_4)), L_5, /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_8;
		GUILayout_EndHorizontal_m3380(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ConsoleBase::IsHorizontalLayout()
extern "C" bool ConsoleBase_IsHorizontalLayout_m531 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_orientation_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Int32 ConsoleBase::get_TextWindowHeight()
extern "C" int32_t ConsoleBase_get_TextWindowHeight_m532 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ConsoleBase_IsHorizontalLayout_m531(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Screen_get_height_m3382(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void ConsoleBase_Callback_m533 (ConsoleBase_t109 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___lastResponseTexture_5 = (Texture2D_t108 *)NULL;
		FBResult_t281 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Error_m2295(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		FBResult_t281 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Error_m2295(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral131, L_4, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_5;
		goto IL_0095;
	}

IL_0032:
	{
		FBResult_t281 * L_6 = ___result;
		NullCheck(L_6);
		String_t* L_7 = FBResult_get_Text_m2294(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		FBResult_t281 * L_9 = ___result;
		NullCheck(L_9);
		String_t* L_10 = FBResult_get_Text_m2294(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral132, L_10, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_11;
		goto IL_0095;
	}

IL_005d:
	{
		FBResult_t281 * L_12 = ___result;
		NullCheck(L_12);
		Texture2D_t108 * L_13 = FBResult_get_Texture_m2293(L_12, /*hidden argument*/NULL);
		bool L_14 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_13, (Object_t644 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		FBResult_t281 * L_15 = ___result;
		NullCheck(L_15);
		Texture2D_t108 * L_16 = FBResult_get_Texture_m2293(L_15, /*hidden argument*/NULL);
		__this->___lastResponseTexture_5 = L_16;
		__this->___lastResponse_3 = (String_t*) &_stringLiteral133;
		goto IL_0095;
	}

IL_008a:
	{
		__this->___lastResponse_3 = (String_t*) &_stringLiteral134;
	}

IL_0095:
	{
		return;
	}
}
// System.Void ConsoleBase::AddCommonFooter()
extern TypeInfo* GUILayoutUtility_t645_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t646_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_AddCommonFooter_m534 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GUI_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t639  V_0 = {0};
	float V_1 = 0.0f;
	{
		int32_t L_0 = ConsoleBase_get_TextWindowHeight_m532(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t645_il2cpp_TypeInfo_var);
		Rect_t639  L_1 = GUILayoutUtility_GetRect_m3384(NULL /*static, unused*/, (640.0f), (((float)L_0)), /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t639  L_2 = V_0;
		ObjectU5BU5D_t626* L_3 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		String_t* L_4 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t626* L_5 = L_3;
		String_t* L_6 = FB_get_UserId_m2253(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t626* L_7 = L_5;
		bool L_8 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_10;
		ObjectU5BU5D_t626* L_11 = L_7;
		String_t* L_12 = (__this->___lastResponse_3);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 3)) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m3385(NULL /*static, unused*/, (String_t*) &_stringLiteral135, L_11, /*hidden argument*/NULL);
		GUIStyle_t107 * L_14 = (__this->___textStyle_4);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_TextArea_m3386(NULL /*static, unused*/, L_2, L_13, L_14, /*hidden argument*/NULL);
		Texture2D_t108 * L_15 = (__this->___lastResponseTexture_5);
		bool L_16 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_15, (Object_t644 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		float L_17 = Rect_get_y_m3387((&V_0), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_17+(float)(200.0f)));
		int32_t L_18 = Screen_get_height_m3382(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t108 * L_19 = (__this->___lastResponseTexture_5);
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		float L_21 = V_1;
		if ((!(((float)(((float)((int32_t)((int32_t)L_18-(int32_t)L_20))))) < ((float)L_21))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_22 = Screen_get_height_m3382(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t108 * L_23 = (__this->___lastResponseTexture_5);
		NullCheck(L_23);
		int32_t L_24 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		V_1 = (((float)((int32_t)((int32_t)L_22-(int32_t)L_24))));
	}

IL_009f:
	{
		float L_25 = Rect_get_x_m3388((&V_0), /*hidden argument*/NULL);
		float L_26 = V_1;
		Texture2D_t108 * L_27 = (__this->___lastResponseTexture_5);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_27);
		Texture2D_t108 * L_29 = (__this->___lastResponseTexture_5);
		NullCheck(L_29);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_29);
		Rect_t639  L_31 = {0};
		Rect__ctor_m3389(&L_31, ((float)((float)L_25+(float)(5.0f))), L_26, (((float)L_28)), (((float)L_30)), /*hidden argument*/NULL);
		Texture2D_t108 * L_32 = (__this->___lastResponseTexture_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_Label_m3390(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		return;
	}
}
// System.Void ConsoleBase::AddCommonHeader()
extern TypeInfo* GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t648_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t646_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_AddCommonHeader_m535 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Input_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		GUI_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t647  V_0 = {0};
	Touch_t647  V_1 = {0};
	Vector2_t110  V_2 = {0};
	{
		bool L_0 = ConsoleBase_IsHorizontalLayout_m531(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GUILayout_BeginHorizontal_m3377(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_BeginVertical_m3391(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0021:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (5.0f), /*hidden argument*/NULL);
		String_t* L_1 = (__this->___status_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral136, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t642* L_3 = ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 1));
		int32_t L_4 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t643 * L_5 = GUILayout_MinWidth_m3393(NULL /*static, unused*/, (((float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_5);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_3, 0)) = (GUILayoutOption_t643 *)L_5;
		GUILayout_Box_m3394(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t648_il2cpp_TypeInfo_var);
		int32_t L_6 = Input_get_touchCount_m3395(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t648_il2cpp_TypeInfo_var);
		Touch_t647  L_7 = Input_GetTouch_m3396(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Touch_get_phase_m3397((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		Vector2_t110 * L_9 = &(__this->___scrollPosition_6);
		Vector2_t110 * L_10 = L_9;
		float L_11 = (L_10->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t648_il2cpp_TypeInfo_var);
		Touch_t647  L_12 = Input_GetTouch_m3396(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_12;
		Vector2_t110  L_13 = Touch_get_deltaPosition_m3398((&V_1), /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = ((&V_2)->___y_2);
		L_10->___y_2 = ((float)((float)L_11+(float)L_14));
	}

IL_009c:
	{
		Vector2_t110  L_15 = (__this->___scrollPosition_6);
		GUILayoutOptionU5BU5D_t642* L_16 = ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 1));
		int32_t L_17 = (__this->___mainWindowFullWidth_9);
		GUILayoutOption_t643 * L_18 = GUILayout_MinWidth_m3393(NULL /*static, unused*/, (((float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, L_18);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_16, 0)) = (GUILayoutOption_t643 *)L_18;
		Vector2_t110  L_19 = GUILayout_BeginScrollView_m3399(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->___scrollPosition_6 = L_19;
		GUILayout_BeginVertical_m3391(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_20 = FB_get_IsInitialized_m2257(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, ((((int32_t)L_20) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		bool L_21 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral137, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0105;
		}
	}
	{
		ConsoleBase_CallFBInit_m536(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		String_t* L_22 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral138, L_22, /*hidden argument*/NULL);
		__this->___status_2 = L_23;
	}

IL_0105:
	{
		GUILayout_BeginHorizontal_m3377(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_24 = FB_get_IsInitialized_m2257(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		bool L_25 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral139, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_013b;
		}
	}
	{
		ConsoleBase_CallFBLogin_m539(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral140;
	}

IL_013b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_26 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		bool L_27 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral141, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0166;
		}
	}
	{
		ConsoleBase_CallFBLoginForPublish_m540(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral142;
	}

IL_0166:
	{
		bool L_28 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral143, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0187;
		}
	}
	{
		ConsoleBase_CallFBLogout_m542(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral144;
	}

IL_0187:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_29 = FB_get_IsInitialized_m2257(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		GUILayout_EndHorizontal_m3380(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBInit()
extern TypeInfo* InitDelegate_t419_il2cpp_TypeInfo_var;
extern TypeInfo* HideUnityDelegate_t420_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_OnInitComplete_m537_MethodInfo_var;
extern const MethodInfo* ConsoleBase_OnHideUnity_m538_MethodInfo_var;
extern "C" void ConsoleBase_CallFBInit_m536 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InitDelegate_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		HideUnityDelegate_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_OnInitComplete_m537_MethodInfo_var = il2cpp_codegen_method_info_from_index(53);
		ConsoleBase_OnHideUnity_m538_MethodInfo_var = il2cpp_codegen_method_info_from_index(54);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_OnInitComplete_m537_MethodInfo_var };
		InitDelegate_t419 * L_1 = (InitDelegate_t419 *)il2cpp_codegen_object_new (InitDelegate_t419_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m3353(L_1, __this, L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConsoleBase_OnHideUnity_m538_MethodInfo_var };
		HideUnityDelegate_t420 * L_3 = (HideUnityDelegate_t420 *)il2cpp_codegen_object_new (HideUnityDelegate_t420_il2cpp_TypeInfo_var);
		HideUnityDelegate__ctor_m3361(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Init_m2258(NULL /*static, unused*/, L_1, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::OnInitComplete()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_OnInitComplete_m537 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral145, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::OnHideUnity(System.Boolean)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_OnHideUnity_m538 (ConsoleBase_t109 * __this, bool ___isGameShown, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___isGameShown;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral146, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBLogin()
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_LoginCallback_m541_MethodInfo_var;
extern "C" void ConsoleBase_CallFBLogin_m539 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_LoginCallback_m541_MethodInfo_var = il2cpp_codegen_method_info_from_index(55);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_LoginCallback_m541_MethodInfo_var };
		FacebookDelegate_t433 * L_1 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Login_m2261(NULL /*static, unused*/, (String_t*) &_stringLiteral147, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBLoginForPublish()
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_LoginCallback_m541_MethodInfo_var;
extern "C" void ConsoleBase_CallFBLoginForPublish_m540 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_LoginCallback_m541_MethodInfo_var = il2cpp_codegen_method_info_from_index(55);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_LoginCallback_m541_MethodInfo_var };
		FacebookDelegate_t433 * L_1 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Login_m2261(NULL /*static, unused*/, (String_t*) &_stringLiteral148, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::LoginCallback(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_LoginCallback_m541 (ConsoleBase_t109 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBResult_t281 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Error_m2295(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		FBResult_t281 * L_2 = ___result;
		NullCheck(L_2);
		String_t* L_3 = FBResult_get_Error_m2295(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral131, L_3, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_4;
		goto IL_004b;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_5 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		__this->___lastResponse_3 = (String_t*) &_stringLiteral149;
		goto IL_004b;
	}

IL_0040:
	{
		__this->___lastResponse_3 = (String_t*) &_stringLiteral150;
	}

IL_004b:
	{
		return;
	}
}
// System.Void ConsoleBase::CallFBLogout()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_CallFBLogout_m542 (ConsoleBase_t109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Logout_m2262(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void GameGroupsConsole__ctor_m543 (GameGroupsConsole_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___GamerGroupName_10 = (String_t*) &_stringLiteral151;
		__this->___GamerGroupDesc_11 = (String_t*) &_stringLiteral152;
		__this->___GamerGroupPrivacy_12 = (String_t*) &_stringLiteral153;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GamerGroupAdmin_13 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GamerGroupCurrentGroup_14 = L_1;
		ConsoleBase__ctor_m527(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::GroupCreateCB(FBResult)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GroupCreateCB_m544 (GameGroupsConsole_t111 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		FBResult_t281 * L_0 = ___result;
		ConsoleBase_Callback_m533(__this, L_0, /*hidden argument*/NULL);
		FBResult_t281 * L_1 = ___result;
		NullCheck(L_1);
		String_t* L_2 = FBResult_get_Text_m2294(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		FBResult_t281 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Text_m2294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_5 = Json_Deserialize_m2511(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_5, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_6, (String_t*) &_stringLiteral154);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t312 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral154);
		__this->___GamerGroupCurrentGroup_14 = ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var));
	}

IL_0049:
	{
		return;
	}
}
// System.Void GameGroupsConsole::GroupDeleteCB(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GroupDeleteCB_m545 (GameGroupsConsole_t111 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBResult_t281 * L_0 = ___result;
		ConsoleBase_Callback_m533(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GamerGroupCurrentGroup_14 = L_1;
		return;
	}
}
// System.Void GameGroupsConsole::GetAllGroupsCB(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t628_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GetAllGroupsCB_m546 (GameGroupsConsole_t111 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		List_1_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	List_1_t628 * V_1 = {0};
	Dictionary_2_t312 * V_2 = {0};
	{
		FBResult_t281 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Text_m2294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_007d;
		}
	}
	{
		FBResult_t281 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Text_m2294(L_3, /*hidden argument*/NULL);
		((ConsoleBase_t109 *)__this)->___lastResponse_3 = L_4;
		FBResult_t281 * L_5 = ___result;
		NullCheck(L_5);
		String_t* L_6 = FBResult_get_Text_m2294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_7 = Json_Deserialize_m2511(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_7, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_8, (String_t*) &_stringLiteral155);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t312 * L_10 = V_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral155);
		V_1 = ((List_1_t628 *)Castclass(L_11, List_1_t628_il2cpp_TypeInfo_var));
		List_1_t628 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_12);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		List_1_t628 * L_14 = V_1;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_14, 0);
		V_2 = ((Dictionary_2_t312 *)Castclass(L_15, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_16 = V_2;
		NullCheck(L_16);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_16, (String_t*) &_stringLiteral154);
		__this->___GamerGroupCurrentGroup_14 = ((String_t*)Castclass(L_17, String_t_il2cpp_TypeInfo_var));
	}

IL_007d:
	{
		FBResult_t281 * L_18 = ___result;
		NullCheck(L_18);
		String_t* L_19 = FBResult_get_Error_m2295(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0099;
		}
	}
	{
		FBResult_t281 * L_21 = ___result;
		NullCheck(L_21);
		String_t* L_22 = FBResult_get_Error_m2295(L_21, /*hidden argument*/NULL);
		((ConsoleBase_t109 *)__this)->___lastResponse_3 = L_22;
	}

IL_0099:
	{
		return;
	}
}
// System.Void GameGroupsConsole::CallFbGetAllOwnedGroups()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GetAllGroupsCB_m546_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbGetAllOwnedGroups_m547 (GameGroupsConsole_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		GameGroupsConsole_GetAllGroupsCB_m546_MethodInfo_var = il2cpp_codegen_method_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		String_t* L_0 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral156, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_2 = HttpMethod_get_GET_m2485(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)GameGroupsConsole_GetAllGroupsCB_m546_MethodInfo_var };
		FacebookDelegate_t433 * L_4 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_4, __this, L_3, /*hidden argument*/NULL);
		FB_API_m2267(NULL /*static, unused*/, L_1, L_2, L_4, (Dictionary_2_t122 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallFbGetUserGroups()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbGetUserGroups_m548 (GameGroupsConsole_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		String_t* L_0 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral157, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_2 = HttpMethod_get_GET_m2485(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_4 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_4, __this, L_3, /*hidden argument*/NULL);
		FB_API_m2267(NULL /*static, unused*/, L_1, L_2, L_4, (Dictionary_2_t122 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallCreateGroupDialog()
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GroupCreateCB_m544_MethodInfo_var;
extern "C" void GameGroupsConsole_CallCreateGroupDialog_m549 (GameGroupsConsole_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		GameGroupsConsole_GroupCreateCB_m544_MethodInfo_var = il2cpp_codegen_method_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___GamerGroupName_10);
		String_t* L_1 = (__this->___GamerGroupDesc_11);
		String_t* L_2 = (__this->___GamerGroupPrivacy_12);
		IntPtr_t L_3 = { (void*)GameGroupsConsole_GroupCreateCB_m544_MethodInfo_var };
		FacebookDelegate_t433 * L_4 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_4, __this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_GameGroupCreate_m2272(NULL /*static, unused*/, L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallJoinGroupDialog()
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GroupCreateCB_m544_MethodInfo_var;
extern "C" void GameGroupsConsole_CallJoinGroupDialog_m550 (GameGroupsConsole_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		GameGroupsConsole_GroupCreateCB_m544_MethodInfo_var = il2cpp_codegen_method_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___GamerGroupCurrentGroup_14);
		IntPtr_t L_1 = { (void*)GameGroupsConsole_GroupCreateCB_m544_MethodInfo_var };
		FacebookDelegate_t433 * L_2 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_2, __this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_GameGroupJoin_m2273(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallFbPostToGamerGroup()
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3401_MethodInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbPostToGamerGroup_m551 (GameGroupsConsole_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		Dictionary_2__ctor_m3401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	{
		Dictionary_2_t122 * L_0 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3401(L_0, /*hidden argument*/Dictionary_2__ctor_m3401_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t122 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral158, (String_t*) &_stringLiteral159);
		String_t* L_2 = (__this->___GamerGroupCurrentGroup_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral160, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_4 = HttpMethod_get_POST_m2486(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_6 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_6, __this, L_5, /*hidden argument*/NULL);
		Dictionary_2_t122 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_API_m2267(NULL /*static, unused*/, L_3, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::OnGUI()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t646_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_OnGUI_m552 (GameGroupsConsole_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		GUI_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConsoleBase_AddCommonHeader_m535(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_1 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral161, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameGroupsConsole_CallFbGetAllOwnedGroups_m547(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		String_t** L_2 = &(__this->___GamerGroupName_10);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral162, L_2, /*hidden argument*/NULL);
		String_t** L_3 = &(__this->___GamerGroupDesc_11);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral163, L_3, /*hidden argument*/NULL);
		String_t** L_4 = &(__this->___GamerGroupPrivacy_12);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral164, L_4, /*hidden argument*/NULL);
		bool L_5 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral165, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		GameGroupsConsole_CallCreateGroupDialog_m549(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
		String_t** L_6 = &(__this->___GamerGroupCurrentGroup_14);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral166, L_6, /*hidden argument*/NULL);
		bool L_7 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral167, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0096;
		}
	}
	{
		GameGroupsConsole_CallJoinGroupDialog_m550(__this, /*hidden argument*/NULL);
	}

IL_0096:
	{
		bool L_8 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral168, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		GameGroupsConsole_CallFbGetUserGroups_m548(__this, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		bool L_9 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral169, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00cc;
		}
	}
	{
		GameGroupsConsole_CallFbPostToGamerGroup_m551(__this, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_EndVertical_m3402(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndScrollView_m3403(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_10 = ConsoleBase_IsHorizontalLayout_m531(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00f0;
		}
	}
	{
		GUILayout_EndVertical_m3402(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		ConsoleBase_AddCommonFooter_m534(__this, /*hidden argument*/NULL);
		bool L_11 = ConsoleBase_IsHorizontalLayout_m531(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_010c;
		}
	}
	{
		GUILayout_EndHorizontal_m3380(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void U3CTakeScreenshotU3Ec__Iterator0__ctor_m553 (U3CTakeScreenshotU3Ec__Iterator0_t114 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object InteractiveConsole/<TakeScreenshot>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTakeScreenshotU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m554 (U3CTakeScreenshotU3Ec__Iterator0_t114 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object InteractiveConsole/<TakeScreenshot>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTakeScreenshotU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m555 (U3CTakeScreenshotU3Ec__Iterator0_t114 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean InteractiveConsole/<TakeScreenshot>c__Iterator0::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t649_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t108_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" bool U3CTakeScreenshotU3Ec__Iterator0_MoveNext_m556 (U3CTakeScreenshotU3Ec__Iterator0_t114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(183);
		Texture2D_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
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
		WaitForEndOfFrame_t649 * L_2 = (WaitForEndOfFrame_t649 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t649_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m3404(L_2, /*hidden argument*/NULL);
		__this->___U24current_6 = L_2;
		__this->___U24PC_5 = 1;
		goto IL_0117;
	}

IL_0038:
	{
		int32_t L_3 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CwidthU3E__0_0 = L_3;
		int32_t L_4 = Screen_get_height_m3382(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CheightU3E__1_1 = L_4;
		int32_t L_5 = (__this->___U3CwidthU3E__0_0);
		int32_t L_6 = (__this->___U3CheightU3E__1_1);
		Texture2D_t108 * L_7 = (Texture2D_t108 *)il2cpp_codegen_object_new (Texture2D_t108_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3405(L_7, L_5, L_6, 3, 0, /*hidden argument*/NULL);
		__this->___U3CtexU3E__2_2 = L_7;
		Texture2D_t108 * L_8 = (__this->___U3CtexU3E__2_2);
		int32_t L_9 = (__this->___U3CwidthU3E__0_0);
		int32_t L_10 = (__this->___U3CheightU3E__1_1);
		Rect_t639  L_11 = {0};
		Rect__ctor_m3389(&L_11, (0.0f), (0.0f), (((float)L_9)), (((float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m3406(L_8, L_11, 0, 0, /*hidden argument*/NULL);
		Texture2D_t108 * L_12 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_12);
		Texture2D_Apply_m3407(L_12, /*hidden argument*/NULL);
		Texture2D_t108 * L_13 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_13);
		ByteU5BU5D_t66* L_14 = Texture2D_EncodeToPNG_m3408(L_13, /*hidden argument*/NULL);
		__this->___U3CscreenshotU3E__3_3 = L_14;
		WWWForm_t112 * L_15 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3409(L_15, /*hidden argument*/NULL);
		__this->___U3CwwwFormU3E__4_4 = L_15;
		WWWForm_t112 * L_16 = (__this->___U3CwwwFormU3E__4_4);
		ByteU5BU5D_t66* L_17 = (__this->___U3CscreenshotU3E__3_3);
		NullCheck(L_16);
		WWWForm_AddBinaryData_m3410(L_16, (String_t*) &_stringLiteral225, L_17, (String_t*) &_stringLiteral226, /*hidden argument*/NULL);
		WWWForm_t112 * L_18 = (__this->___U3CwwwFormU3E__4_4);
		NullCheck(L_18);
		WWWForm_AddField_m3411(L_18, (String_t*) &_stringLiteral158, (String_t*) &_stringLiteral227, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_19 = HttpMethod_get_POST_m2486(NULL /*static, unused*/, /*hidden argument*/NULL);
		InteractiveConsole_t113 * L_20 = (__this->___U3CU3Ef__this_7);
		IntPtr_t L_21 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_22 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_22, L_20, L_21, /*hidden argument*/NULL);
		WWWForm_t112 * L_23 = (__this->___U3CwwwFormU3E__4_4);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_API_m2268(NULL /*static, unused*/, (String_t*) &_stringLiteral228, L_19, L_22, L_23, /*hidden argument*/NULL);
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
extern "C" void U3CTakeScreenshotU3Ec__Iterator0_Dispose_m557 (U3CTakeScreenshotU3Ec__Iterator0_t114 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void InteractiveConsole/<TakeScreenshot>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CTakeScreenshotU3Ec__Iterator0_Reset_m558 (U3CTakeScreenshotU3Ec__Iterator0_t114 * __this, const MethodInfo* method)
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
struct Enumerable_t68;
struct List_1_t115;
struct IEnumerable_1_t650;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t68;
struct List_1_t628;
struct IEnumerable_1_t651;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t628 * Enumerable_ToList_TisObject_t_m3413_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m3413(__this /* static, unused */, p0, method) (( List_1_t628 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3413_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisString_t_m3412(__this /* static, unused */, p0, method) (( List_1_t115 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3413_gshared)(__this /* static, unused */, p0, method)


// System.Void InteractiveConsole::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t115_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t116_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3414_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3415_MethodInfo_var;
extern "C" void InteractiveConsole__ctor_m559 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		List_1_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		Dictionary_2_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		List_1__ctor_m3414_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		Dictionary_2__ctor_m3415_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FriendSelectorTitle_10 = L_0;
		__this->___FriendSelectorMessage_11 = (String_t*) &_stringLiteral170;
		StringU5BU5D_t75* L_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 3));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral171);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral171;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral172);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 1)) = (String_t*)(String_t*) &_stringLiteral172;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral173);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral173;
		__this->___FriendFilterTypes_12 = L_3;
		List_1_t115 * L_4 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3414(L_4, /*hidden argument*/List_1__ctor_m3414_MethodInfo_var);
		__this->___FriendFilterGroupNames_14 = L_4;
		List_1_t115 * L_5 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3414(L_5, /*hidden argument*/List_1__ctor_m3414_MethodInfo_var);
		__this->___FriendFilterGroupIDs_15 = L_5;
		__this->___FriendSelectorData_17 = (String_t*) &_stringLiteral174;
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FriendSelectorExcludeIds_18 = L_6;
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FriendSelectorMax_19 = L_7;
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___DirectRequestTitle_20 = L_8;
		__this->___DirectRequestMessage_21 = (String_t*) &_stringLiteral175;
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
		Dictionary_2_t116 * L_20 = (Dictionary_2_t116 *)il2cpp_codegen_object_new (Dictionary_2_t116_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3415(L_20, /*hidden argument*/Dictionary_2__ctor_m3415_MethodInfo_var);
		__this->___FeedProperties_34 = L_20;
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___PayProduct_35 = L_21;
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___ApiQuery_36 = L_22;
		ConsoleBase__ctor_m527(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBActivateApp()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_CallFBActivateApp_m560 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_ActivateApp_m2270(NULL /*static, unused*/, /*hidden argument*/NULL);
		FBResult_t281 * L_0 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_0, (String_t*) &_stringLiteral176, (String_t*)NULL, /*hidden argument*/NULL);
		ConsoleBase_Callback_m533(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppRequestAsFriendSelector()
extern TypeInfo* Nullable_1_t634_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t652_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t628_il2cpp_TypeInfo_var;
extern TypeInfo* FBAppRequestsFilterGroup_t424_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m3417_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3419_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisString_t_m3412_MethodInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppRequestAsFriendSelector_m561 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		CharU5BU5D_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		List_1_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		FBAppRequestsFilterGroup_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		Nullable_1__ctor_m3417_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		List_1__ctor_m3419_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		Enumerable_ToList_TisString_t_m3412_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483712);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t634  V_0 = {0};
	Exception_t57 * V_1 = {0};
	StringU5BU5D_t75* V_2 = {0};
	List_1_t628 * V_3 = {0};
	int32_t V_4 = 0;
	Nullable_1_t634  V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	StringU5BU5D_t75* G_B6_0 = {0};
	Object_t * G_B14_0 = {0};
	String_t* G_B14_1 = {0};
	Object_t * G_B13_0 = {0};
	String_t* G_B13_1 = {0};
	List_1_t628 * G_B15_0 = {0};
	Object_t * G_B15_1 = {0};
	String_t* G_B15_2 = {0};
	{
		Initobj (Nullable_1_t634_il2cpp_TypeInfo_var, (&V_5));
		Nullable_1_t634  L_0 = V_5;
		V_0 = L_0;
		String_t* L_1 = (__this->___FriendSelectorMax_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		String_t* L_4 = (__this->___FriendSelectorMax_19);
		int32_t L_5 = Int32_Parse_m3416(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Nullable_1_t634  L_6 = {0};
		Nullable_1__ctor_m3417(&L_6, L_5, /*hidden argument*/Nullable_1__ctor_m3417_MethodInfo_var);
		V_0 = L_6;
		goto IL_0048;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_7);
		((ConsoleBase_t109 *)__this)->___status_2 = L_8;
		goto IL_0048;
	} // end catch (depth: 1)

IL_0048:
	{
		String_t* L_9 = (__this->___FriendSelectorExcludeIds_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_11 = String_op_Equality_m456(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		G_B6_0 = ((StringU5BU5D_t75*)(NULL));
		goto IL_0079;
	}

IL_0063:
	{
		String_t* L_12 = (__this->___FriendSelectorExcludeIds_18);
		CharU5BU5D_t652* L_13 = ((CharU5BU5D_t652*)SZArrayNew(CharU5BU5D_t652_il2cpp_TypeInfo_var, 1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_12);
		StringU5BU5D_t75* L_14 = String_Split_m3418(L_12, L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
	}

IL_0079:
	{
		V_2 = G_B6_0;
		List_1_t628 * L_15 = (List_1_t628 *)il2cpp_codegen_object_new (List_1_t628_il2cpp_TypeInfo_var);
		List_1__ctor_m3419(L_15, /*hidden argument*/List_1__ctor_m3419_MethodInfo_var);
		V_3 = L_15;
		int32_t L_16 = (__this->___FriendFilterSelection_13);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		List_1_t628 * L_17 = V_3;
		StringU5BU5D_t75* L_18 = (__this->___FriendFilterTypes_12);
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
		List_1_t628 * L_22 = V_3;
		List_1_t115 * L_23 = (__this->___FriendFilterGroupNames_14);
		int32_t L_24 = V_4;
		NullCheck(L_23);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_23, L_24);
		List_1_t115 * L_26 = (__this->___FriendFilterGroupIDs_15);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		String_t* L_28 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_26, L_27);
		CharU5BU5D_t652* L_29 = ((CharU5BU5D_t652*)SZArrayNew(CharU5BU5D_t652_il2cpp_TypeInfo_var, 1));
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_29, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_28);
		StringU5BU5D_t75* L_30 = String_Split_m3418(L_28, L_29, /*hidden argument*/NULL);
		List_1_t115 * L_31 = Enumerable_ToList_TisString_t_m3412(NULL /*static, unused*/, (Object_t*)(Object_t*)L_30, /*hidden argument*/Enumerable_ToList_TisString_t_m3412_MethodInfo_var);
		FBAppRequestsFilterGroup_t424 * L_32 = (FBAppRequestsFilterGroup_t424 *)il2cpp_codegen_object_new (FBAppRequestsFilterGroup_t424_il2cpp_TypeInfo_var);
		FBAppRequestsFilterGroup__ctor_m2276(L_32, L_25, L_31, /*hidden argument*/NULL);
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
		List_1_t628 * L_37 = V_3;
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
		List_1_t628 * L_39 = V_3;
		G_B15_0 = L_39;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_011a;
	}

IL_0119:
	{
		G_B15_0 = ((List_1_t628 *)(NULL));
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_011a:
	{
		StringU5BU5D_t75* L_40 = V_2;
		Nullable_1_t634  L_41 = V_0;
		String_t* L_42 = (__this->___FriendSelectorData_17);
		String_t* L_43 = (__this->___FriendSelectorTitle_10);
		IntPtr_t L_44 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_45 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_45, __this, L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_AppRequest_m2265(NULL /*static, unused*/, G_B15_2, (StringU5BU5D_t75*)(StringU5BU5D_t75*)G_B15_1, G_B15_0, L_40, L_41, L_42, L_43, L_45, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppRequestAsDirectRequest()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t653_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t652_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t634_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppRequestAsDirectRequest_m562 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		CharU5BU5D_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Nullable_1_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t634  V_0 = {0};
	{
		String_t* L_0 = (__this->___DirectRequestTo_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m456(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_t653 * L_3 = (ArgumentException_t653 *)il2cpp_codegen_object_new (ArgumentException_t653_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3420(L_3, (String_t*) &_stringLiteral177, (String_t*) &_stringLiteral178, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		String_t* L_4 = (__this->___DirectRequestMessage_21);
		String_t* L_5 = (__this->___DirectRequestTo_22);
		CharU5BU5D_t652* L_6 = ((CharU5BU5D_t652*)SZArrayNew(CharU5BU5D_t652_il2cpp_TypeInfo_var, 1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_5);
		StringU5BU5D_t75* L_7 = String_Split_m3418(L_5, L_6, /*hidden argument*/NULL);
		Initobj (Nullable_1_t634_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t634  L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = (__this->___DirectRequestTitle_20);
		IntPtr_t L_11 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_12 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_12, __this, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_AppRequest_m2265(NULL /*static, unused*/, L_4, L_7, (List_1_t628 *)NULL, (StringU5BU5D_t75*)(StringU5BU5D_t75*)NULL, L_8, L_9, L_10, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBFeed()
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBFeed_m563 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t116 * V_0 = {0};
	{
		V_0 = (Dictionary_2_t116 *)NULL;
		bool L_0 = (__this->___IncludeFeedProperties_33);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t116 * L_1 = (__this->___FeedProperties_34);
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
		Dictionary_2_t116 * L_12 = V_0;
		IntPtr_t L_13 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_14 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_14, __this, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Feed_m2266(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBPay()
extern TypeInfo* Nullable_1_t634_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_CallFBPay_m564 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t634  V_0 = {0};
	Nullable_1_t634  V_1 = {0};
	{
		String_t* L_0 = (__this->___PayProduct_35);
		Initobj (Nullable_1_t634_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t634  L_1 = V_0;
		Initobj (Nullable_1_t634_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t634  L_2 = V_1;
		Canvas_Pay_m2244(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral179, 1, L_1, L_2, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (FacebookDelegate_t433 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBAPI()
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBAPI_m565 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___ApiQuery_36);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_1 = HttpMethod_get_GET_m2485(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_3 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_API_m2267(NULL /*static, unused*/, L_0, L_1, L_3, (Dictionary_2_t122 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBGetDeepLink()
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m533_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBGetDeepLink_m566 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		ConsoleBase_Callback_m533_MethodInfo_var = il2cpp_codegen_method_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_Callback_m533_MethodInfo_var };
		FacebookDelegate_t433 * L_1 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3357(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_GetDeepLink_m2271(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppEventLogEvent()
extern TypeInfo* Nullable_1_t635_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3421_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppEventLogEvent_m567 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Dictionary_2__ctor_m3421_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t635  V_0 = {0};
	Dictionary_2_t312 * V_1 = {0};
	{
		Initobj (Nullable_1_t635_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t635  L_0 = V_0;
		Dictionary_2_t312 * L_1 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3421(L_1, /*hidden argument*/Dictionary_2__ctor_m3421_MethodInfo_var);
		V_1 = L_1;
		Dictionary_2_t312 * L_2 = V_1;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_2, (String_t*) &_stringLiteral181, (String_t*) &_stringLiteral182);
		Dictionary_2_t312 * L_3 = V_1;
		AppEvents_LogEvent_m2241(NULL /*static, unused*/, (String_t*) &_stringLiteral180, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		String_t* L_4 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral183, L_4, (String_t*) &_stringLiteral184, /*hidden argument*/NULL);
		FBResult_t281 * L_6 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_6, L_5, (String_t*)NULL, /*hidden argument*/NULL);
		ConsoleBase_Callback_m533(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::Awake()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_Awake_m568 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConsoleBase_Awake_m528(__this, /*hidden argument*/NULL);
		Dictionary_2_t116 * L_0 = (__this->___FeedProperties_34);
		StringU5BU5D_t75* L_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral186);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral186;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, StringU5BU5D_t75* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(!0,!1) */, L_0, (String_t*) &_stringLiteral185, L_1);
		Dictionary_2_t116 * L_2 = (__this->___FeedProperties_34);
		StringU5BU5D_t75* L_3 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral188);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral188;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral189);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral189;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, StringU5BU5D_t75* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(!0,!1) */, L_2, (String_t*) &_stringLiteral187, L_4);
		return;
	}
}
// System.Void InteractiveConsole::FriendFilterArea()
extern TypeInfo* GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_FriendFilterArea_m569 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_Label_m3378(NULL /*static, unused*/, (String_t*) &_stringLiteral190, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		int32_t L_0 = (__this->___FriendFilterSelection_13);
		StringU5BU5D_t75* L_1 = (__this->___FriendFilterTypes_12);
		GUILayoutOptionU5BU5D_t642* L_2 = ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 1));
		int32_t L_3 = (((ConsoleBase_t109 *)__this)->___buttonHeight_7);
		GUILayoutOption_t643 * L_4 = GUILayout_MinHeight_m3374(NULL /*static, unused*/, (((float)L_3)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_2, 0)) = (GUILayoutOption_t643 *)L_4;
		int32_t L_5 = GUILayout_SelectionGrid_m3422(NULL /*static, unused*/, L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		__this->___FriendFilterSelection_13 = L_5;
		return;
	}
}
// System.Void InteractiveConsole::OnGUI()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t646_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_OnGUI_m570 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		GUI_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * V_0 = {0};
	Exception_t57 * V_1 = {0};
	Exception_t57 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConsoleBase_AddCommonHeader_m535(__this, /*hidden argument*/NULL);
		bool L_0 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral191, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InteractiveConsole_CallFBActivateApp_m560(__this, /*hidden argument*/NULL);
		((ConsoleBase_t109 *)__this)->___status_2 = (String_t*) &_stringLiteral192;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_1 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_2 = &(__this->___FriendSelectorTitle_10);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral193, L_2, /*hidden argument*/NULL);
		String_t** L_3 = &(__this->___FriendSelectorMessage_11);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral194, L_3, /*hidden argument*/NULL);
		String_t** L_4 = &(__this->___FriendSelectorExcludeIds_18);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral195, L_4, /*hidden argument*/NULL);
		InteractiveConsole_FriendFilterArea_m569(__this, /*hidden argument*/NULL);
		String_t** L_5 = &(__this->___FriendSelectorMax_19);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral196, L_5, /*hidden argument*/NULL);
		String_t** L_6 = &(__this->___FriendSelectorData_17);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral197, L_6, /*hidden argument*/NULL);
		bool L_7 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral198, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00ce;
		}
	}

IL_00a6:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallAppRequestAsFriendSelector_m561(__this, /*hidden argument*/NULL);
		((ConsoleBase_t109 *)__this)->___status_2 = (String_t*) &_stringLiteral199;
		goto IL_00ce;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00bc;
		throw e;
	}

CATCH_00bc:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		((ConsoleBase_t109 *)__this)->___status_2 = L_9;
		goto IL_00ce;
	} // end catch (depth: 1)

IL_00ce:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_10 = &(__this->___DirectRequestTitle_20);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral193, L_10, /*hidden argument*/NULL);
		String_t** L_11 = &(__this->___DirectRequestMessage_21);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral194, L_11, /*hidden argument*/NULL);
		String_t** L_12 = &(__this->___DirectRequestTo_22);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral200, L_12, /*hidden argument*/NULL);
		bool L_13 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral201, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0143;
		}
	}

IL_011b:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallAppRequestAsDirectRequest_m562(__this, /*hidden argument*/NULL);
		((ConsoleBase_t109 *)__this)->___status_2 = (String_t*) &_stringLiteral202;
		goto IL_0143;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0131;
		throw e;
	}

CATCH_0131:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_14);
		((ConsoleBase_t109 *)__this)->___status_2 = L_15;
		goto IL_0143;
	} // end catch (depth: 1)

IL_0143:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_16 = &(__this->___FeedToId_23);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral203, L_16, /*hidden argument*/NULL);
		String_t** L_17 = &(__this->___FeedLink_24);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral204, L_17, /*hidden argument*/NULL);
		String_t** L_18 = &(__this->___FeedLinkName_25);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral205, L_18, /*hidden argument*/NULL);
		String_t** L_19 = &(__this->___FeedLinkDescription_27);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral206, L_19, /*hidden argument*/NULL);
		String_t** L_20 = &(__this->___FeedLinkCaption_26);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral207, L_20, /*hidden argument*/NULL);
		String_t** L_21 = &(__this->___FeedPicture_28);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral208, L_21, /*hidden argument*/NULL);
		String_t** L_22 = &(__this->___FeedMediaSource_29);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral209, L_22, /*hidden argument*/NULL);
		String_t** L_23 = &(__this->___FeedActionName_30);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral210, L_23, /*hidden argument*/NULL);
		String_t** L_24 = &(__this->___FeedActionLink_31);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral211, L_24, /*hidden argument*/NULL);
		String_t** L_25 = &(__this->___FeedReference_32);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral212, L_25, /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3377(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t642* L_26 = ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t643 * L_27 = GUILayout_Width_m3423(NULL /*static, unused*/, (150.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_27);
		*((GUILayoutOption_t643 **)(GUILayoutOption_t643 **)SZArrayLdElema(L_26, 0)) = (GUILayoutOption_t643 *)L_27;
		GUILayout_Label_m3378(NULL /*static, unused*/, (String_t*) &_stringLiteral213, L_26, /*hidden argument*/NULL);
		bool L_28 = (__this->___IncludeFeedProperties_33);
		bool L_29 = GUILayout_Toggle_m3424(NULL /*static, unused*/, L_28, (String_t*) &_stringLiteral214, ((GUILayoutOptionU5BU5D_t642*)SZArrayNew(GUILayoutOptionU5BU5D_t642_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___IncludeFeedProperties_33 = L_29;
		GUILayout_EndHorizontal_m3380(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_30 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral215, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0278;
		}
	}

IL_0250:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallFBFeed_m563(__this, /*hidden argument*/NULL);
		((ConsoleBase_t109 *)__this)->___status_2 = (String_t*) &_stringLiteral216;
		goto IL_0278;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0266;
		throw e;
	}

CATCH_0266:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_31 = V_2;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_31);
		((ConsoleBase_t109 *)__this)->___status_2 = L_32;
		goto IL_0278;
	} // end catch (depth: 1)

IL_0278:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_33 = &(__this->___ApiQuery_36);
		ConsoleBase_LabelAndTextField_m530(__this, (String_t*) &_stringLiteral217, L_33, /*hidden argument*/NULL);
		bool L_34 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral218, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_02b4;
		}
	}
	{
		((ConsoleBase_t109 *)__this)->___status_2 = (String_t*) &_stringLiteral219;
		InteractiveConsole_CallFBAPI_m565(__this, /*hidden argument*/NULL);
	}

IL_02b4:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		bool L_35 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral220, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_02e6;
		}
	}
	{
		((ConsoleBase_t109 *)__this)->___status_2 = (String_t*) &_stringLiteral221;
		Object_t * L_36 = InteractiveConsole_TakeScreenshot_m571(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3425(__this, L_36, /*hidden argument*/NULL);
	}

IL_02e6:
	{
		bool L_37 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral222, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_02fc;
		}
	}
	{
		InteractiveConsole_CallFBGetDeepLink_m566(__this, /*hidden argument*/NULL);
	}

IL_02fc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		bool L_38 = ConsoleBase_Button_m529(__this, (String_t*) &_stringLiteral223, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0323;
		}
	}
	{
		((ConsoleBase_t109 *)__this)->___status_2 = (String_t*) &_stringLiteral224;
		InteractiveConsole_CallAppEventLogEvent_m567(__this, /*hidden argument*/NULL);
	}

IL_0323:
	{
		GUILayout_Space_m3392(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_EndVertical_m3402(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndScrollView_m3403(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_39 = ConsoleBase_IsHorizontalLayout_m531(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0347;
		}
	}
	{
		GUILayout_EndVertical_m3402(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0347:
	{
		ConsoleBase_AddCommonFooter_m534(__this, /*hidden argument*/NULL);
		bool L_40 = ConsoleBase_IsHorizontalLayout_m531(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_035d;
		}
	}
	{
		GUILayout_EndHorizontal_m3380(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_035d:
	{
		return;
	}
}
// System.Collections.IEnumerator InteractiveConsole::TakeScreenshot()
extern TypeInfo* U3CTakeScreenshotU3Ec__Iterator0_t114_il2cpp_TypeInfo_var;
extern "C" Object_t * InteractiveConsole_TakeScreenshot_m571 (InteractiveConsole_t113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTakeScreenshotU3Ec__Iterator0_t114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	U3CTakeScreenshotU3Ec__Iterator0_t114 * V_0 = {0};
	{
		U3CTakeScreenshotU3Ec__Iterator0_t114 * L_0 = (U3CTakeScreenshotU3Ec__Iterator0_t114 *)il2cpp_codegen_object_new (U3CTakeScreenshotU3Ec__Iterator0_t114_il2cpp_TypeInfo_var);
		U3CTakeScreenshotU3Ec__Iterator0__ctor_m553(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTakeScreenshotU3Ec__Iterator0_t114 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_7 = __this;
		U3CTakeScreenshotU3Ec__Iterator0_t114 * L_2 = V_0;
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
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t121_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3401_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3426_MethodInfo_var;
extern "C" void AN_ActivityTemplate__ctor_m572 (AN_ActivityTemplate_t117 * __this, bool ___isLauncher, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		Dictionary_2_t121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		Dictionary_2__ctor_m3401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		Dictionary_2__ctor_m3426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->____name_5 = L_0;
		AN_BaseTemplate__ctor_m589(__this, /*hidden argument*/NULL);
		bool L_1 = ___isLauncher;
		__this->____isLauncher_4 = L_1;
		String_t* L_2 = ___name;
		__this->____name_5 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, __this);
		__this->____id_3 = L_3;
		Dictionary_2_t122 * L_4 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3401(L_4, /*hidden argument*/Dictionary_2__ctor_m3401_MethodInfo_var);
		((AN_BaseTemplate_t118 *)__this)->____values_1 = L_4;
		Dictionary_2_t121 * L_5 = (Dictionary_2_t121 *)il2cpp_codegen_object_new (Dictionary_2_t121_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3426(L_5, /*hidden argument*/Dictionary_2__ctor_m3426_MethodInfo_var);
		((AN_BaseTemplate_t118 *)__this)->____properties_0 = L_5;
		String_t* L_6 = ___name;
		AN_BaseTemplate_SetValue_m600(__this, (String_t*) &_stringLiteral229, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ActivityTemplate::SetName(System.String)
extern "C" void AN_ActivityTemplate_SetName_m573 (AN_ActivityTemplate_t117 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->____name_5 = L_0;
		String_t* L_1 = ___name;
		AN_BaseTemplate_SetValue_m600(__this, (String_t*) &_stringLiteral229, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ActivityTemplate::SetAsLauncher(System.Boolean)
extern "C" void AN_ActivityTemplate_SetAsLauncher_m574 (AN_ActivityTemplate_t117 * __this, bool ___isLauncher, const MethodInfo* method)
{
	{
		bool L_0 = ___isLauncher;
		__this->____isLauncher_4 = L_0;
		return;
	}
}
// AN_PropertyTemplate AN_ActivityTemplate::GetLauncherPropertyTemplate()
extern TypeInfo* AN_PropertyTemplate_t126_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t126 * AN_ActivityTemplate_GetLauncherPropertyTemplate_m575 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	AN_PropertyTemplate_t126 * V_1 = {0};
	{
		AN_PropertyTemplate_t126 * L_0 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_0, (String_t*) &_stringLiteral230, /*hidden argument*/NULL);
		V_0 = L_0;
		AN_PropertyTemplate_t126 * L_1 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_1, (String_t*) &_stringLiteral231, /*hidden argument*/NULL);
		V_1 = L_1;
		AN_PropertyTemplate_t126 * L_2 = V_1;
		NullCheck(L_2);
		AN_BaseTemplate_SetValue_m600(L_2, (String_t*) &_stringLiteral229, (String_t*) &_stringLiteral232, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_3 = V_0;
		AN_PropertyTemplate_t126 * L_4 = V_1;
		NullCheck(L_3);
		AN_BaseTemplate_AddProperty_m599(L_3, (String_t*) &_stringLiteral231, L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_5 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_5, (String_t*) &_stringLiteral233, /*hidden argument*/NULL);
		V_1 = L_5;
		AN_PropertyTemplate_t126 * L_6 = V_1;
		NullCheck(L_6);
		AN_BaseTemplate_SetValue_m600(L_6, (String_t*) &_stringLiteral229, (String_t*) &_stringLiteral234, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_7 = V_0;
		AN_PropertyTemplate_t126 * L_8 = V_1;
		NullCheck(L_7);
		AN_BaseTemplate_AddProperty_m599(L_7, (String_t*) &_stringLiteral233, L_8, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean AN_ActivityTemplate::IsLauncherProperty(AN_PropertyTemplate)
extern TypeInfo* Enumerator_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3427_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3428_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3429_MethodInfo_var;
extern "C" bool AN_ActivityTemplate_IsLauncherProperty_m576 (AN_ActivityTemplate_t117 * __this, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_get_Current_m3428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Enumerator_MoveNext_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	Enumerator_t654  V_1 = {0};
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_PropertyTemplate_t126 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = AN_PropertyTemplate_get_Tag_m619(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_1, (String_t*) &_stringLiteral230);
		if (!L_2)
		{
			goto IL_0090;
		}
	}
	{
		AN_PropertyTemplate_t126 * L_3 = ___property;
		NullCheck(L_3);
		Dictionary_2_t121 * L_4 = AN_BaseTemplate_get_Properties_m607(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_t123 * L_5 = (List_1_t123 *)VirtFuncInvoker1< List_1_t123 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral233);
		NullCheck(L_5);
		Enumerator_t654  L_6 = List_1_GetEnumerator_m3427(L_5, /*hidden argument*/List_1_GetEnumerator_m3427_MethodInfo_var);
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
			AN_PropertyTemplate_t126 * L_7 = Enumerator_get_Current_m3428((&V_1), /*hidden argument*/Enumerator_get_Current_m3428_MethodInfo_var);
			V_0 = L_7;
			AN_PropertyTemplate_t126 * L_8 = V_0;
			NullCheck(L_8);
			Dictionary_2_t122 * L_9 = AN_BaseTemplate_get_Values_m606(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			bool L_10 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_9, (String_t*) &_stringLiteral229);
			if (!L_10)
			{
				goto IL_0073;
			}
		}

IL_004d:
		{
			AN_PropertyTemplate_t126 * L_11 = V_0;
			NullCheck(L_11);
			Dictionary_2_t122 * L_12 = AN_BaseTemplate_get_Values_m606(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			String_t* L_13 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_12, (String_t*) &_stringLiteral229);
			NullCheck(L_13);
			bool L_14 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_13, (String_t*) &_stringLiteral234);
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
			bool L_15 = Enumerator_MoveNext_m3429((&V_1), /*hidden argument*/Enumerator_MoveNext_m3429_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_t654  L_16 = V_1;
		Enumerator_t654  L_17 = L_16;
		Object_t * L_18 = Box(Enumerator_t654_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_18);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x92, IL_0092)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
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
extern "C" void AN_ActivityTemplate_ToXmlElement_m577 (AN_ActivityTemplate_t117 * __this, XmlDocument_t621 * ___doc, XmlElement_t622 * ___parent, const MethodInfo* method)
{
	AN_PropertyTemplate_t126 * V_0 = {0};
	{
		XmlDocument_t621 * L_0 = ___doc;
		XmlElement_t622 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m605(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		V_0 = (AN_PropertyTemplate_t126 *)NULL;
		bool L_2 = (__this->____isLauncher_4);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		AN_PropertyTemplate_t126 * L_3 = AN_ActivityTemplate_GetLauncherPropertyTemplate_m575(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		AN_PropertyTemplate_t126 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = AN_PropertyTemplate_get_Tag_m619(L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_6 = V_0;
		AN_BaseTemplate_AddProperty_m599(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		XmlDocument_t621 * L_7 = ___doc;
		XmlElement_t622 * L_8 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m604(__this, L_7, L_8, __this, /*hidden argument*/NULL);
		bool L_9 = (__this->____isLauncher_4);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_t121 * L_10 = (((AN_BaseTemplate_t118 *)__this)->____properties_0);
		NullCheck(L_10);
		List_1_t123 * L_11 = (List_1_t123 *)VirtFuncInvoker1< List_1_t123 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral230);
		AN_PropertyTemplate_t126 * L_12 = V_0;
		NullCheck(L_11);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t126 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_11, L_12);
	}

IL_0054:
	{
		return;
	}
}
// System.Boolean AN_ActivityTemplate::get_IsLauncher()
extern "C" bool AN_ActivityTemplate_get_IsLauncher_m578 (AN_ActivityTemplate_t117 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isLauncher_4);
		return L_0;
	}
}
// System.String AN_ActivityTemplate::get_Name()
extern "C" String_t* AN_ActivityTemplate_get_Name_m579 (AN_ActivityTemplate_t117 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_5);
		return L_0;
	}
}
// System.Int32 AN_ActivityTemplate::get_Id()
extern "C" int32_t AN_ActivityTemplate_get_Id_m580 (AN_ActivityTemplate_t117 * __this, const MethodInfo* method)
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
extern TypeInfo* Dictionary_2_t119_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3430_MethodInfo_var;
extern "C" void AN_ApplicationTemplate__ctor_m581 (AN_ApplicationTemplate_t120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		Dictionary_2__ctor_m3430_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BaseTemplate__ctor_m589(__this, /*hidden argument*/NULL);
		Dictionary_2_t119 * L_0 = (Dictionary_2_t119 *)il2cpp_codegen_object_new (Dictionary_2_t119_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3430(L_0, /*hidden argument*/Dictionary_2__ctor_m3430_MethodInfo_var);
		__this->____activities_2 = L_0;
		return;
	}
}
// System.Void AN_ApplicationTemplate::AddActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_AddActivity_m582 (AN_ApplicationTemplate_t120 * __this, AN_ActivityTemplate_t117 * ___activity, const MethodInfo* method)
{
	{
		Dictionary_2_t119 * L_0 = (__this->____activities_2);
		AN_ActivityTemplate_t117 * L_1 = ___activity;
		NullCheck(L_1);
		int32_t L_2 = AN_ActivityTemplate_get_Id_m580(L_1, /*hidden argument*/NULL);
		AN_ActivityTemplate_t117 * L_3 = ___activity;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, AN_ActivityTemplate_t117 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::Add(!0,!1) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void AN_ApplicationTemplate::RemoveActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_RemoveActivity_m583 (AN_ApplicationTemplate_t120 * __this, AN_ActivityTemplate_t117 * ___activity, const MethodInfo* method)
{
	{
		Dictionary_2_t119 * L_0 = (__this->____activities_2);
		AN_ActivityTemplate_t117 * L_1 = ___activity;
		NullCheck(L_1);
		int32_t L_2 = AN_ActivityTemplate_get_Id_m580(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::Remove(!0) */, L_0, L_2);
		return;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetOrCreateActivityWithName(System.String)
extern TypeInfo* AN_ActivityTemplate_t117_il2cpp_TypeInfo_var;
extern "C" AN_ActivityTemplate_t117 * AN_ApplicationTemplate_GetOrCreateActivityWithName_m584 (AN_ApplicationTemplate_t120 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_ActivityTemplate_t117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	AN_ActivityTemplate_t117 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		AN_ActivityTemplate_t117 * L_1 = AN_ApplicationTemplate_GetActivityWithName_m585(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_ActivityTemplate_t117 * L_2 = V_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___name;
		AN_ActivityTemplate_t117 * L_4 = (AN_ActivityTemplate_t117 *)il2cpp_codegen_object_new (AN_ActivityTemplate_t117_il2cpp_TypeInfo_var);
		AN_ActivityTemplate__ctor_m572(L_4, 0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AN_ActivityTemplate_t117 * L_5 = V_0;
		AN_ApplicationTemplate_AddActivity_m582(__this, L_5, /*hidden argument*/NULL);
	}

IL_001d:
	{
		AN_ActivityTemplate_t117 * L_6 = V_0;
		return L_6;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetActivityWithName(System.String)
extern TypeInfo* Enumerator_t656_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3431_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3432_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3433_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3434_MethodInfo_var;
extern "C" AN_ActivityTemplate_t117 * AN_ApplicationTemplate_GetActivityWithName_m585 (AN_ApplicationTemplate_t120 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m3431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483719);
		Enumerator_get_Current_m3432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		KeyValuePair_2_get_Value_m3433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		Enumerator_MoveNext_m3434_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t655  V_0 = {0};
	Enumerator_t656  V_1 = {0};
	AN_ActivityTemplate_t117 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t119 * L_0 = AN_ApplicationTemplate_get_Activities_m588(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t656  L_1 = Dictionary_2_GetEnumerator_m3431(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3431_MethodInfo_var);
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
			KeyValuePair_2_t655  L_2 = Enumerator_get_Current_m3432((&V_1), /*hidden argument*/Enumerator_get_Current_m3432_MethodInfo_var);
			V_0 = L_2;
			AN_ActivityTemplate_t117 * L_3 = KeyValuePair_2_get_Value_m3433((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3433_MethodInfo_var);
			NullCheck(L_3);
			String_t* L_4 = AN_ActivityTemplate_get_Name_m579(L_3, /*hidden argument*/NULL);
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
			AN_ActivityTemplate_t117 * L_7 = KeyValuePair_2_get_Value_m3433((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3433_MethodInfo_var);
			V_2 = L_7;
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}

IL_003d:
		{
			bool L_8 = Enumerator_MoveNext_m3434((&V_1), /*hidden argument*/Enumerator_MoveNext_m3434_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Enumerator_t656  L_9 = V_1;
		Enumerator_t656  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t656_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005a:
	{
		return (AN_ActivityTemplate_t117 *)NULL;
	}

IL_005c:
	{
		AN_ActivityTemplate_t117 * L_12 = V_2;
		return L_12;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetLauncherActivity()
extern TypeInfo* Enumerator_t656_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3431_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3432_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3433_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3434_MethodInfo_var;
extern "C" AN_ActivityTemplate_t117 * AN_ApplicationTemplate_GetLauncherActivity_m586 (AN_ApplicationTemplate_t120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m3431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483719);
		Enumerator_get_Current_m3432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		KeyValuePair_2_get_Value_m3433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		Enumerator_MoveNext_m3434_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t655  V_0 = {0};
	Enumerator_t656  V_1 = {0};
	AN_ActivityTemplate_t117 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t119 * L_0 = AN_ApplicationTemplate_get_Activities_m588(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t656  L_1 = Dictionary_2_GetEnumerator_m3431(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3431_MethodInfo_var);
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
			KeyValuePair_2_t655  L_2 = Enumerator_get_Current_m3432((&V_1), /*hidden argument*/Enumerator_get_Current_m3432_MethodInfo_var);
			V_0 = L_2;
			AN_ActivityTemplate_t117 * L_3 = KeyValuePair_2_get_Value_m3433((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3433_MethodInfo_var);
			NullCheck(L_3);
			bool L_4 = AN_ActivityTemplate_get_IsLauncher_m578(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_002a:
		{
			AN_ActivityTemplate_t117 * L_5 = KeyValuePair_2_get_Value_m3433((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3433_MethodInfo_var);
			V_2 = L_5;
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}

IL_0037:
		{
			bool L_6 = Enumerator_MoveNext_m3434((&V_1), /*hidden argument*/Enumerator_MoveNext_m3434_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_t656  L_7 = V_1;
		Enumerator_t656  L_8 = L_7;
		Object_t * L_9 = Box(Enumerator_t656_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_9);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0054:
	{
		return (AN_ActivityTemplate_t117 *)NULL;
	}

IL_0056:
	{
		AN_ActivityTemplate_t117 * L_10 = V_2;
		return L_10;
	}
}
// System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern TypeInfo* Enumerator_t657_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3435_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3436_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3437_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3439_MethodInfo_var;
extern "C" void AN_ApplicationTemplate_ToXmlElement_m587 (AN_ApplicationTemplate_t120 * __this, XmlDocument_t621 * ___doc, XmlElement_t622 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_get_Keys_m3435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483723);
		KeyCollection_GetEnumerator_m3436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		Enumerator_get_Current_m3437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483725);
		Enumerator_MoveNext_m3439_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483726);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t657  V_1 = {0};
	XmlElement_t622 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t621 * L_0 = ___doc;
		XmlElement_t622 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m605(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t621 * L_2 = ___doc;
		XmlElement_t622 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m604(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		Dictionary_2_t119 * L_4 = (__this->____activities_2);
		NullCheck(L_4);
		KeyCollection_t658 * L_5 = Dictionary_2_get_Keys_m3435(L_4, /*hidden argument*/Dictionary_2_get_Keys_m3435_MethodInfo_var);
		NullCheck(L_5);
		Enumerator_t657  L_6 = KeyCollection_GetEnumerator_m3436(L_5, /*hidden argument*/KeyCollection_GetEnumerator_m3436_MethodInfo_var);
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
			int32_t L_7 = Enumerator_get_Current_m3437((&V_1), /*hidden argument*/Enumerator_get_Current_m3437_MethodInfo_var);
			V_0 = L_7;
			XmlDocument_t621 * L_8 = ___doc;
			NullCheck(L_8);
			XmlElement_t622 * L_9 = XmlDocument_CreateElement_m3438(L_8, (String_t*) &_stringLiteral235, /*hidden argument*/NULL);
			V_2 = L_9;
			Dictionary_2_t119 * L_10 = (__this->____activities_2);
			int32_t L_11 = V_0;
			NullCheck(L_10);
			AN_ActivityTemplate_t117 * L_12 = (AN_ActivityTemplate_t117 *)VirtFuncInvoker1< AN_ActivityTemplate_t117 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::get_Item(!0) */, L_10, L_11);
			XmlDocument_t621 * L_13 = ___doc;
			XmlElement_t622 * L_14 = V_2;
			NullCheck(L_12);
			VirtActionInvoker2< XmlDocument_t621 *, XmlElement_t622 * >::Invoke(4 /* System.Void AN_ActivityTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_12, L_13, L_14);
			XmlElement_t622 * L_15 = ___parent;
			XmlElement_t622 * L_16 = V_2;
			NullCheck(L_15);
			VirtFuncInvoker1< XmlNode_t659 *, XmlNode_t659 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_15, L_16);
		}

IL_0057:
		{
			bool L_17 = Enumerator_MoveNext_m3439((&V_1), /*hidden argument*/Enumerator_MoveNext_m3439_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_t657  L_18 = V_1;
		Enumerator_t657  L_19 = L_18;
		Object_t * L_20 = Box(Enumerator_t657_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_20);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_20);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0074:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate> AN_ApplicationTemplate::get_Activities()
extern "C" Dictionary_2_t119 * AN_ApplicationTemplate_get_Activities_m588 (AN_ApplicationTemplate_t120 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t119 * L_0 = (__this->____activities_2);
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
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t121_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3401_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3426_MethodInfo_var;
extern "C" void AN_BaseTemplate__ctor_m589 (AN_BaseTemplate_t118 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		Dictionary_2_t121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		Dictionary_2__ctor_m3401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		Dictionary_2__ctor_m3426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Dictionary_2_t122 * L_0 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3401(L_0, /*hidden argument*/Dictionary_2__ctor_m3401_MethodInfo_var);
		__this->____values_1 = L_0;
		Dictionary_2_t121 * L_1 = (Dictionary_2_t121 *)il2cpp_codegen_object_new (Dictionary_2_t121_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3426(L_1, /*hidden argument*/Dictionary_2__ctor_m3426_MethodInfo_var);
		__this->____properties_0 = L_1;
		return;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreateIntentFilterWithName(System.String)
extern TypeInfo* AN_PropertyTemplate_t126_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetOrCreateIntentFilterWithName_m590 (AN_BaseTemplate_t118 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	AN_PropertyTemplate_t126 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		AN_PropertyTemplate_t126 * L_1 = AN_BaseTemplate_GetIntentFilterWithName_m591(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_PropertyTemplate_t126 * L_2 = V_0;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		AN_PropertyTemplate_t126 * L_3 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_3, (String_t*) &_stringLiteral230, /*hidden argument*/NULL);
		V_0 = L_3;
		AN_PropertyTemplate_t126 * L_4 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_4, (String_t*) &_stringLiteral231, /*hidden argument*/NULL);
		V_1 = L_4;
		AN_PropertyTemplate_t126 * L_5 = V_1;
		String_t* L_6 = ___name;
		NullCheck(L_5);
		AN_BaseTemplate_SetValue_m600(L_5, (String_t*) &_stringLiteral229, L_6, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_7 = V_0;
		AN_PropertyTemplate_t126 * L_8 = V_1;
		NullCheck(L_7);
		AN_BaseTemplate_AddProperty_m598(L_7, L_8, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_9 = V_0;
		AN_BaseTemplate_AddProperty_m598(__this, L_9, /*hidden argument*/NULL);
	}

IL_003e:
	{
		AN_PropertyTemplate_t126 * L_10 = V_0;
		return L_10;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetIntentFilterWithName(System.String)
extern TypeInfo* Enumerator_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3427_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3428_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3429_MethodInfo_var;
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetIntentFilterWithName_m591 (AN_BaseTemplate_t118 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_get_Current_m3428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Enumerator_MoveNext_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	List_1_t123 * V_1 = {0};
	AN_PropertyTemplate_t126 * V_2 = {0};
	Enumerator_t654  V_3 = {0};
	String_t* V_4 = {0};
	AN_PropertyTemplate_t126 * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral230;
		String_t* L_0 = V_0;
		List_1_t123 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m597(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		List_1_t123 * L_2 = V_1;
		NullCheck(L_2);
		Enumerator_t654  L_3 = List_1_GetEnumerator_m3427(L_2, /*hidden argument*/List_1_GetEnumerator_m3427_MethodInfo_var);
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
			AN_PropertyTemplate_t126 * L_4 = Enumerator_get_Current_m3428((&V_3), /*hidden argument*/Enumerator_get_Current_m3428_MethodInfo_var);
			V_2 = L_4;
			AN_PropertyTemplate_t126 * L_5 = V_2;
			String_t* L_6 = AN_BaseTemplate_GetIntentFilterName_m592(__this, L_5, /*hidden argument*/NULL);
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
			AN_PropertyTemplate_t126 * L_10 = V_2;
			V_5 = L_10;
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}

IL_0040:
		{
			bool L_11 = Enumerator_MoveNext_m3429((&V_3), /*hidden argument*/Enumerator_MoveNext_m3429_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_t654  L_12 = V_3;
		Enumerator_t654  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t654_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005d:
	{
		return (AN_PropertyTemplate_t126 *)NULL;
	}

IL_005f:
	{
		AN_PropertyTemplate_t126 * L_15 = V_5;
		return L_15;
	}
}
// System.String AN_BaseTemplate::GetIntentFilterName(AN_PropertyTemplate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AN_BaseTemplate_GetIntentFilterName_m592 (AN_BaseTemplate_t118 * __this, AN_PropertyTemplate_t126 * ___intent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t123 * V_0 = {0};
	{
		AN_PropertyTemplate_t126 * L_0 = ___intent;
		NullCheck(L_0);
		List_1_t123 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m597(L_0, (String_t*) &_stringLiteral231, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t123 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_t123 * L_4 = V_0;
		NullCheck(L_4);
		AN_PropertyTemplate_t126 * L_5 = (AN_PropertyTemplate_t126 *)VirtFuncInvoker1< AN_PropertyTemplate_t126 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Item(System.Int32) */, L_4, 0);
		NullCheck(L_5);
		String_t* L_6 = AN_BaseTemplate_GetValue_m601(L_5, (String_t*) &_stringLiteral229, /*hidden argument*/NULL);
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
extern TypeInfo* AN_PropertyTemplate_t126_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetOrCreatePropertyWithName_m593 (AN_BaseTemplate_t118 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		String_t* L_1 = ___name;
		AN_PropertyTemplate_t126 * L_2 = AN_BaseTemplate_GetPropertyWithName_m594(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		AN_PropertyTemplate_t126 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___tag;
		AN_PropertyTemplate_t126 * L_5 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		AN_PropertyTemplate_t126 * L_6 = V_0;
		String_t* L_7 = ___name;
		NullCheck(L_6);
		AN_BaseTemplate_SetValue_m600(L_6, (String_t*) &_stringLiteral229, L_7, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_8 = V_0;
		AN_BaseTemplate_AddProperty_m598(__this, L_8, /*hidden argument*/NULL);
	}

IL_0029:
	{
		AN_PropertyTemplate_t126 * L_9 = V_0;
		return L_9;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithName(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3427_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3428_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3429_MethodInfo_var;
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetPropertyWithName_m594 (AN_BaseTemplate_t118 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_get_Current_m3428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Enumerator_MoveNext_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t123 * V_0 = {0};
	AN_PropertyTemplate_t126 * V_1 = {0};
	Enumerator_t654  V_2 = {0};
	AN_PropertyTemplate_t126 * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___tag;
		List_1_t123 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m597(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t123 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t654  L_3 = List_1_GetEnumerator_m3427(L_2, /*hidden argument*/List_1_GetEnumerator_m3427_MethodInfo_var);
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
			AN_PropertyTemplate_t126 * L_4 = Enumerator_get_Current_m3428((&V_2), /*hidden argument*/Enumerator_get_Current_m3428_MethodInfo_var);
			V_1 = L_4;
			AN_PropertyTemplate_t126 * L_5 = V_1;
			NullCheck(L_5);
			Dictionary_2_t122 * L_6 = AN_BaseTemplate_get_Values_m606(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_6, (String_t*) &_stringLiteral229);
			if (!L_7)
			{
				goto IL_0053;
			}
		}

IL_0031:
		{
			AN_PropertyTemplate_t126 * L_8 = V_1;
			NullCheck(L_8);
			Dictionary_2_t122 * L_9 = AN_BaseTemplate_get_Values_m606(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral229);
			String_t* L_11 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_12 = String_op_Equality_m456(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0053;
			}
		}

IL_004c:
		{
			AN_PropertyTemplate_t126 * L_13 = V_1;
			V_3 = L_13;
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}

IL_0053:
		{
			bool L_14 = Enumerator_MoveNext_m3429((&V_2), /*hidden argument*/Enumerator_MoveNext_m3429_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_t654  L_15 = V_2;
		Enumerator_t654  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t654_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_17);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0070:
	{
		return (AN_PropertyTemplate_t126 *)NULL;
	}

IL_0072:
	{
		AN_PropertyTemplate_t126 * L_18 = V_3;
		return L_18;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithTag(System.String)
extern TypeInfo* AN_PropertyTemplate_t126_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetOrCreatePropertyWithTag_m595 (AN_BaseTemplate_t118 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		AN_PropertyTemplate_t126 * L_1 = AN_BaseTemplate_GetPropertyWithTag_m596(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_PropertyTemplate_t126 * L_2 = V_0;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = ___tag;
		AN_PropertyTemplate_t126 * L_4 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AN_PropertyTemplate_t126 * L_5 = V_0;
		AN_BaseTemplate_AddProperty_m598(__this, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		AN_PropertyTemplate_t126 * L_6 = V_0;
		return L_6;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithTag(System.String)
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetPropertyWithTag_m596 (AN_BaseTemplate_t118 * __this, String_t* ___tag, const MethodInfo* method)
{
	List_1_t123 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		List_1_t123 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m597(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t123 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t123 * L_4 = V_0;
		NullCheck(L_4);
		AN_PropertyTemplate_t126 * L_5 = (AN_PropertyTemplate_t126 *)VirtFuncInvoker1< AN_PropertyTemplate_t126 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Item(System.Int32) */, L_4, 0);
		return L_5;
	}

IL_001c:
	{
		return (AN_PropertyTemplate_t126 *)NULL;
	}
}
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_BaseTemplate::GetPropertiesWithTag(System.String)
extern TypeInfo* List_1_t123_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3440_MethodInfo_var;
extern "C" List_1_t123 * AN_BaseTemplate_GetPropertiesWithTag_m597 (AN_BaseTemplate_t118 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		List_1__ctor_m3440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t121 * L_0 = AN_BaseTemplate_get_Properties_m607(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t121 * L_3 = AN_BaseTemplate_get_Properties_m607(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___tag;
		NullCheck(L_3);
		List_1_t123 * L_5 = (List_1_t123 *)VirtFuncInvoker1< List_1_t123 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		List_1_t123 * L_6 = (List_1_t123 *)il2cpp_codegen_object_new (List_1_t123_il2cpp_TypeInfo_var);
		List_1__ctor_m3440(L_6, /*hidden argument*/List_1__ctor_m3440_MethodInfo_var);
		return L_6;
	}
}
// System.Void AN_BaseTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
// System.Void AN_BaseTemplate::AddProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_AddProperty_m598 (AN_BaseTemplate_t118 * __this, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method)
{
	{
		AN_PropertyTemplate_t126 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = AN_PropertyTemplate_get_Tag_m619(L_0, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_2 = ___property;
		AN_BaseTemplate_AddProperty_m599(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BaseTemplate::AddProperty(System.String,AN_PropertyTemplate)
extern TypeInfo* List_1_t123_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3440_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddProperty_m599 (AN_BaseTemplate_t118 * __this, String_t* ___tag, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		List_1__ctor_m3440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t123 * V_0 = {0};
	{
		Dictionary_2_t121 * L_0 = (__this->____properties_0);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		List_1_t123 * L_3 = (List_1_t123 *)il2cpp_codegen_object_new (List_1_t123_il2cpp_TypeInfo_var);
		List_1__ctor_m3440(L_3, /*hidden argument*/List_1__ctor_m3440_MethodInfo_var);
		V_0 = L_3;
		Dictionary_2_t121 * L_4 = (__this->____properties_0);
		String_t* L_5 = ___tag;
		List_1_t123 * L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, List_1_t123 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Add(!0,!1) */, L_4, L_5, L_6);
	}

IL_0024:
	{
		Dictionary_2_t121 * L_7 = (__this->____properties_0);
		String_t* L_8 = ___tag;
		NullCheck(L_7);
		List_1_t123 * L_9 = (List_1_t123 *)VirtFuncInvoker1< List_1_t123 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_7, L_8);
		AN_PropertyTemplate_t126 * L_10 = ___property;
		NullCheck(L_9);
		VirtActionInvoker1< AN_PropertyTemplate_t126 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<AN_PropertyTemplate>::Add(!0) */, L_9, L_10);
		return;
	}
}
// System.Void AN_BaseTemplate::SetValue(System.String,System.String)
extern "C" void AN_BaseTemplate_SetValue_m600 (AN_BaseTemplate_t118 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t122 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t122 * L_3 = (__this->____values_1);
		String_t* L_4 = ___key;
		String_t* L_5 = ___value;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_3, L_4, L_5);
		goto IL_0030;
	}

IL_0023:
	{
		Dictionary_2_t122 * L_6 = (__this->____values_1);
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
extern "C" String_t* AN_BaseTemplate_GetValue_m601 (AN_BaseTemplate_t118 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t122 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t122 * L_3 = (__this->____values_1);
		String_t* L_4 = ___key;
		NullCheck(L_3);
		String_t* L_5 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_3, L_4);
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
extern "C" void AN_BaseTemplate_RemoveProperty_m602 (AN_BaseTemplate_t118 * __this, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method)
{
	{
		Dictionary_2_t121 * L_0 = (__this->____properties_0);
		AN_PropertyTemplate_t126 * L_1 = ___property;
		NullCheck(L_1);
		String_t* L_2 = AN_PropertyTemplate_get_Tag_m619(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t123 * L_3 = (List_1_t123 *)VirtFuncInvoker1< List_1_t123 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_0, L_2);
		AN_PropertyTemplate_t126 * L_4 = ___property;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t126 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_3, L_4);
		return;
	}
}
// System.Void AN_BaseTemplate::RemoveValue(System.String)
extern "C" void AN_BaseTemplate_RemoveValue_m603 (AN_BaseTemplate_t118 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t122 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_BaseTemplate::AddPropertiesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern TypeInfo* Enumerator_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t660_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3441_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3442_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3443_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3427_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3428_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3429_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3444_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddPropertiesToXml_m604 (AN_BaseTemplate_t118 * __this, XmlDocument_t621 * ___doc, XmlElement_t622 * ___parent, AN_BaseTemplate_t118 * ___template, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Enumerator_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		Dictionary_2_get_Keys_m3441_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483728);
		KeyCollection_GetEnumerator_m3442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483729);
		Enumerator_get_Current_m3443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		List_1_GetEnumerator_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_get_Current_m3428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Enumerator_MoveNext_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		Enumerator_MoveNext_m3444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t660  V_1 = {0};
	AN_PropertyTemplate_t126 * V_2 = {0};
	Enumerator_t654  V_3 = {0};
	XmlElement_t622 * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_BaseTemplate_t118 * L_0 = ___template;
		NullCheck(L_0);
		Dictionary_2_t121 * L_1 = AN_BaseTemplate_get_Properties_m607(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeyCollection_t661 * L_2 = Dictionary_2_get_Keys_m3441(L_1, /*hidden argument*/Dictionary_2_get_Keys_m3441_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t660  L_3 = KeyCollection_GetEnumerator_m3442(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m3442_MethodInfo_var);
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
			String_t* L_4 = Enumerator_get_Current_m3443((&V_1), /*hidden argument*/Enumerator_get_Current_m3443_MethodInfo_var);
			V_0 = L_4;
			AN_BaseTemplate_t118 * L_5 = ___template;
			NullCheck(L_5);
			Dictionary_2_t121 * L_6 = AN_BaseTemplate_get_Properties_m607(L_5, /*hidden argument*/NULL);
			String_t* L_7 = V_0;
			NullCheck(L_6);
			List_1_t123 * L_8 = (List_1_t123 *)VirtFuncInvoker1< List_1_t123 *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_6, L_7);
			NullCheck(L_8);
			Enumerator_t654  L_9 = List_1_GetEnumerator_m3427(L_8, /*hidden argument*/List_1_GetEnumerator_m3427_MethodInfo_var);
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
				AN_PropertyTemplate_t126 * L_10 = Enumerator_get_Current_m3428((&V_3), /*hidden argument*/Enumerator_get_Current_m3428_MethodInfo_var);
				V_2 = L_10;
				XmlDocument_t621 * L_11 = ___doc;
				String_t* L_12 = V_0;
				NullCheck(L_11);
				XmlElement_t622 * L_13 = XmlDocument_CreateElement_m3438(L_11, L_12, /*hidden argument*/NULL);
				V_4 = L_13;
				XmlDocument_t621 * L_14 = ___doc;
				XmlElement_t622 * L_15 = V_4;
				AN_PropertyTemplate_t126 * L_16 = V_2;
				AN_BaseTemplate_AddAttributesToXml_m605(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
				XmlDocument_t621 * L_17 = ___doc;
				XmlElement_t622 * L_18 = V_4;
				AN_PropertyTemplate_t126 * L_19 = V_2;
				AN_BaseTemplate_AddPropertiesToXml_m604(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
				XmlElement_t622 * L_20 = ___parent;
				XmlElement_t622 * L_21 = V_4;
				NullCheck(L_20);
				VirtFuncInvoker1< XmlNode_t659 *, XmlNode_t659 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_20, L_21);
			}

IL_0063:
			{
				bool L_22 = Enumerator_MoveNext_m3429((&V_3), /*hidden argument*/Enumerator_MoveNext_m3429_MethodInfo_var);
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
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0074;
		}

FINALLY_0074:
		{ // begin finally (depth: 2)
			Enumerator_t654  L_23 = V_3;
			Enumerator_t654  L_24 = L_23;
			Object_t * L_25 = Box(Enumerator_t654_il2cpp_TypeInfo_var, &L_24);
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(116)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(116)
		{
			IL2CPP_JUMP_TBL(0x80, IL_0080)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_0080:
		{
			bool L_26 = Enumerator_MoveNext_m3444((&V_1), /*hidden argument*/Enumerator_MoveNext_m3444_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		Enumerator_t660  L_27 = V_1;
		Enumerator_t660  L_28 = L_27;
		Object_t * L_29 = Box(Enumerator_t660_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_29);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_29);
		IL2CPP_END_FINALLY(145)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_009d:
	{
		return;
	}
}
// System.Void AN_BaseTemplate::AddAttributesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern TypeInfo* Enumerator_t662_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3445_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3446_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3447_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3452_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddAttributesToXml_m605 (AN_BaseTemplate_t118 * __this, XmlDocument_t621 * ___doc, XmlElement_t622 * ___parent, AN_BaseTemplate_t118 * ___template, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_get_Keys_m3445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		KeyCollection_GetEnumerator_m3446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		Enumerator_get_Current_m3447_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483734);
		Enumerator_MoveNext_m3452_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483735);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t662  V_1 = {0};
	String_t* V_2 = {0};
	XmlAttribute_t663 * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_BaseTemplate_t118 * L_0 = ___template;
		NullCheck(L_0);
		Dictionary_2_t122 * L_1 = AN_BaseTemplate_get_Values_m606(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeyCollection_t664 * L_2 = Dictionary_2_get_Keys_m3445(L_1, /*hidden argument*/Dictionary_2_get_Keys_m3445_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t662  L_3 = KeyCollection_GetEnumerator_m3446(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m3446_MethodInfo_var);
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
			String_t* L_4 = Enumerator_get_Current_m3447((&V_1), /*hidden argument*/Enumerator_get_Current_m3447_MethodInfo_var);
			V_0 = L_4;
			String_t* L_5 = V_0;
			V_2 = L_5;
			String_t* L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = String_Contains_m3448(L_6, (String_t*) &_stringLiteral236, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0030:
		{
			String_t* L_8 = V_0;
			NullCheck(L_8);
			String_t* L_9 = String_Replace_m3449(L_8, (String_t*) &_stringLiteral236, (String_t*) &_stringLiteral237, /*hidden argument*/NULL);
			V_2 = L_9;
		}

IL_0041:
		{
			XmlDocument_t621 * L_10 = ___doc;
			String_t* L_11 = V_2;
			NullCheck(L_10);
			XmlAttribute_t663 * L_12 = XmlDocument_CreateAttribute_m3450(L_10, L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			XmlAttribute_t663 * L_13 = V_3;
			AN_BaseTemplate_t118 * L_14 = ___template;
			NullCheck(L_14);
			Dictionary_2_t122 * L_15 = AN_BaseTemplate_get_Values_m606(L_14, /*hidden argument*/NULL);
			String_t* L_16 = V_0;
			NullCheck(L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_15, L_16);
			NullCheck(L_13);
			VirtActionInvoker1< String_t* >::Invoke(24 /* System.Void System.Xml.XmlAttribute::set_Value(System.String) */, L_13, L_17);
			XmlElement_t622 * L_18 = ___parent;
			NullCheck(L_18);
			XmlAttributeCollection_t665 * L_19 = (XmlAttributeCollection_t665 *)VirtFuncInvoker0< XmlAttributeCollection_t665 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_18);
			XmlAttribute_t663 * L_20 = V_3;
			NullCheck(L_19);
			XmlAttributeCollection_Append_m3451(L_19, L_20, /*hidden argument*/NULL);
		}

IL_0068:
		{
			bool L_21 = Enumerator_MoveNext_m3452((&V_1), /*hidden argument*/Enumerator_MoveNext_m3452_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Enumerator_t662  L_22 = V_1;
		Enumerator_t662  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t662_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_24);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0085:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> AN_BaseTemplate::get_Values()
extern "C" Dictionary_2_t122 * AN_BaseTemplate_get_Values_m606 (AN_BaseTemplate_t118 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t122 * L_0 = (__this->____values_1);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>> AN_BaseTemplate::get_Properties()
extern "C" Dictionary_2_t121 * AN_BaseTemplate_get_Properties_m607 (AN_BaseTemplate_t118 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t121 * L_0 = (__this->____properties_0);
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
extern TypeInfo* AN_ApplicationTemplate_t120_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t123_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3440_MethodInfo_var;
extern "C" void AN_ManifestTemplate__ctor_m608 (AN_ManifestTemplate_t124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_ApplicationTemplate_t120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		List_1_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		List_1__ctor_m3440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BaseTemplate__ctor_m589(__this, /*hidden argument*/NULL);
		AN_ApplicationTemplate_t120 * L_0 = (AN_ApplicationTemplate_t120 *)il2cpp_codegen_object_new (AN_ApplicationTemplate_t120_il2cpp_TypeInfo_var);
		AN_ApplicationTemplate__ctor_m581(L_0, /*hidden argument*/NULL);
		__this->____applicationTemplate_2 = L_0;
		List_1_t123 * L_1 = (List_1_t123 *)il2cpp_codegen_object_new (List_1_t123_il2cpp_TypeInfo_var);
		List_1__ctor_m3440(L_1, /*hidden argument*/List_1__ctor_m3440_MethodInfo_var);
		__this->____permissions_3 = L_1;
		return;
	}
}
// System.Boolean AN_ManifestTemplate::HasPermission(System.String)
extern TypeInfo* Enumerator_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3427_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3428_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3429_MethodInfo_var;
extern "C" bool AN_ManifestTemplate_HasPermission_m609 (AN_ManifestTemplate_t124 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_get_Current_m3428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Enumerator_MoveNext_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	Enumerator_t654  V_1 = {0};
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t123 * L_0 = AN_ManifestTemplate_get_Permissions_m616(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t654  L_1 = List_1_GetEnumerator_m3427(L_0, /*hidden argument*/List_1_GetEnumerator_m3427_MethodInfo_var);
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
			AN_PropertyTemplate_t126 * L_2 = Enumerator_get_Current_m3428((&V_1), /*hidden argument*/Enumerator_get_Current_m3428_MethodInfo_var);
			V_0 = L_2;
			AN_PropertyTemplate_t126 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = AN_PropertyTemplate_get_Name_m620(L_3, /*hidden argument*/NULL);
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
			bool L_7 = Enumerator_MoveNext_m3429((&V_1), /*hidden argument*/Enumerator_MoveNext_m3429_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_t654  L_8 = V_1;
		Enumerator_t654  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t654_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_10);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
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
extern TypeInfo* Enumerator_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3427_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3428_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3429_MethodInfo_var;
extern "C" void AN_ManifestTemplate_RemovePermission_m610 (AN_ManifestTemplate_t124 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_get_Current_m3428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Enumerator_MoveNext_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	Enumerator_t654  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		goto IL_0058;
	}

IL_0005:
	{
		List_1_t123 * L_0 = AN_ManifestTemplate_get_Permissions_m616(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t654  L_1 = List_1_GetEnumerator_m3427(L_0, /*hidden argument*/List_1_GetEnumerator_m3427_MethodInfo_var);
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
			AN_PropertyTemplate_t126 * L_2 = Enumerator_get_Current_m3428((&V_1), /*hidden argument*/Enumerator_get_Current_m3428_MethodInfo_var);
			V_0 = L_2;
			AN_PropertyTemplate_t126 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = AN_PropertyTemplate_get_Name_m620(L_3, /*hidden argument*/NULL);
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
			AN_PropertyTemplate_t126 * L_7 = V_0;
			AN_ManifestTemplate_RemovePermission_m611(__this, L_7, /*hidden argument*/NULL);
			goto IL_0047;
		}

IL_003b:
		{
			bool L_8 = Enumerator_MoveNext_m3429((&V_1), /*hidden argument*/Enumerator_MoveNext_m3429_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_t654  L_9 = V_1;
		Enumerator_t654  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t654_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0058:
	{
		String_t* L_12 = ___name;
		bool L_13 = AN_ManifestTemplate_HasPermission_m609(__this, L_12, /*hidden argument*/NULL);
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
extern "C" void AN_ManifestTemplate_RemovePermission_m611 (AN_ManifestTemplate_t124 * __this, AN_PropertyTemplate_t126 * ___permission, const MethodInfo* method)
{
	{
		List_1_t123 * L_0 = (__this->____permissions_3);
		AN_PropertyTemplate_t126 * L_1 = ___permission;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t126 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_ManifestTemplate::AddPermission(System.String)
extern TypeInfo* AN_PropertyTemplate_t126_il2cpp_TypeInfo_var;
extern "C" void AN_ManifestTemplate_AddPermission_m612 (AN_ManifestTemplate_t124 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t126 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		bool L_1 = AN_ManifestTemplate_HasPermission_m609(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		AN_PropertyTemplate_t126 * L_2 = (AN_PropertyTemplate_t126 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t126_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m617(L_2, (String_t*) &_stringLiteral238, /*hidden argument*/NULL);
		V_0 = L_2;
		AN_PropertyTemplate_t126 * L_3 = V_0;
		String_t* L_4 = ___name;
		NullCheck(L_3);
		AN_PropertyTemplate_set_Name_m621(L_3, L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t126 * L_5 = V_0;
		AN_ManifestTemplate_AddPermission_m613(__this, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void AN_ManifestTemplate::AddPermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_AddPermission_m613 (AN_ManifestTemplate_t124 * __this, AN_PropertyTemplate_t126 * ___permission, const MethodInfo* method)
{
	{
		List_1_t123 * L_0 = (__this->____permissions_3);
		AN_PropertyTemplate_t126 * L_1 = ___permission;
		NullCheck(L_0);
		VirtActionInvoker1< AN_PropertyTemplate_t126 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<AN_PropertyTemplate>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_ManifestTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern TypeInfo* Enumerator_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3427_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3428_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3429_MethodInfo_var;
extern "C" void AN_ManifestTemplate_ToXmlElement_m614 (AN_ManifestTemplate_t124 * __this, XmlDocument_t621 * ___doc, XmlElement_t622 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_get_Current_m3428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Enumerator_MoveNext_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	XmlElement_t622 * V_0 = {0};
	AN_PropertyTemplate_t126 * V_1 = {0};
	Enumerator_t654  V_2 = {0};
	XmlElement_t622 * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t621 * L_0 = ___doc;
		XmlElement_t622 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m605(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t621 * L_2 = ___doc;
		XmlElement_t622 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m604(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		XmlDocument_t621 * L_4 = ___doc;
		NullCheck(L_4);
		XmlElement_t622 * L_5 = XmlDocument_CreateElement_m3438(L_4, (String_t*) &_stringLiteral239, /*hidden argument*/NULL);
		V_0 = L_5;
		AN_ApplicationTemplate_t120 * L_6 = (__this->____applicationTemplate_2);
		XmlDocument_t621 * L_7 = ___doc;
		XmlElement_t622 * L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< XmlDocument_t621 *, XmlElement_t622 * >::Invoke(4 /* System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_6, L_7, L_8);
		XmlElement_t622 * L_9 = ___parent;
		XmlElement_t622 * L_10 = V_0;
		NullCheck(L_9);
		VirtFuncInvoker1< XmlNode_t659 *, XmlNode_t659 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_9, L_10);
		List_1_t123 * L_11 = AN_ManifestTemplate_get_Permissions_m616(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Enumerator_t654  L_12 = List_1_GetEnumerator_m3427(L_11, /*hidden argument*/List_1_GetEnumerator_m3427_MethodInfo_var);
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
			AN_PropertyTemplate_t126 * L_13 = Enumerator_get_Current_m3428((&V_2), /*hidden argument*/Enumerator_get_Current_m3428_MethodInfo_var);
			V_1 = L_13;
			XmlDocument_t621 * L_14 = ___doc;
			NullCheck(L_14);
			XmlElement_t622 * L_15 = XmlDocument_CreateElement_m3438(L_14, (String_t*) &_stringLiteral238, /*hidden argument*/NULL);
			V_3 = L_15;
			AN_PropertyTemplate_t126 * L_16 = V_1;
			XmlDocument_t621 * L_17 = ___doc;
			XmlElement_t622 * L_18 = V_3;
			NullCheck(L_16);
			VirtActionInvoker2< XmlDocument_t621 *, XmlElement_t622 * >::Invoke(4 /* System.Void AN_PropertyTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_16, L_17, L_18);
			XmlElement_t622 * L_19 = ___parent;
			XmlElement_t622 * L_20 = V_3;
			NullCheck(L_19);
			VirtFuncInvoker1< XmlNode_t659 *, XmlNode_t659 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_19, L_20);
		}

IL_0068:
		{
			bool L_21 = Enumerator_MoveNext_m3429((&V_2), /*hidden argument*/Enumerator_MoveNext_m3429_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Enumerator_t654  L_22 = V_2;
		Enumerator_t654  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t654_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_24);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0085:
	{
		return;
	}
}
// AN_ApplicationTemplate AN_ManifestTemplate::get_ApplicationTemplate()
extern "C" AN_ApplicationTemplate_t120 * AN_ManifestTemplate_get_ApplicationTemplate_m615 (AN_ManifestTemplate_t124 * __this, const MethodInfo* method)
{
	{
		AN_ApplicationTemplate_t120 * L_0 = (__this->____applicationTemplate_2);
		return L_0;
	}
}
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_ManifestTemplate::get_Permissions()
extern "C" List_1_t123 * AN_ManifestTemplate_get_Permissions_m616 (AN_ManifestTemplate_t124 * __this, const MethodInfo* method)
{
	{
		List_1_t123 * L_0 = (__this->____permissions_3);
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
extern "C" void AN_PropertyTemplate__ctor_m617 (AN_PropertyTemplate_t126 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->____tag_3 = L_0;
		AN_BaseTemplate__ctor_m589(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___tag;
		__this->____tag_3 = L_1;
		return;
	}
}
// System.Void AN_PropertyTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_PropertyTemplate_ToXmlElement_m618 (AN_PropertyTemplate_t126 * __this, XmlDocument_t621 * ___doc, XmlElement_t622 * ___parent, const MethodInfo* method)
{
	{
		XmlDocument_t621 * L_0 = ___doc;
		XmlElement_t622 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m605(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t621 * L_2 = ___doc;
		XmlElement_t622 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m604(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Tag()
extern "C" String_t* AN_PropertyTemplate_get_Tag_m619 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____tag_3);
		return L_0;
	}
}
// System.String AN_PropertyTemplate::get_Name()
extern "C" String_t* AN_PropertyTemplate_get_Name_m620 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m601(__this, (String_t*) &_stringLiteral229, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Name(System.String)
extern "C" void AN_PropertyTemplate_set_Name_m621 (AN_PropertyTemplate_t126 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m600(__this, (String_t*) &_stringLiteral229, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Value()
extern "C" String_t* AN_PropertyTemplate_get_Value_m622 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m601(__this, (String_t*) &_stringLiteral240, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Value(System.String)
extern "C" void AN_PropertyTemplate_set_Value_m623 (AN_PropertyTemplate_t126 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m600(__this, (String_t*) &_stringLiteral240, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Label()
extern "C" String_t* AN_PropertyTemplate_get_Label_m624 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m601(__this, (String_t*) &_stringLiteral241, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Label(System.String)
extern "C" void AN_PropertyTemplate_set_Label_m625 (AN_PropertyTemplate_t126 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m600(__this, (String_t*) &_stringLiteral241, L_0, /*hidden argument*/NULL);
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
extern TypeInfo* Dictionary_2_t127_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t128_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3453_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3454_MethodInfo_var;
extern "C" void EventDispatcher__ctor_m626 (EventDispatcher_t129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		Dictionary_2_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		Dictionary_2__ctor_m3453_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483736);
		Dictionary_2__ctor_m3454_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483737);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t127 * L_0 = (Dictionary_2_t127 *)il2cpp_codegen_object_new (Dictionary_2_t127_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3453(L_0, /*hidden argument*/Dictionary_2__ctor_m3453_MethodInfo_var);
		__this->___listners_2 = L_0;
		Dictionary_2_t128 * L_1 = (Dictionary_2_t128 *)il2cpp_codegen_object_new (Dictionary_2_t128_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3454(L_1, /*hidden argument*/Dictionary_2__ctor_m3454_MethodInfo_var);
		__this->___dataListners_3 = L_1;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m627 (EventDispatcher_t129 * __this, String_t* ___eventName, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t619 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_addEventListener_m629(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m628 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t619 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_addEventListener_m629(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern TypeInfo* List_1_t623_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3455_MethodInfo_var;
extern "C" void EventDispatcher_addEventListener_m629 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		List_1__ctor_m3455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483738);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t623 * V_0 = {0};
	{
		Dictionary_2_t127 * L_0 = (__this->___listners_2);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t127 * L_3 = (__this->___listners_2);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t623 * L_5 = (List_1_t623 *)VirtFuncInvoker1< List_1_t623 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		EventHandlerFunction_t619 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< EventHandlerFunction_t619 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t623 * L_7 = (List_1_t623 *)il2cpp_codegen_object_new (List_1_t623_il2cpp_TypeInfo_var);
		List_1__ctor_m3455(L_7, /*hidden argument*/List_1__ctor_m3455_MethodInfo_var);
		V_0 = L_7;
		List_1_t623 * L_8 = V_0;
		EventHandlerFunction_t619 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< EventHandlerFunction_t619 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t127 * L_10 = (__this->___listners_2);
		int32_t L_11 = ___eventID;
		List_1_t623 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t623 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m630 (EventDispatcher_t129 * __this, String_t* ___eventName, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t620 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_addEventListener_m632(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m631 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t620 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_addEventListener_m632(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern TypeInfo* List_1_t624_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3456_MethodInfo_var;
extern "C" void EventDispatcher_addEventListener_m632 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(208);
		List_1__ctor_m3456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t624 * V_0 = {0};
	{
		Dictionary_2_t128 * L_0 = (__this->___dataListners_3);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t128 * L_3 = (__this->___dataListners_3);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t624 * L_5 = (List_1_t624 *)VirtFuncInvoker1< List_1_t624 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		DataEventHandlerFunction_t620 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< DataEventHandlerFunction_t620 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t624 * L_7 = (List_1_t624 *)il2cpp_codegen_object_new (List_1_t624_il2cpp_TypeInfo_var);
		List_1__ctor_m3456(L_7, /*hidden argument*/List_1__ctor_m3456_MethodInfo_var);
		V_0 = L_7;
		List_1_t624 * L_8 = V_0;
		DataEventHandlerFunction_t620 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< DataEventHandlerFunction_t620 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t128 * L_10 = (__this->___dataListners_3);
		int32_t L_11 = ___eventID;
		List_1_t624 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t624 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m633 (EventDispatcher_t129 * __this, String_t* ___eventName, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t619 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_removeEventListener_m635(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m634 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t619 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_removeEventListener_m635(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m635 (EventDispatcher_t129 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t623 * V_0 = {0};
	{
		Dictionary_2_t127 * L_0 = (__this->___listners_2);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t127 * L_3 = (__this->___listners_2);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t623 * L_5 = (List_1_t623 *)VirtFuncInvoker1< List_1_t623 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t623 * L_6 = V_0;
		EventHandlerFunction_t619 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, EventHandlerFunction_t619 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t623 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t127 * L_10 = (__this->___listners_2);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m636 (EventDispatcher_t129 * __this, String_t* ___eventName, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t620 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_removeEventListener_m638(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m637 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t620 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_removeEventListener_m638(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m638 (EventDispatcher_t129 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t624 * V_0 = {0};
	{
		Dictionary_2_t128 * L_0 = (__this->___dataListners_3);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t128 * L_3 = (__this->___dataListners_3);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t624 * L_5 = (List_1_t624 *)VirtFuncInvoker1< List_1_t624 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t624 * L_6 = V_0;
		DataEventHandlerFunction_t620 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, DataEventHandlerFunction_t620 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t624 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t128 * L_10 = (__this->___dataListners_3);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String)
extern "C" void EventDispatcher_dispatchEvent_m639 (EventDispatcher_t129 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcher_dispatch_m647(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcher_dispatchEvent_m640 (EventDispatcher_t129 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcher_dispatch_m647(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatchEvent_m641 (EventDispatcher_t129 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m647(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatchEvent_m642 (EventDispatcher_t129 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m647(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String)
extern "C" void EventDispatcher_dispatch_m643 (EventDispatcher_t129 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcher_dispatch_m647(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object)
extern "C" void EventDispatcher_dispatch_m644 (EventDispatcher_t129 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcher_dispatch_m647(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m645 (EventDispatcher_t129 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m647(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m646 (EventDispatcher_t129 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcher_dispatch_m647(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object,System.String)
extern TypeInfo* CEvent_t133_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m647 (EventDispatcher_t129 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CEvent_t133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		s_Il2CppMethodIntialized = true;
	}
	CEvent_t133 * V_0 = {0};
	List_1_t624 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t623 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___eventID;
		String_t* L_1 = ___eventName;
		Object_t * L_2 = ___data;
		CEvent_t133 * L_3 = (CEvent_t133 *)il2cpp_codegen_object_new (CEvent_t133_il2cpp_TypeInfo_var);
		CEvent__ctor_m679(L_3, L_0, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t128 * L_4 = (__this->___dataListners_3);
		int32_t L_5 = ___eventID;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t128 * L_7 = (__this->___dataListners_3);
		int32_t L_8 = ___eventID;
		NullCheck(L_7);
		List_1_t624 * L_9 = (List_1_t624 *)VirtFuncInvoker1< List_1_t624 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_7, L_8);
		List_1_t624 * L_10 = EventDispatcher_cloenArray_m650(__this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		List_1_t624 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_11);
		V_2 = L_12;
		V_3 = 0;
		goto IL_0064;
	}

IL_003c:
	{
		CEvent_t133 * L_13 = V_0;
		List_1_t624 * L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		DataEventHandlerFunction_t620 * L_16 = (DataEventHandlerFunction_t620 *)VirtFuncInvoker1< DataEventHandlerFunction_t620 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_14, L_15);
		NullCheck(L_16);
		Object_t * L_17 = Delegate_get_Target_m3457(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_18 = CEvent_canBeDisptached_m682(L_13, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t624 * L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		DataEventHandlerFunction_t620 * L_21 = (DataEventHandlerFunction_t620 *)VirtFuncInvoker1< DataEventHandlerFunction_t620 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_19, L_20);
		CEvent_t133 * L_22 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< CEvent_t133 * >::Invoke(11 /* System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent) */, L_21, L_22);
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
		Dictionary_2_t127 * L_26 = (__this->___listners_2);
		int32_t L_27 = ___eventID;
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00d7;
		}
	}
	{
		Dictionary_2_t127 * L_29 = (__this->___listners_2);
		int32_t L_30 = ___eventID;
		NullCheck(L_29);
		List_1_t623 * L_31 = (List_1_t623 *)VirtFuncInvoker1< List_1_t623 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_29, L_30);
		List_1_t623 * L_32 = EventDispatcher_cloenArray_m649(__this, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		List_1_t623 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_33);
		V_5 = L_34;
		V_6 = 0;
		goto IL_00ce;
	}

IL_00a1:
	{
		CEvent_t133 * L_35 = V_0;
		List_1_t623 * L_36 = V_4;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		EventHandlerFunction_t619 * L_38 = (EventHandlerFunction_t619 *)VirtFuncInvoker1< EventHandlerFunction_t619 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_36, L_37);
		NullCheck(L_38);
		Object_t * L_39 = Delegate_get_Target_m3457(L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_40 = CEvent_canBeDisptached_m682(L_35, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00c8;
		}
	}
	{
		List_1_t623 * L_41 = V_4;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		EventHandlerFunction_t619 * L_43 = (EventHandlerFunction_t619 *)VirtFuncInvoker1< EventHandlerFunction_t619 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_41, L_42);
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(11 /* System.Void UnionAssets.FLE.EventHandlerFunction::Invoke() */, L_43);
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
extern "C" void EventDispatcher_clearEvents_m648 (EventDispatcher_t129 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t127 * L_0 = (__this->___listners_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear() */, L_0);
		Dictionary_2_t128 * L_1 = (__this->___dataListners_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Clear() */, L_1);
		return;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern TypeInfo* List_1_t623_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3455_MethodInfo_var;
extern "C" List_1_t623 * EventDispatcher_cloenArray_m649 (EventDispatcher_t129 * __this, List_1_t623 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		List_1__ctor_m3455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483738);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t623 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t623 * L_0 = (List_1_t623 *)il2cpp_codegen_object_new (List_1_t623_il2cpp_TypeInfo_var);
		List_1__ctor_m3455(L_0, /*hidden argument*/List_1__ctor_m3455_MethodInfo_var);
		V_0 = L_0;
		List_1_t623 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t623 * L_3 = V_0;
		List_1_t623 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		EventHandlerFunction_t619 * L_6 = (EventHandlerFunction_t619 *)VirtFuncInvoker1< EventHandlerFunction_t619 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< EventHandlerFunction_t619 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t623 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern TypeInfo* List_1_t624_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3456_MethodInfo_var;
extern "C" List_1_t624 * EventDispatcher_cloenArray_m650 (EventDispatcher_t129 * __this, List_1_t624 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(208);
		List_1__ctor_m3456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t624 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t624 * L_0 = (List_1_t624 *)il2cpp_codegen_object_new (List_1_t624_il2cpp_TypeInfo_var);
		List_1__ctor_m3456(L_0, /*hidden argument*/List_1__ctor_m3456_MethodInfo_var);
		V_0 = L_0;
		List_1_t624 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t624 * L_3 = V_0;
		List_1_t624 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		DataEventHandlerFunction_t620 * L_6 = (DataEventHandlerFunction_t620 *)VirtFuncInvoker1< DataEventHandlerFunction_t620 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< DataEventHandlerFunction_t620 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t624 * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::OnDestroy()
extern "C" void EventDispatcher_OnDestroy_m651 (EventDispatcher_t129 * __this, const MethodInfo* method)
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
extern TypeInfo* Dictionary_2_t127_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t128_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3453_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3454_MethodInfo_var;
extern "C" void EventDispatcherBase__ctor_m652 (EventDispatcherBase_t130 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		Dictionary_2_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		Dictionary_2__ctor_m3453_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483736);
		Dictionary_2__ctor_m3454_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483737);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t127 * L_0 = (Dictionary_2_t127 *)il2cpp_codegen_object_new (Dictionary_2_t127_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3453(L_0, /*hidden argument*/Dictionary_2__ctor_m3453_MethodInfo_var);
		__this->___listners_0 = L_0;
		Dictionary_2_t128 * L_1 = (Dictionary_2_t128 *)il2cpp_codegen_object_new (Dictionary_2_t128_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3454(L_1, /*hidden argument*/Dictionary_2__ctor_m3454_MethodInfo_var);
		__this->___dataListners_1 = L_1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m653 (EventDispatcherBase_t130 * __this, String_t* ___eventName, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t619 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_addEventListener_m655(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m654 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t619 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_addEventListener_m655(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern TypeInfo* List_1_t623_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3455_MethodInfo_var;
extern "C" void EventDispatcherBase_addEventListener_m655 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		List_1__ctor_m3455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483738);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t623 * V_0 = {0};
	{
		Dictionary_2_t127 * L_0 = (__this->___listners_0);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t127 * L_3 = (__this->___listners_0);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t623 * L_5 = (List_1_t623 *)VirtFuncInvoker1< List_1_t623 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		EventHandlerFunction_t619 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< EventHandlerFunction_t619 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t623 * L_7 = (List_1_t623 *)il2cpp_codegen_object_new (List_1_t623_il2cpp_TypeInfo_var);
		List_1__ctor_m3455(L_7, /*hidden argument*/List_1__ctor_m3455_MethodInfo_var);
		V_0 = L_7;
		List_1_t623 * L_8 = V_0;
		EventHandlerFunction_t619 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< EventHandlerFunction_t619 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t127 * L_10 = (__this->___listners_0);
		int32_t L_11 = ___eventID;
		List_1_t623 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t623 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m656 (EventDispatcherBase_t130 * __this, String_t* ___eventName, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t620 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_addEventListener_m658(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m657 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t620 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_addEventListener_m658(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern TypeInfo* List_1_t624_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3456_MethodInfo_var;
extern "C" void EventDispatcherBase_addEventListener_m658 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(208);
		List_1__ctor_m3456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t624 * V_0 = {0};
	{
		Dictionary_2_t128 * L_0 = (__this->___dataListners_1);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t128 * L_3 = (__this->___dataListners_1);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t624 * L_5 = (List_1_t624 *)VirtFuncInvoker1< List_1_t624 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		DataEventHandlerFunction_t620 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< DataEventHandlerFunction_t620 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t624 * L_7 = (List_1_t624 *)il2cpp_codegen_object_new (List_1_t624_il2cpp_TypeInfo_var);
		List_1__ctor_m3456(L_7, /*hidden argument*/List_1__ctor_m3456_MethodInfo_var);
		V_0 = L_7;
		List_1_t624 * L_8 = V_0;
		DataEventHandlerFunction_t620 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< DataEventHandlerFunction_t620 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t128 * L_10 = (__this->___dataListners_1);
		int32_t L_11 = ___eventID;
		List_1_t624 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t624 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m659 (EventDispatcherBase_t130 * __this, String_t* ___eventName, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t619 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_removeEventListener_m661(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m660 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t619 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_removeEventListener_m661(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m661 (EventDispatcherBase_t130 * __this, int32_t ___eventID, EventHandlerFunction_t619 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t623 * V_0 = {0};
	{
		Dictionary_2_t127 * L_0 = (__this->___listners_0);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t127 * L_3 = (__this->___listners_0);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t623 * L_5 = (List_1_t623 *)VirtFuncInvoker1< List_1_t623 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t623 * L_6 = V_0;
		EventHandlerFunction_t619 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, EventHandlerFunction_t619 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t623 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t127 * L_10 = (__this->___listners_0);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m662 (EventDispatcherBase_t130 * __this, String_t* ___eventName, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t620 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_removeEventListener_m664(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m663 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t620 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m399((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_removeEventListener_m664(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m664 (EventDispatcherBase_t130 * __this, int32_t ___eventID, DataEventHandlerFunction_t620 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t624 * V_0 = {0};
	{
		Dictionary_2_t128 * L_0 = (__this->___dataListners_1);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t128 * L_3 = (__this->___dataListners_1);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t624 * L_5 = (List_1_t624 *)VirtFuncInvoker1< List_1_t624 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t624 * L_6 = V_0;
		DataEventHandlerFunction_t620 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, DataEventHandlerFunction_t620 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t624 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t128 * L_10 = (__this->___dataListners_1);
		int32_t L_11 = ___eventID;
		NullCheck(L_10);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Remove(!0) */, L_10, L_11);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String)
extern "C" void EventDispatcherBase_dispatchEvent_m665 (EventDispatcherBase_t130 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcherBase_dispatch_m673(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatchEvent_m666 (EventDispatcherBase_t130 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_dispatch_m673(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatchEvent_m667 (EventDispatcherBase_t130 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m673(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatchEvent_m668 (EventDispatcherBase_t130 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m673(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String)
extern "C" void EventDispatcherBase_dispatch_m669 (EventDispatcherBase_t130 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcherBase_dispatch_m673(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatch_m670 (EventDispatcherBase_t130 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_dispatch_m673(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m671 (EventDispatcherBase_t130 * __this, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m673(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m672 (EventDispatcherBase_t130 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___eventID;
		Object_t * L_1 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		EventDispatcherBase_dispatch_m673(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object,System.String)
extern TypeInfo* CEvent_t133_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m673 (EventDispatcherBase_t130 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CEvent_t133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		s_Il2CppMethodIntialized = true;
	}
	CEvent_t133 * V_0 = {0};
	List_1_t624 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t623 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___eventID;
		String_t* L_1 = ___eventName;
		Object_t * L_2 = ___data;
		CEvent_t133 * L_3 = (CEvent_t133 *)il2cpp_codegen_object_new (CEvent_t133_il2cpp_TypeInfo_var);
		CEvent__ctor_m679(L_3, L_0, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t128 * L_4 = (__this->___dataListners_1);
		int32_t L_5 = ___eventID;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t128 * L_7 = (__this->___dataListners_1);
		int32_t L_8 = ___eventID;
		NullCheck(L_7);
		List_1_t624 * L_9 = (List_1_t624 *)VirtFuncInvoker1< List_1_t624 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_7, L_8);
		List_1_t624 * L_10 = EventDispatcherBase_cloenArray_m676(__this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		List_1_t624 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_11);
		V_2 = L_12;
		V_3 = 0;
		goto IL_0064;
	}

IL_003c:
	{
		CEvent_t133 * L_13 = V_0;
		List_1_t624 * L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		DataEventHandlerFunction_t620 * L_16 = (DataEventHandlerFunction_t620 *)VirtFuncInvoker1< DataEventHandlerFunction_t620 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_14, L_15);
		NullCheck(L_16);
		Object_t * L_17 = Delegate_get_Target_m3457(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_18 = CEvent_canBeDisptached_m682(L_13, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t624 * L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		DataEventHandlerFunction_t620 * L_21 = (DataEventHandlerFunction_t620 *)VirtFuncInvoker1< DataEventHandlerFunction_t620 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_19, L_20);
		CEvent_t133 * L_22 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< CEvent_t133 * >::Invoke(11 /* System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent) */, L_21, L_22);
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
		Dictionary_2_t127 * L_26 = (__this->___listners_0);
		int32_t L_27 = ___eventID;
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00d7;
		}
	}
	{
		Dictionary_2_t127 * L_29 = (__this->___listners_0);
		int32_t L_30 = ___eventID;
		NullCheck(L_29);
		List_1_t623 * L_31 = (List_1_t623 *)VirtFuncInvoker1< List_1_t623 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_29, L_30);
		List_1_t623 * L_32 = EventDispatcherBase_cloenArray_m675(__this, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		List_1_t623 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_33);
		V_5 = L_34;
		V_6 = 0;
		goto IL_00ce;
	}

IL_00a1:
	{
		CEvent_t133 * L_35 = V_0;
		List_1_t623 * L_36 = V_4;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		EventHandlerFunction_t619 * L_38 = (EventHandlerFunction_t619 *)VirtFuncInvoker1< EventHandlerFunction_t619 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_36, L_37);
		NullCheck(L_38);
		Object_t * L_39 = Delegate_get_Target_m3457(L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_40 = CEvent_canBeDisptached_m682(L_35, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00c8;
		}
	}
	{
		List_1_t623 * L_41 = V_4;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		EventHandlerFunction_t619 * L_43 = (EventHandlerFunction_t619 *)VirtFuncInvoker1< EventHandlerFunction_t619 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_41, L_42);
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(11 /* System.Void UnionAssets.FLE.EventHandlerFunction::Invoke() */, L_43);
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
extern "C" void EventDispatcherBase_clearEvents_m674 (EventDispatcherBase_t130 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t127 * L_0 = (__this->___listners_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear() */, L_0);
		Dictionary_2_t128 * L_1 = (__this->___dataListners_1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Clear() */, L_1);
		return;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern TypeInfo* List_1_t623_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3455_MethodInfo_var;
extern "C" List_1_t623 * EventDispatcherBase_cloenArray_m675 (EventDispatcherBase_t130 * __this, List_1_t623 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		List_1__ctor_m3455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483738);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t623 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t623 * L_0 = (List_1_t623 *)il2cpp_codegen_object_new (List_1_t623_il2cpp_TypeInfo_var);
		List_1__ctor_m3455(L_0, /*hidden argument*/List_1__ctor_m3455_MethodInfo_var);
		V_0 = L_0;
		List_1_t623 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t623 * L_3 = V_0;
		List_1_t623 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		EventHandlerFunction_t619 * L_6 = (EventHandlerFunction_t619 *)VirtFuncInvoker1< EventHandlerFunction_t619 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< EventHandlerFunction_t619 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t623 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern TypeInfo* List_1_t624_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3456_MethodInfo_var;
extern "C" List_1_t624 * EventDispatcherBase_cloenArray_m676 (EventDispatcherBase_t130 * __this, List_1_t624 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(208);
		List_1__ctor_m3456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t624 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t624 * L_0 = (List_1_t624 *)il2cpp_codegen_object_new (List_1_t624_il2cpp_TypeInfo_var);
		List_1__ctor_m3456(L_0, /*hidden argument*/List_1__ctor_m3456_MethodInfo_var);
		V_0 = L_0;
		List_1_t624 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t624 * L_3 = V_0;
		List_1_t624 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		DataEventHandlerFunction_t620 * L_6 = (DataEventHandlerFunction_t620 *)VirtFuncInvoker1< DataEventHandlerFunction_t620 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< DataEventHandlerFunction_t620 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t624 * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::OnDestroy()
extern "C" void EventDispatcherBase_OnDestroy_m677 (EventDispatcherBase_t130 * __this, const MethodInfo* method)
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
extern "C" void BaseEvent__ctor_m678 (BaseEvent_t131 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnionAssets.FLE.CEvent::.ctor(System.Int32,System.String,System.Object,UnionAssets.FLE.IDispatcher)
extern "C" void CEvent__ctor_m679 (CEvent_t133 * __this, int32_t ___id, String_t* ___name, Object_t * ___data, Object_t * ___dispatcher, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void CEvent_stopPropagation_m680 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		__this->____isStoped_4 = 1;
		return;
	}
}
// System.Void UnionAssets.FLE.CEvent::stopImmediatePropagation()
extern "C" void CEvent_stopImmediatePropagation_m681 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		__this->____isStoped_4 = 1;
		__this->____isLocked_5 = 1;
		return;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::canBeDisptached(System.Object)
extern "C" bool CEvent_canBeDisptached_m682 (CEvent_t133 * __this, Object_t * ___val, const MethodInfo* method)
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
extern "C" int32_t CEvent_get_id_m683 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String UnionAssets.FLE.CEvent::get_name()
extern "C" String_t* CEvent_get_name_m684 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_1);
		return L_0;
	}
}
// System.Object UnionAssets.FLE.CEvent::get_data()
extern "C" Object_t * CEvent_get_data_m685 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____data_2);
		return L_0;
	}
}
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_target()
extern "C" Object_t * CEvent_get_target_m686 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____dispatcher_3);
		return L_0;
	}
}
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_dispatcher()
extern "C" Object_t * CEvent_get_dispatcher_m687 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____dispatcher_3);
		return L_0;
	}
}
// System.Object UnionAssets.FLE.CEvent::get_currentTarget()
extern "C" Object_t * CEvent_get_currentTarget_m688 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____currentTarget_6);
		return L_0;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::get_isStoped()
extern "C" bool CEvent_get_isStoped_m689 (CEvent_t133 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isStoped_4);
		return L_0;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::get_isLocked()
extern "C" bool CEvent_get_isLocked_m690 (CEvent_t133 * __this, const MethodInfo* method)
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
extern "C" void EventButtonExample__ctor_m691 (EventButtonExample_t134 * __this, const MethodInfo* method)
{
	{
		__this->___w_5 = (150.0f);
		__this->___h_6 = (50.0f);
		EventDispatcher__ctor_m626(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventButtonExample::.cctor()
extern "C" void EventButtonExample__cctor_m692 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void EventButtonExample::Awake()
extern TypeInfo* EventButtonExample_t134_il2cpp_TypeInfo_var;
extern "C" void EventButtonExample_Awake_m693 (EventButtonExample_t134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventButtonExample_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventButtonExample_t134_il2cpp_TypeInfo_var);
		((EventButtonExample_t134_StaticFields*)EventButtonExample_t134_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void EventButtonExample::OnGUI()
extern TypeInfo* GUI_t646_il2cpp_TypeInfo_var;
extern "C" void EventButtonExample_OnGUI_m694 (EventButtonExample_t134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t639  V_0 = {0};
	{
		int32_t L_0 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___w_5);
		int32_t L_2 = Screen_get_height_m3382(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___h_6);
		float L_4 = (__this->___w_5);
		float L_5 = (__this->___h_6);
		Rect__ctor_m3389((&V_0), ((float)((float)((float)((float)(((float)L_0))-(float)L_1))/(float)(2.0f))), ((float)((float)((float)((float)(((float)L_2))-(float)L_3))/(float)(2.0f))), L_4, L_5, /*hidden argument*/NULL);
		Rect_t639  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m3458(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral242, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral243, (String_t*) &_stringLiteral244);
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
extern "C" void ExampleListner__ctor_m695 (ExampleListner_t135 * __this, const MethodInfo* method)
{
	{
		__this->___label_3 = (String_t*) &_stringLiteral245;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleListner::Start()
extern TypeInfo* EventButtonExample_t134_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandlerFunction_t619_il2cpp_TypeInfo_var;
extern TypeInfo* DataEventHandlerFunction_t620_il2cpp_TypeInfo_var;
extern const MethodInfo* ExampleListner_onButtonClick_m697_MethodInfo_var;
extern const MethodInfo* ExampleListner_onButtonClickData_m698_MethodInfo_var;
extern "C" void ExampleListner_Start_m696 (ExampleListner_t135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventButtonExample_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		EventHandlerFunction_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(207);
		DataEventHandlerFunction_t620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		ExampleListner_onButtonClick_m697_MethodInfo_var = il2cpp_codegen_method_info_from_index(92);
		ExampleListner_onButtonClickData_m698_MethodInfo_var = il2cpp_codegen_method_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventButtonExample_t134_il2cpp_TypeInfo_var);
		EventButtonExample_t134 * L_0 = ((EventButtonExample_t134_StaticFields*)EventButtonExample_t134_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_1 = { (void*)ExampleListner_onButtonClick_m697_MethodInfo_var };
		EventHandlerFunction_t619 * L_2 = (EventHandlerFunction_t619 *)il2cpp_codegen_object_new (EventHandlerFunction_t619_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3345(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, EventHandlerFunction_t619 * >::Invoke(4 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, L_0, (String_t*) &_stringLiteral243, L_2);
		EventButtonExample_t134 * L_3 = ((EventButtonExample_t134_StaticFields*)EventButtonExample_t134_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_4 = { (void*)ExampleListner_onButtonClickData_m698_MethodInfo_var };
		DataEventHandlerFunction_t620 * L_5 = (DataEventHandlerFunction_t620 *)il2cpp_codegen_object_new (DataEventHandlerFunction_t620_il2cpp_TypeInfo_var);
		DataEventHandlerFunction__ctor_m3349(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, DataEventHandlerFunction_t620 * >::Invoke(6 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction) */, L_3, (String_t*) &_stringLiteral243, L_5);
		return;
	}
}
// System.Void ExampleListner::onButtonClick()
extern "C" void ExampleListner_onButtonClick_m697 (ExampleListner_t135 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_4);
		__this->___count_4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
// System.Void ExampleListner::onButtonClickData(UnionAssets.FLE.CEvent)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ExampleListner_onButtonClickData_m698 (ExampleListner_t135 * __this, CEvent_t133 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral247, /*hidden argument*/NULL);
		CEvent_t133 * L_0 = ___e;
		NullCheck(L_0);
		Object_t * L_1 = CEvent_get_dispatcher_m687(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral248, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		CEvent_t133 * L_4 = ___e;
		NullCheck(L_4);
		Object_t * L_5 = CEvent_get_data_m685(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral249, L_6, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		CEvent_t133 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = CEvent_get_name_m684(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_9);
		String_t* L_11 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral250, L_10, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral246, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleListner::OnGUI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t646_il2cpp_TypeInfo_var;
extern "C" void ExampleListner_OnGUI_m699 (ExampleListner_t135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GUI_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t639  L_0 = {0};
		Rect__ctor_m3389(&L_0, (0.0f), (0.0f), (200.0f), (200.0f), /*hidden argument*/NULL);
		String_t* L_1 = (__this->___label_3);
		int32_t* L_2 = &(__this->___count_4);
		String_t* L_3 = Int32_ToString_m399(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		GUIStyle_t107 * L_5 = (__this->___style_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_Label_m3459(NULL /*static, unused*/, L_0, L_4, L_5, /*hidden argument*/NULL);
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
extern "C" void AdMobBanner__ctor_m700 (AdMobBanner_t137 * __this, const MethodInfo* method)
{
	{
		__this->___size_2 = 2;
		__this->___anchor_3 = 7;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBanner::.cctor()
extern "C" void AdMobBanner__cctor_m701 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AdMobBanner::Awake()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void AdMobBanner_Awake_m702 (AdMobBanner_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = GoogleMobileAd_get_IsInited_m748(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m731(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void AdMobBanner::Start()
extern "C" void AdMobBanner_Start_m703 (AdMobBanner_t137 * __this, const MethodInfo* method)
{
	{
		AdMobBanner_ShowBanner_m705(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBanner::OnDestroy()
extern "C" void AdMobBanner_OnDestroy_m704 (AdMobBanner_t137 * __this, const MethodInfo* method)
{
	{
		AdMobBanner_HideBanner_m706(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBanner::ShowBanner()
extern TypeInfo* AdMobBanner_t137_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern "C" void AdMobBanner_ShowBanner_m705 (AdMobBanner_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AdMobBanner_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		Dictionary_2_t136 * L_0 = AdMobBanner_get_registerdBanners_m707(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = AdMobBanner_get_sceneBannerId_m708(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		Dictionary_2_t136 * L_3 = AdMobBanner_get_registerdBanners_m707(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = AdMobBanner_get_sceneBannerId_m708(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		goto IL_004e;
	}

IL_002b:
	{
		int32_t L_6 = (__this->___anchor_3);
		int32_t L_7 = (__this->___size_2);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_8 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		Dictionary_2_t136 * L_9 = AdMobBanner_get_registerdBanners_m707(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = AdMobBanner_get_sceneBannerId_m708(__this, /*hidden argument*/NULL);
		Object_t * L_11 = V_0;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::Add(!0,!1) */, L_9, L_10, L_11);
	}

IL_004e:
	{
		Object_t * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_14);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_16 = V_0;
		NullCheck(L_16);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_16);
	}

IL_006a:
	{
		return;
	}
}
// System.Void AdMobBanner::HideBanner()
extern TypeInfo* AdMobBanner_t137_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern "C" void AdMobBanner_HideBanner_m706 (AdMobBanner_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AdMobBanner_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		Dictionary_2_t136 * L_0 = AdMobBanner_get_registerdBanners_m707(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = AdMobBanner_get_sceneBannerId_m708(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		Dictionary_2_t136 * L_3 = AdMobBanner_get_registerdBanners_m707(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = AdMobBanner_get_sceneBannerId_m708(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_10 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_10);
	}

IL_0042:
	{
		goto IL_004e;
	}

IL_0047:
	{
		Object_t * L_11 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void GoogleMobileAdBanner::set_ShowOnLoad(System.Boolean) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_11, 0);
	}

IL_004e:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner> AdMobBanner::get_registerdBanners()
extern TypeInfo* AdMobBanner_t137_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t136_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3460_MethodInfo_var;
extern "C" Dictionary_2_t136 * AdMobBanner_get_registerdBanners_m707 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AdMobBanner_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		Dictionary_2_t136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		Dictionary_2__ctor_m3460_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		Dictionary_2_t136 * L_0 = ((AdMobBanner_t137_StaticFields*)AdMobBanner_t137_il2cpp_TypeInfo_var->static_fields)->____registerdBanners_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t136 * L_1 = (Dictionary_2_t136 *)il2cpp_codegen_object_new (Dictionary_2_t136_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3460(L_1, /*hidden argument*/Dictionary_2__ctor_m3460_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		((AdMobBanner_t137_StaticFields*)AdMobBanner_t137_il2cpp_TypeInfo_var->static_fields)->____registerdBanners_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdMobBanner_t137_il2cpp_TypeInfo_var);
		Dictionary_2_t136 * L_2 = ((AdMobBanner_t137_StaticFields*)AdMobBanner_t137_il2cpp_TypeInfo_var->static_fields)->____registerdBanners_4;
		return L_2;
	}
}
// System.String AdMobBanner::get_sceneBannerId()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AdMobBanner_get_sceneBannerId_m708 (AdMobBanner_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_loadedLevelName_m3461(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t352 * L_1 = Component_get_gameObject_m3462(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m3463(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral251, L_2, /*hidden argument*/NULL);
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
extern "C" void AdMobBannerInterstitial__ctor_m709 (AdMobBannerInterstitial_t138 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBannerInterstitial::Awake()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void AdMobBannerInterstitial_Awake_m710 (AdMobBannerInterstitial_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = GoogleMobileAd_get_IsInited_m748(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m731(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void AdMobBannerInterstitial::Start()
extern "C" void AdMobBannerInterstitial_Start_m711 (AdMobBannerInterstitial_t138 * __this, const MethodInfo* method)
{
	{
		AdMobBannerInterstitial_ShowBanner_m712(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdMobBannerInterstitial::ShowBanner()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void AdMobBannerInterstitial_ShowBanner_m712 (AdMobBannerInterstitial_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_StartInterstitialAd_m744(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.String AdMobBannerInterstitial::get_sceneBannerId()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AdMobBannerInterstitial_get_sceneBannerId_m713 (AdMobBannerInterstitial_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_loadedLevelName_m3461(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t352 * L_1 = Component_get_gameObject_m3462(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m3463(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral251, L_2, /*hidden argument*/NULL);
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
extern "C" void CustomInterstisialExample__ctor_m714 (CustomInterstisialExample_t139 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomInterstisialExample::Start()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandlerFunction_t619_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern const MethodInfo* CustomInterstisialExample_OnInterstisialsLoaded_m716_MethodInfo_var;
extern const MethodInfo* CustomInterstisialExample_OnInterstisialsOpen_m717_MethodInfo_var;
extern const MethodInfo* CustomInterstisialExample_OnInterstisialsClosed_m718_MethodInfo_var;
extern "C" void CustomInterstisialExample_Start_m715 (CustomInterstisialExample_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		EventHandlerFunction_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(207);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		CustomInterstisialExample_OnInterstisialsLoaded_m716_MethodInfo_var = il2cpp_codegen_method_info_from_index(95);
		CustomInterstisialExample_OnInterstisialsOpen_m717_MethodInfo_var = il2cpp_codegen_method_info_from_index(96);
		CustomInterstisialExample_OnInterstisialsClosed_m718_MethodInfo_var = il2cpp_codegen_method_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m731(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_1 = { (void*)CustomInterstisialExample_OnInterstisialsLoaded_m716_MethodInfo_var };
		EventHandlerFunction_t619 * L_2 = (EventHandlerFunction_t619 *)il2cpp_codegen_object_new (EventHandlerFunction_t619_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3345(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t619 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_0, (String_t*) &_stringLiteral252, L_2);
		Object_t * L_3 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_4 = { (void*)CustomInterstisialExample_OnInterstisialsOpen_m717_MethodInfo_var };
		EventHandlerFunction_t619 * L_5 = (EventHandlerFunction_t619 *)il2cpp_codegen_object_new (EventHandlerFunction_t619_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3345(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t619 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_3, (String_t*) &_stringLiteral253, L_5);
		Object_t * L_6 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_7 = { (void*)CustomInterstisialExample_OnInterstisialsClosed_m718_MethodInfo_var };
		EventHandlerFunction_t619 * L_8 = (EventHandlerFunction_t619 *)il2cpp_codegen_object_new (EventHandlerFunction_t619_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3345(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t619 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_6, (String_t*) &_stringLiteral254, L_8);
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomInterstisialExample::OnInterstisialsLoaded()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void CustomInterstisialExample_OnInterstisialsLoaded_m716 (CustomInterstisialExample_t139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_ShowInterstitialAd_m746(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomInterstisialExample::OnInterstisialsOpen()
extern "C" void CustomInterstisialExample_OnInterstisialsOpen_m717 (CustomInterstisialExample_t139 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CustomInterstisialExample::OnInterstisialsClosed()
extern "C" void CustomInterstisialExample_OnInterstisialsClosed_m718 (CustomInterstisialExample_t139 * __this, const MethodInfo* method)
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
extern "C" void GoogleAdsExample__ctor_m719 (GoogleAdsExample_t141 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::Start()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandlerFunction_t619_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* DataEventHandlerFunction_t620_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInterstisialsLoaded_m723_MethodInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInterstisialsOpen_m724_MethodInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInterstitialLoaded_m726_MethodInfo_var;
extern const MethodInfo* GoogleAdsExample_OnInAppRequest_m725_MethodInfo_var;
extern "C" void GoogleAdsExample_Start_m720 (GoogleAdsExample_t141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		EventHandlerFunction_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(207);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		DataEventHandlerFunction_t620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		GoogleAdsExample_OnInterstisialsLoaded_m723_MethodInfo_var = il2cpp_codegen_method_info_from_index(98);
		GoogleAdsExample_OnInterstisialsOpen_m724_MethodInfo_var = il2cpp_codegen_method_info_from_index(99);
		GoogleAdsExample_OnInterstitialLoaded_m726_MethodInfo_var = il2cpp_codegen_method_info_from_index(100);
		GoogleAdsExample_OnInAppRequest_m725_MethodInfo_var = il2cpp_codegen_method_info_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m731(NULL /*static, unused*/, /*hidden argument*/NULL);
		GoogleMobileAd_SetGender_m743(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GoogleMobileAd_AddKeyword_m738(NULL /*static, unused*/, (String_t*) &_stringLiteral255, /*hidden argument*/NULL);
		GoogleMobileAd_SetBirthday_m739(NULL /*static, unused*/, ((int32_t)1989), 2, ((int32_t)18), /*hidden argument*/NULL);
		GoogleMobileAd_TagForChildDirectedTreatment_m740(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		GoogleMobileAd_AddTestDevice_m741(NULL /*static, unused*/, (String_t*) &_stringLiteral256, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GoogleAdsExample_OnInterstisialsLoaded_m723_MethodInfo_var };
		EventHandlerFunction_t619 * L_1 = (EventHandlerFunction_t619 *)il2cpp_codegen_object_new (EventHandlerFunction_t619_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3345(L_1, __this, L_0, /*hidden argument*/NULL);
		GoogleMobileAd_addEventListener_m757(NULL /*static, unused*/, (String_t*) &_stringLiteral252, L_1, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdsExample_OnInterstisialsOpen_m724_MethodInfo_var };
		EventHandlerFunction_t619 * L_3 = (EventHandlerFunction_t619 *)il2cpp_codegen_object_new (EventHandlerFunction_t619_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3345(L_3, __this, L_2, /*hidden argument*/NULL);
		GoogleMobileAd_addEventListener_m757(NULL /*static, unused*/, (String_t*) &_stringLiteral253, L_3, /*hidden argument*/NULL);
		Action_t143 * L_4 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2;
		IntPtr_t L_5 = { (void*)GoogleAdsExample_OnInterstitialLoaded_m726_MethodInfo_var };
		Action_t143 * L_6 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t666 * L_7 = Delegate_Combine_m3465(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = ((Action_t143 *)Castclass(L_7, Action_t143_il2cpp_TypeInfo_var));
		IntPtr_t L_8 = { (void*)GoogleAdsExample_OnInAppRequest_m725_MethodInfo_var };
		DataEventHandlerFunction_t620 * L_9 = (DataEventHandlerFunction_t620 *)il2cpp_codegen_object_new (DataEventHandlerFunction_t620_il2cpp_TypeInfo_var);
		DataEventHandlerFunction__ctor_m3349(L_9, __this, L_8, /*hidden argument*/NULL);
		GoogleMobileAd_addEventListener_m758(NULL /*static, unused*/, (String_t*) &_stringLiteral257, L_9, /*hidden argument*/NULL);
		GoogleAdsExample_InitStyles_m721(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::InitStyles()
extern TypeInfo* GUIStyle_t107_il2cpp_TypeInfo_var;
extern "C" void GoogleAdsExample_InitStyles_m721 (GoogleAdsExample_t141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t107 * L_0 = (GUIStyle_t107 *)il2cpp_codegen_object_new (GUIStyle_t107_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3365(L_0, /*hidden argument*/NULL);
		__this->___style_2 = L_0;
		GUIStyle_t107 * L_1 = (__this->___style_2);
		NullCheck(L_1);
		GUIStyleState_t667 * L_2 = GUIStyle_get_normal_m3466(L_1, /*hidden argument*/NULL);
		Color_t325  L_3 = Color_get_white_m3467(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_textColor_m3468(L_2, L_3, /*hidden argument*/NULL);
		GUIStyle_t107 * L_4 = (__this->___style_2);
		NullCheck(L_4);
		GUIStyle_set_fontSize_m3469(L_4, ((int32_t)16), /*hidden argument*/NULL);
		GUIStyle_t107 * L_5 = (__this->___style_2);
		NullCheck(L_5);
		GUIStyle_set_fontStyle_m3470(L_5, 3, /*hidden argument*/NULL);
		GUIStyle_t107 * L_6 = (__this->___style_2);
		NullCheck(L_6);
		GUIStyle_set_alignment_m3368(L_6, 0, /*hidden argument*/NULL);
		GUIStyle_t107 * L_7 = (__this->___style_2);
		NullCheck(L_7);
		GUIStyle_set_wordWrap_m3369(L_7, 1, /*hidden argument*/NULL);
		GUIStyle_t107 * L_8 = (GUIStyle_t107 *)il2cpp_codegen_object_new (GUIStyle_t107_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3365(L_8, /*hidden argument*/NULL);
		__this->___style2_3 = L_8;
		GUIStyle_t107 * L_9 = (__this->___style2_3);
		NullCheck(L_9);
		GUIStyleState_t667 * L_10 = GUIStyle_get_normal_m3466(L_9, /*hidden argument*/NULL);
		Color_t325  L_11 = Color_get_white_m3467(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyleState_set_textColor_m3468(L_10, L_11, /*hidden argument*/NULL);
		GUIStyle_t107 * L_12 = (__this->___style2_3);
		NullCheck(L_12);
		GUIStyle_set_fontSize_m3469(L_12, ((int32_t)12), /*hidden argument*/NULL);
		GUIStyle_t107 * L_13 = (__this->___style2_3);
		NullCheck(L_13);
		GUIStyle_set_fontStyle_m3470(L_13, 2, /*hidden argument*/NULL);
		GUIStyle_t107 * L_14 = (__this->___style2_3);
		NullCheck(L_14);
		GUIStyle_set_alignment_m3368(L_14, 0, /*hidden argument*/NULL);
		GUIStyle_t107 * L_15 = (__this->___style2_3);
		NullCheck(L_15);
		GUIStyle_set_wordWrap_m3369(L_15, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnGUI()
extern TypeInfo* GUI_t646_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnBannerLoadedAction_m728_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern "C" void GoogleAdsExample_OnGUI_m722 (GoogleAdsExample_t141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		GoogleAdsExample_OnBannerLoadedAction_m728_MethodInfo_var = il2cpp_codegen_method_info_from_index(102);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (20.0f);
		V_1 = (10.0f);
		float L_0 = V_1;
		float L_1 = V_0;
		int32_t L_2 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t639  L_3 = {0};
		Rect__ctor_m3389(&L_3, L_0, L_1, (((float)L_2)), (40.0f), /*hidden argument*/NULL);
		GUIStyle_t107 * L_4 = (__this->___style_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_Label_m3459(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral258, L_4, /*hidden argument*/NULL);
		float L_5 = V_0;
		V_0 = ((float)((float)L_5+(float)(40.0f)));
		float L_6 = V_1;
		float L_7 = V_0;
		Rect_t639  L_8 = {0};
		Rect__ctor_m3389(&L_8, L_6, L_7, (150.0f), (50.0f), /*hidden argument*/NULL);
		bool L_9 = GUI_Button_m3458(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral259, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_StartInterstitialAd_m744(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_005b:
	{
		float L_10 = V_1;
		V_1 = ((float)((float)L_10+(float)(170.0f)));
		float L_11 = V_1;
		float L_12 = V_0;
		Rect_t639  L_13 = {0};
		Rect__ctor_m3389(&L_13, L_11, L_12, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_14 = GUI_Button_m3458(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral260, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0088:
	{
		float L_15 = V_1;
		V_1 = ((float)((float)L_15+(float)(170.0f)));
		bool L_16 = (__this->___IsInterstisialsAdReady_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		float L_17 = V_1;
		float L_18 = V_0;
		Rect_t639  L_19 = {0};
		Rect__ctor_m3389(&L_19, L_17, L_18, (150.0f), (50.0f), /*hidden argument*/NULL);
		bool L_20 = GUI_Button_m3458(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral261, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_ShowInterstitialAd_m746(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		float L_21 = V_0;
		V_0 = ((float)((float)L_21+(float)(80.0f)));
		V_1 = (10.0f);
		float L_22 = V_1;
		float L_23 = V_0;
		int32_t L_24 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t639  L_25 = {0};
		Rect__ctor_m3389(&L_25, L_22, L_23, (((float)L_24)), (40.0f), /*hidden argument*/NULL);
		GUIStyle_t107 * L_26 = (__this->___style_2);
		GUI_Label_m3459(NULL /*static, unused*/, L_25, (String_t*) &_stringLiteral262, L_26, /*hidden argument*/NULL);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_27 = (__this->___banner1_4);
		if (L_27)
		{
			goto IL_010d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_010d:
	{
		float L_28 = V_0;
		V_0 = ((float)((float)L_28+(float)(40.0f)));
		float L_29 = V_1;
		float L_30 = V_0;
		Rect_t639  L_31 = {0};
		Rect__ctor_m3389(&L_31, L_29, L_30, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_32 = GUI_Button_m3458(NULL /*static, unused*/, L_31, (String_t*) &_stringLiteral263, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0148;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_33 = GoogleMobileAd_CreateAdBanner_m735(NULL /*static, unused*/, ((int32_t)300), ((int32_t)100), 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_33;
	}

IL_0148:
	{
		float L_34 = V_1;
		V_1 = ((float)((float)L_34+(float)(170.0f)));
		float L_35 = V_1;
		float L_36 = V_0;
		Rect_t639  L_37 = {0};
		Rect__ctor_m3389(&L_37, L_35, L_36, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_38 = GUI_Button_m3458(NULL /*static, unused*/, L_37, (String_t*) &_stringLiteral264, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_017d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_39 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 0, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_39;
	}

IL_017d:
	{
		float L_40 = V_1;
		V_1 = ((float)((float)L_40+(float)(170.0f)));
		float L_41 = V_1;
		float L_42 = V_0;
		Rect_t639  L_43 = {0};
		Rect__ctor_m3389(&L_43, L_41, L_42, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_44 = GUI_Button_m3458(NULL /*static, unused*/, L_43, (String_t*) &_stringLiteral265, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_45 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 1, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_45;
	}

IL_01b2:
	{
		float L_46 = V_1;
		V_1 = ((float)((float)L_46+(float)(170.0f)));
		float L_47 = V_1;
		float L_48 = V_0;
		Rect_t639  L_49 = {0};
		Rect__ctor_m3389(&L_49, L_47, L_48, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_50 = GUI_Button_m3458(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral266, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01e7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_51 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 2, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_51;
	}

IL_01e7:
	{
		float L_52 = V_1;
		V_1 = ((float)((float)L_52+(float)(170.0f)));
		float L_53 = V_1;
		float L_54 = V_0;
		Rect_t639  L_55 = {0};
		Rect__ctor_m3389(&L_55, L_53, L_54, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_56 = GUI_Button_m3458(NULL /*static, unused*/, L_55, (String_t*) &_stringLiteral267, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_021c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_57 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 6, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_57;
	}

IL_021c:
	{
		float L_58 = V_1;
		V_1 = ((float)((float)L_58+(float)(170.0f)));
		float L_59 = V_1;
		float L_60 = V_0;
		Rect_t639  L_61 = {0};
		Rect__ctor_m3389(&L_61, L_59, L_60, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_62 = GUI_Button_m3458(NULL /*static, unused*/, L_61, (String_t*) &_stringLiteral268, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0251;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_63 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 7, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_63;
	}

IL_0251:
	{
		float L_64 = V_1;
		V_1 = ((float)((float)L_64+(float)(170.0f)));
		float L_65 = V_1;
		float L_66 = V_0;
		Rect_t639  L_67 = {0};
		Rect__ctor_m3389(&L_67, L_65, L_66, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_68 = GUI_Button_m3458(NULL /*static, unused*/, L_67, (String_t*) &_stringLiteral269, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0286;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_69 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 8, 1, /*hidden argument*/NULL);
		__this->___banner1_4 = L_69;
	}

IL_0286:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_70 = (__this->___banner1_4);
		if (!L_70)
		{
			goto IL_02ad;
		}
	}
	{
		Object_t * L_71 = (__this->___banner1_4);
		NullCheck(L_71);
		bool L_72 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_71);
		if (!L_72)
		{
			goto IL_02ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_02ad:
	{
		float L_73 = V_0;
		V_0 = ((float)((float)L_73+(float)(80.0f)));
		V_1 = (10.0f);
		float L_74 = V_1;
		float L_75 = V_0;
		Rect_t639  L_76 = {0};
		Rect__ctor_m3389(&L_76, L_74, L_75, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_77 = GUI_Button_m3458(NULL /*static, unused*/, L_76, (String_t*) &_stringLiteral270, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_02e6;
		}
	}
	{
		Object_t * L_78 = (__this->___banner1_4);
		NullCheck(L_78);
		InterfaceActionInvoker0::Invoke(2 /* System.Void GoogleMobileAdBanner::Refresh() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_78);
	}

IL_02e6:
	{
		float L_79 = V_1;
		V_1 = ((float)((float)L_79+(float)(170.0f)));
		float L_80 = V_1;
		float L_81 = V_0;
		Rect_t639  L_82 = {0};
		Rect__ctor_m3389(&L_82, L_80, L_81, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_83 = GUI_Button_m3458(NULL /*static, unused*/, L_82, (String_t*) &_stringLiteral271, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_031a;
		}
	}
	{
		Object_t * L_84 = (__this->___banner1_4);
		NullCheck(L_84);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void GoogleMobileAdBanner::SetBannerPosition(UnityEngine.TextAnchor) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_84, 4);
	}

IL_031a:
	{
		float L_85 = V_1;
		V_1 = ((float)((float)L_85+(float)(170.0f)));
		float L_86 = V_1;
		float L_87 = V_0;
		Rect_t639  L_88 = {0};
		Rect__ctor_m3389(&L_88, L_86, L_87, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_89 = GUI_Button_m3458(NULL /*static, unused*/, L_88, (String_t*) &_stringLiteral272, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0363;
		}
	}
	{
		Object_t * L_90 = (__this->___banner1_4);
		int32_t L_91 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_92 = Random_Range_m3471(NULL /*static, unused*/, 0, L_91, /*hidden argument*/NULL);
		int32_t L_93 = Screen_get_height_m3382(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_94 = Random_Range_m3471(NULL /*static, unused*/, 0, L_93, /*hidden argument*/NULL);
		NullCheck(L_90);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(3 /* System.Void GoogleMobileAdBanner::SetBannerPosition(System.Int32,System.Int32) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_90, L_92, L_94);
	}

IL_0363:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_95 = (__this->___banner1_4);
		if (!L_95)
		{
			goto IL_039a;
		}
	}
	{
		Object_t * L_96 = (__this->___banner1_4);
		NullCheck(L_96);
		bool L_97 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_96);
		if (!L_97)
		{
			goto IL_039a;
		}
	}
	{
		Object_t * L_98 = (__this->___banner1_4);
		NullCheck(L_98);
		bool L_99 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_98);
		if (!L_99)
		{
			goto IL_039a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_039a:
	{
		float L_100 = V_1;
		V_1 = ((float)((float)L_100+(float)(170.0f)));
		float L_101 = V_1;
		float L_102 = V_0;
		Rect_t639  L_103 = {0};
		Rect__ctor_m3389(&L_103, L_101, L_102, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_104 = GUI_Button_m3458(NULL /*static, unused*/, L_103, (String_t*) &_stringLiteral273, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_03cd;
		}
	}
	{
		Object_t * L_105 = (__this->___banner1_4);
		NullCheck(L_105);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_105);
	}

IL_03cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_106 = (__this->___banner1_4);
		if (!L_106)
		{
			goto IL_0404;
		}
	}
	{
		Object_t * L_107 = (__this->___banner1_4);
		NullCheck(L_107);
		bool L_108 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_107);
		if (!L_108)
		{
			goto IL_0404;
		}
	}
	{
		Object_t * L_109 = (__this->___banner1_4);
		NullCheck(L_109);
		bool L_110 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_109);
		if (L_110)
		{
			goto IL_0404;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0404:
	{
		float L_111 = V_1;
		V_1 = ((float)((float)L_111+(float)(170.0f)));
		float L_112 = V_1;
		float L_113 = V_0;
		Rect_t639  L_114 = {0};
		Rect__ctor_m3389(&L_114, L_112, L_113, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_115 = GUI_Button_m3458(NULL /*static, unused*/, L_114, (String_t*) &_stringLiteral274, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_0437;
		}
	}
	{
		Object_t * L_116 = (__this->___banner1_4);
		NullCheck(L_116);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_116);
	}

IL_0437:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_117 = (__this->___banner1_4);
		if (!L_117)
		{
			goto IL_044e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_044e:
	{
		float L_118 = V_1;
		V_1 = ((float)((float)L_118+(float)(170.0f)));
		float L_119 = V_1;
		float L_120 = V_0;
		Rect_t639  L_121 = {0};
		Rect__ctor_m3389(&L_121, L_119, L_120, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_122 = GUI_Button_m3458(NULL /*static, unused*/, L_121, (String_t*) &_stringLiteral275, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_048d;
		}
	}
	{
		Object_t * L_123 = (__this->___banner1_4);
		NullCheck(L_123);
		int32_t L_124 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 GoogleMobileAdBanner::get_id() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_123);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_DestroyBanner_m737(NULL /*static, unused*/, L_124, /*hidden argument*/NULL);
		__this->___banner1_4 = (Object_t *)NULL;
	}

IL_048d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		float L_125 = V_0;
		V_0 = ((float)((float)L_125+(float)(80.0f)));
		V_1 = (10.0f);
		float L_126 = V_1;
		float L_127 = V_0;
		int32_t L_128 = Screen_get_width_m3367(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t639  L_129 = {0};
		Rect__ctor_m3389(&L_129, L_126, L_127, (((float)L_128)), (40.0f), /*hidden argument*/NULL);
		GUIStyle_t107 * L_130 = (__this->___style_2);
		GUI_Label_m3459(NULL /*static, unused*/, L_129, (String_t*) &_stringLiteral276, L_130, /*hidden argument*/NULL);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_131 = (__this->___banner2_5);
		if (L_131)
		{
			goto IL_04da;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_04da:
	{
		float L_132 = V_0;
		V_0 = ((float)((float)L_132+(float)(40.0f)));
		float L_133 = V_1;
		float L_134 = V_0;
		Rect_t639  L_135 = {0};
		Rect__ctor_m3389(&L_135, L_133, L_134, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_136 = GUI_Button_m3458(NULL /*static, unused*/, L_135, (String_t*) &_stringLiteral277, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0542;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_137 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 6, 2, /*hidden argument*/NULL);
		__this->___banner2_5 = L_137;
		Object_t * L_138 = (__this->___banner2_5);
		Object_t * L_139 = L_138;
		NullCheck(L_139);
		Action_1_t149 * L_140 = (Action_1_t149 *)InterfaceFuncInvoker0< Action_1_t149 * >::Invoke(14 /* System.Action`1<GoogleMobileAdBanner> GoogleMobileAdBanner::get_OnLoadedAction() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_139);
		IntPtr_t L_141 = { (void*)GoogleAdsExample_OnBannerLoadedAction_m728_MethodInfo_var };
		Action_1_t149 * L_142 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_142, __this, L_141, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		Delegate_t666 * L_143 = Delegate_Combine_m3465(NULL /*static, unused*/, L_140, L_142, /*hidden argument*/NULL);
		NullCheck(L_139);
		InterfaceActionInvoker1< Action_1_t149 * >::Invoke(15 /* System.Void GoogleMobileAdBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_139, ((Action_1_t149 *)Castclass(L_143, Action_1_t149_il2cpp_TypeInfo_var)));
		Object_t * L_144 = (__this->___banner2_5);
		NullCheck(L_144);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void GoogleMobileAdBanner::set_ShowOnLoad(System.Boolean) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_144, 0);
	}

IL_0542:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_145 = (__this->___banner2_5);
		if (!L_145)
		{
			goto IL_0569;
		}
	}
	{
		Object_t * L_146 = (__this->___banner2_5);
		NullCheck(L_146);
		bool L_147 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_146);
		if (!L_147)
		{
			goto IL_0569;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0569:
	{
		float L_148 = V_1;
		V_1 = ((float)((float)L_148+(float)(170.0f)));
		float L_149 = V_1;
		float L_150 = V_0;
		Rect_t639  L_151 = {0};
		Rect__ctor_m3389(&L_151, L_149, L_150, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_152 = GUI_Button_m3458(NULL /*static, unused*/, L_151, (String_t*) &_stringLiteral270, /*hidden argument*/NULL);
		if (!L_152)
		{
			goto IL_059c;
		}
	}
	{
		Object_t * L_153 = (__this->___banner2_5);
		NullCheck(L_153);
		InterfaceActionInvoker0::Invoke(2 /* System.Void GoogleMobileAdBanner::Refresh() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_153);
	}

IL_059c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_154 = (__this->___banner2_5);
		if (!L_154)
		{
			goto IL_05d3;
		}
	}
	{
		Object_t * L_155 = (__this->___banner2_5);
		NullCheck(L_155);
		bool L_156 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_155);
		if (!L_156)
		{
			goto IL_05d3;
		}
	}
	{
		Object_t * L_157 = (__this->___banner2_5);
		NullCheck(L_157);
		bool L_158 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_157);
		if (!L_158)
		{
			goto IL_05d3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_05d3:
	{
		float L_159 = V_1;
		V_1 = ((float)((float)L_159+(float)(170.0f)));
		float L_160 = V_1;
		float L_161 = V_0;
		Rect_t639  L_162 = {0};
		Rect__ctor_m3389(&L_162, L_160, L_161, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_163 = GUI_Button_m3458(NULL /*static, unused*/, L_162, (String_t*) &_stringLiteral273, /*hidden argument*/NULL);
		if (!L_163)
		{
			goto IL_0606;
		}
	}
	{
		Object_t * L_164 = (__this->___banner2_5);
		NullCheck(L_164);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_164);
	}

IL_0606:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_165 = (__this->___banner2_5);
		if (!L_165)
		{
			goto IL_063d;
		}
	}
	{
		Object_t * L_166 = (__this->___banner2_5);
		NullCheck(L_166);
		bool L_167 = (bool)InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean GoogleMobileAdBanner::get_IsLoaded() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_166);
		if (!L_167)
		{
			goto IL_063d;
		}
	}
	{
		Object_t * L_168 = (__this->___banner2_5);
		NullCheck(L_168);
		bool L_169 = (bool)InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean GoogleMobileAdBanner::get_IsOnScreen() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_168);
		if (L_169)
		{
			goto IL_063d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_063d:
	{
		float L_170 = V_1;
		V_1 = ((float)((float)L_170+(float)(170.0f)));
		float L_171 = V_1;
		float L_172 = V_0;
		Rect_t639  L_173 = {0};
		Rect__ctor_m3389(&L_173, L_171, L_172, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_174 = GUI_Button_m3458(NULL /*static, unused*/, L_173, (String_t*) &_stringLiteral274, /*hidden argument*/NULL);
		if (!L_174)
		{
			goto IL_0670;
		}
	}
	{
		Object_t * L_175 = (__this->___banner2_5);
		NullCheck(L_175);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_175);
	}

IL_0670:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Object_t * L_176 = (__this->___banner2_5);
		if (!L_176)
		{
			goto IL_0687;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0687:
	{
		float L_177 = V_1;
		V_1 = ((float)((float)L_177+(float)(170.0f)));
		float L_178 = V_1;
		float L_179 = V_0;
		Rect_t639  L_180 = {0};
		Rect__ctor_m3389(&L_180, L_178, L_179, (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		bool L_181 = GUI_Button_m3458(NULL /*static, unused*/, L_180, (String_t*) &_stringLiteral275, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_06c6;
		}
	}
	{
		Object_t * L_182 = (__this->___banner2_5);
		NullCheck(L_182);
		int32_t L_183 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 GoogleMobileAdBanner::get_id() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_182);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_DestroyBanner_m737(NULL /*static, unused*/, L_183, /*hidden argument*/NULL);
		__this->___banner2_5 = (Object_t *)NULL;
	}

IL_06c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t646_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3400(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnInterstisialsLoaded()
extern "C" void GoogleAdsExample_OnInterstisialsLoaded_m723 (GoogleAdsExample_t141 * __this, const MethodInfo* method)
{
	{
		__this->___IsInterstisialsAdReady_6 = 1;
		return;
	}
}
// System.Void GoogleAdsExample::OnInterstisialsOpen()
extern "C" void GoogleAdsExample_OnInterstisialsOpen_m724 (GoogleAdsExample_t141 * __this, const MethodInfo* method)
{
	{
		__this->___IsInterstisialsAdReady_6 = 0;
		return;
	}
}
// System.Void GoogleAdsExample::OnInAppRequest(UnionAssets.FLE.CEvent)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleAdsExample_OnInAppRequest_m725 (GoogleAdsExample_t141 * __this, CEvent_t133 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		CEvent_t133 * L_0 = ___e;
		NullCheck(L_0);
		Object_t * L_1 = CEvent_get_data_m685(L_0, /*hidden argument*/NULL);
		V_0 = ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral278, L_2, (String_t*) &_stringLiteral279, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_RecordInAppResolution_m747(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnInterstitialLoaded()
extern "C" void GoogleAdsExample_OnInterstitialLoaded_m726 (GoogleAdsExample_t141 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral280, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnOpenedAction(GoogleMobileAdBanner)
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnOpenedAction_m727_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern "C" void GoogleAdsExample_OnOpenedAction_m727 (GoogleAdsExample_t141 * __this, Object_t * ___banner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		GoogleAdsExample_OnOpenedAction_m727_MethodInfo_var = il2cpp_codegen_method_info_from_index(104);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___banner;
		Object_t * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t149 * L_2 = (Action_1_t149 *)InterfaceFuncInvoker0< Action_1_t149 * >::Invoke(18 /* System.Action`1<GoogleMobileAdBanner> GoogleMobileAdBanner::get_OnOpenedAction() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1);
		IntPtr_t L_3 = { (void*)GoogleAdsExample_OnOpenedAction_m727_MethodInfo_var };
		Action_1_t149 * L_4 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_4, __this, L_3, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		Delegate_t666 * L_5 = Delegate_Remove_m3473(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t149 * >::Invoke(19 /* System.Void GoogleMobileAdBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1, ((Action_1_t149 *)Castclass(L_5, Action_1_t149_il2cpp_TypeInfo_var)));
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral281, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdsExample::OnBannerLoadedAction(GoogleMobileAdBanner)
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdsExample_OnBannerLoadedAction_m728_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern "C" void GoogleAdsExample_OnBannerLoadedAction_m728 (GoogleAdsExample_t141 * __this, Object_t * ___banner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		GoogleAdsExample_OnBannerLoadedAction_m728_MethodInfo_var = il2cpp_codegen_method_info_from_index(102);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___banner;
		Object_t * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t149 * L_2 = (Action_1_t149 *)InterfaceFuncInvoker0< Action_1_t149 * >::Invoke(14 /* System.Action`1<GoogleMobileAdBanner> GoogleMobileAdBanner::get_OnLoadedAction() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1);
		IntPtr_t L_3 = { (void*)GoogleAdsExample_OnBannerLoadedAction_m728_MethodInfo_var };
		Action_1_t149 * L_4 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_4, __this, L_3, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		Delegate_t666 * L_5 = Delegate_Remove_m3473(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t149 * >::Invoke(15 /* System.Void GoogleMobileAdBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1, ((Action_1_t149 *)Castclass(L_5, Action_1_t149_il2cpp_TypeInfo_var)));
		Object_t * L_6 = ___banner;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_6);
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
extern "C" void GoogleMobileAd__ctor_m729 (GoogleMobileAd_t145 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAd::.cctor()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t144_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m761_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m762_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m763_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m764_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m765_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m766_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3474_MethodInfo_var;
extern "C" void GoogleMobileAd__cctor_m730 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Action_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m761_MethodInfo_var = il2cpp_codegen_method_info_from_index(105);
		GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m762_MethodInfo_var = il2cpp_codegen_method_info_from_index(106);
		GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m763_MethodInfo_var = il2cpp_codegen_method_info_from_index(107);
		GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m764_MethodInfo_var = il2cpp_codegen_method_info_from_index(108);
		GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m765_MethodInfo_var = il2cpp_codegen_method_info_from_index(109);
		GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m766_MethodInfo_var = il2cpp_codegen_method_info_from_index(110);
		Action_1__ctor_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1 = 0;
		Action_t143 * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_8;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = { (void*)GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m761_MethodInfo_var };
		Action_t143 * L_2 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_2, NULL, L_1, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_8 = L_2;
	}

IL_001e:
	{
		Action_t143 * L_3 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_8;
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = L_3;
		Action_t143 * L_4 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_9;
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_5 = { (void*)GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m762_MethodInfo_var };
		Action_t143 * L_6 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_6, NULL, L_5, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_9 = L_6;
	}

IL_0040:
	{
		Action_t143 * L_7 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_9;
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialFailedLoading_3 = L_7;
		Action_t143 * L_8 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_10;
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		IntPtr_t L_9 = { (void*)GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m763_MethodInfo_var };
		Action_t143 * L_10 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_10, NULL, L_9, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_10 = L_10;
	}

IL_0062:
	{
		Action_t143 * L_11 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_10;
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4 = L_11;
		Action_t143 * L_12 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_11;
		if (L_12)
		{
			goto IL_0084;
		}
	}
	{
		IntPtr_t L_13 = { (void*)GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m764_MethodInfo_var };
		Action_t143 * L_14 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_14, NULL, L_13, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_11 = L_14;
	}

IL_0084:
	{
		Action_t143 * L_15 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_11;
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5 = L_15;
		Action_t143 * L_16 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_12;
		if (L_16)
		{
			goto IL_00a6;
		}
	}
	{
		IntPtr_t L_17 = { (void*)GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m765_MethodInfo_var };
		Action_t143 * L_18 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_18, NULL, L_17, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_12 = L_18;
	}

IL_00a6:
	{
		Action_t143 * L_19 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_12;
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLeftApplication_6 = L_19;
		Action_1_t144 * L_20 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_13;
		if (L_20)
		{
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m766_MethodInfo_var };
		Action_1_t144 * L_22 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_13 = L_22;
	}

IL_00c8:
	{
		Action_1_t144 * L_23 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_13;
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnAdInAppRequest_7 = L_23;
		return;
	}
}
// System.Void GoogleMobileAd::Init()
extern TypeInfo* SA_Singleton_1_t153_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t161_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t158_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t144_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t115_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t668_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3476_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3477_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3478_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialLoadedListner_m751_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialFailedLoadingListner_m752_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialOpenedListner_m753_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialClosedListner_m754_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnInterstitialLeftApplicationListner_m755_MethodInfo_var;
extern const MethodInfo* GoogleMobileAd_OnAdInAppRequestListner_m756_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3474_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3414_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3479_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3480_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3481_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3482_MethodInfo_var;
extern "C" void GoogleMobileAd_Init_m731 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SA_Singleton_1_t161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(228);
		SA_Singleton_1_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Action_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		List_1_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		Enumerator_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		SA_Singleton_1_get_instance_m3476_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483760);
		SA_Singleton_1_get_instance_m3477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483761);
		SA_Singleton_1_get_instance_m3478_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483762);
		GoogleMobileAd_OnInterstitialLoadedListner_m751_MethodInfo_var = il2cpp_codegen_method_info_from_index(115);
		GoogleMobileAd_OnInterstitialFailedLoadingListner_m752_MethodInfo_var = il2cpp_codegen_method_info_from_index(116);
		GoogleMobileAd_OnInterstitialOpenedListner_m753_MethodInfo_var = il2cpp_codegen_method_info_from_index(117);
		GoogleMobileAd_OnInterstitialClosedListner_m754_MethodInfo_var = il2cpp_codegen_method_info_from_index(118);
		GoogleMobileAd_OnInterstitialLeftApplicationListner_m755_MethodInfo_var = il2cpp_codegen_method_info_from_index(119);
		GoogleMobileAd_OnAdInAppRequestListner_m756_MethodInfo_var = il2cpp_codegen_method_info_from_index(120);
		Action_1__ctor_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		List_1__ctor_m3414_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		List_1_GetEnumerator_m3479_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483769);
		Enumerator_get_Current_m3480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483770);
		Enumerator_MoveNext_m3481_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483771);
		List_1_ToArray_m3482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t115 * V_0 = {0};
	GADTestDevice_t154 * V_1 = {0};
	Enumerator_t668  V_2 = {0};
	int32_t V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = Application_get_platform_m3475(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t153_il2cpp_TypeInfo_var);
		IOSAdMobController_t152 * L_2 = SA_Singleton_1_get_instance_m3476(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3476_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0 = L_2;
		Object_t * L_3 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_4 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = (L_4->___IOS_BannersUnitId_8);
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void GoogleMobileAdInterface::Init(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_3, L_5);
		GoogleMobileAdSettings_t147 * L_6 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_10 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_11 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = (L_11->___IOS_InterstisialsUnitId_7);
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_10, L_12);
	}

IL_006e:
	{
		goto IL_0113;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t161_il2cpp_TypeInfo_var);
		AndroidAdMobController_t160 * L_13 = SA_Singleton_1_get_instance_m3477(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3477_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0 = L_13;
		Object_t * L_14 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_15 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = (L_15->___Android_BannersUnitId_10);
		NullCheck(L_14);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void GoogleMobileAdInterface::Init(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_14, L_16);
		GoogleMobileAdSettings_t147 * L_17 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_21 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_22 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = (L_22->___Android_InterstisialsUnitId_9);
		NullCheck(L_21);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_21, L_23);
	}

IL_00be:
	{
		goto IL_0113;
	}

IL_00c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t158_il2cpp_TypeInfo_var);
		WP8AdMobController_t157 * L_24 = SA_Singleton_1_get_instance_m3478(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3478_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0 = L_24;
		Object_t * L_25 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_26 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = (L_26->___WP8_BannersUnitId_12);
		NullCheck(L_25);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void GoogleMobileAdInterface::Init(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_25, L_27);
		GoogleMobileAdSettings_t147 * L_28 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_32 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_33 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_34 = (L_33->___WP8_InterstisialsUnitId_11);
		NullCheck(L_32);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_32, L_34);
	}

IL_010e:
	{
		goto IL_0113;
	}

IL_0113:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_35 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_36 = { (void*)GoogleMobileAd_OnInterstitialLoadedListner_m751_MethodInfo_var };
		Action_t143 * L_37 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_37, NULL, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< Action_t143 * >::Invoke(23 /* System.Void GoogleMobileAdInterface::set_OnInterstitialLoaded(System.Action) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_35, L_37);
		Object_t * L_38 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_39 = { (void*)GoogleMobileAd_OnInterstitialFailedLoadingListner_m752_MethodInfo_var };
		Action_t143 * L_40 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_40, NULL, L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< Action_t143 * >::Invoke(25 /* System.Void GoogleMobileAdInterface::set_OnInterstitialFailedLoading(System.Action) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_38, L_40);
		Object_t * L_41 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_42 = { (void*)GoogleMobileAd_OnInterstitialOpenedListner_m753_MethodInfo_var };
		Action_t143 * L_43 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_43, NULL, L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< Action_t143 * >::Invoke(27 /* System.Void GoogleMobileAdInterface::set_OnInterstitialOpened(System.Action) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_41, L_43);
		Object_t * L_44 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_45 = { (void*)GoogleMobileAd_OnInterstitialClosedListner_m754_MethodInfo_var };
		Action_t143 * L_46 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_46, NULL, L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< Action_t143 * >::Invoke(29 /* System.Void GoogleMobileAdInterface::set_OnInterstitialClosed(System.Action) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_44, L_46);
		Object_t * L_47 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_48 = { (void*)GoogleMobileAd_OnInterstitialLeftApplicationListner_m755_MethodInfo_var };
		Action_t143 * L_49 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_49, NULL, L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< Action_t143 * >::Invoke(31 /* System.Void GoogleMobileAdInterface::set_OnInterstitialLeftApplication(System.Action) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_47, L_49);
		Object_t * L_50 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		IntPtr_t L_51 = { (void*)GoogleMobileAd_OnAdInAppRequestListner_m756_MethodInfo_var };
		Action_1_t144 * L_52 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_52, NULL, L_51, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_50);
		InterfaceActionInvoker1< Action_1_t144 * >::Invoke(33 /* System.Void GoogleMobileAdInterface::set_OnAdInAppRequest(System.Action`1<System.String>) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_50, L_52);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_53 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_53);
		List_1_t146 * L_54 = (L_53->___testDevices_19);
		NullCheck(L_54);
		int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GADTestDevice>::get_Count() */, L_54);
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0209;
		}
	}
	{
		List_1_t115 * L_56 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3414(L_56, /*hidden argument*/List_1__ctor_m3414_MethodInfo_var);
		V_0 = L_56;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_57 = GoogleMobileAdSettings_get_Instance_m769(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_57);
		List_1_t146 * L_58 = (L_57->___testDevices_19);
		NullCheck(L_58);
		Enumerator_t668  L_59 = List_1_GetEnumerator_m3479(L_58, /*hidden argument*/List_1_GetEnumerator_m3479_MethodInfo_var);
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
			GADTestDevice_t154 * L_60 = Enumerator_get_Current_m3480((&V_2), /*hidden argument*/Enumerator_get_Current_m3480_MethodInfo_var);
			V_1 = L_60;
			List_1_t115 * L_61 = V_0;
			GADTestDevice_t154 * L_62 = V_1;
			NullCheck(L_62);
			String_t* L_63 = (L_62->___ID_1);
			NullCheck(L_61);
			VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_61, L_63);
		}

IL_01e1:
		{
			bool L_64 = Enumerator_MoveNext_m3481((&V_2), /*hidden argument*/Enumerator_MoveNext_m3481_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_01f2;
	}

FINALLY_01f2:
	{ // begin finally (depth: 1)
		Enumerator_t668  L_65 = V_2;
		Enumerator_t668  L_66 = L_65;
		Object_t * L_67 = Box(Enumerator_t668_il2cpp_TypeInfo_var, &L_66);
		NullCheck(L_67);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_67);
		IL2CPP_END_FINALLY(498)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(498)
	{
		IL2CPP_JUMP_TBL(0x1FE, IL_01fe)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_01fe:
	{
		List_1_t115 * L_68 = V_0;
		NullCheck(L_68);
		StringU5BU5D_t75* L_69 = List_1_ToArray_m3482(L_68, /*hidden argument*/List_1_ToArray_m3482_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_AddTestDevices_m742(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
	}

IL_0209:
	{
		return;
	}
}
// System.Void GoogleMobileAd::SetBannersUnitID(System.String,System.String,System.String)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetBannersUnitID_m732 (Object_t * __this /* static, unused */, String_t* ___android_unit_id, String_t* ___ios_unit_id, String_t* ___wp8_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral282, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		int32_t L_1 = Application_get_platform_m3475(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_3 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_4 = ___ios_unit_id;
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void GoogleMobileAdInterface::SetBannersUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_3, L_4);
		goto IL_0068;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_5 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_6 = ___android_unit_id;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void GoogleMobileAdInterface::SetBannersUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_0068;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_8 = ___wp8_unit_id;
		NullCheck(L_7);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void GoogleMobileAdInterface::SetBannersUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_7, L_8);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// System.Void GoogleMobileAd::SetInterstisialsUnitID(System.String,System.String,System.String)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetInterstisialsUnitID_m733 (Object_t * __this /* static, unused */, String_t* ___android_unit_id, String_t* ___ios_unit_id, String_t* ___wp8_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral283, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		int32_t L_1 = Application_get_platform_m3475(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_3 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_4 = ___ios_unit_id;
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_3, L_4);
		goto IL_0068;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_5 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_6 = ___android_unit_id;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_0068;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_8 = ___wp8_unit_id;
		NullCheck(L_7);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void GoogleMobileAdInterface::SetInterstisialsUnitID(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_7, L_8);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// GoogleMobileAdBanner GoogleMobileAd::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleMobileAd_CreateAdBanner_m734 (Object_t * __this /* static, unused */, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___anchor;
		int32_t L_3 = ___size;
		NullCheck(L_1);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker2< Object_t *, int32_t, int32_t >::Invoke(10 /* GoogleMobileAdBanner GoogleMobileAdInterface::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}
}
// GoogleMobileAdBanner GoogleMobileAd::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleMobileAd_CreateAdBanner_m735 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___x;
		int32_t L_3 = ___y;
		int32_t L_4 = ___size;
		NullCheck(L_1);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker3< Object_t *, int32_t, int32_t, int32_t >::Invoke(11 /* GoogleMobileAdBanner GoogleMobileAdInterface::CreateAdBanner(System.Int32,System.Int32,GADBannerSize) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// GoogleMobileAdBanner GoogleMobileAd::GetBanner(System.Int32)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleMobileAd_GetBanner_m736 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral285, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___id;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(17 /* GoogleMobileAdBanner GoogleMobileAdInterface::GetBanner(System.Int32) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void GoogleMobileAd::DestroyBanner(System.Int32)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_DestroyBanner_m737 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral286, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___id;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(12 /* System.Void GoogleMobileAdInterface::DestroyBanner(System.Int32) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::AddKeyword(System.String)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_AddKeyword_m738 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral287, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___keyword;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void GoogleMobileAdInterface::AddKeyword(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetBirthday_m739 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral288, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___year;
		int32_t L_3 = ___month;
		int32_t L_4 = ___day;
		NullCheck(L_1);
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(8 /* System.Void GoogleMobileAdInterface::SetBirthday(System.Int32,AndroidMonth,System.Int32) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void GoogleMobileAd::TagForChildDirectedTreatment(System.Boolean)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_TagForChildDirectedTreatment_m740 (Object_t * __this /* static, unused */, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral289, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		bool L_2 = ___tagForChildDirectedTreatment;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void GoogleMobileAdInterface::TagForChildDirectedTreatment(System.Boolean) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::AddTestDevice(System.String)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_AddTestDevice_m741 (Object_t * __this /* static, unused */, String_t* ___deviceId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___deviceId;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void GoogleMobileAdInterface::AddTestDevice(System.String) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::AddTestDevices(System.String[])
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_AddTestDevices_m742 (Object_t * __this /* static, unused */, StringU5BU5D_t75* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		StringU5BU5D_t75* L_2 = ___ids;
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_t75* >::Invoke(6 /* System.Void GoogleMobileAdInterface::AddTestDevices(System.String[]) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::SetGender(GoogleGender)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_SetGender_m743 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral291, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___gender;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void GoogleMobileAdInterface::SetGender(GoogleGender) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAd::StartInterstitialAd()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_StartInterstitialAd_m744 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(13 /* System.Void GoogleMobileAdInterface::StartInterstitialAd() */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::LoadInterstitialAd()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_LoadInterstitialAd_m745 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral293, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAdInterface::LoadInterstitialAd() */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::ShowInterstitialAd()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_ShowInterstitialAd_m746 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral294, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(15 /* System.Void GoogleMobileAdInterface::ShowInterstitialAd() */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::RecordInAppResolution(GADInAppResolution)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_RecordInAppResolution_m747 (Object_t * __this /* static, unused */, int32_t ___resolution, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral295, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		int32_t L_2 = ___resolution;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void GoogleMobileAdInterface::RecordInAppResolution(GADInAppResolution) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAd::get_IsInited()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" bool GoogleMobileAd_get_IsInited_m748 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		bool L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->____IsInited_1;
		return L_0;
	}
}
// System.String GoogleMobileAd::get_BannersUunitId()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleMobileAd_get_BannersUunitId_m749 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(20 /* System.String GoogleMobileAdInterface::get_BannersUunitId() */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAd::get_InterstisialUnitId()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleMobileAd_get_InterstisialUnitId_m750 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(21 /* System.String GoogleMobileAdInterface::get_InterstisialUnitId() */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void GoogleMobileAd::OnInterstitialLoadedListner()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialLoadedListner_m751 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Action_t143 * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialFailedLoadingListner()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialFailedLoadingListner_m752 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Action_t143 * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialFailedLoading_3;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialOpenedListner()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialOpenedListner_m753 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Action_t143 * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialClosedListner()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialClosedListner_m754 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Action_t143 * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnInterstitialLeftApplicationListner()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnInterstitialLeftApplicationListner_m755 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Action_t143 * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLeftApplication_6;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
// System.Void GoogleMobileAd::OnAdInAppRequestListner(System.String)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_OnAdInAppRequestListner_m756 (Object_t * __this /* static, unused */, String_t* ___productId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Action_1_t144 * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnAdInAppRequest_7;
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAd::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_addEventListener_m757 (Object_t * __this /* static, unused */, String_t* ___eventName, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		EventHandlerFunction_t619 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t619 * >::Invoke(34 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_addEventListener_m758 (Object_t * __this /* static, unused */, String_t* ___eventName, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		DataEventHandlerFunction_t620 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, DataEventHandlerFunction_t620 * >::Invoke(35 /* System.Void GoogleMobileAdInterface::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_removeEventListener_m759 (Object_t * __this /* static, unused */, String_t* ___eventName, EventHandlerFunction_t619 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		EventHandlerFunction_t619 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, EventHandlerFunction_t619 * >::Invoke(36 /* System.Void GoogleMobileAdInterface::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var;
extern "C" void GoogleMobileAd_removeEventListener_m760 (Object_t * __this /* static, unused */, String_t* ___eventName, DataEventHandlerFunction_t620 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
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
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___controller_0;
		String_t* L_2 = ___eventName;
		DataEventHandlerFunction_t620 * L_3 = ___handler;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, DataEventHandlerFunction_t620 * >::Invoke(37 /* System.Void GoogleMobileAdInterface::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction) */, GoogleMobileAdInterface_t142_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialLoaded>m__0()
extern "C" void GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m761 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialFailedLoading>m__1()
extern "C" void GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m762 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialOpened>m__2()
extern "C" void GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m763 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialClosed>m__3()
extern "C" void GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m764 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnInterstitialLeftApplication>m__4()
extern "C" void GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m765 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleMobileAd::<OnAdInAppRequest>m__5(System.String)
extern "C" void GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m766 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
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
struct ScriptableObject_t148;
struct GoogleMobileAdSettings_t147;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
struct ScriptableObject_t148;
struct Object_t;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" Object_t * ScriptableObject_CreateInstance_TisObject_t_m3484_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ScriptableObject_CreateInstance_TisObject_t_m3484(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3484_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<GoogleMobileAdSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<GoogleMobileAdSettings>()
#define ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t147_m3483(__this /* static, unused */, method) (( GoogleMobileAdSettings_t147 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3484_gshared)(__this /* static, unused */, method)


// System.Void GoogleMobileAdSettings::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t146_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3485_MethodInfo_var;
extern "C" void GoogleMobileAdSettings__ctor_m767 (GoogleMobileAdSettings_t147 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		List_1__ctor_m3485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483773);
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
		List_1_t146 * L_6 = (List_1_t146 *)il2cpp_codegen_object_new (List_1_t146_il2cpp_TypeInfo_var);
		List_1__ctor_m3485(L_6, /*hidden argument*/List_1__ctor_m3485_MethodInfo_var);
		__this->___testDevices_19 = L_6;
		ScriptableObject__ctor_m3486(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAdSettings::.cctor()
extern "C" void GoogleMobileAdSettings__cctor_m768 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// GoogleMobileAdSettings GoogleMobileAdSettings::get_Instance()
extern TypeInfo* GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t147_m3483_MethodInfo_var;
extern "C" GoogleMobileAdSettings_t147 * GoogleMobileAdSettings_get_Instance_m769 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t147_m3483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483774);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_0 = ((GoogleMobileAdSettings_t147_StaticFields*)GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var->static_fields)->___instance_20;
		bool L_1 = Object_op_Equality_m3487(NULL /*static, unused*/, L_0, (Object_t644 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t644 * L_2 = Resources_Load_m3488(NULL /*static, unused*/, (String_t*) &_stringLiteral296, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		((GoogleMobileAdSettings_t147_StaticFields*)GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var->static_fields)->___instance_20 = ((GoogleMobileAdSettings_t147 *)IsInst(L_2, GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var));
		GoogleMobileAdSettings_t147 * L_3 = ((GoogleMobileAdSettings_t147_StaticFields*)GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var->static_fields)->___instance_20;
		bool L_4 = Object_op_Equality_m3487(NULL /*static, unused*/, L_3, (Object_t644 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GoogleMobileAdSettings_t147 * L_5 = ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t147_m3483(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisGoogleMobileAdSettings_t147_m3483_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		((GoogleMobileAdSettings_t147_StaticFields*)GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var->static_fields)->___instance_20 = L_5;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var);
		GoogleMobileAdSettings_t147 * L_6 = ((GoogleMobileAdSettings_t147_StaticFields*)GoogleMobileAdSettings_t147_il2cpp_TypeInfo_var->static_fields)->___instance_20;
		return L_6;
	}
}
// System.Void GoogleMobileAdSettings::AddDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_AddDevice_m770 (GoogleMobileAdSettings_t147 * __this, GADTestDevice_t154 * ___p, const MethodInfo* method)
{
	{
		List_1_t146 * L_0 = (__this->___testDevices_19);
		GADTestDevice_t154 * L_1 = ___p;
		NullCheck(L_0);
		VirtActionInvoker1< GADTestDevice_t154 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GADTestDevice>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAdSettings::RemoveDevice(GADTestDevice)
extern "C" void GoogleMobileAdSettings_RemoveDevice_m771 (GoogleMobileAdSettings_t147 * __this, GADTestDevice_t154 * ___p, const MethodInfo* method)
{
	{
		List_1_t146 * L_0 = (__this->___testDevices_19);
		GADTestDevice_t154 * L_1 = ___p;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, GADTestDevice_t154 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<GADTestDevice>::Remove(!0) */, L_0, L_1);
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
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLoadedActionU3Em__6_m813_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnOpenedActionU3Em__8_m815_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnClosedActionU3Em__9_m816_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817_MethodInfo_var;
extern "C" void IOSADBanner__ctor_m772 (IOSADBanner_t150 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		IOSADBanner_U3C_OnLoadedActionU3Em__6_m813_MethodInfo_var = il2cpp_codegen_method_info_from_index(127);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814_MethodInfo_var = il2cpp_codegen_method_info_from_index(128);
		IOSADBanner_U3C_OnOpenedActionU3Em__8_m815_MethodInfo_var = il2cpp_codegen_method_info_from_index(129);
		IOSADBanner_U3C_OnClosedActionU3Em__9_m816_MethodInfo_var = il2cpp_codegen_method_info_from_index(130);
		IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817_MethodInfo_var = il2cpp_codegen_method_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t150 * G_B2_0 = {0};
	IOSADBanner_t150 * G_B1_0 = {0};
	IOSADBanner_t150 * G_B4_0 = {0};
	IOSADBanner_t150 * G_B3_0 = {0};
	IOSADBanner_t150 * G_B6_0 = {0};
	IOSADBanner_t150 * G_B5_0 = {0};
	IOSADBanner_t150 * G_B8_0 = {0};
	IOSADBanner_t150 * G_B7_0 = {0};
	IOSADBanner_t150 * G_B10_0 = {0};
	IOSADBanner_t150 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t149 * L_0 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IOSADBanner_U3C_OnLoadedActionU3Em__6_m813_MethodInfo_var };
		Action_1_t149 * L_2 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t149 * L_3 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t149 * L_4 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814_MethodInfo_var };
		Action_1_t149 * L_6 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t149 * L_7 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t149 * L_8 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)IOSADBanner_U3C_OnOpenedActionU3Em__8_m815_MethodInfo_var };
		Action_1_t149 * L_10 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t149 * L_11 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t149 * L_12 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)IOSADBanner_U3C_OnClosedActionU3Em__9_m816_MethodInfo_var };
		Action_1_t149 * L_14 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t149 * L_15 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t149 * L_16 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817_MethodInfo_var };
		Action_1_t149 * L_18 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t149 * L_19 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m652(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___anchor;
		__this->____anchor_4 = L_22;
		int32_t L_23 = IOSADBanner_get_gravity_m797(__this, /*hidden argument*/NULL);
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		IOSADBanner__GADCreateBannerAd_m774(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLoadedActionU3Em__6_m813_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnOpenedActionU3Em__8_m815_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnClosedActionU3Em__9_m816_MethodInfo_var;
extern const MethodInfo* IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817_MethodInfo_var;
extern "C" void IOSADBanner__ctor_m773 (IOSADBanner_t150 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		IOSADBanner_U3C_OnLoadedActionU3Em__6_m813_MethodInfo_var = il2cpp_codegen_method_info_from_index(127);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814_MethodInfo_var = il2cpp_codegen_method_info_from_index(128);
		IOSADBanner_U3C_OnOpenedActionU3Em__8_m815_MethodInfo_var = il2cpp_codegen_method_info_from_index(129);
		IOSADBanner_U3C_OnClosedActionU3Em__9_m816_MethodInfo_var = il2cpp_codegen_method_info_from_index(130);
		IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817_MethodInfo_var = il2cpp_codegen_method_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t150 * G_B2_0 = {0};
	IOSADBanner_t150 * G_B1_0 = {0};
	IOSADBanner_t150 * G_B4_0 = {0};
	IOSADBanner_t150 * G_B3_0 = {0};
	IOSADBanner_t150 * G_B6_0 = {0};
	IOSADBanner_t150 * G_B5_0 = {0};
	IOSADBanner_t150 * G_B8_0 = {0};
	IOSADBanner_t150 * G_B7_0 = {0};
	IOSADBanner_t150 * G_B10_0 = {0};
	IOSADBanner_t150 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t149 * L_0 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IOSADBanner_U3C_OnLoadedActionU3Em__6_m813_MethodInfo_var };
		Action_1_t149 * L_2 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t149 * L_3 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t149 * L_4 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814_MethodInfo_var };
		Action_1_t149 * L_6 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t149 * L_7 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t149 * L_8 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)IOSADBanner_U3C_OnOpenedActionU3Em__8_m815_MethodInfo_var };
		Action_1_t149 * L_10 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t149 * L_11 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t149 * L_12 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)IOSADBanner_U3C_OnClosedActionU3Em__9_m816_MethodInfo_var };
		Action_1_t149 * L_14 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t149 * L_15 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t149 * L_16 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817_MethodInfo_var };
		Action_1_t149 * L_18 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t149 * L_19 = ((IOSADBanner_t150_StaticFields*)IOSADBanner_t150_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m652(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___x;
		int32_t L_23 = ___y;
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		IOSADBanner__GADCreateBannerAdPos_m775(NULL /*static, unused*/, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::_GADCreateBannerAd(System.Int32,System.Int32,System.Int32)
extern "C" {void DEFAULT_CALL _GADCreateBannerAd(int32_t, int32_t, int32_t);}
extern "C" void IOSADBanner__GADCreateBannerAd_m774 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___size, int32_t ___id, const MethodInfo* method)
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
extern "C" void IOSADBanner__GADCreateBannerAdPos_m775 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
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
extern "C" void IOSADBanner__GADShowAd_m776 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
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
extern "C" void IOSADBanner__GADHideAd_m777 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
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
extern "C" void IOSADBanner__GADRefresh_m778 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
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
extern "C" void IOSADBanner__GADSetPosition_m779 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___bannerId, const MethodInfo* method)
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
extern "C" void IOSADBanner__GADSetPositionXY_m780 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___bannerId, const MethodInfo* method)
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
extern "C" void IOSADBanner_Hide_m781 (IOSADBanner_t150 * __this, const MethodInfo* method)
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
		IOSADBanner__GADHideAd_m777(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::Show()
extern "C" void IOSADBanner_Show_m782 (IOSADBanner_t150 * __this, const MethodInfo* method)
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
		IOSADBanner__GADShowAd_m776(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::Refresh()
extern "C" void IOSADBanner_Refresh_m783 (IOSADBanner_t150 * __this, const MethodInfo* method)
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
		IOSADBanner__GADRefresh_m778(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void IOSADBanner_SetBannerPosition_m784 (IOSADBanner_t150 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
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
		IOSADBanner__GADSetPositionXY_m780(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void IOSADBanner_SetBannerPosition_m785 (IOSADBanner_t150 * __this, int32_t ___anchor, const MethodInfo* method)
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
		int32_t L_2 = IOSADBanner_get_gravity_m797(__this, /*hidden argument*/NULL);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, __this);
		IOSADBanner__GADSetPosition_m779(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSADBanner::DestroyAfterLoad()
extern "C" void IOSADBanner_DestroyAfterLoad_m786 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		__this->___destroyOnLoad_9 = 1;
		VirtActionInvoker1< bool >::Invoke(33 /* System.Void IOSADBanner::set_ShowOnLoad(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Void IOSADBanner::SetDimentions(System.Int32,System.Int32)
extern TypeInfo* Mathf_t669_il2cpp_TypeInfo_var;
extern "C" void IOSADBanner_SetDimentions_m787 (IOSADBanner_t150 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___w;
		float L_1 = Screen_get_dpi_m3489(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t669_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_FloorToInt_m3490(NULL /*static, unused*/, ((float)((float)(((float)L_0))*(float)((float)((float)L_1/(float)(160.0f))))), /*hidden argument*/NULL);
		__this->____width_10 = L_2;
		int32_t L_3 = ___h;
		float L_4 = Screen_get_dpi_m3489(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Mathf_FloorToInt_m3490(NULL /*static, unused*/, ((float)((float)(((float)L_3))*(float)((float)((float)L_4/(float)(160.0f))))), /*hidden argument*/NULL);
		__this->____height_11 = L_5;
		return;
	}
}
// System.Int32 IOSADBanner::get_id()
extern "C" int32_t IOSADBanner_get_id_m788 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_2);
		return L_0;
	}
}
// System.Int32 IOSADBanner::get_width()
extern "C" int32_t IOSADBanner_get_width_m789 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____width_10);
		return L_0;
	}
}
// System.Int32 IOSADBanner::get_height()
extern "C" int32_t IOSADBanner_get_height_m790 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____height_11);
		return L_0;
	}
}
// GADBannerSize IOSADBanner::get_size()
extern "C" int32_t IOSADBanner_get_size_m791 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_3);
		return L_0;
	}
}
// System.Boolean IOSADBanner::get_IsLoaded()
extern "C" bool IOSADBanner_get_IsLoaded_m792 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
		return L_0;
	}
}
// System.Boolean IOSADBanner::get_IsOnScreen()
extern "C" bool IOSADBanner_get_IsOnScreen_m793 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
		return L_0;
	}
}
// System.Boolean IOSADBanner::get_ShowOnLoad()
extern "C" bool IOSADBanner_get_ShowOnLoad_m794 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____ShowOnLoad_8);
		return L_0;
	}
}
// System.Void IOSADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void IOSADBanner_set_ShowOnLoad_m795 (IOSADBanner_t150 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____ShowOnLoad_8 = L_0;
		return;
	}
}
// UnityEngine.TextAnchor IOSADBanner::get_anchor()
extern "C" int32_t IOSADBanner_get_anchor_m796 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____anchor_4);
		return L_0;
	}
}
// System.Int32 IOSADBanner::get_gravity()
extern "C" int32_t IOSADBanner_get_gravity_m797 (IOSADBanner_t150 * __this, const MethodInfo* method)
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
extern "C" Action_1_t149 * IOSADBanner_get_OnLoadedAction_m798 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLoadedAction_12);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnLoadedAction_m799 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnLoadedAction_12 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnFailedLoadingAction_m800 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnFailedLoadingAction_13);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnFailedLoadingAction_m801 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnFailedLoadingAction_13 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnOpenedAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnOpenedAction_m802 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnOpenedAction_14);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnOpenedAction_m803 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnOpenedAction_14 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnClosedAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnClosedAction_m804 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnClosedAction_15);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnClosedAction_m805 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnClosedAction_15 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnLeftApplicationAction_m806 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLeftApplicationAction_16);
		return L_0;
	}
}
// System.Void IOSADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnLeftApplicationAction_m807 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnLeftApplicationAction_16 = L_0;
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdLoaded()
extern TypeInfo* SA_Singleton_1_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3476_MethodInfo_var;
extern "C" void IOSADBanner_OnBannerAdLoaded_m808 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		SA_Singleton_1_get_instance_m3476_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483760);
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
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t153_il2cpp_TypeInfo_var);
		IOSAdMobController_t152 * L_1 = SA_Singleton_1_get_instance_m3476(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3476_MethodInfo_var);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, __this);
		NullCheck(L_1);
		IOSAdMobController_DirectBannerDestory_m841(L_1, L_2, /*hidden argument*/NULL);
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
		Action_1_t149 * L_5 = (__this->____OnLoadedAction_12);
		NullCheck(L_5);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_5, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral297);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdFailedToLoad()
extern "C" void IOSADBanner_OnBannerAdFailedToLoad_m809 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnFailedLoadingAction_13);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral298);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdOpened()
extern "C" void IOSADBanner_OnBannerAdOpened_m810 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnOpenedAction_14);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral299);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdClosed()
extern "C" void IOSADBanner_OnBannerAdClosed_m811 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnClosedAction_15);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral300);
		return;
	}
}
// System.Void IOSADBanner::OnBannerAdLeftApplication()
extern "C" void IOSADBanner_OnBannerAdLeftApplication_m812 (IOSADBanner_t150 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLeftApplicationAction_16);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral301);
		return;
	}
}
// System.Void IOSADBanner::<_OnLoadedAction>m__6(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnLoadedActionU3Em__6_m813 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnFailedLoadingAction>m__7(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnOpenedAction>m__8(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnOpenedActionU3Em__8_m815 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnClosedAction>m__9(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnClosedActionU3Em__9_m816 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSADBanner::<_OnLeftApplicationAction>m__A(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
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
extern TypeInfo* IOSAdMobController_t152_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t144_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t153_il2cpp_TypeInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m880_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m881_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m882_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m883_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m884_MethodInfo_var;
extern const MethodInfo* IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m885_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3474_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3491_MethodInfo_var;
extern "C" void IOSAdMobController__ctor_m818 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IOSAdMobController_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Action_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		SA_Singleton_1_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m880_MethodInfo_var = il2cpp_codegen_method_info_from_index(132);
		IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m881_MethodInfo_var = il2cpp_codegen_method_info_from_index(133);
		IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m882_MethodInfo_var = il2cpp_codegen_method_info_from_index(134);
		IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m883_MethodInfo_var = il2cpp_codegen_method_info_from_index(135);
		IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m884_MethodInfo_var = il2cpp_codegen_method_info_from_index(136);
		IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m885_MethodInfo_var = il2cpp_codegen_method_info_from_index(137);
		Action_1__ctor_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		SA_Singleton_1__ctor_m3491_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483786);
		s_Il2CppMethodIntialized = true;
	}
	IOSAdMobController_t152 * G_B2_0 = {0};
	IOSAdMobController_t152 * G_B1_0 = {0};
	IOSAdMobController_t152 * G_B4_0 = {0};
	IOSAdMobController_t152 * G_B3_0 = {0};
	IOSAdMobController_t152 * G_B6_0 = {0};
	IOSAdMobController_t152 * G_B5_0 = {0};
	IOSAdMobController_t152 * G_B8_0 = {0};
	IOSAdMobController_t152 * G_B7_0 = {0};
	IOSAdMobController_t152 * G_B10_0 = {0};
	IOSAdMobController_t152 * G_B9_0 = {0};
	IOSAdMobController_t152 * G_B12_0 = {0};
	IOSAdMobController_t152 * G_B11_0 = {0};
	{
		Action_t143 * L_0 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m880_MethodInfo_var };
		Action_t143 * L_2 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_2, NULL, L_1, /*hidden argument*/NULL);
		((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_t143 * L_3 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnInterstitialLoaded_11 = L_3;
		Action_t143 * L_4 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		IntPtr_t L_5 = { (void*)IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m881_MethodInfo_var };
		Action_t143 * L_6 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_6, NULL, L_5, /*hidden argument*/NULL);
		((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_t143 * L_7 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnInterstitialFailedLoading_12 = L_7;
		Action_t143 * L_8 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_9 = { (void*)IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m882_MethodInfo_var };
		Action_t143 * L_10 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_10, NULL, L_9, /*hidden argument*/NULL);
		((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_005f:
	{
		Action_t143 * L_11 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnInterstitialOpened_13 = L_11;
		Action_t143 * L_12 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0082;
		}
	}
	{
		IntPtr_t L_13 = { (void*)IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m883_MethodInfo_var };
		Action_t143 * L_14 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_14, NULL, L_13, /*hidden argument*/NULL);
		((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0082:
	{
		Action_t143 * L_15 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnInterstitialClosed_14 = L_15;
		Action_t143 * L_16 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_17 = { (void*)IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m884_MethodInfo_var };
		Action_t143 * L_18 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_18, NULL, L_17, /*hidden argument*/NULL);
		((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00a5:
	{
		Action_t143 * L_19 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnInterstitialLeftApplication_15 = L_19;
		Action_1_t144 * L_20 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		G_B11_0 = __this;
		if (L_20)
		{
			G_B12_0 = __this;
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m885_MethodInfo_var };
		Action_1_t144 * L_22 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22 = L_22;
		G_B12_0 = G_B11_0;
	}

IL_00c8:
	{
		Action_1_t144 * L_23 = ((IOSAdMobController_t152_StaticFields*)IOSAdMobController_t152_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		NullCheck(G_B12_0);
		G_B12_0->____OnAdInAppRequest_16 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t153_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3491(__this, /*hidden argument*/SA_Singleton_1__ctor_m3491_MethodInfo_var);
		return;
	}
}
// System.Void IOSAdMobController::_initGoogleAd(System.String)
extern "C" {void DEFAULT_CALL _initGoogleAd(char*);}
extern "C" void IOSAdMobController__initGoogleAd_m819 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADChangeBannersUnitID_m820 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADChangeInterstisialsUnitID_m821 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADAddKeyWord_m822 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADAddTestDevice_m823 (Object_t * __this /* static, unused */, String_t* ___uid, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADAddTestDevices_m824 (Object_t * __this /* static, unused */, String_t* ___uids, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADSetGender_m825 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADSetBirthday_m826 (Object_t * __this /* static, unused */, int32_t ___day, int32_t ___month, int32_t ___year, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADTagForChildDirectedTreatment_m827 (Object_t * __this /* static, unused */, bool ___val, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADDestroyBanner_m828 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADStartInterstitialAd_m829 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADLoadInterstitialAd_m830 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADShowInterstitialAd_m831 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern "C" void IOSAdMobController__GADReportPurchaseStatus_m832 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method)
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
extern "C" void IOSAdMobController_Awake_m833 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3462(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::Init(System.String)
extern TypeInfo* Dictionary_2_t151_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3492_MethodInfo_var;
extern "C" void IOSAdMobController_Init_m834 (IOSAdMobController_t152 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		Dictionary_2__ctor_m3492_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483787);
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
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		__this->____IsInited_7 = 1;
		String_t* L_1 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_1;
		String_t* L_2 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_2;
		Dictionary_2_t151 * L_3 = (Dictionary_2_t151 *)il2cpp_codegen_object_new (Dictionary_2_t151_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3492(L_3, /*hidden argument*/Dictionary_2__ctor_m3492_MethodInfo_var);
		__this->____banners_8 = L_3;
		String_t* L_4 = ___ad_unit_id;
		IOSAdMobController__initGoogleAd_m819(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::Init(System.String,System.String)
extern "C" void IOSAdMobController_Init_m835 (IOSAdMobController_t152 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
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
extern "C" void IOSAdMobController_SetBannersUnitID_m836 (IOSAdMobController_t152 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_0;
		String_t* L_1 = ___ad_unit_id;
		IOSAdMobController__GADChangeBannersUnitID_m820(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::SetInterstisialsUnitID(System.String)
extern "C" void IOSAdMobController_SetInterstisialsUnitID_m837 (IOSAdMobController_t152 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_0;
		String_t* L_1 = ___ad_unit_id;
		IOSAdMobController__GADChangeInterstisialsUnitID_m821(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner IOSAdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t219_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern "C" Object_t * IOSAdMobController_CreateAdBanner_m838 (IOSAdMobController_t152 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t150 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___anchor;
		int32_t L_2 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t219_il2cpp_TypeInfo_var);
		int32_t L_3 = GADBannerIdFactory_get_nextId_m1300(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOSADBanner_t150 * L_4 = (IOSADBanner_t150 *)il2cpp_codegen_object_new (IOSADBanner_t150_il2cpp_TypeInfo_var);
		IOSADBanner__ctor_m772(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Dictionary_2_t151 * L_5 = (__this->____banners_8);
		IOSADBanner_t150 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, L_6);
		IOSADBanner_t150 * L_8 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, IOSADBanner_t150 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(!0,!1) */, L_5, L_7, L_8);
		IOSADBanner_t150 * L_9 = V_0;
		return L_9;
	}
}
// GoogleMobileAdBanner IOSAdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t219_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern "C" Object_t * IOSAdMobController_CreateAdBanner_m839 (IOSAdMobController_t152 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	IOSADBanner_t150 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t219_il2cpp_TypeInfo_var);
		int32_t L_4 = GADBannerIdFactory_get_nextId_m1300(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOSADBanner_t150 * L_5 = (IOSADBanner_t150 *)il2cpp_codegen_object_new (IOSADBanner_t150_il2cpp_TypeInfo_var);
		IOSADBanner__ctor_m773(L_5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Dictionary_2_t151 * L_6 = (__this->____banners_8);
		IOSADBanner_t150 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 IOSADBanner::get_id() */, L_7);
		IOSADBanner_t150 * L_9 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, IOSADBanner_t150 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(!0,!1) */, L_6, L_8, L_9);
		IOSADBanner_t150 * L_10 = V_0;
		return L_10;
	}
}
// System.Void IOSAdMobController::DestroyBanner(System.Int32)
extern "C" void IOSAdMobController_DestroyBanner_m840 (IOSAdMobController_t152 * __this, int32_t ___id, const MethodInfo* method)
{
	IOSADBanner_t150 * V_0 = {0};
	{
		Dictionary_2_t151 * L_0 = (__this->____banners_8);
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t151 * L_1 = (__this->____banners_8);
		int32_t L_2 = ___id;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(!0) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t151 * L_4 = (__this->____banners_8);
		int32_t L_5 = ___id;
		NullCheck(L_4);
		IOSADBanner_t150 * L_6 = (IOSADBanner_t150 *)VirtFuncInvoker1< IOSADBanner_t150 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(!0) */, L_4, L_5);
		V_0 = L_6;
		IOSADBanner_t150 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean IOSADBanner::get_IsLoaded() */, L_7);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t151 * L_9 = (__this->____banners_8);
		int32_t L_10 = ___id;
		NullCheck(L_9);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Remove(!0) */, L_9, L_10);
		int32_t L_11 = ___id;
		IOSAdMobController__GADDestroyBanner_m828(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_004c:
	{
		IOSADBanner_t150 * L_12 = V_0;
		NullCheck(L_12);
		IOSADBanner_DestroyAfterLoad_m786(L_12, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void IOSAdMobController::DirectBannerDestory(System.Int32)
extern "C" void IOSAdMobController_DirectBannerDestory_m841 (IOSAdMobController_t152 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		IOSAdMobController__GADDestroyBanner_m828(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void IOSAdMobController_RecordInAppResolution_m842 (IOSAdMobController_t152 * __this, int32_t ___resolution, const MethodInfo* method)
{
	{
		int32_t L_0 = ___resolution;
		IOSAdMobController__GADReportPurchaseStatus_m832(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::AddKeyword(System.String)
extern "C" void IOSAdMobController_AddKeyword_m843 (IOSAdMobController_t152 * __this, String_t* ___keyword, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral287, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___keyword;
		IOSAdMobController__GADAddKeyWord_m822(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::AddTestDevice(System.String)
extern "C" void IOSAdMobController_AddTestDevice_m844 (IOSAdMobController_t152 * __this, String_t* ___deviceId, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___deviceId;
		IOSAdMobController__GADAddTestDevice_m823(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::AddTestDevices(System.String[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_AddTestDevices_m845 (IOSAdMobController_t152 * __this, StringU5BU5D_t75* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
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
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		StringU5BU5D_t75* L_1 = ___ids;
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
		StringU5BU5D_t75* L_2 = ___ids;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Join_m3493(NULL /*static, unused*/, (String_t*) &_stringLiteral303, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		StringU5BU5D_t75* L_4 = ___ids;
		String_t* L_5 = String_Join_m3493(NULL /*static, unused*/, (String_t*) &_stringLiteral303, L_4, /*hidden argument*/NULL);
		IOSAdMobController__GADAddTestDevices_m824(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::SetGender(GoogleGender)
extern "C" void IOSAdMobController_SetGender_m846 (IOSAdMobController_t152 * __this, int32_t ___gender, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral291, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___gender;
		IOSAdMobController__GADSetGender_m825(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void IOSAdMobController_SetBirthday_m847 (IOSAdMobController_t152 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral288, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___day;
		int32_t L_2 = ___month;
		int32_t L_3 = ___year;
		IOSAdMobController__GADSetBirthday_m826(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void IOSAdMobController_TagForChildDirectedTreatment_m848 (IOSAdMobController_t152 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral289, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		bool L_1 = ___tagForChildDirectedTreatment;
		IOSAdMobController__GADTagForChildDirectedTreatment_m827(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::StartInterstitialAd()
extern "C" void IOSAdMobController_StartInterstitialAd_m849 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		IOSAdMobController__GADStartInterstitialAd_m829(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::LoadInterstitialAd()
extern "C" void IOSAdMobController_LoadInterstitialAd_m850 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral293, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		IOSAdMobController__GADLoadInterstitialAd_m830(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSAdMobController::ShowInterstitialAd()
extern "C" void IOSAdMobController_ShowInterstitialAd_m851 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean IOSAdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral294, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		IOSAdMobController__GADShowInterstitialAd_m831(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * IOSAdMobController_GetBanner_m852 (IOSAdMobController_t152 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t151 * L_0 = (__this->____banners_8);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t151 * L_3 = (__this->____banners_8);
		int32_t L_4 = ___id;
		NullCheck(L_3);
		IOSADBanner_t150 * L_5 = (IOSADBanner_t150 *)VirtFuncInvoker1< IOSADBanner_t150 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral304, L_6, (String_t*) &_stringLiteral305, /*hidden argument*/NULL);
		Debug_LogWarning_m389(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAdBanner> IOSAdMobController::get_banners()
extern TypeInfo* List_1_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t671_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3494_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3495_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3496_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3497_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3498_MethodInfo_var;
extern "C" List_1_t625 * IOSAdMobController_get_banners_m853 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		Enumerator_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1__ctor_m3494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483788);
		Dictionary_2_GetEnumerator_m3495_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483789);
		Enumerator_get_Current_m3496_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483790);
		KeyValuePair_2_get_Value_m3497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483791);
		Enumerator_MoveNext_m3498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483792);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t625 * V_0 = {0};
	KeyValuePair_2_t670  V_1 = {0};
	Enumerator_t671  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t625 * L_0 = (List_1_t625 *)il2cpp_codegen_object_new (List_1_t625_il2cpp_TypeInfo_var);
		List_1__ctor_m3494(L_0, /*hidden argument*/List_1__ctor_m3494_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t151 * L_1 = (__this->____banners_8);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t625 * L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t151 * L_3 = (__this->____banners_8);
		NullCheck(L_3);
		Enumerator_t671  L_4 = Dictionary_2_GetEnumerator_m3495(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3495_MethodInfo_var);
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
			KeyValuePair_2_t670  L_5 = Enumerator_get_Current_m3496((&V_2), /*hidden argument*/Enumerator_get_Current_m3496_MethodInfo_var);
			V_1 = L_5;
			List_1_t625 * L_6 = V_0;
			IOSADBanner_t150 * L_7 = KeyValuePair_2_get_Value_m3497((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3497_MethodInfo_var);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(!0) */, L_6, L_7);
		}

IL_0039:
		{
			bool L_8 = Enumerator_MoveNext_m3498((&V_2), /*hidden argument*/Enumerator_MoveNext_m3498_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t671  L_9 = V_2;
		Enumerator_t671  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t671_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0056:
	{
		List_1_t625 * L_12 = V_0;
		return L_12;
	}
}
// System.Boolean IOSAdMobController::get_IsInited()
extern "C" bool IOSAdMobController_get_IsInited_m854 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		return L_0;
	}
}
// System.String IOSAdMobController::get_BannersUunitId()
extern "C" String_t* IOSAdMobController_get_BannersUunitId_m855 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____BannersUunitId_9);
		return L_0;
	}
}
// System.String IOSAdMobController::get_InterstisialUnitId()
extern "C" String_t* IOSAdMobController_get_InterstisialUnitId_m856 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____InterstisialUnitId_10);
		return L_0;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialLoaded()
extern "C" Action_t143 * IOSAdMobController_get_OnInterstitialLoaded_m857 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLoaded_11);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialLoaded_m858 (IOSAdMobController_t152 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialLoaded_11 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t143 * IOSAdMobController_get_OnInterstitialFailedLoading_m859 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialFailedLoading_m860 (IOSAdMobController_t152 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialFailedLoading_12 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialOpened()
extern "C" Action_t143 * IOSAdMobController_get_OnInterstitialOpened_m861 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialOpened_13);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialOpened_m862 (IOSAdMobController_t152 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialOpened_13 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialClosed()
extern "C" Action_t143 * IOSAdMobController_get_OnInterstitialClosed_m863 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialClosed_14);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialClosed_m864 (IOSAdMobController_t152 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialClosed_14 = L_0;
		return;
	}
}
// System.Action IOSAdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t143 * IOSAdMobController_get_OnInterstitialLeftApplication_m865 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialLeftApplication_m866 (IOSAdMobController_t152 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialLeftApplication_15 = L_0;
		return;
	}
}
// System.Action`1<System.String> IOSAdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t144 * IOSAdMobController_get_OnAdInAppRequest_m867 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = (__this->____OnAdInAppRequest_16);
		return L_0;
	}
}
// System.Void IOSAdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void IOSAdMobController_set_OnAdInAppRequest_m868 (IOSAdMobController_t152 * __this, Action_1_t144 * ___value, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = ___value;
		__this->____OnAdInAppRequest_16 = L_0;
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdLoaded(System.String)
extern TypeInfo* CharU5BU5D_t652_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdLoaded_m869 (IOSAdMobController_t152 * __this, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	IOSADBanner_t150 * V_4 = {0};
	{
		String_t* L_0 = ___data;
		CharU5BU5D_t652* L_1 = ((CharU5BU5D_t652*)SZArrayNew(CharU5BU5D_t652_il2cpp_TypeInfo_var, 1));
		NullCheck((String_t*) &_stringLiteral306);
		uint16_t L_2 = String_get_Chars_m407((String_t*) &_stringLiteral306, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)L_2;
		NullCheck(L_0);
		StringU5BU5D_t75* L_3 = String_Split_m3418(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t75* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t75* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		int32_t L_9 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t75* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		int32_t L_11 = 2;
		int32_t L_12 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = V_1;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_13);
		V_4 = ((IOSADBanner_t150 *)IsInst(L_14, IOSADBanner_t150_il2cpp_TypeInfo_var));
		IOSADBanner_t150 * L_15 = V_4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		IOSADBanner_t150 * L_16 = V_4;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		IOSADBanner_SetDimentions_m787(L_16, L_17, L_18, /*hidden argument*/NULL);
		IOSADBanner_t150 * L_19 = V_4;
		NullCheck(L_19);
		IOSADBanner_OnBannerAdLoaded_m808(L_19, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdFailedToLoad(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdFailedToLoad_m870 (IOSAdMobController_t152 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t150 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t150 *)IsInst(L_3, IOSADBanner_t150_il2cpp_TypeInfo_var));
		IOSADBanner_t150 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t150 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdFailedToLoad_m809(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdOpened(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdOpened_m871 (IOSAdMobController_t152 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t150 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t150 *)IsInst(L_3, IOSADBanner_t150_il2cpp_TypeInfo_var));
		IOSADBanner_t150 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t150 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdOpened_m810(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdClosed(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdClosed_m872 (IOSAdMobController_t152 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t150 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t150 *)IsInst(L_3, IOSADBanner_t150_il2cpp_TypeInfo_var));
		IOSADBanner_t150 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t150 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdClosed_m811(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnBannerAdLeftApplication(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* IOSADBanner_t150_il2cpp_TypeInfo_var;
extern "C" void IOSAdMobController_OnBannerAdLeftApplication_m873 (IOSAdMobController_t152 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		IOSADBanner_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	IOSADBanner_t150 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((IOSADBanner_t150 *)IsInst(L_3, IOSADBanner_t150_il2cpp_TypeInfo_var));
		IOSADBanner_t150 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		IOSADBanner_t150 * L_5 = V_1;
		NullCheck(L_5);
		IOSADBanner_OnBannerAdLeftApplication_m812(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdLoaded()
extern "C" void IOSAdMobController_OnInterstitialAdLoaded_m874 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLoaded_11);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral252);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdFailedToLoad()
extern "C" void IOSAdMobController_OnInterstitialAdFailedToLoad_m875 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral307);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdOpened()
extern "C" void IOSAdMobController_OnInterstitialAdOpened_m876 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialOpened_13);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral253);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdClosed()
extern "C" void IOSAdMobController_OnInterstitialAdClosed_m877 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialClosed_14);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral254);
		return;
	}
}
// System.Void IOSAdMobController::OnInterstitialAdLeftApplication()
extern "C" void IOSAdMobController_OnInterstitialAdLeftApplication_m878 (IOSAdMobController_t152 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral308);
		return;
	}
}
// System.Void IOSAdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void IOSAdMobController_OnInAppPurchaseRequested_m879 (IOSAdMobController_t152 * __this, String_t* ___productId, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = (__this->____OnAdInAppRequest_16);
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		String_t* L_2 = ___productId;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral257, L_2);
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialLoaded>m__B()
extern "C" void IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m880 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialFailedLoading>m__C()
extern "C" void IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m881 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialOpened>m__D()
extern "C" void IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m882 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialClosed>m__E()
extern "C" void IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m883 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnInterstitialLeftApplication>m__F()
extern "C" void IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m884 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSAdMobController::<_OnAdInAppRequest>m__10(System.String)
extern "C" void IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m885 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
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
extern "C" void GADTestDevice__ctor_m886 (GADTestDevice_t154 * __this, const MethodInfo* method)
{
	{
		__this->___Name_0 = (String_t*) &_stringLiteral309;
		__this->___ID_1 = (String_t*) &_stringLiteral310;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLoadedActionU3Em__11_m921_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m922_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnOpenedActionU3Em__13_m923_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnClosedActionU3Em__14_m924_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m925_MethodInfo_var;
extern "C" void WP8ADBanner__ctor_m887 (WP8ADBanner_t155 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		WP8ADBanner_U3C_OnLoadedActionU3Em__11_m921_MethodInfo_var = il2cpp_codegen_method_info_from_index(145);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(146);
		WP8ADBanner_U3C_OnOpenedActionU3Em__13_m923_MethodInfo_var = il2cpp_codegen_method_info_from_index(147);
		WP8ADBanner_U3C_OnClosedActionU3Em__14_m924_MethodInfo_var = il2cpp_codegen_method_info_from_index(148);
		WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m925_MethodInfo_var = il2cpp_codegen_method_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t155 * G_B2_0 = {0};
	WP8ADBanner_t155 * G_B1_0 = {0};
	WP8ADBanner_t155 * G_B4_0 = {0};
	WP8ADBanner_t155 * G_B3_0 = {0};
	WP8ADBanner_t155 * G_B6_0 = {0};
	WP8ADBanner_t155 * G_B5_0 = {0};
	WP8ADBanner_t155 * G_B8_0 = {0};
	WP8ADBanner_t155 * G_B7_0 = {0};
	WP8ADBanner_t155 * G_B10_0 = {0};
	WP8ADBanner_t155 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t149 * L_0 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)WP8ADBanner_U3C_OnLoadedActionU3Em__11_m921_MethodInfo_var };
		Action_1_t149 * L_2 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t149 * L_3 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t149 * L_4 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m922_MethodInfo_var };
		Action_1_t149 * L_6 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t149 * L_7 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t149 * L_8 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)WP8ADBanner_U3C_OnOpenedActionU3Em__13_m923_MethodInfo_var };
		Action_1_t149 * L_10 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t149 * L_11 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t149 * L_12 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)WP8ADBanner_U3C_OnClosedActionU3Em__14_m924_MethodInfo_var };
		Action_1_t149 * L_14 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t149 * L_15 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t149 * L_16 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m925_MethodInfo_var };
		Action_1_t149 * L_18 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t149 * L_19 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m652(__this, /*hidden argument*/NULL);
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
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLoadedActionU3Em__11_m921_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m922_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnOpenedActionU3Em__13_m923_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnClosedActionU3Em__14_m924_MethodInfo_var;
extern const MethodInfo* WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m925_MethodInfo_var;
extern "C" void WP8ADBanner__ctor_m888 (WP8ADBanner_t155 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		WP8ADBanner_U3C_OnLoadedActionU3Em__11_m921_MethodInfo_var = il2cpp_codegen_method_info_from_index(145);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m922_MethodInfo_var = il2cpp_codegen_method_info_from_index(146);
		WP8ADBanner_U3C_OnOpenedActionU3Em__13_m923_MethodInfo_var = il2cpp_codegen_method_info_from_index(147);
		WP8ADBanner_U3C_OnClosedActionU3Em__14_m924_MethodInfo_var = il2cpp_codegen_method_info_from_index(148);
		WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m925_MethodInfo_var = il2cpp_codegen_method_info_from_index(149);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t155 * G_B2_0 = {0};
	WP8ADBanner_t155 * G_B1_0 = {0};
	WP8ADBanner_t155 * G_B4_0 = {0};
	WP8ADBanner_t155 * G_B3_0 = {0};
	WP8ADBanner_t155 * G_B6_0 = {0};
	WP8ADBanner_t155 * G_B5_0 = {0};
	WP8ADBanner_t155 * G_B8_0 = {0};
	WP8ADBanner_t155 * G_B7_0 = {0};
	WP8ADBanner_t155 * G_B10_0 = {0};
	WP8ADBanner_t155 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_8 = 1;
		Action_1_t149 * L_0 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)WP8ADBanner_U3C_OnLoadedActionU3Em__11_m921_MethodInfo_var };
		Action_1_t149 * L_2 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t149 * L_3 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t149 * L_4 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m922_MethodInfo_var };
		Action_1_t149 * L_6 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t149 * L_7 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t149 * L_8 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)WP8ADBanner_U3C_OnOpenedActionU3Em__13_m923_MethodInfo_var };
		Action_1_t149 * L_10 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t149 * L_11 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t149 * L_12 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)WP8ADBanner_U3C_OnClosedActionU3Em__14_m924_MethodInfo_var };
		Action_1_t149 * L_14 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t149 * L_15 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t149 * L_16 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m925_MethodInfo_var };
		Action_1_t149 * L_18 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t149 * L_19 = ((WP8ADBanner_t155_StaticFields*)WP8ADBanner_t155_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m652(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		return;
	}
}
// System.Void WP8ADBanner::Hide()
extern "C" void WP8ADBanner_Hide_m889 (WP8ADBanner_t155 * __this, const MethodInfo* method)
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
extern "C" void WP8ADBanner_Show_m890 (WP8ADBanner_t155 * __this, const MethodInfo* method)
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
extern "C" void WP8ADBanner_Refresh_m891 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void WP8ADBanner_SetBannerPosition_m892 (WP8ADBanner_t155 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void WP8ADBanner_SetBannerPosition_m893 (WP8ADBanner_t155 * __this, int32_t ___anchor, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::DestroyAfterLoad()
extern "C" void WP8ADBanner_DestroyAfterLoad_m894 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		__this->___destroyOnLoad_9 = 1;
		VirtActionInvoker1< bool >::Invoke(33 /* System.Void WP8ADBanner::set_ShowOnLoad(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Void WP8ADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void WP8ADBanner_SetDimentions_m895 (WP8ADBanner_t155 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
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
extern "C" int32_t WP8ADBanner_get_id_m896 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_2);
		return L_0;
	}
}
// System.Int32 WP8ADBanner::get_width()
extern "C" int32_t WP8ADBanner_get_width_m897 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____width_10);
		return L_0;
	}
}
// System.Int32 WP8ADBanner::get_height()
extern "C" int32_t WP8ADBanner_get_height_m898 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____height_11);
		return L_0;
	}
}
// GADBannerSize WP8ADBanner::get_size()
extern "C" int32_t WP8ADBanner_get_size_m899 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_3);
		return L_0;
	}
}
// System.Boolean WP8ADBanner::get_IsLoaded()
extern "C" bool WP8ADBanner_get_IsLoaded_m900 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
		return L_0;
	}
}
// System.Boolean WP8ADBanner::get_IsOnScreen()
extern "C" bool WP8ADBanner_get_IsOnScreen_m901 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
		return L_0;
	}
}
// System.Boolean WP8ADBanner::get_ShowOnLoad()
extern "C" bool WP8ADBanner_get_ShowOnLoad_m902 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____ShowOnLoad_8);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void WP8ADBanner_set_ShowOnLoad_m903 (WP8ADBanner_t155 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____ShowOnLoad_8 = L_0;
		return;
	}
}
// UnityEngine.TextAnchor WP8ADBanner::get_anchor()
extern "C" int32_t WP8ADBanner_get_anchor_m904 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____anchor_4);
		return L_0;
	}
}
// System.Int32 WP8ADBanner::get_gravity()
extern "C" int32_t WP8ADBanner_get_gravity_m905 (WP8ADBanner_t155 * __this, const MethodInfo* method)
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
extern "C" Action_1_t149 * WP8ADBanner_get_OnLoadedAction_m906 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLoadedAction_12);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnLoadedAction_m907 (WP8ADBanner_t155 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnLoadedAction_12 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t149 * WP8ADBanner_get_OnFailedLoadingAction_m908 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnFailedLoadingAction_13);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnFailedLoadingAction_m909 (WP8ADBanner_t155 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnFailedLoadingAction_13 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnOpenedAction()
extern "C" Action_1_t149 * WP8ADBanner_get_OnOpenedAction_m910 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnOpenedAction_14);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnOpenedAction_m911 (WP8ADBanner_t155 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnOpenedAction_14 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnClosedAction()
extern "C" Action_1_t149 * WP8ADBanner_get_OnClosedAction_m912 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnClosedAction_15);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnClosedAction_m913 (WP8ADBanner_t155 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnClosedAction_15 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t149 * WP8ADBanner_get_OnLeftApplicationAction_m914 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLeftApplicationAction_16);
		return L_0;
	}
}
// System.Void WP8ADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnLeftApplicationAction_m915 (WP8ADBanner_t155 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnLeftApplicationAction_16 = L_0;
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdLoaded()
extern "C" void WP8ADBanner_OnBannerAdLoaded_m916 (WP8ADBanner_t155 * __this, const MethodInfo* method)
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
		Action_1_t149 * L_3 = (__this->____OnLoadedAction_12);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_3, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral297);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdFailedToLoad()
extern "C" void WP8ADBanner_OnBannerAdFailedToLoad_m917 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnFailedLoadingAction_13);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral298);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdOpened()
extern "C" void WP8ADBanner_OnBannerAdOpened_m918 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnOpenedAction_14);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral299);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdClosed()
extern "C" void WP8ADBanner_OnBannerAdClosed_m919 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnClosedAction_15);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral300);
		return;
	}
}
// System.Void WP8ADBanner::OnBannerAdLeftApplication()
extern "C" void WP8ADBanner_OnBannerAdLeftApplication_m920 (WP8ADBanner_t155 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLeftApplicationAction_16);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral301);
		return;
	}
}
// System.Void WP8ADBanner::<_OnLoadedAction>m__11(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnLoadedActionU3Em__11_m921 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnFailedLoadingAction>m__12(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m922 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnOpenedAction>m__13(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnOpenedActionU3Em__13_m923 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnClosedAction>m__14(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnClosedActionU3Em__14_m924 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8ADBanner::<_OnLeftApplicationAction>m__15(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m925 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
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
extern TypeInfo* WP8AdMobController_t157_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t144_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t158_il2cpp_TypeInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m974_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m975_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m976_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m977_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m978_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m979_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3474_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3500_MethodInfo_var;
extern "C" void WP8AdMobController__ctor_m926 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WP8AdMobController_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(224);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Action_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		SA_Singleton_1_t158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m974_MethodInfo_var = il2cpp_codegen_method_info_from_index(150);
		WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m975_MethodInfo_var = il2cpp_codegen_method_info_from_index(151);
		WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m976_MethodInfo_var = il2cpp_codegen_method_info_from_index(152);
		WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m977_MethodInfo_var = il2cpp_codegen_method_info_from_index(153);
		WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m978_MethodInfo_var = il2cpp_codegen_method_info_from_index(154);
		WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m979_MethodInfo_var = il2cpp_codegen_method_info_from_index(155);
		Action_1__ctor_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		SA_Singleton_1__ctor_m3500_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483804);
		s_Il2CppMethodIntialized = true;
	}
	WP8AdMobController_t157 * G_B2_0 = {0};
	WP8AdMobController_t157 * G_B1_0 = {0};
	WP8AdMobController_t157 * G_B4_0 = {0};
	WP8AdMobController_t157 * G_B3_0 = {0};
	WP8AdMobController_t157 * G_B6_0 = {0};
	WP8AdMobController_t157 * G_B5_0 = {0};
	WP8AdMobController_t157 * G_B8_0 = {0};
	WP8AdMobController_t157 * G_B7_0 = {0};
	WP8AdMobController_t157 * G_B10_0 = {0};
	WP8AdMobController_t157 * G_B9_0 = {0};
	WP8AdMobController_t157 * G_B12_0 = {0};
	WP8AdMobController_t157 * G_B11_0 = {0};
	{
		Action_t143 * L_0 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m974_MethodInfo_var };
		Action_t143 * L_2 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_2, NULL, L_1, /*hidden argument*/NULL);
		((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_t143 * L_3 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnInterstitialLoaded_11 = L_3;
		Action_t143 * L_4 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		IntPtr_t L_5 = { (void*)WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m975_MethodInfo_var };
		Action_t143 * L_6 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_6, NULL, L_5, /*hidden argument*/NULL);
		((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_t143 * L_7 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnInterstitialFailedLoading_12 = L_7;
		Action_t143 * L_8 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_9 = { (void*)WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m976_MethodInfo_var };
		Action_t143 * L_10 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_10, NULL, L_9, /*hidden argument*/NULL);
		((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_005f:
	{
		Action_t143 * L_11 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnInterstitialOpened_13 = L_11;
		Action_t143 * L_12 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0082;
		}
	}
	{
		IntPtr_t L_13 = { (void*)WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m977_MethodInfo_var };
		Action_t143 * L_14 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_14, NULL, L_13, /*hidden argument*/NULL);
		((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0082:
	{
		Action_t143 * L_15 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnInterstitialClosed_14 = L_15;
		Action_t143 * L_16 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_17 = { (void*)WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m978_MethodInfo_var };
		Action_t143 * L_18 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_18, NULL, L_17, /*hidden argument*/NULL);
		((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00a5:
	{
		Action_t143 * L_19 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnInterstitialLeftApplication_15 = L_19;
		Action_1_t144 * L_20 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		G_B11_0 = __this;
		if (L_20)
		{
			G_B12_0 = __this;
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m979_MethodInfo_var };
		Action_1_t144 * L_22 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22 = L_22;
		G_B12_0 = G_B11_0;
	}

IL_00c8:
	{
		Action_1_t144 * L_23 = ((WP8AdMobController_t157_StaticFields*)WP8AdMobController_t157_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		NullCheck(G_B12_0);
		G_B12_0->____OnAdInAppRequest_16 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t158_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3500(__this, /*hidden argument*/SA_Singleton_1__ctor_m3500_MethodInfo_var);
		return;
	}
}
// System.Void WP8AdMobController::Awake()
extern "C" void WP8AdMobController_Awake_m927 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3462(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::Init(System.String)
extern TypeInfo* Dictionary_2_t156_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t144_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3501_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdLoaded_m968_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3474_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdFailedToLoad_m969_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdOpened_m970_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdClosed_m971_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnInterstitialAdLeftApplication_m972_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdLoaded_m963_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdFailedToLoad_m964_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdOpened_m965_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdClosed_m966_MethodInfo_var;
extern const MethodInfo* WP8AdMobController_OnBannerAdLeftApplication_m967_MethodInfo_var;
extern "C" void WP8AdMobController_Init_m928 (WP8AdMobController_t157 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(239);
		Action_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		Dictionary_2__ctor_m3501_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483805);
		WP8AdMobController_OnInterstitialAdLoaded_m968_MethodInfo_var = il2cpp_codegen_method_info_from_index(158);
		Action_1__ctor_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		WP8AdMobController_OnInterstitialAdFailedToLoad_m969_MethodInfo_var = il2cpp_codegen_method_info_from_index(159);
		WP8AdMobController_OnInterstitialAdOpened_m970_MethodInfo_var = il2cpp_codegen_method_info_from_index(160);
		WP8AdMobController_OnInterstitialAdClosed_m971_MethodInfo_var = il2cpp_codegen_method_info_from_index(161);
		WP8AdMobController_OnInterstitialAdLeftApplication_m972_MethodInfo_var = il2cpp_codegen_method_info_from_index(162);
		WP8AdMobController_OnBannerAdLoaded_m963_MethodInfo_var = il2cpp_codegen_method_info_from_index(163);
		WP8AdMobController_OnBannerAdFailedToLoad_m964_MethodInfo_var = il2cpp_codegen_method_info_from_index(164);
		WP8AdMobController_OnBannerAdOpened_m965_MethodInfo_var = il2cpp_codegen_method_info_from_index(165);
		WP8AdMobController_OnBannerAdClosed_m966_MethodInfo_var = il2cpp_codegen_method_info_from_index(166);
		WP8AdMobController_OnBannerAdLeftApplication_m967_MethodInfo_var = il2cpp_codegen_method_info_from_index(167);
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
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		__this->____IsInited_7 = 1;
		String_t* L_1 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_1;
		String_t* L_2 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_2;
		Dictionary_2_t156 * L_3 = (Dictionary_2_t156 *)il2cpp_codegen_object_new (Dictionary_2_t156_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3501(L_3, /*hidden argument*/Dictionary_2__ctor_m3501_MethodInfo_var);
		__this->____banners_8 = L_3;
		AdManager_t672 * L_4 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___ad_unit_id;
		NullCheck(L_4);
		AdManager_Init_m3503(L_4, L_5, /*hidden argument*/NULL);
		AdManager_t672 * L_6 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_7 = { (void*)WP8AdMobController_OnInterstitialAdLoaded_m968_MethodInfo_var };
		Action_1_t144 * L_8 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_8, __this, L_7, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_6);
		L_6->___InterstisialOnLoad_0 = L_8;
		AdManager_t672 * L_9 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)WP8AdMobController_OnInterstitialAdFailedToLoad_m969_MethodInfo_var };
		Action_1_t144 * L_11 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_11, __this, L_10, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_9);
		L_9->___InterstisialFailedToLoad_1 = L_11;
		AdManager_t672 * L_12 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_13 = { (void*)WP8AdMobController_OnInterstitialAdOpened_m970_MethodInfo_var };
		Action_1_t144 * L_14 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_14, __this, L_13, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_12);
		L_12->___InterstisialOnAdOpened_2 = L_14;
		AdManager_t672 * L_15 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_16 = { (void*)WP8AdMobController_OnInterstitialAdClosed_m971_MethodInfo_var };
		Action_1_t144 * L_17 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_17, __this, L_16, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_15);
		L_15->___InterstisialOnAdClosed_3 = L_17;
		AdManager_t672 * L_18 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_19 = { (void*)WP8AdMobController_OnInterstitialAdLeftApplication_m972_MethodInfo_var };
		Action_1_t144 * L_20 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_20, __this, L_19, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_18);
		L_18->___InterstisialAdLeftApplication_4 = L_20;
		AdManager_t672 * L_21 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_22 = { (void*)WP8AdMobController_OnBannerAdLoaded_m963_MethodInfo_var };
		Action_1_t144 * L_23 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_23, __this, L_22, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_21);
		L_21->___BannerOnLoad_5 = L_23;
		AdManager_t672 * L_24 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_25 = { (void*)WP8AdMobController_OnBannerAdFailedToLoad_m964_MethodInfo_var };
		Action_1_t144 * L_26 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_26, __this, L_25, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_24);
		L_24->___BannerFailedToLoad_6 = L_26;
		AdManager_t672 * L_27 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_28 = { (void*)WP8AdMobController_OnBannerAdOpened_m965_MethodInfo_var };
		Action_1_t144 * L_29 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_29, __this, L_28, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_27);
		L_27->___BannerOnAdOpened_7 = L_29;
		AdManager_t672 * L_30 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_31 = { (void*)WP8AdMobController_OnBannerAdClosed_m966_MethodInfo_var };
		Action_1_t144 * L_32 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_32, __this, L_31, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_30);
		L_30->___BannerOnAdClosed_8 = L_32;
		AdManager_t672 * L_33 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_34 = { (void*)WP8AdMobController_OnBannerAdLeftApplication_m967_MethodInfo_var };
		Action_1_t144 * L_35 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_35, __this, L_34, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		NullCheck(L_33);
		L_33->___BannerAdLeftApplication_9 = L_35;
		int32_t L_36 = Screen_get_orientation_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		WP8AdMobController_SetOrientation_m929(__this, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::SetOrientation(UnityEngine.ScreenOrientation)
extern "C" void WP8AdMobController_SetOrientation_m929 (WP8AdMobController_t157 * __this, int32_t ___orientation, const MethodInfo* method)
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
		AdManager_t672 * L_5 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		AdManager_SetOrientation_m3504(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::Init(System.String,System.String)
extern "C" void WP8AdMobController_Init_m930 (WP8AdMobController_t157 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
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
extern "C" void WP8AdMobController_SetBannersUnitID_m931 (WP8AdMobController_t157 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_0;
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___ad_unit_id;
		NullCheck(L_1);
		AdManager_ChangeBannersUnitID_m3505(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::SetInterstisialsUnitID(System.String)
extern "C" void WP8AdMobController_SetInterstisialsUnitID_m932 (WP8AdMobController_t157 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_0;
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___ad_unit_id;
		NullCheck(L_1);
		AdManager_ChangeInterstisialsUnitID_m3506(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner WP8AdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t219_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern "C" Object_t * WP8AdMobController_CreateAdBanner_m933 (WP8AdMobController_t157 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t155 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___anchor;
		int32_t L_2 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t219_il2cpp_TypeInfo_var);
		int32_t L_3 = GADBannerIdFactory_get_nextId_m1300(NULL /*static, unused*/, /*hidden argument*/NULL);
		WP8ADBanner_t155 * L_4 = (WP8ADBanner_t155 *)il2cpp_codegen_object_new (WP8ADBanner_t155_il2cpp_TypeInfo_var);
		WP8ADBanner__ctor_m887(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Dictionary_2_t156 * L_5 = (__this->____banners_8);
		WP8ADBanner_t155 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 WP8ADBanner::get_id() */, L_6);
		WP8ADBanner_t155 * L_8 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, WP8ADBanner_t155 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::Add(!0,!1) */, L_5, L_7, L_8);
		WP8ADBanner_t155 * L_9 = V_0;
		return L_9;
	}
}
// GoogleMobileAdBanner WP8AdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t219_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern "C" Object_t * WP8AdMobController_CreateAdBanner_m934 (WP8AdMobController_t157 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	WP8ADBanner_t155 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t219_il2cpp_TypeInfo_var);
		int32_t L_2 = GADBannerIdFactory_get_nextId_m1300(NULL /*static, unused*/, /*hidden argument*/NULL);
		WP8ADBanner_t155 * L_3 = (WP8ADBanner_t155 *)il2cpp_codegen_object_new (WP8ADBanner_t155_il2cpp_TypeInfo_var);
		WP8ADBanner__ctor_m887(L_3, 4, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t156 * L_4 = (__this->____banners_8);
		WP8ADBanner_t155 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 WP8ADBanner::get_id() */, L_5);
		WP8ADBanner_t155 * L_7 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< int32_t, WP8ADBanner_t155 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::Add(!0,!1) */, L_4, L_6, L_7);
		WP8ADBanner_t155 * L_8 = V_0;
		return L_8;
	}
}
// System.Void WP8AdMobController::DestroyBanner(System.Int32)
extern "C" void WP8AdMobController_DestroyBanner_m935 (WP8AdMobController_t157 * __this, int32_t ___id, const MethodInfo* method)
{
	WP8ADBanner_t155 * V_0 = {0};
	{
		Dictionary_2_t156 * L_0 = (__this->____banners_8);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_t156 * L_1 = (__this->____banners_8);
		int32_t L_2 = ___id;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::ContainsKey(!0) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_t156 * L_4 = (__this->____banners_8);
		int32_t L_5 = ___id;
		NullCheck(L_4);
		WP8ADBanner_t155 * L_6 = (WP8ADBanner_t155 *)VirtFuncInvoker1< WP8ADBanner_t155 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::get_Item(!0) */, L_4, L_5);
		V_0 = L_6;
		WP8ADBanner_t155 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean WP8ADBanner::get_IsLoaded() */, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		Dictionary_2_t156 * L_9 = (__this->____banners_8);
		int32_t L_10 = ___id;
		NullCheck(L_9);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::Remove(!0) */, L_9, L_10);
		AdManager_t672 * L_11 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_12 = ___id;
		NullCheck(L_11);
		AdManager_DestroyBanner_m3507(L_11, L_12, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0051:
	{
		WP8ADBanner_t155 * L_13 = V_0;
		NullCheck(L_13);
		WP8ADBanner_DestroyAfterLoad_m894(L_13, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void WP8AdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void WP8AdMobController_RecordInAppResolution_m936 (WP8AdMobController_t157 * __this, int32_t ___resolution, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::AddKeyword(System.String)
extern "C" void WP8AdMobController_AddKeyword_m937 (WP8AdMobController_t157 * __this, String_t* ___keyword, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral287, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___keyword;
		NullCheck(L_1);
		AdManager_AddKeyword_m3508(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::AddTestDevice(System.String)
extern "C" void WP8AdMobController_AddTestDevice_m938 (WP8AdMobController_t157 * __this, String_t* ___deviceId, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_EnableForceTesting_m3509(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::AddTestDevices(System.String[])
extern "C" void WP8AdMobController_AddTestDevices_m939 (WP8AdMobController_t157 * __this, StringU5BU5D_t75* ___ids, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		StringU5BU5D_t75* L_1 = ___ids;
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
extern "C" void WP8AdMobController_SetGender_m940 (WP8AdMobController_t157 * __this, int32_t ___gender, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral291, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___gender;
		NullCheck(L_1);
		AdManager_SetGender_m3510(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void WP8AdMobController_SetBirthday_m941 (WP8AdMobController_t157 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral288, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___year;
		int32_t L_3 = ___month;
		int32_t L_4 = ___day;
		NullCheck(L_1);
		AdManager_SetBirthday_m3511(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void WP8AdMobController_TagForChildDirectedTreatment_m942 (WP8AdMobController_t157 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral289, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		return;
	}
}
// System.Void WP8AdMobController::StartInterstitialAd()
extern "C" void WP8AdMobController_StartInterstitialAd_m943 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_StartInterstitialAd_m3512(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::LoadInterstitialAd()
extern "C" void WP8AdMobController_LoadInterstitialAd_m944 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral293, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_LoadInterstitialAd_m3513(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WP8AdMobController::ShowInterstitialAd()
extern "C" void WP8AdMobController_ShowInterstitialAd_m945 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean WP8AdMobController::get_IsInited() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral294, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AdManager_t672 * L_1 = AdManager_get_instance_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		AdManager_ShowInterstitialAd_m3514(L_1, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * WP8AdMobController_GetBanner_m946 (WP8AdMobController_t157 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t156 * L_0 = (__this->____banners_8);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t156 * L_3 = (__this->____banners_8);
		int32_t L_4 = ___id;
		NullCheck(L_3);
		WP8ADBanner_t155 * L_5 = (WP8ADBanner_t155 *)VirtFuncInvoker1< WP8ADBanner_t155 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral304, L_6, (String_t*) &_stringLiteral305, /*hidden argument*/NULL);
		Debug_LogWarning_m389(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAdBanner> WP8AdMobController::get_banners()
extern TypeInfo* List_1_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t674_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3494_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3515_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3516_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3517_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3518_MethodInfo_var;
extern "C" List_1_t625 * WP8AdMobController_get_banners_m947 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		Enumerator_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1__ctor_m3494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483788);
		Dictionary_2_GetEnumerator_m3515_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483816);
		Enumerator_get_Current_m3516_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483817);
		KeyValuePair_2_get_Value_m3517_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483818);
		Enumerator_MoveNext_m3518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483819);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t625 * V_0 = {0};
	KeyValuePair_2_t673  V_1 = {0};
	Enumerator_t674  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t625 * L_0 = (List_1_t625 *)il2cpp_codegen_object_new (List_1_t625_il2cpp_TypeInfo_var);
		List_1__ctor_m3494(L_0, /*hidden argument*/List_1__ctor_m3494_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t156 * L_1 = (__this->____banners_8);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t625 * L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t156 * L_3 = (__this->____banners_8);
		NullCheck(L_3);
		Enumerator_t674  L_4 = Dictionary_2_GetEnumerator_m3515(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3515_MethodInfo_var);
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
			KeyValuePair_2_t673  L_5 = Enumerator_get_Current_m3516((&V_2), /*hidden argument*/Enumerator_get_Current_m3516_MethodInfo_var);
			V_1 = L_5;
			List_1_t625 * L_6 = V_0;
			WP8ADBanner_t155 * L_7 = KeyValuePair_2_get_Value_m3517((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3517_MethodInfo_var);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(!0) */, L_6, L_7);
		}

IL_0039:
		{
			bool L_8 = Enumerator_MoveNext_m3518((&V_2), /*hidden argument*/Enumerator_MoveNext_m3518_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t674  L_9 = V_2;
		Enumerator_t674  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t674_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0056:
	{
		List_1_t625 * L_12 = V_0;
		return L_12;
	}
}
// System.Boolean WP8AdMobController::get_IsInited()
extern "C" bool WP8AdMobController_get_IsInited_m948 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		return L_0;
	}
}
// System.String WP8AdMobController::get_BannersUunitId()
extern "C" String_t* WP8AdMobController_get_BannersUunitId_m949 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____BannersUunitId_9);
		return L_0;
	}
}
// System.String WP8AdMobController::get_InterstisialUnitId()
extern "C" String_t* WP8AdMobController_get_InterstisialUnitId_m950 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____InterstisialUnitId_10);
		return L_0;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialLoaded()
extern "C" Action_t143 * WP8AdMobController_get_OnInterstitialLoaded_m951 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLoaded_11);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialLoaded_m952 (WP8AdMobController_t157 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialLoaded_11 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t143 * WP8AdMobController_get_OnInterstitialFailedLoading_m953 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialFailedLoading_m954 (WP8AdMobController_t157 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialFailedLoading_12 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialOpened()
extern "C" Action_t143 * WP8AdMobController_get_OnInterstitialOpened_m955 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialOpened_13);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialOpened_m956 (WP8AdMobController_t157 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialOpened_13 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialClosed()
extern "C" Action_t143 * WP8AdMobController_get_OnInterstitialClosed_m957 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialClosed_14);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialClosed_m958 (WP8AdMobController_t157 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialClosed_14 = L_0;
		return;
	}
}
// System.Action WP8AdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t143 * WP8AdMobController_get_OnInterstitialLeftApplication_m959 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialLeftApplication_m960 (WP8AdMobController_t157 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialLeftApplication_15 = L_0;
		return;
	}
}
// System.Action`1<System.String> WP8AdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t144 * WP8AdMobController_get_OnAdInAppRequest_m961 (WP8AdMobController_t157 * __this, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = (__this->____OnAdInAppRequest_16);
		return L_0;
	}
}
// System.Void WP8AdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void WP8AdMobController_set_OnAdInAppRequest_m962 (WP8AdMobController_t157 * __this, Action_1_t144 * ___value, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = ___value;
		__this->____OnAdInAppRequest_16 = L_0;
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdLoaded(System.String)
extern TypeInfo* CharU5BU5D_t652_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdLoaded_m963 (WP8AdMobController_t157 * __this, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	WP8ADBanner_t155 * V_4 = {0};
	{
		String_t* L_0 = ___data;
		CharU5BU5D_t652* L_1 = ((CharU5BU5D_t652*)SZArrayNew(CharU5BU5D_t652_il2cpp_TypeInfo_var, 1));
		NullCheck((String_t*) &_stringLiteral306);
		uint16_t L_2 = String_get_Chars_m407((String_t*) &_stringLiteral306, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)L_2;
		NullCheck(L_0);
		StringU5BU5D_t75* L_3 = String_Split_m3418(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t75* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t75* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		int32_t L_9 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t75* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		int32_t L_11 = 2;
		int32_t L_12 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = V_1;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_13);
		V_4 = ((WP8ADBanner_t155 *)IsInst(L_14, WP8ADBanner_t155_il2cpp_TypeInfo_var));
		WP8ADBanner_t155 * L_15 = V_4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		WP8ADBanner_t155 * L_16 = V_4;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		WP8ADBanner_SetDimentions_m895(L_16, L_17, L_18, /*hidden argument*/NULL);
		WP8ADBanner_t155 * L_19 = V_4;
		NullCheck(L_19);
		WP8ADBanner_OnBannerAdLoaded_m916(L_19, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdFailedToLoad(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdFailedToLoad_m964 (WP8AdMobController_t157 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t155 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t155 *)IsInst(L_3, WP8ADBanner_t155_il2cpp_TypeInfo_var));
		WP8ADBanner_t155 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t155 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdFailedToLoad_m917(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdOpened(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdOpened_m965 (WP8AdMobController_t157 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t155 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t155 *)IsInst(L_3, WP8ADBanner_t155_il2cpp_TypeInfo_var));
		WP8ADBanner_t155 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t155 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdOpened_m918(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdClosed(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdClosed_m966 (WP8AdMobController_t157 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t155 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t155 *)IsInst(L_3, WP8ADBanner_t155_il2cpp_TypeInfo_var));
		WP8ADBanner_t155 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t155 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdClosed_m919(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnBannerAdLeftApplication(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* WP8ADBanner_t155_il2cpp_TypeInfo_var;
extern "C" void WP8AdMobController_OnBannerAdLeftApplication_m967 (WP8AdMobController_t157 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		WP8ADBanner_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WP8ADBanner_t155 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((WP8ADBanner_t155 *)IsInst(L_3, WP8ADBanner_t155_il2cpp_TypeInfo_var));
		WP8ADBanner_t155 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		WP8ADBanner_t155 * L_5 = V_1;
		NullCheck(L_5);
		WP8ADBanner_OnBannerAdLeftApplication_m920(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdLoaded(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdLoaded_m968 (WP8AdMobController_t157 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLoaded_11);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral252);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdFailedToLoad(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdFailedToLoad_m969 (WP8AdMobController_t157 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral307);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdOpened(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdOpened_m970 (WP8AdMobController_t157 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialOpened_13);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral253);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdClosed(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdClosed_m971 (WP8AdMobController_t157 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialClosed_14);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral254);
		return;
	}
}
// System.Void WP8AdMobController::OnInterstitialAdLeftApplication(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdLeftApplication_m972 (WP8AdMobController_t157 * __this, String_t* ___data, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral308);
		return;
	}
}
// System.Void WP8AdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void WP8AdMobController_OnInAppPurchaseRequested_m973 (WP8AdMobController_t157 * __this, String_t* ___productId, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = (__this->____OnAdInAppRequest_16);
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		String_t* L_2 = ___productId;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral257, L_2);
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialLoaded>m__16()
extern "C" void WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m974 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialFailedLoading>m__17()
extern "C" void WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m975 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialOpened>m__18()
extern "C" void WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m976 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialClosed>m__19()
extern "C" void WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m977 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnInterstitialLeftApplication>m__1A()
extern "C" void WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m978 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WP8AdMobController::<_OnAdInAppRequest>m__1B(System.String)
extern "C" void WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m979 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
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
extern TypeInfo* AndroidAdMobController_t160_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t144_il2cpp_TypeInfo_var;
extern TypeInfo* SA_Singleton_1_t161_il2cpp_TypeInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m1027_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m1028_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m1029_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m1030_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m1031_MethodInfo_var;
extern const MethodInfo* AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m1032_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3474_MethodInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3519_MethodInfo_var;
extern "C" void AndroidAdMobController__ctor_m980 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AndroidAdMobController_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Action_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		SA_Singleton_1_t161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(228);
		AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m1027_MethodInfo_var = il2cpp_codegen_method_info_from_index(172);
		AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m1028_MethodInfo_var = il2cpp_codegen_method_info_from_index(173);
		AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m1029_MethodInfo_var = il2cpp_codegen_method_info_from_index(174);
		AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m1030_MethodInfo_var = il2cpp_codegen_method_info_from_index(175);
		AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m1031_MethodInfo_var = il2cpp_codegen_method_info_from_index(176);
		AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m1032_MethodInfo_var = il2cpp_codegen_method_info_from_index(177);
		Action_1__ctor_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483759);
		SA_Singleton_1__ctor_m3519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483826);
		s_Il2CppMethodIntialized = true;
	}
	AndroidAdMobController_t160 * G_B2_0 = {0};
	AndroidAdMobController_t160 * G_B1_0 = {0};
	AndroidAdMobController_t160 * G_B4_0 = {0};
	AndroidAdMobController_t160 * G_B3_0 = {0};
	AndroidAdMobController_t160 * G_B6_0 = {0};
	AndroidAdMobController_t160 * G_B5_0 = {0};
	AndroidAdMobController_t160 * G_B8_0 = {0};
	AndroidAdMobController_t160 * G_B7_0 = {0};
	AndroidAdMobController_t160 * G_B10_0 = {0};
	AndroidAdMobController_t160 * G_B9_0 = {0};
	AndroidAdMobController_t160 * G_B12_0 = {0};
	AndroidAdMobController_t160 * G_B11_0 = {0};
	{
		Action_t143 * L_0 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m1027_MethodInfo_var };
		Action_t143 * L_2 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_2, NULL, L_1, /*hidden argument*/NULL);
		((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_t143 * L_3 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheA_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnInterstitialLoaded_11 = L_3;
		Action_t143 * L_4 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		IntPtr_t L_5 = { (void*)AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m1028_MethodInfo_var };
		Action_t143 * L_6 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_6, NULL, L_5, /*hidden argument*/NULL);
		((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_t143 * L_7 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheB_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnInterstitialFailedLoading_12 = L_7;
		Action_t143 * L_8 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_9 = { (void*)AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m1029_MethodInfo_var };
		Action_t143 * L_10 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_10, NULL, L_9, /*hidden argument*/NULL);
		((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_005f:
	{
		Action_t143 * L_11 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnInterstitialOpened_13 = L_11;
		Action_t143 * L_12 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0082;
		}
	}
	{
		IntPtr_t L_13 = { (void*)AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m1030_MethodInfo_var };
		Action_t143 * L_14 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_14, NULL, L_13, /*hidden argument*/NULL);
		((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0082:
	{
		Action_t143 * L_15 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheD_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnInterstitialClosed_14 = L_15;
		Action_t143 * L_16 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_17 = { (void*)AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m1031_MethodInfo_var };
		Action_t143 * L_18 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_18, NULL, L_17, /*hidden argument*/NULL);
		((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00a5:
	{
		Action_t143 * L_19 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheE_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnInterstitialLeftApplication_15 = L_19;
		Action_1_t144 * L_20 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		G_B11_0 = __this;
		if (L_20)
		{
			G_B12_0 = __this;
			goto IL_00c8;
		}
	}
	{
		IntPtr_t L_21 = { (void*)AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m1032_MethodInfo_var };
		Action_1_t144 * L_22 = (Action_1_t144 *)il2cpp_codegen_object_new (Action_1_t144_il2cpp_TypeInfo_var);
		Action_1__ctor_m3474(L_22, NULL, L_21, /*hidden argument*/Action_1__ctor_m3474_MethodInfo_var);
		((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22 = L_22;
		G_B12_0 = G_B11_0;
	}

IL_00c8:
	{
		Action_1_t144 * L_23 = ((AndroidAdMobController_t160_StaticFields*)AndroidAdMobController_t160_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_22;
		NullCheck(G_B12_0);
		G_B12_0->____OnAdInAppRequest_16 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t161_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3519(__this, /*hidden argument*/SA_Singleton_1__ctor_m3519_MethodInfo_var);
		return;
	}
}
// System.Void AndroidAdMobController::Awake()
extern "C" void AndroidAdMobController_Awake_m981 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3462(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::Init(System.String)
extern TypeInfo* Dictionary_2_t159_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3520_MethodInfo_var;
extern "C" void AndroidAdMobController_Init_m982 (AndroidAdMobController_t160 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(242);
		Dictionary_2__ctor_m3520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483827);
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
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		__this->____IsInited_7 = 1;
		String_t* L_1 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_1;
		String_t* L_2 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_2;
		Dictionary_2_t159 * L_3 = (Dictionary_2_t159 *)il2cpp_codegen_object_new (Dictionary_2_t159_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3520(L_3, /*hidden argument*/Dictionary_2__ctor_m3520_MethodInfo_var);
		__this->____banners_8 = L_3;
		String_t* L_4 = ___ad_unit_id;
		AN_GoogleAdProxy_InitMobileAd_m1035(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::Init(System.String,System.String)
extern "C" void AndroidAdMobController_Init_m983 (AndroidAdMobController_t160 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
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
extern "C" void AndroidAdMobController_SetBannersUnitID_m984 (AndroidAdMobController_t160 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____BannersUunitId_9 = L_0;
		String_t* L_1 = ___ad_unit_id;
		AN_GoogleAdProxy_ChangeBannersUnitID_m1036(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::SetInterstisialsUnitID(System.String)
extern "C" void AndroidAdMobController_SetInterstisialsUnitID_m985 (AndroidAdMobController_t160 * __this, String_t* ___ad_unit_id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___ad_unit_id;
		__this->____InterstisialUnitId_10 = L_0;
		String_t* L_1 = ___ad_unit_id;
		AN_GoogleAdProxy_ChangeInterstisialsUnitID_m1037(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::AddKeyword(System.String)
extern "C" void AndroidAdMobController_AddKeyword_m986 (AndroidAdMobController_t160 * __this, String_t* ___keyword, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral287, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___keyword;
		AN_GoogleAdProxy_AddKeyword_m1050(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void AndroidAdMobController_SetBirthday_m987 (AndroidAdMobController_t160 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral288, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___year;
		int32_t L_2 = ___month;
		int32_t L_3 = ___day;
		AN_GoogleAdProxy_SetBirthday_m1051(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void AndroidAdMobController_TagForChildDirectedTreatment_m988 (AndroidAdMobController_t160 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral289, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		bool L_1 = ___tagForChildDirectedTreatment;
		AN_GoogleAdProxy_TagForChildDirectedTreatment_m1052(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::AddTestDevice(System.String)
extern "C" void AndroidAdMobController_AddTestDevice_m989 (AndroidAdMobController_t160 * __this, String_t* ___deviceId, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		String_t* L_1 = ___deviceId;
		AN_GoogleAdProxy_AddTestDevice_m1053(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::AddTestDevices(System.String[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_AddTestDevices_m990 (AndroidAdMobController_t160 * __this, StringU5BU5D_t75* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
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
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		StringU5BU5D_t75* L_1 = ___ids;
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
		StringU5BU5D_t75* L_2 = ___ids;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Join_m3493(NULL /*static, unused*/, (String_t*) &_stringLiteral303, L_2, /*hidden argument*/NULL);
		AN_GoogleAdProxy_AddTestDevices_m1054(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::SetGender(GoogleGender)
extern "C" void AndroidAdMobController_SetGender_m991 (AndroidAdMobController_t160 * __this, int32_t ___gender, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral291, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		int32_t L_1 = ___gender;
		AN_GoogleAdProxy_SetGender_m1055(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner AndroidAdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t219_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern "C" Object_t * AndroidAdMobController_CreateAdBanner_m992 (AndroidAdMobController_t160 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t215 * V_0 = {0};
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___anchor;
		int32_t L_2 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t219_il2cpp_TypeInfo_var);
		int32_t L_3 = GADBannerIdFactory_get_nextId_m1300(NULL /*static, unused*/, /*hidden argument*/NULL);
		AndroidADBanner_t215 * L_4 = (AndroidADBanner_t215 *)il2cpp_codegen_object_new (AndroidADBanner_t215_il2cpp_TypeInfo_var);
		AndroidADBanner__ctor_m1251(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Dictionary_2_t159 * L_5 = (__this->____banners_8);
		AndroidADBanner_t215 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, L_6);
		AndroidADBanner_t215 * L_8 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, AndroidADBanner_t215 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::Add(!0,!1) */, L_5, L_7, L_8);
		AndroidADBanner_t215 * L_9 = V_0;
		return L_9;
	}
}
// GoogleMobileAdBanner AndroidAdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern TypeInfo* GADBannerIdFactory_t219_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern "C" Object_t * AndroidAdMobController_CreateAdBanner_m993 (AndroidAdMobController_t160 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t215 * V_0 = {0};
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral284, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}

IL_0017:
	{
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t219_il2cpp_TypeInfo_var);
		int32_t L_4 = GADBannerIdFactory_get_nextId_m1300(NULL /*static, unused*/, /*hidden argument*/NULL);
		AndroidADBanner_t215 * L_5 = (AndroidADBanner_t215 *)il2cpp_codegen_object_new (AndroidADBanner_t215_il2cpp_TypeInfo_var);
		AndroidADBanner__ctor_m1252(L_5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Dictionary_2_t159 * L_6 = (__this->____banners_8);
		AndroidADBanner_t215 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, L_7);
		AndroidADBanner_t215 * L_9 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, AndroidADBanner_t215 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::Add(!0,!1) */, L_6, L_8, L_9);
		AndroidADBanner_t215 * L_10 = V_0;
		return L_10;
	}
}
// System.Void AndroidAdMobController::DestroyBanner(System.Int32)
extern "C" void AndroidAdMobController_DestroyBanner_m994 (AndroidAdMobController_t160 * __this, int32_t ___id, const MethodInfo* method)
{
	AndroidADBanner_t215 * V_0 = {0};
	{
		Dictionary_2_t159 * L_0 = (__this->____banners_8);
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t159 * L_1 = (__this->____banners_8);
		int32_t L_2 = ___id;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::ContainsKey(!0) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t159 * L_4 = (__this->____banners_8);
		int32_t L_5 = ___id;
		NullCheck(L_4);
		AndroidADBanner_t215 * L_6 = (AndroidADBanner_t215 *)VirtFuncInvoker1< AndroidADBanner_t215 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::get_Item(!0) */, L_4, L_5);
		V_0 = L_6;
		AndroidADBanner_t215 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean AndroidADBanner::get_IsLoaded() */, L_7);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t159 * L_9 = (__this->____banners_8);
		int32_t L_10 = ___id;
		NullCheck(L_9);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::Remove(!0) */, L_9, L_10);
		int32_t L_11 = ___id;
		AN_GoogleAdProxy_DestroyBanner_m1045(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_004c:
	{
		AndroidADBanner_t215 * L_12 = V_0;
		NullCheck(L_12);
		AndroidADBanner_DestroyAfterLoad_m1258(L_12, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void AndroidAdMobController::StartInterstitialAd()
extern "C" void AndroidAdMobController_StartInterstitialAd_m995 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AN_GoogleAdProxy_StartInterstitialAd_m1046(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::LoadInterstitialAd()
extern "C" void AndroidAdMobController_LoadInterstitialAd_m996 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral293, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AN_GoogleAdProxy_LoadInterstitialAd_m1047(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::ShowInterstitialAd()
extern "C" void AndroidAdMobController_ShowInterstitialAd_m997 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral294, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		AN_GoogleAdProxy_ShowInterstitialAd_m1048(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidAdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void AndroidAdMobController_RecordInAppResolution_m998 (AndroidAdMobController_t160 * __this, int32_t ___resolution, const MethodInfo* method)
{
	{
		int32_t L_0 = ___resolution;
		AN_GoogleAdProxy_RecordInAppResolution_m1049(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * AndroidAdMobController_GetBanner_m999 (AndroidAdMobController_t160 * __this, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t159 * L_0 = (__this->____banners_8);
		int32_t L_1 = ___id;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t159 * L_3 = (__this->____banners_8);
		int32_t L_4 = ___id;
		NullCheck(L_3);
		AndroidADBanner_t215 * L_5 = (AndroidADBanner_t215 *)VirtFuncInvoker1< AndroidADBanner_t215 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral304, L_6, (String_t*) &_stringLiteral305, /*hidden argument*/NULL);
		Debug_LogWarning_m389(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (Object_t *)NULL;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAdBanner> AndroidAdMobController::get_banners()
extern TypeInfo* List_1_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t676_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3494_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3521_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3522_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3523_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3524_MethodInfo_var;
extern "C" List_1_t625 * AndroidAdMobController_get_banners_m1000 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		Enumerator_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1__ctor_m3494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483788);
		Dictionary_2_GetEnumerator_m3521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483828);
		Enumerator_get_Current_m3522_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483829);
		KeyValuePair_2_get_Value_m3523_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483830);
		Enumerator_MoveNext_m3524_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483831);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t625 * V_0 = {0};
	KeyValuePair_2_t675  V_1 = {0};
	Enumerator_t676  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t625 * L_0 = (List_1_t625 *)il2cpp_codegen_object_new (List_1_t625_il2cpp_TypeInfo_var);
		List_1__ctor_m3494(L_0, /*hidden argument*/List_1__ctor_m3494_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t159 * L_1 = (__this->____banners_8);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t625 * L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t159 * L_3 = (__this->____banners_8);
		NullCheck(L_3);
		Enumerator_t676  L_4 = Dictionary_2_GetEnumerator_m3521(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3521_MethodInfo_var);
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
			KeyValuePair_2_t675  L_5 = Enumerator_get_Current_m3522((&V_2), /*hidden argument*/Enumerator_get_Current_m3522_MethodInfo_var);
			V_1 = L_5;
			List_1_t625 * L_6 = V_0;
			AndroidADBanner_t215 * L_7 = KeyValuePair_2_get_Value_m3523((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3523_MethodInfo_var);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(!0) */, L_6, L_7);
		}

IL_0039:
		{
			bool L_8 = Enumerator_MoveNext_m3524((&V_2), /*hidden argument*/Enumerator_MoveNext_m3524_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t676  L_9 = V_2;
		Enumerator_t676  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t676_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0056:
	{
		List_1_t625 * L_12 = V_0;
		return L_12;
	}
}
// System.Boolean AndroidAdMobController::get_IsInited()
extern "C" bool AndroidAdMobController_get_IsInited_m1001 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsInited_7);
		return L_0;
	}
}
// System.String AndroidAdMobController::get_BannersUunitId()
extern "C" String_t* AndroidAdMobController_get_BannersUunitId_m1002 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____BannersUunitId_9);
		return L_0;
	}
}
// System.String AndroidAdMobController::get_InterstisialUnitId()
extern "C" String_t* AndroidAdMobController_get_InterstisialUnitId_m1003 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____InterstisialUnitId_10);
		return L_0;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialLoaded()
extern "C" Action_t143 * AndroidAdMobController_get_OnInterstitialLoaded_m1004 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLoaded_11);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialLoaded_m1005 (AndroidAdMobController_t160 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialLoaded_11 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t143 * AndroidAdMobController_get_OnInterstitialFailedLoading_m1006 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialFailedLoading_m1007 (AndroidAdMobController_t160 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialFailedLoading_12 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialOpened()
extern "C" Action_t143 * AndroidAdMobController_get_OnInterstitialOpened_m1008 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialOpened_13);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialOpened_m1009 (AndroidAdMobController_t160 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialOpened_13 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialClosed()
extern "C" Action_t143 * AndroidAdMobController_get_OnInterstitialClosed_m1010 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialClosed_14);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialClosed_m1011 (AndroidAdMobController_t160 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialClosed_14 = L_0;
		return;
	}
}
// System.Action AndroidAdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t143 * AndroidAdMobController_get_OnInterstitialLeftApplication_m1012 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialLeftApplication_m1013 (AndroidAdMobController_t160 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->____OnInterstitialLeftApplication_15 = L_0;
		return;
	}
}
// System.Action`1<System.String> AndroidAdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t144 * AndroidAdMobController_get_OnAdInAppRequest_m1014 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = (__this->____OnAdInAppRequest_16);
		return L_0;
	}
}
// System.Void AndroidAdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void AndroidAdMobController_set_OnAdInAppRequest_m1015 (AndroidAdMobController_t160 * __this, Action_1_t144 * ___value, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = ___value;
		__this->____OnAdInAppRequest_16 = L_0;
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdLoaded(System.String)
extern TypeInfo* CharU5BU5D_t652_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdLoaded_m1016 (AndroidAdMobController_t160 * __this, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	AndroidADBanner_t215 * V_4 = {0};
	{
		String_t* L_0 = ___data;
		CharU5BU5D_t652* L_1 = ((CharU5BU5D_t652*)SZArrayNew(CharU5BU5D_t652_il2cpp_TypeInfo_var, 1));
		NullCheck((String_t*) &_stringLiteral306);
		uint16_t L_2 = String_get_Chars_m407((String_t*) &_stringLiteral306, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)L_2;
		NullCheck(L_0);
		StringU5BU5D_t75* L_3 = String_Split_m3418(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t75* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t75* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		int32_t L_9 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t75* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		int32_t L_11 = 2;
		int32_t L_12 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		V_3 = L_12;
		int32_t L_13 = V_1;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_13);
		V_4 = ((AndroidADBanner_t215 *)IsInst(L_14, AndroidADBanner_t215_il2cpp_TypeInfo_var));
		AndroidADBanner_t215 * L_15 = V_4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		AndroidADBanner_t215 * L_16 = V_4;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		AndroidADBanner_SetDimentions_m1259(L_16, L_17, L_18, /*hidden argument*/NULL);
		AndroidADBanner_t215 * L_19 = V_4;
		NullCheck(L_19);
		AndroidADBanner_OnBannerAdLoaded_m1280(L_19, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdFailedToLoad(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdFailedToLoad_m1017 (AndroidAdMobController_t160 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t215 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t215 *)IsInst(L_3, AndroidADBanner_t215_il2cpp_TypeInfo_var));
		AndroidADBanner_t215 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t215 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdFailedToLoad_m1281(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdOpened(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdOpened_m1018 (AndroidAdMobController_t160 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t215 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t215 *)IsInst(L_3, AndroidADBanner_t215_il2cpp_TypeInfo_var));
		AndroidADBanner_t215 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t215 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdOpened_m1282(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdClosed(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdClosed_m1019 (AndroidAdMobController_t160 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t215 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t215 *)IsInst(L_3, AndroidADBanner_t215_il2cpp_TypeInfo_var));
		AndroidADBanner_t215 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t215 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdClosed_m1283(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnBannerAdLeftApplication(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern "C" void AndroidAdMobController_OnBannerAdLeftApplication_m1020 (AndroidAdMobController_t160 * __this, String_t* ___bannerID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AndroidADBanner_t215 * V_1 = {0};
	{
		String_t* L_0 = ___bannerID;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32) */, __this, L_2);
		V_1 = ((AndroidADBanner_t215 *)IsInst(L_3, AndroidADBanner_t215_il2cpp_TypeInfo_var));
		AndroidADBanner_t215 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		AndroidADBanner_t215 * L_5 = V_1;
		NullCheck(L_5);
		AndroidADBanner_OnBannerAdLeftApplication_m1284(L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdLoaded()
extern "C" void AndroidAdMobController_OnInterstitialAdLoaded_m1021 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLoaded_11);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral252);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdFailedToLoad()
extern "C" void AndroidAdMobController_OnInterstitialAdFailedToLoad_m1022 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialFailedLoading_12);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral307);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdOpened()
extern "C" void AndroidAdMobController_OnInterstitialAdOpened_m1023 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialOpened_13);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral253);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdClosed()
extern "C" void AndroidAdMobController_OnInterstitialAdClosed_m1024 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialClosed_14);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral254);
		return;
	}
}
// System.Void AndroidAdMobController::OnInterstitialAdLeftApplication()
extern "C" void AndroidAdMobController_OnInterstitialAdLeftApplication_m1025 (AndroidAdMobController_t160 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->____OnInterstitialLeftApplication_15);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral308);
		return;
	}
}
// System.Void AndroidAdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void AndroidAdMobController_OnInAppPurchaseRequested_m1026 (AndroidAdMobController_t160 * __this, String_t* ___productId, const MethodInfo* method)
{
	{
		Action_1_t144 * L_0 = (__this->____OnAdInAppRequest_16);
		String_t* L_1 = ___productId;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Action`1<System.String>::Invoke(!0) */, L_0, L_1);
		String_t* L_2 = ___productId;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object) */, __this, (String_t*) &_stringLiteral257, L_2);
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialLoaded>m__1C()
extern "C" void AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m1027 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialFailedLoading>m__1D()
extern "C" void AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m1028 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialOpened>m__1E()
extern "C" void AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m1029 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialClosed>m__1F()
extern "C" void AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m1030 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnInterstitialLeftApplication>m__20()
extern "C" void AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m1031 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidAdMobController::<_OnAdInAppRequest>m__21(System.String)
extern "C" void AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m1032 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method)
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
extern "C" void AN_GoogleAdProxy__ctor_m1033 (AN_GoogleAdProxy_t162 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAdProxy_CallActivityFunction_m1034 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral311, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::InitMobileAd(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_InitMobileAd_m1035 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___id;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral312, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ChangeBannersUnitID(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ChangeBannersUnitID_m1036 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___id;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral313, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ChangeInterstisialsUnitID(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ChangeInterstisialsUnitID_m1037 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___id;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral314, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::CreateBannerAd(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_CreateBannerAd_m1038 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m399((&___gravity), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___size), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral315, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::CreateBannerAdPos(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_CreateBannerAdPos_m1039 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Int32_ToString_m399((&___x), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___y), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___size), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral316, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetBannerPosition(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetBannerPosition_m1040 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___bannerId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m399((&___gravity), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___bannerId), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral317, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetBannerPosition(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetBannerPosition_m1041 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___bannerId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m399((&___x), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___y), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___bannerId), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral317, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::HideAd(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_HideAd_m1042 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral318, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ShowAd(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ShowAd_m1043 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral319, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::RefreshAd(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_RefreshAd_m1044 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral320, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::DestroyBanner(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_DestroyBanner_m1045 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___id), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral321, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::StartInterstitialAd()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_StartInterstitialAd_m1046 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral322, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::LoadInterstitialAd()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_LoadInterstitialAd_m1047 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral323, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::ShowInterstitialAd()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_ShowInterstitialAd_m1048 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral324, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::RecordInAppResolution(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_RecordInAppResolution_m1049 (Object_t * __this /* static, unused */, int32_t ___res, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___res), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral325, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::AddKeyword(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_AddKeyword_m1050 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___keyword;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral326, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetBirthday(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetBirthday_m1051 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m399((&___year), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___month), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___day), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral327, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::TagForChildDirectedTreatment(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_TagForChildDirectedTreatment_m1052 (Object_t * __this /* static, unused */, bool ___tagForChildDirectedTreatment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
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
		ObjectU5BU5D_t626* L_1 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral329);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral329;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral328, L_1, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0023:
	{
		ObjectU5BU5D_t626* L_2 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral330);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)(String_t*) &_stringLiteral330;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral328, L_2, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void AN_GoogleAdProxy::AddTestDevice(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_AddTestDevice_m1053 (Object_t * __this /* static, unused */, String_t* ___deviceId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___deviceId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral331, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::AddTestDevices(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_AddTestDevices_m1054 (Object_t * __this /* static, unused */, String_t* ___cvsDeviceIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___cvsDeviceIds;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral332, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAdProxy::SetGender(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAdProxy_SetGender_m1055 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___gender), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAdProxy_CallActivityFunction_m1034(NULL /*static, unused*/, (String_t*) &_stringLiteral333, L_0, /*hidden argument*/NULL);
		return;
	}
}
// AN_ProxyPool
#include "AssemblyU2DCSharp_AN_ProxyPool.h"
#ifndef _MSC_VER
#else
#endif



// System.Void AN_ProxyPool::.ctor()
extern "C" void AN_ProxyPool__ctor_m1056 (AN_ProxyPool_t163 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ProxyPool::CallStatic(System.String,System.String,System.Object[])
extern "C" void AN_ProxyPool_CallStatic_m1057 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
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
extern "C" void AN_BillingProxy__ctor_m1058 (AN_BillingProxy_t164 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_BillingProxy_CallActivityFunction_m1059 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral334, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Connect(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Connect_m1060 (Object_t * __this /* static, unused */, String_t* ___ids, String_t* ___base64EncodedPublicKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___base64EncodedPublicKey;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m1059(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::RetrieveProducDetails()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_RetrieveProducDetails_m1061 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BillingProxy_CallActivityFunction_m1059(NULL /*static, unused*/, (String_t*) &_stringLiteral336, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Consume(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Consume_m1062 (Object_t * __this /* static, unused */, String_t* ___SKU, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_BillingProxy_CallActivityFunction_m1059(NULL /*static, unused*/, (String_t*) &_stringLiteral337, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Purchase(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Purchase_m1063 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___developerPayload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m1059(NULL /*static, unused*/, (String_t*) &_stringLiteral338, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Subscribe(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Subscribe_m1064 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___developerPayload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m1059(NULL /*static, unused*/, (String_t*) &_stringLiteral339, L_2, /*hidden argument*/NULL);
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
extern "C" void AN_FBProxy__ctor_m1065 (AN_FBProxy_t165 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_FBProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_FBProxy_CallActivityFunction_m1066 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral340, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_FBProxy::SendTrunRequest(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_FBProxy_SendTrunRequest_m1067 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___messgae, String_t* ___data, String_t* ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___title;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___messgae;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___data;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___to;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_FBProxy_CallActivityFunction_m1066(NULL /*static, unused*/, (String_t*) &_stringLiteral341, L_6, /*hidden argument*/NULL);
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
extern "C" void AN_GMSGeneralProxy__ctor_m1068 (AN_GMSGeneralProxy_t166 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGeneralProxy_CallActivityFunction_m1069 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral342, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadGoogleAccountNames()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadGoogleAccountNames_m1070 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral343, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::clearDefaultAccount()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_clearDefaultAccount_m1071 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral344, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceInit(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceInit_m1072 (Object_t * __this /* static, unused */, String_t* ___scopes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___scopes;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral345, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::setConnectionParams(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_setConnectionParams_m1073 (Object_t * __this /* static, unused */, bool ___showPopup, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Boolean_ToString_m3525((&___showPopup), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral346, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceConnect()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m1074 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral347, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceConnect(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m1075 (Object_t * __this /* static, unused */, String_t* ___accountName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___accountName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral347, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadToken(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadToken_m1076 (Object_t * __this /* static, unused */, String_t* ___accountName, String_t* ___scope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___accountName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___scope;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral348, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadToken()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadToken_m1077 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral348, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::invalidateToken(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_invalidateToken_m1078 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___token;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral349, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceDisconnect()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceDisconnect_m1079 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral350, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showAchievementsUI()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showAchievementsUI_m1080 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral351, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoardsUI()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoardsUI_m1081 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral352, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadConnectedPlayers()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadConnectedPlayers_m1082 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral353, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoard(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoard_m1083 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral354, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoardById(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoardById_m1084 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral355, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::submitScore(System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_submitScore_m1085 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, int64_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___leaderboardName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int64_ToString_m3526((&___score), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral356, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::submitScoreById(System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_submitScoreById_m1086 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int64_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int64_ToString_m3526((&___score), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral357, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadLeaderBoards()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadLeaderBoards_m1087 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral358, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::UpdatePlayerScore(System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_UpdatePlayerScore_m1088 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral359, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadPlayerCenteredScores(System.String,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadPlayerCenteredScores_m1089 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m399((&___maxResults), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral360, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadTopScores(System.String,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadTopScores_m1090 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m399((&___maxResults), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral361, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::reportAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_reportAchievement_m1091 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral362, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::reportAchievementById(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_reportAchievementById_m1092 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral363, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::revealAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_revealAchievement_m1093 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral364, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::revealAchievementById(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_revealAchievementById_m1094 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral365, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::incrementAchievement(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_incrementAchievement_m1095 (Object_t * __this /* static, unused */, String_t* ___achievementName, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral366, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::incrementAchievementById(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_incrementAchievementById_m1096 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral367, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::setStepsImmediate(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_setStepsImmediate_m1097 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral368, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadAchievements()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadAchievements_m1098 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral369, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::resetAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_resetAchievement_m1099 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral370, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResetAllAchievements()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResetAllAchievements_m1100 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral371, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::resetLeaderBoard(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_resetLeaderBoard_m1101 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral372, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::OnApplicationPause(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_OnApplicationPause_m1102 (Object_t * __this /* static, unused */, bool ___isPaused, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		bool L_1 = ___isPaused;
		bool L_2 = L_1;
		Object_t * L_3 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral373, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ShowSavedGamesUI_Bridge(System.String,System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ShowSavedGamesUI_Bridge_m1103 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___maxNumberOfSavedGamesToShow, bool ___allowAddButton, bool ___allowDelete, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___title;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		int32_t L_3 = ___maxNumberOfSavedGamesToShow;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_2;
		bool L_7 = ___allowAddButton;
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t626* L_10 = L_6;
		bool L_11 = ___allowDelete;
		bool L_12 = L_11;
		Object_t * L_13 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_13;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral374, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::CreateNewSpanshot_Bridge(System.String,System.String,System.String,System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_CreateNewSpanshot_Bridge_m1104 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___ImageData, String_t* ___Data, int64_t ___PlayedTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___description;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___ImageData;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___Data;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		int64_t L_9 = ___PlayedTime;
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral375, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResolveSnapshotsConflict_Bridge(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResolveSnapshotsConflict_Bridge_m1105 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___index;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral376, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::LoadSpanshots_Bridge()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_LoadSpanshots_Bridge_m1106 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral377, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::OpenSpanshotByName_Bridge(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_OpenSpanshotByName_Bridge_m1107 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral378, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::DeleteSpanshotByName_Bridge(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_DeleteSpanshotByName_Bridge_m1108 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral379, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ListStates()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ListStates_m1109 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral380, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::UpdateState(System.Int32,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_UpdateState_m1110 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m399((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___data;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral381, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResolveState(System.Int32,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResolveState_m1111 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___resolvedData, String_t* ___resolvedVersion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m399((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___resolvedData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___resolvedVersion;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral382, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::DeleteState(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_DeleteState_m1112 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral383, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::LoadState(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_LoadState_m1113 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m1069(NULL /*static, unused*/, (String_t*) &_stringLiteral384, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_GMSGiftsProxy__ctor_m1114 (AN_GMSGiftsProxy_t167 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGiftsProxy_CallActivityFunction_m1115 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral342, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::sendGiftRequest(System.Int32,System.String,System.Int32,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_sendGiftRequest_m1116 (Object_t * __this /* static, unused */, int32_t ___type, String_t* ___playload, int32_t ___requestLifetimeDays, String_t* ___icon, String_t* ___description, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = Int32_ToString_m399((&___type), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___playload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___requestLifetimeDays), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___icon;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		String_t* L_9 = ___description;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_GMSGiftsProxy_CallActivityFunction_m1115(NULL /*static, unused*/, (String_t*) &_stringLiteral385, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::showRequestAccepDialog()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_showRequestAccepDialog_m1117 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m1115(NULL /*static, unused*/, (String_t*) &_stringLiteral386, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::acceptRequests(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_acceptRequests_m1118 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGiftsProxy_CallActivityFunction_m1115(NULL /*static, unused*/, (String_t*) &_stringLiteral387, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::dismissRequest(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_dismissRequest_m1119 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGiftsProxy_CallActivityFunction_m1115(NULL /*static, unused*/, (String_t*) &_stringLiteral388, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::leaveRoom()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_leaveRoom_m1120 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m1115(NULL /*static, unused*/, (String_t*) &_stringLiteral389, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::showInvitationBox()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_showInvitationBox_m1121 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m1115(NULL /*static, unused*/, (String_t*) &_stringLiteral390, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_GMSInvitationProxy__ctor_m1122 (AN_GMSInvitationProxy_t168 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSInvitationProxy_CallActivityFunction_m1123 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral391, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::registerInvitationListener()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSInvitationProxy_registerInvitationListener_m1124 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSInvitationProxy_CallActivityFunction_m1123(NULL /*static, unused*/, (String_t*) &_stringLiteral392, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::unregisterInvitationListener()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSInvitationProxy_unregisterInvitationListener_m1125 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSInvitationProxy_CallActivityFunction_m1123(NULL /*static, unused*/, (String_t*) &_stringLiteral393, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_GMSQuestsEventsProxy__ctor_m1126 (AN_GMSQuestsEventsProxy_t169 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSQuestsEventsProxy_CallActivityFunction_m1127 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral342, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::sumbitEvent(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_sumbitEvent_m1128 (Object_t * __this /* static, unused */, String_t* ___eventId, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___eventId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___count), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m1127(NULL /*static, unused*/, (String_t*) &_stringLiteral394, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::loadEvents()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_loadEvents_m1129 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSQuestsEventsProxy_CallActivityFunction_m1127(NULL /*static, unused*/, (String_t*) &_stringLiteral395, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::showSelectedQuests(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_showSelectedQuests_m1130 (Object_t * __this /* static, unused */, String_t* ___questSelectors, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___questSelectors;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m1127(NULL /*static, unused*/, (String_t*) &_stringLiteral396, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::acceptQuest(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_acceptQuest_m1131 (Object_t * __this /* static, unused */, String_t* ___questId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___questId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m1127(NULL /*static, unused*/, (String_t*) &_stringLiteral397, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::loadQuests(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_loadQuests_m1132 (Object_t * __this /* static, unused */, String_t* ___questSelectors, int32_t ___sortOrder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___questSelectors;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___sortOrder), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m1127(NULL /*static, unused*/, (String_t*) &_stringLiteral398, L_2, /*hidden argument*/NULL);
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
extern "C" void AN_GMSRTMProxy__ctor_m1133 (AN_GMSRTMProxy_t170 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSRTMProxy_CallActivityFunction_m1134 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral342, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.Int32,System.Int32,System.String[])
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m1135 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t75* ___pIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_4;
		StringU5BU5D_t75* L_9 = ___pIds;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_9;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral399, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.String[])
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m1136 (Object_t * __this /* static, unused */, StringU5BU5D_t75* ___pIds, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = ___pIds;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral399, (ObjectU5BU5D_t626*)(ObjectU5BU5D_t626*)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::sendDataToAll(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_sendDataToAll_m1137 (Object_t * __this /* static, unused */, String_t* ___data, int32_t ___sendType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___sendType), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral400, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::sendDataToPlayers(System.String,System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_sendDataToPlayers_m1138 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___players, int32_t ___sendType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___players;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___sendType), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral400, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::ShowWaitingRoomIntent()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_ShowWaitingRoomIntent_m1139 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral401, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::InvitePlayers(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_InvitePlayers_m1140 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m399((&___minPlayers), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___maxPlayers), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral402, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_SetVariant(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_SetVariant_m1141 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral403, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_SetExclusiveBitMask(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_SetExclusiveBitMask_m1142 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral404, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_AcceptInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_AcceptInvitation_m1143 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral405, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_DeclineInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_DeclineInvitation_m1144 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral406, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_DismissInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_DismissInvitation_m1145 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral407, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_AcceptInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_AcceptInvitation_m1146 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral408, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_DeclineInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_DeclineInvitation_m1147 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral409, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_DismissInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_DismissInvitation_m1148 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral410, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_CreateMatch(System.Int32,System.Int32,System.String[])
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_CreateMatch_m1149 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t75* ___playersIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_4;
		StringU5BU5D_t75* L_9 = ___playersIds;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_9;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral411, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::CancelMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_CancelMatch_m1150 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral412, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::DismissMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_DismissMatch_m1151 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral413, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_FinishMatch(System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_FinishMatch_m1152 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, StringU5BU5D_t75* ___pIds, Int32U5BU5D_t539* ___results, Int32U5BU5D_t539* ___placing, Int32U5BU5D_t539* ___versions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___matchData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		StringU5BU5D_t75* L_5 = ___pIds;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		Int32U5BU5D_t539* L_7 = ___results;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		Int32U5BU5D_t539* L_9 = ___placing;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t626* L_10 = L_8;
		Int32U5BU5D_t539* L_11 = ___versions;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral414, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LeaveMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatch_m1153 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral415, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LeaveMatchDuringTurn(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatchDuringTurn_m1154 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___pendingParticipantId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___pendingParticipantId;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral416, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadMatchInfo(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchInfo_m1155 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral417, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadMatchesInfo(System.Int32,System.Int32[])
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchesInfo_m1156 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, Int32U5BU5D_t539* ___matchTurnStatuses, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		int32_t L_1 = ___invitationSortOrder;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_0;
		Int32U5BU5D_t539* L_5 = ___matchTurnStatuses;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral418, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadAllMatchesInfo(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadAllMatchesInfo_m1157 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___invitationSortOrder;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral419, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_Rematch(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_Rematch_m1158 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral420, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_RegisterMatchUpdateListener()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_RegisterMatchUpdateListener_m1159 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral421, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_UnregisterMatchUpdateListener()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_UnregisterMatchUpdateListener_m1160 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral422, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_TakeTrun(System.String,System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_TakeTrun_m1161 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, String_t* ___pendingParticipantId, StringU5BU5D_t75* ___pIds, Int32U5BU5D_t539* ___results, Int32U5BU5D_t539* ___placing, Int32U5BU5D_t539* ___versions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___matchData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___pendingParticipantId;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		StringU5BU5D_t75* L_7 = ___pIds;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		Int32U5BU5D_t539* L_9 = ___results;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t626* L_10 = L_8;
		Int32U5BU5D_t539* L_11 = ___placing;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		ObjectU5BU5D_t626* L_12 = L_10;
		Int32U5BU5D_t539* L_13 = ___versions;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 6)) = (Object_t *)L_13;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral423, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::StartSelectOpponentsView(System.Int32,System.Int32,System.Boolean)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_StartSelectOpponentsView_m1162 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, bool ___allowAutomatch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_4;
		bool L_9 = ___allowAutomatch;
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral424, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_ShowInbox()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_ShowInbox_m1163 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral425, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_SetVariant(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_SetVariant_m1164 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral426, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_SetExclusiveBitMask(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_SetExclusiveBitMask_m1165 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m1134(NULL /*static, unused*/, (String_t*) &_stringLiteral427, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_GoogleAnalyticsProxy__ctor_m1166 (AN_GoogleAnalyticsProxy_t171 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAnalyticsProxy_CallActivityFunction_m1167 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral428, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::StartAnalyticsTracking()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_StartAnalyticsTracking_m1168 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral429, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetTrackerID(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetTrackerID_m1169 (Object_t * __this /* static, unused */, String_t* ___trackingID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___trackingID;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral430, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendView()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendView_m1170 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral431, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendView(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendView_m1171 (Object_t * __this /* static, unused */, String_t* ___appScreen, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___appScreen;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral431, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m1172 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___action;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___label;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral432, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m1173 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, String_t* ___key, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___action;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___label;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		String_t* L_9 = ___key;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t626* L_10 = L_8;
		String_t* L_11 = ___val;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral432, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendTiming(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendTiming_m1174 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___intervalInMilliseconds, String_t* ___name, String_t* ___label, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___intervalInMilliseconds;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___name;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___label;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral433, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CreateTransaction(System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_CreateTransaction_m1175 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___affiliation, String_t* ___revenue, String_t* ___tax, String_t* ___shipping, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___transactionId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___affiliation;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___revenue;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___tax;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		String_t* L_9 = ___shipping;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t626* L_10 = L_8;
		String_t* L_11 = ___currencyCode;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral434, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CreateItem(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_CreateItem_m1176 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___name, String_t* ___sku, String_t* ___category, String_t* ___price, String_t* ___quantity, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = ___transactionId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___sku;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___category;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		String_t* L_9 = ___price;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t626* L_10 = L_8;
		String_t* L_11 = ___quantity;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		ObjectU5BU5D_t626* L_12 = L_10;
		String_t* L_13 = ___currencyCode;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 6)) = (Object_t *)L_13;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral435, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetKey(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetKey_m1177 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral436, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::ClearKey(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_ClearKey_m1178 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral437, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetLogLevel(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetLogLevel_m1179 (Object_t * __this /* static, unused */, int32_t ___lvl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m399((&___lvl), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral438, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetDryRun(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetDryRun_m1180 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___mode;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral439, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::EnableAdvertisingIdCollection(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_EnableAdvertisingIdCollection_m1181 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___mode;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m1167(NULL /*static, unused*/, (String_t*) &_stringLiteral440, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_GooglePlayUtilsProxy__ctor_m1182 (AN_GooglePlayUtilsProxy_t172 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GooglePlayUtilsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GooglePlayUtilsProxy_CallActivityFunction_m1183 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral441, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GooglePlayUtilsProxy::GetAdvertisingId()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_GooglePlayUtilsProxy_GetAdvertisingId_m1184 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GooglePlayUtilsProxy_CallActivityFunction_m1183(NULL /*static, unused*/, (String_t*) &_stringLiteral442, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_ImmersiveModeProxy__ctor_m1185 (AN_ImmersiveModeProxy_t173 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ImmersiveModeProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_ImmersiveModeProxy_CallActivityFunction_m1186 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral443, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ImmersiveModeProxy::enableImmersiveMode()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_ImmersiveModeProxy_enableImmersiveMode_m1187 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_ImmersiveModeProxy_CallActivityFunction_m1186(NULL /*static, unused*/, (String_t*) &_stringLiteral444, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_LicenseManagerProxy__ctor_m1188 (AN_LicenseManagerProxy_t174 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_LicenseManagerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_LicenseManagerProxy_CallActivityFunction_m1189 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral445, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_LicenseManagerProxy::StartLicenseRequest(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_LicenseManagerProxy_StartLicenseRequest_m1190 (Object_t * __this /* static, unused */, String_t* ___base64PublicKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___base64PublicKey;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_LicenseManagerProxy_CallActivityFunction_m1189(NULL /*static, unused*/, (String_t*) &_stringLiteral446, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_PlusButtonProxy__ctor_m1191 (AN_PlusButtonProxy_t175 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_PlusButtonProxy_CallActivityFunction_m1192 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral447, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::createPlusButton(System.Int32,System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_createPlusButton_m1193 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___url, int32_t ___size, int32_t ___annotation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_0;
		String_t* L_5 = ___url;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		int32_t L_7 = ___size;
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t626* L_10 = L_6;
		int32_t L_11 = ___annotation;
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_13;
		AN_PlusButtonProxy_CallActivityFunction_m1192(NULL /*static, unused*/, (String_t*) &_stringLiteral448, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::setGravity(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_setGravity_m1194 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		int32_t L_1 = ___gravity;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_0;
		int32_t L_5 = ___id;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		AN_PlusButtonProxy_CallActivityFunction_m1192(NULL /*static, unused*/, (String_t*) &_stringLiteral449, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::setPosition(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_setPosition_m1195 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___x;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_0;
		int32_t L_5 = ___y;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_4;
		int32_t L_9 = ___id;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		AN_PlusButtonProxy_CallActivityFunction_m1192(NULL /*static, unused*/, (String_t*) &_stringLiteral450, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::show(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_show_m1196 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m1192(NULL /*static, unused*/, (String_t*) &_stringLiteral451, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::hide(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_hide_m1197 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m1192(NULL /*static, unused*/, (String_t*) &_stringLiteral452, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::refresh(System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_refresh_m1198 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m1192(NULL /*static, unused*/, (String_t*) &_stringLiteral453, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_SocialSharingProxy__ctor_m1199 (AN_SocialSharingProxy_t176 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_SocialSharingProxy_CallActivityFunction_m1200 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral454, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartGooglePlusShareIntent(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartGooglePlusShareIntent_m1201 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___media, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___text;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___media;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_SocialSharingProxy_CallActivityFunction_m1200(NULL /*static, unused*/, (String_t*) &_stringLiteral455, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartShareIntent_m1202 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___filters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___filters;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_SocialSharingProxy_CallActivityFunction_m1200(NULL /*static, unused*/, (String_t*) &_stringLiteral456, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartShareIntent_m1203 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___media, String_t* ___filters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___media;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		String_t* L_9 = ___filters;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_SocialSharingProxy_CallActivityFunction_m1200(NULL /*static, unused*/, (String_t*) &_stringLiteral457, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::SendMailWithImage(System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_SendMailWithImage_m1204 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, String_t* ___media, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___email;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t626* L_8 = L_6;
		String_t* L_9 = ___media;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_SocialSharingProxy_CallActivityFunction_m1200(NULL /*static, unused*/, (String_t*) &_stringLiteral458, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::SendMail(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_SendMail_m1205 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t626* L_6 = L_4;
		String_t* L_7 = ___email;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_SocialSharingProxy_CallActivityFunction_m1200(NULL /*static, unused*/, (String_t*) &_stringLiteral459, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::InstagramPostImage(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_InstagramPostImage_m1206 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___cpation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___cpation;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_SocialSharingProxy_CallActivityFunction_m1200(NULL /*static, unused*/, (String_t*) &_stringLiteral460, L_2, /*hidden argument*/NULL);
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
extern "C" void AN_TVControllerProxy__ctor_m1207 (AN_TVControllerProxy_t177 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_TVControllerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_TVControllerProxy_CallActivityFunction_m1208 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral461, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_TVControllerProxy::AN_CheckForATVDevice()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AN_TVControllerProxy_AN_CheckForATVDevice_m1209 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_TVControllerProxy_CallActivityFunction_m1208(NULL /*static, unused*/, (String_t*) &_stringLiteral462, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AndroidNative__ctor_m1210 (AndroidNative_t178 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterInit(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterInit_m1211 (Object_t * __this /* static, unused */, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___consumer_key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___consumer_secret;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral463, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::AuthificateUser()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_AuthificateUser_m1212 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral464, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadUserData()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadUserData_m1213 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral465, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterPost(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterPost_m1214 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___status;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral466, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterPostWithImage(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterPostWithImage_m1215 (Object_t * __this /* static, unused */, String_t* ___status, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___status;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___data;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral467, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LogoutFromTwitter()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LogoutFromTwitter_m1216 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral468, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::InitCameraAPI(System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_InitCameraAPI_m1217 (Object_t * __this /* static, unused */, String_t* ___folderName, int32_t ___maxSize, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___folderName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m399((&___maxSize), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t626* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m399((&___mode), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral469, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::SaveToGalalry(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_SaveToGalalry_m1218 (Object_t * __this /* static, unused */, String_t* ___ImageData, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___ImageData;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t626* L_2 = L_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral470, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetImageFromGallery()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetImageFromGallery_m1219 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral471, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetImageFromCamera(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetImageFromCamera_m1220 (Object_t * __this /* static, unused */, bool ___bSaveToGallery, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Boolean_ToString_m3525((&___bSaveToGallery), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral472, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::isPackageInstalled(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_isPackageInstalled_m1221 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___packagename;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral473, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::runPackage(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_runPackage_m1222 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___packagename;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral474, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadAndroidId()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadAndroidId_m1223 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral475, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadPackagesList()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadPackagesList_m1224 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m1235(NULL /*static, unused*/, (String_t*) &_stringLiteral476, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadNetworkInfo()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadNetworkInfo_m1225 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m1235(NULL /*static, unused*/, (String_t*) &_stringLiteral477, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::OpenSettingsPage(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_OpenSettingsPage_m1226 (Object_t * __this /* static, unused */, String_t* ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___action;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallUtility_m1235(NULL /*static, unused*/, (String_t*) &_stringLiteral478, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadContacts()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadContacts_m1227 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral479, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadPackageInfo()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadPackageInfo_m1228 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral480, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetInternalStoragePath()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetInternalStoragePath_m1229 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m1235(NULL /*static, unused*/, (String_t*) &_stringLiteral481, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetExternalStoragePath()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetExternalStoragePath_m1230 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m1235(NULL /*static, unused*/, (String_t*) &_stringLiteral482, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadLocaleInfo()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadLocaleInfo_m1231 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m1235(NULL /*static, unused*/, (String_t*) &_stringLiteral483, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::StartLockTask()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_StartLockTask_m1232 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral484, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::StopLockTask()
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_StopLockTask_m1233 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral485, ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::OpenAppInStore(System.String)
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_OpenAppInStore_m1234 (Object_t * __this /* static, unused */, String_t* ___appPackageName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t626* L_0 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___appPackageName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m1236(NULL /*static, unused*/, (String_t*) &_stringLiteral486, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::CallUtility(System.String,System.Object[])
extern "C" void AndroidNative_CallUtility_m1235 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral487, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::CallAndroidNativeBridge(System.String,System.Object[])
extern "C" void AndroidNative_CallAndroidNativeBridge_m1236 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t626* L_1 = ___args;
		AN_ProxyPool_CallStatic_m1057(NULL /*static, unused*/, (String_t*) &_stringLiteral488, L_0, L_1, /*hidden argument*/NULL);
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
struct ScriptableObject_t148;
struct SocialPlatfromSettings_t179;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<SocialPlatfromSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<SocialPlatfromSettings>()
#define ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t179_m3527(__this /* static, unused */, method) (( SocialPlatfromSettings_t179 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3484_gshared)(__this /* static, unused */, method)


// System.Void SocialPlatfromSettings::.ctor()
extern TypeInfo* List_1_t115_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3414_MethodInfo_var;
extern "C" void SocialPlatfromSettings__ctor_m1237 (SocialPlatfromSettings_t179 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1__ctor_m3414_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___showPermitions_7 = 1;
		__this->___ShowActions_8 = 1;
		__this->___ShowAPIS_9 = 1;
		List_1_t115 * L_0 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3414(L_0, /*hidden argument*/List_1__ctor_m3414_MethodInfo_var);
		__this->___fb_scopes_list_10 = L_0;
		__this->___TWITTER_CONSUMER_KEY_11 = (String_t*) &_stringLiteral490;
		__this->___TWITTER_CONSUMER_SECRET_12 = (String_t*) &_stringLiteral491;
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
		ScriptableObject__ctor_m3486(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialPlatfromSettings::.cctor()
extern "C" void SocialPlatfromSettings__cctor_m1238 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// SocialPlatfromSettings SocialPlatfromSettings::get_Instance()
extern TypeInfo* SocialPlatfromSettings_t179_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t179_m3527_MethodInfo_var;
extern "C" SocialPlatfromSettings_t179 * SocialPlatfromSettings_get_Instance_m1239 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialPlatfromSettings_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t179_m3527_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483832);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t179_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t179 * L_0 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		bool L_1 = Object_op_Equality_m3487(NULL /*static, unused*/, L_0, (Object_t644 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t644 * L_2 = Resources_Load_m3488(NULL /*static, unused*/, (String_t*) &_stringLiteral489, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t179_il2cpp_TypeInfo_var);
		((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21 = ((SocialPlatfromSettings_t179 *)IsInst(L_2, SocialPlatfromSettings_t179_il2cpp_TypeInfo_var));
		SocialPlatfromSettings_t179 * L_3 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		bool L_4 = Object_op_Equality_m3487(NULL /*static, unused*/, L_3, (Object_t644 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		SocialPlatfromSettings_t179 * L_5 = ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t179_m3527(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t179_m3527_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t179_il2cpp_TypeInfo_var);
		((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21 = L_5;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t179_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t179 * L_6 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		return L_6;
	}
}
// System.String SocialPlatfromSettings::get_fb_scopes()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t677_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3528_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3529_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3530_MethodInfo_var;
extern "C" String_t* SocialPlatfromSettings_get_fb_scopes_m1240 (SocialPlatfromSettings_t179 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3528_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483833);
		Enumerator_get_Current_m3529_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483834);
		Enumerator_MoveNext_m3530_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483835);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Enumerator_t677  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		List_1_t115 * L_1 = (__this->___fb_scopes_list_10);
		NullCheck(L_1);
		Enumerator_t677  L_2 = List_1_GetEnumerator_m3528(L_1, /*hidden argument*/List_1_GetEnumerator_m3528_MethodInfo_var);
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
			String_t* L_3 = Enumerator_get_Current_m3529((&V_2), /*hidden argument*/Enumerator_get_Current_m3529_MethodInfo_var);
			V_1 = L_3;
			String_t* L_4 = V_0;
			String_t* L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, L_4, L_5, (String_t*) &_stringLiteral303, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_002c:
		{
			bool L_7 = Enumerator_MoveNext_m3530((&V_2), /*hidden argument*/Enumerator_MoveNext_m3530_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_t677  L_8 = V_2;
		Enumerator_t677  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t677_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_10);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0049:
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m410(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_13 = V_0;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m410(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = String_Substring_m418(L_13, 0, ((int32_t)((int32_t)L_15-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_0065:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.Void SocialPlatfromSettings::AddDefaultScopes()
extern TypeInfo* SocialPlatfromSettings_t179_il2cpp_TypeInfo_var;
extern "C" void SocialPlatfromSettings_AddDefaultScopes_m1241 (SocialPlatfromSettings_t179 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialPlatfromSettings_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t179_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t179 * L_0 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_0);
		List_1_t115 * L_1 = (L_0->___fb_scopes_list_10);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_1, (String_t*) &_stringLiteral492);
		SocialPlatfromSettings_t179 * L_2 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_2);
		List_1_t115 * L_3 = (L_2->___fb_scopes_list_10);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, (String_t*) &_stringLiteral493);
		SocialPlatfromSettings_t179 * L_4 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_4);
		List_1_t115 * L_5 = (L_4->___fb_scopes_list_10);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_5, (String_t*) &_stringLiteral494);
		SocialPlatfromSettings_t179 * L_6 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_6);
		List_1_t115 * L_7 = (L_6->___fb_scopes_list_10);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, (String_t*) &_stringLiteral148);
		SocialPlatfromSettings_t179 * L_8 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_8);
		List_1_t115 * L_9 = (L_8->___fb_scopes_list_10);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_9, (String_t*) &_stringLiteral495);
		SocialPlatfromSettings_t179 * L_10 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_10);
		List_1_t115 * L_11 = (L_10->___fb_scopes_list_10);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_11, (String_t*) &_stringLiteral496);
		SocialPlatfromSettings_t179 * L_12 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_12);
		List_1_t115 * L_13 = (L_12->___fb_scopes_list_10);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_13, (String_t*) &_stringLiteral497);
		SocialPlatfromSettings_t179 * L_14 = ((SocialPlatfromSettings_t179_StaticFields*)SocialPlatfromSettings_t179_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_14);
		List_1_t115 * L_15 = (L_14->___fb_scopes_list_10);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_15, (String_t*) &_stringLiteral498);
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
extern "C" void AndroidGravity__ctor_m1242 (AndroidGravity_t181 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void AndroidLogLevel__ctor_m1243 (AndroidLogLevel_t182 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void GoogleGravity__ctor_m1244 (GoogleGravity_t186 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
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
extern "C" void GP_MatchesSortOrder__ctor_m1245 (GP_MatchesSortOrder_t201 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_MatchesSortOrder::Start()
extern "C" void GP_MatchesSortOrder_Start_m1246 (GP_MatchesSortOrder_t201 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GP_MatchesSortOrder::Update()
extern "C" void GP_MatchesSortOrder_Update_m1247 (GP_MatchesSortOrder_t201 * __this, const MethodInfo* method)
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
extern "C" void FacebookEvents__ctor_m1248 (FacebookEvents_t212 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void GoogleMobileAdEvents__ctor_m1249 (GoogleMobileAdEvents_t213 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void TwitterEvents__ctor_m1250 (TwitterEvents_t214 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void AndroidADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1285_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1286_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1287_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnClosedActionU3Em__25_m1288_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1289_MethodInfo_var;
extern "C" void AndroidADBanner__ctor_m1251 (AndroidADBanner_t215 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1285_MethodInfo_var = il2cpp_codegen_method_info_from_index(188);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1286_MethodInfo_var = il2cpp_codegen_method_info_from_index(189);
		AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1287_MethodInfo_var = il2cpp_codegen_method_info_from_index(190);
		AndroidADBanner_U3C_OnClosedActionU3Em__25_m1288_MethodInfo_var = il2cpp_codegen_method_info_from_index(191);
		AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1289_MethodInfo_var = il2cpp_codegen_method_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t215 * G_B2_0 = {0};
	AndroidADBanner_t215 * G_B1_0 = {0};
	AndroidADBanner_t215 * G_B4_0 = {0};
	AndroidADBanner_t215 * G_B3_0 = {0};
	AndroidADBanner_t215 * G_B6_0 = {0};
	AndroidADBanner_t215 * G_B5_0 = {0};
	AndroidADBanner_t215 * G_B8_0 = {0};
	AndroidADBanner_t215 * G_B7_0 = {0};
	AndroidADBanner_t215 * G_B10_0 = {0};
	AndroidADBanner_t215 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_9 = 1;
		Action_1_t149 * L_0 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1285_MethodInfo_var };
		Action_1_t149 * L_2 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t149 * L_3 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t149 * L_4 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1286_MethodInfo_var };
		Action_1_t149 * L_6 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t149 * L_7 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t149 * L_8 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1287_MethodInfo_var };
		Action_1_t149 * L_10 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t149 * L_11 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t149 * L_12 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)AndroidADBanner_U3C_OnClosedActionU3Em__25_m1288_MethodInfo_var };
		Action_1_t149 * L_14 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t149 * L_15 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t149 * L_16 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1289_MethodInfo_var };
		Action_1_t149 * L_18 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t149 * L_19 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m652(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___anchor;
		__this->____anchor_4 = L_22;
		int32_t L_23 = AndroidADBanner_get_gravity_m1269(__this, /*hidden argument*/NULL);
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		AN_GoogleAdProxy_CreateBannerAd_m1038(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern TypeInfo* AndroidADBanner_t215_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t149_il2cpp_TypeInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1285_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3472_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1286_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1287_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnClosedActionU3Em__25_m1288_MethodInfo_var;
extern const MethodInfo* AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1289_MethodInfo_var;
extern "C" void AndroidADBanner__ctor_m1252 (AndroidADBanner_t215 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AndroidADBanner_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		Action_1_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1285_MethodInfo_var = il2cpp_codegen_method_info_from_index(188);
		Action_1__ctor_m3472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1286_MethodInfo_var = il2cpp_codegen_method_info_from_index(189);
		AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1287_MethodInfo_var = il2cpp_codegen_method_info_from_index(190);
		AndroidADBanner_U3C_OnClosedActionU3Em__25_m1288_MethodInfo_var = il2cpp_codegen_method_info_from_index(191);
		AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1289_MethodInfo_var = il2cpp_codegen_method_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	AndroidADBanner_t215 * G_B2_0 = {0};
	AndroidADBanner_t215 * G_B1_0 = {0};
	AndroidADBanner_t215 * G_B4_0 = {0};
	AndroidADBanner_t215 * G_B3_0 = {0};
	AndroidADBanner_t215 * G_B6_0 = {0};
	AndroidADBanner_t215 * G_B5_0 = {0};
	AndroidADBanner_t215 * G_B8_0 = {0};
	AndroidADBanner_t215 * G_B7_0 = {0};
	AndroidADBanner_t215 * G_B10_0 = {0};
	AndroidADBanner_t215 * G_B9_0 = {0};
	{
		__this->___firstLoad_7 = 1;
		__this->____ShowOnLoad_9 = 1;
		Action_1_t149 * L_0 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		IntPtr_t L_1 = { (void*)AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1285_MethodInfo_var };
		Action_1_t149 * L_2 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0027:
	{
		Action_1_t149 * L_3 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheF_17;
		NullCheck(G_B2_0);
		G_B2_0->____OnLoadedAction_12 = L_3;
		Action_1_t149 * L_4 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		IntPtr_t L_5 = { (void*)AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1286_MethodInfo_var };
		Action_1_t149 * L_6 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_6;
		G_B4_0 = G_B3_0;
	}

IL_004a:
	{
		Action_1_t149 * L_7 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B4_0);
		G_B4_0->____OnFailedLoadingAction_13 = L_7;
		Action_1_t149 * L_8 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_006d;
		}
	}
	{
		IntPtr_t L_9 = { (void*)AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1287_MethodInfo_var };
		Action_1_t149 * L_10 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19 = L_10;
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		Action_1_t149 * L_11 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache11_19;
		NullCheck(G_B6_0);
		G_B6_0->____OnOpenedAction_14 = L_11;
		Action_1_t149 * L_12 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		G_B7_0 = __this;
		if (L_12)
		{
			G_B8_0 = __this;
			goto IL_0090;
		}
	}
	{
		IntPtr_t L_13 = { (void*)AndroidADBanner_U3C_OnClosedActionU3Em__25_m1288_MethodInfo_var };
		Action_1_t149 * L_14 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_14, NULL, L_13, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20 = L_14;
		G_B8_0 = G_B7_0;
	}

IL_0090:
	{
		Action_1_t149 * L_15 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache12_20;
		NullCheck(G_B8_0);
		G_B8_0->____OnClosedAction_15 = L_15;
		Action_1_t149 * L_16 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		G_B9_0 = __this;
		if (L_16)
		{
			G_B10_0 = __this;
			goto IL_00b3;
		}
	}
	{
		IntPtr_t L_17 = { (void*)AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1289_MethodInfo_var };
		Action_1_t149 * L_18 = (Action_1_t149 *)il2cpp_codegen_object_new (Action_1_t149_il2cpp_TypeInfo_var);
		Action_1__ctor_m3472(L_18, NULL, L_17, /*hidden argument*/Action_1__ctor_m3472_MethodInfo_var);
		((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21 = L_18;
		G_B10_0 = G_B9_0;
	}

IL_00b3:
	{
		Action_1_t149 * L_19 = ((AndroidADBanner_t215_StaticFields*)AndroidADBanner_t215_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache13_21;
		NullCheck(G_B10_0);
		G_B10_0->____OnLeftApplicationAction_16 = L_19;
		EventDispatcherBase__ctor_m652(__this, /*hidden argument*/NULL);
		int32_t L_20 = ___id;
		__this->____id_2 = L_20;
		int32_t L_21 = ___size;
		__this->____size_3 = L_21;
		int32_t L_22 = ___x;
		int32_t L_23 = ___y;
		int32_t L_24 = (__this->____size_3);
		int32_t L_25 = (__this->____id_2);
		AN_GoogleAdProxy_CreateBannerAdPos_m1039(NULL /*static, unused*/, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::Hide()
extern "C" void AndroidADBanner_Hide_m1253 (AndroidADBanner_t215 * __this, const MethodInfo* method)
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
		AN_GoogleAdProxy_HideAd_m1042(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::Show()
extern "C" void AndroidADBanner_Show_m1254 (AndroidADBanner_t215 * __this, const MethodInfo* method)
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
		AN_GoogleAdProxy_ShowAd_m1043(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::Refresh()
extern "C" void AndroidADBanner_Refresh_m1255 (AndroidADBanner_t215 * __this, const MethodInfo* method)
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
		AN_GoogleAdProxy_RefreshAd_m1044(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetBannerPosition_m1256 (AndroidADBanner_t215 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = ___y;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, __this);
		AN_GoogleAdProxy_SetBannerPosition_m1041(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void AndroidADBanner_SetBannerPosition_m1257 (AndroidADBanner_t215 * __this, int32_t ___anchor, const MethodInfo* method)
{
	{
		int32_t L_0 = ___anchor;
		__this->____anchor_4 = L_0;
		int32_t L_1 = AndroidADBanner_get_gravity_m1269(__this, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 AndroidADBanner::get_id() */, __this);
		AN_GoogleAdProxy_SetBannerPosition_m1040(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidADBanner::DestroyAfterLoad()
extern "C" void AndroidADBanner_DestroyAfterLoad_m1258 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		__this->___destroyOnLoad_8 = 1;
		VirtActionInvoker1< bool >::Invoke(33 /* System.Void AndroidADBanner::set_ShowOnLoad(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Void AndroidADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetDimentions_m1259 (AndroidADBanner_t215 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
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
extern "C" int32_t AndroidADBanner_get_id_m1260 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_2);
		return L_0;
	}
}
// System.Int32 AndroidADBanner::get_width()
extern "C" int32_t AndroidADBanner_get_width_m1261 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____width_10);
		return L_0;
	}
}
// System.Int32 AndroidADBanner::get_height()
extern "C" int32_t AndroidADBanner_get_height_m1262 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____height_11);
		return L_0;
	}
}
// GADBannerSize AndroidADBanner::get_size()
extern "C" int32_t AndroidADBanner_get_size_m1263 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_3);
		return L_0;
	}
}
// System.Boolean AndroidADBanner::get_IsLoaded()
extern "C" bool AndroidADBanner_get_IsLoaded_m1264 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsLoaded_5);
		return L_0;
	}
}
// System.Boolean AndroidADBanner::get_IsOnScreen()
extern "C" bool AndroidADBanner_get_IsOnScreen_m1265 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____IsOnScreen_6);
		return L_0;
	}
}
// System.Boolean AndroidADBanner::get_ShowOnLoad()
extern "C" bool AndroidADBanner_get_ShowOnLoad_m1266 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____ShowOnLoad_9);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void AndroidADBanner_set_ShowOnLoad_m1267 (AndroidADBanner_t215 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____ShowOnLoad_9 = L_0;
		return;
	}
}
// UnityEngine.TextAnchor AndroidADBanner::get_anchor()
extern "C" int32_t AndroidADBanner_get_anchor_m1268 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____anchor_4);
		return L_0;
	}
}
// System.Int32 AndroidADBanner::get_gravity()
extern "C" int32_t AndroidADBanner_get_gravity_m1269 (AndroidADBanner_t215 * __this, const MethodInfo* method)
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
extern "C" Action_1_t149 * AndroidADBanner_get_OnLoadedAction_m1270 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLoadedAction_12);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLoadedAction_m1271 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnLoadedAction_12 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnFailedLoadingAction_m1272 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnFailedLoadingAction_13);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnFailedLoadingAction_m1273 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnFailedLoadingAction_13 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnOpenedAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnOpenedAction_m1274 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnOpenedAction_14);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnOpenedAction_m1275 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnOpenedAction_14 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnClosedAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnClosedAction_m1276 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnClosedAction_15);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnClosedAction_m1277 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnClosedAction_15 = L_0;
		return;
	}
}
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnLeftApplicationAction_m1278 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLeftApplicationAction_16);
		return L_0;
	}
}
// System.Void AndroidADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLeftApplicationAction_m1279 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = ___value;
		__this->____OnLeftApplicationAction_16 = L_0;
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdLoaded()
extern "C" void AndroidADBanner_OnBannerAdLoaded_m1280 (AndroidADBanner_t215 * __this, const MethodInfo* method)
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
		AN_GoogleAdProxy_DestroyBanner_m1045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
		Action_1_t149 * L_4 = (__this->____OnLoadedAction_12);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_4, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral297);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdFailedToLoad()
extern "C" void AndroidADBanner_OnBannerAdFailedToLoad_m1281 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnFailedLoadingAction_13);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral298);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdOpened()
extern "C" void AndroidADBanner_OnBannerAdOpened_m1282 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnOpenedAction_14);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral299);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdClosed()
extern "C" void AndroidADBanner_OnBannerAdClosed_m1283 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnClosedAction_15);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral300);
		return;
	}
}
// System.Void AndroidADBanner::OnBannerAdLeftApplication()
extern "C" void AndroidADBanner_OnBannerAdLeftApplication_m1284 (AndroidADBanner_t215 * __this, const MethodInfo* method)
{
	{
		Action_1_t149 * L_0 = (__this->____OnLeftApplicationAction_16);
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<GoogleMobileAdBanner>::Invoke(!0) */, L_0, __this);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String) */, __this, (String_t*) &_stringLiteral301);
		return;
	}
}
// System.Void AndroidADBanner::<_OnLoadedAction>m__22(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1285 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnFailedLoadingAction>m__23(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1286 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnOpenedAction>m__24(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1287 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnClosedAction>m__25(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnClosedActionU3Em__25_m1288 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidADBanner::<_OnLeftApplicationAction>m__26(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1289 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method)
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
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void AndroidActivityResult__ctor_m1290 (AndroidActivityResult_t216 * __this, String_t* ___rId, String_t* ___codeString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rId;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____requestId_1 = L_1;
		String_t* L_2 = ___codeString;
		int32_t L_3 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____code_0 = L_3;
		return;
	}
}
// AdroidActivityResultCodes AndroidActivityResult::get_code()
extern "C" int32_t AndroidActivityResult_get_code_m1291 (AndroidActivityResult_t216 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____code_0);
		return L_0;
	}
}
// System.Int32 AndroidActivityResult::get_requestId()
extern "C" int32_t AndroidActivityResult_get_requestId_m1292 (AndroidActivityResult_t216 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____requestId_1);
		return L_0;
	}
}
// System.Boolean AndroidActivityResult::get_IsSucceeded()
extern "C" bool AndroidActivityResult_get_IsSucceeded_m1293 (AndroidActivityResult_t216 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = AndroidActivityResult_get_code_m1291(__this, /*hidden argument*/NULL);
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
extern "C" bool AndroidActivityResult_get_IsFailed_m1294 (AndroidActivityResult_t216 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AndroidActivityResult_get_IsSucceeded_m1293(__this, /*hidden argument*/NULL);
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
extern "C" void AndroidGameActivityResult__ctor_m1295 (AndroidGameActivityResult_t217 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void AsyncTask__ctor_m1296 (AsyncTask_t218 * __this, const MethodInfo* method)
{
	{
		EventDispatcher__ctor_m626(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AsyncTask::Awake()
extern "C" void AsyncTask_Awake_m1297 (AsyncTask_t218 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3462(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GADBannerIdFactory
#include "AssemblyU2DCSharp_GADBannerIdFactory.h"
#ifndef _MSC_VER
#else
#endif



// System.Void GADBannerIdFactory::.ctor()
extern "C" void GADBannerIdFactory__ctor_m1298 (GADBannerIdFactory_t219 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GADBannerIdFactory::.cctor()
extern "C" void GADBannerIdFactory__cctor_m1299 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 GADBannerIdFactory::get_nextId()
extern TypeInfo* GADBannerIdFactory_t219_il2cpp_TypeInfo_var;
extern "C" int32_t GADBannerIdFactory_get_nextId_m1300 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t219_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GADBannerIdFactory_t219_StaticFields*)GADBannerIdFactory_t219_il2cpp_TypeInfo_var->static_fields)->____nextId_0;
		((GADBannerIdFactory_t219_StaticFields*)GADBannerIdFactory_t219_il2cpp_TypeInfo_var->static_fields)->____nextId_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = ((GADBannerIdFactory_t219_StaticFields*)GADBannerIdFactory_t219_il2cpp_TypeInfo_var->static_fields)->____nextId_0;
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
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void GPAchievement__ctor_m1301 (GPAchievement_t220 * __this, String_t* ___aId, String_t* ___aName, String_t* ___aDescr, String_t* ___aCurentSteps, String_t* ___aTotalSteps, String_t* ___aState, String_t* ___aType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___aId;
		__this->____id_0 = L_0;
		String_t* L_1 = ___aName;
		__this->____name_1 = L_1;
		String_t* L_2 = ___aDescr;
		__this->____description_2 = L_2;
		String_t* L_3 = ___aCurentSteps;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____currentSteps_3 = L_4;
		String_t* L_5 = ___aTotalSteps;
		int32_t L_6 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->____totalSteps_4 = L_6;
		String_t* L_7 = ___aType;
		int32_t L_8 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_9 = PlayServiceUtil_GetAchievementTypeById_m1438(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->____type_5 = L_9;
		String_t* L_10 = ___aState;
		int32_t L_11 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_12 = PlayServiceUtil_GetAchievementStateById_m1437(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->____state_6 = L_12;
		return;
	}
}
// System.String GPAchievement::get_id()
extern "C" String_t* GPAchievement_get_id_m1302 (GPAchievement_t220 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GPAchievement::get_name()
extern "C" String_t* GPAchievement_get_name_m1303 (GPAchievement_t220 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_1);
		return L_0;
	}
}
// System.String GPAchievement::get_description()
extern "C" String_t* GPAchievement_get_description_m1304 (GPAchievement_t220 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____description_2);
		return L_0;
	}
}
// System.Int32 GPAchievement::get_currentSteps()
extern "C" int32_t GPAchievement_get_currentSteps_m1305 (GPAchievement_t220 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentSteps_3);
		return L_0;
	}
}
// System.Int32 GPAchievement::get_totalSteps()
extern "C" int32_t GPAchievement_get_totalSteps_m1306 (GPAchievement_t220 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____totalSteps_4);
		return L_0;
	}
}
// GPAchievementType GPAchievement::get_type()
extern "C" int32_t GPAchievement_get_type_m1307 (GPAchievement_t220 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____type_5);
		return L_0;
	}
}
// GPAchievementState GPAchievement::get_state()
extern "C" int32_t GPAchievement_get_state_m1308 (GPAchievement_t220 * __this, const MethodInfo* method)
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
extern "C" void GPGameRequest__ctor_m1309 (GPGameRequest_t221 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern TypeInfo* GPScoreCollection_t222_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3531_MethodInfo_var;
extern "C" void GPLeaderBoard__ctor_m1310 (GPLeaderBoard_t224 * __this, String_t* ___lId, String_t* ___lName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPScoreCollection_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Dictionary_2__ctor_m3531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483841);
		s_Il2CppMethodIntialized = true;
	}
	{
		GPScoreCollection_t222 * L_0 = (GPScoreCollection_t222 *)il2cpp_codegen_object_new (GPScoreCollection_t222_il2cpp_TypeInfo_var);
		GPScoreCollection__ctor_m1320(L_0, /*hidden argument*/NULL);
		__this->___SocsialCollection_2 = L_0;
		GPScoreCollection_t222 * L_1 = (GPScoreCollection_t222 *)il2cpp_codegen_object_new (GPScoreCollection_t222_il2cpp_TypeInfo_var);
		GPScoreCollection__ctor_m1320(L_1, /*hidden argument*/NULL);
		__this->___GlobalCollection_3 = L_1;
		Dictionary_2_t223 * L_2 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3531(L_2, /*hidden argument*/Dictionary_2__ctor_m3531_MethodInfo_var);
		__this->___currentPlayerRank_4 = L_2;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___lId;
		__this->____id_0 = L_3;
		String_t* L_4 = ___lName;
		__this->____name_1 = L_4;
		return;
	}
}
// System.Void GPLeaderBoard::UpdateName(System.String)
extern "C" void GPLeaderBoard_UpdateName_m1311 (GPLeaderBoard_t224 * __this, String_t* ___lName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___lName;
		__this->____name_1 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<GPScore> GPLeaderBoard::GetScoresList(GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* List_1_t627_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3532_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m3533_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m3534_MethodInfo_var;
extern "C" List_1_t627 * GPLeaderBoard_GetScoresList_m1312 (GPLeaderBoard_t224 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		List_1__ctor_m3532_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		Dictionary_2_get_Values_m3533_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483843);
		List_1_AddRange_m3534_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483844);
		s_Il2CppMethodIntialized = true;
	}
	GPScoreCollection_t222 * V_0 = {0};
	Dictionary_2_t225 * V_1 = {0};
	List_1_t627 * V_2 = {0};
	int32_t V_3 = {0};
	int32_t V_4 = {0};
	{
		GPScoreCollection_t222 * L_0 = (__this->___GlobalCollection_3);
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
		GPScoreCollection_t222 * L_4 = (__this->___GlobalCollection_3);
		V_0 = L_4;
		goto IL_0033;
	}

IL_0027:
	{
		GPScoreCollection_t222 * L_5 = (__this->___SocsialCollection_2);
		V_0 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		GPScoreCollection_t222 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_t225 * L_7 = (L_6->___AllTimeScores_0);
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
		GPScoreCollection_t222 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_t225 * L_11 = (L_10->___AllTimeScores_0);
		V_1 = L_11;
		goto IL_0079;
	}

IL_0061:
	{
		GPScoreCollection_t222 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t225 * L_13 = (L_12->___TodayScores_2);
		V_1 = L_13;
		goto IL_0079;
	}

IL_006d:
	{
		GPScoreCollection_t222 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t225 * L_15 = (L_14->___WeekScores_1);
		V_1 = L_15;
		goto IL_0079;
	}

IL_0079:
	{
		List_1_t627 * L_16 = (List_1_t627 *)il2cpp_codegen_object_new (List_1_t627_il2cpp_TypeInfo_var);
		List_1__ctor_m3532(L_16, /*hidden argument*/List_1__ctor_m3532_MethodInfo_var);
		V_2 = L_16;
		List_1_t627 * L_17 = V_2;
		Dictionary_2_t225 * L_18 = V_1;
		NullCheck(L_18);
		ValueCollection_t678 * L_19 = Dictionary_2_get_Values_m3533(L_18, /*hidden argument*/Dictionary_2_get_Values_m3533_MethodInfo_var);
		NullCheck(L_17);
		List_1_AddRange_m3534(L_17, L_19, /*hidden argument*/List_1_AddRange_m3534_MethodInfo_var);
		List_1_t627 * L_20 = V_2;
		return L_20;
	}
}
// GPScore GPLeaderBoard::GetScoreByPlayerId(System.String,GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* Enumerator_t679_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3535_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3536_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3537_MethodInfo_var;
extern "C" GPScore_t343 * GPLeaderBoard_GetScoreByPlayerId_m1313 (GPLeaderBoard_t224 * __this, String_t* ___playerId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483845);
		Enumerator_get_Current_m3536_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483846);
		Enumerator_MoveNext_m3537_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483847);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t627 * V_0 = {0};
	GPScore_t343 * V_1 = {0};
	Enumerator_t679  V_2 = {0};
	GPScore_t343 * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = ___collection;
		List_1_t627 * L_2 = GPLeaderBoard_GetScoresList_m1312(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t627 * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t679  L_4 = List_1_GetEnumerator_m3535(L_3, /*hidden argument*/List_1_GetEnumerator_m3535_MethodInfo_var);
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
			GPScore_t343 * L_5 = Enumerator_get_Current_m3536((&V_2), /*hidden argument*/Enumerator_get_Current_m3536_MethodInfo_var);
			V_1 = L_5;
			GPScore_t343 * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = GPScore_get_playerId_m1779(L_6, /*hidden argument*/NULL);
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
			GPScore_t343 * L_10 = V_1;
			V_3 = L_10;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_0035:
		{
			bool L_11 = Enumerator_MoveNext_m3537((&V_2), /*hidden argument*/Enumerator_MoveNext_m3537_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_t679  L_12 = V_2;
		Enumerator_t679  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t679_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0052:
	{
		return (GPScore_t343 *)NULL;
	}

IL_0054:
	{
		GPScore_t343 * L_15 = V_3;
		return L_15;
	}
}
// GPScore GPLeaderBoard::GetScore(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t343 * GPLeaderBoard_GetScore_m1314 (GPLeaderBoard_t224 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	GPScoreCollection_t222 * V_0 = {0};
	Dictionary_2_t225 * V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	{
		GPScoreCollection_t222 * L_0 = (__this->___GlobalCollection_3);
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
		GPScoreCollection_t222 * L_4 = (__this->___GlobalCollection_3);
		V_0 = L_4;
		goto IL_0033;
	}

IL_0027:
	{
		GPScoreCollection_t222 * L_5 = (__this->___SocsialCollection_2);
		V_0 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		GPScoreCollection_t222 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_t225 * L_7 = (L_6->___AllTimeScores_0);
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
		GPScoreCollection_t222 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_t225 * L_11 = (L_10->___AllTimeScores_0);
		V_1 = L_11;
		goto IL_0077;
	}

IL_005f:
	{
		GPScoreCollection_t222 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t225 * L_13 = (L_12->___TodayScores_2);
		V_1 = L_13;
		goto IL_0077;
	}

IL_006b:
	{
		GPScoreCollection_t222 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t225 * L_15 = (L_14->___WeekScores_1);
		V_1 = L_15;
		goto IL_0077;
	}

IL_0077:
	{
		Dictionary_2_t225 * L_16 = V_1;
		int32_t L_17 = ___rank;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(!0) */, L_16, L_17);
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Dictionary_2_t225 * L_19 = V_1;
		int32_t L_20 = ___rank;
		NullCheck(L_19);
		GPScore_t343 * L_21 = (GPScore_t343 *)VirtFuncInvoker1< GPScore_t343 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(!0) */, L_19, L_20);
		return L_21;
	}

IL_008b:
	{
		return (GPScore_t343 *)NULL;
	}
}
// GPScore GPLeaderBoard::GetCurrentPlayerScore(GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* GPBoardTimeSpan_t191_il2cpp_TypeInfo_var;
extern TypeInfo* GPCollectionType_t192_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GPScore_t343 * GPLeaderBoard_GetCurrentPlayerScore_m1315 (GPLeaderBoard_t224 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPBoardTimeSpan_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		GPCollectionType_t192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(GPBoardTimeSpan_t191_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		int32_t L_4 = ___collection;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(GPCollectionType_t192_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral251, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t223 * L_9 = (__this->___currentPlayerRank_4);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(!0) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t223 * L_12 = (__this->___currentPlayerRank_4);
		String_t* L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)VirtFuncInvoker1< int32_t, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(!0) */, L_12, L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		int32_t L_16 = ___timeSpan;
		int32_t L_17 = ___collection;
		GPScore_t343 * L_18 = GPLeaderBoard_GetScore_m1314(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0049:
	{
		return (GPScore_t343 *)NULL;
	}
}
// System.Void GPLeaderBoard::UpdateCurrentPlayerRank(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* GPBoardTimeSpan_t191_il2cpp_TypeInfo_var;
extern TypeInfo* GPCollectionType_t192_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GPLeaderBoard_UpdateCurrentPlayerRank_m1316 (GPLeaderBoard_t224 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPBoardTimeSpan_t191_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		GPCollectionType_t192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(GPBoardTimeSpan_t191_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		int32_t L_4 = ___collection;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(GPCollectionType_t192_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral251, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t223 * L_9 = (__this->___currentPlayerRank_4);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(!0) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t223 * L_12 = (__this->___currentPlayerRank_4);
		String_t* L_13 = V_0;
		int32_t L_14 = ___rank;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, L_12, L_13, L_14);
		goto IL_0051;
	}

IL_0044:
	{
		Dictionary_2_t223 * L_15 = (__this->___currentPlayerRank_4);
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
extern "C" void GPLeaderBoard_UpdateScore_m1317 (GPLeaderBoard_t224 * __this, GPScore_t343 * ___score, const MethodInfo* method)
{
	GPScoreCollection_t222 * V_0 = {0};
	Dictionary_2_t225 * V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	{
		GPScoreCollection_t222 * L_0 = (__this->___GlobalCollection_3);
		V_0 = L_0;
		GPScore_t343 * L_1 = ___score;
		NullCheck(L_1);
		int32_t L_2 = GPScore_get_collection_m1781(L_1, /*hidden argument*/NULL);
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
		GPScoreCollection_t222 * L_5 = (__this->___GlobalCollection_3);
		V_0 = L_5;
		goto IL_0038;
	}

IL_002c:
	{
		GPScoreCollection_t222 * L_6 = (__this->___SocsialCollection_2);
		V_0 = L_6;
		goto IL_0038;
	}

IL_0038:
	{
		GPScoreCollection_t222 * L_7 = V_0;
		NullCheck(L_7);
		Dictionary_2_t225 * L_8 = (L_7->___AllTimeScores_0);
		V_1 = L_8;
		GPScore_t343 * L_9 = ___score;
		NullCheck(L_9);
		int32_t L_10 = GPScore_get_timeSpan_m1782(L_9, /*hidden argument*/NULL);
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
		GPScoreCollection_t222 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t225 * L_13 = (L_12->___AllTimeScores_0);
		V_1 = L_13;
		goto IL_0081;
	}

IL_0069:
	{
		GPScoreCollection_t222 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t225 * L_15 = (L_14->___TodayScores_2);
		V_1 = L_15;
		goto IL_0081;
	}

IL_0075:
	{
		GPScoreCollection_t222 * L_16 = V_0;
		NullCheck(L_16);
		Dictionary_2_t225 * L_17 = (L_16->___WeekScores_1);
		V_1 = L_17;
		goto IL_0081;
	}

IL_0081:
	{
		Dictionary_2_t225 * L_18 = V_1;
		GPScore_t343 * L_19 = ___score;
		NullCheck(L_19);
		int32_t L_20 = GPScore_get_rank_m1777(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_21 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(!0) */, L_18, L_20);
		if (!L_21)
		{
			goto IL_00a4;
		}
	}
	{
		Dictionary_2_t225 * L_22 = V_1;
		GPScore_t343 * L_23 = ___score;
		NullCheck(L_23);
		int32_t L_24 = GPScore_get_rank_m1777(L_23, /*hidden argument*/NULL);
		GPScore_t343 * L_25 = ___score;
		NullCheck(L_22);
		VirtActionInvoker2< int32_t, GPScore_t343 * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(!0,!1) */, L_22, L_24, L_25);
		goto IL_00b1;
	}

IL_00a4:
	{
		Dictionary_2_t225 * L_26 = V_1;
		GPScore_t343 * L_27 = ___score;
		NullCheck(L_27);
		int32_t L_28 = GPScore_get_rank_m1777(L_27, /*hidden argument*/NULL);
		GPScore_t343 * L_29 = ___score;
		NullCheck(L_26);
		VirtActionInvoker2< int32_t, GPScore_t343 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(!0,!1) */, L_26, L_28, L_29);
	}

IL_00b1:
	{
		return;
	}
}
// System.String GPLeaderBoard::get_id()
extern "C" String_t* GPLeaderBoard_get_id_m1318 (GPLeaderBoard_t224 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GPLeaderBoard::get_name()
extern "C" String_t* GPLeaderBoard_get_name_m1319 (GPLeaderBoard_t224 * __this, const MethodInfo* method)
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
extern TypeInfo* Dictionary_2_t225_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3538_MethodInfo_var;
extern "C" void GPScoreCollection__ctor_m1320 (GPScoreCollection_t222 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		Dictionary_2__ctor_m3538_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483848);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t225 * L_0 = (Dictionary_2_t225 *)il2cpp_codegen_object_new (Dictionary_2_t225_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3538(L_0, /*hidden argument*/Dictionary_2__ctor_m3538_MethodInfo_var);
		__this->___AllTimeScores_0 = L_0;
		Dictionary_2_t225 * L_1 = (Dictionary_2_t225 *)il2cpp_codegen_object_new (Dictionary_2_t225_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3538(L_1, /*hidden argument*/Dictionary_2__ctor_m3538_MethodInfo_var);
		__this->___WeekScores_1 = L_1;
		Dictionary_2_t225 * L_2 = (Dictionary_2_t225 *)il2cpp_codegen_object_new (Dictionary_2_t225_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3538(L_2, /*hidden argument*/Dictionary_2__ctor_m3538_MethodInfo_var);
		__this->___TodayScores_2 = L_2;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void GP_Invite__ctor_m1321 (GP_Invite_t227 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void GP_Participant__ctor_m1322 (GP_Participant_t226 * __this, String_t* ___uid, String_t* ___playerUid, String_t* ___stat, String_t* ___hiResImg, String_t* ___IconImg, String_t* ___Name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____status_6 = 6;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___uid;
		__this->____id_0 = L_0;
		String_t* L_1 = ___playerUid;
		__this->____playerid_1 = L_1;
		String_t* L_2 = ___stat;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_3 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
extern "C" void GP_Participant_SetResult_m1323 (GP_Participant_t226 * __this, GP_ParticipantResult_t228 * ___r, const MethodInfo* method)
{
	{
		GP_ParticipantResult_t228 * L_0 = ___r;
		__this->____result_5 = L_0;
		return;
	}
}
// System.String GP_Participant::get_id()
extern "C" String_t* GP_Participant_get_id_m1324 (GP_Participant_t226 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GP_Participant::get_playerId()
extern "C" String_t* GP_Participant_get_playerId_m1325 (GP_Participant_t226 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____playerid_1);
		return L_0;
	}
}
// System.String GP_Participant::get_HiResImageUrl()
extern "C" String_t* GP_Participant_get_HiResImageUrl_m1326 (GP_Participant_t226 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____HiResImageUrl_2);
		return L_0;
	}
}
// System.String GP_Participant::get_IconImageUrl()
extern "C" String_t* GP_Participant_get_IconImageUrl_m1327 (GP_Participant_t226 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____IconImageUrl_3);
		return L_0;
	}
}
// System.String GP_Participant::get_DisplayName()
extern "C" String_t* GP_Participant_get_DisplayName_m1328 (GP_Participant_t226 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____DisplayName_4);
		return L_0;
	}
}
// GP_RTM_ParticipantStatus GP_Participant::get_Status()
extern "C" int32_t GP_Participant_get_Status_m1329 (GP_Participant_t226 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____status_6);
		return L_0;
	}
}
// GP_ParticipantResult GP_Participant::get_Result()
extern "C" GP_ParticipantResult_t228 * GP_Participant_get_Result_m1330 (GP_Participant_t226 * __this, const MethodInfo* method)
{
	{
		GP_ParticipantResult_t228 * L_0 = (__this->____result_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// GP_ParticipantResult
#include "AssemblyU2DCSharp_GP_ParticipantResultMethodDeclarations.h"



// System.Void GP_ParticipantResult::.ctor(System.String,System.Int32,System.Int32)
extern "C" void GP_ParticipantResult__ctor_m1331 (GP_ParticipantResult_t228 * __this, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void GP_ParticipantResult__ctor_m1332 (GP_ParticipantResult_t228 * __this, int32_t ___versionCode, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void GP_ParticipantResult__ctor_m1333 (GP_ParticipantResult_t228 * __this, StringU5BU5D_t75* ___data, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		StringU5BU5D_t75* L_0 = ___data;
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		__this->____ParticipantId_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2));
		StringU5BU5D_t75* L_3 = ___data;
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_6 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		__this->____Placing_0 = L_6;
		StringU5BU5D_t75* L_7 = ___data;
		int32_t L_8 = ___index;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)L_8+(int32_t)2)));
		int32_t L_9 = ((int32_t)((int32_t)L_8+(int32_t)2));
		int32_t L_10 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)), /*hidden argument*/NULL);
		__this->____Result_1 = L_10;
		StringU5BU5D_t75* L_11 = ___data;
		int32_t L_12 = ___index;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12+(int32_t)3)));
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)3));
		int32_t L_14 = Convert_ToInt32_m3499(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_13)), /*hidden argument*/NULL);
		__this->____VersionCode_2 = L_14;
		return;
	}
}
// System.Int32 GP_ParticipantResult::get_Placing()
extern "C" int32_t GP_ParticipantResult_get_Placing_m1334 (GP_ParticipantResult_t228 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Placing_0);
		return L_0;
	}
}
// System.Int32 GP_ParticipantResult::get_Result()
extern "C" int32_t GP_ParticipantResult_get_Result_m1335 (GP_ParticipantResult_t228 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Result_1);
		return L_0;
	}
}
// System.Int32 GP_ParticipantResult::get_VersionCode()
extern "C" int32_t GP_ParticipantResult_get_VersionCode_m1336 (GP_ParticipantResult_t228 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____VersionCode_2);
		return L_0;
	}
}
// System.String GP_ParticipantResult::get_ParticipantId()
extern "C" String_t* GP_ParticipantResult_get_ParticipantId_m1337 (GP_ParticipantResult_t228 * __this, const MethodInfo* method)
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
extern "C" void GP_RTM_Network_Package__ctor_m1338 (GP_RTM_Network_Package_t229 * __this, String_t* ___player, String_t* ___recievedData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___player;
		__this->____playerId_1 = L_0;
		String_t* L_1 = ___recievedData;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral499, L_1, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___recievedData;
		ByteU5BU5D_t66* L_4 = GP_RTM_Network_Package_ConvertStringToByteData_m1341(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____buffer_2 = L_4;
		return;
	}
}
// System.String GP_RTM_Network_Package::get_participantId()
extern "C" String_t* GP_RTM_Network_Package_get_participantId_m1339 (GP_RTM_Network_Package_t229 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____playerId_1);
		return L_0;
	}
}
// System.Byte[] GP_RTM_Network_Package::get_buffer()
extern "C" ByteU5BU5D_t66* GP_RTM_Network_Package_get_buffer_m1340 (GP_RTM_Network_Package_t229 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = (__this->____buffer_2);
		return L_0;
	}
}
// System.Byte[] GP_RTM_Network_Package::ConvertStringToByteData(System.String)
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t66* GP_RTM_Network_Package_ConvertStringToByteData_m1341 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	{
		return ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 0));
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
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void GP_RTM_Result__ctor_m1342 (GP_RTM_Result_t230 * __this, String_t* ___r_status, String_t* ___r_roomId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___r_status;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____status_0 = L_1;
		String_t* L_2 = ___r_roomId;
		__this->____roomId_1 = L_2;
		return;
	}
}
// GP_GamesStatusCodes GP_RTM_Result::get_status()
extern "C" int32_t GP_RTM_Result_get_status_m1343 (GP_RTM_Result_t230 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____status_0);
		return L_0;
	}
}
// System.String GP_RTM_Result::get_roomId()
extern "C" String_t* GP_RTM_Result_get_roomId_m1344 (GP_RTM_Result_t230 * __this, const MethodInfo* method)
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
extern TypeInfo* List_1_t231_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3539_MethodInfo_var;
extern "C" void GP_RTM_Room__ctor_m1345 (GP_RTM_Room_t232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		List_1__ctor_m3539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483849);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___id_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___creatorId_1 = L_1;
		__this->___status_2 = (-1);
		List_1_t231 * L_2 = (List_1_t231 *)il2cpp_codegen_object_new (List_1_t231_il2cpp_TypeInfo_var);
		List_1__ctor_m3539(L_2, /*hidden argument*/List_1__ctor_m3539_MethodInfo_var);
		__this->___participants_4 = L_2;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		List_1_t231 * L_3 = (List_1_t231 *)il2cpp_codegen_object_new (List_1_t231_il2cpp_TypeInfo_var);
		List_1__ctor_m3539(L_3, /*hidden argument*/List_1__ctor_m3539_MethodInfo_var);
		__this->___participants_4 = L_3;
		return;
	}
}
// System.Void GP_RTM_Room::AddParticipant(GP_Participant)
extern "C" void GP_RTM_Room_AddParticipant_m1346 (GP_RTM_Room_t232 * __this, GP_Participant_t226 * ___p, const MethodInfo* method)
{
	{
		List_1_t231 * L_0 = (__this->___participants_4);
		GP_Participant_t226 * L_1 = ___p;
		NullCheck(L_0);
		VirtActionInvoker1< GP_Participant_t226 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GP_Participant>::Add(!0) */, L_0, L_1);
		return;
	}
}
// GP_Participant GP_RTM_Room::GetParticipantById(System.String)
extern TypeInfo* Enumerator_t680_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3540_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3541_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3542_MethodInfo_var;
extern "C" GP_Participant_t226 * GP_RTM_Room_GetParticipantById_m1347 (GP_RTM_Room_t232 * __this, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m3540_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483850);
		Enumerator_get_Current_m3541_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483851);
		Enumerator_MoveNext_m3542_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483852);
		s_Il2CppMethodIntialized = true;
	}
	GP_Participant_t226 * V_0 = {0};
	Enumerator_t680  V_1 = {0};
	GP_Participant_t226 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t231 * L_0 = (__this->___participants_4);
		NullCheck(L_0);
		Enumerator_t680  L_1 = List_1_GetEnumerator_m3540(L_0, /*hidden argument*/List_1_GetEnumerator_m3540_MethodInfo_var);
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
			GP_Participant_t226 * L_2 = Enumerator_get_Current_m3541((&V_1), /*hidden argument*/Enumerator_get_Current_m3541_MethodInfo_var);
			V_0 = L_2;
			GP_Participant_t226 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = GP_Participant_get_id_m1324(L_3, /*hidden argument*/NULL);
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
			GP_Participant_t226 * L_7 = V_0;
			V_2 = L_7;
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}

IL_0031:
		{
			bool L_8 = Enumerator_MoveNext_m3542((&V_1), /*hidden argument*/Enumerator_MoveNext_m3542_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_t680  L_9 = V_1;
		Enumerator_t680  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t680_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_11);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004e:
	{
		return (GP_Participant_t226 *)NULL;
	}

IL_0050:
	{
		GP_Participant_t226 * L_12 = V_2;
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
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* GP_AppStateStatusCodes_t196_il2cpp_TypeInfo_var;
extern "C" void GoogleCloudResult__ctor_m1348 (GoogleCloudResult_t233 * __this, String_t* ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GP_AppStateStatusCodes_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____response_0 = L_1;
		int32_t L_2 = (__this->____response_0);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(GP_AppStateStatusCodes_t196_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_4);
		__this->____message_1 = L_5;
		return;
	}
}
// System.Void GoogleCloudResult::.ctor(System.String,System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* GP_AppStateStatusCodes_t196_il2cpp_TypeInfo_var;
extern "C" void GoogleCloudResult__ctor_m1349 (GoogleCloudResult_t233 * __this, String_t* ___code, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		GP_AppStateStatusCodes_t196_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____response_0 = L_1;
		int32_t L_2 = (__this->____response_0);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(GP_AppStateStatusCodes_t196_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_4);
		__this->____message_1 = L_5;
		String_t* L_6 = ___key;
		int32_t L_7 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____stateKey_2 = L_7;
		return;
	}
}
// GP_AppStateStatusCodes GoogleCloudResult::get_response()
extern "C" int32_t GoogleCloudResult_get_response_m1350 (GoogleCloudResult_t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return L_0;
	}
}
// System.String GoogleCloudResult::get_stateDataString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t681_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleCloudResult_get_stateDataString_m1351 (GoogleCloudResult_t233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Encoding_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t66* L_0 = (__this->___stateData_3);
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
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t681_il2cpp_TypeInfo_var);
		Encoding_t681 * L_2 = Encoding_get_UTF8_m3543(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_3 = (__this->___stateData_3);
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t66* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.String GoogleCloudResult::get_serverConflictDataString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t681_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleCloudResult_get_serverConflictDataString_m1352 (GoogleCloudResult_t233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Encoding_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t66* L_0 = (__this->___serverConflictData_4);
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
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t681_il2cpp_TypeInfo_var);
		Encoding_t681 * L_2 = Encoding_get_UTF8_m3543(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_3 = (__this->___stateData_3);
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t66* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.String GoogleCloudResult::get_message()
extern "C" String_t* GoogleCloudResult_get_message_m1353 (GoogleCloudResult_t233 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____message_1);
		return L_0;
	}
}
// System.Int32 GoogleCloudResult::get_stateKey()
extern "C" int32_t GoogleCloudResult_get_stateKey_m1354 (GoogleCloudResult_t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____stateKey_2);
		return L_0;
	}
}
// System.Boolean GoogleCloudResult::get_isSuccess()
extern "C" bool GoogleCloudResult_get_isSuccess_m1355 (GoogleCloudResult_t233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GoogleCloudResult::get_isFailure()
extern "C" bool GoogleCloudResult_get_isFailure_m1356 (GoogleCloudResult_t233 * __this, const MethodInfo* method)
{
	{
		bool L_0 = GoogleCloudResult_get_isSuccess_m1355(__this, /*hidden argument*/NULL);
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
extern "C" void GooglePlayConnectionResult__ctor_m1357 (GooglePlayConnectionResult_t234 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GooglePlayConnectionResult::get_IsSuccess()
extern "C" bool GooglePlayConnectionResult_get_IsSuccess_m1358 (GooglePlayConnectionResult_t234 * __this, const MethodInfo* method)
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
// GooglePlayGiftRequestResult
#include "AssemblyU2DCSharp_GooglePlayGiftRequestResult.h"
#ifndef _MSC_VER
#else
#endif
// GooglePlayGiftRequestResult
#include "AssemblyU2DCSharp_GooglePlayGiftRequestResultMethodDeclarations.h"



// System.Void GooglePlayGiftRequestResult::.ctor(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void GooglePlayGiftRequestResult__ctor_m1359 (GooglePlayGiftRequestResult_t235 * __this, String_t* ___r_code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___r_code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m3499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____code_0 = L_1;
		return;
	}
}
// GP_GamesActivityResultCodes GooglePlayGiftRequestResult::get_code()
extern "C" int32_t GooglePlayGiftRequestResult_get_code_m1360 (GooglePlayGiftRequestResult_t235 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____code_0);
		return L_0;
	}
}
// System.Boolean GooglePlayGiftRequestResult::get_isSuccess()
extern "C" bool GooglePlayGiftRequestResult_get_isSuccess_m1361 (GooglePlayGiftRequestResult_t235 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____code_0);
		return ((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean GooglePlayGiftRequestResult::get_isFailure()
extern "C" bool GooglePlayGiftRequestResult_get_isFailure_m1362 (GooglePlayGiftRequestResult_t235 * __this, const MethodInfo* method)
{
	{
		bool L_0 = GooglePlayGiftRequestResult_get_isSuccess_m1361(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
