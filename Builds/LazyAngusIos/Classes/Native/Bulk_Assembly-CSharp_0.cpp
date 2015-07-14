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
extern TypeInfo* GUIStyle_t64_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase__ctor_m254 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUIStyle_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___status_2 = (String_t*) &_stringLiteral27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastResponse_3 = L_0;
		GUIStyle_t64 * L_1 = (GUIStyle_t64 *)il2cpp_codegen_object_new (GUIStyle_t64_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2528(L_1, /*hidden argument*/NULL);
		__this->___textStyle_4 = L_1;
		Vector2_t68  L_2 = Vector2_get_zero_m2529(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollPosition_6 = L_2;
		__this->___buttonHeight_7 = ((int32_t)60);
		int32_t L_3 = Screen_get_width_m2530(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mainWindowWidth_8 = ((int32_t)((int32_t)L_3-(int32_t)((int32_t)30)));
		int32_t L_4 = Screen_get_width_m2530(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mainWindowFullWidth_9 = L_4;
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::Awake()
extern TypeInfo* RectOffset_t544_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_Awake_m255 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t64 * L_0 = (__this->___textStyle_4);
		NullCheck(L_0);
		GUIStyle_set_alignment_m2532(L_0, 0, /*hidden argument*/NULL);
		GUIStyle_t64 * L_1 = (__this->___textStyle_4);
		NullCheck(L_1);
		GUIStyle_set_wordWrap_m2533(L_1, 1, /*hidden argument*/NULL);
		GUIStyle_t64 * L_2 = (__this->___textStyle_4);
		RectOffset_t544 * L_3 = (RectOffset_t544 *)il2cpp_codegen_object_new (RectOffset_t544_il2cpp_TypeInfo_var);
		RectOffset__ctor_m2534(L_3, ((int32_t)10), ((int32_t)10), ((int32_t)10), ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_set_padding_m2535(L_2, L_3, /*hidden argument*/NULL);
		GUIStyle_t64 * L_4 = (__this->___textStyle_4);
		NullCheck(L_4);
		GUIStyle_set_stretchHeight_m2536(L_4, 1, /*hidden argument*/NULL);
		GUIStyle_t64 * L_5 = (__this->___textStyle_4);
		NullCheck(L_5);
		GUIStyle_set_stretchWidth_m2537(L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ConsoleBase::Button(System.String)
extern TypeInfo* GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var;
extern "C" bool ConsoleBase_Button_m256 (ConsoleBase_t66 * __this, String_t* ___label, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___label;
		GUILayoutOptionU5BU5D_t545* L_1 = ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 2));
		int32_t L_2 = (__this->___buttonHeight_7);
		GUILayoutOption_t546 * L_3 = GUILayout_MinHeight_m2538(NULL /*static, unused*/, (((float)L_2)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_1, 0)) = (GUILayoutOption_t546 *)L_3;
		GUILayoutOptionU5BU5D_t545* L_4 = L_1;
		int32_t L_5 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t546 * L_6 = GUILayout_MaxWidth_m2539(NULL /*static, unused*/, (((float)L_5)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_6);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_4, 1)) = (GUILayoutOption_t546 *)L_6;
		bool L_7 = GUILayout_Button_m2540(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void ConsoleBase::LabelAndTextField(System.String,System.String&)
extern TypeInfo* GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_LabelAndTextField_m257 (ConsoleBase_t66 * __this, String_t* ___label, String_t** ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_BeginHorizontal_m2541(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		String_t* L_0 = ___label;
		GUILayoutOptionU5BU5D_t545* L_1 = ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t546 * L_2 = GUILayout_MaxWidth_m2539(NULL /*static, unused*/, (150.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_1, 0)) = (GUILayoutOption_t546 *)L_2;
		GUILayout_Label_m2542(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		String_t** L_3 = ___text;
		String_t** L_4 = ___text;
		GUILayoutOptionU5BU5D_t545* L_5 = ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 1));
		int32_t L_6 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t546 * L_7 = GUILayout_MaxWidth_m2539(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_6-(int32_t)((int32_t)150))))), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_5, 0)) = (GUILayoutOption_t546 *)L_7;
		String_t* L_8 = GUILayout_TextField_m2543(NULL /*static, unused*/, (*((String_t**)L_4)), L_5, /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_8;
		GUILayout_EndHorizontal_m2544(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ConsoleBase::IsHorizontalLayout()
extern "C" bool ConsoleBase_IsHorizontalLayout_m258 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_orientation_m2545(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Int32 ConsoleBase::get_TextWindowHeight()
extern "C" int32_t ConsoleBase_get_TextWindowHeight_m259 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ConsoleBase_IsHorizontalLayout_m258(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Screen_get_height_m2546(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void ConsoleBase_Callback_m260 (ConsoleBase_t66 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___lastResponseTexture_5 = (Texture2D_t65 *)NULL;
		FBResult_t213 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Error_m1557(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		FBResult_t213 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Error_m1557(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral28, L_4, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_5;
		goto IL_0095;
	}

IL_0032:
	{
		FBResult_t213 * L_6 = ___result;
		NullCheck(L_6);
		String_t* L_7 = FBResult_get_Text_m1556(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		FBResult_t213 * L_9 = ___result;
		NullCheck(L_9);
		String_t* L_10 = FBResult_get_Text_m1556(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral29, L_10, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_11;
		goto IL_0095;
	}

IL_005d:
	{
		FBResult_t213 * L_12 = ___result;
		NullCheck(L_12);
		Texture2D_t65 * L_13 = FBResult_get_Texture_m1555(L_12, /*hidden argument*/NULL);
		bool L_14 = Object_op_Inequality_m2547(NULL /*static, unused*/, L_13, (Object_t547 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		FBResult_t213 * L_15 = ___result;
		NullCheck(L_15);
		Texture2D_t65 * L_16 = FBResult_get_Texture_m1555(L_15, /*hidden argument*/NULL);
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
extern TypeInfo* GUILayoutUtility_t548_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t549_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_AddCommonFooter_m261 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUI_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t542  V_0 = {0};
	float V_1 = 0.0f;
	{
		int32_t L_0 = ConsoleBase_get_TextWindowHeight_m259(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t548_il2cpp_TypeInfo_var);
		Rect_t542  L_1 = GUILayoutUtility_GetRect_m2548(NULL /*static, unused*/, (640.0f), (((float)L_0)), /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t542  L_2 = V_0;
		ObjectU5BU5D_t531* L_3 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		String_t* L_4 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t531* L_5 = L_3;
		String_t* L_6 = FB_get_UserId_m1515(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t531* L_7 = L_5;
		bool L_8 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_10;
		ObjectU5BU5D_t531* L_11 = L_7;
		String_t* L_12 = (__this->___lastResponse_3);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 3)) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2549(NULL /*static, unused*/, (String_t*) &_stringLiteral32, L_11, /*hidden argument*/NULL);
		GUIStyle_t64 * L_14 = (__this->___textStyle_4);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_TextArea_m2550(NULL /*static, unused*/, L_2, L_13, L_14, /*hidden argument*/NULL);
		Texture2D_t65 * L_15 = (__this->___lastResponseTexture_5);
		bool L_16 = Object_op_Inequality_m2547(NULL /*static, unused*/, L_15, (Object_t547 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		float L_17 = Rect_get_y_m2551((&V_0), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_17+(float)(200.0f)));
		int32_t L_18 = Screen_get_height_m2546(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t65 * L_19 = (__this->___lastResponseTexture_5);
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		float L_21 = V_1;
		if ((!(((float)(((float)((int32_t)((int32_t)L_18-(int32_t)L_20))))) < ((float)L_21))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_22 = Screen_get_height_m2546(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t65 * L_23 = (__this->___lastResponseTexture_5);
		NullCheck(L_23);
		int32_t L_24 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		V_1 = (((float)((int32_t)((int32_t)L_22-(int32_t)L_24))));
	}

IL_009f:
	{
		float L_25 = Rect_get_x_m2552((&V_0), /*hidden argument*/NULL);
		float L_26 = V_1;
		Texture2D_t65 * L_27 = (__this->___lastResponseTexture_5);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_27);
		Texture2D_t65 * L_29 = (__this->___lastResponseTexture_5);
		NullCheck(L_29);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_29);
		Rect_t542  L_31 = {0};
		Rect__ctor_m2553(&L_31, ((float)((float)L_25+(float)(5.0f))), L_26, (((float)L_28)), (((float)L_30)), /*hidden argument*/NULL);
		Texture2D_t65 * L_32 = (__this->___lastResponseTexture_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_Label_m2554(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		return;
	}
}
// System.Void ConsoleBase::AddCommonHeader()
extern TypeInfo* GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t551_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t549_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_AddCommonHeader_m262 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Input_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GUI_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t550  V_0 = {0};
	Touch_t550  V_1 = {0};
	Vector2_t68  V_2 = {0};
	{
		bool L_0 = ConsoleBase_IsHorizontalLayout_m258(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GUILayout_BeginHorizontal_m2541(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_BeginVertical_m2555(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0021:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (5.0f), /*hidden argument*/NULL);
		String_t* L_1 = (__this->___status_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral33, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t545* L_3 = ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 1));
		int32_t L_4 = (__this->___mainWindowWidth_8);
		GUILayoutOption_t546 * L_5 = GUILayout_MinWidth_m2557(NULL /*static, unused*/, (((float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_5);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_3, 0)) = (GUILayoutOption_t546 *)L_5;
		GUILayout_Box_m2558(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t551_il2cpp_TypeInfo_var);
		int32_t L_6 = Input_get_touchCount_m2559(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t551_il2cpp_TypeInfo_var);
		Touch_t550  L_7 = Input_GetTouch_m2560(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Touch_get_phase_m2561((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		Vector2_t68 * L_9 = &(__this->___scrollPosition_6);
		Vector2_t68 * L_10 = L_9;
		float L_11 = (L_10->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t551_il2cpp_TypeInfo_var);
		Touch_t550  L_12 = Input_GetTouch_m2560(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_12;
		Vector2_t68  L_13 = Touch_get_deltaPosition_m2562((&V_1), /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = ((&V_2)->___y_2);
		L_10->___y_2 = ((float)((float)L_11+(float)L_14));
	}

IL_009c:
	{
		Vector2_t68  L_15 = (__this->___scrollPosition_6);
		GUILayoutOptionU5BU5D_t545* L_16 = ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 1));
		int32_t L_17 = (__this->___mainWindowFullWidth_9);
		GUILayoutOption_t546 * L_18 = GUILayout_MinWidth_m2557(NULL /*static, unused*/, (((float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, L_18);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_16, 0)) = (GUILayoutOption_t546 *)L_18;
		Vector2_t68  L_19 = GUILayout_BeginScrollView_m2563(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->___scrollPosition_6 = L_19;
		GUILayout_BeginVertical_m2555(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_20 = FB_get_IsInitialized_m1519(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, ((((int32_t)L_20) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		bool L_21 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral34, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0105;
		}
	}
	{
		ConsoleBase_CallFBInit_m263(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		String_t* L_22 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral35, L_22, /*hidden argument*/NULL);
		__this->___status_2 = L_23;
	}

IL_0105:
	{
		GUILayout_BeginHorizontal_m2541(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_24 = FB_get_IsInitialized_m1519(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		bool L_25 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral36, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_013b;
		}
	}
	{
		ConsoleBase_CallFBLogin_m266(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral37;
	}

IL_013b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_26 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		bool L_27 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral38, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0166;
		}
	}
	{
		ConsoleBase_CallFBLoginForPublish_m267(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral39;
	}

IL_0166:
	{
		bool L_28 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral40, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0187;
		}
	}
	{
		ConsoleBase_CallFBLogout_m269(__this, /*hidden argument*/NULL);
		__this->___status_2 = (String_t*) &_stringLiteral41;
	}

IL_0187:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_29 = FB_get_IsInitialized_m1519(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		GUILayout_EndHorizontal_m2544(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBInit()
extern TypeInfo* InitDelegate_t336_il2cpp_TypeInfo_var;
extern TypeInfo* HideUnityDelegate_t337_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_OnInitComplete_m264_MethodInfo_var;
extern const MethodInfo* ConsoleBase_OnHideUnity_m265_MethodInfo_var;
extern "C" void ConsoleBase_CallFBInit_m263 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InitDelegate_t336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		HideUnityDelegate_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_OnInitComplete_m264_MethodInfo_var = il2cpp_codegen_method_info_from_index(24);
		ConsoleBase_OnHideUnity_m265_MethodInfo_var = il2cpp_codegen_method_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_OnInitComplete_m264_MethodInfo_var };
		InitDelegate_t336 * L_1 = (InitDelegate_t336 *)il2cpp_codegen_object_new (InitDelegate_t336_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m2516(L_1, __this, L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConsoleBase_OnHideUnity_m265_MethodInfo_var };
		HideUnityDelegate_t337 * L_3 = (HideUnityDelegate_t337 *)il2cpp_codegen_object_new (HideUnityDelegate_t337_il2cpp_TypeInfo_var);
		HideUnityDelegate__ctor_m2524(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Init_m1520(NULL /*static, unused*/, L_1, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::OnInitComplete()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_OnInitComplete_m264 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral42, L_2, /*hidden argument*/NULL);
		Debug_Log_m2565(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::OnHideUnity(System.Boolean)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_OnHideUnity_m265 (ConsoleBase_t66 * __this, bool ___isGameShown, const MethodInfo* method)
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
		Debug_Log_m2565(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBLogin()
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_LoginCallback_m268_MethodInfo_var;
extern "C" void ConsoleBase_CallFBLogin_m266 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_LoginCallback_m268_MethodInfo_var = il2cpp_codegen_method_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_LoginCallback_m268_MethodInfo_var };
		FacebookDelegate_t350 * L_1 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Login_m1523(NULL /*static, unused*/, (String_t*) &_stringLiteral44, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::CallFBLoginForPublish()
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_LoginCallback_m268_MethodInfo_var;
extern "C" void ConsoleBase_CallFBLoginForPublish_m267 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_LoginCallback_m268_MethodInfo_var = il2cpp_codegen_method_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_LoginCallback_m268_MethodInfo_var };
		FacebookDelegate_t350 * L_1 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Login_m1523(NULL /*static, unused*/, (String_t*) &_stringLiteral45, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConsoleBase::LoginCallback(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_LoginCallback_m268 (ConsoleBase_t66 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBResult_t213 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Error_m1557(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		FBResult_t213 * L_2 = ___result;
		NullCheck(L_2);
		String_t* L_3 = FBResult_get_Error_m1557(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral28, L_3, /*hidden argument*/NULL);
		__this->___lastResponse_3 = L_4;
		goto IL_004b;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_5 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern "C" void ConsoleBase_CallFBLogout_m269 (ConsoleBase_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Logout_m1524(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void GameGroupsConsole__ctor_m270 (GameGroupsConsole_t69 * __this, const MethodInfo* method)
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
		ConsoleBase__ctor_m254(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::GroupCreateCB(FBResult)
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GroupCreateCB_m271 (GameGroupsConsole_t69 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	{
		FBResult_t213 * L_0 = ___result;
		ConsoleBase_Callback_m260(__this, L_0, /*hidden argument*/NULL);
		FBResult_t213 * L_1 = ___result;
		NullCheck(L_1);
		String_t* L_2 = FBResult_get_Text_m1556(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		FBResult_t213 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Text_m1556(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_5 = Json_Deserialize_m1773(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_5, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_6, (String_t*) &_stringLiteral51);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t244 * L_8 = V_0;
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
extern "C" void GameGroupsConsole_GroupDeleteCB_m272 (GameGroupsConsole_t69 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBResult_t213 * L_0 = ___result;
		ConsoleBase_Callback_m260(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GamerGroupCurrentGroup_14 = L_1;
		return;
	}
}
// System.Void GameGroupsConsole::GetAllGroupsCB(FBResult)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t533_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_GetAllGroupsCB_m273 (GameGroupsConsole_t69 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Json_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		List_1_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t244 * V_0 = {0};
	List_1_t533 * V_1 = {0};
	Dictionary_2_t244 * V_2 = {0};
	{
		FBResult_t213 * L_0 = ___result;
		NullCheck(L_0);
		String_t* L_1 = FBResult_get_Text_m1556(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_007d;
		}
	}
	{
		FBResult_t213 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Text_m1556(L_3, /*hidden argument*/NULL);
		((ConsoleBase_t66 *)__this)->___lastResponse_3 = L_4;
		FBResult_t213 * L_5 = ___result;
		NullCheck(L_5);
		String_t* L_6 = FBResult_get_Text_m1556(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t370_il2cpp_TypeInfo_var);
		Object_t * L_7 = Json_Deserialize_m1773(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t244 *)Castclass(L_7, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_8, (String_t*) &_stringLiteral52);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t244 * L_10 = V_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral52);
		V_1 = ((List_1_t533 *)Castclass(L_11, List_1_t533_il2cpp_TypeInfo_var));
		List_1_t533 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_12);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		List_1_t533 * L_14 = V_1;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_14, 0);
		V_2 = ((Dictionary_2_t244 *)Castclass(L_15, Dictionary_2_t244_il2cpp_TypeInfo_var));
		Dictionary_2_t244 * L_16 = V_2;
		NullCheck(L_16);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_16, (String_t*) &_stringLiteral51);
		__this->___GamerGroupCurrentGroup_14 = ((String_t*)Castclass(L_17, String_t_il2cpp_TypeInfo_var));
	}

IL_007d:
	{
		FBResult_t213 * L_18 = ___result;
		NullCheck(L_18);
		String_t* L_19 = FBResult_get_Error_m1557(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0099;
		}
	}
	{
		FBResult_t213 * L_21 = ___result;
		NullCheck(L_21);
		String_t* L_22 = FBResult_get_Error_m1557(L_21, /*hidden argument*/NULL);
		((ConsoleBase_t66 *)__this)->___lastResponse_3 = L_22;
	}

IL_0099:
	{
		return;
	}
}
// System.Void GameGroupsConsole::CallFbGetAllOwnedGroups()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GetAllGroupsCB_m273_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbGetAllOwnedGroups_m274 (GameGroupsConsole_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		GameGroupsConsole_GetAllGroupsCB_m273_MethodInfo_var = il2cpp_codegen_method_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		String_t* L_0 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m174(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_2 = HttpMethod_get_GET_m1747(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)GameGroupsConsole_GetAllGroupsCB_m273_MethodInfo_var };
		FacebookDelegate_t350 * L_4 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_4, __this, L_3, /*hidden argument*/NULL);
		FB_API_m1529(NULL /*static, unused*/, L_1, L_2, L_4, (Dictionary_2_t80 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallFbGetUserGroups()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbGetUserGroups_m275 (GameGroupsConsole_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		String_t* L_0 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral54, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_2 = HttpMethod_get_GET_m1747(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_4 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_4, __this, L_3, /*hidden argument*/NULL);
		FB_API_m1529(NULL /*static, unused*/, L_1, L_2, L_4, (Dictionary_2_t80 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallCreateGroupDialog()
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GroupCreateCB_m271_MethodInfo_var;
extern "C" void GameGroupsConsole_CallCreateGroupDialog_m276 (GameGroupsConsole_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GameGroupsConsole_GroupCreateCB_m271_MethodInfo_var = il2cpp_codegen_method_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___GamerGroupName_10);
		String_t* L_1 = (__this->___GamerGroupDesc_11);
		String_t* L_2 = (__this->___GamerGroupPrivacy_12);
		IntPtr_t L_3 = { (void*)GameGroupsConsole_GroupCreateCB_m271_MethodInfo_var };
		FacebookDelegate_t350 * L_4 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_4, __this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_GameGroupCreate_m1534(NULL /*static, unused*/, L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallJoinGroupDialog()
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* GameGroupsConsole_GroupCreateCB_m271_MethodInfo_var;
extern "C" void GameGroupsConsole_CallJoinGroupDialog_m277 (GameGroupsConsole_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GameGroupsConsole_GroupCreateCB_m271_MethodInfo_var = il2cpp_codegen_method_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___GamerGroupCurrentGroup_14);
		IntPtr_t L_1 = { (void*)GameGroupsConsole_GroupCreateCB_m271_MethodInfo_var };
		FacebookDelegate_t350 * L_2 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_2, __this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_GameGroupJoin_m1535(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::CallFbPostToGamerGroup()
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2566_MethodInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" void GameGroupsConsole_CallFbPostToGamerGroup_m278 (GameGroupsConsole_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Dictionary_2__ctor_m2566_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	{
		Dictionary_2_t80 * L_0 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2566(L_0, /*hidden argument*/Dictionary_2__ctor_m2566_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t80 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral56);
		String_t* L_2 = (__this->___GamerGroupCurrentGroup_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_4 = HttpMethod_get_POST_m1748(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_6 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_6, __this, L_5, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_API_m1529(NULL /*static, unused*/, L_3, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameGroupsConsole::OnGUI()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t549_il2cpp_TypeInfo_var;
extern "C" void GameGroupsConsole_OnGUI_m279 (GameGroupsConsole_t69 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GUI_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConsoleBase_AddCommonHeader_m262(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_1 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral58, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameGroupsConsole_CallFbGetAllOwnedGroups_m274(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		String_t** L_2 = &(__this->___GamerGroupName_10);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral59, L_2, /*hidden argument*/NULL);
		String_t** L_3 = &(__this->___GamerGroupDesc_11);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral60, L_3, /*hidden argument*/NULL);
		String_t** L_4 = &(__this->___GamerGroupPrivacy_12);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral61, L_4, /*hidden argument*/NULL);
		bool L_5 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral62, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		GameGroupsConsole_CallCreateGroupDialog_m276(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
		String_t** L_6 = &(__this->___GamerGroupCurrentGroup_14);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral63, L_6, /*hidden argument*/NULL);
		bool L_7 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral64, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0096;
		}
	}
	{
		GameGroupsConsole_CallJoinGroupDialog_m277(__this, /*hidden argument*/NULL);
	}

IL_0096:
	{
		bool L_8 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral65, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		GameGroupsConsole_CallFbGetUserGroups_m275(__this, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		bool L_9 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral66, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00cc;
		}
	}
	{
		GameGroupsConsole_CallFbPostToGamerGroup_m278(__this, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_EndVertical_m2567(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndScrollView_m2568(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_10 = ConsoleBase_IsHorizontalLayout_m258(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00f0;
		}
	}
	{
		GUILayout_EndVertical_m2567(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		ConsoleBase_AddCommonFooter_m261(__this, /*hidden argument*/NULL);
		bool L_11 = ConsoleBase_IsHorizontalLayout_m258(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_010c;
		}
	}
	{
		GUILayout_EndHorizontal_m2544(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void U3CTakeScreenshotU3Ec__Iterator0__ctor_m280 (U3CTakeScreenshotU3Ec__Iterator0_t72 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object InteractiveConsole/<TakeScreenshot>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTakeScreenshotU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m281 (U3CTakeScreenshotU3Ec__Iterator0_t72 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object InteractiveConsole/<TakeScreenshot>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTakeScreenshotU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m282 (U3CTakeScreenshotU3Ec__Iterator0_t72 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean InteractiveConsole/<TakeScreenshot>c__Iterator0::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t552_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t65_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t70_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" bool U3CTakeScreenshotU3Ec__Iterator0_MoveNext_m283 (U3CTakeScreenshotU3Ec__Iterator0_t72 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		Texture2D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		WWWForm_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(104);
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
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
		WaitForEndOfFrame_t552 * L_2 = (WaitForEndOfFrame_t552 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t552_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m2569(L_2, /*hidden argument*/NULL);
		__this->___U24current_6 = L_2;
		__this->___U24PC_5 = 1;
		goto IL_0117;
	}

IL_0038:
	{
		int32_t L_3 = Screen_get_width_m2530(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CwidthU3E__0_0 = L_3;
		int32_t L_4 = Screen_get_height_m2546(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CheightU3E__1_1 = L_4;
		int32_t L_5 = (__this->___U3CwidthU3E__0_0);
		int32_t L_6 = (__this->___U3CheightU3E__1_1);
		Texture2D_t65 * L_7 = (Texture2D_t65 *)il2cpp_codegen_object_new (Texture2D_t65_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2570(L_7, L_5, L_6, 3, 0, /*hidden argument*/NULL);
		__this->___U3CtexU3E__2_2 = L_7;
		Texture2D_t65 * L_8 = (__this->___U3CtexU3E__2_2);
		int32_t L_9 = (__this->___U3CwidthU3E__0_0);
		int32_t L_10 = (__this->___U3CheightU3E__1_1);
		Rect_t542  L_11 = {0};
		Rect__ctor_m2553(&L_11, (0.0f), (0.0f), (((float)L_9)), (((float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m2571(L_8, L_11, 0, 0, /*hidden argument*/NULL);
		Texture2D_t65 * L_12 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_12);
		Texture2D_Apply_m2572(L_12, /*hidden argument*/NULL);
		Texture2D_t65 * L_13 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_13);
		ByteU5BU5D_t36* L_14 = Texture2D_EncodeToPNG_m2573(L_13, /*hidden argument*/NULL);
		__this->___U3CscreenshotU3E__3_3 = L_14;
		WWWForm_t70 * L_15 = (WWWForm_t70 *)il2cpp_codegen_object_new (WWWForm_t70_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2574(L_15, /*hidden argument*/NULL);
		__this->___U3CwwwFormU3E__4_4 = L_15;
		WWWForm_t70 * L_16 = (__this->___U3CwwwFormU3E__4_4);
		ByteU5BU5D_t36* L_17 = (__this->___U3CscreenshotU3E__3_3);
		NullCheck(L_16);
		WWWForm_AddBinaryData_m2575(L_16, (String_t*) &_stringLiteral122, L_17, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
		WWWForm_t70 * L_18 = (__this->___U3CwwwFormU3E__4_4);
		NullCheck(L_18);
		WWWForm_AddField_m2576(L_18, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral124, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_19 = HttpMethod_get_POST_m1748(NULL /*static, unused*/, /*hidden argument*/NULL);
		InteractiveConsole_t71 * L_20 = (__this->___U3CU3Ef__this_7);
		IntPtr_t L_21 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_22 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_22, L_20, L_21, /*hidden argument*/NULL);
		WWWForm_t70 * L_23 = (__this->___U3CwwwFormU3E__4_4);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_API_m1530(NULL /*static, unused*/, (String_t*) &_stringLiteral125, L_19, L_22, L_23, /*hidden argument*/NULL);
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
extern "C" void U3CTakeScreenshotU3Ec__Iterator0_Dispose_m284 (U3CTakeScreenshotU3Ec__Iterator0_t72 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void InteractiveConsole/<TakeScreenshot>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CTakeScreenshotU3Ec__Iterator0_Reset_m285 (U3CTakeScreenshotU3Ec__Iterator0_t72 * __this, const MethodInfo* method)
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
struct List_1_t73;
struct IEnumerable_1_t553;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t38;
struct List_1_t533;
struct IEnumerable_1_t554;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t533 * Enumerable_ToList_TisObject_t_m2578_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m2578(__this /* static, unused */, p0, method) (( List_1_t533 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m2578_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisString_t_m2577(__this /* static, unused */, p0, method) (( List_1_t73 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m2578_gshared)(__this /* static, unused */, p0, method)


// System.Void InteractiveConsole::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t74_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2579_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2580_MethodInfo_var;
extern "C" void InteractiveConsole__ctor_m286 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		List_1_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Dictionary_2_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		List_1__ctor_m2579_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		Dictionary_2__ctor_m2580_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
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
		List_1_t73 * L_4 = (List_1_t73 *)il2cpp_codegen_object_new (List_1_t73_il2cpp_TypeInfo_var);
		List_1__ctor_m2579(L_4, /*hidden argument*/List_1__ctor_m2579_MethodInfo_var);
		__this->___FriendFilterGroupNames_14 = L_4;
		List_1_t73 * L_5 = (List_1_t73 *)il2cpp_codegen_object_new (List_1_t73_il2cpp_TypeInfo_var);
		List_1__ctor_m2579(L_5, /*hidden argument*/List_1__ctor_m2579_MethodInfo_var);
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
		Dictionary_2_t74 * L_20 = (Dictionary_2_t74 *)il2cpp_codegen_object_new (Dictionary_2_t74_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2580(L_20, /*hidden argument*/Dictionary_2__ctor_m2580_MethodInfo_var);
		__this->___FeedProperties_34 = L_20;
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___PayProduct_35 = L_21;
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___ApiQuery_36 = L_22;
		ConsoleBase__ctor_m254(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBActivateApp()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_CallFBActivateApp_m287 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_ActivateApp_m1532(NULL /*static, unused*/, /*hidden argument*/NULL);
		FBResult_t213 * L_0 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_0, (String_t*) &_stringLiteral73, (String_t*)NULL, /*hidden argument*/NULL);
		ConsoleBase_Callback_m260(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppRequestAsFriendSelector()
extern TypeInfo* Nullable_1_t539_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t555_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t533_il2cpp_TypeInfo_var;
extern TypeInfo* FBAppRequestsFilterGroup_t341_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m2582_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2584_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisString_t_m2577_MethodInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppRequestAsFriendSelector_m288 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		CharU5BU5D_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		List_1_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		FBAppRequestsFilterGroup_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Nullable_1__ctor_m2582_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		List_1__ctor_m2584_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerable_ToList_TisString_t_m2577_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t539  V_0 = {0};
	Exception_t27 * V_1 = {0};
	StringU5BU5D_t45* V_2 = {0};
	List_1_t533 * V_3 = {0};
	int32_t V_4 = 0;
	Nullable_1_t539  V_5 = {0};
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
	List_1_t533 * G_B15_0 = {0};
	Object_t * G_B15_1 = {0};
	String_t* G_B15_2 = {0};
	{
		Initobj (Nullable_1_t539_il2cpp_TypeInfo_var, (&V_5));
		Nullable_1_t539  L_0 = V_5;
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
		int32_t L_5 = Int32_Parse_m2581(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Nullable_1_t539  L_6 = {0};
		Nullable_1__ctor_m2582(&L_6, L_5, /*hidden argument*/Nullable_1__ctor_m2582_MethodInfo_var);
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
		((ConsoleBase_t66 *)__this)->___status_2 = L_8;
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
		CharU5BU5D_t555* L_13 = ((CharU5BU5D_t555*)SZArrayNew(CharU5BU5D_t555_il2cpp_TypeInfo_var, 1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_12);
		StringU5BU5D_t45* L_14 = String_Split_m2583(L_12, L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
	}

IL_0079:
	{
		V_2 = G_B6_0;
		List_1_t533 * L_15 = (List_1_t533 *)il2cpp_codegen_object_new (List_1_t533_il2cpp_TypeInfo_var);
		List_1__ctor_m2584(L_15, /*hidden argument*/List_1__ctor_m2584_MethodInfo_var);
		V_3 = L_15;
		int32_t L_16 = (__this->___FriendFilterSelection_13);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		List_1_t533 * L_17 = V_3;
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
		List_1_t533 * L_22 = V_3;
		List_1_t73 * L_23 = (__this->___FriendFilterGroupNames_14);
		int32_t L_24 = V_4;
		NullCheck(L_23);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_23, L_24);
		List_1_t73 * L_26 = (__this->___FriendFilterGroupIDs_15);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		String_t* L_28 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_26, L_27);
		CharU5BU5D_t555* L_29 = ((CharU5BU5D_t555*)SZArrayNew(CharU5BU5D_t555_il2cpp_TypeInfo_var, 1));
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_29, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_28);
		StringU5BU5D_t45* L_30 = String_Split_m2583(L_28, L_29, /*hidden argument*/NULL);
		List_1_t73 * L_31 = Enumerable_ToList_TisString_t_m2577(NULL /*static, unused*/, (Object_t*)(Object_t*)L_30, /*hidden argument*/Enumerable_ToList_TisString_t_m2577_MethodInfo_var);
		FBAppRequestsFilterGroup_t341 * L_32 = (FBAppRequestsFilterGroup_t341 *)il2cpp_codegen_object_new (FBAppRequestsFilterGroup_t341_il2cpp_TypeInfo_var);
		FBAppRequestsFilterGroup__ctor_m1538(L_32, L_25, L_31, /*hidden argument*/NULL);
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
		List_1_t533 * L_37 = V_3;
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
		List_1_t533 * L_39 = V_3;
		G_B15_0 = L_39;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_011a;
	}

IL_0119:
	{
		G_B15_0 = ((List_1_t533 *)(NULL));
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_011a:
	{
		StringU5BU5D_t45* L_40 = V_2;
		Nullable_1_t539  L_41 = V_0;
		String_t* L_42 = (__this->___FriendSelectorData_17);
		String_t* L_43 = (__this->___FriendSelectorTitle_10);
		IntPtr_t L_44 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_45 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_45, __this, L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_AppRequest_m1527(NULL /*static, unused*/, G_B15_2, (StringU5BU5D_t45*)(StringU5BU5D_t45*)G_B15_1, G_B15_0, L_40, L_41, L_42, L_43, L_45, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppRequestAsDirectRequest()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t556_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t555_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t539_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppRequestAsDirectRequest_m289 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		CharU5BU5D_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		Nullable_1_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t539  V_0 = {0};
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
		ArgumentException_t556 * L_3 = (ArgumentException_t556 *)il2cpp_codegen_object_new (ArgumentException_t556_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2585(L_3, (String_t*) &_stringLiteral74, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		String_t* L_4 = (__this->___DirectRequestMessage_21);
		String_t* L_5 = (__this->___DirectRequestTo_22);
		CharU5BU5D_t555* L_6 = ((CharU5BU5D_t555*)SZArrayNew(CharU5BU5D_t555_il2cpp_TypeInfo_var, 1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_5);
		StringU5BU5D_t45* L_7 = String_Split_m2583(L_5, L_6, /*hidden argument*/NULL);
		Initobj (Nullable_1_t539_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t539  L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = (__this->___DirectRequestTitle_20);
		IntPtr_t L_11 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_12 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_12, __this, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_AppRequest_m1527(NULL /*static, unused*/, L_4, L_7, (List_1_t533 *)NULL, (StringU5BU5D_t45*)(StringU5BU5D_t45*)NULL, L_8, L_9, L_10, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBFeed()
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBFeed_m290 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t74 * V_0 = {0};
	{
		V_0 = (Dictionary_2_t74 *)NULL;
		bool L_0 = (__this->___IncludeFeedProperties_33);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t74 * L_1 = (__this->___FeedProperties_34);
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
		Dictionary_2_t74 * L_12 = V_0;
		IntPtr_t L_13 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_14 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_14, __this, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_Feed_m1528(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBPay()
extern TypeInfo* Nullable_1_t539_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_CallFBPay_m291 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t539  V_0 = {0};
	Nullable_1_t539  V_1 = {0};
	{
		String_t* L_0 = (__this->___PayProduct_35);
		Initobj (Nullable_1_t539_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t539  L_1 = V_0;
		Initobj (Nullable_1_t539_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t539  L_2 = V_1;
		Canvas_Pay_m1506(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral76, 1, L_1, L_2, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (FacebookDelegate_t350 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBAPI()
extern TypeInfo* HttpMethod_t365_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBAPI_m292 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___ApiQuery_36);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t365_il2cpp_TypeInfo_var);
		HttpMethod_t365 * L_1 = HttpMethod_get_GET_m1747(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_3 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_API_m1529(NULL /*static, unused*/, L_0, L_1, L_3, (Dictionary_2_t80 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallFBGetDeepLink()
extern TypeInfo* FacebookDelegate_t350_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern const MethodInfo* ConsoleBase_Callback_m260_MethodInfo_var;
extern "C" void InteractiveConsole_CallFBGetDeepLink_m293 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookDelegate_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		ConsoleBase_Callback_m260_MethodInfo_var = il2cpp_codegen_method_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ConsoleBase_Callback_m260_MethodInfo_var };
		FacebookDelegate_t350 * L_1 = (FacebookDelegate_t350 *)il2cpp_codegen_object_new (FacebookDelegate_t350_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m2520(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		FB_GetDeepLink_m1533(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::CallAppEventLogEvent()
extern TypeInfo* Nullable_1_t540_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t244_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t213_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2586_MethodInfo_var;
extern "C" void InteractiveConsole_CallAppEventLogEvent_m294 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Dictionary_2_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2__ctor_m2586_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t540  V_0 = {0};
	Dictionary_2_t244 * V_1 = {0};
	{
		Initobj (Nullable_1_t540_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t540  L_0 = V_0;
		Dictionary_2_t244 * L_1 = (Dictionary_2_t244 *)il2cpp_codegen_object_new (Dictionary_2_t244_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2586(L_1, /*hidden argument*/Dictionary_2__ctor_m2586_MethodInfo_var);
		V_1 = L_1;
		Dictionary_2_t244 * L_2 = V_1;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_2, (String_t*) &_stringLiteral78, (String_t*) &_stringLiteral79);
		Dictionary_2_t244 * L_3 = V_1;
		AppEvents_LogEvent_m1503(NULL /*static, unused*/, (String_t*) &_stringLiteral77, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		String_t* L_4 = FB_get_AppId_m1514(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m222(NULL /*static, unused*/, (String_t*) &_stringLiteral80, L_4, (String_t*) &_stringLiteral81, /*hidden argument*/NULL);
		FBResult_t213 * L_6 = (FBResult_t213 *)il2cpp_codegen_object_new (FBResult_t213_il2cpp_TypeInfo_var);
		FBResult__ctor_m1554(L_6, L_5, (String_t*)NULL, /*hidden argument*/NULL);
		ConsoleBase_Callback_m260(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractiveConsole::Awake()
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_Awake_m295 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConsoleBase_Awake_m255(__this, /*hidden argument*/NULL);
		Dictionary_2_t74 * L_0 = (__this->___FeedProperties_34);
		StringU5BU5D_t45* L_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral83);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral83;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, StringU5BU5D_t45* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(!0,!1) */, L_0, (String_t*) &_stringLiteral82, L_1);
		Dictionary_2_t74 * L_2 = (__this->___FeedProperties_34);
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
extern TypeInfo* GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_FriendFilterArea_m296 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayout_Label_m2542(NULL /*static, unused*/, (String_t*) &_stringLiteral87, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		int32_t L_0 = (__this->___FriendFilterSelection_13);
		StringU5BU5D_t45* L_1 = (__this->___FriendFilterTypes_12);
		GUILayoutOptionU5BU5D_t545* L_2 = ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 1));
		int32_t L_3 = (((ConsoleBase_t66 *)__this)->___buttonHeight_7);
		GUILayoutOption_t546 * L_4 = GUILayout_MinHeight_m2538(NULL /*static, unused*/, (((float)L_3)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_2, 0)) = (GUILayoutOption_t546 *)L_4;
		int32_t L_5 = GUILayout_SelectionGrid_m2587(NULL /*static, unused*/, L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		__this->___FriendFilterSelection_13 = L_5;
		return;
	}
}
// System.Void InteractiveConsole::OnGUI()
extern TypeInfo* FB_t338_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t549_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var;
extern "C" void InteractiveConsole_OnGUI_m297 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		GUI_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
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
		ConsoleBase_AddCommonHeader_m262(__this, /*hidden argument*/NULL);
		bool L_0 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral88, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InteractiveConsole_CallFBActivateApp_m287(__this, /*hidden argument*/NULL);
		((ConsoleBase_t66 *)__this)->___status_2 = (String_t*) &_stringLiteral89;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t338_il2cpp_TypeInfo_var);
		bool L_1 = FB_get_IsLoggedIn_m1518(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_2 = &(__this->___FriendSelectorTitle_10);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral90, L_2, /*hidden argument*/NULL);
		String_t** L_3 = &(__this->___FriendSelectorMessage_11);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral91, L_3, /*hidden argument*/NULL);
		String_t** L_4 = &(__this->___FriendSelectorExcludeIds_18);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral92, L_4, /*hidden argument*/NULL);
		InteractiveConsole_FriendFilterArea_m296(__this, /*hidden argument*/NULL);
		String_t** L_5 = &(__this->___FriendSelectorMax_19);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral93, L_5, /*hidden argument*/NULL);
		String_t** L_6 = &(__this->___FriendSelectorData_17);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral94, L_6, /*hidden argument*/NULL);
		bool L_7 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral95, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00ce;
		}
	}

IL_00a6:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallAppRequestAsFriendSelector_m288(__this, /*hidden argument*/NULL);
		((ConsoleBase_t66 *)__this)->___status_2 = (String_t*) &_stringLiteral96;
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
		((ConsoleBase_t66 *)__this)->___status_2 = L_9;
		goto IL_00ce;
	} // end catch (depth: 1)

IL_00ce:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_10 = &(__this->___DirectRequestTitle_20);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral90, L_10, /*hidden argument*/NULL);
		String_t** L_11 = &(__this->___DirectRequestMessage_21);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral91, L_11, /*hidden argument*/NULL);
		String_t** L_12 = &(__this->___DirectRequestTo_22);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral97, L_12, /*hidden argument*/NULL);
		bool L_13 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral98, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0143;
		}
	}

IL_011b:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallAppRequestAsDirectRequest_m289(__this, /*hidden argument*/NULL);
		((ConsoleBase_t66 *)__this)->___status_2 = (String_t*) &_stringLiteral99;
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
		((ConsoleBase_t66 *)__this)->___status_2 = L_15;
		goto IL_0143;
	} // end catch (depth: 1)

IL_0143:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_16 = &(__this->___FeedToId_23);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral100, L_16, /*hidden argument*/NULL);
		String_t** L_17 = &(__this->___FeedLink_24);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral101, L_17, /*hidden argument*/NULL);
		String_t** L_18 = &(__this->___FeedLinkName_25);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral102, L_18, /*hidden argument*/NULL);
		String_t** L_19 = &(__this->___FeedLinkDescription_27);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral103, L_19, /*hidden argument*/NULL);
		String_t** L_20 = &(__this->___FeedLinkCaption_26);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral104, L_20, /*hidden argument*/NULL);
		String_t** L_21 = &(__this->___FeedPicture_28);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral105, L_21, /*hidden argument*/NULL);
		String_t** L_22 = &(__this->___FeedMediaSource_29);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral106, L_22, /*hidden argument*/NULL);
		String_t** L_23 = &(__this->___FeedActionName_30);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral107, L_23, /*hidden argument*/NULL);
		String_t** L_24 = &(__this->___FeedActionLink_31);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral108, L_24, /*hidden argument*/NULL);
		String_t** L_25 = &(__this->___FeedReference_32);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral109, L_25, /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m2541(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t545* L_26 = ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t546 * L_27 = GUILayout_Width_m2588(NULL /*static, unused*/, (150.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_27);
		*((GUILayoutOption_t546 **)(GUILayoutOption_t546 **)SZArrayLdElema(L_26, 0)) = (GUILayoutOption_t546 *)L_27;
		GUILayout_Label_m2542(NULL /*static, unused*/, (String_t*) &_stringLiteral110, L_26, /*hidden argument*/NULL);
		bool L_28 = (__this->___IncludeFeedProperties_33);
		bool L_29 = GUILayout_Toggle_m2589(NULL /*static, unused*/, L_28, (String_t*) &_stringLiteral111, ((GUILayoutOptionU5BU5D_t545*)SZArrayNew(GUILayoutOptionU5BU5D_t545_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___IncludeFeedProperties_33 = L_29;
		GUILayout_EndHorizontal_m2544(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_30 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral112, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0278;
		}
	}

IL_0250:
	try
	{ // begin try (depth: 1)
		InteractiveConsole_CallFBFeed_m290(__this, /*hidden argument*/NULL);
		((ConsoleBase_t66 *)__this)->___status_2 = (String_t*) &_stringLiteral113;
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
		((ConsoleBase_t66 *)__this)->___status_2 = L_32;
		goto IL_0278;
	} // end catch (depth: 1)

IL_0278:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		String_t** L_33 = &(__this->___ApiQuery_36);
		ConsoleBase_LabelAndTextField_m257(__this, (String_t*) &_stringLiteral114, L_33, /*hidden argument*/NULL);
		bool L_34 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral115, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_02b4;
		}
	}
	{
		((ConsoleBase_t66 *)__this)->___status_2 = (String_t*) &_stringLiteral116;
		InteractiveConsole_CallFBAPI_m292(__this, /*hidden argument*/NULL);
	}

IL_02b4:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		bool L_35 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral117, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_02e6;
		}
	}
	{
		((ConsoleBase_t66 *)__this)->___status_2 = (String_t*) &_stringLiteral118;
		Object_t * L_36 = InteractiveConsole_TakeScreenshot_m298(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2590(__this, L_36, /*hidden argument*/NULL);
	}

IL_02e6:
	{
		bool L_37 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral119, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_02fc;
		}
	}
	{
		InteractiveConsole_CallFBGetDeepLink_m293(__this, /*hidden argument*/NULL);
	}

IL_02fc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2564(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		bool L_38 = ConsoleBase_Button_m256(__this, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0323;
		}
	}
	{
		((ConsoleBase_t66 *)__this)->___status_2 = (String_t*) &_stringLiteral121;
		InteractiveConsole_CallAppEventLogEvent_m294(__this, /*hidden argument*/NULL);
	}

IL_0323:
	{
		GUILayout_Space_m2556(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_EndVertical_m2567(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndScrollView_m2568(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_39 = ConsoleBase_IsHorizontalLayout_m258(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0347;
		}
	}
	{
		GUILayout_EndVertical_m2567(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0347:
	{
		ConsoleBase_AddCommonFooter_m261(__this, /*hidden argument*/NULL);
		bool L_40 = ConsoleBase_IsHorizontalLayout_m258(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_035d;
		}
	}
	{
		GUILayout_EndHorizontal_m2544(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_035d:
	{
		return;
	}
}
// System.Collections.IEnumerator InteractiveConsole::TakeScreenshot()
extern TypeInfo* U3CTakeScreenshotU3Ec__Iterator0_t72_il2cpp_TypeInfo_var;
extern "C" Object_t * InteractiveConsole_TakeScreenshot_m298 (InteractiveConsole_t71 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTakeScreenshotU3Ec__Iterator0_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	U3CTakeScreenshotU3Ec__Iterator0_t72 * V_0 = {0};
	{
		U3CTakeScreenshotU3Ec__Iterator0_t72 * L_0 = (U3CTakeScreenshotU3Ec__Iterator0_t72 *)il2cpp_codegen_object_new (U3CTakeScreenshotU3Ec__Iterator0_t72_il2cpp_TypeInfo_var);
		U3CTakeScreenshotU3Ec__Iterator0__ctor_m280(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTakeScreenshotU3Ec__Iterator0_t72 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_7 = __this;
		U3CTakeScreenshotU3Ec__Iterator0_t72 * L_2 = V_0;
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
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t79_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2566_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2591_MethodInfo_var;
extern "C" void AN_ActivityTemplate__ctor_m299 (AN_ActivityTemplate_t75 * __this, bool ___isLauncher, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Dictionary_2_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		Dictionary_2__ctor_m2566_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Dictionary_2__ctor_m2591_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->____name_5 = L_0;
		AN_BaseTemplate__ctor_m316(__this, /*hidden argument*/NULL);
		bool L_1 = ___isLauncher;
		__this->____isLauncher_4 = L_1;
		String_t* L_2 = ___name;
		__this->____name_5 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, __this);
		__this->____id_3 = L_3;
		Dictionary_2_t80 * L_4 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2566(L_4, /*hidden argument*/Dictionary_2__ctor_m2566_MethodInfo_var);
		((AN_BaseTemplate_t76 *)__this)->____values_1 = L_4;
		Dictionary_2_t79 * L_5 = (Dictionary_2_t79 *)il2cpp_codegen_object_new (Dictionary_2_t79_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2591(L_5, /*hidden argument*/Dictionary_2__ctor_m2591_MethodInfo_var);
		((AN_BaseTemplate_t76 *)__this)->____properties_0 = L_5;
		String_t* L_6 = ___name;
		AN_BaseTemplate_SetValue_m327(__this, (String_t*) &_stringLiteral126, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ActivityTemplate::SetName(System.String)
extern "C" void AN_ActivityTemplate_SetName_m300 (AN_ActivityTemplate_t75 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->____name_5 = L_0;
		String_t* L_1 = ___name;
		AN_BaseTemplate_SetValue_m327(__this, (String_t*) &_stringLiteral126, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ActivityTemplate::SetAsLauncher(System.Boolean)
extern "C" void AN_ActivityTemplate_SetAsLauncher_m301 (AN_ActivityTemplate_t75 * __this, bool ___isLauncher, const MethodInfo* method)
{
	{
		bool L_0 = ___isLauncher;
		__this->____isLauncher_4 = L_0;
		return;
	}
}
// AN_PropertyTemplate AN_ActivityTemplate::GetLauncherPropertyTemplate()
extern TypeInfo* AN_PropertyTemplate_t84_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t84 * AN_ActivityTemplate_GetLauncherPropertyTemplate_m302 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	AN_PropertyTemplate_t84 * V_1 = {0};
	{
		AN_PropertyTemplate_t84 * L_0 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_0, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		V_0 = L_0;
		AN_PropertyTemplate_t84 * L_1 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_1, (String_t*) &_stringLiteral128, /*hidden argument*/NULL);
		V_1 = L_1;
		AN_PropertyTemplate_t84 * L_2 = V_1;
		NullCheck(L_2);
		AN_BaseTemplate_SetValue_m327(L_2, (String_t*) &_stringLiteral126, (String_t*) &_stringLiteral129, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_3 = V_0;
		AN_PropertyTemplate_t84 * L_4 = V_1;
		NullCheck(L_3);
		AN_BaseTemplate_AddProperty_m326(L_3, (String_t*) &_stringLiteral128, L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_5 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_5, (String_t*) &_stringLiteral130, /*hidden argument*/NULL);
		V_1 = L_5;
		AN_PropertyTemplate_t84 * L_6 = V_1;
		NullCheck(L_6);
		AN_BaseTemplate_SetValue_m327(L_6, (String_t*) &_stringLiteral126, (String_t*) &_stringLiteral131, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_7 = V_0;
		AN_PropertyTemplate_t84 * L_8 = V_1;
		NullCheck(L_7);
		AN_BaseTemplate_AddProperty_m326(L_7, (String_t*) &_stringLiteral130, L_8, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean AN_ActivityTemplate::IsLauncherProperty(AN_PropertyTemplate)
extern TypeInfo* Enumerator_t557_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2592_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2593_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2594_MethodInfo_var;
extern "C" bool AN_ActivityTemplate_IsLauncherProperty_m303 (AN_ActivityTemplate_t75 * __this, AN_PropertyTemplate_t84 * ___property, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m2593_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m2594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	Enumerator_t557  V_1 = {0};
	bool V_2 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_PropertyTemplate_t84 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = AN_PropertyTemplate_get_Tag_m346(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_1, (String_t*) &_stringLiteral127);
		if (!L_2)
		{
			goto IL_0090;
		}
	}
	{
		AN_PropertyTemplate_t84 * L_3 = ___property;
		NullCheck(L_3);
		Dictionary_2_t79 * L_4 = AN_BaseTemplate_get_Properties_m334(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_t81 * L_5 = (List_1_t81 *)VirtFuncInvoker1< List_1_t81 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral130);
		NullCheck(L_5);
		Enumerator_t557  L_6 = List_1_GetEnumerator_m2592(L_5, /*hidden argument*/List_1_GetEnumerator_m2592_MethodInfo_var);
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
			AN_PropertyTemplate_t84 * L_7 = Enumerator_get_Current_m2593((&V_1), /*hidden argument*/Enumerator_get_Current_m2593_MethodInfo_var);
			V_0 = L_7;
			AN_PropertyTemplate_t84 * L_8 = V_0;
			NullCheck(L_8);
			Dictionary_2_t80 * L_9 = AN_BaseTemplate_get_Values_m333(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			bool L_10 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_9, (String_t*) &_stringLiteral126);
			if (!L_10)
			{
				goto IL_0073;
			}
		}

IL_004d:
		{
			AN_PropertyTemplate_t84 * L_11 = V_0;
			NullCheck(L_11);
			Dictionary_2_t80 * L_12 = AN_BaseTemplate_get_Values_m333(L_11, /*hidden argument*/NULL);
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
			bool L_15 = Enumerator_MoveNext_m2594((&V_1), /*hidden argument*/Enumerator_MoveNext_m2594_MethodInfo_var);
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
		Enumerator_t557  L_16 = V_1;
		Enumerator_t557  L_17 = L_16;
		Object_t * L_18 = Box(Enumerator_t557_il2cpp_TypeInfo_var, &L_17);
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
extern "C" void AN_ActivityTemplate_ToXmlElement_m304 (AN_ActivityTemplate_t75 * __this, XmlDocument_t527 * ___doc, XmlElement_t528 * ___parent, const MethodInfo* method)
{
	AN_PropertyTemplate_t84 * V_0 = {0};
	{
		XmlDocument_t527 * L_0 = ___doc;
		XmlElement_t528 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m332(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		V_0 = (AN_PropertyTemplate_t84 *)NULL;
		bool L_2 = (__this->____isLauncher_4);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		AN_PropertyTemplate_t84 * L_3 = AN_ActivityTemplate_GetLauncherPropertyTemplate_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		AN_PropertyTemplate_t84 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = AN_PropertyTemplate_get_Tag_m346(L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_6 = V_0;
		AN_BaseTemplate_AddProperty_m326(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		XmlDocument_t527 * L_7 = ___doc;
		XmlElement_t528 * L_8 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m331(__this, L_7, L_8, __this, /*hidden argument*/NULL);
		bool L_9 = (__this->____isLauncher_4);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_t79 * L_10 = (((AN_BaseTemplate_t76 *)__this)->____properties_0);
		NullCheck(L_10);
		List_1_t81 * L_11 = (List_1_t81 *)VirtFuncInvoker1< List_1_t81 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral127);
		AN_PropertyTemplate_t84 * L_12 = V_0;
		NullCheck(L_11);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t84 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_11, L_12);
	}

IL_0054:
	{
		return;
	}
}
// System.Boolean AN_ActivityTemplate::get_IsLauncher()
extern "C" bool AN_ActivityTemplate_get_IsLauncher_m305 (AN_ActivityTemplate_t75 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isLauncher_4);
		return L_0;
	}
}
// System.String AN_ActivityTemplate::get_Name()
extern "C" String_t* AN_ActivityTemplate_get_Name_m306 (AN_ActivityTemplate_t75 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_5);
		return L_0;
	}
}
// System.Int32 AN_ActivityTemplate::get_Id()
extern "C" int32_t AN_ActivityTemplate_get_Id_m307 (AN_ActivityTemplate_t75 * __this, const MethodInfo* method)
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
extern TypeInfo* Dictionary_2_t77_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2595_MethodInfo_var;
extern "C" void AN_ApplicationTemplate__ctor_m308 (AN_ApplicationTemplate_t78 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Dictionary_2__ctor_m2595_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BaseTemplate__ctor_m316(__this, /*hidden argument*/NULL);
		Dictionary_2_t77 * L_0 = (Dictionary_2_t77 *)il2cpp_codegen_object_new (Dictionary_2_t77_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2595(L_0, /*hidden argument*/Dictionary_2__ctor_m2595_MethodInfo_var);
		__this->____activities_2 = L_0;
		return;
	}
}
// System.Void AN_ApplicationTemplate::AddActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_AddActivity_m309 (AN_ApplicationTemplate_t78 * __this, AN_ActivityTemplate_t75 * ___activity, const MethodInfo* method)
{
	{
		Dictionary_2_t77 * L_0 = (__this->____activities_2);
		AN_ActivityTemplate_t75 * L_1 = ___activity;
		NullCheck(L_1);
		int32_t L_2 = AN_ActivityTemplate_get_Id_m307(L_1, /*hidden argument*/NULL);
		AN_ActivityTemplate_t75 * L_3 = ___activity;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, AN_ActivityTemplate_t75 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::Add(!0,!1) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void AN_ApplicationTemplate::RemoveActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_RemoveActivity_m310 (AN_ApplicationTemplate_t78 * __this, AN_ActivityTemplate_t75 * ___activity, const MethodInfo* method)
{
	{
		Dictionary_2_t77 * L_0 = (__this->____activities_2);
		AN_ActivityTemplate_t75 * L_1 = ___activity;
		NullCheck(L_1);
		int32_t L_2 = AN_ActivityTemplate_get_Id_m307(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::Remove(!0) */, L_0, L_2);
		return;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetOrCreateActivityWithName(System.String)
extern TypeInfo* AN_ActivityTemplate_t75_il2cpp_TypeInfo_var;
extern "C" AN_ActivityTemplate_t75 * AN_ApplicationTemplate_GetOrCreateActivityWithName_m311 (AN_ApplicationTemplate_t78 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_ActivityTemplate_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		s_Il2CppMethodIntialized = true;
	}
	AN_ActivityTemplate_t75 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		AN_ActivityTemplate_t75 * L_1 = AN_ApplicationTemplate_GetActivityWithName_m312(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_ActivityTemplate_t75 * L_2 = V_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___name;
		AN_ActivityTemplate_t75 * L_4 = (AN_ActivityTemplate_t75 *)il2cpp_codegen_object_new (AN_ActivityTemplate_t75_il2cpp_TypeInfo_var);
		AN_ActivityTemplate__ctor_m299(L_4, 0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AN_ActivityTemplate_t75 * L_5 = V_0;
		AN_ApplicationTemplate_AddActivity_m309(__this, L_5, /*hidden argument*/NULL);
	}

IL_001d:
	{
		AN_ActivityTemplate_t75 * L_6 = V_0;
		return L_6;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetActivityWithName(System.String)
extern TypeInfo* Enumerator_t559_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2596_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2597_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2598_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2599_MethodInfo_var;
extern "C" AN_ActivityTemplate_t75 * AN_ApplicationTemplate_GetActivityWithName_m312 (AN_ApplicationTemplate_t78 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m2596_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		Enumerator_get_Current_m2597_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		KeyValuePair_2_get_Value_m2598_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m2599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t558  V_0 = {0};
	Enumerator_t559  V_1 = {0};
	AN_ActivityTemplate_t75 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t77 * L_0 = AN_ApplicationTemplate_get_Activities_m315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t559  L_1 = Dictionary_2_GetEnumerator_m2596(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m2596_MethodInfo_var);
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
			KeyValuePair_2_t558  L_2 = Enumerator_get_Current_m2597((&V_1), /*hidden argument*/Enumerator_get_Current_m2597_MethodInfo_var);
			V_0 = L_2;
			AN_ActivityTemplate_t75 * L_3 = KeyValuePair_2_get_Value_m2598((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m2598_MethodInfo_var);
			NullCheck(L_3);
			String_t* L_4 = AN_ActivityTemplate_get_Name_m306(L_3, /*hidden argument*/NULL);
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
			AN_ActivityTemplate_t75 * L_7 = KeyValuePair_2_get_Value_m2598((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m2598_MethodInfo_var);
			V_2 = L_7;
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}

IL_003d:
		{
			bool L_8 = Enumerator_MoveNext_m2599((&V_1), /*hidden argument*/Enumerator_MoveNext_m2599_MethodInfo_var);
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
		Enumerator_t559  L_9 = V_1;
		Enumerator_t559  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t559_il2cpp_TypeInfo_var, &L_10);
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
		return (AN_ActivityTemplate_t75 *)NULL;
	}

IL_005c:
	{
		AN_ActivityTemplate_t75 * L_12 = V_2;
		return L_12;
	}
}
// AN_ActivityTemplate AN_ApplicationTemplate::GetLauncherActivity()
extern TypeInfo* Enumerator_t559_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m2596_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2597_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2598_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2599_MethodInfo_var;
extern "C" AN_ActivityTemplate_t75 * AN_ApplicationTemplate_GetLauncherActivity_m313 (AN_ApplicationTemplate_t78 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m2596_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		Enumerator_get_Current_m2597_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		KeyValuePair_2_get_Value_m2598_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		Enumerator_MoveNext_m2599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t558  V_0 = {0};
	Enumerator_t559  V_1 = {0};
	AN_ActivityTemplate_t75 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t77 * L_0 = AN_ApplicationTemplate_get_Activities_m315(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t559  L_1 = Dictionary_2_GetEnumerator_m2596(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m2596_MethodInfo_var);
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
			KeyValuePair_2_t558  L_2 = Enumerator_get_Current_m2597((&V_1), /*hidden argument*/Enumerator_get_Current_m2597_MethodInfo_var);
			V_0 = L_2;
			AN_ActivityTemplate_t75 * L_3 = KeyValuePair_2_get_Value_m2598((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m2598_MethodInfo_var);
			NullCheck(L_3);
			bool L_4 = AN_ActivityTemplate_get_IsLauncher_m305(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_002a:
		{
			AN_ActivityTemplate_t75 * L_5 = KeyValuePair_2_get_Value_m2598((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m2598_MethodInfo_var);
			V_2 = L_5;
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}

IL_0037:
		{
			bool L_6 = Enumerator_MoveNext_m2599((&V_1), /*hidden argument*/Enumerator_MoveNext_m2599_MethodInfo_var);
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
		Enumerator_t559  L_7 = V_1;
		Enumerator_t559  L_8 = L_7;
		Object_t * L_9 = Box(Enumerator_t559_il2cpp_TypeInfo_var, &L_8);
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
		return (AN_ActivityTemplate_t75 *)NULL;
	}

IL_0056:
	{
		AN_ActivityTemplate_t75 * L_10 = V_2;
		return L_10;
	}
}
// System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern TypeInfo* Enumerator_t560_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m2600_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m2601_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2602_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2604_MethodInfo_var;
extern "C" void AN_ApplicationTemplate_ToXmlElement_m314 (AN_ApplicationTemplate_t78 * __this, XmlDocument_t527 * ___doc, XmlElement_t528 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_get_Keys_m2600_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		KeyCollection_GetEnumerator_m2601_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		Enumerator_get_Current_m2602_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		Enumerator_MoveNext_m2604_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t560  V_1 = {0};
	XmlElement_t528 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t527 * L_0 = ___doc;
		XmlElement_t528 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m332(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t527 * L_2 = ___doc;
		XmlElement_t528 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m331(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		Dictionary_2_t77 * L_4 = (__this->____activities_2);
		NullCheck(L_4);
		KeyCollection_t561 * L_5 = Dictionary_2_get_Keys_m2600(L_4, /*hidden argument*/Dictionary_2_get_Keys_m2600_MethodInfo_var);
		NullCheck(L_5);
		Enumerator_t560  L_6 = KeyCollection_GetEnumerator_m2601(L_5, /*hidden argument*/KeyCollection_GetEnumerator_m2601_MethodInfo_var);
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
			int32_t L_7 = Enumerator_get_Current_m2602((&V_1), /*hidden argument*/Enumerator_get_Current_m2602_MethodInfo_var);
			V_0 = L_7;
			XmlDocument_t527 * L_8 = ___doc;
			NullCheck(L_8);
			XmlElement_t528 * L_9 = XmlDocument_CreateElement_m2603(L_8, (String_t*) &_stringLiteral132, /*hidden argument*/NULL);
			V_2 = L_9;
			Dictionary_2_t77 * L_10 = (__this->____activities_2);
			int32_t L_11 = V_0;
			NullCheck(L_10);
			AN_ActivityTemplate_t75 * L_12 = (AN_ActivityTemplate_t75 *)VirtFuncInvoker1< AN_ActivityTemplate_t75 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>::get_Item(!0) */, L_10, L_11);
			XmlDocument_t527 * L_13 = ___doc;
			XmlElement_t528 * L_14 = V_2;
			NullCheck(L_12);
			VirtActionInvoker2< XmlDocument_t527 *, XmlElement_t528 * >::Invoke(4 /* System.Void AN_ActivityTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_12, L_13, L_14);
			XmlElement_t528 * L_15 = ___parent;
			XmlElement_t528 * L_16 = V_2;
			NullCheck(L_15);
			VirtFuncInvoker1< XmlNode_t562 *, XmlNode_t562 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_15, L_16);
		}

IL_0057:
		{
			bool L_17 = Enumerator_MoveNext_m2604((&V_1), /*hidden argument*/Enumerator_MoveNext_m2604_MethodInfo_var);
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
		Enumerator_t560  L_18 = V_1;
		Enumerator_t560  L_19 = L_18;
		Object_t * L_20 = Box(Enumerator_t560_il2cpp_TypeInfo_var, &L_19);
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
extern "C" Dictionary_2_t77 * AN_ApplicationTemplate_get_Activities_m315 (AN_ApplicationTemplate_t78 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t77 * L_0 = (__this->____activities_2);
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
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t79_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2566_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2591_MethodInfo_var;
extern "C" void AN_BaseTemplate__ctor_m316 (AN_BaseTemplate_t76 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Dictionary_2_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		Dictionary_2__ctor_m2566_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Dictionary_2__ctor_m2591_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_0 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2566(L_0, /*hidden argument*/Dictionary_2__ctor_m2566_MethodInfo_var);
		__this->____values_1 = L_0;
		Dictionary_2_t79 * L_1 = (Dictionary_2_t79 *)il2cpp_codegen_object_new (Dictionary_2_t79_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2591(L_1, /*hidden argument*/Dictionary_2__ctor_m2591_MethodInfo_var);
		__this->____properties_0 = L_1;
		return;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreateIntentFilterWithName(System.String)
extern TypeInfo* AN_PropertyTemplate_t84_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t84 * AN_BaseTemplate_GetOrCreateIntentFilterWithName_m317 (AN_BaseTemplate_t76 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	AN_PropertyTemplate_t84 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		AN_PropertyTemplate_t84 * L_1 = AN_BaseTemplate_GetIntentFilterWithName_m318(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_PropertyTemplate_t84 * L_2 = V_0;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		AN_PropertyTemplate_t84 * L_3 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_3, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		V_0 = L_3;
		AN_PropertyTemplate_t84 * L_4 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_4, (String_t*) &_stringLiteral128, /*hidden argument*/NULL);
		V_1 = L_4;
		AN_PropertyTemplate_t84 * L_5 = V_1;
		String_t* L_6 = ___name;
		NullCheck(L_5);
		AN_BaseTemplate_SetValue_m327(L_5, (String_t*) &_stringLiteral126, L_6, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_7 = V_0;
		AN_PropertyTemplate_t84 * L_8 = V_1;
		NullCheck(L_7);
		AN_BaseTemplate_AddProperty_m325(L_7, L_8, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_9 = V_0;
		AN_BaseTemplate_AddProperty_m325(__this, L_9, /*hidden argument*/NULL);
	}

IL_003e:
	{
		AN_PropertyTemplate_t84 * L_10 = V_0;
		return L_10;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetIntentFilterWithName(System.String)
extern TypeInfo* Enumerator_t557_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2592_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2593_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2594_MethodInfo_var;
extern "C" AN_PropertyTemplate_t84 * AN_BaseTemplate_GetIntentFilterWithName_m318 (AN_BaseTemplate_t76 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m2593_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m2594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	List_1_t81 * V_1 = {0};
	AN_PropertyTemplate_t84 * V_2 = {0};
	Enumerator_t557  V_3 = {0};
	String_t* V_4 = {0};
	AN_PropertyTemplate_t84 * V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*) &_stringLiteral127;
		String_t* L_0 = V_0;
		List_1_t81 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m324(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		List_1_t81 * L_2 = V_1;
		NullCheck(L_2);
		Enumerator_t557  L_3 = List_1_GetEnumerator_m2592(L_2, /*hidden argument*/List_1_GetEnumerator_m2592_MethodInfo_var);
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
			AN_PropertyTemplate_t84 * L_4 = Enumerator_get_Current_m2593((&V_3), /*hidden argument*/Enumerator_get_Current_m2593_MethodInfo_var);
			V_2 = L_4;
			AN_PropertyTemplate_t84 * L_5 = V_2;
			String_t* L_6 = AN_BaseTemplate_GetIntentFilterName_m319(__this, L_5, /*hidden argument*/NULL);
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
			AN_PropertyTemplate_t84 * L_10 = V_2;
			V_5 = L_10;
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}

IL_0040:
		{
			bool L_11 = Enumerator_MoveNext_m2594((&V_3), /*hidden argument*/Enumerator_MoveNext_m2594_MethodInfo_var);
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
		Enumerator_t557  L_12 = V_3;
		Enumerator_t557  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t557_il2cpp_TypeInfo_var, &L_13);
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
		return (AN_PropertyTemplate_t84 *)NULL;
	}

IL_005f:
	{
		AN_PropertyTemplate_t84 * L_15 = V_5;
		return L_15;
	}
}
// System.String AN_BaseTemplate::GetIntentFilterName(AN_PropertyTemplate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AN_BaseTemplate_GetIntentFilterName_m319 (AN_BaseTemplate_t76 * __this, AN_PropertyTemplate_t84 * ___intent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t81 * V_0 = {0};
	{
		AN_PropertyTemplate_t84 * L_0 = ___intent;
		NullCheck(L_0);
		List_1_t81 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m324(L_0, (String_t*) &_stringLiteral128, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t81 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_t81 * L_4 = V_0;
		NullCheck(L_4);
		AN_PropertyTemplate_t84 * L_5 = (AN_PropertyTemplate_t84 *)VirtFuncInvoker1< AN_PropertyTemplate_t84 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Item(System.Int32) */, L_4, 0);
		NullCheck(L_5);
		String_t* L_6 = AN_BaseTemplate_GetValue_m328(L_5, (String_t*) &_stringLiteral126, /*hidden argument*/NULL);
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
extern TypeInfo* AN_PropertyTemplate_t84_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t84 * AN_BaseTemplate_GetOrCreatePropertyWithName_m320 (AN_BaseTemplate_t76 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		String_t* L_1 = ___name;
		AN_PropertyTemplate_t84 * L_2 = AN_BaseTemplate_GetPropertyWithName_m321(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		AN_PropertyTemplate_t84 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___tag;
		AN_PropertyTemplate_t84 * L_5 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		AN_PropertyTemplate_t84 * L_6 = V_0;
		String_t* L_7 = ___name;
		NullCheck(L_6);
		AN_BaseTemplate_SetValue_m327(L_6, (String_t*) &_stringLiteral126, L_7, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_8 = V_0;
		AN_BaseTemplate_AddProperty_m325(__this, L_8, /*hidden argument*/NULL);
	}

IL_0029:
	{
		AN_PropertyTemplate_t84 * L_9 = V_0;
		return L_9;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithName(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t557_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2592_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2593_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2594_MethodInfo_var;
extern "C" AN_PropertyTemplate_t84 * AN_BaseTemplate_GetPropertyWithName_m321 (AN_BaseTemplate_t76 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m2593_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m2594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t81 * V_0 = {0};
	AN_PropertyTemplate_t84 * V_1 = {0};
	Enumerator_t557  V_2 = {0};
	AN_PropertyTemplate_t84 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___tag;
		List_1_t81 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m324(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t81 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t557  L_3 = List_1_GetEnumerator_m2592(L_2, /*hidden argument*/List_1_GetEnumerator_m2592_MethodInfo_var);
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
			AN_PropertyTemplate_t84 * L_4 = Enumerator_get_Current_m2593((&V_2), /*hidden argument*/Enumerator_get_Current_m2593_MethodInfo_var);
			V_1 = L_4;
			AN_PropertyTemplate_t84 * L_5 = V_1;
			NullCheck(L_5);
			Dictionary_2_t80 * L_6 = AN_BaseTemplate_get_Values_m333(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_6, (String_t*) &_stringLiteral126);
			if (!L_7)
			{
				goto IL_0053;
			}
		}

IL_0031:
		{
			AN_PropertyTemplate_t84 * L_8 = V_1;
			NullCheck(L_8);
			Dictionary_2_t80 * L_9 = AN_BaseTemplate_get_Values_m333(L_8, /*hidden argument*/NULL);
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
			AN_PropertyTemplate_t84 * L_13 = V_1;
			V_3 = L_13;
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}

IL_0053:
		{
			bool L_14 = Enumerator_MoveNext_m2594((&V_2), /*hidden argument*/Enumerator_MoveNext_m2594_MethodInfo_var);
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
		Enumerator_t557  L_15 = V_2;
		Enumerator_t557  L_16 = L_15;
		Object_t * L_17 = Box(Enumerator_t557_il2cpp_TypeInfo_var, &L_16);
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
		return (AN_PropertyTemplate_t84 *)NULL;
	}

IL_0072:
	{
		AN_PropertyTemplate_t84 * L_18 = V_3;
		return L_18;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithTag(System.String)
extern TypeInfo* AN_PropertyTemplate_t84_il2cpp_TypeInfo_var;
extern "C" AN_PropertyTemplate_t84 * AN_BaseTemplate_GetOrCreatePropertyWithTag_m322 (AN_BaseTemplate_t76 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		AN_PropertyTemplate_t84 * L_1 = AN_BaseTemplate_GetPropertyWithTag_m323(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AN_PropertyTemplate_t84 * L_2 = V_0;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = ___tag;
		AN_PropertyTemplate_t84 * L_4 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AN_PropertyTemplate_t84 * L_5 = V_0;
		AN_BaseTemplate_AddProperty_m325(__this, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		AN_PropertyTemplate_t84 * L_6 = V_0;
		return L_6;
	}
}
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithTag(System.String)
extern "C" AN_PropertyTemplate_t84 * AN_BaseTemplate_GetPropertyWithTag_m323 (AN_BaseTemplate_t76 * __this, String_t* ___tag, const MethodInfo* method)
{
	List_1_t81 * V_0 = {0};
	{
		String_t* L_0 = ___tag;
		List_1_t81 * L_1 = AN_BaseTemplate_GetPropertiesWithTag_m324(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t81 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t81 * L_4 = V_0;
		NullCheck(L_4);
		AN_PropertyTemplate_t84 * L_5 = (AN_PropertyTemplate_t84 *)VirtFuncInvoker1< AN_PropertyTemplate_t84 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<AN_PropertyTemplate>::get_Item(System.Int32) */, L_4, 0);
		return L_5;
	}

IL_001c:
	{
		return (AN_PropertyTemplate_t84 *)NULL;
	}
}
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_BaseTemplate::GetPropertiesWithTag(System.String)
extern TypeInfo* List_1_t81_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2605_MethodInfo_var;
extern "C" List_1_t81 * AN_BaseTemplate_GetPropertiesWithTag_m324 (AN_BaseTemplate_t76 * __this, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		List_1__ctor_m2605_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t79 * L_0 = AN_BaseTemplate_get_Properties_m334(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t79 * L_3 = AN_BaseTemplate_get_Properties_m334(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___tag;
		NullCheck(L_3);
		List_1_t81 * L_5 = (List_1_t81 *)VirtFuncInvoker1< List_1_t81 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		List_1_t81 * L_6 = (List_1_t81 *)il2cpp_codegen_object_new (List_1_t81_il2cpp_TypeInfo_var);
		List_1__ctor_m2605(L_6, /*hidden argument*/List_1__ctor_m2605_MethodInfo_var);
		return L_6;
	}
}
// System.Void AN_BaseTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
// System.Void AN_BaseTemplate::AddProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_AddProperty_m325 (AN_BaseTemplate_t76 * __this, AN_PropertyTemplate_t84 * ___property, const MethodInfo* method)
{
	{
		AN_PropertyTemplate_t84 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = AN_PropertyTemplate_get_Tag_m346(L_0, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_2 = ___property;
		AN_BaseTemplate_AddProperty_m326(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BaseTemplate::AddProperty(System.String,AN_PropertyTemplate)
extern TypeInfo* List_1_t81_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2605_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddProperty_m326 (AN_BaseTemplate_t76 * __this, String_t* ___tag, AN_PropertyTemplate_t84 * ___property, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		List_1__ctor_m2605_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t81 * V_0 = {0};
	{
		Dictionary_2_t79 * L_0 = (__this->____properties_0);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(!0) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		List_1_t81 * L_3 = (List_1_t81 *)il2cpp_codegen_object_new (List_1_t81_il2cpp_TypeInfo_var);
		List_1__ctor_m2605(L_3, /*hidden argument*/List_1__ctor_m2605_MethodInfo_var);
		V_0 = L_3;
		Dictionary_2_t79 * L_4 = (__this->____properties_0);
		String_t* L_5 = ___tag;
		List_1_t81 * L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, List_1_t81 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Add(!0,!1) */, L_4, L_5, L_6);
	}

IL_0024:
	{
		Dictionary_2_t79 * L_7 = (__this->____properties_0);
		String_t* L_8 = ___tag;
		NullCheck(L_7);
		List_1_t81 * L_9 = (List_1_t81 *)VirtFuncInvoker1< List_1_t81 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_7, L_8);
		AN_PropertyTemplate_t84 * L_10 = ___property;
		NullCheck(L_9);
		VirtActionInvoker1< AN_PropertyTemplate_t84 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<AN_PropertyTemplate>::Add(!0) */, L_9, L_10);
		return;
	}
}
// System.Void AN_BaseTemplate::SetValue(System.String,System.String)
extern "C" void AN_BaseTemplate_SetValue_m327 (AN_BaseTemplate_t76 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t80 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t80 * L_3 = (__this->____values_1);
		String_t* L_4 = ___key;
		String_t* L_5 = ___value;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_3, L_4, L_5);
		goto IL_0030;
	}

IL_0023:
	{
		Dictionary_2_t80 * L_6 = (__this->____values_1);
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
extern "C" String_t* AN_BaseTemplate_GetValue_m328 (AN_BaseTemplate_t76 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t80 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t80 * L_3 = (__this->____values_1);
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
extern "C" void AN_BaseTemplate_RemoveProperty_m329 (AN_BaseTemplate_t76 * __this, AN_PropertyTemplate_t84 * ___property, const MethodInfo* method)
{
	{
		Dictionary_2_t79 * L_0 = (__this->____properties_0);
		AN_PropertyTemplate_t84 * L_1 = ___property;
		NullCheck(L_1);
		String_t* L_2 = AN_PropertyTemplate_get_Tag_m346(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t81 * L_3 = (List_1_t81 *)VirtFuncInvoker1< List_1_t81 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_0, L_2);
		AN_PropertyTemplate_t84 * L_4 = ___property;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t84 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_3, L_4);
		return;
	}
}
// System.Void AN_BaseTemplate::RemoveValue(System.String)
extern "C" void AN_BaseTemplate_RemoveValue_m330 (AN_BaseTemplate_t76 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t80 * L_0 = (__this->____values_1);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_BaseTemplate::AddPropertiesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern TypeInfo* Enumerator_t557_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m2606_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m2607_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2608_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2592_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2593_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2594_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2609_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddPropertiesToXml_m331 (AN_BaseTemplate_t76 * __this, XmlDocument_t527 * ___doc, XmlElement_t528 * ___parent, AN_BaseTemplate_t76 * ___template, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Enumerator_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		Dictionary_2_get_Keys_m2606_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		KeyCollection_GetEnumerator_m2607_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		Enumerator_get_Current_m2608_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		List_1_GetEnumerator_m2592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m2593_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m2594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		Enumerator_MoveNext_m2609_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t563  V_1 = {0};
	AN_PropertyTemplate_t84 * V_2 = {0};
	Enumerator_t557  V_3 = {0};
	XmlElement_t528 * V_4 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_BaseTemplate_t76 * L_0 = ___template;
		NullCheck(L_0);
		Dictionary_2_t79 * L_1 = AN_BaseTemplate_get_Properties_m334(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeyCollection_t564 * L_2 = Dictionary_2_get_Keys_m2606(L_1, /*hidden argument*/Dictionary_2_get_Keys_m2606_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t563  L_3 = KeyCollection_GetEnumerator_m2607(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m2607_MethodInfo_var);
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
			String_t* L_4 = Enumerator_get_Current_m2608((&V_1), /*hidden argument*/Enumerator_get_Current_m2608_MethodInfo_var);
			V_0 = L_4;
			AN_BaseTemplate_t76 * L_5 = ___template;
			NullCheck(L_5);
			Dictionary_2_t79 * L_6 = AN_BaseTemplate_get_Properties_m334(L_5, /*hidden argument*/NULL);
			String_t* L_7 = V_0;
			NullCheck(L_6);
			List_1_t81 * L_8 = (List_1_t81 *)VirtFuncInvoker1< List_1_t81 *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(!0) */, L_6, L_7);
			NullCheck(L_8);
			Enumerator_t557  L_9 = List_1_GetEnumerator_m2592(L_8, /*hidden argument*/List_1_GetEnumerator_m2592_MethodInfo_var);
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
				AN_PropertyTemplate_t84 * L_10 = Enumerator_get_Current_m2593((&V_3), /*hidden argument*/Enumerator_get_Current_m2593_MethodInfo_var);
				V_2 = L_10;
				XmlDocument_t527 * L_11 = ___doc;
				String_t* L_12 = V_0;
				NullCheck(L_11);
				XmlElement_t528 * L_13 = XmlDocument_CreateElement_m2603(L_11, L_12, /*hidden argument*/NULL);
				V_4 = L_13;
				XmlDocument_t527 * L_14 = ___doc;
				XmlElement_t528 * L_15 = V_4;
				AN_PropertyTemplate_t84 * L_16 = V_2;
				AN_BaseTemplate_AddAttributesToXml_m332(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
				XmlDocument_t527 * L_17 = ___doc;
				XmlElement_t528 * L_18 = V_4;
				AN_PropertyTemplate_t84 * L_19 = V_2;
				AN_BaseTemplate_AddPropertiesToXml_m331(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
				XmlElement_t528 * L_20 = ___parent;
				XmlElement_t528 * L_21 = V_4;
				NullCheck(L_20);
				VirtFuncInvoker1< XmlNode_t562 *, XmlNode_t562 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_20, L_21);
			}

IL_0063:
			{
				bool L_22 = Enumerator_MoveNext_m2594((&V_3), /*hidden argument*/Enumerator_MoveNext_m2594_MethodInfo_var);
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
			Enumerator_t557  L_23 = V_3;
			Enumerator_t557  L_24 = L_23;
			Object_t * L_25 = Box(Enumerator_t557_il2cpp_TypeInfo_var, &L_24);
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
			bool L_26 = Enumerator_MoveNext_m2609((&V_1), /*hidden argument*/Enumerator_MoveNext_m2609_MethodInfo_var);
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
		Enumerator_t563  L_27 = V_1;
		Enumerator_t563  L_28 = L_27;
		Object_t * L_29 = Box(Enumerator_t563_il2cpp_TypeInfo_var, &L_28);
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
extern TypeInfo* Enumerator_t565_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m2610_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m2611_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2612_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2617_MethodInfo_var;
extern "C" void AN_BaseTemplate_AddAttributesToXml_m332 (AN_BaseTemplate_t76 * __this, XmlDocument_t527 * ___doc, XmlElement_t528 * ___parent, AN_BaseTemplate_t76 * ___template, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_get_Keys_m2610_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483703);
		KeyCollection_GetEnumerator_m2611_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483704);
		Enumerator_get_Current_m2612_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		Enumerator_MoveNext_m2617_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Enumerator_t565  V_1 = {0};
	String_t* V_2 = {0};
	XmlAttribute_t566 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AN_BaseTemplate_t76 * L_0 = ___template;
		NullCheck(L_0);
		Dictionary_2_t80 * L_1 = AN_BaseTemplate_get_Values_m333(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeyCollection_t567 * L_2 = Dictionary_2_get_Keys_m2610(L_1, /*hidden argument*/Dictionary_2_get_Keys_m2610_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t565  L_3 = KeyCollection_GetEnumerator_m2611(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m2611_MethodInfo_var);
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
			String_t* L_4 = Enumerator_get_Current_m2612((&V_1), /*hidden argument*/Enumerator_get_Current_m2612_MethodInfo_var);
			V_0 = L_4;
			String_t* L_5 = V_0;
			V_2 = L_5;
			String_t* L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = String_Contains_m2613(L_6, (String_t*) &_stringLiteral133, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0030:
		{
			String_t* L_8 = V_0;
			NullCheck(L_8);
			String_t* L_9 = String_Replace_m2614(L_8, (String_t*) &_stringLiteral133, (String_t*) &_stringLiteral134, /*hidden argument*/NULL);
			V_2 = L_9;
		}

IL_0041:
		{
			XmlDocument_t527 * L_10 = ___doc;
			String_t* L_11 = V_2;
			NullCheck(L_10);
			XmlAttribute_t566 * L_12 = XmlDocument_CreateAttribute_m2615(L_10, L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			XmlAttribute_t566 * L_13 = V_3;
			AN_BaseTemplate_t76 * L_14 = ___template;
			NullCheck(L_14);
			Dictionary_2_t80 * L_15 = AN_BaseTemplate_get_Values_m333(L_14, /*hidden argument*/NULL);
			String_t* L_16 = V_0;
			NullCheck(L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0) */, L_15, L_16);
			NullCheck(L_13);
			VirtActionInvoker1< String_t* >::Invoke(24 /* System.Void System.Xml.XmlAttribute::set_Value(System.String) */, L_13, L_17);
			XmlElement_t528 * L_18 = ___parent;
			NullCheck(L_18);
			XmlAttributeCollection_t568 * L_19 = (XmlAttributeCollection_t568 *)VirtFuncInvoker0< XmlAttributeCollection_t568 * >::Invoke(5 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_18);
			XmlAttribute_t566 * L_20 = V_3;
			NullCheck(L_19);
			XmlAttributeCollection_Append_m2616(L_19, L_20, /*hidden argument*/NULL);
		}

IL_0068:
		{
			bool L_21 = Enumerator_MoveNext_m2617((&V_1), /*hidden argument*/Enumerator_MoveNext_m2617_MethodInfo_var);
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
		Enumerator_t565  L_22 = V_1;
		Enumerator_t565  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t565_il2cpp_TypeInfo_var, &L_23);
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
extern "C" Dictionary_2_t80 * AN_BaseTemplate_get_Values_m333 (AN_BaseTemplate_t76 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t80 * L_0 = (__this->____values_1);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>> AN_BaseTemplate::get_Properties()
extern "C" Dictionary_2_t79 * AN_BaseTemplate_get_Properties_m334 (AN_BaseTemplate_t76 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t79 * L_0 = (__this->____properties_0);
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
extern TypeInfo* AN_ApplicationTemplate_t78_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t81_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2605_MethodInfo_var;
extern "C" void AN_ManifestTemplate__ctor_m335 (AN_ManifestTemplate_t82 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_ApplicationTemplate_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		List_1_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		List_1__ctor_m2605_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BaseTemplate__ctor_m316(__this, /*hidden argument*/NULL);
		AN_ApplicationTemplate_t78 * L_0 = (AN_ApplicationTemplate_t78 *)il2cpp_codegen_object_new (AN_ApplicationTemplate_t78_il2cpp_TypeInfo_var);
		AN_ApplicationTemplate__ctor_m308(L_0, /*hidden argument*/NULL);
		__this->____applicationTemplate_2 = L_0;
		List_1_t81 * L_1 = (List_1_t81 *)il2cpp_codegen_object_new (List_1_t81_il2cpp_TypeInfo_var);
		List_1__ctor_m2605(L_1, /*hidden argument*/List_1__ctor_m2605_MethodInfo_var);
		__this->____permissions_3 = L_1;
		return;
	}
}
// System.Boolean AN_ManifestTemplate::HasPermission(System.String)
extern TypeInfo* Enumerator_t557_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2592_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2593_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2594_MethodInfo_var;
extern "C" bool AN_ManifestTemplate_HasPermission_m336 (AN_ManifestTemplate_t82 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m2593_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m2594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	Enumerator_t557  V_1 = {0};
	bool V_2 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t81 * L_0 = AN_ManifestTemplate_get_Permissions_m343(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t557  L_1 = List_1_GetEnumerator_m2592(L_0, /*hidden argument*/List_1_GetEnumerator_m2592_MethodInfo_var);
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
			AN_PropertyTemplate_t84 * L_2 = Enumerator_get_Current_m2593((&V_1), /*hidden argument*/Enumerator_get_Current_m2593_MethodInfo_var);
			V_0 = L_2;
			AN_PropertyTemplate_t84 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = AN_PropertyTemplate_get_Name_m347(L_3, /*hidden argument*/NULL);
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
			bool L_7 = Enumerator_MoveNext_m2594((&V_1), /*hidden argument*/Enumerator_MoveNext_m2594_MethodInfo_var);
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
		Enumerator_t557  L_8 = V_1;
		Enumerator_t557  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t557_il2cpp_TypeInfo_var, &L_9);
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
extern TypeInfo* Enumerator_t557_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2592_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2593_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2594_MethodInfo_var;
extern "C" void AN_ManifestTemplate_RemovePermission_m337 (AN_ManifestTemplate_t82 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m2593_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m2594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	Enumerator_t557  V_1 = {0};
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
		List_1_t81 * L_0 = AN_ManifestTemplate_get_Permissions_m343(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t557  L_1 = List_1_GetEnumerator_m2592(L_0, /*hidden argument*/List_1_GetEnumerator_m2592_MethodInfo_var);
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
			AN_PropertyTemplate_t84 * L_2 = Enumerator_get_Current_m2593((&V_1), /*hidden argument*/Enumerator_get_Current_m2593_MethodInfo_var);
			V_0 = L_2;
			AN_PropertyTemplate_t84 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = AN_PropertyTemplate_get_Name_m347(L_3, /*hidden argument*/NULL);
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
			AN_PropertyTemplate_t84 * L_7 = V_0;
			AN_ManifestTemplate_RemovePermission_m338(__this, L_7, /*hidden argument*/NULL);
			goto IL_0047;
		}

IL_003b:
		{
			bool L_8 = Enumerator_MoveNext_m2594((&V_1), /*hidden argument*/Enumerator_MoveNext_m2594_MethodInfo_var);
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
		Enumerator_t557  L_9 = V_1;
		Enumerator_t557  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t557_il2cpp_TypeInfo_var, &L_10);
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
		bool L_13 = AN_ManifestTemplate_HasPermission_m336(__this, L_12, /*hidden argument*/NULL);
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
extern "C" void AN_ManifestTemplate_RemovePermission_m338 (AN_ManifestTemplate_t82 * __this, AN_PropertyTemplate_t84 * ___permission, const MethodInfo* method)
{
	{
		List_1_t81 * L_0 = (__this->____permissions_3);
		AN_PropertyTemplate_t84 * L_1 = ___permission;
		NullCheck(L_0);
		VirtFuncInvoker1< bool, AN_PropertyTemplate_t84 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<AN_PropertyTemplate>::Remove(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_ManifestTemplate::AddPermission(System.String)
extern TypeInfo* AN_PropertyTemplate_t84_il2cpp_TypeInfo_var;
extern "C" void AN_ManifestTemplate_AddPermission_m339 (AN_ManifestTemplate_t82 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AN_PropertyTemplate_t84_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		s_Il2CppMethodIntialized = true;
	}
	AN_PropertyTemplate_t84 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		bool L_1 = AN_ManifestTemplate_HasPermission_m336(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		AN_PropertyTemplate_t84 * L_2 = (AN_PropertyTemplate_t84 *)il2cpp_codegen_object_new (AN_PropertyTemplate_t84_il2cpp_TypeInfo_var);
		AN_PropertyTemplate__ctor_m344(L_2, (String_t*) &_stringLiteral135, /*hidden argument*/NULL);
		V_0 = L_2;
		AN_PropertyTemplate_t84 * L_3 = V_0;
		String_t* L_4 = ___name;
		NullCheck(L_3);
		AN_PropertyTemplate_set_Name_m348(L_3, L_4, /*hidden argument*/NULL);
		AN_PropertyTemplate_t84 * L_5 = V_0;
		AN_ManifestTemplate_AddPermission_m340(__this, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void AN_ManifestTemplate::AddPermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_AddPermission_m340 (AN_ManifestTemplate_t82 * __this, AN_PropertyTemplate_t84 * ___permission, const MethodInfo* method)
{
	{
		List_1_t81 * L_0 = (__this->____permissions_3);
		AN_PropertyTemplate_t84 * L_1 = ___permission;
		NullCheck(L_0);
		VirtActionInvoker1< AN_PropertyTemplate_t84 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<AN_PropertyTemplate>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void AN_ManifestTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern TypeInfo* Enumerator_t557_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2592_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2593_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2594_MethodInfo_var;
extern "C" void AN_ManifestTemplate_ToXmlElement_m341 (AN_ManifestTemplate_t82 * __this, XmlDocument_t527 * ___doc, XmlElement_t528 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m2593_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m2594_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	XmlElement_t528 * V_0 = {0};
	AN_PropertyTemplate_t84 * V_1 = {0};
	Enumerator_t557  V_2 = {0};
	XmlElement_t528 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t527 * L_0 = ___doc;
		XmlElement_t528 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m332(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t527 * L_2 = ___doc;
		XmlElement_t528 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m331(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		XmlDocument_t527 * L_4 = ___doc;
		NullCheck(L_4);
		XmlElement_t528 * L_5 = XmlDocument_CreateElement_m2603(L_4, (String_t*) &_stringLiteral136, /*hidden argument*/NULL);
		V_0 = L_5;
		AN_ApplicationTemplate_t78 * L_6 = (__this->____applicationTemplate_2);
		XmlDocument_t527 * L_7 = ___doc;
		XmlElement_t528 * L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< XmlDocument_t527 *, XmlElement_t528 * >::Invoke(4 /* System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_6, L_7, L_8);
		XmlElement_t528 * L_9 = ___parent;
		XmlElement_t528 * L_10 = V_0;
		NullCheck(L_9);
		VirtFuncInvoker1< XmlNode_t562 *, XmlNode_t562 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_9, L_10);
		List_1_t81 * L_11 = AN_ManifestTemplate_get_Permissions_m343(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Enumerator_t557  L_12 = List_1_GetEnumerator_m2592(L_11, /*hidden argument*/List_1_GetEnumerator_m2592_MethodInfo_var);
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
			AN_PropertyTemplate_t84 * L_13 = Enumerator_get_Current_m2593((&V_2), /*hidden argument*/Enumerator_get_Current_m2593_MethodInfo_var);
			V_1 = L_13;
			XmlDocument_t527 * L_14 = ___doc;
			NullCheck(L_14);
			XmlElement_t528 * L_15 = XmlDocument_CreateElement_m2603(L_14, (String_t*) &_stringLiteral135, /*hidden argument*/NULL);
			V_3 = L_15;
			AN_PropertyTemplate_t84 * L_16 = V_1;
			XmlDocument_t527 * L_17 = ___doc;
			XmlElement_t528 * L_18 = V_3;
			NullCheck(L_16);
			VirtActionInvoker2< XmlDocument_t527 *, XmlElement_t528 * >::Invoke(4 /* System.Void AN_PropertyTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement) */, L_16, L_17, L_18);
			XmlElement_t528 * L_19 = ___parent;
			XmlElement_t528 * L_20 = V_3;
			NullCheck(L_19);
			VirtFuncInvoker1< XmlNode_t562 *, XmlNode_t562 * >::Invoke(28 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_19, L_20);
		}

IL_0068:
		{
			bool L_21 = Enumerator_MoveNext_m2594((&V_2), /*hidden argument*/Enumerator_MoveNext_m2594_MethodInfo_var);
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
		Enumerator_t557  L_22 = V_2;
		Enumerator_t557  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t557_il2cpp_TypeInfo_var, &L_23);
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
extern "C" AN_ApplicationTemplate_t78 * AN_ManifestTemplate_get_ApplicationTemplate_m342 (AN_ManifestTemplate_t82 * __this, const MethodInfo* method)
{
	{
		AN_ApplicationTemplate_t78 * L_0 = (__this->____applicationTemplate_2);
		return L_0;
	}
}
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_ManifestTemplate::get_Permissions()
extern "C" List_1_t81 * AN_ManifestTemplate_get_Permissions_m343 (AN_ManifestTemplate_t82 * __this, const MethodInfo* method)
{
	{
		List_1_t81 * L_0 = (__this->____permissions_3);
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
extern "C" void AN_PropertyTemplate__ctor_m344 (AN_PropertyTemplate_t84 * __this, String_t* ___tag, const MethodInfo* method)
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
		AN_BaseTemplate__ctor_m316(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___tag;
		__this->____tag_3 = L_1;
		return;
	}
}
// System.Void AN_PropertyTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_PropertyTemplate_ToXmlElement_m345 (AN_PropertyTemplate_t84 * __this, XmlDocument_t527 * ___doc, XmlElement_t528 * ___parent, const MethodInfo* method)
{
	{
		XmlDocument_t527 * L_0 = ___doc;
		XmlElement_t528 * L_1 = ___parent;
		AN_BaseTemplate_AddAttributesToXml_m332(__this, L_0, L_1, __this, /*hidden argument*/NULL);
		XmlDocument_t527 * L_2 = ___doc;
		XmlElement_t528 * L_3 = ___parent;
		AN_BaseTemplate_AddPropertiesToXml_m331(__this, L_2, L_3, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Tag()
extern "C" String_t* AN_PropertyTemplate_get_Tag_m346 (AN_PropertyTemplate_t84 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____tag_3);
		return L_0;
	}
}
// System.String AN_PropertyTemplate::get_Name()
extern "C" String_t* AN_PropertyTemplate_get_Name_m347 (AN_PropertyTemplate_t84 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m328(__this, (String_t*) &_stringLiteral126, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Name(System.String)
extern "C" void AN_PropertyTemplate_set_Name_m348 (AN_PropertyTemplate_t84 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m327(__this, (String_t*) &_stringLiteral126, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Value()
extern "C" String_t* AN_PropertyTemplate_get_Value_m349 (AN_PropertyTemplate_t84 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m328(__this, (String_t*) &_stringLiteral137, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Value(System.String)
extern "C" void AN_PropertyTemplate_set_Value_m350 (AN_PropertyTemplate_t84 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m327(__this, (String_t*) &_stringLiteral137, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String AN_PropertyTemplate::get_Label()
extern "C" String_t* AN_PropertyTemplate_get_Label_m351 (AN_PropertyTemplate_t84 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = AN_BaseTemplate_GetValue_m328(__this, (String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AN_PropertyTemplate::set_Label(System.String)
extern "C" void AN_PropertyTemplate_set_Label_m352 (AN_PropertyTemplate_t84 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		AN_BaseTemplate_SetValue_m327(__this, (String_t*) &_stringLiteral138, L_0, /*hidden argument*/NULL);
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
extern TypeInfo* Dictionary_2_t85_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2618_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2619_MethodInfo_var;
extern "C" void EventDispatcher__ctor_m353 (EventDispatcher_t87 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Dictionary_2__ctor_m2618_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		Dictionary_2__ctor_m2619_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t85 * L_0 = (Dictionary_2_t85 *)il2cpp_codegen_object_new (Dictionary_2_t85_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2618(L_0, /*hidden argument*/Dictionary_2__ctor_m2618_MethodInfo_var);
		__this->___listners_2 = L_0;
		Dictionary_2_t86 * L_1 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2619(L_1, /*hidden argument*/Dictionary_2__ctor_m2619_MethodInfo_var);
		__this->___dataListners_3 = L_1;
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m354 (EventDispatcher_t87 * __this, String_t* ___eventName, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t525 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_addEventListener_m356(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m355 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t525 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_addEventListener_m356(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern TypeInfo* List_1_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2620_MethodInfo_var;
extern "C" void EventDispatcher_addEventListener_m356 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m2620_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t529 * V_0 = {0};
	{
		Dictionary_2_t85 * L_0 = (__this->___listners_2);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t85 * L_3 = (__this->___listners_2);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t529 * L_5 = (List_1_t529 *)VirtFuncInvoker1< List_1_t529 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		EventHandlerFunction_t525 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< EventHandlerFunction_t525 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t529 * L_7 = (List_1_t529 *)il2cpp_codegen_object_new (List_1_t529_il2cpp_TypeInfo_var);
		List_1__ctor_m2620(L_7, /*hidden argument*/List_1__ctor_m2620_MethodInfo_var);
		V_0 = L_7;
		List_1_t529 * L_8 = V_0;
		EventHandlerFunction_t525 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< EventHandlerFunction_t525 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t85 * L_10 = (__this->___listners_2);
		int32_t L_11 = ___eventID;
		List_1_t529 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t529 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m357 (EventDispatcher_t87 * __this, String_t* ___eventName, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t526 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_addEventListener_m359(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_addEventListener_m358 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t526 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_addEventListener_m359(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern TypeInfo* List_1_t530_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2621_MethodInfo_var;
extern "C" void EventDispatcher_addEventListener_m359 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m2621_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t530 * V_0 = {0};
	{
		Dictionary_2_t86 * L_0 = (__this->___dataListners_3);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (__this->___dataListners_3);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t530 * L_5 = (List_1_t530 *)VirtFuncInvoker1< List_1_t530 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		DataEventHandlerFunction_t526 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< DataEventHandlerFunction_t526 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t530 * L_7 = (List_1_t530 *)il2cpp_codegen_object_new (List_1_t530_il2cpp_TypeInfo_var);
		List_1__ctor_m2621(L_7, /*hidden argument*/List_1__ctor_m2621_MethodInfo_var);
		V_0 = L_7;
		List_1_t530 * L_8 = V_0;
		DataEventHandlerFunction_t526 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< DataEventHandlerFunction_t526 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t86 * L_10 = (__this->___dataListners_3);
		int32_t L_11 = ___eventID;
		List_1_t530 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t530 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m360 (EventDispatcher_t87 * __this, String_t* ___eventName, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t525 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_removeEventListener_m362(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m361 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t525 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_removeEventListener_m362(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m362 (EventDispatcher_t87 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t529 * V_0 = {0};
	{
		Dictionary_2_t85 * L_0 = (__this->___listners_2);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t85 * L_3 = (__this->___listners_2);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t529 * L_5 = (List_1_t529 *)VirtFuncInvoker1< List_1_t529 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t529 * L_6 = V_0;
		EventHandlerFunction_t525 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, EventHandlerFunction_t525 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t529 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t85 * L_10 = (__this->___listners_2);
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
extern "C" void EventDispatcher_removeEventListener_m363 (EventDispatcher_t87 * __this, String_t* ___eventName, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t526 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcher_removeEventListener_m365(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcher_removeEventListener_m364 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t526 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcher_removeEventListener_m365(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcher_removeEventListener_m365 (EventDispatcher_t87 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t530 * V_0 = {0};
	{
		Dictionary_2_t86 * L_0 = (__this->___dataListners_3);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (__this->___dataListners_3);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t530 * L_5 = (List_1_t530 *)VirtFuncInvoker1< List_1_t530 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t530 * L_6 = V_0;
		DataEventHandlerFunction_t526 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, DataEventHandlerFunction_t526 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t530 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t86 * L_10 = (__this->___dataListners_3);
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
extern "C" void EventDispatcher_dispatchEvent_m366 (EventDispatcher_t87 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcher_dispatch_m374(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcher_dispatchEvent_m367 (EventDispatcher_t87 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcher_dispatch_m374(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatchEvent_m368 (EventDispatcher_t87 * __this, int32_t ___eventID, const MethodInfo* method)
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
		EventDispatcher_dispatch_m374(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatchEvent(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatchEvent_m369 (EventDispatcher_t87 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
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
		EventDispatcher_dispatch_m374(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String)
extern "C" void EventDispatcher_dispatch_m370 (EventDispatcher_t87 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcher_dispatch_m374(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String,System.Object)
extern "C" void EventDispatcher_dispatch_m371 (EventDispatcher_t87 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcher_dispatch_m374(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m372 (EventDispatcher_t87 * __this, int32_t ___eventID, const MethodInfo* method)
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
		EventDispatcher_dispatch_m374(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m373 (EventDispatcher_t87 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
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
		EventDispatcher_dispatch_m374(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.Int32,System.Object,System.String)
extern TypeInfo* CEvent_t91_il2cpp_TypeInfo_var;
extern "C" void EventDispatcher_dispatch_m374 (EventDispatcher_t87 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CEvent_t91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	CEvent_t91 * V_0 = {0};
	List_1_t530 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t529 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___eventID;
		String_t* L_1 = ___eventName;
		Object_t * L_2 = ___data;
		CEvent_t91 * L_3 = (CEvent_t91 *)il2cpp_codegen_object_new (CEvent_t91_il2cpp_TypeInfo_var);
		CEvent__ctor_m406(L_3, L_0, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t86 * L_4 = (__this->___dataListners_3);
		int32_t L_5 = ___eventID;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t86 * L_7 = (__this->___dataListners_3);
		int32_t L_8 = ___eventID;
		NullCheck(L_7);
		List_1_t530 * L_9 = (List_1_t530 *)VirtFuncInvoker1< List_1_t530 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_7, L_8);
		List_1_t530 * L_10 = EventDispatcher_cloenArray_m377(__this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		List_1_t530 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_11);
		V_2 = L_12;
		V_3 = 0;
		goto IL_0064;
	}

IL_003c:
	{
		CEvent_t91 * L_13 = V_0;
		List_1_t530 * L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		DataEventHandlerFunction_t526 * L_16 = (DataEventHandlerFunction_t526 *)VirtFuncInvoker1< DataEventHandlerFunction_t526 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_14, L_15);
		NullCheck(L_16);
		Object_t * L_17 = Delegate_get_Target_m2622(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_18 = CEvent_canBeDisptached_m409(L_13, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t530 * L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		DataEventHandlerFunction_t526 * L_21 = (DataEventHandlerFunction_t526 *)VirtFuncInvoker1< DataEventHandlerFunction_t526 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_19, L_20);
		CEvent_t91 * L_22 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< CEvent_t91 * >::Invoke(10 /* System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent) */, L_21, L_22);
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
		Dictionary_2_t85 * L_26 = (__this->___listners_2);
		int32_t L_27 = ___eventID;
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00d7;
		}
	}
	{
		Dictionary_2_t85 * L_29 = (__this->___listners_2);
		int32_t L_30 = ___eventID;
		NullCheck(L_29);
		List_1_t529 * L_31 = (List_1_t529 *)VirtFuncInvoker1< List_1_t529 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_29, L_30);
		List_1_t529 * L_32 = EventDispatcher_cloenArray_m376(__this, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		List_1_t529 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_33);
		V_5 = L_34;
		V_6 = 0;
		goto IL_00ce;
	}

IL_00a1:
	{
		CEvent_t91 * L_35 = V_0;
		List_1_t529 * L_36 = V_4;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		EventHandlerFunction_t525 * L_38 = (EventHandlerFunction_t525 *)VirtFuncInvoker1< EventHandlerFunction_t525 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_36, L_37);
		NullCheck(L_38);
		Object_t * L_39 = Delegate_get_Target_m2622(L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_40 = CEvent_canBeDisptached_m409(L_35, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00c8;
		}
	}
	{
		List_1_t529 * L_41 = V_4;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		EventHandlerFunction_t525 * L_43 = (EventHandlerFunction_t525 *)VirtFuncInvoker1< EventHandlerFunction_t525 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_41, L_42);
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
extern "C" void EventDispatcher_clearEvents_m375 (EventDispatcher_t87 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t85 * L_0 = (__this->___listners_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear() */, L_0);
		Dictionary_2_t86 * L_1 = (__this->___dataListners_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Clear() */, L_1);
		return;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern TypeInfo* List_1_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2620_MethodInfo_var;
extern "C" List_1_t529 * EventDispatcher_cloenArray_m376 (EventDispatcher_t87 * __this, List_1_t529 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m2620_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t529 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t529 * L_0 = (List_1_t529 *)il2cpp_codegen_object_new (List_1_t529_il2cpp_TypeInfo_var);
		List_1__ctor_m2620(L_0, /*hidden argument*/List_1__ctor_m2620_MethodInfo_var);
		V_0 = L_0;
		List_1_t529 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t529 * L_3 = V_0;
		List_1_t529 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		EventHandlerFunction_t525 * L_6 = (EventHandlerFunction_t525 *)VirtFuncInvoker1< EventHandlerFunction_t525 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< EventHandlerFunction_t525 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t529 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcher::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern TypeInfo* List_1_t530_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2621_MethodInfo_var;
extern "C" List_1_t530 * EventDispatcher_cloenArray_m377 (EventDispatcher_t87 * __this, List_1_t530 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m2621_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t530 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t530 * L_0 = (List_1_t530 *)il2cpp_codegen_object_new (List_1_t530_il2cpp_TypeInfo_var);
		List_1__ctor_m2621(L_0, /*hidden argument*/List_1__ctor_m2621_MethodInfo_var);
		V_0 = L_0;
		List_1_t530 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t530 * L_3 = V_0;
		List_1_t530 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		DataEventHandlerFunction_t526 * L_6 = (DataEventHandlerFunction_t526 *)VirtFuncInvoker1< DataEventHandlerFunction_t526 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< DataEventHandlerFunction_t526 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t530 * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnionAssets.FLE.EventDispatcher::OnDestroy()
extern "C" void EventDispatcher_OnDestroy_m378 (EventDispatcher_t87 * __this, const MethodInfo* method)
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
extern TypeInfo* Dictionary_2_t85_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2618_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2619_MethodInfo_var;
extern "C" void EventDispatcherBase__ctor_m379 (EventDispatcherBase_t88 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Dictionary_2__ctor_m2618_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		Dictionary_2__ctor_m2619_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t85 * L_0 = (Dictionary_2_t85 *)il2cpp_codegen_object_new (Dictionary_2_t85_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2618(L_0, /*hidden argument*/Dictionary_2__ctor_m2618_MethodInfo_var);
		__this->___listners_0 = L_0;
		Dictionary_2_t86 * L_1 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2619(L_1, /*hidden argument*/Dictionary_2__ctor_m2619_MethodInfo_var);
		__this->___dataListners_1 = L_1;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m380 (EventDispatcherBase_t88 * __this, String_t* ___eventName, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t525 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_addEventListener_m382(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m381 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t525 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_addEventListener_m382(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern TypeInfo* List_1_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2620_MethodInfo_var;
extern "C" void EventDispatcherBase_addEventListener_m382 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m2620_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t529 * V_0 = {0};
	{
		Dictionary_2_t85 * L_0 = (__this->___listners_0);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t85 * L_3 = (__this->___listners_0);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t529 * L_5 = (List_1_t529 *)VirtFuncInvoker1< List_1_t529 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		EventHandlerFunction_t525 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< EventHandlerFunction_t525 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t529 * L_7 = (List_1_t529 *)il2cpp_codegen_object_new (List_1_t529_il2cpp_TypeInfo_var);
		List_1__ctor_m2620(L_7, /*hidden argument*/List_1__ctor_m2620_MethodInfo_var);
		V_0 = L_7;
		List_1_t529 * L_8 = V_0;
		EventHandlerFunction_t525 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< EventHandlerFunction_t525 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t85 * L_10 = (__this->___listners_0);
		int32_t L_11 = ___eventID;
		List_1_t529 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t529 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m383 (EventDispatcherBase_t88 * __this, String_t* ___eventName, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t526 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_addEventListener_m385(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_addEventListener_m384 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t526 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_addEventListener_m385(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern TypeInfo* List_1_t530_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2621_MethodInfo_var;
extern "C" void EventDispatcherBase_addEventListener_m385 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m2621_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t530 * V_0 = {0};
	{
		Dictionary_2_t86 * L_0 = (__this->___dataListners_1);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (__this->___dataListners_1);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t530 * L_5 = (List_1_t530 *)VirtFuncInvoker1< List_1_t530 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		DataEventHandlerFunction_t526 * L_6 = ___handler;
		NullCheck(L_5);
		VirtActionInvoker1< DataEventHandlerFunction_t526 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_5, L_6);
		goto IL_0042;
	}

IL_0028:
	{
		List_1_t530 * L_7 = (List_1_t530 *)il2cpp_codegen_object_new (List_1_t530_il2cpp_TypeInfo_var);
		List_1__ctor_m2621(L_7, /*hidden argument*/List_1__ctor_m2621_MethodInfo_var);
		V_0 = L_7;
		List_1_t530 * L_8 = V_0;
		DataEventHandlerFunction_t526 * L_9 = ___handler;
		NullCheck(L_8);
		VirtActionInvoker1< DataEventHandlerFunction_t526 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_8, L_9);
		Dictionary_2_t86 * L_10 = (__this->___dataListners_1);
		int32_t L_11 = ___eventID;
		List_1_t530 * L_12 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, List_1_t530 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Add(!0,!1) */, L_10, L_11, L_12);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m386 (EventDispatcherBase_t88 * __this, String_t* ___eventName, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		EventHandlerFunction_t525 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_removeEventListener_m388(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m387 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		EventHandlerFunction_t525 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_removeEventListener_m388(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m388 (EventDispatcherBase_t88 * __this, int32_t ___eventID, EventHandlerFunction_t525 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t529 * V_0 = {0};
	{
		Dictionary_2_t85 * L_0 = (__this->___listners_0);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t85 * L_3 = (__this->___listners_0);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t529 * L_5 = (List_1_t529 *)VirtFuncInvoker1< List_1_t529 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t529 * L_6 = V_0;
		EventHandlerFunction_t525 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, EventHandlerFunction_t525 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t529 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t85 * L_10 = (__this->___listners_0);
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
extern "C" void EventDispatcherBase_removeEventListener_m389 (EventDispatcherBase_t88 * __this, String_t* ___eventName, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		DataEventHandlerFunction_t526 * L_2 = ___handler;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_removeEventListener_m391(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void EventDispatcherBase_removeEventListener_m390 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eventID;
		DataEventHandlerFunction_t526 * L_1 = ___handler;
		String_t* L_2 = Int32_ToString_m164((&___eventID), /*hidden argument*/NULL);
		EventDispatcherBase_removeEventListener_m391(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction,System.String)
extern "C" void EventDispatcherBase_removeEventListener_m391 (EventDispatcherBase_t88 * __this, int32_t ___eventID, DataEventHandlerFunction_t526 * ___handler, String_t* ___eventGraphName, const MethodInfo* method)
{
	List_1_t530 * V_0 = {0};
	{
		Dictionary_2_t86 * L_0 = (__this->___dataListners_1);
		int32_t L_1 = ___eventID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t86 * L_3 = (__this->___dataListners_1);
		int32_t L_4 = ___eventID;
		NullCheck(L_3);
		List_1_t530 * L_5 = (List_1_t530 *)VirtFuncInvoker1< List_1_t530 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
		List_1_t530 * L_6 = V_0;
		DataEventHandlerFunction_t526 * L_7 = ___handler;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, DataEventHandlerFunction_t526 * >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Remove(!0) */, L_6, L_7);
		List_1_t530 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_8);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t86 * L_10 = (__this->___dataListners_1);
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
extern "C" void EventDispatcherBase_dispatchEvent_m392 (EventDispatcherBase_t88 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcherBase_dispatch_m400(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatchEvent_m393 (EventDispatcherBase_t88 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_dispatch_m400(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatchEvent_m394 (EventDispatcherBase_t88 * __this, int32_t ___eventID, const MethodInfo* method)
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
		EventDispatcherBase_dispatch_m400(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatchEvent(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatchEvent_m395 (EventDispatcherBase_t88 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
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
		EventDispatcherBase_dispatch_m400(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String)
extern "C" void EventDispatcherBase_dispatch_m396 (EventDispatcherBase_t88 * __this, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		String_t* L_2 = ___eventName;
		EventDispatcherBase_dispatch_m400(__this, L_1, NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.String,System.Object)
extern "C" void EventDispatcherBase_dispatch_m397 (EventDispatcherBase_t88 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		Object_t * L_2 = ___data;
		String_t* L_3 = ___eventName;
		EventDispatcherBase_dispatch_m400(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m398 (EventDispatcherBase_t88 * __this, int32_t ___eventID, const MethodInfo* method)
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
		EventDispatcherBase_dispatch_m400(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m399 (EventDispatcherBase_t88 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method)
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
		EventDispatcherBase_dispatch_m400(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::dispatch(System.Int32,System.Object,System.String)
extern TypeInfo* CEvent_t91_il2cpp_TypeInfo_var;
extern "C" void EventDispatcherBase_dispatch_m400 (EventDispatcherBase_t88 * __this, int32_t ___eventID, Object_t * ___data, String_t* ___eventName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CEvent_t91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	CEvent_t91 * V_0 = {0};
	List_1_t530 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t529 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___eventID;
		String_t* L_1 = ___eventName;
		Object_t * L_2 = ___data;
		CEvent_t91 * L_3 = (CEvent_t91 *)il2cpp_codegen_object_new (CEvent_t91_il2cpp_TypeInfo_var);
		CEvent__ctor_m406(L_3, L_0, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t86 * L_4 = (__this->___dataListners_1);
		int32_t L_5 = ___eventID;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::ContainsKey(!0) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t86 * L_7 = (__this->___dataListners_1);
		int32_t L_8 = ___eventID;
		NullCheck(L_7);
		List_1_t530 * L_9 = (List_1_t530 *)VirtFuncInvoker1< List_1_t530 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::get_Item(!0) */, L_7, L_8);
		List_1_t530 * L_10 = EventDispatcherBase_cloenArray_m403(__this, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		List_1_t530 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_11);
		V_2 = L_12;
		V_3 = 0;
		goto IL_0064;
	}

IL_003c:
	{
		CEvent_t91 * L_13 = V_0;
		List_1_t530 * L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		DataEventHandlerFunction_t526 * L_16 = (DataEventHandlerFunction_t526 *)VirtFuncInvoker1< DataEventHandlerFunction_t526 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_14, L_15);
		NullCheck(L_16);
		Object_t * L_17 = Delegate_get_Target_m2622(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_18 = CEvent_canBeDisptached_m409(L_13, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t530 * L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		DataEventHandlerFunction_t526 * L_21 = (DataEventHandlerFunction_t526 *)VirtFuncInvoker1< DataEventHandlerFunction_t526 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_19, L_20);
		CEvent_t91 * L_22 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< CEvent_t91 * >::Invoke(10 /* System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent) */, L_21, L_22);
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
		Dictionary_2_t85 * L_26 = (__this->___listners_0);
		int32_t L_27 = ___eventID;
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(!0) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00d7;
		}
	}
	{
		Dictionary_2_t85 * L_29 = (__this->___listners_0);
		int32_t L_30 = ___eventID;
		NullCheck(L_29);
		List_1_t529 * L_31 = (List_1_t529 *)VirtFuncInvoker1< List_1_t529 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(!0) */, L_29, L_30);
		List_1_t529 * L_32 = EventDispatcherBase_cloenArray_m402(__this, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		List_1_t529 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_33);
		V_5 = L_34;
		V_6 = 0;
		goto IL_00ce;
	}

IL_00a1:
	{
		CEvent_t91 * L_35 = V_0;
		List_1_t529 * L_36 = V_4;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		EventHandlerFunction_t525 * L_38 = (EventHandlerFunction_t525 *)VirtFuncInvoker1< EventHandlerFunction_t525 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_36, L_37);
		NullCheck(L_38);
		Object_t * L_39 = Delegate_get_Target_m2622(L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_40 = CEvent_canBeDisptached_m409(L_35, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00c8;
		}
	}
	{
		List_1_t529 * L_41 = V_4;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		EventHandlerFunction_t525 * L_43 = (EventHandlerFunction_t525 *)VirtFuncInvoker1< EventHandlerFunction_t525 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_41, L_42);
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
extern "C" void EventDispatcherBase_clearEvents_m401 (EventDispatcherBase_t88 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t85 * L_0 = (__this->___listners_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear() */, L_0);
		Dictionary_2_t86 * L_1 = (__this->___dataListners_1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>>::Clear() */, L_1);
		return;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>)
extern TypeInfo* List_1_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2620_MethodInfo_var;
extern "C" List_1_t529 * EventDispatcherBase_cloenArray_m402 (EventDispatcherBase_t88 * __this, List_1_t529 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		List_1__ctor_m2620_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t529 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t529 * L_0 = (List_1_t529 *)il2cpp_codegen_object_new (List_1_t529_il2cpp_TypeInfo_var);
		List_1__ctor_m2620(L_0, /*hidden argument*/List_1__ctor_m2620_MethodInfo_var);
		V_0 = L_0;
		List_1_t529 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t529 * L_3 = V_0;
		List_1_t529 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		EventHandlerFunction_t525 * L_6 = (EventHandlerFunction_t525 *)VirtFuncInvoker1< EventHandlerFunction_t525 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< EventHandlerFunction_t525 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t529 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction> UnionAssets.FLE.EventDispatcherBase::cloenArray(System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>)
extern TypeInfo* List_1_t530_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2621_MethodInfo_var;
extern "C" List_1_t530 * EventDispatcherBase_cloenArray_m403 (EventDispatcherBase_t88 * __this, List_1_t530 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m2621_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t530 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t530 * L_0 = (List_1_t530 *)il2cpp_codegen_object_new (List_1_t530_il2cpp_TypeInfo_var);
		List_1__ctor_m2621(L_0, /*hidden argument*/List_1__ctor_m2621_MethodInfo_var);
		V_0 = L_0;
		List_1_t530 * L_1 = ___list;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		List_1_t530 * L_3 = V_0;
		List_1_t530 * L_4 = ___list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		DataEventHandlerFunction_t526 * L_6 = (DataEventHandlerFunction_t526 *)VirtFuncInvoker1< DataEventHandlerFunction_t526 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< DataEventHandlerFunction_t526 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnionAssets.FLE.DataEventHandlerFunction>::Add(!0) */, L_3, L_6);
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
		List_1_t530 * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnionAssets.FLE.EventDispatcherBase::OnDestroy()
extern "C" void EventDispatcherBase_OnDestroy_m404 (EventDispatcherBase_t88 * __this, const MethodInfo* method)
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
extern "C" void BaseEvent__ctor_m405 (BaseEvent_t89 * __this, const MethodInfo* method)
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
extern "C" void CEvent__ctor_m406 (CEvent_t91 * __this, int32_t ___id, String_t* ___name, Object_t * ___data, Object_t * ___dispatcher, const MethodInfo* method)
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
extern "C" void CEvent_stopPropagation_m407 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		__this->____isStoped_4 = 1;
		return;
	}
}
// System.Void UnionAssets.FLE.CEvent::stopImmediatePropagation()
extern "C" void CEvent_stopImmediatePropagation_m408 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		__this->____isStoped_4 = 1;
		__this->____isLocked_5 = 1;
		return;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::canBeDisptached(System.Object)
extern "C" bool CEvent_canBeDisptached_m409 (CEvent_t91 * __this, Object_t * ___val, const MethodInfo* method)
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
extern "C" int32_t CEvent_get_id_m410 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String UnionAssets.FLE.CEvent::get_name()
extern "C" String_t* CEvent_get_name_m411 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_1);
		return L_0;
	}
}
// System.Object UnionAssets.FLE.CEvent::get_data()
extern "C" Object_t * CEvent_get_data_m412 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____data_2);
		return L_0;
	}
}
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_target()
extern "C" Object_t * CEvent_get_target_m413 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____dispatcher_3);
		return L_0;
	}
}
// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::get_dispatcher()
extern "C" Object_t * CEvent_get_dispatcher_m414 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____dispatcher_3);
		return L_0;
	}
}
// System.Object UnionAssets.FLE.CEvent::get_currentTarget()
extern "C" Object_t * CEvent_get_currentTarget_m415 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____currentTarget_6);
		return L_0;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::get_isStoped()
extern "C" bool CEvent_get_isStoped_m416 (CEvent_t91 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isStoped_4);
		return L_0;
	}
}
// System.Boolean UnionAssets.FLE.CEvent::get_isLocked()
extern "C" bool CEvent_get_isLocked_m417 (CEvent_t91 * __this, const MethodInfo* method)
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
extern "C" void EventButtonExample__ctor_m418 (EventButtonExample_t92 * __this, const MethodInfo* method)
{
	{
		__this->___w_5 = (150.0f);
		__this->___h_6 = (50.0f);
		EventDispatcher__ctor_m353(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventButtonExample::.cctor()
extern "C" void EventButtonExample__cctor_m419 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void EventButtonExample::Awake()
extern TypeInfo* EventButtonExample_t92_il2cpp_TypeInfo_var;
extern "C" void EventButtonExample_Awake_m420 (EventButtonExample_t92 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventButtonExample_t92_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventButtonExample_t92_il2cpp_TypeInfo_var);
		((EventButtonExample_t92_StaticFields*)EventButtonExample_t92_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void EventButtonExample::OnGUI()
extern TypeInfo* GUI_t549_il2cpp_TypeInfo_var;
extern "C" void EventButtonExample_OnGUI_m421 (EventButtonExample_t92 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t542  V_0 = {0};
	{
		int32_t L_0 = Screen_get_width_m2530(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___w_5);
		int32_t L_2 = Screen_get_height_m2546(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___h_6);
		float L_4 = (__this->___w_5);
		float L_5 = (__this->___h_6);
		Rect__ctor_m2553((&V_0), ((float)((float)((float)((float)(((float)L_0))-(float)L_1))/(float)(2.0f))), ((float)((float)((float)((float)(((float)L_2))-(float)L_3))/(float)(2.0f))), L_4, L_5, /*hidden argument*/NULL);
		Rect_t542  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m2623(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral139, /*hidden argument*/NULL);
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
extern "C" void ExampleListner__ctor_m422 (ExampleListner_t93 * __this, const MethodInfo* method)
{
	{
		__this->___label_3 = (String_t*) &_stringLiteral142;
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleListner::Start()
extern TypeInfo* EventButtonExample_t92_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandlerFunction_t525_il2cpp_TypeInfo_var;
extern TypeInfo* DataEventHandlerFunction_t526_il2cpp_TypeInfo_var;
extern const MethodInfo* ExampleListner_onButtonClick_m424_MethodInfo_var;
extern const MethodInfo* ExampleListner_onButtonClickData_m425_MethodInfo_var;
extern "C" void ExampleListner_Start_m423 (ExampleListner_t93 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventButtonExample_t92_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		EventHandlerFunction_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		DataEventHandlerFunction_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		ExampleListner_onButtonClick_m424_MethodInfo_var = il2cpp_codegen_method_info_from_index(63);
		ExampleListner_onButtonClickData_m425_MethodInfo_var = il2cpp_codegen_method_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventButtonExample_t92_il2cpp_TypeInfo_var);
		EventButtonExample_t92 * L_0 = ((EventButtonExample_t92_StaticFields*)EventButtonExample_t92_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_1 = { (void*)ExampleListner_onButtonClick_m424_MethodInfo_var };
		EventHandlerFunction_t525 * L_2 = (EventHandlerFunction_t525 *)il2cpp_codegen_object_new (EventHandlerFunction_t525_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m2508(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, EventHandlerFunction_t525 * >::Invoke(4 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, L_0, (String_t*) &_stringLiteral140, L_2);
		EventButtonExample_t92 * L_3 = ((EventButtonExample_t92_StaticFields*)EventButtonExample_t92_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_4 = { (void*)ExampleListner_onButtonClickData_m425_MethodInfo_var };
		DataEventHandlerFunction_t526 * L_5 = (DataEventHandlerFunction_t526 *)il2cpp_codegen_object_new (DataEventHandlerFunction_t526_il2cpp_TypeInfo_var);
		DataEventHandlerFunction__ctor_m2512(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, DataEventHandlerFunction_t526 * >::Invoke(6 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction) */, L_3, (String_t*) &_stringLiteral140, L_5);
		return;
	}
}
// System.Void ExampleListner::onButtonClick()
extern "C" void ExampleListner_onButtonClick_m424 (ExampleListner_t93 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_4);
		__this->___count_4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
// System.Void ExampleListner::onButtonClickData(UnionAssets.FLE.CEvent)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ExampleListner_onButtonClickData_m425 (ExampleListner_t93 * __this, CEvent_t91 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m2565(NULL /*static, unused*/, (String_t*) &_stringLiteral143, /*hidden argument*/NULL);
		Debug_Log_m2565(NULL /*static, unused*/, (String_t*) &_stringLiteral144, /*hidden argument*/NULL);
		CEvent_t91 * L_0 = ___e;
		NullCheck(L_0);
		Object_t * L_1 = CEvent_get_dispatcher_m414(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral145, L_2, /*hidden argument*/NULL);
		Debug_Log_m2565(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		CEvent_t91 * L_4 = ___e;
		NullCheck(L_4);
		Object_t * L_5 = CEvent_get_data_m412(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral146, L_6, /*hidden argument*/NULL);
		Debug_Log_m2565(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		CEvent_t91 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = CEvent_get_name_m411(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_9);
		String_t* L_11 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral147, L_10, /*hidden argument*/NULL);
		Debug_Log_m2565(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_Log_m2565(NULL /*static, unused*/, (String_t*) &_stringLiteral143, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleListner::OnGUI()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t549_il2cpp_TypeInfo_var;
extern "C" void ExampleListner_OnGUI_m426 (ExampleListner_t93 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUI_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t542  L_0 = {0};
		Rect__ctor_m2553(&L_0, (0.0f), (0.0f), (200.0f), (200.0f), /*hidden argument*/NULL);
		String_t* L_1 = (__this->___label_3);
		int32_t* L_2 = &(__this->___count_4);
		String_t* L_3 = Int32_ToString_m164(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m174(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		GUIStyle_t64 * L_5 = (__this->___style_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t549_il2cpp_TypeInfo_var);
		GUI_Label_m2624(NULL /*static, unused*/, L_0, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// AN_ProxyPool
#include "AssemblyU2DCSharp_AN_ProxyPool.h"
#ifndef _MSC_VER
#else
#endif
// AN_ProxyPool
#include "AssemblyU2DCSharp_AN_ProxyPoolMethodDeclarations.h"



// System.Void AN_ProxyPool::.ctor()
extern "C" void AN_ProxyPool__ctor_m427 (AN_ProxyPool_t94 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ProxyPool::CallStatic(System.String,System.String,System.Object[])
extern "C" void AN_ProxyPool_CallStatic_m428 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
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
extern "C" void AN_BillingProxy__ctor_m429 (AN_BillingProxy_t95 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_BillingProxy_CallActivityFunction_m430 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral148, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Connect(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Connect_m431 (Object_t * __this /* static, unused */, String_t* ___ids, String_t* ___base64EncodedPublicKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___base64EncodedPublicKey;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral149, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::RetrieveProducDetails()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_RetrieveProducDetails_m432 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_BillingProxy_CallActivityFunction_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral150, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Consume(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Consume_m433 (Object_t * __this /* static, unused */, String_t* ___SKU, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_BillingProxy_CallActivityFunction_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral151, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Purchase(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Purchase_m434 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___developerPayload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral152, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_BillingProxy::Subscribe(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_BillingProxy_Subscribe_m435 (Object_t * __this /* static, unused */, String_t* ___SKU, String_t* ___developerPayload, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___SKU;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___developerPayload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_BillingProxy_CallActivityFunction_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral153, L_2, /*hidden argument*/NULL);
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
extern "C" void AN_FBProxy__ctor_m436 (AN_FBProxy_t96 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_FBProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_FBProxy_CallActivityFunction_m437 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral154, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_FBProxy::SendTrunRequest(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_FBProxy_SendTrunRequest_m438 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___messgae, String_t* ___data, String_t* ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___title;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___messgae;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___data;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___to;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_FBProxy_CallActivityFunction_m437(NULL /*static, unused*/, (String_t*) &_stringLiteral155, L_6, /*hidden argument*/NULL);
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
extern "C" void AN_GMSGeneralProxy__ctor_m439 (AN_GMSGeneralProxy_t97 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGeneralProxy_CallActivityFunction_m440 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral156, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadGoogleAccountNames()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadGoogleAccountNames_m441 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral157, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::clearDefaultAccount()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_clearDefaultAccount_m442 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral158, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceInit(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceInit_m443 (Object_t * __this /* static, unused */, String_t* ___scopes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___scopes;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral159, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::setConnectionParams(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_setConnectionParams_m444 (Object_t * __this /* static, unused */, bool ___showPopup, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Boolean_ToString_m2625((&___showPopup), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral160, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceConnect()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m445 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral161, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceConnect(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceConnect_m446 (Object_t * __this /* static, unused */, String_t* ___accountName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___accountName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral161, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadToken(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadToken_m447 (Object_t * __this /* static, unused */, String_t* ___accountName, String_t* ___scope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___accountName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___scope;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral162, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadToken()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadToken_m448 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral162, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::invalidateToken(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_invalidateToken_m449 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___token;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral163, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::playServiceDisconnect()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_playServiceDisconnect_m450 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral164, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showAchievementsUI()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showAchievementsUI_m451 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral165, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoardsUI()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoardsUI_m452 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral166, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadConnectedPlayers()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadConnectedPlayers_m453 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral167, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoard(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoard_m454 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral168, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::showLeaderBoardById(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_showLeaderBoardById_m455 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral169, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::submitScore(System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_submitScore_m456 (Object_t * __this /* static, unused */, String_t* ___leaderboardName, int64_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___leaderboardName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int64_ToString_m2626((&___score), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral170, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::submitScoreById(System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_submitScoreById_m457 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int64_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int64_ToString_m2626((&___score), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral171, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadLeaderBoards()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadLeaderBoards_m458 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral172, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::UpdatePlayerScore(System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_UpdatePlayerScore_m459 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral173, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadPlayerCenteredScores(System.String,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadPlayerCenteredScores_m460 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m164((&___maxResults), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral174, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadTopScores(System.String,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadTopScores_m461 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___span, int32_t ___leaderboardCollection, int32_t ___maxResults, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___span), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___leaderboardCollection), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = Int32_ToString_m164((&___maxResults), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral175, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::reportAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_reportAchievement_m462 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral176, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::reportAchievementById(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_reportAchievementById_m463 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral177, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::revealAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_revealAchievement_m464 (Object_t * __this /* static, unused */, String_t* ___achievementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral178, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::revealAchievementById(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_revealAchievementById_m465 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral179, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::incrementAchievement(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_incrementAchievement_m466 (Object_t * __this /* static, unused */, String_t* ___achievementName, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral180, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::incrementAchievementById(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_incrementAchievementById_m467 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral181, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::setStepsImmediate(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_setStepsImmediate_m468 (Object_t * __this /* static, unused */, String_t* ___achievementId, String_t* ___numsteps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___numsteps;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral182, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::loadAchievements()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_loadAchievements_m469 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral183, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::resetAchievement(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_resetAchievement_m470 (Object_t * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___achievementId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral184, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResetAllAchievements()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResetAllAchievements_m471 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral185, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::resetLeaderBoard(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_resetLeaderBoard_m472 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___leaderboardId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral186, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::OnApplicationPause(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_OnApplicationPause_m473 (Object_t * __this /* static, unused */, bool ___isPaused, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		bool L_1 = ___isPaused;
		bool L_2 = L_1;
		Object_t * L_3 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral187, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ShowSavedGamesUI_Bridge(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ShowSavedGamesUI_Bridge_m474 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___maxNumberOfSavedGamesToShow, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___title;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		int32_t L_3 = ___maxNumberOfSavedGamesToShow;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral188, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::CreateNewSpanshot_Bridge(System.String,System.String,System.String,System.String,System.Int64)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t569_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_CreateNewSpanshot_Bridge_m475 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___ImageData, String_t* ___Data, int64_t ___PlayedTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int64_t569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___description;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___ImageData;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___Data;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		int64_t L_9 = ___PlayedTime;
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(Int64_t569_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral189, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResolveSnapshotsConflict_Bridge(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResolveSnapshotsConflict_Bridge_m476 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___index;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral190, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::LoadSpanshots_Bridge()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_LoadSpanshots_Bridge_m477 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral191, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::OpenSpanshotByName_Bridge(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_OpenSpanshotByName_Bridge_m478 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral192, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::DeleteSpanshotByName_Bridge(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_DeleteSpanshotByName_Bridge_m479 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___name;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral193, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ListStates()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ListStates_m480 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral194, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::UpdateState(System.Int32,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_UpdateState_m481 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___data;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral195, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::ResolveState(System.Int32,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_ResolveState_m482 (Object_t * __this /* static, unused */, int32_t ___stateKey, String_t* ___resolvedData, String_t* ___resolvedVersion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___resolvedData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___resolvedVersion;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral196, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::DeleteState(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_DeleteState_m483 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral197, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGeneralProxy::LoadState(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGeneralProxy_LoadState_m484 (Object_t * __this /* static, unused */, int32_t ___stateKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___stateKey), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGeneralProxy_CallActivityFunction_m440(NULL /*static, unused*/, (String_t*) &_stringLiteral198, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_GMSGiftsProxy__ctor_m485 (AN_GMSGiftsProxy_t98 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSGiftsProxy_CallActivityFunction_m486 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral156, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::sendGiftRequest(System.Int32,System.String,System.Int32,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_sendGiftRequest_m487 (Object_t * __this /* static, unused */, int32_t ___type, String_t* ___playload, int32_t ___requestLifetimeDays, String_t* ___icon, String_t* ___description, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = Int32_ToString_m164((&___type), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___playload;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___requestLifetimeDays), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___icon;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		String_t* L_9 = ___description;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_GMSGiftsProxy_CallActivityFunction_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral199, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::showRequestAccepDialog()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_showRequestAccepDialog_m488 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral200, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::acceptRequests(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_acceptRequests_m489 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGiftsProxy_CallActivityFunction_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral201, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::dismissRequest(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_dismissRequest_m490 (Object_t * __this /* static, unused */, String_t* ___ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___ids;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSGiftsProxy_CallActivityFunction_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral202, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::leaveRoom()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_leaveRoom_m491 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral203, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSGiftsProxy::showInvitationBox()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSGiftsProxy_showInvitationBox_m492 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSGiftsProxy_CallActivityFunction_m486(NULL /*static, unused*/, (String_t*) &_stringLiteral204, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_GMSInvitationProxy__ctor_m493 (AN_GMSInvitationProxy_t99 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSInvitationProxy_CallActivityFunction_m494 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral205, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::registerInvitationListener()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSInvitationProxy_registerInvitationListener_m495 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSInvitationProxy_CallActivityFunction_m494(NULL /*static, unused*/, (String_t*) &_stringLiteral206, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSInvitationProxy::unregisterInvitationListener()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSInvitationProxy_unregisterInvitationListener_m496 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSInvitationProxy_CallActivityFunction_m494(NULL /*static, unused*/, (String_t*) &_stringLiteral207, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_GMSQuestsEventsProxy__ctor_m497 (AN_GMSQuestsEventsProxy_t100 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSQuestsEventsProxy_CallActivityFunction_m498 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral156, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::sumbitEvent(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_sumbitEvent_m499 (Object_t * __this /* static, unused */, String_t* ___eventId, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___eventId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___count), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m498(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::loadEvents()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_loadEvents_m500 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSQuestsEventsProxy_CallActivityFunction_m498(NULL /*static, unused*/, (String_t*) &_stringLiteral209, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::showSelectedQuests(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_showSelectedQuests_m501 (Object_t * __this /* static, unused */, String_t* ___questSelectors, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___questSelectors;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m498(NULL /*static, unused*/, (String_t*) &_stringLiteral210, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::acceptQuest(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_acceptQuest_m502 (Object_t * __this /* static, unused */, String_t* ___questId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___questId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m498(NULL /*static, unused*/, (String_t*) &_stringLiteral211, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSQuestsEventsProxy::loadQuests(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSQuestsEventsProxy_loadQuests_m503 (Object_t * __this /* static, unused */, String_t* ___questSelectors, int32_t ___sortOrder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___questSelectors;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___sortOrder), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSQuestsEventsProxy_CallActivityFunction_m498(NULL /*static, unused*/, (String_t*) &_stringLiteral212, L_2, /*hidden argument*/NULL);
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
extern "C" void AN_GMSRTMProxy__ctor_m504 (AN_GMSRTMProxy_t101 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GMSRTMProxy_CallActivityFunction_m505 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral156, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTMFindMatch(System.Int32,System.Int32,System.String[])
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTMFindMatch_m506 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___pIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_4;
		StringU5BU5D_t45* L_9 = ___pIds;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_9;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral213, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::sendDataToAll(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_sendDataToAll_m507 (Object_t * __this /* static, unused */, String_t* ___data, int32_t ___sendType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___sendType), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral214, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::sendDataToPlayers(System.String,System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_sendDataToPlayers_m508 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___players, int32_t ___sendType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___players;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___sendType), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral214, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::ShowWaitingRoomIntent()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_ShowWaitingRoomIntent_m509 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral215, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::InvitePlayers(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_InvitePlayers_m510 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Int32_ToString_m164((&___minPlayers), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___maxPlayers), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral216, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_SetVariant(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_SetVariant_m511 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral217, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_SetExclusiveBitMask(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_SetExclusiveBitMask_m512 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral218, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_AcceptInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_AcceptInvitation_m513 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral219, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_DeclineInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_DeclineInvitation_m514 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral220, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::RTM_DismissInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_RTM_DismissInvitation_m515 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral221, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_AcceptInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_AcceptInvitation_m516 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral222, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_DeclineInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_DeclineInvitation_m517 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral223, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_DismissInvitation(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_DismissInvitation_m518 (Object_t * __this /* static, unused */, String_t* ___invitationId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___invitationId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral224, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_CreateMatch(System.Int32,System.Int32,System.String[])
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_CreateMatch_m519 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, StringU5BU5D_t45* ___playersIds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_4;
		StringU5BU5D_t45* L_9 = ___playersIds;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_9;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral225, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::CancelMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_CancelMatch_m520 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral226, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::DismissMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_DismissMatch_m521 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral227, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_FinishMatch(System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_FinishMatch_m522 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t455* ___results, Int32U5BU5D_t455* ___placing, Int32U5BU5D_t455* ___versions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___matchData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		StringU5BU5D_t45* L_5 = ___pIds;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		Int32U5BU5D_t455* L_7 = ___results;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		Int32U5BU5D_t455* L_9 = ___placing;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t531* L_10 = L_8;
		Int32U5BU5D_t455* L_11 = ___versions;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral228, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LeaveMatch(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatch_m523 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral229, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LeaveMatchDuringTurn(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LeaveMatchDuringTurn_m524 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___pendingParticipantId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___pendingParticipantId;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral230, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadMatchInfo(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchInfo_m525 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral231, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadMatchesInfo(System.Int32,System.Int32[])
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadMatchesInfo_m526 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, Int32U5BU5D_t455* ___matchTurnStatuses, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		int32_t L_1 = ___invitationSortOrder;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_0;
		Int32U5BU5D_t455* L_5 = ___matchTurnStatuses;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral232, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_LoadAllMatchesInfo(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_LoadAllMatchesInfo_m527 (Object_t * __this /* static, unused */, int32_t ___invitationSortOrder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___invitationSortOrder;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral233, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_Rematch(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_Rematch_m528 (Object_t * __this /* static, unused */, String_t* ___matchId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral234, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_RegisterMatchUpdateListener()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_RegisterMatchUpdateListener_m529 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral235, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_UnregisterMatchUpdateListener()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_UnregisterMatchUpdateListener_m530 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral236, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_TakeTrun(System.String,System.String,System.String,System.String[],System.Int32[],System.Int32[],System.Int32[])
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_TakeTrun_m531 (Object_t * __this /* static, unused */, String_t* ___matchId, String_t* ___matchData, String_t* ___pendingParticipantId, StringU5BU5D_t45* ___pIds, Int32U5BU5D_t455* ___results, Int32U5BU5D_t455* ___placing, Int32U5BU5D_t455* ___versions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = ___matchId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___matchData;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___pendingParticipantId;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		StringU5BU5D_t45* L_7 = ___pIds;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		Int32U5BU5D_t455* L_9 = ___results;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t531* L_10 = L_8;
		Int32U5BU5D_t455* L_11 = ___placing;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		ObjectU5BU5D_t531* L_12 = L_10;
		Int32U5BU5D_t455* L_13 = ___versions;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 6)) = (Object_t *)L_13;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral237, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::StartSelectOpponentsView(System.Int32,System.Int32,System.Boolean)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_StartSelectOpponentsView_m532 (Object_t * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, bool ___allowAutomatch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___minPlayers;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_0;
		int32_t L_5 = ___maxPlayers;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_4;
		bool L_9 = ___allowAutomatch;
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral238, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_ShowInbox()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_ShowInbox_m533 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral239, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_SetVariant(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_SetVariant_m534 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral240, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GMSRTMProxy::TBM_SetExclusiveBitMask(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_GMSRTMProxy_TBM_SetExclusiveBitMask_m535 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___val;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_GMSRTMProxy_CallActivityFunction_m505(NULL /*static, unused*/, (String_t*) &_stringLiteral241, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_GoogleAnalyticsProxy__ctor_m536 (AN_GoogleAnalyticsProxy_t102 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAnalyticsProxy_CallActivityFunction_m537 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral242, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::StartAnalyticsTracking()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_StartAnalyticsTracking_m538 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral243, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetTrackerID(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetTrackerID_m539 (Object_t * __this /* static, unused */, String_t* ___trackingID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___trackingID;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral244, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendView()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendView_m540 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral245, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendView(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendView_m541 (Object_t * __this /* static, unused */, String_t* ___appScreen, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___appScreen;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral245, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m542 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___action;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___label;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral246, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendEvent(System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendEvent_m543 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___action, String_t* ___label, String_t* ___value, String_t* ___key, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___action;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___label;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		String_t* L_9 = ___key;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t531* L_10 = L_8;
		String_t* L_11 = ___val;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral246, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SendTiming(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SendTiming_m544 (Object_t * __this /* static, unused */, String_t* ___category, String_t* ___intervalInMilliseconds, String_t* ___name, String_t* ___label, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___category;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___intervalInMilliseconds;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___name;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___label;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral247, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CreateTransaction(System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_CreateTransaction_m545 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___affiliation, String_t* ___revenue, String_t* ___tax, String_t* ___shipping, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = ___transactionId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___affiliation;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___revenue;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___tax;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		String_t* L_9 = ___shipping;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t531* L_10 = L_8;
		String_t* L_11 = ___currencyCode;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral248, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::CreateItem(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_CreateItem_m546 (Object_t * __this /* static, unused */, String_t* ___transactionId, String_t* ___name, String_t* ___sku, String_t* ___category, String_t* ___price, String_t* ___quantity, String_t* ___currencyCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = ___transactionId;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___sku;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___category;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		String_t* L_9 = ___price;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t531* L_10 = L_8;
		String_t* L_11 = ___quantity;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_11;
		ObjectU5BU5D_t531* L_12 = L_10;
		String_t* L_13 = ___currencyCode;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 6)) = (Object_t *)L_13;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral249, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetKey(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetKey_m547 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral250, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::ClearKey(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_ClearKey_m548 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral251, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetLogLevel(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetLogLevel_m549 (Object_t * __this /* static, unused */, int32_t ___lvl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Int32_ToString_m164((&___lvl), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral252, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::SetDryRun(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_SetDryRun_m550 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___mode;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral253, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GoogleAnalyticsProxy::EnableAdvertisingIdCollection(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GoogleAnalyticsProxy_EnableAdvertisingIdCollection_m551 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___mode;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_GoogleAnalyticsProxy_CallActivityFunction_m537(NULL /*static, unused*/, (String_t*) &_stringLiteral254, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_GooglePlayUtilsProxy__ctor_m552 (AN_GooglePlayUtilsProxy_t103 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GooglePlayUtilsProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GooglePlayUtilsProxy_CallActivityFunction_m553 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral255, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_GooglePlayUtilsProxy::GetAdvertisingId()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_GooglePlayUtilsProxy_GetAdvertisingId_m554 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_GooglePlayUtilsProxy_CallActivityFunction_m553(NULL /*static, unused*/, (String_t*) &_stringLiteral256, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_ImmersiveModeProxy__ctor_m555 (AN_ImmersiveModeProxy_t104 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ImmersiveModeProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_ImmersiveModeProxy_CallActivityFunction_m556 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral257, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_ImmersiveModeProxy::enableImmersiveMode()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_ImmersiveModeProxy_enableImmersiveMode_m557 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_ImmersiveModeProxy_CallActivityFunction_m556(NULL /*static, unused*/, (String_t*) &_stringLiteral258, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AN_LicenseManagerProxy__ctor_m558 (AN_LicenseManagerProxy_t105 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_LicenseManagerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_LicenseManagerProxy_CallActivityFunction_m559 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral259, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_LicenseManagerProxy::StartLicenseRequest(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_LicenseManagerProxy_StartLicenseRequest_m560 (Object_t * __this /* static, unused */, String_t* ___base64PublicKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___base64PublicKey;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AN_LicenseManagerProxy_CallActivityFunction_m559(NULL /*static, unused*/, (String_t*) &_stringLiteral260, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_PlusButtonProxy__ctor_m561 (AN_PlusButtonProxy_t106 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_PlusButtonProxy_CallActivityFunction_m562 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral261, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::createPlusButton(System.Int32,System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_createPlusButton_m563 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___url, int32_t ___size, int32_t ___annotation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_0;
		String_t* L_5 = ___url;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		int32_t L_7 = ___size;
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t531* L_10 = L_6;
		int32_t L_11 = ___annotation;
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_13;
		AN_PlusButtonProxy_CallActivityFunction_m562(NULL /*static, unused*/, (String_t*) &_stringLiteral262, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::setGravity(System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_setGravity_m564 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		int32_t L_1 = ___gravity;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_0;
		int32_t L_5 = ___id;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		AN_PlusButtonProxy_CallActivityFunction_m562(NULL /*static, unused*/, (String_t*) &_stringLiteral263, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::setPosition(System.Int32,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_setPosition_m565 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = ___x;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_0;
		int32_t L_5 = ___y;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_4;
		int32_t L_9 = ___id;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		AN_PlusButtonProxy_CallActivityFunction_m562(NULL /*static, unused*/, (String_t*) &_stringLiteral264, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::show(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_show_m566 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m562(NULL /*static, unused*/, (String_t*) &_stringLiteral265, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::hide(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_hide_m567 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m562(NULL /*static, unused*/, (String_t*) &_stringLiteral266, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_PlusButtonProxy::refresh(System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void AN_PlusButtonProxy_refresh_m568 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		int32_t L_1 = ___id;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		AN_PlusButtonProxy_CallActivityFunction_m562(NULL /*static, unused*/, (String_t*) &_stringLiteral267, L_0, /*hidden argument*/NULL);
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
extern "C" void AN_SocialSharingProxy__ctor_m569 (AN_SocialSharingProxy_t107 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_SocialSharingProxy_CallActivityFunction_m570 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral268, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartShareIntent_m571 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___filters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___filters;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_SocialSharingProxy_CallActivityFunction_m570(NULL /*static, unused*/, (String_t*) &_stringLiteral269, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::StartShareIntent(System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_StartShareIntent_m572 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___media, String_t* ___filters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___media;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		String_t* L_9 = ___filters;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_SocialSharingProxy_CallActivityFunction_m570(NULL /*static, unused*/, (String_t*) &_stringLiteral270, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::SendMailWithImage(System.String,System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_SendMailWithImage_m573 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, String_t* ___media, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 5));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___email;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t531* L_8 = L_6;
		String_t* L_9 = ___media;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_9;
		AN_SocialSharingProxy_CallActivityFunction_m570(NULL /*static, unused*/, (String_t*) &_stringLiteral271, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::SendMail(System.String,System.String,System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_SendMail_m574 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___email, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = ___caption;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___message;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = ___subject;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		ObjectU5BU5D_t531* L_6 = L_4;
		String_t* L_7 = ___email;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		AN_SocialSharingProxy_CallActivityFunction_m570(NULL /*static, unused*/, (String_t*) &_stringLiteral272, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_SocialSharingProxy::InstagramPostImage(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_SocialSharingProxy_InstagramPostImage_m575 (Object_t * __this /* static, unused */, String_t* ___data, String_t* ___cpation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___cpation;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AN_SocialSharingProxy_CallActivityFunction_m570(NULL /*static, unused*/, (String_t*) &_stringLiteral273, L_2, /*hidden argument*/NULL);
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
extern "C" void AN_TVControllerProxy__ctor_m576 (AN_TVControllerProxy_t108 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_TVControllerProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_TVControllerProxy_CallActivityFunction_m577 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral274, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AN_TVControllerProxy::AN_CheckForATVDevice()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AN_TVControllerProxy_AN_CheckForATVDevice_m578 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AN_TVControllerProxy_CallActivityFunction_m577(NULL /*static, unused*/, (String_t*) &_stringLiteral275, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
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
extern "C" void AndroidNative__ctor_m579 (AndroidNative_t109 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterInit(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterInit_m580 (Object_t * __this /* static, unused */, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___consumer_key;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___consumer_secret;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral276, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::AuthificateUser()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_AuthificateUser_m581 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral277, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadUserData()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadUserData_m582 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral278, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterPost(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterPost_m583 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___status;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral279, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::TwitterPostWithImage(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_TwitterPostWithImage_m584 (Object_t * __this /* static, unused */, String_t* ___status, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___status;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___data;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral280, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LogoutFromTwitter()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LogoutFromTwitter_m585 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral281, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::InitCameraAPI(System.String,System.Int32,System.Int32)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_InitCameraAPI_m586 (Object_t * __this /* static, unused */, String_t* ___folderName, int32_t ___maxSize, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___folderName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = Int32_ToString_m164((&___maxSize), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t531* L_4 = L_2;
		String_t* L_5 = Int32_ToString_m164((&___mode), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_5;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral282, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::SaveToGalalry(System.String,System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_SaveToGalalry_m587 (Object_t * __this /* static, unused */, String_t* ___ImageData, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = ___ImageData;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t531* L_2 = L_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral283, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetImageFromGallery()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetImageFromGallery_m588 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral284, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetImageFromCamera(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetImageFromCamera_m589 (Object_t * __this /* static, unused */, bool ___bSaveToGallery, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = Boolean_ToString_m2625((&___bSaveToGallery), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral285, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::isPackageInstalled(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_isPackageInstalled_m590 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___packagename;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral286, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::runPackage(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_runPackage_m591 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___packagename;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral287, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadAndroidId()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadAndroidId_m592 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral288, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadContacts()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadContacts_m593 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral289, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadPackageInfo()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadPackageInfo_m594 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral290, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetInternalStoragePath()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetInternalStoragePath_m595 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m601(NULL /*static, unused*/, (String_t*) &_stringLiteral291, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::GetExternalStoragePath()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_GetExternalStoragePath_m596 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m601(NULL /*static, unused*/, (String_t*) &_stringLiteral292, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::LoadLocaleInfo()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_LoadLocaleInfo_m597 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallUtility_m601(NULL /*static, unused*/, (String_t*) &_stringLiteral293, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::StartLockTask()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_StartLockTask_m598 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral294, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::StopLockTask()
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_StopLockTask_m599 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral295, ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::OpenAppInStore(System.String)
extern TypeInfo* ObjectU5BU5D_t531_il2cpp_TypeInfo_var;
extern "C" void AndroidNative_OpenAppInStore_m600 (Object_t * __this /* static, unused */, String_t* ___appPackageName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t531* L_0 = ((ObjectU5BU5D_t531*)SZArrayNew(ObjectU5BU5D_t531_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___appPackageName;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		AndroidNative_CallAndroidNativeBridge_m602(NULL /*static, unused*/, (String_t*) &_stringLiteral296, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::CallUtility(System.String,System.Object[])
extern "C" void AndroidNative_CallUtility_m601 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral297, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidNative::CallAndroidNativeBridge(System.String,System.Object[])
extern "C" void AndroidNative_CallAndroidNativeBridge_m602 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t531* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		ObjectU5BU5D_t531* L_1 = ___args;
		AN_ProxyPool_CallStatic_m428(NULL /*static, unused*/, (String_t*) &_stringLiteral298, L_0, L_1, /*hidden argument*/NULL);
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
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
struct ScriptableObject_t111;
struct SocialPlatfromSettings_t110;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
struct ScriptableObject_t111;
struct Object_t;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" Object_t * ScriptableObject_CreateInstance_TisObject_t_m2628_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ScriptableObject_CreateInstance_TisObject_t_m2628(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m2628_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<SocialPlatfromSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<SocialPlatfromSettings>()
#define ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t110_m2627(__this /* static, unused */, method) (( SocialPlatfromSettings_t110 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m2628_gshared)(__this /* static, unused */, method)


// System.Void SocialPlatfromSettings::.ctor()
extern TypeInfo* List_1_t73_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2579_MethodInfo_var;
extern "C" void SocialPlatfromSettings__ctor_m603 (SocialPlatfromSettings_t110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1__ctor_m2579_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___showPermitions_7 = 1;
		__this->___ShowActions_8 = 1;
		__this->___ShowAPIS_9 = 1;
		List_1_t73 * L_0 = (List_1_t73 *)il2cpp_codegen_object_new (List_1_t73_il2cpp_TypeInfo_var);
		List_1__ctor_m2579(L_0, /*hidden argument*/List_1__ctor_m2579_MethodInfo_var);
		__this->___fb_scopes_list_10 = L_0;
		__this->___TWITTER_CONSUMER_KEY_11 = (String_t*) &_stringLiteral301;
		__this->___TWITTER_CONSUMER_SECRET_12 = (String_t*) &_stringLiteral302;
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
		ScriptableObject__ctor_m2629(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialPlatfromSettings::.cctor()
extern "C" void SocialPlatfromSettings__cctor_m604 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// SocialPlatfromSettings SocialPlatfromSettings::get_Instance()
extern TypeInfo* SocialPlatfromSettings_t110_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t110_m2627_MethodInfo_var;
extern "C" SocialPlatfromSettings_t110 * SocialPlatfromSettings_get_Instance_m605 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialPlatfromSettings_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t110_m2627_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t110_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t110 * L_0 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		bool L_1 = Object_op_Equality_m2630(NULL /*static, unused*/, L_0, (Object_t547 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t547 * L_2 = Resources_Load_m2631(NULL /*static, unused*/, (String_t*) &_stringLiteral299, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t110_il2cpp_TypeInfo_var);
		((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21 = ((SocialPlatfromSettings_t110 *)IsInst(L_2, SocialPlatfromSettings_t110_il2cpp_TypeInfo_var));
		SocialPlatfromSettings_t110 * L_3 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		bool L_4 = Object_op_Equality_m2630(NULL /*static, unused*/, L_3, (Object_t547 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		SocialPlatfromSettings_t110 * L_5 = ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t110_m2627(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisSocialPlatfromSettings_t110_m2627_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t110_il2cpp_TypeInfo_var);
		((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21 = L_5;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t110_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t110 * L_6 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		return L_6;
	}
}
// System.String SocialPlatfromSettings::get_fb_scopes()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t570_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2632_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2633_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2634_MethodInfo_var;
extern "C" String_t* SocialPlatfromSettings_get_fb_scopes_m606 (SocialPlatfromSettings_t110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2632_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		Enumerator_get_Current_m2633_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Enumerator_MoveNext_m2634_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Enumerator_t570  V_2 = {0};
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
		List_1_t73 * L_1 = (__this->___fb_scopes_list_10);
		NullCheck(L_1);
		Enumerator_t570  L_2 = List_1_GetEnumerator_m2632(L_1, /*hidden argument*/List_1_GetEnumerator_m2632_MethodInfo_var);
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
			String_t* L_3 = Enumerator_get_Current_m2633((&V_2), /*hidden argument*/Enumerator_get_Current_m2633_MethodInfo_var);
			V_1 = L_3;
			String_t* L_4 = V_0;
			String_t* L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m222(NULL /*static, unused*/, L_4, L_5, (String_t*) &_stringLiteral300, /*hidden argument*/NULL);
			V_0 = L_6;
		}

IL_002c:
		{
			bool L_7 = Enumerator_MoveNext_m2634((&V_2), /*hidden argument*/Enumerator_MoveNext_m2634_MethodInfo_var);
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
		Enumerator_t570  L_8 = V_2;
		Enumerator_t570  L_9 = L_8;
		Object_t * L_10 = Box(Enumerator_t570_il2cpp_TypeInfo_var, &L_9);
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
extern TypeInfo* SocialPlatfromSettings_t110_il2cpp_TypeInfo_var;
extern "C" void SocialPlatfromSettings_AddDefaultScopes_m607 (SocialPlatfromSettings_t110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialPlatfromSettings_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SocialPlatfromSettings_t110_il2cpp_TypeInfo_var);
		SocialPlatfromSettings_t110 * L_0 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_0);
		List_1_t73 * L_1 = (L_0->___fb_scopes_list_10);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_1, (String_t*) &_stringLiteral303);
		SocialPlatfromSettings_t110 * L_2 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_2);
		List_1_t73 * L_3 = (L_2->___fb_scopes_list_10);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, (String_t*) &_stringLiteral304);
		SocialPlatfromSettings_t110 * L_4 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_4);
		List_1_t73 * L_5 = (L_4->___fb_scopes_list_10);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_5, (String_t*) &_stringLiteral305);
		SocialPlatfromSettings_t110 * L_6 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_6);
		List_1_t73 * L_7 = (L_6->___fb_scopes_list_10);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, (String_t*) &_stringLiteral45);
		SocialPlatfromSettings_t110 * L_8 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_8);
		List_1_t73 * L_9 = (L_8->___fb_scopes_list_10);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_9, (String_t*) &_stringLiteral306);
		SocialPlatfromSettings_t110 * L_10 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_10);
		List_1_t73 * L_11 = (L_10->___fb_scopes_list_10);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_11, (String_t*) &_stringLiteral307);
		SocialPlatfromSettings_t110 * L_12 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_12);
		List_1_t73 * L_13 = (L_12->___fb_scopes_list_10);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_13, (String_t*) &_stringLiteral308);
		SocialPlatfromSettings_t110 * L_14 = ((SocialPlatfromSettings_t110_StaticFields*)SocialPlatfromSettings_t110_il2cpp_TypeInfo_var->static_fields)->___instance_21;
		NullCheck(L_14);
		List_1_t73 * L_15 = (L_14->___fb_scopes_list_10);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_15, (String_t*) &_stringLiteral309);
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
extern "C" void AndroidGravity__ctor_m608 (AndroidGravity_t113 * __this, const MethodInfo* method)
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
extern "C" void AndroidLogLevel__ctor_m609 (AndroidLogLevel_t114 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// AndroidMonth
#include "AssemblyU2DCSharp_AndroidMonth.h"
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



// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
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
extern "C" void GoogleGravity__ctor_m610 (GoogleGravity_t118 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
#ifndef _MSC_VER
#else
#endif
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSizeMethodDeclarations.h"



// GADInAppResolution
#include "AssemblyU2DCSharp_GADInAppResolution.h"
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
extern "C" void GP_MatchesSortOrder__ctor_m611 (GP_MatchesSortOrder_t133 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_MatchesSortOrder::Start()
extern "C" void GP_MatchesSortOrder_Start_m612 (GP_MatchesSortOrder_t133 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GP_MatchesSortOrder::Update()
extern "C" void GP_MatchesSortOrder_Update_m613 (GP_MatchesSortOrder_t133 * __this, const MethodInfo* method)
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
extern "C" void FacebookEvents__ctor_m614 (FacebookEvents_t144 * __this, const MethodInfo* method)
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
extern "C" void GoogleMobileAdEvents__ctor_m615 (GoogleMobileAdEvents_t145 * __this, const MethodInfo* method)
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
extern "C" void TwitterEvents__ctor_m616 (TwitterEvents_t146 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
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

// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void AndroidActivityResult::.ctor(System.String,System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void AndroidActivityResult__ctor_m617 (AndroidActivityResult_t147 * __this, String_t* ___rId, String_t* ___codeString, const MethodInfo* method)
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
		int32_t L_1 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____requestId_1 = L_1;
		String_t* L_2 = ___codeString;
		int32_t L_3 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____code_0 = L_3;
		return;
	}
}
// AdroidActivityResultCodes AndroidActivityResult::get_code()
extern "C" int32_t AndroidActivityResult_get_code_m618 (AndroidActivityResult_t147 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____code_0);
		return L_0;
	}
}
// System.Int32 AndroidActivityResult::get_requestId()
extern "C" int32_t AndroidActivityResult_get_requestId_m619 (AndroidActivityResult_t147 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____requestId_1);
		return L_0;
	}
}
// System.Boolean AndroidActivityResult::get_IsSucceeded()
extern "C" bool AndroidActivityResult_get_IsSucceeded_m620 (AndroidActivityResult_t147 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = AndroidActivityResult_get_code_m618(__this, /*hidden argument*/NULL);
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
extern "C" bool AndroidActivityResult_get_IsFailed_m621 (AndroidActivityResult_t147 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AndroidActivityResult_get_IsSucceeded_m620(__this, /*hidden argument*/NULL);
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
extern "C" void AndroidGameActivityResult__ctor_m622 (AndroidGameActivityResult_t148 * __this, const MethodInfo* method)
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

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"


// System.Void AsyncTask::.ctor()
extern "C" void AsyncTask__ctor_m623 (AsyncTask_t149 * __this, const MethodInfo* method)
{
	{
		EventDispatcher__ctor_m353(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AsyncTask::Awake()
extern "C" void AsyncTask_Awake_m624 (AsyncTask_t149 * __this, const MethodInfo* method)
{
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2636(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m2637(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GADBannerIdFactory
#include "AssemblyU2DCSharp_GADBannerIdFactory.h"
#ifndef _MSC_VER
#else
#endif
// GADBannerIdFactory
#include "AssemblyU2DCSharp_GADBannerIdFactoryMethodDeclarations.h"



// System.Void GADBannerIdFactory::.ctor()
extern "C" void GADBannerIdFactory__ctor_m625 (GADBannerIdFactory_t150 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GADBannerIdFactory::.cctor()
extern "C" void GADBannerIdFactory__cctor_m626 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 GADBannerIdFactory::get_nextId()
extern TypeInfo* GADBannerIdFactory_t150_il2cpp_TypeInfo_var;
extern "C" int32_t GADBannerIdFactory_get_nextId_m627 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GADBannerIdFactory_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GADBannerIdFactory_t150_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GADBannerIdFactory_t150_StaticFields*)GADBannerIdFactory_t150_il2cpp_TypeInfo_var->static_fields)->____nextId_0;
		((GADBannerIdFactory_t150_StaticFields*)GADBannerIdFactory_t150_il2cpp_TypeInfo_var->static_fields)->____nextId_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = ((GADBannerIdFactory_t150_StaticFields*)GADBannerIdFactory_t150_il2cpp_TypeInfo_var->static_fields)->____nextId_0;
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
extern "C" void GPAchievement__ctor_m628 (GPAchievement_t151 * __this, String_t* ___aId, String_t* ___aName, String_t* ___aDescr, String_t* ___aCurentSteps, String_t* ___aTotalSteps, String_t* ___aState, String_t* ___aType, const MethodInfo* method)
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
		int32_t L_4 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____currentSteps_3 = L_4;
		String_t* L_5 = ___aTotalSteps;
		int32_t L_6 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->____totalSteps_4 = L_6;
		String_t* L_7 = ___aType;
		int32_t L_8 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_9 = PlayServiceUtil_GetAchievementTypeById_m765(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->____type_5 = L_9;
		String_t* L_10 = ___aState;
		int32_t L_11 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_12 = PlayServiceUtil_GetAchievementStateById_m764(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->____state_6 = L_12;
		return;
	}
}
// System.String GPAchievement::get_id()
extern "C" String_t* GPAchievement_get_id_m629 (GPAchievement_t151 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GPAchievement::get_name()
extern "C" String_t* GPAchievement_get_name_m630 (GPAchievement_t151 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_1);
		return L_0;
	}
}
// System.String GPAchievement::get_description()
extern "C" String_t* GPAchievement_get_description_m631 (GPAchievement_t151 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____description_2);
		return L_0;
	}
}
// System.Int32 GPAchievement::get_currentSteps()
extern "C" int32_t GPAchievement_get_currentSteps_m632 (GPAchievement_t151 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentSteps_3);
		return L_0;
	}
}
// System.Int32 GPAchievement::get_totalSteps()
extern "C" int32_t GPAchievement_get_totalSteps_m633 (GPAchievement_t151 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____totalSteps_4);
		return L_0;
	}
}
// GPAchievementType GPAchievement::get_type()
extern "C" int32_t GPAchievement_get_type_m634 (GPAchievement_t151 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____type_5);
		return L_0;
	}
}
// GPAchievementState GPAchievement::get_state()
extern "C" int32_t GPAchievement_get_state_m635 (GPAchievement_t151 * __this, const MethodInfo* method)
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
extern "C" void GPGameRequest__ctor_m636 (GPGameRequest_t152 * __this, const MethodInfo* method)
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// System.Collections.Generic.List`1<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec.h"
// GPScore
#include "AssemblyU2DCSharp_GPScore.h"
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// GPScoreCollection
#include "AssemblyU2DCSharp_GPScoreCollectionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// System.Collections.Generic.List`1<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// GPScore
#include "AssemblyU2DCSharp_GPScoreMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void GPLeaderBoard::.ctor(System.String,System.String)
extern TypeInfo* GPScoreCollection_t153_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t154_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2638_MethodInfo_var;
extern "C" void GPLeaderBoard__ctor_m637 (GPLeaderBoard_t155 * __this, String_t* ___lId, String_t* ___lName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPScoreCollection_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		Dictionary_2_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		Dictionary_2__ctor_m2638_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	{
		GPScoreCollection_t153 * L_0 = (GPScoreCollection_t153 *)il2cpp_codegen_object_new (GPScoreCollection_t153_il2cpp_TypeInfo_var);
		GPScoreCollection__ctor_m647(L_0, /*hidden argument*/NULL);
		__this->___SocsialCollection_2 = L_0;
		GPScoreCollection_t153 * L_1 = (GPScoreCollection_t153 *)il2cpp_codegen_object_new (GPScoreCollection_t153_il2cpp_TypeInfo_var);
		GPScoreCollection__ctor_m647(L_1, /*hidden argument*/NULL);
		__this->___GlobalCollection_3 = L_1;
		Dictionary_2_t154 * L_2 = (Dictionary_2_t154 *)il2cpp_codegen_object_new (Dictionary_2_t154_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2638(L_2, /*hidden argument*/Dictionary_2__ctor_m2638_MethodInfo_var);
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
extern "C" void GPLeaderBoard_UpdateName_m638 (GPLeaderBoard_t155 * __this, String_t* ___lName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___lName;
		__this->____name_1 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<GPScore> GPLeaderBoard::GetScoresList(GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* List_1_t532_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2639_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m2640_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m2641_MethodInfo_var;
extern "C" List_1_t532 * GPLeaderBoard_GetScoresList_m639 (GPLeaderBoard_t155 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		List_1__ctor_m2639_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		Dictionary_2_get_Values_m2640_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483719);
		List_1_AddRange_m2641_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		s_Il2CppMethodIntialized = true;
	}
	GPScoreCollection_t153 * V_0 = {0};
	Dictionary_2_t156 * V_1 = {0};
	List_1_t532 * V_2 = {0};
	int32_t V_3 = {0};
	int32_t V_4 = {0};
	{
		GPScoreCollection_t153 * L_0 = (__this->___GlobalCollection_3);
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
		GPScoreCollection_t153 * L_4 = (__this->___GlobalCollection_3);
		V_0 = L_4;
		goto IL_0033;
	}

IL_0027:
	{
		GPScoreCollection_t153 * L_5 = (__this->___SocsialCollection_2);
		V_0 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		GPScoreCollection_t153 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_t156 * L_7 = (L_6->___AllTimeScores_0);
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
		GPScoreCollection_t153 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_t156 * L_11 = (L_10->___AllTimeScores_0);
		V_1 = L_11;
		goto IL_0079;
	}

IL_0061:
	{
		GPScoreCollection_t153 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t156 * L_13 = (L_12->___TodayScores_2);
		V_1 = L_13;
		goto IL_0079;
	}

IL_006d:
	{
		GPScoreCollection_t153 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t156 * L_15 = (L_14->___WeekScores_1);
		V_1 = L_15;
		goto IL_0079;
	}

IL_0079:
	{
		List_1_t532 * L_16 = (List_1_t532 *)il2cpp_codegen_object_new (List_1_t532_il2cpp_TypeInfo_var);
		List_1__ctor_m2639(L_16, /*hidden argument*/List_1__ctor_m2639_MethodInfo_var);
		V_2 = L_16;
		List_1_t532 * L_17 = V_2;
		Dictionary_2_t156 * L_18 = V_1;
		NullCheck(L_18);
		ValueCollection_t571 * L_19 = Dictionary_2_get_Values_m2640(L_18, /*hidden argument*/Dictionary_2_get_Values_m2640_MethodInfo_var);
		NullCheck(L_17);
		List_1_AddRange_m2641(L_17, L_19, /*hidden argument*/List_1_AddRange_m2641_MethodInfo_var);
		List_1_t532 * L_20 = V_2;
		return L_20;
	}
}
// GPScore GPLeaderBoard::GetScoreByPlayerId(System.String,GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* Enumerator_t572_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2642_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2643_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2644_MethodInfo_var;
extern "C" GPScore_t275 * GPLeaderBoard_GetScoreByPlayerId_m640 (GPLeaderBoard_t155 * __this, String_t* ___playerId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2642_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		Enumerator_get_Current_m2643_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		Enumerator_MoveNext_m2644_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483723);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t532 * V_0 = {0};
	GPScore_t275 * V_1 = {0};
	Enumerator_t572  V_2 = {0};
	GPScore_t275 * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = ___collection;
		List_1_t532 * L_2 = GPLeaderBoard_GetScoresList_m639(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t532 * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t572  L_4 = List_1_GetEnumerator_m2642(L_3, /*hidden argument*/List_1_GetEnumerator_m2642_MethodInfo_var);
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
			GPScore_t275 * L_5 = Enumerator_get_Current_m2643((&V_2), /*hidden argument*/Enumerator_get_Current_m2643_MethodInfo_var);
			V_1 = L_5;
			GPScore_t275 * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = GPScore_get_playerId_m1106(L_6, /*hidden argument*/NULL);
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
			GPScore_t275 * L_10 = V_1;
			V_3 = L_10;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_0035:
		{
			bool L_11 = Enumerator_MoveNext_m2644((&V_2), /*hidden argument*/Enumerator_MoveNext_m2644_MethodInfo_var);
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
		Enumerator_t572  L_12 = V_2;
		Enumerator_t572  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t572_il2cpp_TypeInfo_var, &L_13);
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
		return (GPScore_t275 *)NULL;
	}

IL_0054:
	{
		GPScore_t275 * L_15 = V_3;
		return L_15;
	}
}
// GPScore GPLeaderBoard::GetScore(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern "C" GPScore_t275 * GPLeaderBoard_GetScore_m641 (GPLeaderBoard_t155 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	GPScoreCollection_t153 * V_0 = {0};
	Dictionary_2_t156 * V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	{
		GPScoreCollection_t153 * L_0 = (__this->___GlobalCollection_3);
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
		GPScoreCollection_t153 * L_4 = (__this->___GlobalCollection_3);
		V_0 = L_4;
		goto IL_0033;
	}

IL_0027:
	{
		GPScoreCollection_t153 * L_5 = (__this->___SocsialCollection_2);
		V_0 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		GPScoreCollection_t153 * L_6 = V_0;
		NullCheck(L_6);
		Dictionary_2_t156 * L_7 = (L_6->___AllTimeScores_0);
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
		GPScoreCollection_t153 * L_10 = V_0;
		NullCheck(L_10);
		Dictionary_2_t156 * L_11 = (L_10->___AllTimeScores_0);
		V_1 = L_11;
		goto IL_0077;
	}

IL_005f:
	{
		GPScoreCollection_t153 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t156 * L_13 = (L_12->___TodayScores_2);
		V_1 = L_13;
		goto IL_0077;
	}

IL_006b:
	{
		GPScoreCollection_t153 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t156 * L_15 = (L_14->___WeekScores_1);
		V_1 = L_15;
		goto IL_0077;
	}

IL_0077:
	{
		Dictionary_2_t156 * L_16 = V_1;
		int32_t L_17 = ___rank;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(!0) */, L_16, L_17);
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Dictionary_2_t156 * L_19 = V_1;
		int32_t L_20 = ___rank;
		NullCheck(L_19);
		GPScore_t275 * L_21 = (GPScore_t275 *)VirtFuncInvoker1< GPScore_t275 *, int32_t >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(!0) */, L_19, L_20);
		return L_21;
	}

IL_008b:
	{
		return (GPScore_t275 *)NULL;
	}
}
// GPScore GPLeaderBoard::GetCurrentPlayerScore(GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* GPBoardTimeSpan_t123_il2cpp_TypeInfo_var;
extern TypeInfo* GPCollectionType_t124_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GPScore_t275 * GPLeaderBoard_GetCurrentPlayerScore_m642 (GPLeaderBoard_t155 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPBoardTimeSpan_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		GPCollectionType_t124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(GPBoardTimeSpan_t123_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		int32_t L_4 = ___collection;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(GPCollectionType_t124_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m222(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral310, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t154 * L_9 = (__this->___currentPlayerRank_4);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(!0) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t154 * L_12 = (__this->___currentPlayerRank_4);
		String_t* L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)VirtFuncInvoker1< int32_t, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(!0) */, L_12, L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		int32_t L_16 = ___timeSpan;
		int32_t L_17 = ___collection;
		GPScore_t275 * L_18 = GPLeaderBoard_GetScore_m641(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0049:
	{
		return (GPScore_t275 *)NULL;
	}
}
// System.Void GPLeaderBoard::UpdateCurrentPlayerRank(System.Int32,GPBoardTimeSpan,GPCollectionType)
extern TypeInfo* GPBoardTimeSpan_t123_il2cpp_TypeInfo_var;
extern TypeInfo* GPCollectionType_t124_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GPLeaderBoard_UpdateCurrentPlayerRank_m643 (GPLeaderBoard_t155 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GPBoardTimeSpan_t123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		GPCollectionType_t124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = ___timeSpan;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(GPBoardTimeSpan_t123_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		int32_t L_4 = ___collection;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(GPCollectionType_t124_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m222(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral310, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t154 * L_9 = (__this->___currentPlayerRank_4);
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(!0) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t154 * L_12 = (__this->___currentPlayerRank_4);
		String_t* L_13 = V_0;
		int32_t L_14 = ___rank;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, L_12, L_13, L_14);
		goto IL_0051;
	}

IL_0044:
	{
		Dictionary_2_t154 * L_15 = (__this->___currentPlayerRank_4);
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
extern "C" void GPLeaderBoard_UpdateScore_m644 (GPLeaderBoard_t155 * __this, GPScore_t275 * ___score, const MethodInfo* method)
{
	GPScoreCollection_t153 * V_0 = {0};
	Dictionary_2_t156 * V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	{
		GPScoreCollection_t153 * L_0 = (__this->___GlobalCollection_3);
		V_0 = L_0;
		GPScore_t275 * L_1 = ___score;
		NullCheck(L_1);
		int32_t L_2 = GPScore_get_collection_m1108(L_1, /*hidden argument*/NULL);
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
		GPScoreCollection_t153 * L_5 = (__this->___GlobalCollection_3);
		V_0 = L_5;
		goto IL_0038;
	}

IL_002c:
	{
		GPScoreCollection_t153 * L_6 = (__this->___SocsialCollection_2);
		V_0 = L_6;
		goto IL_0038;
	}

IL_0038:
	{
		GPScoreCollection_t153 * L_7 = V_0;
		NullCheck(L_7);
		Dictionary_2_t156 * L_8 = (L_7->___AllTimeScores_0);
		V_1 = L_8;
		GPScore_t275 * L_9 = ___score;
		NullCheck(L_9);
		int32_t L_10 = GPScore_get_timeSpan_m1109(L_9, /*hidden argument*/NULL);
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
		GPScoreCollection_t153 * L_12 = V_0;
		NullCheck(L_12);
		Dictionary_2_t156 * L_13 = (L_12->___AllTimeScores_0);
		V_1 = L_13;
		goto IL_0081;
	}

IL_0069:
	{
		GPScoreCollection_t153 * L_14 = V_0;
		NullCheck(L_14);
		Dictionary_2_t156 * L_15 = (L_14->___TodayScores_2);
		V_1 = L_15;
		goto IL_0081;
	}

IL_0075:
	{
		GPScoreCollection_t153 * L_16 = V_0;
		NullCheck(L_16);
		Dictionary_2_t156 * L_17 = (L_16->___WeekScores_1);
		V_1 = L_17;
		goto IL_0081;
	}

IL_0081:
	{
		Dictionary_2_t156 * L_18 = V_1;
		GPScore_t275 * L_19 = ___score;
		NullCheck(L_19);
		int32_t L_20 = GPScore_get_rank_m1104(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_21 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(!0) */, L_18, L_20);
		if (!L_21)
		{
			goto IL_00a4;
		}
	}
	{
		Dictionary_2_t156 * L_22 = V_1;
		GPScore_t275 * L_23 = ___score;
		NullCheck(L_23);
		int32_t L_24 = GPScore_get_rank_m1104(L_23, /*hidden argument*/NULL);
		GPScore_t275 * L_25 = ___score;
		NullCheck(L_22);
		VirtActionInvoker2< int32_t, GPScore_t275 * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(!0,!1) */, L_22, L_24, L_25);
		goto IL_00b1;
	}

IL_00a4:
	{
		Dictionary_2_t156 * L_26 = V_1;
		GPScore_t275 * L_27 = ___score;
		NullCheck(L_27);
		int32_t L_28 = GPScore_get_rank_m1104(L_27, /*hidden argument*/NULL);
		GPScore_t275 * L_29 = ___score;
		NullCheck(L_26);
		VirtActionInvoker2< int32_t, GPScore_t275 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(!0,!1) */, L_26, L_28, L_29);
	}

IL_00b1:
	{
		return;
	}
}
// System.String GPLeaderBoard::get_id()
extern "C" String_t* GPLeaderBoard_get_id_m645 (GPLeaderBoard_t155 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GPLeaderBoard::get_name()
extern "C" String_t* GPLeaderBoard_get_name_m646 (GPLeaderBoard_t155 * __this, const MethodInfo* method)
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
extern TypeInfo* Dictionary_2_t156_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2645_MethodInfo_var;
extern "C" void GPScoreCollection__ctor_m647 (GPScoreCollection_t153 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(144);
		Dictionary_2__ctor_m2645_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t156 * L_0 = (Dictionary_2_t156 *)il2cpp_codegen_object_new (Dictionary_2_t156_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2645(L_0, /*hidden argument*/Dictionary_2__ctor_m2645_MethodInfo_var);
		__this->___AllTimeScores_0 = L_0;
		Dictionary_2_t156 * L_1 = (Dictionary_2_t156 *)il2cpp_codegen_object_new (Dictionary_2_t156_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2645(L_1, /*hidden argument*/Dictionary_2__ctor_m2645_MethodInfo_var);
		__this->___WeekScores_1 = L_1;
		Dictionary_2_t156 * L_2 = (Dictionary_2_t156 *)il2cpp_codegen_object_new (Dictionary_2_t156_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2645(L_2, /*hidden argument*/Dictionary_2__ctor_m2645_MethodInfo_var);
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
extern "C" void GP_Invite__ctor_m648 (GP_Invite_t158 * __this, const MethodInfo* method)
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
extern "C" void GP_Participant__ctor_m649 (GP_Participant_t157 * __this, String_t* ___uid, String_t* ___playerUid, String_t* ___stat, String_t* ___hiResImg, String_t* ___IconImg, String_t* ___Name, const MethodInfo* method)
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
		int32_t L_3 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
extern "C" void GP_Participant_SetResult_m650 (GP_Participant_t157 * __this, GP_ParticipantResult_t159 * ___r, const MethodInfo* method)
{
	{
		GP_ParticipantResult_t159 * L_0 = ___r;
		__this->____result_5 = L_0;
		return;
	}
}
// System.String GP_Participant::get_id()
extern "C" String_t* GP_Participant_get_id_m651 (GP_Participant_t157 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____id_0);
		return L_0;
	}
}
// System.String GP_Participant::get_playerId()
extern "C" String_t* GP_Participant_get_playerId_m652 (GP_Participant_t157 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____playerid_1);
		return L_0;
	}
}
// System.String GP_Participant::get_HiResImageUrl()
extern "C" String_t* GP_Participant_get_HiResImageUrl_m653 (GP_Participant_t157 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____HiResImageUrl_2);
		return L_0;
	}
}
// System.String GP_Participant::get_IconImageUrl()
extern "C" String_t* GP_Participant_get_IconImageUrl_m654 (GP_Participant_t157 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____IconImageUrl_3);
		return L_0;
	}
}
// System.String GP_Participant::get_DisplayName()
extern "C" String_t* GP_Participant_get_DisplayName_m655 (GP_Participant_t157 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____DisplayName_4);
		return L_0;
	}
}
// GP_RTM_ParticipantStatus GP_Participant::get_Status()
extern "C" int32_t GP_Participant_get_Status_m656 (GP_Participant_t157 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____status_6);
		return L_0;
	}
}
// GP_ParticipantResult GP_Participant::get_Result()
extern "C" GP_ParticipantResult_t159 * GP_Participant_get_Result_m657 (GP_Participant_t157 * __this, const MethodInfo* method)
{
	{
		GP_ParticipantResult_t159 * L_0 = (__this->____result_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// GP_ParticipantResult
#include "AssemblyU2DCSharp_GP_ParticipantResultMethodDeclarations.h"



// System.Void GP_ParticipantResult::.ctor(System.String,System.Int32,System.Int32)
extern "C" void GP_ParticipantResult__ctor_m658 (GP_ParticipantResult_t159 * __this, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method)
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
extern "C" void GP_ParticipantResult__ctor_m659 (GP_ParticipantResult_t159 * __this, int32_t ___versionCode, String_t* ___participantId, int32_t ___result, int32_t ___placing, const MethodInfo* method)
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
extern "C" void GP_ParticipantResult__ctor_m660 (GP_ParticipantResult_t159 * __this, StringU5BU5D_t45* ___data, int32_t ___index, const MethodInfo* method)
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
		int32_t L_6 = Convert_ToInt32_m2635(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		__this->____Placing_0 = L_6;
		StringU5BU5D_t45* L_7 = ___data;
		int32_t L_8 = ___index;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)L_8+(int32_t)2)));
		int32_t L_9 = ((int32_t)((int32_t)L_8+(int32_t)2));
		int32_t L_10 = Convert_ToInt32_m2635(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)), /*hidden argument*/NULL);
		__this->____Result_1 = L_10;
		StringU5BU5D_t45* L_11 = ___data;
		int32_t L_12 = ___index;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12+(int32_t)3)));
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)3));
		int32_t L_14 = Convert_ToInt32_m2635(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_13)), /*hidden argument*/NULL);
		__this->____VersionCode_2 = L_14;
		return;
	}
}
// System.Int32 GP_ParticipantResult::get_Placing()
extern "C" int32_t GP_ParticipantResult_get_Placing_m661 (GP_ParticipantResult_t159 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Placing_0);
		return L_0;
	}
}
// System.Int32 GP_ParticipantResult::get_Result()
extern "C" int32_t GP_ParticipantResult_get_Result_m662 (GP_ParticipantResult_t159 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Result_1);
		return L_0;
	}
}
// System.Int32 GP_ParticipantResult::get_VersionCode()
extern "C" int32_t GP_ParticipantResult_get_VersionCode_m663 (GP_ParticipantResult_t159 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____VersionCode_2);
		return L_0;
	}
}
// System.String GP_ParticipantResult::get_ParticipantId()
extern "C" String_t* GP_ParticipantResult_get_ParticipantId_m664 (GP_ParticipantResult_t159 * __this, const MethodInfo* method)
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
extern "C" void GP_RTM_Network_Package__ctor_m665 (GP_RTM_Network_Package_t160 * __this, String_t* ___player, String_t* ___recievedData, const MethodInfo* method)
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
		String_t* L_2 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral311, L_1, /*hidden argument*/NULL);
		Debug_Log_m2565(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___recievedData;
		ByteU5BU5D_t36* L_4 = GP_RTM_Network_Package_ConvertStringToByteData_m668(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____buffer_2 = L_4;
		return;
	}
}
// System.String GP_RTM_Network_Package::get_participantId()
extern "C" String_t* GP_RTM_Network_Package_get_participantId_m666 (GP_RTM_Network_Package_t160 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____playerId_1);
		return L_0;
	}
}
// System.Byte[] GP_RTM_Network_Package::get_buffer()
extern "C" ByteU5BU5D_t36* GP_RTM_Network_Package_get_buffer_m667 (GP_RTM_Network_Package_t160 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t36* L_0 = (__this->____buffer_2);
		return L_0;
	}
}
// System.Byte[] GP_RTM_Network_Package::ConvertStringToByteData(System.String)
extern TypeInfo* ByteU5BU5D_t36_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t36* GP_RTM_Network_Package_ConvertStringToByteData_m668 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(145);
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
extern "C" void GP_RTM_Result__ctor_m669 (GP_RTM_Result_t161 * __this, String_t* ___r_status, String_t* ___r_roomId, const MethodInfo* method)
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
		int32_t L_1 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____status_0 = L_1;
		String_t* L_2 = ___r_roomId;
		__this->____roomId_1 = L_2;
		return;
	}
}
// GP_GamesStatusCodes GP_RTM_Result::get_status()
extern "C" int32_t GP_RTM_Result_get_status_m670 (GP_RTM_Result_t161 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____status_0);
		return L_0;
	}
}
// System.String GP_RTM_Result::get_roomId()
extern "C" String_t* GP_RTM_Result_get_roomId_m671 (GP_RTM_Result_t161 * __this, const MethodInfo* method)
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
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// System.Collections.Generic.List`1/Enumerator<GP_Participant>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// System.Collections.Generic.List`1<GP_Participant>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<GP_Participant>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"


// System.Void GP_RTM_Room::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t162_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2646_MethodInfo_var;
extern "C" void GP_RTM_Room__ctor_m672 (GP_RTM_Room_t163 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(148);
		List_1__ctor_m2646_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483725);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___id_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___creatorId_1 = L_1;
		__this->___status_2 = (-1);
		List_1_t162 * L_2 = (List_1_t162 *)il2cpp_codegen_object_new (List_1_t162_il2cpp_TypeInfo_var);
		List_1__ctor_m2646(L_2, /*hidden argument*/List_1__ctor_m2646_MethodInfo_var);
		__this->___participants_4 = L_2;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		List_1_t162 * L_3 = (List_1_t162 *)il2cpp_codegen_object_new (List_1_t162_il2cpp_TypeInfo_var);
		List_1__ctor_m2646(L_3, /*hidden argument*/List_1__ctor_m2646_MethodInfo_var);
		__this->___participants_4 = L_3;
		return;
	}
}
// System.Void GP_RTM_Room::AddParticipant(GP_Participant)
extern "C" void GP_RTM_Room_AddParticipant_m673 (GP_RTM_Room_t163 * __this, GP_Participant_t157 * ___p, const MethodInfo* method)
{
	{
		List_1_t162 * L_0 = (__this->___participants_4);
		GP_Participant_t157 * L_1 = ___p;
		NullCheck(L_0);
		VirtActionInvoker1< GP_Participant_t157 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<GP_Participant>::Add(!0) */, L_0, L_1);
		return;
	}
}
// GP_Participant GP_RTM_Room::GetParticipantById(System.String)
extern TypeInfo* Enumerator_t573_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2647_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2648_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2649_MethodInfo_var;
extern "C" GP_Participant_t157 * GP_RTM_Room_GetParticipantById_m674 (GP_RTM_Room_t163 * __this, String_t* ___id, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m2647_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483726);
		Enumerator_get_Current_m2648_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		Enumerator_MoveNext_m2649_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483728);
		s_Il2CppMethodIntialized = true;
	}
	GP_Participant_t157 * V_0 = {0};
	Enumerator_t573  V_1 = {0};
	GP_Participant_t157 * V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t162 * L_0 = (__this->___participants_4);
		NullCheck(L_0);
		Enumerator_t573  L_1 = List_1_GetEnumerator_m2647(L_0, /*hidden argument*/List_1_GetEnumerator_m2647_MethodInfo_var);
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
			GP_Participant_t157 * L_2 = Enumerator_get_Current_m2648((&V_1), /*hidden argument*/Enumerator_get_Current_m2648_MethodInfo_var);
			V_0 = L_2;
			GP_Participant_t157 * L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = GP_Participant_get_id_m651(L_3, /*hidden argument*/NULL);
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
			GP_Participant_t157 * L_7 = V_0;
			V_2 = L_7;
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}

IL_0031:
		{
			bool L_8 = Enumerator_MoveNext_m2649((&V_1), /*hidden argument*/Enumerator_MoveNext_m2649_MethodInfo_var);
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
		Enumerator_t573  L_9 = V_1;
		Enumerator_t573  L_10 = L_9;
		Object_t * L_11 = Box(Enumerator_t573_il2cpp_TypeInfo_var, &L_10);
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
		return (GP_Participant_t157 *)NULL;
	}

IL_0050:
	{
		GP_Participant_t157 * L_12 = V_2;
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
extern TypeInfo* GP_AppStateStatusCodes_t128_il2cpp_TypeInfo_var;
extern "C" void GoogleCloudResult__ctor_m675 (GoogleCloudResult_t164 * __this, String_t* ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GP_AppStateStatusCodes_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____response_0 = L_1;
		int32_t L_2 = (__this->____response_0);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(GP_AppStateStatusCodes_t128_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_4);
		__this->____message_1 = L_5;
		return;
	}
}
// System.Void GoogleCloudResult::.ctor(System.String,System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* GP_AppStateStatusCodes_t128_il2cpp_TypeInfo_var;
extern "C" void GoogleCloudResult__ctor_m676 (GoogleCloudResult_t164 * __this, String_t* ___code, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GP_AppStateStatusCodes_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____response_0 = L_1;
		int32_t L_2 = (__this->____response_0);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(GP_AppStateStatusCodes_t128_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_4);
		__this->____message_1 = L_5;
		String_t* L_6 = ___key;
		int32_t L_7 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____stateKey_2 = L_7;
		return;
	}
}
// GP_AppStateStatusCodes GoogleCloudResult::get_response()
extern "C" int32_t GoogleCloudResult_get_response_m677 (GoogleCloudResult_t164 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return L_0;
	}
}
// System.String GoogleCloudResult::get_stateDataString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t574_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleCloudResult_get_stateDataString_m678 (GoogleCloudResult_t164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Encoding_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
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
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t574_il2cpp_TypeInfo_var);
		Encoding_t574 * L_2 = Encoding_get_UTF8_m2650(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t36* L_3 = (__this->___stateData_3);
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t36* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.String GoogleCloudResult::get_serverConflictDataString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t574_il2cpp_TypeInfo_var;
extern "C" String_t* GoogleCloudResult_get_serverConflictDataString_m679 (GoogleCloudResult_t164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Encoding_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
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
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t574_il2cpp_TypeInfo_var);
		Encoding_t574 * L_2 = Encoding_get_UTF8_m2650(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t36* L_3 = (__this->___stateData_3);
		NullCheck(L_2);
		String_t* L_4 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t36* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.String GoogleCloudResult::get_message()
extern "C" String_t* GoogleCloudResult_get_message_m680 (GoogleCloudResult_t164 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____message_1);
		return L_0;
	}
}
// System.Int32 GoogleCloudResult::get_stateKey()
extern "C" int32_t GoogleCloudResult_get_stateKey_m681 (GoogleCloudResult_t164 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____stateKey_2);
		return L_0;
	}
}
// System.Boolean GoogleCloudResult::get_isSuccess()
extern "C" bool GoogleCloudResult_get_isSuccess_m682 (GoogleCloudResult_t164 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GoogleCloudResult::get_isFailure()
extern "C" bool GoogleCloudResult_get_isFailure_m683 (GoogleCloudResult_t164 * __this, const MethodInfo* method)
{
	{
		bool L_0 = GoogleCloudResult_get_isSuccess_m682(__this, /*hidden argument*/NULL);
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
extern "C" void GooglePlayConnectionResult__ctor_m684 (GooglePlayConnectionResult_t165 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GooglePlayConnectionResult::get_IsSuccess()
extern "C" bool GooglePlayConnectionResult_get_IsSuccess_m685 (GooglePlayConnectionResult_t165 * __this, const MethodInfo* method)
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
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void GooglePlayGiftRequestResult__ctor_m686 (GooglePlayGiftRequestResult_t166 * __this, String_t* ___r_code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___r_code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____code_0 = L_1;
		return;
	}
}
// GP_GamesActivityResultCodes GooglePlayGiftRequestResult::get_code()
extern "C" int32_t GooglePlayGiftRequestResult_get_code_m687 (GooglePlayGiftRequestResult_t166 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____code_0);
		return L_0;
	}
}
// System.Boolean GooglePlayGiftRequestResult::get_isSuccess()
extern "C" bool GooglePlayGiftRequestResult_get_isSuccess_m688 (GooglePlayGiftRequestResult_t166 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____code_0);
		return ((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean GooglePlayGiftRequestResult::get_isFailure()
extern "C" bool GooglePlayGiftRequestResult_get_isFailure_m689 (GooglePlayGiftRequestResult_t166 * __this, const MethodInfo* method)
{
	{
		bool L_0 = GooglePlayGiftRequestResult_get_isSuccess_m688(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayResult
#include "AssemblyU2DCSharp_GooglePlayResult.h"
#ifndef _MSC_VER
#else
#endif
// GooglePlayResult
#include "AssemblyU2DCSharp_GooglePlayResultMethodDeclarations.h"



// System.Void GooglePlayResult::.ctor(GP_GamesStatusCodes)
extern "C" void GooglePlayResult__ctor_m690 (GooglePlayResult_t167 * __this, int32_t ___code, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code;
		GooglePlayResult_SetCode_m692(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayResult::.ctor(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void GooglePlayResult__ctor_m691 (GooglePlayResult_t167 * __this, String_t* ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___code;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		GooglePlayResult_SetCode_m692(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayResult::SetCode(GP_GamesStatusCodes)
extern TypeInfo* GP_GamesStatusCodes_t131_il2cpp_TypeInfo_var;
extern "C" void GooglePlayResult_SetCode_m692 (GooglePlayResult_t167 * __this, int32_t ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GP_GamesStatusCodes_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___code;
		__this->____response_0 = L_0;
		int32_t L_1 = (__this->____response_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(GP_GamesStatusCodes_t131_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_3);
		__this->____message_1 = L_4;
		return;
	}
}
// GP_GamesStatusCodes GooglePlayResult::get_response()
extern "C" int32_t GooglePlayResult_get_response_m693 (GooglePlayResult_t167 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return L_0;
	}
}
// System.String GooglePlayResult::get_message()
extern "C" String_t* GooglePlayResult_get_message_m694 (GooglePlayResult_t167 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____message_1);
		return L_0;
	}
}
// System.Boolean GooglePlayResult::get_isSuccess()
extern "C" bool GooglePlayResult_get_isSuccess_m695 (GooglePlayResult_t167 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____response_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayResult::get_isFailure()
extern "C" bool GooglePlayResult_get_isFailure_m696 (GooglePlayResult_t167 * __this, const MethodInfo* method)
{
	{
		bool L_0 = GooglePlayResult_get_isSuccess_m695(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// GP_Event
#include "AssemblyU2DCSharp_GP_Event.h"
#ifndef _MSC_VER
#else
#endif
// GP_Event
#include "AssemblyU2DCSharp_GP_EventMethodDeclarations.h"

// WWWTextureLoader
#include "AssemblyU2DCSharp_WWWTextureLoader.h"
// System.Action`1<UnityEngine.Texture2D>
#include "mscorlib_System_Action_1_gen.h"
// WWWTextureLoader
#include "AssemblyU2DCSharp_WWWTextureLoaderMethodDeclarations.h"
// System.Action`1<UnityEngine.Texture2D>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"


// System.Void GP_Event::.ctor()
extern "C" void GP_Event__ctor_m697 (GP_Event_t168 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_Event::LoadIcon()
extern TypeInfo* Action_1_t199_il2cpp_TypeInfo_var;
extern const MethodInfo* GP_Event_OnTextureLoaded_m700_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2651_MethodInfo_var;
extern "C" void GP_Event_LoadIcon_m698 (GP_Event_t168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		GP_Event_OnTextureLoaded_m700_MethodInfo_var = il2cpp_codegen_method_info_from_index(81);
		Action_1__ctor_m2651_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		s_Il2CppMethodIntialized = true;
	}
	WWWTextureLoader_t197 * V_0 = {0};
	{
		Texture2D_t65 * L_0 = GP_Event_get_icon_m699(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2547(NULL /*static, unused*/, L_0, (Object_t547 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		WWWTextureLoader_t197 * L_2 = WWWTextureLoader_Create_m775(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		WWWTextureLoader_t197 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)GP_Event_OnTextureLoaded_m700_MethodInfo_var };
		Action_1_t199 * L_5 = (Action_1_t199 *)il2cpp_codegen_object_new (Action_1_t199_il2cpp_TypeInfo_var);
		Action_1__ctor_m2651(L_5, __this, L_4, /*hidden argument*/Action_1__ctor_m2651_MethodInfo_var);
		NullCheck(L_3);
		WWWTextureLoader_add_OnLoad_m773(L_3, L_5, /*hidden argument*/NULL);
		WWWTextureLoader_t197 * L_6 = V_0;
		String_t* L_7 = (__this->___IconImageUrl_2);
		NullCheck(L_6);
		WWWTextureLoader_LoadTexture_m776(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D GP_Event::get_icon()
extern "C" Texture2D_t65 * GP_Event_get_icon_m699 (GP_Event_t168 * __this, const MethodInfo* method)
{
	{
		Texture2D_t65 * L_0 = (__this->____icon_5);
		return L_0;
	}
}
// System.Void GP_Event::OnTextureLoaded(UnityEngine.Texture2D)
extern "C" void GP_Event_OnTextureLoaded_m700 (GP_Event_t168 * __this, Texture2D_t65 * ___tex, const MethodInfo* method)
{
	{
		Texture2D_t65 * L_0 = ___tex;
		__this->____icon_5 = L_0;
		return;
	}
}
// GP_Quest
#include "AssemblyU2DCSharp_GP_Quest.h"
#ifndef _MSC_VER
#else
#endif
// GP_Quest
#include "AssemblyU2DCSharp_GP_QuestMethodDeclarations.h"



// System.Void GP_Quest::.ctor()
extern "C" void GP_Quest__ctor_m701 (GP_Quest_t169 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_Quest::LoadIcon()
extern TypeInfo* Action_1_t199_il2cpp_TypeInfo_var;
extern const MethodInfo* GP_Quest_OnIconLoaded_m707_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2651_MethodInfo_var;
extern "C" void GP_Quest_LoadIcon_m702 (GP_Quest_t169 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		GP_Quest_OnIconLoaded_m707_MethodInfo_var = il2cpp_codegen_method_info_from_index(83);
		Action_1__ctor_m2651_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		s_Il2CppMethodIntialized = true;
	}
	WWWTextureLoader_t197 * V_0 = {0};
	{
		Texture2D_t65 * L_0 = GP_Quest_get_icon_m704(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2547(NULL /*static, unused*/, L_0, (Object_t547 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		WWWTextureLoader_t197 * L_2 = WWWTextureLoader_Create_m775(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		WWWTextureLoader_t197 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)GP_Quest_OnIconLoaded_m707_MethodInfo_var };
		Action_1_t199 * L_5 = (Action_1_t199 *)il2cpp_codegen_object_new (Action_1_t199_il2cpp_TypeInfo_var);
		Action_1__ctor_m2651(L_5, __this, L_4, /*hidden argument*/Action_1__ctor_m2651_MethodInfo_var);
		NullCheck(L_3);
		WWWTextureLoader_add_OnLoad_m773(L_3, L_5, /*hidden argument*/NULL);
		WWWTextureLoader_t197 * L_6 = V_0;
		String_t* L_7 = (__this->___IconImageUrl_3);
		NullCheck(L_6);
		WWWTextureLoader_LoadTexture_m776(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_Quest::LoadBanner()
extern TypeInfo* Action_1_t199_il2cpp_TypeInfo_var;
extern const MethodInfo* GP_Quest_OnBannerLoaded_m706_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2651_MethodInfo_var;
extern "C" void GP_Quest_LoadBanner_m703 (GP_Quest_t169 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		GP_Quest_OnBannerLoaded_m706_MethodInfo_var = il2cpp_codegen_method_info_from_index(84);
		Action_1__ctor_m2651_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		s_Il2CppMethodIntialized = true;
	}
	WWWTextureLoader_t197 * V_0 = {0};
	{
		Texture2D_t65 * L_0 = GP_Quest_get_icon_m704(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2547(NULL /*static, unused*/, L_0, (Object_t547 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		WWWTextureLoader_t197 * L_2 = WWWTextureLoader_Create_m775(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		WWWTextureLoader_t197 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)GP_Quest_OnBannerLoaded_m706_MethodInfo_var };
		Action_1_t199 * L_5 = (Action_1_t199 *)il2cpp_codegen_object_new (Action_1_t199_il2cpp_TypeInfo_var);
		Action_1__ctor_m2651(L_5, __this, L_4, /*hidden argument*/Action_1__ctor_m2651_MethodInfo_var);
		NullCheck(L_3);
		WWWTextureLoader_add_OnLoad_m773(L_3, L_5, /*hidden argument*/NULL);
		WWWTextureLoader_t197 * L_6 = V_0;
		String_t* L_7 = (__this->___BannerImageUrl_4);
		NullCheck(L_6);
		WWWTextureLoader_LoadTexture_m776(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D GP_Quest::get_icon()
extern "C" Texture2D_t65 * GP_Quest_get_icon_m704 (GP_Quest_t169 * __this, const MethodInfo* method)
{
	{
		Texture2D_t65 * L_0 = (__this->____icon_9);
		return L_0;
	}
}
// UnityEngine.Texture2D GP_Quest::get_banner()
extern "C" Texture2D_t65 * GP_Quest_get_banner_m705 (GP_Quest_t169 * __this, const MethodInfo* method)
{
	{
		Texture2D_t65 * L_0 = (__this->____banner_10);
		return L_0;
	}
}
// System.Void GP_Quest::OnBannerLoaded(UnityEngine.Texture2D)
extern "C" void GP_Quest_OnBannerLoaded_m706 (GP_Quest_t169 * __this, Texture2D_t65 * ___tex, const MethodInfo* method)
{
	{
		Texture2D_t65 * L_0 = ___tex;
		__this->____banner_10 = L_0;
		return;
	}
}
// System.Void GP_Quest::OnIconLoaded(UnityEngine.Texture2D)
extern "C" void GP_Quest_OnIconLoaded_m707 (GP_Quest_t169 * __this, Texture2D_t65 * ___tex, const MethodInfo* method)
{
	{
		Texture2D_t65 * L_0 = ___tex;
		__this->____icon_9 = L_0;
		return;
	}
}
// GP_GCM_RegistrationResult
#include "AssemblyU2DCSharp_GP_GCM_RegistrationResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_GCM_RegistrationResult
#include "AssemblyU2DCSharp_GP_GCM_RegistrationResultMethodDeclarations.h"



// System.Void GP_GCM_RegistrationResult::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GP_GCM_RegistrationResult__ctor_m708 (GP_GCM_RegistrationResult_t170 * __this, const MethodInfo* method)
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
		__this->____RegistrationDeviceId_2 = L_0;
		GooglePlayResult__ctor_m690(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_GCM_RegistrationResult::.ctor(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GP_GCM_RegistrationResult__ctor_m709 (GP_GCM_RegistrationResult_t170 * __this, String_t* ___id, const MethodInfo* method)
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
		__this->____RegistrationDeviceId_2 = L_0;
		GooglePlayResult__ctor_m690(__this, 0, /*hidden argument*/NULL);
		String_t* L_1 = ___id;
		__this->____RegistrationDeviceId_2 = L_1;
		return;
	}
}
// System.String GP_GCM_RegistrationResult::get_RegistrationDeviceId()
extern "C" String_t* GP_GCM_RegistrationResult_get_RegistrationDeviceId_m710 (GP_GCM_RegistrationResult_t170 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____RegistrationDeviceId_2);
		return L_0;
	}
}
// GP_GamesResult
#include "AssemblyU2DCSharp_GP_GamesResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_GamesResult
#include "AssemblyU2DCSharp_GP_GamesResultMethodDeclarations.h"



// System.Void GP_GamesResult::.ctor(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GP_GamesResult__ctor_m711 (GP_GamesResult_t171 * __this, String_t* ___code, const MethodInfo* method)
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
		__this->___leaderboardId_2 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___achievementId_3 = L_1;
		String_t* L_2 = ___code;
		GooglePlayResult__ctor_m691(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// GP_QuestResult
#include "AssemblyU2DCSharp_GP_QuestResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_QuestResult
#include "AssemblyU2DCSharp_GP_QuestResultMethodDeclarations.h"



// System.Void GP_QuestResult::.ctor(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GP_QuestResult__ctor_m712 (GP_QuestResult_t172 * __this, String_t* ___code, const MethodInfo* method)
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
		__this->___questId_2 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___reward_3 = L_1;
		String_t* L_2 = ___code;
		GooglePlayResult__ctor_m691(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// GP_Quest GP_QuestResult::GetQuest()
extern "C" GP_Quest_t169 * GP_QuestResult_GetQuest_m713 (GP_QuestResult_t172 * __this, const MethodInfo* method)
{
	{
		GP_Quest_t169 * L_0 = (__this->___quest_4);
		return L_0;
	}
}
// GP_SnapshotConflict
#include "AssemblyU2DCSharp_GP_SnapshotConflict.h"
#ifndef _MSC_VER
#else
#endif
// GP_SnapshotConflict
#include "AssemblyU2DCSharp_GP_SnapshotConflictMethodDeclarations.h"

// GP_Snapshot
#include "AssemblyU2DCSharp_GP_Snapshot.h"


// System.Void GP_SnapshotConflict::.ctor(GP_Snapshot,GP_Snapshot)
extern "C" void GP_SnapshotConflict__ctor_m714 (GP_SnapshotConflict_t174 * __this, GP_Snapshot_t173 * ___s1, GP_Snapshot_t173 * ___s2, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		GP_Snapshot_t173 * L_0 = ___s1;
		__this->____s1_0 = L_0;
		GP_Snapshot_t173 * L_1 = ___s2;
		__this->____s2_1 = L_1;
		return;
	}
}
// GP_Snapshot GP_SnapshotConflict::get_Snapshot()
extern "C" GP_Snapshot_t173 * GP_SnapshotConflict_get_Snapshot_m715 (GP_SnapshotConflict_t174 * __this, const MethodInfo* method)
{
	{
		GP_Snapshot_t173 * L_0 = (__this->____s1_0);
		return L_0;
	}
}
// GP_Snapshot GP_SnapshotConflict::get_ConflictingSnapshot()
extern "C" GP_Snapshot_t173 * GP_SnapshotConflict_get_ConflictingSnapshot_m716 (GP_SnapshotConflict_t174 * __this, const MethodInfo* method)
{
	{
		GP_Snapshot_t173 * L_0 = (__this->____s2_1);
		return L_0;
	}
}
// System.Void GP_SnapshotConflict::Resolve(GP_Snapshot)
extern "C" void GP_SnapshotConflict_Resolve_m717 (GP_SnapshotConflict_t174 * __this, GP_Snapshot_t173 * ___snapshot, const MethodInfo* method)
{
	{
		GP_Snapshot_t173 * L_0 = ___snapshot;
		GP_Snapshot_t173 * L_1 = (__this->____s1_0);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		AN_GMSGeneralProxy_ResolveSnapshotsConflict_Bridge_m476(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_001c:
	{
		AN_GMSGeneralProxy_ResolveSnapshotsConflict_Bridge_m476(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// GP_SpanshotLoadResult
#include "AssemblyU2DCSharp_GP_SpanshotLoadResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_SpanshotLoadResult
#include "AssemblyU2DCSharp_GP_SpanshotLoadResultMethodDeclarations.h"



// System.Void GP_SpanshotLoadResult::.ctor(System.String)
extern "C" void GP_SpanshotLoadResult__ctor_m718 (GP_SpanshotLoadResult_t175 * __this, String_t* ___code, const MethodInfo* method)
{
	{
		String_t* L_0 = ___code;
		GooglePlayResult__ctor_m691(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_SpanshotLoadResult::SetSnapShot(GP_Snapshot)
extern "C" void GP_SpanshotLoadResult_SetSnapShot_m719 (GP_SpanshotLoadResult_t175 * __this, GP_Snapshot_t173 * ___s, const MethodInfo* method)
{
	{
		GP_Snapshot_t173 * L_0 = ___s;
		__this->____snapshot_2 = L_0;
		return;
	}
}
// GP_Snapshot GP_SpanshotLoadResult::get_Snapshot()
extern "C" GP_Snapshot_t173 * GP_SpanshotLoadResult_get_Snapshot_m720 (GP_SpanshotLoadResult_t175 * __this, const MethodInfo* method)
{
	{
		GP_Snapshot_t173 * L_0 = (__this->____snapshot_2);
		return L_0;
	}
}
// AN_InvitationInboxCloseResult
#include "AssemblyU2DCSharp_AN_InvitationInboxCloseResult.h"
#ifndef _MSC_VER
#else
#endif
// AN_InvitationInboxCloseResult
#include "AssemblyU2DCSharp_AN_InvitationInboxCloseResultMethodDeclarations.h"



// System.Void AN_InvitationInboxCloseResult::.ctor(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void AN_InvitationInboxCloseResult__ctor_m721 (AN_InvitationInboxCloseResult_t176 * __this, String_t* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour__ctor_m2531(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___result;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m2635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->____resultCode_2 = L_1;
		return;
	}
}
// AdroidActivityResultCodes AN_InvitationInboxCloseResult::get_ResultCode()
extern "C" int32_t AN_InvitationInboxCloseResult_get_ResultCode_m722 (AN_InvitationInboxCloseResult_t176 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____resultCode_2);
		return L_0;
	}
}
// GP_DeleteSnapshotResult
#include "AssemblyU2DCSharp_GP_DeleteSnapshotResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_DeleteSnapshotResult
#include "AssemblyU2DCSharp_GP_DeleteSnapshotResultMethodDeclarations.h"



// System.Void GP_DeleteSnapshotResult::.ctor(System.String)
extern "C" void GP_DeleteSnapshotResult__ctor_m723 (GP_DeleteSnapshotResult_t177 * __this, String_t* ___code, const MethodInfo* method)
{
	{
		String_t* L_0 = ___code;
		GooglePlayResult__ctor_m691(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GP_DeleteSnapshotResult::SetId(System.String)
extern "C" void GP_DeleteSnapshotResult_SetId_m724 (GP_DeleteSnapshotResult_t177 * __this, String_t* ___sid, const MethodInfo* method)
{
	{
		String_t* L_0 = ___sid;
		__this->____SnapshotId_2 = L_0;
		return;
	}
}
// System.String GP_DeleteSnapshotResult::get_SnapshotId()
extern "C" String_t* GP_DeleteSnapshotResult_get_SnapshotId_m725 (GP_DeleteSnapshotResult_t177 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____SnapshotId_2);
		return L_0;
	}
}
// GP_TBM_CancelMatchResult
#include "AssemblyU2DCSharp_GP_TBM_CancelMatchResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_TBM_CancelMatchResult
#include "AssemblyU2DCSharp_GP_TBM_CancelMatchResultMethodDeclarations.h"



// System.Void GP_TBM_CancelMatchResult::.ctor(System.String)
extern "C" void GP_TBM_CancelMatchResult__ctor_m726 (GP_TBM_CancelMatchResult_t178 * __this, String_t* ___code, const MethodInfo* method)
{
	{
		String_t* L_0 = ___code;
		GooglePlayResult__ctor_m691(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GP_TBM_LeaveMatchResult
#include "AssemblyU2DCSharp_GP_TBM_LeaveMatchResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_TBM_LeaveMatchResult
#include "AssemblyU2DCSharp_GP_TBM_LeaveMatchResultMethodDeclarations.h"



// System.Void GP_TBM_LeaveMatchResult::.ctor(System.String)
extern "C" void GP_TBM_LeaveMatchResult__ctor_m727 (GP_TBM_LeaveMatchResult_t180 * __this, String_t* ___code, const MethodInfo* method)
{
	{
		String_t* L_0 = ___code;
		GooglePlayResult__ctor_m691(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GP_TBM_LoadMatchResult
#include "AssemblyU2DCSharp_GP_TBM_LoadMatchResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_TBM_LoadMatchResult
#include "AssemblyU2DCSharp_GP_TBM_LoadMatchResultMethodDeclarations.h"



// System.Void GP_TBM_LoadMatchResult::.ctor(System.String)
extern "C" void GP_TBM_LoadMatchResult__ctor_m728 (GP_TBM_LoadMatchResult_t181 * __this, String_t* ___code, const MethodInfo* method)
{
	{
		String_t* L_0 = ___code;
		GooglePlayResult__ctor_m691(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GP_TBM_LoadMatchesResult
#include "AssemblyU2DCSharp_GP_TBM_LoadMatchesResult.h"
#ifndef _MSC_VER
#else
#endif
// GP_TBM_LoadMatchesResult
#include "AssemblyU2DCSharp_GP_TBM_LoadMatchesResultMethodDeclarations.h"



// System.Void GP_TBM_LoadMatchesResult::.ctor(System.String)
extern "C" void GP_TBM_LoadMatchesResult__ctor_m729 (GP_TBM_LoadMatchesResult_t183 * __this, String_t* ___code, const MethodInfo* method)
{
	{
		String_t* L_0 = ___code;
		GooglePlayResult__ctor_m691(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
