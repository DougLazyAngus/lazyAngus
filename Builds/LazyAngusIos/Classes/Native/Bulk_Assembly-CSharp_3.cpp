#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// BoostDesc
#include "AssemblyU2DCSharp_BoostDesc.h"
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
// BoostDesc
#include "AssemblyU2DCSharp_BoostDescMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Single
#include "mscorlib_System_Single.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
struct Resources_t791;
struct Sprite_t510;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t791;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m4197_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m4197(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4197_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t510_m4196(__this /* static, unused */, p0, method) (( Sprite_t510 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4197_gshared)(__this /* static, unused */, p0, method)

// System.Array
#include "mscorlib_System_Array.h"

// System.Void BoostDesc::.ctor(System.String,System.String,System.String,System.Single,TipConfig)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t510_m4196_MethodInfo_var;
extern "C" void BoostDesc__ctor_m2808 (BoostDesc_t512 * __this, String_t* ___boostName, String_t* ___buttonImageName, String_t* ___introScreenImageName, float ___effectiveTime, TipConfig_t511 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t510_m4196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___buttonImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1016, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t510 * L_3 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___buttonSprite_0 = L_3;
		String_t* L_4 = ___introScreenImageName;
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1017, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t510 * L_7 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___introScreenSprite_1 = L_7;
		float L_8 = ___effectiveTime;
		__this->___effectiveTime_2 = L_8;
		String_t* L_9 = ___boostName;
		__this->___boostName_3 = L_9;
		TipConfig_t511 * L_10 = ___tipConfig;
		__this->___tipConfig_4 = L_10;
		return;
	}
}
// BuyAndUseBoost
#include "AssemblyU2DCSharp_BuyAndUseBoost.h"
#ifndef _MSC_VER
#else
#endif
// BuyAndUseBoost
#include "AssemblyU2DCSharp_BuyAndUseBoostMethodDeclarations.h"

// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"
struct GameObject_t352;
struct BoostButton_t497;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m4044_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m4044(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t497_m4189(__this, method) (( BoostButton_t497 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void BuyAndUseBoost::.ctor()
extern "C" void BuyAndUseBoost__ctor_m2809 (BuyAndUseBoost_t514 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyAndUseBoost::Start()
extern "C" void BuyAndUseBoost_Start_m2810 (BuyAndUseBoost_t514 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t513 * L_1 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyAndUseBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var;
extern "C" void BuyAndUseBoost_BuyAndUse_m2811 (BuyAndUseBoost_t514 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t497 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m2807(L_0, /*hidden argument*/NULL);
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
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoostButton_t497 * L_3 = GameObject_GetComponent_TisBoostButton_t497_m4189(L_2, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var);
		V_0 = L_3;
		BoostButton_t497 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = BoostButton_GetBoostType_m2749(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		BoostConfig_t494 * L_6 = (__this->___boostConfig_2);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = BoostConfig_GetCurrentPriceForBoost_m2800(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		PlayerStats_t513 * L_9 = (__this->___playerStats_3);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = PlayerStats_CanAfford_m3369(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		PlayerStats_t513 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		PlayerStats_AddBoost_m3374(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t513 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		PlayerStats_SpendMoney_m3371(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0059:
	{
		PlayerStats_t513 * L_16 = (__this->___playerStats_3);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		PlayerStats_RemoveBoost_m3375(L_16, L_17, /*hidden argument*/NULL);
		BoostConfig_t494 * L_18 = (__this->___boostConfig_2);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		BoostConfig_ExecuteBoost_m2803(L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// BuyBoost
#include "AssemblyU2DCSharp_BuyBoost.h"
#ifndef _MSC_VER
#else
#endif
// BuyBoost
#include "AssemblyU2DCSharp_BuyBoostMethodDeclarations.h"



// System.Void BuyBoost::.ctor()
extern "C" void BuyBoost__ctor_m2812 (BuyBoost_t515 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyBoost::Start()
extern "C" void BuyBoost_Start_m2813 (BuyBoost_t515 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t513 * L_1 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var;
extern "C" void BuyBoost_BuyAndUse_m2814 (BuyBoost_t515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t497 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t497 * L_1 = GameObject_GetComponent_TisBoostButton_t497_m4189(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t497_m4189_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t497 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2749(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BoostConfig_t494 * L_4 = (__this->___boostConfig_2);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = BoostConfig_GetCurrentPriceForBoost_m2800(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		PlayerStats_t513 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = PlayerStats_CanAfford_m3369(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		PlayerStats_t513 * L_10 = (__this->___playerStats_3);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		PlayerStats_AddBoost_m3374(L_10, L_11, /*hidden argument*/NULL);
		PlayerStats_t513 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		PlayerStats_SpendMoney_m3371(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t513 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		PlayerStats_RemoveBoost_m3375(L_14, L_15, /*hidden argument*/NULL);
		BoostConfig_t494 * L_16 = (__this->___boostConfig_2);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		BoostConfig_ExecuteBoost_m2803(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
// CameraController
#include "AssemblyU2DCSharp_CameraController.h"
#ifndef _MSC_VER
#else
#endif
// CameraController
#include "AssemblyU2DCSharp_CameraControllerMethodDeclarations.h"

// SizeCamera
#include "AssemblyU2DCSharp_SizeCamera.h"
// UnityEngine.UI.CanvasScaler
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler.h"
// SizeCamera
#include "AssemblyU2DCSharp_SizeCameraMethodDeclarations.h"
// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdControllerMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.UI.CanvasScaler
#include "UnityEngine_UI_UnityEngine_UI_CanvasScalerMethodDeclarations.h"


// System.Void CameraController::.ctor()
extern "C" void CameraController__ctor_m2815 (CameraController_t518 * __this, const MethodInfo* method)
{
	{
		__this->___actualHUDPixelHeight_5 = (180.0f);
		__this->___minHUDAspectRatio_6 = (2.5f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C" void CameraController_Start_m2816 (CameraController_t518 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		SizeCamera_t516 * L_0 = (__this->___uxCamera_3);
		NullCheck(L_0);
		L_0->___screenPixelsBottomToIgnore_5 = (0.0f);
		SizeCamera_t516 * L_1 = (__this->___uxCamera_3);
		NullCheck(L_1);
		L_1->___screenPixelsTopToIgnore_4 = (0.0f);
		SizeCamera_t516 * L_2 = (__this->___uxCamera_3);
		NullCheck(L_2);
		SizeCamera_Configure_m3465(L_2, /*hidden argument*/NULL);
		float L_3 = GoogleAdController_GetBannerHeight_m3064(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		SizeCamera_t516 * L_4 = (__this->___worldCamera_2);
		float L_5 = V_0;
		NullCheck(L_4);
		L_4->___screenPixelsBottomToIgnore_5 = L_5;
		int32_t L_6 = Screen_get_height_m3691(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = (((float)L_6));
		int32_t L_7 = Screen_get_width_m3676(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = (((float)L_7));
		float L_8 = V_1;
		float L_9 = V_0;
		float L_10 = V_2;
		V_3 = ((float)((float)((float)((float)L_8-(float)L_9))-(float)L_10));
		float L_11 = V_2;
		float L_12 = (__this->___minHUDAspectRatio_6);
		V_4 = ((float)((float)L_11/(float)L_12));
		float L_13 = V_3;
		V_5 = L_13;
		float L_14 = V_5;
		float L_15 = (__this->___actualHUDPixelHeight_5);
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0073;
		}
	}
	{
		float L_16 = (__this->___actualHUDPixelHeight_5);
		V_5 = L_16;
	}

IL_0073:
	{
		float L_17 = V_5;
		float L_18 = V_4;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_0080;
		}
	}
	{
		float L_19 = V_4;
		V_5 = L_19;
	}

IL_0080:
	{
		SizeCamera_t516 * L_20 = (__this->___worldCamera_2);
		float L_21 = V_5;
		NullCheck(L_20);
		L_20->___screenPixelsTopToIgnore_4 = L_21;
		CanvasScaler_t517 * L_22 = (__this->___constantUXCanvas_4);
		float L_23 = V_5;
		float L_24 = (__this->___actualHUDPixelHeight_5);
		NullCheck(L_22);
		CanvasScaler_set_scaleFactor_m4198(L_22, ((float)((float)L_23/(float)L_24)), /*hidden argument*/NULL);
		SizeCamera_t516 * L_25 = (__this->___worldCamera_2);
		NullCheck(L_25);
		SizeCamera_Configure_m3465(L_25, /*hidden argument*/NULL);
		return;
	}
}
// CatBodyHitDetection
#include "AssemblyU2DCSharp_CatBodyHitDetection.h"
#ifndef _MSC_VER
#else
#endif
// CatBodyHitDetection
#include "AssemblyU2DCSharp_CatBodyHitDetectionMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void CatBodyHitDetection::.ctor()
extern "C" void CatBodyHitDetection__ctor_m2817 (CatBodyHitDetection_t519 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CatBodyHitDetection::OnMouseDown()
extern "C" void CatBodyHitDetection_OnMouseDown_m2818 (CatBodyHitDetection_t519 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1018, /*hidden argument*/NULL);
		return;
	}
}
// ConeOfViewController
#include "AssemblyU2DCSharp_ConeOfViewController.h"
#ifndef _MSC_VER
#else
#endif
// ConeOfViewController
#include "AssemblyU2DCSharp_ConeOfViewControllerMethodDeclarations.h"

// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandler.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRenderer.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandlerMethodDeclarations.h"
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRendererMethodDeclarations.h"


// System.Void ConeOfViewController::.ctor()
extern "C" void ConeOfViewController__ctor_m2819 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single ConeOfViewController::get_actualAngleRange()
extern "C" float ConeOfViewController_get_actualAngleRange_m2820 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CactualAngleRangeU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void ConeOfViewController::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewController_set_actualAngleRange_m2821 (ConeOfViewController_t521 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CactualAngleRangeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void ConeOfViewController::Awake()
extern TypeInfo* ConeOfViewController_t521_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewController_Awake_m2822 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConeOfViewController_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ConeOfViewController_t521_StaticFields*)ConeOfViewController_t521_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_4 = 0;
		return;
	}
}
// System.Void ConeOfViewController::Start()
extern "C" void ConeOfViewController_Start_m2823 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	{
		ConeOfViewController_RegisterForEvents_m2825(__this, /*hidden argument*/NULL);
		ConeOfViewController_MaybeUpdateAngleRange_m2828(__this, /*hidden argument*/NULL);
		ConeOfViewController_UpdateCones_m2829(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewController::OnDestroy()
extern "C" void ConeOfViewController_OnDestroy_m2824 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	{
		ConeOfViewController_UnregisterForEvents_m2826(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewController_OnBoostUsageChanged_m2827_MethodInfo_var;
extern "C" void ConeOfViewController_RegisterForEvents_m2825 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ConeOfViewController_OnBoostUsageChanged_m2827_MethodInfo_var = il2cpp_codegen_method_info_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)ConeOfViewController_OnBoostUsageChanged_m2827_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_2 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2784(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_4 = 1;
		return;
	}
}
// System.Void ConeOfViewController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewController_OnBoostUsageChanged_m2827_MethodInfo_var;
extern "C" void ConeOfViewController_UnregisterForEvents_m2826 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ConeOfViewController_OnBoostUsageChanged_m2827_MethodInfo_var = il2cpp_codegen_method_info_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		BoostConfig_t494 * L_1 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConeOfViewController_OnBoostUsageChanged_m2827_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_3 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2785(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ConeOfViewController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewController_OnBoostUsageChanged_m2827 (ConeOfViewController_t521 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		bool L_0 = ConeOfViewController_MaybeUpdateAngleRange_m2828(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConeOfViewController_UpdateCones_m2829(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean ConeOfViewController::MaybeUpdateAngleRange()
extern "C" bool ConeOfViewController_MaybeUpdateAngleRange_m2828 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2788(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		V_0 = (149.994f);
		goto IL_0021;
	}

IL_001b:
	{
		V_0 = (90.0f);
	}

IL_0021:
	{
		float L_2 = V_0;
		float L_3 = ConeOfViewController_get_actualAngleRange_m2820(__this, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		float L_4 = V_0;
		ConeOfViewController_set_actualAngleRange_m2821(__this, L_4, /*hidden argument*/NULL);
		return 1;
	}

IL_0036:
	{
		return 0;
	}
}
// System.Void ConeOfViewController::UpdateCones()
extern "C" void ConeOfViewController_UpdateCones_m2829 (ConeOfViewController_t521 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_t520 * L_0 = (__this->___leftCone_2);
		float L_1 = ConeOfViewController_get_actualAngleRange_m2820(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConeOfViewRenderer_CreateMeshForAngleRange_m2833(L_0, (0.0f), ((float)((float)L_1/(float)(2.0f))), /*hidden argument*/NULL);
		ConeOfViewRenderer_t520 * L_2 = (__this->___rightCone_3);
		float L_3 = ConeOfViewController_get_actualAngleRange_m2820(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ConeOfViewRenderer_CreateMeshForAngleRange_m2833(L_2, ((float)((float)((-L_3))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilter.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilterMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
struct GameObject_t352;
struct MeshRenderer_t792;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m3872_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m3872(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3872_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t792_m4199(__this, method) (( MeshRenderer_t792 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3872_gshared)(__this, method)
struct GameObject_t352;
struct MeshFilter_t793;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
#define GameObject_AddComponent_TisMeshFilter_t793_m4200(__this, method) (( MeshFilter_t793 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3872_gshared)(__this, method)
struct GameObject_t352;
struct MeshRenderer_t792;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t792_m4201(__this, method) (( MeshRenderer_t792 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m2830 (ConeOfViewRenderer_t520 * __this, const MethodInfo* method)
{
	{
		__this->___numTriangles_4 = ((int32_t)20);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::Start()
extern "C" void ConeOfViewRenderer_Start_m2831 (ConeOfViewRenderer_t520 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_EnsureInitialized_m2832(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::EnsureInitialized()
extern TypeInfo* Mesh_t522_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshRenderer_t792_m4199_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshFilter_t793_m4200_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t792_m4201_MethodInfo_var;
extern "C" void ConeOfViewRenderer_EnsureInitialized_m2832 (ConeOfViewRenderer_t520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		GameObject_AddComponent_TisMeshRenderer_t792_m4199_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484136);
		GameObject_AddComponent_TisMeshFilter_t793_m4200_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484137);
		GameObject_GetComponent_TisMeshRenderer_t792_m4201_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484138);
		s_Il2CppMethodIntialized = true;
	}
	MeshRenderer_t792 * V_0 = {0};
	{
		bool L_0 = (__this->___initialized_5);
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
		__this->___initialized_5 = 1;
		Mesh_t522 * L_1 = (Mesh_t522 *)il2cpp_codegen_object_new (Mesh_t522_il2cpp_TypeInfo_var);
		Mesh__ctor_m4202(L_1, /*hidden argument*/NULL);
		__this->___viewMesh_2 = L_1;
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_AddComponent_TisMeshRenderer_t792_m4199(L_2, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t792_m4199_MethodInfo_var);
		GameObject_t352 * L_3 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		MeshFilter_t793 * L_4 = GameObject_AddComponent_TisMeshFilter_t793_m4200(L_3, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t793_m4200_MethodInfo_var);
		Mesh_t522 * L_5 = (__this->___viewMesh_2);
		NullCheck(L_4);
		MeshFilter_set_mesh_m4203(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		MeshRenderer_t792 * L_7 = GameObject_GetComponent_TisMeshRenderer_t792_m4201(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t792_m4201_MethodInfo_var);
		V_0 = L_7;
		MeshRenderer_t792 * L_8 = V_0;
		Material_t523 * L_9 = (__this->___viewMaterial_3);
		NullCheck(L_8);
		Renderer_set_material_m4018(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::CreateMeshForAngleRange(System.Single,System.Single)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewRenderer_CreateMeshForAngleRange_m2833 (ConeOfViewRenderer_t520 * __this, float ___minAngle, float ___maxAngle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConeOfViewRenderer_EnsureInitialized_m2832(__this, /*hidden argument*/NULL);
		Mesh_t522 ** L_0 = &(__this->___viewMesh_2);
		float L_1 = ___minAngle;
		float L_2 = ___maxAngle;
		int32_t L_3 = (__this->___numTriangles_4);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		Utilities_MakeFanWithAngleRange_m3632(NULL /*static, unused*/, L_0, L_1, L_2, (4.6f), L_3, /*hidden argument*/NULL);
		return;
	}
}
// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneState.h"
#ifndef _MSC_VER
#else
#endif
// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneStateMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void CrossSceneState::.ctor()
extern "C" void CrossSceneState__ctor_m2834 (CrossSceneState_t524 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// CrossSceneState CrossSceneState::get_instance()
extern TypeInfo* CrossSceneState_t524_il2cpp_TypeInfo_var;
extern "C" CrossSceneState_t524 * CrossSceneState_get_instance_m2835 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t524 * L_0 = ((CrossSceneState_t524_StaticFields*)CrossSceneState_t524_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void CrossSceneState::set_instance(CrossSceneState)
extern TypeInfo* CrossSceneState_t524_il2cpp_TypeInfo_var;
extern "C" void CrossSceneState_set_instance_m2836 (Object_t * __this /* static, unused */, CrossSceneState_t524 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t524 * L_0 = ___value;
		((CrossSceneState_t524_StaticFields*)CrossSceneState_t524_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void CrossSceneState::Awake()
extern "C" void CrossSceneState_Awake_m2837 (CrossSceneState_t524 * __this, const MethodInfo* method)
{
	{
		CrossSceneState_set_instance_m2836(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___didWelcome_2 = 0;
		return;
	}
}
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouse.h"
#ifndef _MSC_VER
#else
#endif
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouseMethodDeclarations.h"

// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMove.h"
// MouseTypeDesc
#include "AssemblyU2DCSharp_MouseTypeDesc.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfig.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMoveMethodDeclarations.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfigMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
struct Component_t762;
struct SpriteRenderer_t658;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t762;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m4011_gshared (Component_t762 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m4011(__this, method) (( Object_t * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t658_m4204(__this, method) (( SpriteRenderer_t658 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void DeadMouse::.ctor()
extern "C" void DeadMouse__ctor_m2838 (DeadMouse_t525 * __this, const MethodInfo* method)
{
	{
		__this->___extraScale_3 = (0.32f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MouseType DeadMouse::get_mouseType()
extern "C" int32_t DeadMouse_get_mouseType_m2839 (DeadMouse_t525 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void DeadMouse::set_mouseType(MouseConfig/MouseType)
extern "C" void DeadMouse_set_mouseType_m2840 (DeadMouse_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void DeadMouse::Start()
extern "C" void DeadMouse_Start_m2841 (DeadMouse_t525 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouse::Configure(MouseMove)
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t658_m4204_MethodInfo_var;
extern "C" void DeadMouse_Configure_m2842 (DeadMouse_t525 * __this, MouseMove_t527 * ___parentMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Component_GetComponent_TisSpriteRenderer_t658_m4204_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		s_Il2CppMethodIntialized = true;
	}
	MouseTypeDesc_t605 * V_0 = {0};
	SpriteRenderer_t658 * V_1 = {0};
	Vector3_t535  V_2 = {0};
	{
		MouseMove_t527 * L_0 = ___parentMouse;
		NullCheck(L_0);
		int32_t L_1 = MouseMove_get_mouseType_m3146(L_0, /*hidden argument*/NULL);
		DeadMouse_set_mouseType_m2840(__this, L_1, /*hidden argument*/NULL);
		MouseConfig_t596 * L_2 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		MouseMove_t527 * L_3 = ___parentMouse;
		NullCheck(L_3);
		int32_t L_4 = MouseMove_get_mouseType_m3146(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MouseTypeDesc_t605 * L_5 = MouseConfig_GetMouseTypeDesc_m3143(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		SpriteRenderer_t658 * L_6 = Component_GetComponent_TisSpriteRenderer_t658_m4204(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t658_m4204_MethodInfo_var);
		V_1 = L_6;
		SpriteRenderer_t658 * L_7 = V_1;
		MouseTypeDesc_t605 * L_8 = V_0;
		NullCheck(L_8);
		Sprite_t510 * L_9 = (L_8->___deadMouseSprite_0);
		NullCheck(L_7);
		SpriteRenderer_set_sprite_m4205(L_7, L_9, /*hidden argument*/NULL);
		MouseMove_t527 * L_10 = ___parentMouse;
		NullCheck(L_10);
		GameObject_t352 * L_11 = Component_get_gameObject_m3771(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t406 * L_12 = GameObject_get_transform_m4054(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t535  L_13 = Transform_get_position_m4056(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (__this->___zIndex_2);
		(&V_2)->___z_3 = L_14;
		Transform_t406 * L_15 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Vector3_t535  L_16 = V_2;
		NullCheck(L_15);
		Transform_set_position_m4058(L_15, L_16, /*hidden argument*/NULL);
		Transform_t406 * L_17 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		MouseMove_t527 * L_18 = ___parentMouse;
		NullCheck(L_18);
		GameObject_t352 * L_19 = Component_get_gameObject_m3771(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_t406 * L_20 = GameObject_get_transform_m4054(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Quaternion_t789  L_21 = Transform_get_rotation_m4206(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_rotation_m4164(L_17, L_21, /*hidden argument*/NULL);
		Transform_t406 * L_22 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		MouseTypeDesc_t605 * L_23 = V_0;
		NullCheck(L_23);
		float L_24 = (L_23->___scale_5);
		float L_25 = (__this->___extraScale_3);
		MouseTypeDesc_t605 * L_26 = V_0;
		NullCheck(L_26);
		float L_27 = (L_26->___scale_5);
		float L_28 = (__this->___extraScale_3);
		Vector3_t535  L_29 = {0};
		Vector3__ctor_m4049(&L_29, ((float)((float)L_24*(float)L_25)), ((float)((float)L_27*(float)L_28)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m4060(L_22, L_29, /*hidden argument*/NULL);
		return;
	}
}
// DeadMouseRelay/MultiKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MultiKillEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// DeadMouseRelay/MultiKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MultiKillEventHandlerMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void DeadMouseRelay/MultiKillEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MultiKillEventHandler__ctor_m2843 (MultiKillEventHandler_t526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DeadMouseRelay/MultiKillEventHandler::Invoke(System.Int32,UnityEngine.Vector3)
extern "C" void MultiKillEventHandler_Invoke_m2844 (MultiKillEventHandler_t526 * __this, int32_t ___numKilled, Vector3_t535  ___pawPosition, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MultiKillEventHandler_Invoke_m2844((MultiKillEventHandler_t526 *)__this->___prev_9,___numKilled, ___pawPosition, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___numKilled, Vector3_t535  ___pawPosition, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___numKilled, ___pawPosition,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___numKilled, Vector3_t535  ___pawPosition, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___numKilled, ___pawPosition,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MultiKillEventHandler_t526(Il2CppObject* delegate, int32_t ___numKilled, Vector3_t535  ___pawPosition)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t, Vector3_t535 );
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___numKilled' to native representation

	// Marshaling of parameter '___pawPosition' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___numKilled, ___pawPosition);

	// Marshaling cleanup of parameter '___numKilled' native representation

	// Marshaling cleanup of parameter '___pawPosition' native representation

}
// System.IAsyncResult DeadMouseRelay/MultiKillEventHandler::BeginInvoke(System.Int32,UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t535_il2cpp_TypeInfo_var;
extern "C" Object_t * MultiKillEventHandler_BeginInvoke_m2845 (MultiKillEventHandler_t526 * __this, int32_t ___numKilled, Vector3_t535  ___pawPosition, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Vector3_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___numKilled);
	__d_args[1] = Box(Vector3_t535_il2cpp_TypeInfo_var, &___pawPosition);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DeadMouseRelay/MultiKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MultiKillEventHandler_EndInvoke_m2846 (MultiKillEventHandler_t526 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// DeadMouseRelay/MouseKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MouseKillEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// DeadMouseRelay/MouseKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MouseKillEventHandlerMethodDeclarations.h"



// System.Void DeadMouseRelay/MouseKillEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MouseKillEventHandler__ctor_m2847 (MouseKillEventHandler_t528 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DeadMouseRelay/MouseKillEventHandler::Invoke(MouseMove)
extern "C" void MouseKillEventHandler_Invoke_m2848 (MouseKillEventHandler_t528 * __this, MouseMove_t527 * ___mouseMove, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MouseKillEventHandler_Invoke_m2848((MouseKillEventHandler_t528 *)__this->___prev_9,___mouseMove, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MouseMove_t527 * ___mouseMove, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MouseMove_t527 * ___mouseMove, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MouseKillEventHandler_t528(Il2CppObject* delegate, MouseMove_t527 * ___mouseMove)
{
	// Marshaling of parameter '___mouseMove' to native representation
	MouseMove_t527 * ____mouseMove_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'MouseMove'."));
}
// System.IAsyncResult DeadMouseRelay/MouseKillEventHandler::BeginInvoke(MouseMove,System.AsyncCallback,System.Object)
extern "C" Object_t * MouseKillEventHandler_BeginInvoke_m2849 (MouseKillEventHandler_t528 * __this, MouseMove_t527 * ___mouseMove, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___mouseMove;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DeadMouseRelay/MouseKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseKillEventHandler_EndInvoke_m2850 (MouseKillEventHandler_t528 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// DeadMouseRelay
#include "AssemblyU2DCSharp_DeadMouseRelay.h"
#ifndef _MSC_VER
#else
#endif
// DeadMouseRelay
#include "AssemblyU2DCSharp_DeadMouseRelayMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void DeadMouseRelay::.ctor()
extern "C" void DeadMouseRelay__ctor_m2851 (DeadMouseRelay_t529 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadMouseRelay::add_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern TypeInfo* MultiKillEventHandler_t526_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_add_MultiKill_m2852 (DeadMouseRelay_t529 * __this, MultiKillEventHandler_t526 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MultiKillEventHandler_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		MultiKillEventHandler_t526 * L_0 = (__this->___MultiKill_3);
		MultiKillEventHandler_t526 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MultiKill_3 = ((MultiKillEventHandler_t526 *)Castclass(L_2, MultiKillEventHandler_t526_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::remove_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern TypeInfo* MultiKillEventHandler_t526_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_remove_MultiKill_m2853 (DeadMouseRelay_t529 * __this, MultiKillEventHandler_t526 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MultiKillEventHandler_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		MultiKillEventHandler_t526 * L_0 = (__this->___MultiKill_3);
		MultiKillEventHandler_t526 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MultiKill_3 = ((MultiKillEventHandler_t526 *)Castclass(L_2, MultiKillEventHandler_t526_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::add_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern TypeInfo* MouseKillEventHandler_t528_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_add_MouseKill_m2854 (DeadMouseRelay_t529 * __this, MouseKillEventHandler_t528 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseKillEventHandler_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseKillEventHandler_t528 * L_0 = (__this->___MouseKill_4);
		MouseKillEventHandler_t528 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseKill_4 = ((MouseKillEventHandler_t528 *)Castclass(L_2, MouseKillEventHandler_t528_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::remove_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern TypeInfo* MouseKillEventHandler_t528_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_remove_MouseKill_m2855 (DeadMouseRelay_t529 * __this, MouseKillEventHandler_t528 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseKillEventHandler_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseKillEventHandler_t528 * L_0 = (__this->___MouseKill_4);
		MouseKillEventHandler_t528 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseKill_4 = ((MouseKillEventHandler_t528 *)Castclass(L_2, MouseKillEventHandler_t528_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::Awake()
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_Awake_m2856 (DeadMouseRelay_t529 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void DeadMouseRelay::Start()
extern "C" void DeadMouseRelay_Start_m2857 (DeadMouseRelay_t529 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouseRelay::Update()
extern "C" void DeadMouseRelay_Update_m2858 (DeadMouseRelay_t529 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouseRelay::HandleMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void DeadMouseRelay_HandleMultiKill_m2859 (DeadMouseRelay_t529 * __this, int32_t ___numKilled, Vector3_t535  ___pawPosition, const MethodInfo* method)
{
	{
		MultiKillEventHandler_t526 * L_0 = (__this->___MultiKill_3);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		MultiKillEventHandler_t526 * L_1 = (__this->___MultiKill_3);
		int32_t L_2 = ___numKilled;
		Vector3_t535  L_3 = ___pawPosition;
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, Vector3_t535  >::Invoke(11 /* System.Void DeadMouseRelay/MultiKillEventHandler::Invoke(System.Int32,UnityEngine.Vector3) */, L_1, L_2, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void DeadMouseRelay::HandleMouseKill(MouseMove)
extern "C" void DeadMouseRelay_HandleMouseKill_m2860 (DeadMouseRelay_t529 * __this, MouseMove_t527 * ___mouseMove, const MethodInfo* method)
{
	{
		MouseKillEventHandler_t528 * L_0 = (__this->___MouseKill_4);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		MouseKillEventHandler_t528 * L_1 = (__this->___MouseKill_4);
		MouseMove_t527 * L_2 = ___mouseMove;
		NullCheck(L_1);
		VirtActionInvoker1< MouseMove_t527 * >::Invoke(11 /* System.Void DeadMouseRelay/MouseKillEventHandler::Invoke(MouseMove) */, L_1, L_2);
	}

IL_0017:
	{
		MouseMove_t527 * L_3 = ___mouseMove;
		NullCheck(L_3);
		MouseMove_OnKilled_m3170(L_3, /*hidden argument*/NULL);
		return;
	}
}
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
#ifndef _MSC_VER
#else
#endif
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"



// System.Void DebugConfig::.ctor()
extern "C" void DebugConfig__ctor_m2861 (DebugConfig_t530 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// DebugConfig DebugConfig::get_instance()
extern TypeInfo* DebugConfig_t530_il2cpp_TypeInfo_var;
extern "C" DebugConfig_t530 * DebugConfig_get_instance_m2862 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t530 * L_0 = ((DebugConfig_t530_StaticFields*)DebugConfig_t530_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void DebugConfig::set_instance(DebugConfig)
extern TypeInfo* DebugConfig_t530_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_set_instance_m2863 (Object_t * __this /* static, unused */, DebugConfig_t530 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t530 * L_0 = ___value;
		((DebugConfig_t530_StaticFields*)DebugConfig_t530_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void DebugConfig::Awake()
extern "C" void DebugConfig_Awake_m2864 (DebugConfig_t530 * __this, const MethodInfo* method)
{
	{
		__this->___useDebugValues_2 = 0;
		DebugConfig_set_instance_m2863(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___debugFlags_7 = 0;
		return;
	}
}
// System.Void DebugConfig::Start()
extern "C" void DebugConfig_Start_m2865 (DebugConfig_t530 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean DebugConfig::DebugFlagSet(System.Int32)
extern "C" bool DebugConfig_DebugFlagSet_m2866 (DebugConfig_t530 * __this, int32_t ___debugFlag, const MethodInfo* method)
{
	{
		int32_t L_0 = ___debugFlag;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___debugFlag;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)32))))
		{
			goto IL_0011;
		}
	}

IL_000f:
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_2 = ___debugFlag;
		int32_t L_3 = (__this->___debugFlags_7);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)))))&(int32_t)L_3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// DebugLogPropagate
#include "AssemblyU2DCSharp_DebugLogPropagate.h"
#ifndef _MSC_VER
#else
#endif
// DebugLogPropagate
#include "AssemblyU2DCSharp_DebugLogPropagateMethodDeclarations.h"

// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void DebugLogPropagate::.ctor()
extern "C" void DebugLogPropagate__ctor_m2867 (DebugLogPropagate_t531 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::LogInIOS(System.String)
extern "C" {void DEFAULT_CALL LogInIOS(char*);}
extern "C" void DebugLogPropagate_LogInIOS_m2868 (Object_t * __this /* static, unused */, String_t* ___testArg, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)LogInIOS;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'LogInIOS'"));
		}
	}

	// Marshaling of parameter '___testArg' to native representation
	char* ____testArg_marshaled = { 0 };
	____testArg_marshaled = il2cpp_codegen_marshal_string(___testArg);

	// Native function invocation
	_il2cpp_pinvoke_func(____testArg_marshaled);

	// Marshaling cleanup of parameter '___testArg' native representation
	il2cpp_codegen_marshal_free(____testArg_marshaled);
	____testArg_marshaled = NULL;

}
// System.Void DebugLogPropagate::OnEnable()
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m2871_MethodInfo_var;
extern "C" void DebugLogPropagate_OnEnable_m2869 (DebugLogPropagate_t531 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		DebugLogPropagate_HandleLog_m2871_MethodInfo_var = il2cpp_codegen_method_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m2871_MethodInfo_var };
		LogCallback_t54 * L_1 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m4157(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::OnDisable()
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m2871_MethodInfo_var;
extern "C" void DebugLogPropagate_OnDisable_m2870 (DebugLogPropagate_t531 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		DebugLogPropagate_HandleLog_m2871_MethodInfo_var = il2cpp_codegen_method_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m2871_MethodInfo_var };
		LogCallback_t54 * L_1 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_logMessageReceived_m4207(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::HandleLog(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* LogType_t101_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void DebugLogPropagate_HandleLog_m2871 (DebugLogPropagate_t531 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = ___type;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(LogType_t101_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___condition;
		String_t* L_4 = ___stackTrace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m4208(NULL /*static, unused*/, (String_t*) &_stringLiteral1019, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1020, L_7, /*hidden argument*/NULL);
		DebugLogPropagate_LogInIOS_m2868(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0033:
	{
		__this->___foo_2 = ((int32_t)23);
		int32_t L_9 = (__this->___foo_2);
		int32_t L_10 = (__this->___foo_2);
		__this->___foo_2 = ((int32_t)((int32_t)L_9*(int32_t)L_10));
	}

IL_004e:
	{
		return;
	}
}
// DialogController
#include "AssemblyU2DCSharp_DialogController.h"
#ifndef _MSC_VER
#else
#endif
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"

// PausedOverlay
#include "AssemblyU2DCSharp_PausedOverlay.h"
// TimeController
#include "AssemblyU2DCSharp_TimeController.h"
// PausedOverlay
#include "AssemblyU2DCSharp_PausedOverlayMethodDeclarations.h"
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"


// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m2872 (DialogController_t532 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::Awake()
extern TypeInfo* DialogController_t532_il2cpp_TypeInfo_var;
extern "C" void DialogController_Awake_m2873 (DialogController_t532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern TypeInfo* PausedOverlay_t613_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern "C" void DialogController_ShowDialog_m2874 (DialogController_t532 * __this, GameObject_t352 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = ___dialog;
		__this->___activeDialog_3 = L_0;
		PausedOverlay_t613 * L_1 = ((PausedOverlay_t613_StaticFields*)PausedOverlay_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_2 = ___dialog;
		NullCheck(L_1);
		PausedOverlay_SetChildElement_m3275(L_1, L_2, /*hidden argument*/NULL);
		TimeController_t657 * L_3 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_PauseTime_m3541(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern "C" void DialogController_HideDialog_m2875 (DialogController_t532 * __this, GameObject_t352 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = ___dialog;
		GameObject_t352 * L_1 = (__this->___activeDialog_3);
		bool L_2 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		__this->___activeDialog_3 = (GameObject_t352 *)NULL;
		TimeController_t657 * L_3 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_UnPauseTime_m3542(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m2876 (DialogController_t532 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___activeDialog_3);
		bool L_1 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_0, (Object_t704 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandler.h"
#ifndef _MSC_VER
#else
#endif
// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandlerMethodDeclarations.h"



// System.Void DistortForEffect/DistortFinishedHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DistortFinishedHandler__ctor_m2877 (DistortFinishedHandler_t533 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DistortForEffect/DistortFinishedHandler::Invoke(UnityEngine.GameObject)
extern "C" void DistortFinishedHandler_Invoke_m2878 (DistortFinishedHandler_t533 * __this, GameObject_t352 * ___go, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DistortFinishedHandler_Invoke_m2878((DistortFinishedHandler_t533 *)__this->___prev_9,___go, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, GameObject_t352 * ___go, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___go,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, GameObject_t352 * ___go, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___go,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___go,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DistortFinishedHandler_t533(Il2CppObject* delegate, GameObject_t352 * ___go)
{
	// Marshaling of parameter '___go' to native representation
	GameObject_t352 * ____go_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.GameObject'."));
}
// System.IAsyncResult DistortForEffect/DistortFinishedHandler::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * DistortFinishedHandler_BeginInvoke_m2879 (DistortFinishedHandler_t533 * __this, GameObject_t352 * ___go, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___go;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DistortForEffect/DistortFinishedHandler::EndInvoke(System.IAsyncResult)
extern "C" void DistortFinishedHandler_EndInvoke_m2880 (DistortFinishedHandler_t533 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
#ifndef _MSC_VER
#else
#endif
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"

// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"


// System.Void DistortForEffect::.ctor()
extern "C" void DistortForEffect__ctor_m2881 (DistortForEffect_t534 * __this, const MethodInfo* method)
{
	{
		__this->___distortPeriod_4 = (0.3f);
		__this->___distortScale_5 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DistortForEffect::get_distorting()
extern "C" bool DistortForEffect_get_distorting_m2882 (DistortForEffect_t534 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdistortingU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void DistortForEffect::set_distorting(System.Boolean)
extern "C" void DistortForEffect_set_distorting_m2883 (DistortForEffect_t534 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdistortingU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void DistortForEffect::Awake()
extern "C" void DistortForEffect_Awake_m2884 (DistortForEffect_t534 * __this, const MethodInfo* method)
{
	{
		DistortForEffect_set_distorting_m2883(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Start()
extern "C" void DistortForEffect_Start_m2885 (DistortForEffect_t534 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = (__this->___thingToScale_6);
		bool L_1 = Object_op_Equality_m3796(NULL /*static, unused*/, L_0, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4054(L_2, /*hidden argument*/NULL);
		__this->___thingToScale_6 = L_3;
	}

IL_0022:
	{
		Transform_t406 * L_4 = (__this->___thingToScale_6);
		NullCheck(L_4);
		Vector3_t535  L_5 = Transform_get_localScale_m4059(L_4, /*hidden argument*/NULL);
		__this->___originalScale_8 = L_5;
		return;
	}
}
// System.Void DistortForEffect::DistortWithDelay(System.Single)
extern "C" void DistortForEffect_DistortWithDelay_m2886 (DistortForEffect_t534 * __this, float ___delay, const MethodInfo* method)
{
	{
		bool L_0 = DistortForEffect_get_distorting_m2882(__this, /*hidden argument*/NULL);
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
		float L_1 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = ___delay;
		__this->___startDistortTime_3 = ((float)((float)L_1+(float)L_2));
		DistortForEffect_set_distorting_m2883(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::SetDistortFinishedHandler(DistortForEffect/DistortFinishedHandler)
extern "C" void DistortForEffect_SetDistortFinishedHandler_m2887 (DistortForEffect_t534 * __this, DistortFinishedHandler_t533 * ___handler, const MethodInfo* method)
{
	{
		DistortFinishedHandler_t533 * L_0 = ___handler;
		__this->___handler_2 = L_0;
		return;
	}
}
// System.Void DistortForEffect::Distort()
extern "C" void DistortForEffect_Distort_m2888 (DistortForEffect_t534 * __this, const MethodInfo* method)
{
	{
		DistortForEffect_DistortWithDelay_m2886(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Cancel()
extern "C" void DistortForEffect_Cancel_m2889 (DistortForEffect_t534 * __this, const MethodInfo* method)
{
	{
		DistortForEffect_set_distorting_m2883(__this, 0, /*hidden argument*/NULL);
		Transform_t406 * L_0 = (__this->___thingToScale_6);
		Vector3_t535  L_1 = (__this->___originalScale_8);
		NullCheck(L_0);
		Transform_set_localScale_m4060(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Update()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void DistortForEffect_Update_m2890 (DistortForEffect_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		bool L_0 = DistortForEffect_get_distorting_m2882(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___startDistortTime_3);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		return;
	}

IL_001c:
	{
		float L_3 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = (__this->___startDistortTime_3);
		V_1 = ((float)((float)L_4-(float)L_5));
		float L_6 = V_1;
		float L_7 = (__this->___distortPeriod_4);
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0065;
		}
	}
	{
		V_2 = (1.0f);
		DistortForEffect_set_distorting_m2883(__this, 0, /*hidden argument*/NULL);
		DistortFinishedHandler_t533 * L_8 = (__this->___handler_2);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		DistortFinishedHandler_t533 * L_9 = (__this->___handler_2);
		GameObject_t352 * L_10 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< GameObject_t352 * >::Invoke(11 /* System.Void DistortForEffect/DistortFinishedHandler::Invoke(UnityEngine.GameObject) */, L_9, L_10);
	}

IL_0060:
	{
		goto IL_00ac;
	}

IL_0065:
	{
		float L_11 = V_1;
		float L_12 = (__this->___distortPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_13 = sinf(((float)((float)((float)((float)((float)((float)L_11*(float)(2.0f)))*(float)(3.14159274f)))/(float)L_12)));
		V_3 = L_13;
		float L_14 = V_1;
		float L_15 = (__this->___distortPeriod_4);
		float L_16 = cosf(((float)((float)((float)((float)((float)((float)L_14*(float)(0.5f)))*(float)(3.14159274f)))/(float)L_15)));
		V_4 = L_16;
		float L_17 = V_3;
		float L_18 = V_4;
		float L_19 = (__this->___distortScale_5);
		V_2 = ((float)((float)(1.0f)+(float)((float)((float)((float)((float)L_17*(float)L_18))*(float)L_19))));
	}

IL_00ac:
	{
		bool L_20 = (__this->___squishAndStretch_7);
		if (!L_20)
		{
			goto IL_00c5;
		}
	}
	{
		float L_21 = V_2;
		V_5 = ((float)((float)(1.0f)/(float)L_21));
		goto IL_00c8;
	}

IL_00c5:
	{
		float L_22 = V_2;
		V_5 = L_22;
	}

IL_00c8:
	{
		Transform_t406 * L_23 = (__this->___thingToScale_6);
		float L_24 = V_5;
		Vector3_t535 * L_25 = &(__this->___originalScale_8);
		float L_26 = (L_25->___x_1);
		float L_27 = V_2;
		Vector3_t535 * L_28 = &(__this->___originalScale_8);
		float L_29 = (L_28->___y_2);
		float L_30 = V_2;
		Vector3_t535 * L_31 = &(__this->___originalScale_8);
		float L_32 = (L_31->___z_3);
		Vector3_t535  L_33 = {0};
		Vector3__ctor_m4049(&L_33, ((float)((float)L_24*(float)L_26)), ((float)((float)L_27*(float)L_29)), ((float)((float)L_30*(float)L_32)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_m4060(L_23, L_33, /*hidden argument*/NULL);
		return;
	}
}
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"
#ifndef _MSC_VER
#else
#endif
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDescMethodDeclarations.h"

// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocation.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDesc.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"


// System.Void ExplicitMouseDesc::.ctor(System.Single,System.Boolean,MouseSinkController/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc__ctor_m2891 (ExplicitMouseDesc_t536 * __this, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		float L_0 = ___delayToNextMouse;
		__this->___delayToNextMouse_4 = L_0;
		bool L_1 = ___isClockwise;
		__this->___isClockwise_2 = L_1;
		int32_t L_2 = ___location;
		__this->___mouseHoleLocation_1 = L_2;
		int32_t L_3 = ___mType;
		__this->___mouseType_0 = L_3;
		int32_t L_4 = ___track;
		__this->___track_3 = L_4;
		int32_t L_5 = ___wType;
		ExplicitMouseDesc_AddWiggle_m2900(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MouseWiggleType ExplicitMouseDesc::get_wiggleType()
extern "C" int32_t ExplicitMouseDesc_get_wiggleType_m2892 (ExplicitMouseDesc_t536 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleTypeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleType(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_set_wiggleType_m2893 (ExplicitMouseDesc_t536 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleTypeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Single ExplicitMouseDesc::get_wiggleMagnitude()
extern "C" float ExplicitMouseDesc_get_wiggleMagnitude_m2894 (ExplicitMouseDesc_t536 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CwiggleMagnitudeU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleMagnitude(System.Single)
extern "C" void ExplicitMouseDesc_set_wiggleMagnitude_m2895 (ExplicitMouseDesc_t536 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CwiggleMagnitudeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 ExplicitMouseDesc::get_wiggleCycles()
extern "C" int32_t ExplicitMouseDesc_get_wiggleCycles_m2896 (ExplicitMouseDesc_t536 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleCyclesU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleCycles(System.Int32)
extern "C" void ExplicitMouseDesc_set_wiggleCycles_m2897 (ExplicitMouseDesc_t536 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleCyclesU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean ExplicitMouseDesc::get_wiggleClockwise()
extern "C" bool ExplicitMouseDesc_get_wiggleClockwise_m2898 (ExplicitMouseDesc_t536 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CwiggleClockwiseU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleClockwise(System.Boolean)
extern "C" void ExplicitMouseDesc_set_wiggleClockwise_m2899 (ExplicitMouseDesc_t536 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CwiggleClockwiseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void ExplicitMouseDesc::AddWiggle(MouseConfig/MouseWiggleType)
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern "C" void ExplicitMouseDesc_AddWiggle_m2900 (ExplicitMouseDesc_t536 * __this, int32_t ___wt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	MouseWiggleDesc_t606 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		ExplicitMouseDesc_set_wiggleType_m2893(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t596 * L_1 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		int32_t L_2 = ___wt;
		NullCheck(L_1);
		MouseWiggleDesc_t606 * L_3 = MouseConfig_GetWiggleDesc_m3142(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseWiggleDesc_t606 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		MouseWiggleDesc_t606 * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = (L_5->___minMagnitude_1);
		MouseWiggleDesc_t606 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = (L_7->___maxMagnitude_2);
		float L_9 = Random_Range_m4209(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleMagnitude_m2895(__this, L_9, /*hidden argument*/NULL);
		MouseWiggleDesc_t606 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___minCycles_3);
		MouseWiggleDesc_t606 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___maxCycles_4);
		int32_t L_14 = Random_Range_m3780(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleCycles_m2897(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = Random_Range_m3780(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleClockwise_m2899(__this, ((((int32_t)((((int32_t)L_15) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharing.h"
#ifndef _MSC_VER
#else
#endif
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharingMethodDeclarations.h"

// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegate.h"
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegate.h"
// FBResult
#include "AssemblyU2DCSharp_FBResult.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegate.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegateMethodDeclarations.h"
// FB
#include "AssemblyU2DCSharp_FBMethodDeclarations.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegateMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m2901 (FacebookSharing_t537 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::Awake()
extern TypeInfo* FacebookSharing_t537_il2cpp_TypeInfo_var;
extern TypeInfo* InitDelegate_t419_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnInitComplete_m2903_MethodInfo_var;
extern "C" void FacebookSharing_Awake_m2902 (FacebookSharing_t537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		InitDelegate_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookSharing_OnInitComplete_m2903_MethodInfo_var = il2cpp_codegen_method_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		((FacebookSharing_t537_StaticFields*)FacebookSharing_t537_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		IntPtr_t L_0 = { (void*)FacebookSharing_OnInitComplete_m2903_MethodInfo_var };
		InitDelegate_t419 * L_1 = (InitDelegate_t419 *)il2cpp_codegen_object_new (InitDelegate_t419_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m3662(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Init_m2258(NULL /*static, unused*/, L_1, (HideUnityDelegate_t420 *)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnInitComplete()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnInitComplete_m2903 (FacebookSharing_t537 * __this, const MethodInfo* method)
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
// System.Void FacebookSharing::OnHideUnity(System.Boolean)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnHideUnity_m2904 (FacebookSharing_t537 * __this, bool ___isGameShown, const MethodInfo* method)
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
// System.Void FacebookSharing::ShareScore(System.Int32,System.Boolean)
extern "C" void FacebookSharing_ShareScore_m2905 (FacebookSharing_t537 * __this, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
{
	{
		int32_t L_0 = ___score;
		FacebookSharing_ShareScoreThroughLibraries_m2906(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_LoginCallback_m2908_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2906 (FacebookSharing_t537 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FacebookSharing_LoginCallback_m2908_MethodInfo_var = il2cpp_codegen_method_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = ___score;
		__this->___scoreToShare_6 = L_1;
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1022, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FacebookSharing_LoginCallback_m2908_MethodInfo_var };
		FacebookDelegate_t433 * L_3 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3666(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Login_m2261(NULL /*static, unused*/, (String_t*) &_stringLiteral148, L_3, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0040:
	{
		int32_t L_4 = ___score;
		FacebookSharing_ShareScoreInternal_m2909(__this, L_4, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2907 (FacebookSharing_t537 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, ((int32_t)12)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1023);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1023;
		StringU5BU5D_t75* L_1 = L_0;
		String_t* L_2 = WWW_EscapeURL_m4210(NULL /*static, unused*/, (String_t*) &_stringLiteral1024, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t75* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1025);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral1025;
		StringU5BU5D_t75* L_4 = L_3;
		String_t* L_5 = WWW_EscapeURL_m4210(NULL /*static, unused*/, (String_t*) &_stringLiteral1026, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1027);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 4)) = (String_t*)(String_t*) &_stringLiteral1027;
		StringU5BU5D_t75* L_7 = L_6;
		int32_t L_8 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		String_t* L_9 = Utilities_GetShareTitleForScore_m3621(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		String_t* L_10 = WWW_EscapeURL_m4210(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 5)) = (String_t*)L_10;
		StringU5BU5D_t75* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral1028);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 6)) = (String_t*)(String_t*) &_stringLiteral1028;
		StringU5BU5D_t75* L_12 = L_11;
		int32_t L_13 = ___score;
		String_t* L_14 = Utilities_GetShareMessageForScore_m3622(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = WWW_EscapeURL_m4210(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 7)) = (String_t*)L_15;
		StringU5BU5D_t75* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral1029);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 8)) = (String_t*)(String_t*) &_stringLiteral1029;
		StringU5BU5D_t75* L_17 = L_16;
		String_t* L_18 = WWW_EscapeURL_m4210(NULL /*static, unused*/, (String_t*) &_stringLiteral1030, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, ((int32_t)9))) = (String_t*)L_18;
		StringU5BU5D_t75* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)10));
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral1031);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral1031;
		StringU5BU5D_t75* L_20 = L_19;
		String_t* L_21 = WWW_EscapeURL_m4210(NULL /*static, unused*/, (String_t*) &_stringLiteral1032, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)11));
		ArrayElementTypeCheck (L_20, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, ((int32_t)11))) = (String_t*)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m450(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23 = V_0;
		String_t* L_24 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1033, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = ___score;
		String_t* L_26 = Utilities_GetShareMessageForScore_m3622(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		String_t* L_27 = WWW_EscapeURL_m4210(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		String_t* L_28 = WWW_EscapeURL_m4210(NULL /*static, unused*/, (String_t*) &_stringLiteral1030, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral1034, L_27, (String_t*) &_stringLiteral1029, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		String_t* L_30 = V_0;
		String_t* L_31 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1035, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_1;
		String_t* L_33 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1036, L_32, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		String_t* L_34 = V_2;
		String_t* L_35 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1037, L_34, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		String_t* L_36 = V_2;
		String_t* L_37 = V_1;
		Object_t * L_38 = Utilities_LaunchAppOrWeb_m3626(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3734(__this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::LoginCallback(FBResult)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_LoginCallback_m2908 (FacebookSharing_t537 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1038, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = (__this->___scoreToShare_6);
		FacebookSharing_ShareScoreInternal_m2909(__this, L_1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnFeedFinished_m2910_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreInternal_m2909 (FacebookSharing_t537 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookSharing_OnFeedFinished_m2910_MethodInfo_var = il2cpp_codegen_method_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1039, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareTitleForScore_m3621(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___score;
		String_t* L_3 = Utilities_GetShareMessageForScore_m3622(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1040, L_4, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1041, L_6, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1042, /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		IntPtr_t L_10 = { (void*)FacebookSharing_OnFeedFinished_m2910_MethodInfo_var };
		FacebookDelegate_t433 * L_11 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3666(L_11, __this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Feed_m2266(NULL /*static, unused*/, (String_t*)NULL, (String_t*) &_stringLiteral1024, (String_t*) &_stringLiteral1026, L_8, L_9, (String_t*) &_stringLiteral1030, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (Dictionary_2_t116 *)NULL, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2910 (FacebookSharing_t537 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1043, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1044, /*hidden argument*/NULL);
		return;
	}
}
// FartPuff
#include "AssemblyU2DCSharp_FartPuff.h"
#ifndef _MSC_VER
#else
#endif
// FartPuff
#include "AssemblyU2DCSharp_FartPuffMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"


// System.Void FartPuff::.ctor()
extern "C" void FartPuff__ctor_m2911 (FartPuff_t538 * __this, const MethodInfo* method)
{
	{
		__this->___velocity_3 = (1.0f);
		__this->___scaleVelocity_4 = (1.0f);
		__this->___initialScale_10 = (0.15f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FartPuff::Awake()
extern "C" void FartPuff_Awake_m2912 (FartPuff_t538 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___initialScale_10);
		__this->___scale_9 = L_0;
		float L_1 = Random_Range_m4209(NULL /*static, unused*/, (0.0f), (360.0f), /*hidden argument*/NULL);
		__this->___rotationDeg_8 = L_1;
		float L_2 = (__this->___minRotateDegVeclocity_6);
		float L_3 = (__this->___maxRotateDegVeclocity_5);
		float L_4 = Random_Range_m4209(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___rotateDegVelocity_7 = L_4;
		int32_t L_5 = Random_Range_m3780(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0056;
		}
	}
	{
		float L_6 = (__this->___rotateDegVelocity_7);
		__this->___rotateDegVelocity_7 = ((float)((float)L_6*(float)(-1.0f)));
	}

IL_0056:
	{
		return;
	}
}
// System.Void FartPuff::Start()
extern "C" void FartPuff_Start_m2913 (FartPuff_t538 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FartPuff::Update()
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern "C" void FartPuff_Update_m2914 (FartPuff_t538 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t535  V_1 = {0};
	{
		TimeController_t657 * L_0 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m3538(L_0, /*hidden argument*/NULL);
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
		float L_2 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = (__this->___velocity_3);
		Vector3_t535  L_5 = (__this->___direction_2);
		Vector3_t535  L_6 = Vector3_op_Multiply_m4211(NULL /*static, unused*/, ((float)((float)L_3*(float)L_4)), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t406 * L_7 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Transform_t406 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t535  L_9 = Transform_get_localPosition_m4212(L_8, /*hidden argument*/NULL);
		Vector3_t535  L_10 = V_1;
		Vector3_t535  L_11 = Vector3_op_Addition_m4213(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localPosition_m4214(L_8, L_11, /*hidden argument*/NULL);
		float L_12 = (__this->___scale_9);
		float L_13 = V_0;
		float L_14 = (__this->___scaleVelocity_4);
		__this->___scale_9 = ((float)((float)L_12+(float)((float)((float)L_13*(float)L_14))));
		Transform_t406 * L_15 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_16 = (__this->___scale_9);
		float L_17 = (__this->___scale_9);
		Vector3_t535  L_18 = {0};
		Vector3__ctor_m4049(&L_18, L_16, L_17, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m4060(L_15, L_18, /*hidden argument*/NULL);
		float L_19 = (__this->___rotationDeg_8);
		float L_20 = V_0;
		float L_21 = (__this->___rotateDegVelocity_7);
		__this->___rotationDeg_8 = ((float)((float)L_19+(float)((float)((float)L_20*(float)L_21))));
		Transform_t406 * L_22 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_23 = (__this->___rotationDeg_8);
		Quaternion_t789  L_24 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m4164(L_22, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FartPuff::SetDirection(UnityEngine.Vector3)
extern "C" void FartPuff_SetDirection_m2915 (FartPuff_t538 * __this, Vector3_t535  ___direction, const MethodInfo* method)
{
	{
		Vector3_t535  L_0 = ___direction;
		__this->___direction_2 = L_0;
		return;
	}
}
// FinalScoreController
#include "AssemblyU2DCSharp_FinalScoreController.h"
#ifndef _MSC_VER
#else
#endif
// FinalScoreController
#include "AssemblyU2DCSharp_FinalScoreControllerMethodDeclarations.h"

// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelper.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"


// System.Void FinalScoreController::.ctor()
extern "C" void FinalScoreController__ctor_m2916 (FinalScoreController_t539 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::Awake()
extern "C" void FinalScoreController_Awake_m2917 (FinalScoreController_t539 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FinalScoreController::Start()
extern "C" void FinalScoreController_Start_m2918 (FinalScoreController_t539 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_RegisterForEvents_m2920(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::OnDestroy()
extern "C" void FinalScoreController_OnDestroy_m2919 (FinalScoreController_t539 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_UnregisterForEvents_m2921(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m2922_MethodInfo_var;
extern "C" void FinalScoreController_RegisterForEvents_m2920 (FinalScoreController_t539 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		FinalScoreController_OnGamePhaseChanged_m2922_MethodInfo_var = il2cpp_codegen_method_info_from_index(496);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m2922_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m2922_MethodInfo_var;
extern "C" void FinalScoreController_UnregisterForEvents_m2921 (FinalScoreController_t539 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		FinalScoreController_OnGamePhaseChanged_m2922_MethodInfo_var = il2cpp_codegen_method_info_from_index(496);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m2922_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void FinalScoreController::OnGamePhaseChanged()
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern "C" void FinalScoreController_OnGamePhaseChanged_m2922 (FinalScoreController_t539 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0024;
		}
	}
	{
		SocialHelper_t648 * L_2 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		PlayerStats_t513 * L_3 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PlayerStats_get_gameScore_m3355(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		SocialHelper_ReportScore_m3487(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// FinalScoreUI
#include "AssemblyU2DCSharp_FinalScoreUI.h"
#ifndef _MSC_VER
#else
#endif
// FinalScoreUI
#include "AssemblyU2DCSharp_FinalScoreUIMethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// GameUI
#include "AssemblyU2DCSharp_GameUIMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"


// System.Void FinalScoreUI::.ctor()
extern "C" void FinalScoreUI__ctor_m2923 (FinalScoreUI_t540 * __this, const MethodInfo* method)
{
	{
		GameUI__ctor_m3023(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::Awake()
extern "C" void FinalScoreUI_Awake_m2924 (FinalScoreUI_t540 * __this, const MethodInfo* method)
{
	{
		__this->___started_4 = 0;
		return;
	}
}
// System.Void FinalScoreUI::Start()
extern "C" void FinalScoreUI_Start_m2925 (FinalScoreUI_t540 * __this, const MethodInfo* method)
{
	{
		__this->___started_4 = 1;
		FinalScoreUI_UpdateView_m2927(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::OnEnable()
extern "C" void FinalScoreUI_OnEnable_m2926 (FinalScoreUI_t540 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___started_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		FinalScoreUI_UpdateView_m2927(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void FinalScoreUI::UpdateView()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FinalScoreUI_UpdateView_m2927 (FinalScoreUI_t540 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		PlayerStats_t513 * L_2 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_GetHighScore_m3376(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayerStats_t513 * L_4 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = PlayerStats_get_gameScore_m3355(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0039;
		}
	}
	{
		PlayerStats_t513 * L_8 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		PlayerStats_SetHighScore_m3377(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		int32_t L_10 = V_0;
		if (L_10)
		{
			goto IL_0055;
		}
	}
	{
		Text_t500 * L_11 = (__this->___personalBestText_2);
		NullCheck(L_11);
		GameObject_t352 * L_12 = Component_get_gameObject_m3771(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m3971(L_12, 0, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0055:
	{
		Text_t500 * L_13 = (__this->___personalBestText_2);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3771(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m3971(L_14, 1, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_0082;
		}
	}
	{
		Text_t500 * L_17 = (__this->___personalBestText_2);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, (String_t*) &_stringLiteral1045);
		goto IL_009d;
	}

IL_0082:
	{
		Text_t500 * L_18 = (__this->___personalBestText_2);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1046, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_22);
	}

IL_009d:
	{
		Text_t500 * L_23 = (__this->___finalScoreText_3);
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		Object_t * L_26 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_25);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1047, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_27);
		return;
	}
}
// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimation.h"
#ifndef _MSC_VER
#else
#endif
// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimationMethodDeclarations.h"

// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
#include "UnityEngine_ArrayTypes.h"
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElementMethodDeclarations.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
struct GameObject_t352;
struct Canvas_t544;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t544_m4215(__this, method) (( Canvas_t544 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)
struct Component_t762;
struct RectTransform_t542;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t542_m4216(__this, method) (( RectTransform_t542 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void FlyingAnimation::.ctor()
extern "C" void FlyingAnimation__ctor_m2928 (FlyingAnimation_t546 * __this, const MethodInfo* method)
{
	{
		WorldRelativeGUIElement__ctor_m3638(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingAnimation::Awake()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var;
extern "C" void FlyingAnimation_Awake_m2929 (FlyingAnimation_t546 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4217(NULL /*static, unused*/, (String_t*) &_stringLiteral1048, /*hidden argument*/NULL);
		__this->___uxCanvasGameObject_15 = L_0;
		GameObject_t352 * L_1 = (__this->___uxCanvasGameObject_15);
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3639(__this, L_1, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = (__this->___uxCanvasGameObject_15);
		NullCheck(L_2);
		Canvas_t544 * L_3 = GameObject_GetComponent_TisCanvas_t544_m4215(L_2, /*hidden argument*/GameObject_GetComponent_TisCanvas_t544_m4215_MethodInfo_var);
		__this->___uxCanvas_16 = L_3;
		Canvas_t544 * L_4 = (__this->___uxCanvas_16);
		NullCheck(L_4);
		Camera_t545 * L_5 = Canvas_get_worldCamera_m4218(L_4, /*hidden argument*/NULL);
		__this->___uxCamera_17 = L_5;
		RectTransform_t542 * L_6 = Component_GetComponent_TisRectTransform_t542_m4216(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var);
		__this->___myRectTransform_7 = L_6;
		Image_t501 * L_7 = (__this->___image_18);
		NullCheck(L_7);
		RectTransform_t542 * L_8 = Component_GetComponent_TisRectTransform_t542_m4216(L_7, /*hidden argument*/Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var);
		__this->___imageRectTransform_8 = L_8;
		return;
	}
}
// System.Void FlyingAnimation::Start()
extern "C" void FlyingAnimation_Start_m2930 (FlyingAnimation_t546 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FlyingAnimation::Update()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void FlyingAnimation_Update_m2931 (FlyingAnimation_t546 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	SingleU5BU5D_t583* V_3 = {0};
	Vector3_t535  V_4 = {0};
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		bool L_0 = (__this->___running_11);
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
		float L_1 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startTime_10);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t352 * L_5 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		float L_6 = V_1;
		V_2 = ((float)((float)L_6/(float)(1.0f)));
		float L_7 = V_2;
		Vector3U5BU5D_t543* L_8 = (__this->___points_9);
		NullCheck(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		SingleU5BU5D_t583* L_9 = Utilities_GetBlendingCoefficients_m3630(NULL /*static, unused*/, L_7, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/NULL);
		V_3 = L_9;
		Vector3__ctor_m4049((&V_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_0091;
	}

IL_0067:
	{
		Vector3_t535  L_10 = V_4;
		SingleU5BU5D_t583* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		Vector3U5BU5D_t543* L_14 = (__this->___points_9);
		int32_t L_15 = V_5;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Vector3_t535  L_16 = Vector3_op_Multiply_m4211(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_11, L_13)), (*(Vector3_t535 *)((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_14, L_15))), /*hidden argument*/NULL);
		Vector3_t535  L_17 = Vector3_op_Addition_m4213(NULL /*static, unused*/, L_10, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		Vector3U5BU5D_t543* L_20 = (__this->___points_9);
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		RectTransform_t542 * L_21 = (__this->___myRectTransform_7);
		Vector3_t535  L_22 = V_4;
		NullCheck(L_21);
		RectTransform_set_anchoredPosition3D_m4180(L_21, L_22, /*hidden argument*/NULL);
		float L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_24 = sinf(((float)((float)(3.14159274f)*(float)L_23)));
		float L_25 = (__this->___extraBulgeScale_14);
		V_6 = ((float)((float)L_24*(float)L_25));
		float L_26 = (__this->___startScale_12);
		float L_27 = V_2;
		float L_28 = (__this->___endScale_13);
		float L_29 = V_2;
		V_7 = ((float)((float)((float)((float)L_26*(float)((float)((float)(1.0f)-(float)L_27))))+(float)((float)((float)L_28*(float)L_29))));
		float L_30 = V_7;
		float L_31 = V_6;
		V_8 = ((float)((float)L_30+(float)L_31));
		RectTransform_t542 * L_32 = (__this->___imageRectTransform_8);
		float L_33 = V_8;
		float L_34 = V_8;
		Vector3_t535  L_35 = {0};
		Vector3__ctor_m4049(&L_35, L_33, L_34, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_m4060(L_32, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingAnimation::Configure(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" void FlyingAnimation_Configure_m2932 (FlyingAnimation_t546 * __this, Vector3_t535  ___worldStartPosition, GameObject_t352 * ___canvasTarget, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	{
		Camera_t545 * L_0 = (__this->___uxCamera_17);
		GameObject_t352 * L_1 = ___canvasTarget;
		NullCheck(L_1);
		Transform_t406 * L_2 = GameObject_get_transform_m4054(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t535  L_3 = Transform_get_position_m4056(L_2, /*hidden argument*/NULL);
		Vector3_t535  L_4 = WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3643(__this, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t535  L_5 = ___worldStartPosition;
		Vector3_t535  L_6 = V_0;
		FlyingAnimation_CreatePoints_m2935(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->___running_11 = 0;
		return;
	}
}
// System.Void FlyingAnimation::ConfigureWithViewportPos(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void FlyingAnimation_ConfigureWithViewportPos_m2933 (FlyingAnimation_t546 * __this, Vector3_t535  ___worldStartPosition, Vector3_t535  ___viewportPos, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	{
		Vector3_t535  L_0 = ___viewportPos;
		Vector3_t535  L_1 = WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3644(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t535  L_2 = ___worldStartPosition;
		Vector3_t535  L_3 = V_0;
		FlyingAnimation_CreatePoints_m2935(__this, L_2, L_3, /*hidden argument*/NULL);
		__this->___running_11 = 0;
		return;
	}
}
// System.Void FlyingAnimation::Run()
extern "C" void FlyingAnimation_Run_m2934 (FlyingAnimation_t546 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_10 = L_0;
		__this->___running_11 = 1;
		return;
	}
}
// System.Void FlyingAnimation::CreatePoints(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Vector3U5BU5D_t543_il2cpp_TypeInfo_var;
extern "C" void FlyingAnimation_CreatePoints_m2935 (FlyingAnimation_t546 * __this, Vector3_t535  ___worldStartPosition, Vector3_t535  ___otherCanvasPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		__this->___points_9 = ((Vector3U5BU5D_t543*)SZArrayNew(Vector3U5BU5D_t543_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t543* L_0 = (__this->___points_9);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Vector3_t535  L_1 = ___worldStartPosition;
		Vector3_t535  L_2 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3642(__this, L_1, /*hidden argument*/NULL);
		*((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_0, 0)) = L_2;
		Vector3U5BU5D_t543* L_3 = (__this->___points_9);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		Vector3_t535  L_4 = ___otherCanvasPosition;
		*((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_3, 2)) = L_4;
		float L_5 = Random_Range_m4209(NULL /*static, unused*/, (0.1f), (0.4f), /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = Random_Range_m4209(NULL /*static, unused*/, (0.1f), (0.4f), /*hidden argument*/NULL);
		V_1 = L_6;
		Vector3U5BU5D_t543* L_7 = (__this->___points_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		float L_8 = V_0;
		Vector3U5BU5D_t543* L_9 = (__this->___points_9);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		float L_10 = (((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_9, 0))->___x_1);
		float L_11 = V_0;
		Vector3U5BU5D_t543* L_12 = (__this->___points_9);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		float L_13 = (((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_12, 2))->___x_1);
		float L_14 = V_1;
		Vector3U5BU5D_t543* L_15 = (__this->___points_9);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		float L_16 = (((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_15, 0))->___y_2);
		float L_17 = V_1;
		Vector3U5BU5D_t543* L_18 = (__this->___points_9);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		float L_19 = (((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_18, 2))->___y_2);
		Vector3_t535  L_20 = {0};
		Vector3__ctor_m4049(&L_20, ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_8))*(float)L_10))+(float)((float)((float)L_11*(float)L_13)))), ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_14))*(float)L_16))+(float)((float)((float)L_17*(float)L_19)))), (0.0f), /*hidden argument*/NULL);
		*((Vector3_t535 *)(Vector3_t535 *)SZArrayLdElema(L_7, 1)) = L_20;
		return;
	}
}
// FooterController
#include "AssemblyU2DCSharp_FooterController.h"
#ifndef _MSC_VER
#else
#endif
// FooterController
#include "AssemblyU2DCSharp_FooterControllerMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Void FooterController::.ctor()
extern "C" void FooterController__ctor_m2936 (FooterController_t549 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FooterController::Start()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var;
extern "C" void FooterController_Start_m2937 (FooterController_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	RectTransform_t542 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Rect_t695  V_5 = {0};
	{
		float L_0 = GoogleAdController_GetBannerHeight_m3064(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		RectTransform_t542 * L_1 = Component_GetComponent_TisRectTransform_t542_m4216(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t542_m4216_MethodInfo_var);
		V_1 = L_1;
		RectTransform_t542 * L_2 = V_1;
		NullCheck(L_2);
		Rect_t695  L_3 = RectTransform_get_rect_m4191(L_2, /*hidden argument*/NULL);
		V_5 = L_3;
		float L_4 = Rect_get_height_m4053((&V_5), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = V_0;
		float L_6 = V_2;
		V_3 = ((float)((float)L_5/(float)L_6));
		V_4 = 0;
		goto IL_0049;
	}

IL_0029:
	{
		RectTransformU5BU5D_t548* L_7 = (__this->___contents_2);
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		float L_10 = V_3;
		float L_11 = V_3;
		Vector2_t110  L_12 = {0};
		Vector2__ctor_m4219(&L_12, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t535  L_13 = Vector2_op_Implicit_m4220(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck((*(RectTransform_t542 **)(RectTransform_t542 **)SZArrayLdElema(L_7, L_9)));
		Transform_set_localScale_m4060((*(RectTransform_t542 **)(RectTransform_t542 **)SZArrayLdElema(L_7, L_9)), L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_15 = V_4;
		RectTransformU5BU5D_t548* L_16 = (__this->___contents_2);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		RectTransform_t542 * L_17 = V_1;
		float L_18 = V_0;
		Vector2_t110  L_19 = {0};
		Vector2__ctor_m4219(&L_19, (0.0f), L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m4221(L_17, L_19, /*hidden argument*/NULL);
		return;
	}
}
// GameAnalyticsAnalyticsController
#include "AssemblyU2DCSharp_GameAnalyticsAnalyticsController.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsAnalyticsController
#include "AssemblyU2DCSharp_GameAnalyticsAnalyticsControllerMethodDeclarations.h"

// GameAnalyticsSDK.GA_Progression/GAProgressionStatus
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Progression_GAProgress.h"
// GameAnalyticsSDK.GameAnalytics
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GameAnalyticsMethodDeclarations.h"


// System.Void GameAnalyticsAnalyticsController::.ctor()
extern "C" void GameAnalyticsAnalyticsController__ctor_m2938 (GameAnalyticsAnalyticsController_t550 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::Start()
extern "C" void GameAnalyticsAnalyticsController_Start_m2939 (GameAnalyticsAnalyticsController_t550 * __this, const MethodInfo* method)
{
	{
		GameAnalyticsAnalyticsController_RegisterForEvents_m2941(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::OnDestroy()
extern "C" void GameAnalyticsAnalyticsController_OnDestroy_m2940 (GameAnalyticsAnalyticsController_t550 * __this, const MethodInfo* method)
{
	{
		GameAnalyticsAnalyticsController_UnregisterForEvents_m2942(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2943_MethodInfo_var;
extern "C" void GameAnalyticsAnalyticsController_RegisterForEvents_m2941 (GameAnalyticsAnalyticsController_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2943_MethodInfo_var = il2cpp_codegen_method_info_from_index(499);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2943_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2943_MethodInfo_var;
extern "C" void GameAnalyticsAnalyticsController_UnregisterForEvents_m2942 (GameAnalyticsAnalyticsController_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2943_MethodInfo_var = il2cpp_codegen_method_info_from_index(499);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2943_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::OnGamePhaseChanged()
extern "C" void GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2943 (GameAnalyticsAnalyticsController_t550 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		GameAnalyticsAnalyticsController_LogGameOverEvent_m2944(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::LogGameOverEvent()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void GameAnalyticsAnalyticsController_LogGameOverEvent_m2944 (GameAnalyticsAnalyticsController_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t561 * L_2 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_instancesFinishedEver_m3009(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t561 * L_8 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = GamePhaseState_get_instancesFinishedThisSession_m3007(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Concat_m409(NULL /*static, unused*/, L_7, L_11, /*hidden argument*/NULL);
		PlayerStats_t513 * L_13 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = PlayerStats_get_gameScore_m3355(L_13, /*hidden argument*/NULL);
		GameAnalytics_NewProgressionEvent_m2665(NULL /*static, unused*/, 2, L_0, L_6, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// GameCenterButtons
#include "AssemblyU2DCSharp_GameCenterButtons.h"
#ifndef _MSC_VER
#else
#endif
// GameCenterButtons
#include "AssemblyU2DCSharp_GameCenterButtonsMethodDeclarations.h"

// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"
// UnityEngine.UI.Button/ButtonClickedEvent
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClickedEvent.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelper.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_ButtonMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelperMethodDeclarations.h"


// System.Void GameCenterButtons::.ctor()
extern "C" void GameCenterButtons__ctor_m2945 (GameCenterButtons_t552 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::Start()
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterButtons_t552_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t551_il2cpp_TypeInfo_var;
extern const MethodInfo* GameCenterButtons_U3CStartU3Em__4A_m2947_MethodInfo_var;
extern const MethodInfo* GameCenterButtons_U3CStartU3Em__4B_m2948_MethodInfo_var;
extern const MethodInfo* GameCenterButtons_U3CStartU3Em__4C_m2949_MethodInfo_var;
extern "C" void GameCenterButtons_Start_m2946 (GameCenterButtons_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		GameCenterButtons_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		UnityAction_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		GameCenterButtons_U3CStartU3Em__4A_m2947_MethodInfo_var = il2cpp_codegen_method_info_from_index(500);
		GameCenterButtons_U3CStartU3Em__4B_m2948_MethodInfo_var = il2cpp_codegen_method_info_from_index(501);
		GameCenterButtons_U3CStartU3Em__4C_m2949_MethodInfo_var = il2cpp_codegen_method_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	ButtonClickedEvent_t794 * G_B4_0 = {0};
	ButtonClickedEvent_t794 * G_B3_0 = {0};
	ButtonClickedEvent_t794 * G_B6_0 = {0};
	ButtonClickedEvent_t794 * G_B5_0 = {0};
	ButtonClickedEvent_t794 * G_B8_0 = {0};
	ButtonClickedEvent_t794 * G_B7_0 = {0};
	{
		SocialHelper_t648 * L_0 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		bool L_1 = SocialHelper_IsEnabled_m3489(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m3971(L_2, 0, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		GameObject_t352 * L_3 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3971(L_3, 1, /*hidden argument*/NULL);
		Button_t499 * L_4 = (__this->___leaderBoardButton_2);
		NullCheck(L_4);
		ButtonClickedEvent_t794 * L_5 = Button_get_onClick_m4222(L_4, /*hidden argument*/NULL);
		UnityAction_t551 * L_6 = ((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_004b;
		}
	}
	{
		IntPtr_t L_7 = { (void*)GameCenterButtons_U3CStartU3Em__4A_m2947_MethodInfo_var };
		UnityAction_t551 * L_8 = (UnityAction_t551 *)il2cpp_codegen_object_new (UnityAction_t551_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4223(L_8, NULL, L_7, /*hidden argument*/NULL);
		((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_8;
		G_B4_0 = G_B3_0;
	}

IL_004b:
	{
		UnityAction_t551 * L_9 = ((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		NullCheck(G_B4_0);
		UnityEvent_AddListener_m4224(G_B4_0, L_9, /*hidden argument*/NULL);
		Button_t499 * L_10 = (__this->___achievementButton_3);
		NullCheck(L_10);
		ButtonClickedEvent_t794 * L_11 = Button_get_onClick_m4222(L_10, /*hidden argument*/NULL);
		UnityAction_t551 * L_12 = ((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B5_0 = L_11;
		if (L_12)
		{
			G_B6_0 = L_11;
			goto IL_0078;
		}
	}
	{
		IntPtr_t L_13 = { (void*)GameCenterButtons_U3CStartU3Em__4B_m2948_MethodInfo_var };
		UnityAction_t551 * L_14 = (UnityAction_t551 *)il2cpp_codegen_object_new (UnityAction_t551_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4223(L_14, NULL, L_13, /*hidden argument*/NULL);
		((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_14;
		G_B6_0 = G_B5_0;
	}

IL_0078:
	{
		UnityAction_t551 * L_15 = ((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B6_0);
		UnityEvent_AddListener_m4224(G_B6_0, L_15, /*hidden argument*/NULL);
		Button_t499 * L_16 = (__this->___rateMeButton_4);
		NullCheck(L_16);
		ButtonClickedEvent_t794 * L_17 = Button_get_onClick_m4222(L_16, /*hidden argument*/NULL);
		UnityAction_t551 * L_18 = ((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7;
		G_B7_0 = L_17;
		if (L_18)
		{
			G_B8_0 = L_17;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_19 = { (void*)GameCenterButtons_U3CStartU3Em__4C_m2949_MethodInfo_var };
		UnityAction_t551 * L_20 = (UnityAction_t551 *)il2cpp_codegen_object_new (UnityAction_t551_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4223(L_20, NULL, L_19, /*hidden argument*/NULL);
		((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7 = L_20;
		G_B8_0 = G_B7_0;
	}

IL_00a5:
	{
		UnityAction_t551 * L_21 = ((GameCenterButtons_t552_StaticFields*)GameCenterButtons_t552_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7;
		NullCheck(G_B8_0);
		UnityEvent_AddListener_m4224(G_B8_0, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::<Start>m__4A()
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_U3CStartU3Em__4A_m2947 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t648 * L_0 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowLeaderBoard_m3490(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::<Start>m__4B()
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_U3CStartU3Em__4B_m2948 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t648 * L_0 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowAchievements_m3491(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::<Start>m__4C()
extern TypeInfo* RatingsHelper_t630_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_U3CStartU3Em__4C_m2949 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t630 * L_0 = ((RatingsHelper_t630_StaticFields*)RatingsHelper_t630_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m3397(L_0, /*hidden argument*/NULL);
		return;
	}
}
// GameController
#include "AssemblyU2DCSharp_GameController.h"
#ifndef _MSC_VER
#else
#endif
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"

// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromData.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHan.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// EnumAccumulator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
#include "Assembly-CSharp_ArrayTypes.h"
// MouseSinkController
#include "AssemblyU2DCSharp_MouseSinkController.h"
// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_20.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHanMethodDeclarations.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
// MouseSinkController
#include "AssemblyU2DCSharp_MouseSinkControllerMethodDeclarations.h"
// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromDataMethodDeclarations.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
struct GameObject_t352;
struct MouseSpawnFromData_t554;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
// !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
#define GameObject_GetComponent_TisMouseSpawnFromData_t554_m4225(__this, method) (( MouseSpawnFromData_t554 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m2950 (GameController_t555 * __this, const MethodInfo* method)
{
	{
		__this->___startWait_2 = (1.5f);
		__this->___minSpawnWait_3 = (0.25f);
		__this->___maxSpawnWait_4 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameController GameController::get_instance()
extern TypeInfo* GameController_t555_il2cpp_TypeInfo_var;
extern "C" GameController_t555 * GameController_get_instance_m2951 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t555 * L_0 = ((GameController_t555_StaticFields*)GameController_t555_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void GameController::set_instance(GameController)
extern TypeInfo* GameController_t555_il2cpp_TypeInfo_var;
extern "C" void GameController_set_instance_m2952 (Object_t * __this /* static, unused */, GameController_t555 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t555 * L_0 = ___value;
		((GameController_t555_StaticFields*)GameController_t555_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void GameController::Awake()
extern const MethodInfo* GameObject_GetComponent_TisMouseSpawnFromData_t554_m4225_MethodInfo_var;
extern "C" void GameController_Awake_m2953 (GameController_t555 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisMouseSpawnFromData_t554_m4225_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484151);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_set_instance_m2952(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___checkForPhaseChanges_9 = 0;
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MouseSpawnFromData_t554 * L_1 = GameObject_GetComponent_TisMouseSpawnFromData_t554_m4225(L_0, /*hidden argument*/GameObject_GetComponent_TisMouseSpawnFromData_t554_m4225_MethodInfo_var);
		__this->___mouseSpawnFromData_7 = L_1;
		return;
	}
}
// System.Void GameController::Start()
extern TypeInfo* SocialHelper_t648_il2cpp_TypeInfo_var;
extern TypeInfo* GameController_t555_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_U3CStartU3Em__4D_m2969_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3878_MethodInfo_var;
extern "C" void GameController_Start_m2954 (GameController_t555 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		GameController_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		GameController_U3CStartU3Em__4D_m2969_MethodInfo_var = il2cpp_codegen_method_info_from_index(504);
		Action_1__ctor_m3878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t648 * G_B2_0 = {0};
	SocialHelper_t648 * G_B1_0 = {0};
	{
		GameController_RegisterForEvents_m2957(__this, /*hidden argument*/NULL);
		GameController_RestartGame_m2959(__this, /*hidden argument*/NULL);
		SocialHelper_t648 * L_0 = ((SocialHelper_t648_StaticFields*)SocialHelper_t648_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		Action_1_t277 * L_1 = ((GameController_t555_StaticFields*)GameController_t555_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
	}
	{
		IntPtr_t L_2 = { (void*)GameController_U3CStartU3Em__4D_m2969_MethodInfo_var };
		Action_1_t277 * L_3 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3878(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m3878_MethodInfo_var);
		((GameController_t555_StaticFields*)GameController_t555_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		Action_1_t277 * L_4 = ((GameController_t555_StaticFields*)GameController_t555_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		NullCheck(G_B2_0);
		SocialHelper_Authenticate_m3484(G_B2_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Update()
extern "C" void GameController_Update_m2955 (GameController_t555 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___checkForPhaseChanges_9);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		__this->___checkForPhaseChanges_9 = 0;
		bool L_1 = GameController_CheckForGameEnd_m2965(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		bool L_2 = GameController_CheckForLevelEnd_m2967(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		return;
	}
}
// System.Void GameController::OnDestroy()
extern "C" void GameController_OnDestroy_m2956 (GameController_t555 * __this, const MethodInfo* method)
{
	{
		GameController_UnregisterForEvents_m2958(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t528_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m2961_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m2960_MethodInfo_var;
extern const MethodInfo* GameController_OnMouseKilled_m2968_MethodInfo_var;
extern "C" void GameController_RegisterForEvents_m2957 (GameController_t555 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		GameController_OnGamePhaseChanged_m2961_MethodInfo_var = il2cpp_codegen_method_info_from_index(505);
		GameController_OnGameInstanceChanged_m2960_MethodInfo_var = il2cpp_codegen_method_info_from_index(506);
		GameController_OnMouseKilled_m2968_MethodInfo_var = il2cpp_codegen_method_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_8);
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
		__this->___registeredForEvents_8 = 1;
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m2961_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t561 * L_4 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m2960_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_6 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GameInstanceChanged_m2999(L_4, L_6, /*hidden argument*/NULL);
		DeadMouseRelay_t529 * L_7 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)GameController_OnMouseKilled_m2968_MethodInfo_var };
		MouseKillEventHandler_t528 * L_9 = (MouseKillEventHandler_t528 *)il2cpp_codegen_object_new (MouseKillEventHandler_t528_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2847(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		DeadMouseRelay_add_MouseKill_m2854(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t528_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m2961_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m2960_MethodInfo_var;
extern const MethodInfo* GameController_OnMouseKilled_m2968_MethodInfo_var;
extern "C" void GameController_UnregisterForEvents_m2958 (GameController_t555 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		GameController_OnGamePhaseChanged_m2961_MethodInfo_var = il2cpp_codegen_method_info_from_index(505);
		GameController_OnGameInstanceChanged_m2960_MethodInfo_var = il2cpp_codegen_method_info_from_index(506);
		GameController_OnMouseKilled_m2968_MethodInfo_var = il2cpp_codegen_method_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_8);
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m2961_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t561 * L_4 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m2960_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_6 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GameInstanceChanged_m3000(L_4, L_6, /*hidden argument*/NULL);
		DeadMouseRelay_t529 * L_7 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)GameController_OnMouseKilled_m2968_MethodInfo_var };
		MouseKillEventHandler_t528 * L_9 = (MouseKillEventHandler_t528 *)il2cpp_codegen_object_new (MouseKillEventHandler_t528_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2847(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		DeadMouseRelay_remove_MouseKill_m2855(L_7, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m2959 (GameController_t555 * __this, const MethodInfo* method)
{
	{
		GameLevelState_t557 * L_0 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_SetGameLevel_m2983(L_0, 1, /*hidden argument*/NULL);
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_RestartGame_m3017(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m2960 (GameController_t555 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m2961 (GameController_t555 * __this, const MethodInfo* method)
{
	CrossSceneState_t524 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 0)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 1)
		{
			goto IL_0036;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 2)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0062;
	}

IL_0024:
	{
		CrossSceneState_t524 * L_3 = CrossSceneState_get_instance_m2835(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		CrossSceneState_t524 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___didWelcome_2 = 1;
		goto IL_0062;
	}

IL_0036:
	{
		GameController_EnqueueMiceForLevel_m2963(__this, /*hidden argument*/NULL);
		GameController_UpdateMouseSinkTrapCount_m2962(__this, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0047:
	{
		GameLevelState_t557 * L_5 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t557 * L_6 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = GameLevelState_get_gameLevel_m2977(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameLevelState_SetGameLevel_m2983(L_5, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0062:
	{
		return;
	}
}
// System.Void GameController::UpdateMouseSinkTrapCount()
extern "C" void GameController_UpdateMouseSinkTrapCount_m2962 (GameController_t555 * __this, const MethodInfo* method)
{
	LevelDescription_t582 * V_0 = {0};
	EnumAccumulator_1_t577 * V_1 = {0};
	int32_t V_2 = 0;
	{
		LevelConfig_t588 * L_0 = LevelConfig_get_instance_m3094(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t557 * L_1 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m2977(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t582 * L_3 = LevelConfig_GetLevelDescription_m3104(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t582 * L_4 = V_0;
		NullCheck(L_4);
		EnumAccumulator_1_t577 * L_5 = (L_4->___mouseHolesAccumulator_5);
		V_1 = L_5;
		V_2 = 0;
		goto IL_003c;
	}

IL_0023:
	{
		MouseSinkControllerU5BU5D_t553* L_6 = (__this->___mouseSinkControllers_5);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		EnumAccumulator_1_t577 * L_9 = V_1;
		NullCheck(L_9);
		Int32U5BU5D_t484* L_10 = (L_9->___derivedCount_1);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(MouseSinkController_t601 **)(MouseSinkController_t601 **)SZArrayLdElema(L_6, L_8)));
		MouseSinkController_SetTrapCapacity_m3195((*(MouseSinkController_t601 **)(MouseSinkController_t601 **)SZArrayLdElema(L_6, L_8)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		EnumAccumulator_1_t577 * L_15 = V_1;
		NullCheck(L_15);
		Int32U5BU5D_t484* L_16 = (L_15->___derivedCount_1);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m2963 (GameController_t555 * __this, const MethodInfo* method)
{
	LevelDescription_t582 * V_0 = {0};
	{
		MouseSpawnFromData_t554 * L_0 = (__this->___mouseSpawnFromData_7);
		NullCheck(L_0);
		MouseSpawnFromData_Clear_m3215(L_0, /*hidden argument*/NULL);
		LevelConfig_t588 * L_1 = LevelConfig_get_instance_m3094(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t557 * L_2 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m2977(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		LevelDescription_t582 * L_4 = LevelConfig_GetLevelDescription_m3104(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		MouseSpawnFromData_t554 * L_5 = (__this->___mouseSpawnFromData_7);
		LevelDescription_t582 * L_6 = V_0;
		NullCheck(L_6);
		List_1_t576 * L_7 = (L_6->___explicitMouseDescs_1);
		NullCheck(L_5);
		MouseSpawnFromData_AddMice_m3216(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m2964 (GameController_t555 * __this, MouseMove_t527 * ___mouse, const MethodInfo* method)
{
	{
		__this->___checkForPhaseChanges_9 = 1;
		return;
	}
}
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m2965 (GameController_t555 * __this, const MethodInfo* method)
{
	MouseSinkController_t601 * V_0 = {0};
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		MouseSinkController_t601 * L_2 = GameController_FindDoomedExit_m2966(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		MouseSinkController_t601 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_3, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		GamePhaseState_t561 * L_5 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GamePhaseState_TransitionWithPause_m3019(L_5, 4, /*hidden argument*/NULL);
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// MouseSinkController GameController::FindDoomedExit()
extern "C" MouseSinkController_t601 * GameController_FindDoomedExit_m2966 (GameController_t555 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	MouseSinkController_t601 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0007:
	{
		MouseSinkControllerU5BU5D_t553* L_0 = (__this->___mouseSinkControllers_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(MouseSinkController_t601 **)(MouseSinkController_t601 **)SZArrayLdElema(L_0, L_2));
		MouseSinkController_t601 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = MouseSinkController_get_savedMouseCount_m3179(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		MouseSinkController_t601 * L_5 = V_1;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		MouseSinkControllerU5BU5D_t553* L_8 = (__this->___mouseSinkControllers_5);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return (MouseSinkController_t601 *)NULL;
	}
}
// System.Boolean GameController::CheckForLevelEnd()
extern TypeInfo* MouseMove_t527_il2cpp_TypeInfo_var;
extern "C" bool GameController_CheckForLevelEnd_m2967 (GameController_t555 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		MouseSpawnFromData_t554 * L_2 = (__this->___mouseSpawnFromData_7);
		NullCheck(L_2);
		bool L_3 = MouseSpawnFromData_FinishedWithCurrentSet_m3214(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t527_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t527_StaticFields*)MouseMove_t527_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		GamePhaseState_t561 * L_5 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GamePhaseState_TransitionWithPause_m3019(L_5, 3, /*hidden argument*/NULL);
		return 1;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m2968 (GameController_t555 * __this, MouseMove_t527 * ___mouse, const MethodInfo* method)
{
	{
		__this->___checkForPhaseChanges_9 = 1;
		return;
	}
}
// System.Void GameController::<Start>m__4D(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern TypeInfo* IUserProfile_t795_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t796_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameController_U3CStartU3Em__4D_m2969 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		IUserProfile_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		ILocalUser_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		bool L_0 = ___success;
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1049, /*hidden argument*/NULL);
		ObjectU5BU5D_t683* L_1 = ((ObjectU5BU5D_t683*)SZArrayNew(ObjectU5BU5D_t683_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral1050);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral1050;
		ObjectU5BU5D_t683* L_2 = L_1;
		Object_t * L_3 = Social_get_localUser_m4226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_userName() */, IUserProfile_t795_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t683* L_5 = L_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1051);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral1051;
		ObjectU5BU5D_t683* L_6 = L_5;
		Object_t * L_7 = Social_get_localUser_m4226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_t795_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_8;
		ObjectU5BU5D_t683* L_9 = L_6;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1052);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 4)) = (Object_t *)(String_t*) &_stringLiteral1052;
		ObjectU5BU5D_t683* L_10 = L_9;
		Object_t * L_11 = Social_get_localUser_m4226(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_underage() */, ILocalUser_t796_il2cpp_TypeInfo_var, L_11);
		bool L_13 = L_12;
		Object_t * L_14 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3889(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = V_0;
		Debug_Log_m382(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_006b:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1053, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandle.h"
#ifndef _MSC_VER
#else
#endif
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandleMethodDeclarations.h"



// System.Void GameLevelState/GameLevelChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameLevelChangedEventHandler__ctor_m2970 (GameLevelChangedEventHandler_t556 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GameLevelState/GameLevelChangedEventHandler::Invoke()
extern "C" void GameLevelChangedEventHandler_Invoke_m2971 (GameLevelChangedEventHandler_t556 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameLevelChangedEventHandler_Invoke_m2971((GameLevelChangedEventHandler_t556 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameLevelChangedEventHandler_t556(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GameLevelState/GameLevelChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameLevelChangedEventHandler_BeginInvoke_m2972 (GameLevelChangedEventHandler_t556 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GameLevelState/GameLevelChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameLevelChangedEventHandler_EndInvoke_m2973 (GameLevelChangedEventHandler_t556 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m2974 (GameLevelState_t557 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_add_GameLevelChanged_m2975 (GameLevelState_t557 * __this, GameLevelChangedEventHandler_t556 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t556 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t556 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t556 *)Castclass(L_2, GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_remove_GameLevelChanged_m2976 (GameLevelState_t557 * __this, GameLevelChangedEventHandler_t556 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t556 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t556 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t556 *)Castclass(L_2, GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m2977 (GameLevelState_t557 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameLevelU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m2978 (GameLevelState_t557 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameLevelU3Ek__BackingField_3 = L_0;
		return;
	}
}
// GameLevelState GameLevelState::get_instance()
extern TypeInfo* GameLevelState_t557_il2cpp_TypeInfo_var;
extern "C" GameLevelState_t557 * GameLevelState_get_instance_m2979 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t557 * L_0 = ((GameLevelState_t557_StaticFields*)GameLevelState_t557_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameLevelState::set_instance(GameLevelState)
extern TypeInfo* GameLevelState_t557_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_set_instance_m2980 (Object_t * __this /* static, unused */, GameLevelState_t557 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(511);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t557 * L_0 = ___value;
		((GameLevelState_t557_StaticFields*)GameLevelState_t557_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m2981 (GameLevelState_t557 * __this, const MethodInfo* method)
{
	{
		GameLevelState_set_instance_m2980(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m2982 (GameLevelState_t557 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m2983 (GameLevelState_t557 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___gameLevel;
		GameLevelState_set_gameLevel_m2978(__this, L_0, /*hidden argument*/NULL);
		GameLevelChangedEventHandler_t556 * L_1 = (__this->___GameLevelChanged_2);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameLevelChangedEventHandler_t556 * L_2 = (__this->___GameLevelChanged_2);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void GameLevelState/GameLevelChangedEventHandler::Invoke() */, L_2);
	}

IL_001d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void GamePhaseState/GameInstanceChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameInstanceChangedEventHandler__ctor_m2984 (GameInstanceChangedEventHandler_t559 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke()
extern "C" void GameInstanceChangedEventHandler_Invoke_m2985 (GameInstanceChangedEventHandler_t559 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameInstanceChangedEventHandler_Invoke_m2985((GameInstanceChangedEventHandler_t559 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameInstanceChangedEventHandler_t559(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GameInstanceChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameInstanceChangedEventHandler_BeginInvoke_m2986 (GameInstanceChangedEventHandler_t559 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameInstanceChangedEventHandler_EndInvoke_m2987 (GameInstanceChangedEventHandler_t559 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GamePhaseState/GamePhaseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GamePhaseChangedEventHandler__ctor_m2988 (GamePhaseChangedEventHandler_t560 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke()
extern "C" void GamePhaseChangedEventHandler_Invoke_m2989 (GamePhaseChangedEventHandler_t560 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GamePhaseChangedEventHandler_Invoke_m2989((GamePhaseChangedEventHandler_t560 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GamePhaseChangedEventHandler_t560(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GamePhaseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GamePhaseChangedEventHandler_BeginInvoke_m2990 (GamePhaseChangedEventHandler_t560 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GamePhaseChangedEventHandler_EndInvoke_m2991 (GamePhaseChangedEventHandler_t560 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// GamePhaseState/<SetupPendingPhase>c__Iterator14
#include "AssemblyU2DCSharp_GamePhaseState_U3CSetupPendingPhaseU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// GamePhaseState/<SetupPendingPhase>c__Iterator14
#include "AssemblyU2DCSharp_GamePhaseState_U3CSetupPendingPhaseU3Ec__IMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator14::.ctor()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator14__ctor_m2992 (U3CSetupPendingPhaseU3Ec__Iterator14_t562 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator14::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator14_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2993 (U3CSetupPendingPhaseU3Ec__Iterator14_t562 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator14::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator14_System_Collections_IEnumerator_get_Current_m2994 (U3CSetupPendingPhaseU3Ec__Iterator14_t562 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GamePhaseState/<SetupPendingPhase>c__Iterator14::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CSetupPendingPhaseU3Ec__Iterator14_MoveNext_m2995 (U3CSetupPendingPhaseU3Ec__Iterator14_t562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
			goto IL_0053;
		}
	}
	{
		goto IL_0077;
	}

IL_0021:
	{
		GamePhaseState_t561 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___pendingPhaseTimeout_3 = ((float)((float)L_3+(float)(2.2f)));
		WaitForSeconds_t786 * L_4 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_4, (2.2f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0079;
	}

IL_0053:
	{
		GamePhaseState_t561 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		int32_t L_6 = GamePhaseState_get_gamePhase_m3003(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_0070;
		}
	}
	{
		GamePhaseState_t561 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		L_7->___shouldCheckForPhaseTransition_4 = 1;
	}

IL_0070:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0077:
	{
		return 0;
	}

IL_0079:
	{
		return 1;
	}
	// Dead block : IL_007b: ldloc.1
}
// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator14::Dispose()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator14_Dispose_m2996 (U3CSetupPendingPhaseU3Ec__Iterator14_t562 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator14::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator14_Reset_m2997 (U3CSetupPendingPhaseU3Ec__Iterator14_t562 * __this, const MethodInfo* method)
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

// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"


// System.Void GamePhaseState::.ctor()
extern "C" void GamePhaseState__ctor_m2998 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GameInstanceChanged_m2999 (GamePhaseState_t561 * __this, GameInstanceChangedEventHandler_t559 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t559 * L_0 = (__this->___GameInstanceChanged_6);
		GameInstanceChangedEventHandler_t559 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_6 = ((GameInstanceChangedEventHandler_t559 *)Castclass(L_2, GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GameInstanceChanged_m3000 (GamePhaseState_t561 * __this, GameInstanceChangedEventHandler_t559 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t559 * L_0 = (__this->___GameInstanceChanged_6);
		GameInstanceChangedEventHandler_t559 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_6 = ((GameInstanceChangedEventHandler_t559 *)Castclass(L_2, GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GamePhaseChanged_m3001 (GamePhaseState_t561 * __this, GamePhaseChangedEventHandler_t560 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t560 * L_0 = (__this->___GamePhaseChanged_7);
		GamePhaseChangedEventHandler_t560 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_7 = ((GamePhaseChangedEventHandler_t560 *)Castclass(L_2, GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GamePhaseChanged_m3002 (GamePhaseState_t561 * __this, GamePhaseChangedEventHandler_t560 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t560 * L_0 = (__this->___GamePhaseChanged_7);
		GamePhaseChangedEventHandler_t560 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_7 = ((GamePhaseChangedEventHandler_t560 *)Castclass(L_2, GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var));
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m3003 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgamePhaseU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m3004 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgamePhaseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_previousGamePhase()
extern "C" int32_t GamePhaseState_get_previousGamePhase_m3005 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpreviousGamePhaseU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void GamePhaseState::set_previousGamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_previousGamePhase_m3006 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpreviousGamePhaseU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 GamePhaseState::get_instancesFinishedThisSession()
extern "C" int32_t GamePhaseState_get_instancesFinishedThisSession_m3007 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CinstancesFinishedThisSessionU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void GamePhaseState::set_instancesFinishedThisSession(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedThisSession_m3008 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CinstancesFinishedThisSessionU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int32 GamePhaseState::get_instancesFinishedEver()
extern "C" int32_t GamePhaseState_get_instancesFinishedEver_m3009 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CinstancesFinishedEverU3Ek__BackingField_11);
		return L_0;
	}
}
// System.Void GamePhaseState::set_instancesFinishedEver(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedEver_m3010 (GamePhaseState_t561 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CinstancesFinishedEverU3Ek__BackingField_11 = L_0;
		return;
	}
}
// GamePhaseState GamePhaseState::get_instance()
extern TypeInfo* GamePhaseState_t561_il2cpp_TypeInfo_var;
extern "C" GamePhaseState_t561 * GamePhaseState_get_instance_m3011 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t561 * L_0 = ((GamePhaseState_t561_StaticFields*)GamePhaseState_t561_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern TypeInfo* GamePhaseState_t561_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_set_instance_m3012 (Object_t * __this /* static, unused */, GamePhaseState_t561 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t561 * L_0 = ___value;
		((GamePhaseState_t561_StaticFields*)GamePhaseState_t561_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m3013 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_instance_m3012(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GamePhaseState_set_gamePhase_m3004(__this, 0, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3006(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::Start()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_Start_m3014 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3307(L_0, (String_t*) &_stringLiteral1054, 0, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedEver_m3010(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m3015 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___shouldCheckForPhaseTransition_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GamePhaseState_CheckForPhaseTransition_m3020(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m3016 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3003(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m3017 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_gamePhase_m3004(__this, 0, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3006(__this, 0, /*hidden argument*/NULL);
		GameInstanceChangedEventHandler_t559 * L_0 = (__this->___GameInstanceChanged_6);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		GameInstanceChangedEventHandler_t559 * L_1 = (__this->___GameInstanceChanged_6);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke() */, L_1);
	}

IL_0024:
	{
		CrossSceneState_t524 * L_2 = CrossSceneState_get_instance_m2835(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (L_2->___didWelcome_2);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		GamePhaseState_TransitionToPhase_m3022(__this, 2, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_003f:
	{
		GamePhaseState_TransitionToPhase_m3022(__this, 1, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern TypeInfo* U3CSetupPendingPhaseU3Ec__Iterator14_t562_il2cpp_TypeInfo_var;
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m3018 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSetupPendingPhaseU3Ec__Iterator14_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	U3CSetupPendingPhaseU3Ec__Iterator14_t562 * V_0 = {0};
	{
		U3CSetupPendingPhaseU3Ec__Iterator14_t562 * L_0 = (U3CSetupPendingPhaseU3Ec__Iterator14_t562 *)il2cpp_codegen_object_new (U3CSetupPendingPhaseU3Ec__Iterator14_t562_il2cpp_TypeInfo_var);
		U3CSetupPendingPhaseU3Ec__Iterator14__ctor_m2992(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetupPendingPhaseU3Ec__Iterator14_t562 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CSetupPendingPhaseU3Ec__Iterator14_t562 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m3019 (GamePhaseState_t561 * __this, int32_t ___phase, const MethodInfo* method)
{
	{
		int32_t L_0 = ___phase;
		__this->___pendingPhase_2 = L_0;
		GamePhaseState_TransitionToPhase_m3022(__this, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m3020 (GamePhaseState_t561 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3003(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = (__this->___pendingPhaseTimeout_3);
		float L_2 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) <= ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = (__this->___pendingPhase_2);
		GamePhaseState_TransitionToPhase_m3022(__this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		__this->___shouldCheckForPhaseTransition_4 = 0;
		return;
	}
}
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m3021 (GamePhaseState_t561 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = ___oldPhase;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0034;
		}
		if (L_1 == 2)
		{
			goto IL_0039;
		}
		if (L_1 == 3)
		{
			goto IL_004d;
		}
		if (L_1 == 4)
		{
			goto IL_0052;
		}
		if (L_1 == 5)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0052;
	}

IL_0025:
	{
		int32_t L_2 = ___newPhase;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = ___newPhase;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B5_0 = 1;
	}

IL_0033:
	{
		return G_B5_0;
	}

IL_0034:
	{
		int32_t L_4 = ___newPhase;
		return ((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
	}

IL_0039:
	{
		int32_t L_5 = ___newPhase;
		return ((((int32_t)L_5) == ((int32_t)5))? 1 : 0);
	}

IL_003e:
	{
		int32_t L_6 = ___newPhase;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_7 = ___newPhase;
		G_B11_0 = ((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B11_0 = 1;
	}

IL_004c:
	{
		return G_B11_0;
	}

IL_004d:
	{
		int32_t L_8 = ___newPhase;
		return ((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
	}

IL_0052:
	{
		return 0;
	}
}
// System.Void GamePhaseState::TransitionToPhase(GamePhaseState/GamePhaseType)
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_TransitionToPhase_m3022 (GamePhaseState_t561 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3003(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___newPhase;
		bool L_2 = GamePhaseState_IsLegalTransition_m3021(__this, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = GamePhaseState_get_gamePhase_m3003(__this, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3006(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___newPhase;
		GamePhaseState_set_gamePhase_m3004(__this, L_4, /*hidden argument*/NULL);
		GamePhaseState_t561 * L_5 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = GamePhaseState_get_gamePhase_m3003(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_7 = GamePhaseState_get_instancesFinishedThisSession_m3007(__this, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedThisSession_m3008(__this, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_8 = GamePhaseState_get_instancesFinishedEver_m3009(__this, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedEver_m3010(__this, ((int32_t)((int32_t)L_8+(int32_t)1)), /*hidden argument*/NULL);
		PersistentStorage_t619 * L_9 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_10 = GamePhaseState_get_instancesFinishedEver_m3009(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		PersistentStorage_SetIntValue_m3306(L_9, (String_t*) &_stringLiteral1054, L_10, /*hidden argument*/NULL);
	}

IL_0067:
	{
		int32_t L_11 = ___newPhase;
		if ((!(((uint32_t)L_11) == ((uint32_t)5))))
		{
			goto IL_007b;
		}
	}
	{
		Object_t * L_12 = GamePhaseState_SetupPendingPhase_m3018(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3734(__this, L_12, /*hidden argument*/NULL);
	}

IL_007b:
	{
		GamePhaseChangedEventHandler_t560 * L_13 = (__this->___GamePhaseChanged_7);
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		GamePhaseChangedEventHandler_t560 * L_14 = (__this->___GamePhaseChanged_7);
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(11 /* System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke() */, L_14);
	}

IL_0091:
	{
		return;
	}
}
// GameUI
#include "AssemblyU2DCSharp_GameUI.h"
#ifndef _MSC_VER
#else
#endif



// System.Void GameUI::.ctor()
extern "C" void GameUI__ctor_m3023 (GameUI_t541 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::SetUIActive(System.Boolean)
extern "C" void GameUI_SetUIActive_m3024 (GameUI_t541 * __this, bool ___uiActive, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		bool L_1 = ___uiActive;
		NullCheck(L_0);
		GameObject_SetActive_m3971(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::ConfirmLayoutComplete()
extern "C" void GameUI_ConfirmLayoutComplete_m3025 (GameUI_t541 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// GameUIController/GameUIsType
#include "AssemblyU2DCSharp_GameUIController_GameUIsType.h"
#ifndef _MSC_VER
#else
#endif
// GameUIController/GameUIsType
#include "AssemblyU2DCSharp_GameUIController_GameUIsTypeMethodDeclarations.h"



// GameUIController/<ConfirmComplete>c__Iterator15
#include "AssemblyU2DCSharp_GameUIController_U3CConfirmCompleteU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// GameUIController/<ConfirmComplete>c__Iterator15
#include "AssemblyU2DCSharp_GameUIController_U3CConfirmCompleteU3Ec__IMethodDeclarations.h"

// GameUIController
#include "AssemblyU2DCSharp_GameUIController.h"


// System.Void GameUIController/<ConfirmComplete>c__Iterator15::.ctor()
extern "C" void U3CConfirmCompleteU3Ec__Iterator15__ctor_m3026 (U3CConfirmCompleteU3Ec__Iterator15_t566 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3027 (U3CConfirmCompleteU3Ec__Iterator15_t566 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m3028 (U3CConfirmCompleteU3Ec__Iterator15_t566 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean GameUIController/<ConfirmComplete>c__Iterator15::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CConfirmCompleteU3Ec__Iterator15_MoveNext_m3029 (U3CConfirmCompleteU3Ec__Iterator15_t566 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		goto IL_008d;
	}

IL_0021:
	{
		WaitForSeconds_t786 * L_2 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_2, (0.0f), /*hidden argument*/NULL);
		__this->___U24current_2 = L_2;
		__this->___U24PC_1 = 1;
		goto IL_008f;
	}

IL_003d:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_006e;
	}

IL_0049:
	{
		GameUIController_t565 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		GameUIU5BU5D_t563* L_4 = (L_3->___gameUIs_5);
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(GameUI_t541 **)(GameUI_t541 **)SZArrayLdElema(L_4, L_6)));
		VirtActionInvoker0::Invoke(5 /* System.Void GameUI::ConfirmLayoutComplete() */, (*(GameUI_t541 **)(GameUI_t541 **)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_8 = (__this->___U3CiU3E__0_0);
		GameUIController_t565 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		GameUIU5BU5D_t563* L_10 = (L_9->___gameUIs_5);
		NullCheck(L_10);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		__this->___U24PC_1 = (-1);
	}

IL_008d:
	{
		return 0;
	}

IL_008f:
	{
		return 1;
	}
	// Dead block : IL_0091: ldloc.1
}
// System.Void GameUIController/<ConfirmComplete>c__Iterator15::Dispose()
extern "C" void U3CConfirmCompleteU3Ec__Iterator15_Dispose_m3030 (U3CConfirmCompleteU3Ec__Iterator15_t566 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void GameUIController/<ConfirmComplete>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CConfirmCompleteU3Ec__Iterator15_Reset_m3031 (U3CConfirmCompleteU3Ec__Iterator15_t566 * __this, const MethodInfo* method)
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
// GameUIController
#include "AssemblyU2DCSharp_GameUIControllerMethodDeclarations.h"

struct GameObject_t352;
struct GameUI_t541;
// Declaration !!0 UnityEngine.GameObject::GetComponent<GameUI>()
// !!0 UnityEngine.GameObject::GetComponent<GameUI>()
#define GameObject_GetComponent_TisGameUI_t541_m4227(__this, method) (( GameUI_t541 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void GameUIController::.ctor()
extern "C" void GameUIController__ctor_m3032 (GameUIController_t565 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameUIController GameUIController::get_instance()
extern TypeInfo* GameUIController_t565_il2cpp_TypeInfo_var;
extern "C" GameUIController_t565 * GameUIController_get_instance_m3033 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t565 * L_0 = ((GameUIController_t565_StaticFields*)GameUIController_t565_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void GameUIController::set_instance(GameUIController)
extern TypeInfo* GameUIController_t565_il2cpp_TypeInfo_var;
extern "C" void GameUIController_set_instance_m3034 (Object_t * __this /* static, unused */, GameUIController_t565 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t565 * L_0 = ___value;
		((GameUIController_t565_StaticFields*)GameUIController_t565_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void GameUIController::Awake()
extern TypeInfo* GameUIU5BU5D_t563_il2cpp_TypeInfo_var;
extern "C" void GameUIController_Awake_m3035 (GameUIController_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIU5BU5D_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_set_instance_m3034(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___gameUIs_5 = ((GameUIU5BU5D_t563*)SZArrayNew(GameUIU5BU5D_t563_il2cpp_TypeInfo_var, 3));
		return;
	}
}
// System.Void GameUIController::Start()
extern const MethodInfo* GameObject_GetComponent_TisGameUI_t541_m4227_MethodInfo_var;
extern "C" void GameUIController_Start_m3036 (GameUIController_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisGameUI_t541_m4227_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484156);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_0);
		GameObject_SetActive_m3971(L_0, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_1 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_1);
		GameObject_SetActive_m3971(L_1, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = (__this->___gameOverUIGameObject_4);
		NullCheck(L_2);
		GameObject_SetActive_m3971(L_2, 0, /*hidden argument*/NULL);
		GameUIU5BU5D_t563* L_3 = (__this->___gameUIs_5);
		GameObject_t352 * L_4 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_4);
		GameUI_t541 * L_5 = GameObject_GetComponent_TisGameUI_t541_m4227(L_4, /*hidden argument*/GameObject_GetComponent_TisGameUI_t541_m4227_MethodInfo_var);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_5);
		*((GameUI_t541 **)(GameUI_t541 **)SZArrayLdElema(L_3, 0)) = (GameUI_t541 *)L_5;
		GameUIU5BU5D_t563* L_6 = (__this->___gameUIs_5);
		GameObject_t352 * L_7 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_7);
		GameUI_t541 * L_8 = GameObject_GetComponent_TisGameUI_t541_m4227(L_7, /*hidden argument*/GameObject_GetComponent_TisGameUI_t541_m4227_MethodInfo_var);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_8);
		*((GameUI_t541 **)(GameUI_t541 **)SZArrayLdElema(L_6, 1)) = (GameUI_t541 *)L_8;
		GameUIU5BU5D_t563* L_9 = (__this->___gameUIs_5);
		GameObject_t352 * L_10 = (__this->___gameOverUIGameObject_4);
		NullCheck(L_10);
		GameUI_t541 * L_11 = GameObject_GetComponent_TisGameUI_t541_m4227(L_10, /*hidden argument*/GameObject_GetComponent_TisGameUI_t541_m4227_MethodInfo_var);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
		ArrayElementTypeCheck (L_9, L_11);
		*((GameUI_t541 **)(GameUI_t541 **)SZArrayLdElema(L_9, 2)) = (GameUI_t541 *)L_11;
		GameUIController_RegisterForEvents_m3039(__this, /*hidden argument*/NULL);
		GameUIController_OnGamePhaseChanged_m3041(__this, /*hidden argument*/NULL);
		Object_t * L_12 = GameUIController_ConfirmComplete_m3037(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3734(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GameUIController::ConfirmComplete()
extern TypeInfo* U3CConfirmCompleteU3Ec__Iterator15_t566_il2cpp_TypeInfo_var;
extern "C" Object_t * GameUIController_ConfirmComplete_m3037 (GameUIController_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CConfirmCompleteU3Ec__Iterator15_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(518);
		s_Il2CppMethodIntialized = true;
	}
	U3CConfirmCompleteU3Ec__Iterator15_t566 * V_0 = {0};
	{
		U3CConfirmCompleteU3Ec__Iterator15_t566 * L_0 = (U3CConfirmCompleteU3Ec__Iterator15_t566 *)il2cpp_codegen_object_new (U3CConfirmCompleteU3Ec__Iterator15_t566_il2cpp_TypeInfo_var);
		U3CConfirmCompleteU3Ec__Iterator15__ctor_m3026(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CConfirmCompleteU3Ec__Iterator15_t566 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CConfirmCompleteU3Ec__Iterator15_t566 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameUIController::OnDestroy()
extern "C" void GameUIController_OnDestroy_m3038 (GameUIController_t565 * __this, const MethodInfo* method)
{
	{
		GameUIController_UnregisterForEvents_m3040(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m3041_MethodInfo_var;
extern "C" void GameUIController_RegisterForEvents_m3039 (GameUIController_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameUIController_OnGamePhaseChanged_m3041_MethodInfo_var = il2cpp_codegen_method_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_6);
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
		__this->___registeredForEvents_6 = 1;
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m3041_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m3041_MethodInfo_var;
extern "C" void GameUIController_UnregisterForEvents_m3040 (GameUIController_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameUIController_OnGamePhaseChanged_m3041_MethodInfo_var = il2cpp_codegen_method_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_6);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m3041_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameUIController::OnGamePhaseChanged()
extern "C" void GameUIController_OnGamePhaseChanged_m3041 (GameUIController_t565 * __this, const MethodInfo* method)
{
	CrossSceneState_t524 * V_0 = {0};
	int32_t V_1 = {0};
	{
		bool L_0 = (__this->___registeredForEvents_6);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GamePhaseState_get_gamePhase_m3003(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0084;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_009c;
	}

IL_0038:
	{
		DebugConfig_t530 * L_4 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (L_4->___skipWelcome_3);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		GameUIController_SetActiveUI_m3042(__this, 1, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_0053:
	{
		GameUIController_SetActiveUI_m3042(__this, 0, /*hidden argument*/NULL);
	}

IL_005a:
	{
		CrossSceneState_t524 * L_6 = CrossSceneState_get_instance_m2835(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_6;
		CrossSceneState_t524 * L_7 = V_0;
		NullCheck(L_7);
		L_7->___didWelcome_2 = 1;
		goto IL_009c;
	}

IL_006c:
	{
		GameUIController_SetActiveUI_m3042(__this, 3, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0078:
	{
		GameUIController_SetActiveUI_m3042(__this, 3, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0084:
	{
		GameUIController_SetActiveUI_m3042(__this, 1, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0090:
	{
		GameUIController_SetActiveUI_m3042(__this, 2, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_009c:
	{
		return;
	}
}
// System.Void GameUIController::SetActiveUI(GameUIController/GameUIsType)
extern "C" void GameUIController_SetActiveUI_m3042 (GameUIController_t565 * __this, int32_t ___uiType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	GameUI_t541 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameUIU5BU5D_t563* L_0 = (__this->___gameUIs_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(GameUI_t541 **)(GameUI_t541 **)SZArrayLdElema(L_0, L_2));
		GameUI_t541 * L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = ___uiType;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void GameUI::SetUIActive(System.Boolean) */, L_3, ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16
#include "AssemblyU2DCSharp_GoogleAdController_U3CCreatePendingInterst.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16
#include "AssemblyU2DCSharp_GoogleAdController_U3CCreatePendingInterstMethodDeclarations.h"

// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdController.h"


// System.Void GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::.ctor()
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator16__ctor_m3043 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CCreatePendingInterstitialAdU3Ec__Iterator16_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3044 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreatePendingInterstitialAdU3Ec__Iterator16_System_Collections_IEnumerator_get_Current_m3045 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CCreatePendingInterstitialAdU3Ec__Iterator16_MoveNext_m3046 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
			goto IL_0043;
		}
	}
	{
		goto IL_0061;
	}

IL_0021:
	{
		GoogleAdController_t567 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___waitBeforeAd_4);
		WaitForSeconds_t786 * L_4 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0063;
	}

IL_0043:
	{
		GoogleAdController_t567 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		L_5->___pendingInterstitialAd_5 = (Object_t *)NULL;
		GoogleAdController_t567 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		GoogleAdController_TryToShowInterstitialAd_m3061(L_6, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0061:
	{
		return 0;
	}

IL_0063:
	{
		return 1;
	}
	// Dead block : IL_0065: ldloc.1
}
// System.Void GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::Dispose()
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator16_Dispose_m3047 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator16_Reset_m3048 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * __this, const MethodInfo* method)
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

// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// GoogleMobileAd
#include "AssemblyU2DCSharp_GoogleMobileAd.h"
// System.Action
#include "System_Core_System_Action.h"
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
// GoogleMobileAd
#include "AssemblyU2DCSharp_GoogleMobileAdMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"


// System.Void GoogleAdController::.ctor()
extern "C" void GoogleAdController__ctor_m3049 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	{
		__this->___instancesBetweenInterstitialAds_3 = 3;
		__this->___waitBeforeAd_4 = (2.0f);
		__this->___adsEnabled_8 = 1;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::Awake()
extern TypeInfo* GoogleAdController_t567_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsLoaded_m3053_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsOpen_m3054_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsClosed_m3055_MethodInfo_var;
extern "C" void GoogleAdController_Awake_m3050 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAdController_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		GoogleAdController_OnInterstisialsLoaded_m3053_MethodInfo_var = il2cpp_codegen_method_info_from_index(510);
		GoogleAdController_OnInterstisialsOpen_m3054_MethodInfo_var = il2cpp_codegen_method_info_from_index(511);
		GoogleAdController_OnInterstisialsClosed_m3055_MethodInfo_var = il2cpp_codegen_method_info_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GoogleAdController_t567_StaticFields*)GoogleAdController_t567_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m731(NULL /*static, unused*/, /*hidden argument*/NULL);
		GoogleMobileAd_AddKeyword_m738(NULL /*static, unused*/, (String_t*) &_stringLiteral255, /*hidden argument*/NULL);
		Object_t * L_0 = GoogleMobileAd_CreateAdBanner_m734(NULL /*static, unused*/, 7, 2, /*hidden argument*/NULL);
		__this->___banner_9 = L_0;
		Object_t * L_1 = (__this->___banner_9);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1);
		Object_t * L_2 = (__this->___banner_9);
		NullCheck(L_2);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void GoogleMobileAdBanner::set_ShowOnLoad(System.Boolean) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_2, 0);
		Action_t143 * L_3 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2;
		IntPtr_t L_4 = { (void*)GoogleAdController_OnInterstisialsLoaded_m3053_MethodInfo_var };
		Action_t143 * L_5 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3773(L_5, __this, L_4, /*hidden argument*/NULL);
		Delegate_t725 * L_6 = Delegate_Combine_m3774(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = ((Action_t143 *)Castclass(L_6, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_7 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4;
		IntPtr_t L_8 = { (void*)GoogleAdController_OnInterstisialsOpen_m3054_MethodInfo_var };
		Action_t143 * L_9 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3773(L_9, __this, L_8, /*hidden argument*/NULL);
		Delegate_t725 * L_10 = Delegate_Combine_m3774(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4 = ((Action_t143 *)Castclass(L_10, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_11 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5;
		IntPtr_t L_12 = { (void*)GoogleAdController_OnInterstisialsClosed_m3055_MethodInfo_var };
		Action_t143 * L_13 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3773(L_13, __this, L_12, /*hidden argument*/NULL);
		Delegate_t725 * L_14 = Delegate_Combine_m3774(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5 = ((Action_t143 *)Castclass(L_14, Action_t143_il2cpp_TypeInfo_var));
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::Start()
extern "C" void GoogleAdController_Start_m3051 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_RegisterForEvents_m3056(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateBanner_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnDestroy()
extern "C" void GoogleAdController_OnDestroy_m3052 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UnregisterForEvents_m3057(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsLoaded()
extern "C" void GoogleAdController_OnInterstisialsLoaded_m3053 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	{
		__this->___interstitialAdLoaded_7 = 1;
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsOpen()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsOpen_m3054 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_SuppressSounds_m3522(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsClosed()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsClosed_m3055 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___interstitialAdLoaded_7 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_UnsuppressSounds_m3523(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m3058_MethodInfo_var;
extern "C" void GoogleAdController_RegisterForEvents_m3056 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GoogleAdController_OnGamePhaseChanged_m3058_MethodInfo_var = il2cpp_codegen_method_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_6);
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
		__this->___registeredForEvents_6 = 1;
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m3058_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m3058_MethodInfo_var;
extern "C" void GoogleAdController_UnregisterForEvents_m3057 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GoogleAdController_OnGamePhaseChanged_m3058_MethodInfo_var = il2cpp_codegen_method_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_6);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m3058_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GoogleAdController::OnGamePhaseChanged()
extern "C" void GoogleAdController_OnGamePhaseChanged_m3058 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UpdateBanner_m3063(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateInterstialAd_m3059(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UpdateInterstialAd()
extern "C" void GoogleAdController_UpdateInterstialAd_m3059 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___pendingInterstitialAd_5);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___pendingInterstitialAd_5);
		MonoBehaviour_StopCoroutine_m4195(__this, L_1, /*hidden argument*/NULL);
		__this->___pendingInterstitialAd_5 = (Object_t *)NULL;
	}

IL_001e:
	{
		GamePhaseState_t561 * L_2 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3003(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_4 = GoogleAdController_CreatePendingInterstitialAd_m3060(__this, /*hidden argument*/NULL);
		__this->___pendingInterstitialAd_5 = L_4;
		Object_t * L_5 = (__this->___pendingInterstitialAd_5);
		MonoBehaviour_StartCoroutine_m3734(__this, L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Collections.IEnumerator GoogleAdController::CreatePendingInterstitialAd()
extern TypeInfo* U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleAdController_CreatePendingInterstitialAd_m3060 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * V_0 = {0};
	{
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * L_0 = (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 *)il2cpp_codegen_object_new (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568_il2cpp_TypeInfo_var);
		U3CCreatePendingInterstitialAdU3Ec__Iterator16__ctor_m3043(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t568 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GoogleAdController::TryToShowInterstitialAd()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_TryToShowInterstitialAd_m3061 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = GoogleAdController_ShouldShowInterstitialAd_m3062(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_ShowInterstitialAd_m746(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GoogleAdController::ShouldShowInterstitialAd()
extern "C" bool GoogleAdController_ShouldShowInterstitialAd_m3062 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_instancesFinishedThisSession_m3007(L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___instancesBetweenInterstitialAds_3);
		if (!((int32_t)((int32_t)L_1%(int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		bool L_3 = (__this->___interstitialAdLoaded_7);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		return 1;
	}
}
// System.Void GoogleAdController::UpdateBanner()
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_UpdateBanner_m3063 (GoogleAdController_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		bool L_0 = (__this->___adsEnabled_8);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = (__this->___banner_9);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1);
		return;
	}

IL_0017:
	{
		GamePhaseState_t561 * L_2 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3003(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 1)
		{
			goto IL_006f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 2)
		{
			goto IL_005f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 3)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_006f;
	}

IL_003f:
	{
		Object_t * L_5 = (__this->___banner_9);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_5);
		goto IL_008a;
	}

IL_004f:
	{
		Object_t * L_6 = (__this->___banner_9);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_6);
		goto IL_008a;
	}

IL_005f:
	{
		Object_t * L_7 = (__this->___banner_9);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_7);
		goto IL_008a;
	}

IL_006f:
	{
		Object_t * L_8 = (__this->___banner_9);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_8);
		Object_t * L_9 = (__this->___banner_9);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(2 /* System.Void GoogleMobileAdBanner::Refresh() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_9);
		goto IL_008a;
	}

IL_008a:
	{
		return;
	}
}
// System.Single GoogleAdController::GetBannerHeight()
extern "C" float GoogleAdController_GetBannerHeight_m3064 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3691(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (((float)L_0));
		float L_1 = V_0;
		if ((!(((float)L_1) < ((float)(400.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		return (32.0f);
	}

IL_0018:
	{
		float L_2 = V_0;
		if ((!(((float)L_2) <= ((float)(720.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		return (50.0f);
	}

IL_0029:
	{
		return (90.0f);
	}
}
// HeadMovement/MovementPhase
#include "AssemblyU2DCSharp_HeadMovement_MovementPhase.h"
#ifndef _MSC_VER
#else
#endif
// HeadMovement/MovementPhase
#include "AssemblyU2DCSharp_HeadMovement_MovementPhaseMethodDeclarations.h"



// HeadMovement
#include "AssemblyU2DCSharp_HeadMovement.h"
#ifndef _MSC_VER
#else
#endif
// HeadMovement
#include "AssemblyU2DCSharp_HeadMovementMethodDeclarations.h"



// System.Void HeadMovement::.ctor()
extern "C" void HeadMovement__ctor_m3065 (HeadMovement_t570 * __this, const MethodInfo* method)
{
	{
		__this->___moveToSpeedDeg_2 = (360.0f);
		__this->___moveHomeSpeedDeg_3 = (90.0f);
		__this->___maxTurnDeg_4 = (25.0f);
		__this->___holdTime_5 = (0.2f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HeadMovement::Start()
extern "C" void HeadMovement_Start_m3066 (HeadMovement_t570 * __this, const MethodInfo* method)
{
	{
		__this->___phase_8 = 0;
		__this->___currentDeg_7 = (0.0f);
		return;
	}
}
// System.Void HeadMovement::Update()
extern "C" void HeadMovement_Update_m3067 (HeadMovement_t570 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___phase_8);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0071;
		}
	}
	{
		goto IL_0093;
	}

IL_0020:
	{
		float L_2 = (__this->___targetDeg_6);
		float L_3 = (__this->___moveToSpeedDeg_2);
		bool L_4 = HeadMovement_MoveTowards_m3068(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		__this->___phase_8 = 2;
		float L_5 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_9 = L_5;
	}

IL_0049:
	{
		goto IL_0093;
	}

IL_004e:
	{
		float L_6 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___phaseStartTime_9);
		float L_8 = (__this->___holdTime_5);
		if ((!(((float)L_6) > ((float)((float)((float)L_7+(float)L_8))))))
		{
			goto IL_006c;
		}
	}
	{
		__this->___phase_8 = 3;
	}

IL_006c:
	{
		goto IL_0093;
	}

IL_0071:
	{
		float L_9 = (__this->___moveHomeSpeedDeg_3);
		bool L_10 = HeadMovement_MoveTowards_m3068(__this, (0.0f), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		__this->___phase_8 = 0;
	}

IL_008e:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return;
	}
}
// System.Boolean HeadMovement::MoveTowards(System.Single,System.Single)
extern "C" bool HeadMovement_MoveTowards_m3068 (HeadMovement_t570 * __this, float ___targetDeg, float ___speedDeg, const MethodInfo* method)
{
	bool V_0 = false;
	{
		float L_0 = ___targetDeg;
		float L_1 = (__this->___currentDeg_7);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		V_0 = 0;
		float L_2 = ___targetDeg;
		float L_3 = (__this->___currentDeg_7);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_004a;
		}
	}
	{
		float L_4 = (__this->___currentDeg_7);
		float L_5 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = ___speedDeg;
		__this->___currentDeg_7 = ((float)((float)L_4-(float)((float)((float)L_5*(float)L_6))));
		float L_7 = (__this->___currentDeg_7);
		float L_8 = ___targetDeg;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_0045;
		}
	}
	{
		float L_9 = ___targetDeg;
		__this->___currentDeg_7 = L_9;
		V_0 = 1;
	}

IL_0045:
	{
		goto IL_0073;
	}

IL_004a:
	{
		float L_10 = (__this->___currentDeg_7);
		float L_11 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = ___speedDeg;
		__this->___currentDeg_7 = ((float)((float)L_10+(float)((float)((float)L_11*(float)L_12))));
		float L_13 = (__this->___currentDeg_7);
		float L_14 = ___targetDeg;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0073;
		}
	}
	{
		float L_15 = ___targetDeg;
		__this->___currentDeg_7 = L_15;
		V_0 = 1;
	}

IL_0073:
	{
		Transform_t406 * L_16 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_17 = (__this->___currentDeg_7);
		Quaternion_t789  L_18 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localRotation_m4228(L_16, L_18, /*hidden argument*/NULL);
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void HeadMovement::LookTowards(UnityEngine.Vector3)
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern TypeInfo* ConeOfViewController_t521_il2cpp_TypeInfo_var;
extern "C" void HeadMovement_LookTowards_m3069 (HeadMovement_t570 * __this, Vector3_t535  ___location, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		ConeOfViewController_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ((&___location)->___y_2);
		float L_1 = ((&___location)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_2 = atan2f(L_0, L_1);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = ((float)((float)L_3*(float)(57.29578f)));
		ConeOfViewController_t521 * L_4 = ((ConeOfViewController_t521_StaticFields*)ConeOfViewController_t521_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_4);
		float L_5 = ConeOfViewController_get_actualAngleRange_m2820(L_4, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_5/(float)(2.0f)));
		float L_6 = V_1;
		float L_7 = V_2;
		float L_8 = V_2;
		float L_9 = Mathf_Clamp_m4229(NULL /*static, unused*/, L_6, ((-L_7)), L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		float L_11 = (__this->___maxTurnDeg_4);
		float L_12 = V_2;
		V_3 = ((float)((float)((float)((float)L_10*(float)L_11))/(float)L_12));
		float L_13 = V_3;
		__this->___targetDeg_6 = L_13;
		__this->___phase_8 = 1;
		return;
	}
}
// IOSSharing
#include "AssemblyU2DCSharp_IOSSharing.h"
#ifndef _MSC_VER
#else
#endif
// IOSSharing
#include "AssemblyU2DCSharp_IOSSharingMethodDeclarations.h"



// System.Void IOSSharing::.ctor()
extern "C" void IOSSharing__ctor_m3070 (IOSSharing_t571 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSSharing::Start()
extern "C" void IOSSharing_Start_m3071 (IOSSharing_t571 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSSharing::Update()
extern "C" void IOSSharing_Update_m3072 (IOSSharing_t571 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// InputHandler
#include "AssemblyU2DCSharp_InputHandler.h"
#ifndef _MSC_VER
#else
#endif
// InputHandler
#include "AssemblyU2DCSharp_InputHandlerMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// Layers
#include "AssemblyU2DCSharp_LayersMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct GameObject_t352;
struct Camera_t545;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t545_m4230(__this, method) (( Camera_t545 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void InputHandler::.ctor()
extern "C" void InputHandler__ctor_m3073 (InputHandler_t572 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m3074 (InputHandler_t572 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisTouchDeviceU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m3075 (InputHandler_t572 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisTouchDeviceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// InputHandler InputHandler::get_instance()
extern TypeInfo* InputHandler_t572_il2cpp_TypeInfo_var;
extern "C" InputHandler_t572 * InputHandler_get_instance_m3076 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t572 * L_0 = ((InputHandler_t572_StaticFields*)InputHandler_t572_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void InputHandler::set_instance(InputHandler)
extern TypeInfo* InputHandler_t572_il2cpp_TypeInfo_var;
extern "C" void InputHandler_set_instance_m3077 (Object_t * __this /* static, unused */, InputHandler_t572 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t572 * L_0 = ___value;
		((InputHandler_t572_StaticFields*)InputHandler_t572_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void InputHandler::Awake()
extern "C" void InputHandler_Awake_m3078 (InputHandler_t572 * __this, const MethodInfo* method)
{
	{
		InputHandler_set_instance_m3077(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		InputHandler_set_isTouchDevice_m3075(__this, 1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		InputHandler_set_isTouchDevice_m3075(__this, 0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m3079 (InputHandler_t572 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void InputHandler::Update()
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern "C" void InputHandler_Update_m3080 (InputHandler_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t535  V_0 = {0};
	Collider2D_t700 * V_1 = {0};
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3016(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		TimeController_t657 * L_2 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = TimeController_get_paused_m3538(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Vector3__ctor_m4049((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Collider2D_t700 * L_4 = InputHandler_CheckForWorldClickStart_m3081(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		Collider2D_t700 * L_5 = V_1;
		bool L_6 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_5, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		Collider2D_t700 * L_7 = V_1;
		Vector3_t535  L_8 = V_0;
		InputHandler_HandleClickStart_m3082(__this, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern TypeInfo* Physics2D_t797_il2cpp_TypeInfo_var;
extern "C" Collider2D_t700 * InputHandler_CheckForWorldClickStart_m3081 (InputHandler_t572 * __this, Vector3_t535 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t797_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t535  V_0 = {0};
	bool V_1 = false;
	Vector3_t535  V_2 = {0};
	Collider2D_t700 * V_3 = {0};
	{
		bool L_0 = InputHandler_GetWorldClickStarted_m3084(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (Collider2D_t700 *)NULL;
	}

IL_0011:
	{
		Camera_t545 * L_2 = (__this->___uxCamera_3);
		Vector3_t535  L_3 = V_0;
		NullCheck(L_2);
		Vector3_t535  L_4 = Camera_ScreenToWorldPoint_m4057(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t535  L_5 = V_2;
		Vector2_t110  L_6 = Vector2_op_Implicit_m4231(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_7 = Layers_UserInteractionsLayerBitmask_m3090(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t797_il2cpp_TypeInfo_var);
		Collider2D_t700 * L_8 = Physics2D_OverlapPoint_m4232(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		bool L_9 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		return (Collider2D_t700 *)NULL;
	}

IL_003a:
	{
		Vector3_t535 * L_10 = ___worldPoint;
		Camera_t545 * L_11 = (__this->___worldCamera_2);
		Vector3_t535  L_12 = V_0;
		NullCheck(L_11);
		Vector3_t535  L_13 = Camera_ScreenToWorldPoint_m4057(L_11, L_12, /*hidden argument*/NULL);
		*L_10 = L_13;
		Vector3_t535 * L_14 = ___worldPoint;
		Vector2_t110  L_15 = Vector2_op_Implicit_m4231(NULL /*static, unused*/, (*(Vector3_t535 *)L_14), /*hidden argument*/NULL);
		int32_t L_16 = Layers_UserInteractionsLayerBitmask_m3090(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t797_il2cpp_TypeInfo_var);
		Collider2D_t700 * L_17 = Physics2D_OverlapPoint_m4232(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Collider2D_t700 * L_18 = V_3;
		bool L_19 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		Collider2D_t700 * L_20 = V_3;
		return L_20;
	}

IL_006f:
	{
		return (Collider2D_t700 *)NULL;
	}
}
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void InputHandler_HandleClickStart_m3082 (InputHandler_t572 * __this, Collider2D_t700 * ___collider, Vector3_t535  ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	{
		Vector3_t535  L_0 = ___worldPoint;
		Vector2_t110  L_1 = Vector2_op_Implicit_m4231(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Collider2D_t700 * L_2 = ___collider;
		NullCheck(L_2);
		String_t* L_3 = Component_get_tag_m4233(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral1055, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PlayerController_t623 * L_5 = PlayerController_get_instance_m3317(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_6 = V_0;
		NullCheck(L_5);
		PlayerController_HandleDragClickStart_m3330(L_5, L_6, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_002c:
	{
		Collider2D_t700 * L_7 = ___collider;
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_m4233(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m456(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral1056, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		PlayerController_t623 * L_10 = PlayerController_get_instance_m3317(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_11 = V_0;
		NullCheck(L_10);
		PlayerController_HandleSlapClickStart_m3331(L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern const MethodInfo* GameObject_GetComponent_TisCamera_t545_m4230_MethodInfo_var;
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m3083 (InputHandler_t572 * __this, Vector3_t535  ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCamera_t545_m4230_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Rect_t695  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Camera_t545 * L_0 = (__this->___worldCamera_2);
		bool L_1 = Object_op_Equality_m3796(NULL /*static, unused*/, L_0, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Camera_t545 * L_2 = Camera_get_main_m4022(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___worldCamera_2 = L_2;
		GameObject_t352 * L_3 = GameObject_FindGameObjectWithTag_m4234(NULL /*static, unused*/, (String_t*) &_stringLiteral1048, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		Camera_t545 * L_5 = GameObject_GetComponent_TisCamera_t545_m4230(L_4, /*hidden argument*/GameObject_GetComponent_TisCamera_t545_m4230_MethodInfo_var);
		__this->___uxCamera_3 = L_5;
	}

IL_0033:
	{
		Camera_t545 * L_6 = (__this->___worldCamera_2);
		NullCheck(L_6);
		Rect_t695  L_7 = Camera_get_rect_m4166(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_x_m3697((&V_1), /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_width_m3676(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_8*(float)(((float)L_9))));
		float L_10 = Rect_get_x_m3697((&V_1), /*hidden argument*/NULL);
		float L_11 = Rect_get_width_m4052((&V_1), /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_width_m3676(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)((float)L_10+(float)L_11))*(float)(((float)L_12))));
		float L_13 = Rect_get_y_m3696((&V_1), /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_height_m3691(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_13*(float)(((float)L_14))));
		float L_15 = Rect_get_y_m3696((&V_1), /*hidden argument*/NULL);
		float L_16 = Rect_get_height_m4053((&V_1), /*hidden argument*/NULL);
		int32_t L_17 = Screen_get_height_m3691(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = ((float)((float)((float)((float)L_15+(float)L_16))*(float)(((float)L_17))));
		float L_18 = ((&___clickPosition)->___x_1);
		float L_19 = V_2;
		if ((!(((float)L_18) >= ((float)L_19))))
		{
			goto IL_00c5;
		}
	}
	{
		float L_20 = ((&___clickPosition)->___x_1);
		float L_21 = V_3;
		if ((!(((float)L_20) <= ((float)L_21))))
		{
			goto IL_00c5;
		}
	}
	{
		float L_22 = ((&___clickPosition)->___y_2);
		float L_23 = V_4;
		if ((!(((float)L_22) >= ((float)L_23))))
		{
			goto IL_00c5;
		}
	}
	{
		float L_24 = ((&___clickPosition)->___y_2);
		float L_25 = V_5;
		G_B7_0 = ((((int32_t)((!(((float)L_24) <= ((float)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B7_0 = 0;
	}

IL_00c6:
	{
		return G_B7_0;
	}
}
// System.Boolean InputHandler::GetWorldClickStarted(UnityEngine.Vector3&)
extern TypeInfo* Input_t708_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickStarted_m3084 (InputHandler_t572 * __this, Vector3_t535 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t707  V_1 = {0};
	Touch_t707  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m3074(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3704(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		Touch_t707  L_2 = Input_GetTouch_m3705(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3706((&V_1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		V_0 = G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t535 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		Touch_t707  L_6 = Input_GetTouch_m3705(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m4235((&V_2), /*hidden argument*/NULL);
		Vector3_t535  L_8 = Vector2_op_Implicit_m4220(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t535 * L_9 = ___clickPosition;
		Vector3_t535  L_10 = Vector3_get_forward_m4236(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonDown_m4025(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t535 * L_12 = ___clickPosition;
		Vector3_t535  L_13 = Input_get_mousePosition_m4023(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_12 = L_13;
	}

IL_0071:
	{
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		Vector3_t535 * L_15 = ___clickPosition;
		bool L_16 = InputHandler_IsPointInWorldCameraScreenSpace_m3083(__this, (*(Vector3_t535 *)L_15), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_008a;
		}
	}
	{
		V_0 = 0;
	}

IL_008a:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Boolean InputHandler::GetWorldClickEnded(UnityEngine.Vector3&)
extern TypeInfo* Input_t708_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickEnded_m3085 (InputHandler_t572 * __this, Vector3_t535 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t707  V_1 = {0};
	Touch_t707  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m3074(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3704(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		Touch_t707  L_2 = Input_GetTouch_m3705(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3706((&V_1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)3))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		V_0 = G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t535 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		Touch_t707  L_6 = Input_GetTouch_m3705(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m4235((&V_2), /*hidden argument*/NULL);
		Vector3_t535  L_8 = Vector2_op_Implicit_m4220(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t535 * L_9 = ___clickPosition;
		Vector3_t535  L_10 = Vector3_get_forward_m4236(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonUp_m4237(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t535 * L_12 = ___clickPosition;
		Vector3_t535  L_13 = Input_get_mousePosition_m4023(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_12 = L_13;
	}

IL_0071:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern TypeInfo* Input_t708_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickPosition_m3086 (InputHandler_t572 * __this, Vector3_t535 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t707  V_1 = {0};
	{
		bool L_0 = InputHandler_get_isTouchDevice_m3074(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3704(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Vector3_t535 * L_3 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		Touch_t707  L_4 = Input_GetTouch_m3705(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector2_t110  L_5 = Touch_get_position_m4235((&V_1), /*hidden argument*/NULL);
		Vector3_t535  L_6 = Vector2_op_Implicit_m4220(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*L_3 = L_6;
		goto IL_0043;
	}

IL_0038:
	{
		Vector3_t535 * L_7 = ___clickPosition;
		Vector3_t535  L_8 = Vector3_get_forward_m4236(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_7 = L_8;
	}

IL_0043:
	{
		goto IL_0070;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButton_m4238(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		Vector3_t535 * L_11 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t708_il2cpp_TypeInfo_var);
		Vector3_t535  L_12 = Input_get_mousePosition_m4023(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_11 = L_12;
		goto IL_0070;
	}

IL_0065:
	{
		Vector3_t535 * L_13 = ___clickPosition;
		Vector3_t535  L_14 = Vector3_get_forward_m4236(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_13 = L_14;
	}

IL_0070:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// LaunchCountController
#include "AssemblyU2DCSharp_LaunchCountController.h"
#ifndef _MSC_VER
#else
#endif
// LaunchCountController
#include "AssemblyU2DCSharp_LaunchCountControllerMethodDeclarations.h"



// System.Void LaunchCountController::.ctor()
extern "C" void LaunchCountController__ctor_m3087 (LaunchCountController_t573 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LaunchCountController::Start()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void LaunchCountController_Start_m3088 (LaunchCountController_t573 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3307(L_0, (String_t*) &_stringLiteral1057, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		PersistentStorage_t619 * L_2 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		PersistentStorage_SetIntValue_m3306(L_2, (String_t*) &_stringLiteral1057, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// Layers
#include "AssemblyU2DCSharp_Layers.h"
#ifndef _MSC_VER
#else
#endif



// System.Void Layers::.ctor()
extern "C" void Layers__ctor_m3089 (Layers_t574 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Layers::UserInteractionsLayerBitmask()
extern "C" int32_t Layers_UserInteractionsLayerBitmask_m3090 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return ((int32_t)8736);
	}
}
// System.Void Layers::Awake()
extern TypeInfo* Physics2D_t797_il2cpp_TypeInfo_var;
extern "C" void Layers_Awake_m3091 (Layers_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t797_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t797_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, 8, ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)13), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)14), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)15), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)15), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)13), ((int32_t)14), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)13), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)13), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)14), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)14), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)14), ((int32_t)14), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4239(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
		return;
	}
}
// LevelDescription/WaveType
#include "AssemblyU2DCSharp_LevelDescription_WaveType.h"
#ifndef _MSC_VER
#else
#endif
// LevelDescription/WaveType
#include "AssemblyU2DCSharp_LevelDescription_WaveTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescriptionMethodDeclarations.h"

// EnumAccumulator`1<BoostConfig/BoostType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_0.h"
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_1.h"
// EnumAccumulator`1<MouseConfig/MouseType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_2.h"
// EnumAccumulator`1<LevelDescription/WaveType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_3.h"
// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
// EnumAccumulator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_EnumAccumulator_1_genMethodDeclarations.h"
// EnumAccumulator`1<BoostConfig/BoostType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_0MethodDeclarations.h"
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_1MethodDeclarations.h"
// EnumAccumulator`1<MouseConfig/MouseType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_2MethodDeclarations.h"
// EnumAccumulator`1<LevelDescription/WaveType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_3MethodDeclarations.h"


// System.Void LevelDescription::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t576_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t577_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t578_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t579_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t580_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t581_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4240_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4241_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4242_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4243_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4244_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4245_MethodInfo_var;
extern "C" void LevelDescription__ctor_m3092 (LevelDescription_t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		EnumAccumulator_1_t577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		EnumAccumulator_1_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		EnumAccumulator_1_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		EnumAccumulator_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(532);
		EnumAccumulator_1_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		List_1__ctor_m4240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		EnumAccumulator_1__ctor_m4241_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		EnumAccumulator_1__ctor_m4242_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484165);
		EnumAccumulator_1__ctor_m4243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		EnumAccumulator_1__ctor_m4244_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484167);
		EnumAccumulator_1__ctor_m4245_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484168);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___specialText_0 = L_0;
		List_1_t576 * L_1 = (List_1_t576 *)il2cpp_codegen_object_new (List_1_t576_il2cpp_TypeInfo_var);
		List_1__ctor_m4240(L_1, /*hidden argument*/List_1__ctor_m4240_MethodInfo_var);
		__this->___explicitMouseDescs_1 = L_1;
		__this->___sprite_2 = (Sprite_t510 *)NULL;
		__this->___previousLevelClearedAchievementID_11 = (String_t*)NULL;
		EnumAccumulator_1_t577 * L_2 = (EnumAccumulator_1_t577 *)il2cpp_codegen_object_new (EnumAccumulator_1_t577_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4241(L_2, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4241_MethodInfo_var);
		__this->___mouseHolesAccumulator_5 = L_2;
		EnumAccumulator_1_t578 * L_3 = (EnumAccumulator_1_t578 *)il2cpp_codegen_object_new (EnumAccumulator_1_t578_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4242(L_3, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4242_MethodInfo_var);
		__this->___boostsAccumulator_6 = L_3;
		EnumAccumulator_1_t579 * L_4 = (EnumAccumulator_1_t579 *)il2cpp_codegen_object_new (EnumAccumulator_1_t579_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4243(L_4, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4243_MethodInfo_var);
		__this->___wigglesAccumulator_7 = L_4;
		EnumAccumulator_1_t580 * L_5 = (EnumAccumulator_1_t580 *)il2cpp_codegen_object_new (EnumAccumulator_1_t580_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4244(L_5, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4244_MethodInfo_var);
		__this->___mouseTypesAccumulator_8 = L_5;
		EnumAccumulator_1_t581 * L_6 = (EnumAccumulator_1_t581 *)il2cpp_codegen_object_new (EnumAccumulator_1_t581_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4245(L_6, 3, /*hidden argument*/EnumAccumulator_1__ctor_m4245_MethodInfo_var);
		__this->___waveTypesAccumulator_9 = L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0.h"
// QuasiRandomGenerator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1.h"
// System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22MethodDeclarations.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_genMethodDeclarations.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0MethodDeclarations.h"
// QuasiRandomGenerator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_gen_22MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"


// System.Void LevelConfig::.ctor()
extern "C" void LevelConfig__ctor_m3093 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	{
		__this->___paradePause_4 = (0.1f);
		__this->___minParadeMice_5 = 2;
		__this->___maxParadeMice_6 = 4;
		__this->___paradeEndPause_7 = (4.0f);
		__this->___minDistributedMice_8 = 3;
		__this->___maxDistributedMice_9 = 7;
		__this->___distributedEndPause_11 = (2.0f);
		__this->___minSpoutPause_12 = (0.2f);
		__this->___maxSpoutPause_13 = (1.1f);
		__this->___spoutEndPause_14 = (3.0f);
		__this->___minSpoutMice_15 = 6;
		__this->___maxSpoutMice_16 = ((int32_t)10);
		__this->___superSpeedMiceLevel_17 = 7;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// LevelConfig LevelConfig::get_instance()
extern TypeInfo* LevelConfig_t588_il2cpp_TypeInfo_var;
extern "C" LevelConfig_t588 * LevelConfig_get_instance_m3094 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t588 * L_0 = ((LevelConfig_t588_StaticFields*)LevelConfig_t588_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void LevelConfig::set_instance(LevelConfig)
extern TypeInfo* LevelConfig_t588_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_set_instance_m3095 (Object_t * __this /* static, unused */, LevelConfig_t588 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t588 * L_0 = ___value;
		((LevelConfig_t588_StaticFields*)LevelConfig_t588_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Void LevelConfig::Awake()
extern TypeInfo* Dictionary_2_t587_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4246_MethodInfo_var;
extern "C" void LevelConfig_Awake_m3096 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		Dictionary_2__ctor_m4246_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484169);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_set_instance_m3095(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		Dictionary_2_t587 * L_0 = (Dictionary_2_t587 *)il2cpp_codegen_object_new (Dictionary_2_t587_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4246(L_0, /*hidden argument*/Dictionary_2__ctor_m4246_MethodInfo_var);
		__this->___levelDescMap_21 = L_0;
		return;
	}
}
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m3097 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	{
		LevelConfig_LoadSprites_m3098(__this, /*hidden argument*/NULL);
		LevelConfig_MakeQuasiRandomGenerators_m3117(__this, /*hidden argument*/NULL);
		LevelConfig_GeneratePresetLevels_m3105(__this, /*hidden argument*/NULL);
		LevelConfig_GenerateLevelLockInfo_m3099(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::LoadSprites()
extern const MethodInfo* Resources_Load_TisSprite_t510_m4196_MethodInfo_var;
extern "C" void LevelConfig_LoadSprites_m3098 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t510_m4196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	{
		Sprite_t510 * L_0 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, (String_t*) &_stringLiteral1058, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___mouseHoleIntroSprite_23 = L_0;
		Sprite_t510 * L_1 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, (String_t*) &_stringLiteral1059, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___angusIntroSprite_24 = L_1;
		return;
	}
}
// System.Void LevelConfig::GenerateLevelLockInfo()
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_GenerateLevelLockInfo_m3099 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___boostLevelLocks_22 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, 4));
		V_0 = 0;
		goto IL_0028;
	}

IL_0013:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = LevelConfig_GetLevelLockInfoForBoost_m3100(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Int32U5BU5D_t484* L_2 = (__this->___boostLevelLocks_22);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)L_4;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Int32 LevelConfig::GetLevelLockInfoForBoost(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLockInfoForBoost_m3100 (LevelConfig_t588 * __this, int32_t ___bt, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LevelDescription_t582 * V_2 = {0};
	{
		V_0 = 0;
		int32_t L_0 = ___bt;
		V_1 = L_0;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_0;
		LevelDescription_t582 * L_3 = LevelConfig_GetLevelDescription_m3104(__this, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		LevelDescription_t582 * L_4 = V_2;
		NullCheck(L_4);
		EnumAccumulator_1_t578 * L_5 = (L_4->___boostsAccumulator_6);
		NullCheck(L_5);
		Int32U5BU5D_t484* L_6 = (L_5->___newCount_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_8))) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0025:
	{
		goto IL_0004;
	}
}
// System.Int32 LevelConfig::GetLevelLock(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLock_m3101 (LevelConfig_t588 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t484* L_1 = (__this->___boostLevelLocks_22);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Void LevelConfig::AddExplicitMouseDesc(System.Collections.Generic.List`1<ExplicitMouseDesc>&,System.Single,System.Boolean,MouseSinkController/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern TypeInfo* ExplicitMouseDesc_t536_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_AddExplicitMouseDesc_m3102 (LevelConfig_t588 * __this, List_1_t576 ** ___retVal, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExplicitMouseDesc_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	ExplicitMouseDesc_t536 * V_0 = {0};
	{
		float L_0 = ___delayToNextMouse;
		bool L_1 = ___isClockwise;
		int32_t L_2 = ___location;
		int32_t L_3 = ___mType;
		int32_t L_4 = ___track;
		int32_t L_5 = ___wType;
		ExplicitMouseDesc_t536 * L_6 = (ExplicitMouseDesc_t536 *)il2cpp_codegen_object_new (ExplicitMouseDesc_t536_il2cpp_TypeInfo_var);
		ExplicitMouseDesc__ctor_m2891(L_6, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t576 ** L_7 = ___retVal;
		ExplicitMouseDesc_t536 * L_8 = V_0;
		NullCheck((*((List_1_t576 **)L_7)));
		VirtActionInvoker1< ExplicitMouseDesc_t536 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(!0) */, (*((List_1_t576 **)L_7)), L_8);
		return;
	}
}
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t582 * LevelConfig_GetCurrentLevelDescription_m3103 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GameLevelState_t557 * L_0 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m2977(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		LevelDescription_t582 * L_3 = LevelConfig_GetLevelDescription_m3104(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t582 * LevelConfig_GetLevelDescription_m3104 (LevelConfig_t588 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	LevelDescription_t582 * V_0 = {0};
	{
		Dictionary_2_t587 * L_0 = (__this->___levelDescMap_21);
		int32_t L_1 = ___gameLevel;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t587 * L_3 = (__this->___levelDescMap_21);
		int32_t L_4 = ___gameLevel;
		NullCheck(L_3);
		LevelDescription_t582 * L_5 = (LevelDescription_t582 *)VirtFuncInvoker1< LevelDescription_t582 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___gameLevel;
		LevelDescription_t582 * L_7 = LevelConfig_GenerateRandomLevelDescription_m3110(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Dictionary_2_t587 * L_8 = (__this->___levelDescMap_21);
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(!0) */, L_8, L_9);
		LevelDescription_t582 * L_10 = V_0;
		int32_t L_11 = ___gameLevel;
		NullCheck(L_10);
		L_10->___gameLevel_10 = L_11;
		Dictionary_2_t587 * L_12 = (__this->___levelDescMap_21);
		int32_t L_13 = ___gameLevel;
		LevelDescription_t582 * L_14 = V_0;
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, LevelDescription_t582 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_12, L_13, L_14);
		LevelDescription_t582 * L_15 = V_0;
		return L_15;
	}
}
// System.Void LevelConfig::GeneratePresetLevels()
extern "C" void LevelConfig_GeneratePresetLevels_m3105 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	LevelDescription_t582 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Dictionary_2_t587 * L_0 = (__this->___levelDescMap_21);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear() */, L_0);
		V_1 = 0;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_1;
		LevelDescription_t582 * L_3 = LevelConfig_MakePresetGameLevelSkeleton_m3109(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t582 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_003d;
	}

IL_0024:
	{
		LevelDescription_t582 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		L_5->___gameLevel_10 = L_6;
		Dictionary_2_t587 * L_7 = (__this->___levelDescMap_21);
		int32_t L_8 = V_1;
		LevelDescription_t582 * L_9 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LevelDescription_t582 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_7, L_8, L_9);
		goto IL_000d;
	}

IL_003d:
	{
		LevelConfig_FillOutPresetGameLevelSkeletons_m3107(__this, /*hidden argument*/NULL);
		LevelConfig_AddPreviousLevelClearedAchievements_m3106(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::AddPreviousLevelClearedAchievements()
extern "C" void LevelConfig_AddPreviousLevelClearedAchievements_m3106 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	LevelDescription_t582 * V_0 = {0};
	{
		LevelDescription_t582 * L_0 = LevelConfig_GetLevelDescription_m3104(__this, 6, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t582 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1060;
		LevelDescription_t582 * L_2 = LevelConfig_GetLevelDescription_m3104(__this, ((int32_t)11), /*hidden argument*/NULL);
		V_0 = L_2;
		LevelDescription_t582 * L_3 = V_0;
		NullCheck(L_3);
		L_3->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1061;
		return;
	}
}
// System.Void LevelConfig::FillOutPresetGameLevelSkeletons()
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4247_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4248_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4249_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4250_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4251_MethodInfo_var;
extern "C" void LevelConfig_FillOutPresetGameLevelSkeletons_m3107 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_DeriveFrom_m4247_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484170);
		EnumAccumulator_1_DeriveFrom_m4248_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484171);
		EnumAccumulator_1_DeriveFrom_m4249_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484172);
		EnumAccumulator_1_DeriveFrom_m4250_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484173);
		EnumAccumulator_1_DeriveFrom_m4251_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484174);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	LevelDescription_t582 * V_1 = {0};
	LevelDescription_t582 * V_2 = {0};
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t587 * L_1 = (__this->___levelDescMap_21);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_1, L_2);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		Dictionary_2_t587 * L_4 = (__this->___levelDescMap_21);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		LevelDescription_t582 * L_6 = (LevelDescription_t582 *)VirtFuncInvoker1< LevelDescription_t582 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_4, L_5);
		V_1 = L_6;
		V_2 = (LevelDescription_t582 *)NULL;
		Dictionary_2_t587 * L_7 = (__this->___levelDescMap_21);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_7, ((int32_t)((int32_t)L_8-(int32_t)1)));
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t587 * L_10 = (__this->___levelDescMap_21);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		LevelDescription_t582 * L_12 = (LevelDescription_t582 *)VirtFuncInvoker1< LevelDescription_t582 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_10, ((int32_t)((int32_t)L_11-(int32_t)1)));
		V_2 = L_12;
	}

IL_0049:
	{
		LevelDescription_t582 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_00a4;
		}
	}
	{
		LevelDescription_t582 * L_14 = V_1;
		NullCheck(L_14);
		EnumAccumulator_1_t578 * L_15 = (L_14->___boostsAccumulator_6);
		LevelDescription_t582 * L_16 = V_2;
		NullCheck(L_16);
		EnumAccumulator_1_t578 * L_17 = (L_16->___boostsAccumulator_6);
		NullCheck(L_15);
		EnumAccumulator_1_DeriveFrom_m4247(L_15, L_17, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4247_MethodInfo_var);
		LevelDescription_t582 * L_18 = V_1;
		NullCheck(L_18);
		EnumAccumulator_1_t577 * L_19 = (L_18->___mouseHolesAccumulator_5);
		LevelDescription_t582 * L_20 = V_2;
		NullCheck(L_20);
		EnumAccumulator_1_t577 * L_21 = (L_20->___mouseHolesAccumulator_5);
		NullCheck(L_19);
		EnumAccumulator_1_DeriveFrom_m4248(L_19, L_21, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4248_MethodInfo_var);
		LevelDescription_t582 * L_22 = V_1;
		NullCheck(L_22);
		EnumAccumulator_1_t579 * L_23 = (L_22->___wigglesAccumulator_7);
		LevelDescription_t582 * L_24 = V_2;
		NullCheck(L_24);
		EnumAccumulator_1_t579 * L_25 = (L_24->___wigglesAccumulator_7);
		NullCheck(L_23);
		EnumAccumulator_1_DeriveFrom_m4249(L_23, L_25, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4249_MethodInfo_var);
		LevelDescription_t582 * L_26 = V_1;
		NullCheck(L_26);
		EnumAccumulator_1_t580 * L_27 = (L_26->___mouseTypesAccumulator_8);
		LevelDescription_t582 * L_28 = V_2;
		NullCheck(L_28);
		EnumAccumulator_1_t580 * L_29 = (L_28->___mouseTypesAccumulator_8);
		NullCheck(L_27);
		EnumAccumulator_1_DeriveFrom_m4250(L_27, L_29, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4250_MethodInfo_var);
		LevelDescription_t582 * L_30 = V_1;
		NullCheck(L_30);
		EnumAccumulator_1_t581 * L_31 = (L_30->___waveTypesAccumulator_9);
		LevelDescription_t582 * L_32 = V_2;
		NullCheck(L_32);
		EnumAccumulator_1_t581 * L_33 = (L_32->___waveTypesAccumulator_9);
		NullCheck(L_31);
		EnumAccumulator_1_DeriveFrom_m4251(L_31, L_33, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4251_MethodInfo_var);
	}

IL_00a4:
	{
		LevelDescription_t582 * L_34 = V_1;
		NullCheck(L_34);
		List_1_t576 * L_35 = (L_34->___explicitMouseDescs_1);
		NullCheck(L_35);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_35);
		if (L_36)
		{
			goto IL_00c8;
		}
	}
	{
		LevelDescription_t582 * L_37 = V_1;
		LevelDescription_t582 * L_38 = V_1;
		List_1_t576 * L_39 = LevelConfig_GenerateRandomMiceForLevel_m3112(__this, L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		L_37->___explicitMouseDescs_1 = L_39;
		LevelDescription_t582 * L_40 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m3111(__this, L_40, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		LevelDescription_t582 * L_41 = V_1;
		NullCheck(L_41);
		Sprite_t510 * L_42 = (L_41->___sprite_2);
		bool L_43 = Object_op_Equality_m3796(NULL /*static, unused*/, L_42, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00e5;
		}
	}
	{
		LevelDescription_t582 * L_44 = V_1;
		Sprite_t510 * L_45 = (__this->___angusIntroSprite_24);
		NullCheck(L_44);
		L_44->___sprite_2 = L_45;
	}

IL_00e5:
	{
		goto IL_0002;
	}
}
// System.Void LevelConfig::SetupInitialAccumulators(LevelDescription)
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4252_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4253_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4254_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4255_MethodInfo_var;
extern "C" void LevelConfig_SetupInitialAccumulators_m3108 (LevelConfig_t588 * __this, LevelDescription_t582 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_AddDerived_m4252_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484175);
		EnumAccumulator_1_AddDerived_m4253_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		EnumAccumulator_1_AddDerived_m4254_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		EnumAccumulator_1_AddDerived_m4255_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelDescription_t582 * L_0 = ___ld;
		NullCheck(L_0);
		EnumAccumulator_1_t577 * L_1 = (L_0->___mouseHolesAccumulator_5);
		int32_t L_2 = TweakableParams_GetInitialTrapsPerHole_m3600(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		EnumAccumulator_1_AddDerived_m4252(L_1, 1, L_2, /*hidden argument*/EnumAccumulator_1_AddDerived_m4252_MethodInfo_var);
		LevelDescription_t582 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t577 * L_4 = (L_3->___mouseHolesAccumulator_5);
		int32_t L_5 = TweakableParams_GetInitialTrapsPerHole_m3600(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		EnumAccumulator_1_AddDerived_m4252(L_4, 3, L_5, /*hidden argument*/EnumAccumulator_1_AddDerived_m4252_MethodInfo_var);
		LevelDescription_t582 * L_6 = ___ld;
		NullCheck(L_6);
		EnumAccumulator_1_t577 * L_7 = (L_6->___mouseHolesAccumulator_5);
		int32_t L_8 = TweakableParams_GetInitialTrapsPerHole_m3600(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		EnumAccumulator_1_AddDerived_m4252(L_7, 0, L_8, /*hidden argument*/EnumAccumulator_1_AddDerived_m4252_MethodInfo_var);
		LevelDescription_t582 * L_9 = ___ld;
		NullCheck(L_9);
		EnumAccumulator_1_t577 * L_10 = (L_9->___mouseHolesAccumulator_5);
		int32_t L_11 = TweakableParams_GetInitialTrapsPerHole_m3600(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		EnumAccumulator_1_AddDerived_m4252(L_10, 2, L_11, /*hidden argument*/EnumAccumulator_1_AddDerived_m4252_MethodInfo_var);
		LevelDescription_t582 * L_12 = ___ld;
		NullCheck(L_12);
		EnumAccumulator_1_t580 * L_13 = (L_12->___mouseTypesAccumulator_8);
		NullCheck(L_13);
		EnumAccumulator_1_AddDerived_m4253(L_13, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4253_MethodInfo_var);
		LevelDescription_t582 * L_14 = ___ld;
		NullCheck(L_14);
		EnumAccumulator_1_t579 * L_15 = (L_14->___wigglesAccumulator_7);
		NullCheck(L_15);
		EnumAccumulator_1_AddDerived_m4254(L_15, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4254_MethodInfo_var);
		LevelDescription_t582 * L_16 = ___ld;
		NullCheck(L_16);
		EnumAccumulator_1_t581 * L_17 = (L_16->___waveTypesAccumulator_9);
		NullCheck(L_17);
		EnumAccumulator_1_AddDerived_m4255(L_17, 0, 3, /*hidden argument*/EnumAccumulator_1_AddDerived_m4255_MethodInfo_var);
		LevelDescription_t582 * L_18 = ___ld;
		NullCheck(L_18);
		EnumAccumulator_1_t581 * L_19 = (L_18->___waveTypesAccumulator_9);
		NullCheck(L_19);
		EnumAccumulator_1_AddDerived_m4255(L_19, 2, 1, /*hidden argument*/EnumAccumulator_1_AddDerived_m4255_MethodInfo_var);
		return;
	}
}
// LevelDescription LevelConfig::MakePresetGameLevelSkeleton(System.Int32)
extern TypeInfo* LevelDescription_t582_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t576_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern TypeInfo* TipConfig_t511_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4240_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4256_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4257_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4258_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4259_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4260_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4261_MethodInfo_var;
extern "C" LevelDescription_t582 * LevelConfig_MakePresetGameLevelSkeleton_m3109 (LevelConfig_t588 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelDescription_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		List_1_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		TipConfig_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		List_1__ctor_m4240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		EnumAccumulator_1_AddNew_m4256_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484179);
		EnumAccumulator_1_AddNew_m4257_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484180);
		EnumAccumulator_1_AddNew_m4258_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484181);
		EnumAccumulator_1_AddNew_m4259_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484182);
		EnumAccumulator_1_AddNew_m4260_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484183);
		EnumAccumulator_1_AddNew_m4261_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484184);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t582 * V_0 = {0};
	int32_t V_1 = 0;
	{
		LevelDescription_t582 * L_0 = (LevelDescription_t582 *)il2cpp_codegen_object_new (LevelDescription_t582_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m3092(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t582 * L_1 = V_0;
		List_1_t576 * L_2 = (List_1_t576 *)il2cpp_codegen_object_new (List_1_t576_il2cpp_TypeInfo_var);
		List_1__ctor_m4240(L_2, /*hidden argument*/List_1__ctor_m4240_MethodInfo_var);
		NullCheck(L_1);
		L_1->___explicitMouseDescs_1 = L_2;
		int32_t L_3 = ___gameLevel;
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_1 = L_5;
		if (L_5)
		{
			goto IL_0089;
		}
	}
	{
		LevelDescription_t582 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___specialText_0 = L_7;
		LevelDescription_t582 * L_8 = V_0;
		LevelConfig_SetupInitialAccumulators_m3108(__this, L_8, /*hidden argument*/NULL);
		LevelDescription_t582 * L_9 = V_0;
		NullCheck(L_9);
		List_1_t576 ** L_10 = &(L_9->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_10, (3.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_11 = V_0;
		NullCheck(L_11);
		List_1_t576 ** L_12 = &(L_11->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_12, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_13 = V_0;
		NullCheck(L_13);
		List_1_t576 ** L_14 = &(L_13->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_14, (3.0f), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_15 = V_0;
		NullCheck(L_15);
		List_1_t576 ** L_16 = &(L_15->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_16, (3.0f), 1, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_17 = V_0;
		return L_17;
	}

IL_0089:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ((int32_t)((int32_t)L_18-(int32_t)1));
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0141;
		}
	}
	{
		LevelDescription_t582 * L_20 = V_0;
		NullCheck(L_20);
		L_20->___specialText_0 = (String_t*) &_stringLiteral1062;
		LevelDescription_t582 * L_21 = V_0;
		MouseConfig_t596 * L_22 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_22);
		Sprite_t510 * L_23 = MouseConfig_GetIntroSpriteForMouseType_m3140(L_22, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___sprite_2 = L_23;
		LevelDescription_t582 * L_24 = V_0;
		NullCheck(L_24);
		EnumAccumulator_1_t580 * L_25 = (L_24->___mouseTypesAccumulator_8);
		NullCheck(L_25);
		EnumAccumulator_1_AddNew_m4256(L_25, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4256_MethodInfo_var);
		LevelDescription_t582 * L_26 = V_0;
		NullCheck(L_26);
		List_1_t576 ** L_27 = &(L_26->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_27, (1.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_28 = V_0;
		NullCheck(L_28);
		List_1_t576 ** L_29 = &(L_28->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_29, (2.1f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_30 = V_0;
		NullCheck(L_30);
		List_1_t576 ** L_31 = &(L_30->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_31, (3.1f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_32 = V_0;
		NullCheck(L_32);
		List_1_t576 ** L_33 = &(L_32->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_33, (1.5f), 0, 2, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_34 = V_0;
		NullCheck(L_34);
		List_1_t576 ** L_35 = &(L_34->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_35, (3.0f), 0, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_36 = V_0;
		NullCheck(L_36);
		List_1_t576 ** L_37 = &(L_36->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_37, (4.0f), 1, 3, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_38 = V_0;
		return L_38;
	}

IL_0141:
	{
		int32_t L_39 = V_1;
		int32_t L_40 = ((int32_t)((int32_t)L_39-(int32_t)1));
		V_1 = L_40;
		if (L_40)
		{
			goto IL_0220;
		}
	}
	{
		LevelDescription_t582 * L_41 = V_0;
		NullCheck(L_41);
		L_41->___specialText_0 = (String_t*) &_stringLiteral1063;
		LevelDescription_t582 * L_42 = V_0;
		Sprite_t510 * L_43 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_42);
		L_42->___sprite_2 = L_43;
		LevelDescription_t582 * L_44 = V_0;
		NullCheck(L_44);
		EnumAccumulator_1_t577 * L_45 = (L_44->___mouseHolesAccumulator_5);
		NullCheck(L_45);
		EnumAccumulator_1_AddNew_m4257(L_45, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_46 = V_0;
		NullCheck(L_46);
		List_1_t576 ** L_47 = &(L_46->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_47, (2.0f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_48 = V_0;
		NullCheck(L_48);
		List_1_t576 ** L_49 = &(L_48->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_49, (0.1f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_50 = V_0;
		NullCheck(L_50);
		List_1_t576 ** L_51 = &(L_50->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_51, (0.1f), 1, 2, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_52 = V_0;
		NullCheck(L_52);
		List_1_t576 ** L_53 = &(L_52->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_53, (2.0f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_54 = V_0;
		NullCheck(L_54);
		List_1_t576 ** L_55 = &(L_54->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_55, (1.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_56 = V_0;
		NullCheck(L_56);
		List_1_t576 ** L_57 = &(L_56->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_57, (2.3f), 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_58 = V_0;
		NullCheck(L_58);
		List_1_t576 ** L_59 = &(L_58->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_59, (1.5f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_60 = V_0;
		NullCheck(L_60);
		List_1_t576 ** L_61 = &(L_60->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_61, (4.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_62 = V_0;
		return L_62;
	}

IL_0220:
	{
		int32_t L_63 = V_1;
		int32_t L_64 = ((int32_t)((int32_t)L_63-(int32_t)1));
		V_1 = L_64;
		if (L_64)
		{
			goto IL_02f8;
		}
	}
	{
		LevelDescription_t582 * L_65 = V_0;
		NullCheck(L_65);
		L_65->___specialText_0 = (String_t*) &_stringLiteral1064;
		LevelDescription_t582 * L_66 = V_0;
		BoostConfig_t494 * L_67 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_67);
		Sprite_t510 * L_68 = BoostConfig_GetIntroImageForType_m2798(L_67, 0, /*hidden argument*/NULL);
		NullCheck(L_66);
		L_66->___sprite_2 = L_68;
		LevelDescription_t582 * L_69 = V_0;
		NullCheck(L_69);
		EnumAccumulator_1_t578 * L_70 = (L_69->___boostsAccumulator_6);
		NullCheck(L_70);
		EnumAccumulator_1_AddNew_m4258(L_70, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4258_MethodInfo_var);
		LevelDescription_t582 * L_71 = V_0;
		TipConfig_t511 * L_72 = (TipConfig_t511 *)il2cpp_codegen_object_new (TipConfig_t511_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3558(L_72, (String_t*) &_stringLiteral1065, (String_t*) &_stringLiteral1066, /*hidden argument*/NULL);
		NullCheck(L_71);
		L_71->___tipConfig_3 = L_72;
		LevelDescription_t582 * L_73 = V_0;
		NullCheck(L_73);
		L_73->___tipPause_4 = (2.0f);
		LevelDescription_t582 * L_74 = V_0;
		NullCheck(L_74);
		List_1_t576 ** L_75 = &(L_74->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_75, (4.0f), 1, 0, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_76 = V_0;
		NullCheck(L_76);
		List_1_t576 ** L_77 = &(L_76->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_77, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_78 = V_0;
		NullCheck(L_78);
		List_1_t576 ** L_79 = &(L_78->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_79, (2.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_80 = V_0;
		NullCheck(L_80);
		List_1_t576 ** L_81 = &(L_80->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_81, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_82 = V_0;
		NullCheck(L_82);
		List_1_t576 ** L_83 = &(L_82->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_83, (3.0f), 0, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_84 = V_0;
		NullCheck(L_84);
		List_1_t576 ** L_85 = &(L_84->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_85, (3.0f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_86 = V_0;
		return L_86;
	}

IL_02f8:
	{
		int32_t L_87 = V_1;
		int32_t L_88 = ((int32_t)((int32_t)L_87-(int32_t)1));
		V_1 = L_88;
		if (L_88)
		{
			goto IL_03d7;
		}
	}
	{
		LevelDescription_t582 * L_89 = V_0;
		NullCheck(L_89);
		L_89->___specialText_0 = (String_t*) &_stringLiteral1063;
		LevelDescription_t582 * L_90 = V_0;
		Sprite_t510 * L_91 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_90);
		L_90->___sprite_2 = L_91;
		LevelDescription_t582 * L_92 = V_0;
		NullCheck(L_92);
		EnumAccumulator_1_t577 * L_93 = (L_92->___mouseHolesAccumulator_5);
		NullCheck(L_93);
		EnumAccumulator_1_AddNew_m4257(L_93, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_94 = V_0;
		NullCheck(L_94);
		List_1_t576 ** L_95 = &(L_94->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_95, (1.0f), 0, 1, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_96 = V_0;
		NullCheck(L_96);
		List_1_t576 ** L_97 = &(L_96->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_97, (2.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_98 = V_0;
		NullCheck(L_98);
		List_1_t576 ** L_99 = &(L_98->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_99, (3.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_100 = V_0;
		NullCheck(L_100);
		List_1_t576 ** L_101 = &(L_100->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_101, (1.0f), 1, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_102 = V_0;
		NullCheck(L_102);
		List_1_t576 ** L_103 = &(L_102->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_103, (2.0f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_104 = V_0;
		NullCheck(L_104);
		List_1_t576 ** L_105 = &(L_104->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_105, (0.1f), 0, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_106 = V_0;
		NullCheck(L_106);
		List_1_t576 ** L_107 = &(L_106->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_107, (2.5f), 1, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_108 = V_0;
		NullCheck(L_108);
		List_1_t576 ** L_109 = &(L_108->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_109, (4.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_110 = V_0;
		return L_110;
	}

IL_03d7:
	{
		int32_t L_111 = V_1;
		int32_t L_112 = ((int32_t)((int32_t)L_111-(int32_t)1));
		V_1 = L_112;
		if (L_112)
		{
			goto IL_04f3;
		}
	}
	{
		LevelDescription_t582 * L_113 = V_0;
		NullCheck(L_113);
		L_113->___specialText_0 = (String_t*) &_stringLiteral1067;
		LevelDescription_t582 * L_114 = V_0;
		MouseConfig_t596 * L_115 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_115);
		Sprite_t510 * L_116 = MouseConfig_GetIntroSpriteForMouseType_m3140(L_115, 2, /*hidden argument*/NULL);
		NullCheck(L_114);
		L_114->___sprite_2 = L_116;
		LevelDescription_t582 * L_117 = V_0;
		NullCheck(L_117);
		EnumAccumulator_1_t580 * L_118 = (L_117->___mouseTypesAccumulator_8);
		NullCheck(L_118);
		EnumAccumulator_1_AddNew_m4256(L_118, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4256_MethodInfo_var);
		LevelDescription_t582 * L_119 = V_0;
		NullCheck(L_119);
		EnumAccumulator_1_t580 * L_120 = (L_119->___mouseTypesAccumulator_8);
		NullCheck(L_120);
		EnumAccumulator_1_AddNew_m4256(L_120, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4256_MethodInfo_var);
		LevelDescription_t582 * L_121 = V_0;
		NullCheck(L_121);
		List_1_t576 ** L_122 = &(L_121->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_122, (3.0f), 0, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_123 = V_0;
		NullCheck(L_123);
		List_1_t576 ** L_124 = &(L_123->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_124, (2.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_125 = V_0;
		NullCheck(L_125);
		List_1_t576 ** L_126 = &(L_125->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_126, (2.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_127 = V_0;
		NullCheck(L_127);
		List_1_t576 ** L_128 = &(L_127->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_128, (1.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_129 = V_0;
		NullCheck(L_129);
		List_1_t576 ** L_130 = &(L_129->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_130, (3.0f), 0, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_131 = V_0;
		NullCheck(L_131);
		List_1_t576 ** L_132 = &(L_131->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_132, (2.0f), 1, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_133 = V_0;
		NullCheck(L_133);
		List_1_t576 ** L_134 = &(L_133->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_134, (1.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_135 = V_0;
		NullCheck(L_135);
		List_1_t576 ** L_136 = &(L_135->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_136, (4.0f), 1, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_137 = V_0;
		NullCheck(L_137);
		List_1_t576 ** L_138 = &(L_137->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_138, (2.0f), 0, 2, 2, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_139 = V_0;
		NullCheck(L_139);
		List_1_t576 ** L_140 = &(L_139->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_140, (4.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_141 = V_0;
		return L_141;
	}

IL_04f3:
	{
		int32_t L_142 = V_1;
		int32_t L_143 = ((int32_t)((int32_t)L_142-(int32_t)1));
		V_1 = L_143;
		if (L_143)
		{
			goto IL_05d7;
		}
	}
	{
		LevelDescription_t582 * L_144 = V_0;
		NullCheck(L_144);
		L_144->___specialText_0 = (String_t*) &_stringLiteral1068;
		LevelDescription_t582 * L_145 = V_0;
		BoostConfig_t494 * L_146 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_146);
		Sprite_t510 * L_147 = BoostConfig_GetIntroImageForType_m2798(L_146, 1, /*hidden argument*/NULL);
		NullCheck(L_145);
		L_145->___sprite_2 = L_147;
		LevelDescription_t582 * L_148 = V_0;
		NullCheck(L_148);
		EnumAccumulator_1_t578 * L_149 = (L_148->___boostsAccumulator_6);
		NullCheck(L_149);
		EnumAccumulator_1_AddNew_m4258(L_149, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4258_MethodInfo_var);
		LevelDescription_t582 * L_150 = V_0;
		NullCheck(L_150);
		List_1_t576 ** L_151 = &(L_150->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_151, (2.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_152 = V_0;
		NullCheck(L_152);
		List_1_t576 ** L_153 = &(L_152->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_153, (2.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_154 = V_0;
		NullCheck(L_154);
		List_1_t576 ** L_155 = &(L_154->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_155, (1.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_156 = V_0;
		NullCheck(L_156);
		List_1_t576 ** L_157 = &(L_156->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_157, (0.1f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_158 = V_0;
		NullCheck(L_158);
		List_1_t576 ** L_159 = &(L_158->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_159, (3.0f), 0, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_160 = V_0;
		NullCheck(L_160);
		List_1_t576 ** L_161 = &(L_160->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_161, (3.0f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_162 = V_0;
		NullCheck(L_162);
		List_1_t576 ** L_163 = &(L_162->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_163, (0.1f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_164 = V_0;
		NullCheck(L_164);
		List_1_t576 ** L_165 = &(L_164->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_165, (4.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_166 = V_0;
		return L_166;
	}

IL_05d7:
	{
		int32_t L_167 = V_1;
		int32_t L_168 = ((int32_t)((int32_t)L_167-(int32_t)1));
		V_1 = L_168;
		if (L_168)
		{
			goto IL_06e2;
		}
	}
	{
		LevelDescription_t582 * L_169 = V_0;
		NullCheck(L_169);
		L_169->___specialText_0 = (String_t*) &_stringLiteral1069;
		LevelDescription_t582 * L_170 = V_0;
		Sprite_t510 * L_171 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_170);
		L_170->___sprite_2 = L_171;
		LevelDescription_t582 * L_172 = V_0;
		NullCheck(L_172);
		EnumAccumulator_1_t577 * L_173 = (L_172->___mouseHolesAccumulator_5);
		NullCheck(L_173);
		EnumAccumulator_1_AddNew_m4257(L_173, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_174 = V_0;
		NullCheck(L_174);
		List_1_t576 ** L_175 = &(L_174->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_175, (3.0f), 0, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_176 = V_0;
		NullCheck(L_176);
		List_1_t576 ** L_177 = &(L_176->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_177, (2.0f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_178 = V_0;
		NullCheck(L_178);
		List_1_t576 ** L_179 = &(L_178->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_179, (4.0f), 1, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_180 = V_0;
		NullCheck(L_180);
		List_1_t576 ** L_181 = &(L_180->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_181, (2.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_182 = V_0;
		NullCheck(L_182);
		List_1_t576 ** L_183 = &(L_182->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_183, (1.0f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_184 = V_0;
		NullCheck(L_184);
		List_1_t576 ** L_185 = &(L_184->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_185, (1.0f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_186 = V_0;
		NullCheck(L_186);
		List_1_t576 ** L_187 = &(L_186->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_187, (2.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_188 = V_0;
		NullCheck(L_188);
		List_1_t576 ** L_189 = &(L_188->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_189, (3.0f), 0, 1, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_190 = V_0;
		NullCheck(L_190);
		List_1_t576 ** L_191 = &(L_190->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_191, (2.0f), 0, 2, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_192 = V_0;
		NullCheck(L_192);
		List_1_t576 ** L_193 = &(L_192->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_193, (4.0f), 0, 1, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_194 = V_0;
		return L_194;
	}

IL_06e2:
	{
		int32_t L_195 = V_1;
		int32_t L_196 = ((int32_t)((int32_t)L_195-(int32_t)1));
		V_1 = L_196;
		if (L_196)
		{
			goto IL_07f2;
		}
	}
	{
		LevelDescription_t582 * L_197 = V_0;
		NullCheck(L_197);
		L_197->___specialText_0 = (String_t*) &_stringLiteral1070;
		LevelDescription_t582 * L_198 = V_0;
		MouseConfig_t596 * L_199 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_199);
		Sprite_t510 * L_200 = MouseConfig_GetIntroSpriteForMouseWiggle_m3141(L_199, 2, /*hidden argument*/NULL);
		NullCheck(L_198);
		L_198->___sprite_2 = L_200;
		LevelDescription_t582 * L_201 = V_0;
		NullCheck(L_201);
		EnumAccumulator_1_t579 * L_202 = (L_201->___wigglesAccumulator_7);
		NullCheck(L_202);
		EnumAccumulator_1_AddNew_m4259(L_202, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4259_MethodInfo_var);
		LevelDescription_t582 * L_203 = V_0;
		NullCheck(L_203);
		List_1_t576 ** L_204 = &(L_203->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_204, (2.0f), 0, 1, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_205 = V_0;
		NullCheck(L_205);
		List_1_t576 ** L_206 = &(L_205->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_206, (2.5f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_207 = V_0;
		NullCheck(L_207);
		List_1_t576 ** L_208 = &(L_207->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_208, (2.0f), 1, 3, 0, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_209 = V_0;
		NullCheck(L_209);
		List_1_t576 ** L_210 = &(L_209->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_210, (3.0f), 0, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_211 = V_0;
		NullCheck(L_211);
		List_1_t576 ** L_212 = &(L_211->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_212, (0.1f), 0, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_213 = V_0;
		NullCheck(L_213);
		List_1_t576 ** L_214 = &(L_213->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_214, (0.5f), 1, 0, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_215 = V_0;
		NullCheck(L_215);
		List_1_t576 ** L_216 = &(L_215->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_216, (2.0f), 0, 2, 2, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_217 = V_0;
		NullCheck(L_217);
		List_1_t576 ** L_218 = &(L_217->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_218, (1.0f), 1, 3, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_219 = V_0;
		NullCheck(L_219);
		List_1_t576 ** L_220 = &(L_219->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_220, (2.0f), 0, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_221 = V_0;
		NullCheck(L_221);
		List_1_t576 ** L_222 = &(L_221->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_222, (0.1f), 1, 0, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_223 = V_0;
		return L_223;
	}

IL_07f2:
	{
		int32_t L_224 = V_1;
		int32_t L_225 = ((int32_t)((int32_t)L_224-(int32_t)1));
		V_1 = L_225;
		if (L_225)
		{
			goto IL_0826;
		}
	}
	{
		LevelDescription_t582 * L_226 = V_0;
		NullCheck(L_226);
		L_226->___specialText_0 = (String_t*) &_stringLiteral1071;
		LevelDescription_t582 * L_227 = V_0;
		BoostConfig_t494 * L_228 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_228);
		Sprite_t510 * L_229 = BoostConfig_GetIntroImageForType_m2798(L_228, 2, /*hidden argument*/NULL);
		NullCheck(L_227);
		L_227->___sprite_2 = L_229;
		LevelDescription_t582 * L_230 = V_0;
		NullCheck(L_230);
		EnumAccumulator_1_t578 * L_231 = (L_230->___boostsAccumulator_6);
		NullCheck(L_231);
		EnumAccumulator_1_AddNew_m4258(L_231, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4258_MethodInfo_var);
		LevelDescription_t582 * L_232 = V_0;
		return L_232;
	}

IL_0826:
	{
		int32_t L_233 = V_1;
		int32_t L_234 = ((int32_t)((int32_t)L_233-(int32_t)1));
		V_1 = L_234;
		if (L_234)
		{
			goto IL_0855;
		}
	}
	{
		LevelDescription_t582 * L_235 = V_0;
		NullCheck(L_235);
		L_235->___specialText_0 = (String_t*) &_stringLiteral1069;
		LevelDescription_t582 * L_236 = V_0;
		Sprite_t510 * L_237 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_236);
		L_236->___sprite_2 = L_237;
		LevelDescription_t582 * L_238 = V_0;
		NullCheck(L_238);
		EnumAccumulator_1_t577 * L_239 = (L_238->___mouseHolesAccumulator_5);
		NullCheck(L_239);
		EnumAccumulator_1_AddNew_m4257(L_239, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_240 = V_0;
		return L_240;
	}

IL_0855:
	{
		int32_t L_241 = V_1;
		int32_t L_242 = ((int32_t)((int32_t)L_241-(int32_t)1));
		V_1 = L_242;
		if (L_242)
		{
			goto IL_09a9;
		}
	}
	{
		LevelDescription_t582 * L_243 = V_0;
		NullCheck(L_243);
		L_243->___specialText_0 = (String_t*) &_stringLiteral1072;
		LevelDescription_t582 * L_244 = V_0;
		MouseConfig_t596 * L_245 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_245);
		Sprite_t510 * L_246 = MouseConfig_GetIntroSpriteForMouseType_m3140(L_245, 3, /*hidden argument*/NULL);
		NullCheck(L_244);
		L_244->___sprite_2 = L_246;
		LevelDescription_t582 * L_247 = V_0;
		NullCheck(L_247);
		EnumAccumulator_1_t580 * L_248 = (L_247->___mouseTypesAccumulator_8);
		NullCheck(L_248);
		EnumAccumulator_1_AddNew_m4256(L_248, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4256_MethodInfo_var);
		LevelDescription_t582 * L_249 = V_0;
		NullCheck(L_249);
		EnumAccumulator_1_t580 * L_250 = (L_249->___mouseTypesAccumulator_8);
		NullCheck(L_250);
		EnumAccumulator_1_AddNew_m4256(L_250, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4256_MethodInfo_var);
		LevelDescription_t582 * L_251 = V_0;
		NullCheck(L_251);
		EnumAccumulator_1_t580 * L_252 = (L_251->___mouseTypesAccumulator_8);
		NullCheck(L_252);
		EnumAccumulator_1_AddNew_m4256(L_252, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4256_MethodInfo_var);
		LevelDescription_t582 * L_253 = V_0;
		NullCheck(L_253);
		List_1_t576 ** L_254 = &(L_253->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_254, (2.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_255 = V_0;
		NullCheck(L_255);
		List_1_t576 ** L_256 = &(L_255->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_256, (2.0f), 0, 3, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_257 = V_0;
		NullCheck(L_257);
		List_1_t576 ** L_258 = &(L_257->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_258, (3.0f), 1, 2, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_259 = V_0;
		NullCheck(L_259);
		List_1_t576 ** L_260 = &(L_259->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_260, (2.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_261 = V_0;
		NullCheck(L_261);
		List_1_t576 ** L_262 = &(L_261->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_262, (1.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_263 = V_0;
		NullCheck(L_263);
		List_1_t576 ** L_264 = &(L_263->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_264, (2.0f), 1, 2, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_265 = V_0;
		NullCheck(L_265);
		List_1_t576 ** L_266 = &(L_265->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_266, (1.0f), 1, 1, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_267 = V_0;
		NullCheck(L_267);
		List_1_t576 ** L_268 = &(L_267->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_268, (2.0f), 0, 0, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_269 = V_0;
		NullCheck(L_269);
		List_1_t576 ** L_270 = &(L_269->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_270, (1.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_271 = V_0;
		NullCheck(L_271);
		List_1_t576 ** L_272 = &(L_271->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_272, (2.0f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_273 = V_0;
		NullCheck(L_273);
		List_1_t576 ** L_274 = &(L_273->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_274, (1.0f), 0, 2, 3, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_275 = V_0;
		NullCheck(L_275);
		List_1_t576 ** L_276 = &(L_275->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_276, (2.0f), 1, 1, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_277 = V_0;
		return L_277;
	}

IL_09a9:
	{
		int32_t L_278 = V_1;
		int32_t L_279 = ((int32_t)((int32_t)L_278-(int32_t)1));
		V_1 = L_279;
		if (L_279)
		{
			goto IL_09dd;
		}
	}
	{
		LevelDescription_t582 * L_280 = V_0;
		NullCheck(L_280);
		L_280->___specialText_0 = (String_t*) &_stringLiteral1073;
		LevelDescription_t582 * L_281 = V_0;
		BoostConfig_t494 * L_282 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_282);
		Sprite_t510 * L_283 = BoostConfig_GetIntroImageForType_m2798(L_282, 3, /*hidden argument*/NULL);
		NullCheck(L_281);
		L_281->___sprite_2 = L_283;
		LevelDescription_t582 * L_284 = V_0;
		NullCheck(L_284);
		EnumAccumulator_1_t578 * L_285 = (L_284->___boostsAccumulator_6);
		NullCheck(L_285);
		EnumAccumulator_1_AddNew_m4258(L_285, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4258_MethodInfo_var);
		LevelDescription_t582 * L_286 = V_0;
		return L_286;
	}

IL_09dd:
	{
		int32_t L_287 = V_1;
		int32_t L_288 = ((int32_t)((int32_t)L_287-(int32_t)1));
		V_1 = L_288;
		if (L_288)
		{
			goto IL_0a26;
		}
	}
	{
		LevelDescription_t582 * L_289 = V_0;
		NullCheck(L_289);
		L_289->___specialText_0 = (String_t*) &_stringLiteral1074;
		LevelDescription_t582 * L_290 = V_0;
		Sprite_t510 * L_291 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_290);
		L_290->___sprite_2 = L_291;
		LevelDescription_t582 * L_292 = V_0;
		NullCheck(L_292);
		EnumAccumulator_1_t577 * L_293 = (L_292->___mouseHolesAccumulator_5);
		NullCheck(L_293);
		EnumAccumulator_1_AddNew_m4257(L_293, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_294 = V_0;
		NullCheck(L_294);
		EnumAccumulator_1_t581 * L_295 = (L_294->___waveTypesAccumulator_9);
		NullCheck(L_295);
		EnumAccumulator_1_AddNew_m4260(L_295, 0, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4260_MethodInfo_var);
		LevelDescription_t582 * L_296 = V_0;
		NullCheck(L_296);
		EnumAccumulator_1_t581 * L_297 = (L_296->___waveTypesAccumulator_9);
		NullCheck(L_297);
		EnumAccumulator_1_AddNew_m4260(L_297, 2, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4260_MethodInfo_var);
		LevelDescription_t582 * L_298 = V_0;
		return L_298;
	}

IL_0a26:
	{
		int32_t L_299 = V_1;
		int32_t L_300 = ((int32_t)((int32_t)L_299-(int32_t)1));
		V_1 = L_300;
		if (L_300)
		{
			goto IL_0bba;
		}
	}
	{
		LevelDescription_t582 * L_301 = V_0;
		NullCheck(L_301);
		L_301->___specialText_0 = (String_t*) &_stringLiteral1075;
		LevelDescription_t582 * L_302 = V_0;
		MouseConfig_t596 * L_303 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_303);
		Sprite_t510 * L_304 = MouseConfig_GetIntroSpriteForMouseWiggle_m3141(L_303, 1, /*hidden argument*/NULL);
		NullCheck(L_302);
		L_302->___sprite_2 = L_304;
		LevelDescription_t582 * L_305 = V_0;
		NullCheck(L_305);
		EnumAccumulator_1_t579 * L_306 = (L_305->___wigglesAccumulator_7);
		NullCheck(L_306);
		EnumAccumulator_1_AddNew_m4259(L_306, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4259_MethodInfo_var);
		LevelDescription_t582 * L_307 = V_0;
		NullCheck(L_307);
		List_1_t576 ** L_308 = &(L_307->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_308, (2.0f), 0, 2, 0, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_309 = V_0;
		NullCheck(L_309);
		List_1_t576 ** L_310 = &(L_309->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_310, (1.0f), 0, 0, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_311 = V_0;
		NullCheck(L_311);
		List_1_t576 ** L_312 = &(L_311->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_312, (2.0f), 1, 2, 0, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_313 = V_0;
		NullCheck(L_313);
		List_1_t576 ** L_314 = &(L_313->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_314, (3.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_315 = V_0;
		NullCheck(L_315);
		List_1_t576 ** L_316 = &(L_315->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_316, (2.0f), 1, 3, 2, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_317 = V_0;
		NullCheck(L_317);
		List_1_t576 ** L_318 = &(L_317->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_318, (1.0f), 1, 2, 2, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_319 = V_0;
		NullCheck(L_319);
		List_1_t576 ** L_320 = &(L_319->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_320, (0.1f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_321 = V_0;
		NullCheck(L_321);
		List_1_t576 ** L_322 = &(L_321->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_322, (0.1f), 0, 0, 1, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_323 = V_0;
		NullCheck(L_323);
		List_1_t576 ** L_324 = &(L_323->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_324, (1.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_325 = V_0;
		NullCheck(L_325);
		List_1_t576 ** L_326 = &(L_325->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_326, (2.0f), 1, 3, 3, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_327 = V_0;
		NullCheck(L_327);
		List_1_t576 ** L_328 = &(L_327->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_328, (1.0f), 0, 2, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_329 = V_0;
		NullCheck(L_329);
		List_1_t576 ** L_330 = &(L_329->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_330, (0.1f), 1, 0, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_331 = V_0;
		NullCheck(L_331);
		List_1_t576 ** L_332 = &(L_331->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_332, (2.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_333 = V_0;
		NullCheck(L_333);
		List_1_t576 ** L_334 = &(L_333->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_334, (2.0f), 0, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_335 = V_0;
		NullCheck(L_335);
		List_1_t576 ** L_336 = &(L_335->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_336, (2.0f), 0, 2, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_337 = V_0;
		NullCheck(L_337);
		List_1_t576 ** L_338 = &(L_337->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_338, (2.0f), 1, 1, 0, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_339 = V_0;
		return L_339;
	}

IL_0bba:
	{
		int32_t L_340 = V_1;
		int32_t L_341 = ((int32_t)((int32_t)L_340-(int32_t)1));
		V_1 = L_341;
		if (L_341)
		{
			goto IL_0d00;
		}
	}
	{
		LevelDescription_t582 * L_342 = V_0;
		NullCheck(L_342);
		L_342->___specialText_0 = (String_t*) &_stringLiteral1076;
		LevelDescription_t582 * L_343 = V_0;
		MouseConfig_t596 * L_344 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_344);
		Sprite_t510 * L_345 = MouseConfig_GetIntroSpriteForMouseType_m3140(L_344, 3, /*hidden argument*/NULL);
		NullCheck(L_343);
		L_343->___sprite_2 = L_345;
		LevelDescription_t582 * L_346 = V_0;
		NullCheck(L_346);
		List_1_t576 ** L_347 = &(L_346->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_347, (1.2f), 1, 1, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_348 = V_0;
		NullCheck(L_348);
		List_1_t576 ** L_349 = &(L_348->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_349, (1.4f), 1, 0, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_350 = V_0;
		NullCheck(L_350);
		List_1_t576 ** L_351 = &(L_350->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_351, (1.0f), 0, 3, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_352 = V_0;
		NullCheck(L_352);
		List_1_t576 ** L_353 = &(L_352->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_353, (1.1f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_354 = V_0;
		NullCheck(L_354);
		List_1_t576 ** L_355 = &(L_354->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_355, (1.5f), 1, 1, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_356 = V_0;
		NullCheck(L_356);
		List_1_t576 ** L_357 = &(L_356->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_357, (1.2f), 0, 2, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_358 = V_0;
		NullCheck(L_358);
		List_1_t576 ** L_359 = &(L_358->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_359, (1.3f), 0, 3, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_360 = V_0;
		NullCheck(L_360);
		List_1_t576 ** L_361 = &(L_360->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_361, (2.0f), 1, 0, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_362 = V_0;
		NullCheck(L_362);
		List_1_t576 ** L_363 = &(L_362->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_363, (0.1f), 0, 3, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_364 = V_0;
		NullCheck(L_364);
		List_1_t576 ** L_365 = &(L_364->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_365, (1.1f), 1, 3, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_366 = V_0;
		NullCheck(L_366);
		List_1_t576 ** L_367 = &(L_366->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_367, (0.1f), 0, 2, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_368 = V_0;
		NullCheck(L_368);
		List_1_t576 ** L_369 = &(L_368->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_369, (1.5f), 1, 1, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_370 = V_0;
		NullCheck(L_370);
		List_1_t576 ** L_371 = &(L_370->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_371, (2.2f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_372 = V_0;
		return L_372;
	}

IL_0d00:
	{
		int32_t L_373 = V_1;
		int32_t L_374 = ((int32_t)((int32_t)L_373-(int32_t)1));
		V_1 = L_374;
		if (L_374)
		{
			goto IL_0d47;
		}
	}
	{
		LevelDescription_t582 * L_375 = V_0;
		NullCheck(L_375);
		L_375->___specialText_0 = (String_t*) &_stringLiteral1077;
		LevelDescription_t582 * L_376 = V_0;
		Sprite_t510 * L_377 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_376);
		L_376->___sprite_2 = L_377;
		LevelDescription_t582 * L_378 = V_0;
		NullCheck(L_378);
		EnumAccumulator_1_t577 * L_379 = (L_378->___mouseHolesAccumulator_5);
		NullCheck(L_379);
		EnumAccumulator_1_AddNew_m4257(L_379, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_380 = V_0;
		NullCheck(L_380);
		EnumAccumulator_1_t581 * L_381 = (L_380->___waveTypesAccumulator_9);
		NullCheck(L_381);
		EnumAccumulator_1_AddNew_m4261(L_381, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_382 = V_0;
		NullCheck(L_382);
		EnumAccumulator_1_t581 * L_383 = (L_382->___waveTypesAccumulator_9);
		NullCheck(L_383);
		EnumAccumulator_1_AddNew_m4261(L_383, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_384 = V_0;
		return L_384;
	}

IL_0d47:
	{
		int32_t L_385 = V_1;
		int32_t L_386 = ((int32_t)((int32_t)L_385-(int32_t)1));
		V_1 = L_386;
		if (L_386)
		{
			goto IL_0e83;
		}
	}
	{
		LevelDescription_t582 * L_387 = V_0;
		NullCheck(L_387);
		L_387->___specialText_0 = (String_t*) &_stringLiteral1078;
		LevelDescription_t582 * L_388 = V_0;
		MouseConfig_t596 * L_389 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_389);
		Sprite_t510 * L_390 = MouseConfig_GetIntroSpriteForMouseWiggle_m3141(L_389, 3, /*hidden argument*/NULL);
		NullCheck(L_388);
		L_388->___sprite_2 = L_390;
		LevelDescription_t582 * L_391 = V_0;
		NullCheck(L_391);
		EnumAccumulator_1_t579 * L_392 = (L_391->___wigglesAccumulator_7);
		NullCheck(L_392);
		EnumAccumulator_1_AddNew_m4259(L_392, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4259_MethodInfo_var);
		LevelDescription_t582 * L_393 = V_0;
		NullCheck(L_393);
		List_1_t576 ** L_394 = &(L_393->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_394, (1.3f), 1, 1, 1, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_395 = V_0;
		NullCheck(L_395);
		List_1_t576 ** L_396 = &(L_395->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_396, (0.1f), 0, 2, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_397 = V_0;
		NullCheck(L_397);
		List_1_t576 ** L_398 = &(L_397->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_398, (2.0f), 1, 0, 1, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_399 = V_0;
		NullCheck(L_399);
		List_1_t576 ** L_400 = &(L_399->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_400, (0.1f), 0, 3, 3, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_401 = V_0;
		NullCheck(L_401);
		List_1_t576 ** L_402 = &(L_401->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_402, (1.1f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_403 = V_0;
		NullCheck(L_403);
		List_1_t576 ** L_404 = &(L_403->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_404, (1.4f), 1, 0, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_405 = V_0;
		NullCheck(L_405);
		List_1_t576 ** L_406 = &(L_405->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_406, (1.0f), 1, 3, 0, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_407 = V_0;
		NullCheck(L_407);
		List_1_t576 ** L_408 = &(L_407->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_408, (1.1f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_409 = V_0;
		NullCheck(L_409);
		List_1_t576 ** L_410 = &(L_409->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_410, (1.2f), 1, 1, 3, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_411 = V_0;
		NullCheck(L_411);
		List_1_t576 ** L_412 = &(L_411->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_412, (1.5f), 0, 1, 2, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_413 = V_0;
		NullCheck(L_413);
		List_1_t576 ** L_414 = &(L_413->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_414, (1.2f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t582 * L_415 = V_0;
		NullCheck(L_415);
		List_1_t576 ** L_416 = &(L_415->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3102(__this, L_416, (1.5f), 1, 1, 2, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t582 * L_417 = V_0;
		return L_417;
	}

IL_0e83:
	{
		int32_t L_418 = V_1;
		int32_t L_419 = ((int32_t)((int32_t)L_418-(int32_t)1));
		V_1 = L_419;
		if (L_419)
		{
			goto IL_0e8f;
		}
	}
	{
		LevelDescription_t582 * L_420 = V_0;
		return L_420;
	}

IL_0e8f:
	{
		int32_t L_421 = V_1;
		int32_t L_422 = ((int32_t)((int32_t)L_421-(int32_t)1));
		V_1 = L_422;
		if (L_422)
		{
			goto IL_0ebe;
		}
	}
	{
		LevelDescription_t582 * L_423 = V_0;
		NullCheck(L_423);
		L_423->___specialText_0 = (String_t*) &_stringLiteral1079;
		LevelDescription_t582 * L_424 = V_0;
		Sprite_t510 * L_425 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_424);
		L_424->___sprite_2 = L_425;
		LevelDescription_t582 * L_426 = V_0;
		NullCheck(L_426);
		EnumAccumulator_1_t577 * L_427 = (L_426->___mouseHolesAccumulator_5);
		NullCheck(L_427);
		EnumAccumulator_1_AddNew_m4257(L_427, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_428 = V_0;
		return L_428;
	}

IL_0ebe:
	{
		int32_t L_429 = V_1;
		int32_t L_430 = ((int32_t)((int32_t)L_429-(int32_t)1));
		V_1 = L_430;
		if (L_430)
		{
			goto IL_0eee;
		}
	}
	{
		LevelDescription_t582 * L_431 = V_0;
		NullCheck(L_431);
		EnumAccumulator_1_t581 * L_432 = (L_431->___waveTypesAccumulator_9);
		NullCheck(L_432);
		EnumAccumulator_1_AddNew_m4261(L_432, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_433 = V_0;
		NullCheck(L_433);
		EnumAccumulator_1_t581 * L_434 = (L_433->___waveTypesAccumulator_9);
		NullCheck(L_434);
		EnumAccumulator_1_AddNew_m4261(L_434, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_435 = V_0;
		NullCheck(L_435);
		EnumAccumulator_1_t581 * L_436 = (L_435->___waveTypesAccumulator_9);
		NullCheck(L_436);
		EnumAccumulator_1_AddNew_m4261(L_436, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_437 = V_0;
		return L_437;
	}

IL_0eee:
	{
		int32_t L_438 = V_1;
		int32_t L_439 = ((int32_t)((int32_t)L_438-(int32_t)1));
		V_1 = L_439;
		if (L_439)
		{
			goto IL_0efa;
		}
	}
	{
		LevelDescription_t582 * L_440 = V_0;
		return L_440;
	}

IL_0efa:
	{
		int32_t L_441 = V_1;
		int32_t L_442 = ((int32_t)((int32_t)L_441-(int32_t)1));
		V_1 = L_442;
		if (L_442)
		{
			goto IL_0f29;
		}
	}
	{
		LevelDescription_t582 * L_443 = V_0;
		NullCheck(L_443);
		L_443->___specialText_0 = (String_t*) &_stringLiteral1079;
		LevelDescription_t582 * L_444 = V_0;
		Sprite_t510 * L_445 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_444);
		L_444->___sprite_2 = L_445;
		LevelDescription_t582 * L_446 = V_0;
		NullCheck(L_446);
		EnumAccumulator_1_t577 * L_447 = (L_446->___mouseHolesAccumulator_5);
		NullCheck(L_447);
		EnumAccumulator_1_AddNew_m4257(L_447, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_448 = V_0;
		return L_448;
	}

IL_0f29:
	{
		int32_t L_449 = V_1;
		int32_t L_450 = ((int32_t)((int32_t)L_449-(int32_t)1));
		V_1 = L_450;
		if (L_450)
		{
			goto IL_0f41;
		}
	}
	{
		LevelDescription_t582 * L_451 = V_0;
		NullCheck(L_451);
		EnumAccumulator_1_t581 * L_452 = (L_451->___waveTypesAccumulator_9);
		NullCheck(L_452);
		EnumAccumulator_1_AddNew_m4261(L_452, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_453 = V_0;
		return L_453;
	}

IL_0f41:
	{
		int32_t L_454 = V_1;
		int32_t L_455 = ((int32_t)((int32_t)L_454-(int32_t)1));
		V_1 = L_455;
		if (L_455)
		{
			goto IL_0f4d;
		}
	}
	{
		LevelDescription_t582 * L_456 = V_0;
		return L_456;
	}

IL_0f4d:
	{
		int32_t L_457 = V_1;
		int32_t L_458 = ((int32_t)((int32_t)L_457-(int32_t)1));
		V_1 = L_458;
		if (L_458)
		{
			goto IL_0f7c;
		}
	}
	{
		LevelDescription_t582 * L_459 = V_0;
		NullCheck(L_459);
		L_459->___specialText_0 = (String_t*) &_stringLiteral1079;
		LevelDescription_t582 * L_460 = V_0;
		Sprite_t510 * L_461 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_460);
		L_460->___sprite_2 = L_461;
		LevelDescription_t582 * L_462 = V_0;
		NullCheck(L_462);
		EnumAccumulator_1_t577 * L_463 = (L_462->___mouseHolesAccumulator_5);
		NullCheck(L_463);
		EnumAccumulator_1_AddNew_m4257(L_463, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_464 = V_0;
		return L_464;
	}

IL_0f7c:
	{
		int32_t L_465 = V_1;
		int32_t L_466 = ((int32_t)((int32_t)L_465-(int32_t)1));
		V_1 = L_466;
		if (L_466)
		{
			goto IL_0fac;
		}
	}
	{
		LevelDescription_t582 * L_467 = V_0;
		NullCheck(L_467);
		EnumAccumulator_1_t581 * L_468 = (L_467->___waveTypesAccumulator_9);
		NullCheck(L_468);
		EnumAccumulator_1_AddNew_m4261(L_468, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_469 = V_0;
		NullCheck(L_469);
		EnumAccumulator_1_t581 * L_470 = (L_469->___waveTypesAccumulator_9);
		NullCheck(L_470);
		EnumAccumulator_1_AddNew_m4261(L_470, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_471 = V_0;
		NullCheck(L_471);
		EnumAccumulator_1_t581 * L_472 = (L_471->___waveTypesAccumulator_9);
		NullCheck(L_472);
		EnumAccumulator_1_AddNew_m4261(L_472, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_473 = V_0;
		return L_473;
	}

IL_0fac:
	{
		int32_t L_474 = V_1;
		int32_t L_475 = ((int32_t)((int32_t)L_474-(int32_t)1));
		V_1 = L_475;
		if (L_475)
		{
			goto IL_0fb8;
		}
	}
	{
		LevelDescription_t582 * L_476 = V_0;
		return L_476;
	}

IL_0fb8:
	{
		int32_t L_477 = V_1;
		int32_t L_478 = ((int32_t)((int32_t)L_477-(int32_t)1));
		V_1 = L_478;
		if (L_478)
		{
			goto IL_0fe7;
		}
	}
	{
		LevelDescription_t582 * L_479 = V_0;
		NullCheck(L_479);
		L_479->___specialText_0 = (String_t*) &_stringLiteral1079;
		LevelDescription_t582 * L_480 = V_0;
		Sprite_t510 * L_481 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_480);
		L_480->___sprite_2 = L_481;
		LevelDescription_t582 * L_482 = V_0;
		NullCheck(L_482);
		EnumAccumulator_1_t577 * L_483 = (L_482->___mouseHolesAccumulator_5);
		NullCheck(L_483);
		EnumAccumulator_1_AddNew_m4257(L_483, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_484 = V_0;
		return L_484;
	}

IL_0fe7:
	{
		int32_t L_485 = V_1;
		int32_t L_486 = ((int32_t)((int32_t)L_485-(int32_t)1));
		V_1 = L_486;
		if (L_486)
		{
			goto IL_0fff;
		}
	}
	{
		LevelDescription_t582 * L_487 = V_0;
		NullCheck(L_487);
		EnumAccumulator_1_t581 * L_488 = (L_487->___waveTypesAccumulator_9);
		NullCheck(L_488);
		EnumAccumulator_1_AddNew_m4261(L_488, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_489 = V_0;
		return L_489;
	}

IL_0fff:
	{
		int32_t L_490 = V_1;
		int32_t L_491 = ((int32_t)((int32_t)L_490-(int32_t)1));
		V_1 = L_491;
		if (L_491)
		{
			goto IL_100b;
		}
	}
	{
		LevelDescription_t582 * L_492 = V_0;
		return L_492;
	}

IL_100b:
	{
		int32_t L_493 = V_1;
		int32_t L_494 = ((int32_t)((int32_t)L_493-(int32_t)1));
		V_1 = L_494;
		if (L_494)
		{
			goto IL_103a;
		}
	}
	{
		LevelDescription_t582 * L_495 = V_0;
		NullCheck(L_495);
		L_495->___specialText_0 = (String_t*) &_stringLiteral1079;
		LevelDescription_t582 * L_496 = V_0;
		Sprite_t510 * L_497 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_496);
		L_496->___sprite_2 = L_497;
		LevelDescription_t582 * L_498 = V_0;
		NullCheck(L_498);
		EnumAccumulator_1_t577 * L_499 = (L_498->___mouseHolesAccumulator_5);
		NullCheck(L_499);
		EnumAccumulator_1_AddNew_m4257(L_499, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_500 = V_0;
		return L_500;
	}

IL_103a:
	{
		int32_t L_501 = V_1;
		int32_t L_502 = ((int32_t)((int32_t)L_501-(int32_t)1));
		V_1 = L_502;
		if (L_502)
		{
			goto IL_106a;
		}
	}
	{
		LevelDescription_t582 * L_503 = V_0;
		NullCheck(L_503);
		EnumAccumulator_1_t581 * L_504 = (L_503->___waveTypesAccumulator_9);
		NullCheck(L_504);
		EnumAccumulator_1_AddNew_m4261(L_504, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_505 = V_0;
		NullCheck(L_505);
		EnumAccumulator_1_t581 * L_506 = (L_505->___waveTypesAccumulator_9);
		NullCheck(L_506);
		EnumAccumulator_1_AddNew_m4261(L_506, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_507 = V_0;
		NullCheck(L_507);
		EnumAccumulator_1_t581 * L_508 = (L_507->___waveTypesAccumulator_9);
		NullCheck(L_508);
		EnumAccumulator_1_AddNew_m4261(L_508, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4261_MethodInfo_var);
		LevelDescription_t582 * L_509 = V_0;
		return L_509;
	}

IL_106a:
	{
		int32_t L_510 = V_1;
		int32_t L_511 = ((int32_t)((int32_t)L_510-(int32_t)1));
		V_1 = L_511;
		if (L_511)
		{
			goto IL_1076;
		}
	}
	{
		LevelDescription_t582 * L_512 = V_0;
		return L_512;
	}

IL_1076:
	{
		int32_t L_513 = V_1;
		int32_t L_514 = ((int32_t)((int32_t)L_513-(int32_t)1));
		V_1 = L_514;
		if (L_514)
		{
			goto IL_10a5;
		}
	}
	{
		LevelDescription_t582 * L_515 = V_0;
		NullCheck(L_515);
		L_515->___specialText_0 = (String_t*) &_stringLiteral1079;
		LevelDescription_t582 * L_516 = V_0;
		Sprite_t510 * L_517 = (__this->___mouseHoleIntroSprite_23);
		NullCheck(L_516);
		L_516->___sprite_2 = L_517;
		LevelDescription_t582 * L_518 = V_0;
		NullCheck(L_518);
		EnumAccumulator_1_t577 * L_519 = (L_518->___mouseHolesAccumulator_5);
		NullCheck(L_519);
		EnumAccumulator_1_AddNew_m4257(L_519, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4257_MethodInfo_var);
		LevelDescription_t582 * L_520 = V_0;
		return L_520;
	}

IL_10a5:
	{
		return (LevelDescription_t582 *)NULL;
	}
}
// LevelDescription LevelConfig::GenerateRandomLevelDescription(System.Int32)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* LevelDescription_t582_il2cpp_TypeInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4247_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4249_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4248_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4250_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4251_MethodInfo_var;
extern "C" LevelDescription_t582 * LevelConfig_GenerateRandomLevelDescription_m3110 (LevelConfig_t588 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		LevelDescription_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		EnumAccumulator_1_DeriveFrom_m4247_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484170);
		EnumAccumulator_1_DeriveFrom_m4249_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484172);
		EnumAccumulator_1_DeriveFrom_m4248_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484171);
		EnumAccumulator_1_DeriveFrom_m4250_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484173);
		EnumAccumulator_1_DeriveFrom_m4251_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484174);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t582 * V_0 = {0};
	LevelDescription_t582 * V_1 = {0};
	{
		Dictionary_2_t587 * L_0 = (__this->___levelDescMap_21);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t57 * L_2 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_2, (String_t*) &_stringLiteral1080, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		V_0 = (LevelDescription_t582 *)NULL;
		int32_t L_3 = ___gameLevel;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = ___gameLevel;
		LevelDescription_t582 * L_5 = LevelConfig_GetLevelDescription_m3104(__this, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_003e;
	}

IL_0033:
	{
		Exception_t57 * L_6 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_6, (String_t*) &_stringLiteral1081, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003e:
	{
		LevelDescription_t582 * L_7 = (LevelDescription_t582 *)il2cpp_codegen_object_new (LevelDescription_t582_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m3092(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		LevelDescription_t582 * L_8 = V_1;
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		L_8->___gameLevel_10 = L_9;
		LevelDescription_t582 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_00a6;
		}
	}
	{
		LevelDescription_t582 * L_11 = V_1;
		NullCheck(L_11);
		EnumAccumulator_1_t578 * L_12 = (L_11->___boostsAccumulator_6);
		LevelDescription_t582 * L_13 = V_0;
		NullCheck(L_13);
		EnumAccumulator_1_t578 * L_14 = (L_13->___boostsAccumulator_6);
		NullCheck(L_12);
		EnumAccumulator_1_DeriveFrom_m4247(L_12, L_14, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4247_MethodInfo_var);
		LevelDescription_t582 * L_15 = V_1;
		NullCheck(L_15);
		EnumAccumulator_1_t579 * L_16 = (L_15->___wigglesAccumulator_7);
		LevelDescription_t582 * L_17 = V_0;
		NullCheck(L_17);
		EnumAccumulator_1_t579 * L_18 = (L_17->___wigglesAccumulator_7);
		NullCheck(L_16);
		EnumAccumulator_1_DeriveFrom_m4249(L_16, L_18, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4249_MethodInfo_var);
		LevelDescription_t582 * L_19 = V_1;
		NullCheck(L_19);
		EnumAccumulator_1_t577 * L_20 = (L_19->___mouseHolesAccumulator_5);
		LevelDescription_t582 * L_21 = V_0;
		NullCheck(L_21);
		EnumAccumulator_1_t577 * L_22 = (L_21->___mouseHolesAccumulator_5);
		NullCheck(L_20);
		EnumAccumulator_1_DeriveFrom_m4248(L_20, L_22, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4248_MethodInfo_var);
		LevelDescription_t582 * L_23 = V_1;
		NullCheck(L_23);
		EnumAccumulator_1_t580 * L_24 = (L_23->___mouseTypesAccumulator_8);
		LevelDescription_t582 * L_25 = V_0;
		NullCheck(L_25);
		EnumAccumulator_1_t580 * L_26 = (L_25->___mouseTypesAccumulator_8);
		NullCheck(L_24);
		EnumAccumulator_1_DeriveFrom_m4250(L_24, L_26, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4250_MethodInfo_var);
		LevelDescription_t582 * L_27 = V_1;
		NullCheck(L_27);
		EnumAccumulator_1_t581 * L_28 = (L_27->___waveTypesAccumulator_9);
		LevelDescription_t582 * L_29 = V_0;
		NullCheck(L_29);
		EnumAccumulator_1_t581 * L_30 = (L_29->___waveTypesAccumulator_9);
		NullCheck(L_28);
		EnumAccumulator_1_DeriveFrom_m4251(L_28, L_30, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4251_MethodInfo_var);
	}

IL_00a6:
	{
		LevelDescription_t582 * L_31 = V_1;
		LevelDescription_t582 * L_32 = V_1;
		List_1_t576 * L_33 = LevelConfig_GenerateRandomMiceForLevel_m3112(__this, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->___explicitMouseDescs_1 = L_33;
		LevelDescription_t582 * L_34 = V_1;
		Sprite_t510 * L_35 = (__this->___angusIntroSprite_24);
		NullCheck(L_34);
		L_34->___sprite_2 = L_35;
		LevelDescription_t582 * L_36 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m3111(__this, L_36, /*hidden argument*/NULL);
		LevelDescription_t582 * L_37 = V_1;
		return L_37;
	}
}
// System.Void LevelConfig::GenerateRandomWigglesForLevel(LevelDescription)
extern TypeInfo* QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4263_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var;
extern "C" void LevelConfig_GenerateRandomWigglesForLevel_m3111 (LevelConfig_t588 * __this, LevelDescription_t582 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		EnumAccumulator_1_GetDistribution_m4263_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484185);
		QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t798 * V_0 = {0};
	QuasiRandomGenerator_1_t585 * V_1 = {0};
	int32_t V_2 = 0;
	ExplicitMouseDesc_t536 * V_3 = {0};
	int32_t V_4 = {0};
	{
		LevelDescription_t582 * L_0 = ___ld;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___gameLevel_10);
		Random_set_seed_m4262(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LevelDescription_t582 * L_2 = ___ld;
		NullCheck(L_2);
		EnumAccumulator_1_t579 * L_3 = (L_2->___wigglesAccumulator_7);
		NullCheck(L_3);
		List_1_t798 * L_4 = EnumAccumulator_1_GetDistribution_m4263(L_3, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4263_MethodInfo_var);
		V_0 = L_4;
		List_1_t798 * L_5 = V_0;
		QuasiRandomGenerator_1_t585 * L_6 = (QuasiRandomGenerator_1_t585 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4264(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0046;
	}

IL_0025:
	{
		LevelDescription_t582 * L_7 = ___ld;
		NullCheck(L_7);
		List_1_t576 * L_8 = (L_7->___explicitMouseDescs_1);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		ExplicitMouseDesc_t536 * L_10 = (ExplicitMouseDesc_t536 *)VirtFuncInvoker1< ExplicitMouseDesc_t536 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_8, L_9);
		V_3 = L_10;
		QuasiRandomGenerator_1_t585 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4265(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_4 = L_12;
		ExplicitMouseDesc_t536 * L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		ExplicitMouseDesc_AddWiggle_m2900(L_13, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_16 = V_2;
		LevelDescription_t582 * L_17 = ___ld;
		NullCheck(L_17);
		List_1_t576 * L_18 = (L_17->___explicitMouseDescs_1);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_18);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateRandomMiceForLevel(LevelDescription)
extern TypeInfo* List_1_t576_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4240_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4266_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4267_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m4268_MethodInfo_var;
extern "C" List_1_t576 * LevelConfig_GenerateRandomMiceForLevel_m3112 (LevelConfig_t588 * __this, LevelDescription_t582 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		List_1__ctor_m4240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		EnumAccumulator_1_GetDistribution_m4266_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484188);
		QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		EnumAccumulator_1_GetDistribution_m4267_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484189);
		QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		List_1_AddRange_m4268_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484190);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t576 * V_0 = {0};
	List_1_t798 * V_1 = {0};
	QuasiRandomGenerator_1_t585 * V_2 = {0};
	List_1_t798 * V_3 = {0};
	QuasiRandomGenerator_1_t585 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = {0};
	{
		List_1_t576 * L_0 = (List_1_t576 *)il2cpp_codegen_object_new (List_1_t576_il2cpp_TypeInfo_var);
		List_1__ctor_m4240(L_0, /*hidden argument*/List_1__ctor_m4240_MethodInfo_var);
		V_0 = L_0;
		LevelDescription_t582 * L_1 = ___ld;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___gameLevel_10);
		Random_set_seed_m4262(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		LevelDescription_t582 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t581 * L_4 = (L_3->___waveTypesAccumulator_9);
		NullCheck(L_4);
		List_1_t798 * L_5 = EnumAccumulator_1_GetDistribution_m4266(L_4, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4266_MethodInfo_var);
		V_1 = L_5;
		List_1_t798 * L_6 = V_1;
		QuasiRandomGenerator_1_t585 * L_7 = (QuasiRandomGenerator_1_t585 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4264(L_7, L_6, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var);
		V_2 = L_7;
		LevelDescription_t582 * L_8 = ___ld;
		NullCheck(L_8);
		EnumAccumulator_1_t580 * L_9 = (L_8->___mouseTypesAccumulator_8);
		NullCheck(L_9);
		List_1_t798 * L_10 = EnumAccumulator_1_GetDistribution_m4267(L_9, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4267_MethodInfo_var);
		V_3 = L_10;
		List_1_t798 * L_11 = V_3;
		QuasiRandomGenerator_1_t585 * L_12 = (QuasiRandomGenerator_1_t585 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4264(L_12, L_11, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var);
		V_4 = L_12;
		V_5 = 0;
		goto IL_005f;
	}

IL_0040:
	{
		QuasiRandomGenerator_1_t585 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = QuasiRandomGenerator_1_GetNextValue_m4265(L_13, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_6 = L_14;
		List_1_t576 * L_15 = V_0;
		int32_t L_16 = V_6;
		QuasiRandomGenerator_1_t585 * L_17 = V_4;
		LevelDescription_t582 * L_18 = ___ld;
		List_1_t576 * L_19 = LevelConfig_GenerateWaveForLevel_m3113(__this, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_AddRange_m4268(L_15, L_19, /*hidden argument*/List_1_AddRange_m4268_MethodInfo_var);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_5;
		LevelDescription_t582 * L_22 = ___ld;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___gameLevel_10);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)L_23/(int32_t)2)))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_t576 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelDescription/WaveType,QuasiRandomGenerator`1<System.Int32>,LevelDescription)
extern "C" List_1_t576 * LevelConfig_GenerateWaveForLevel_m3113 (LevelConfig_t588 * __this, int32_t ___wt, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, LevelDescription_t582 * ___ld, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___wt;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0029;
	}

IL_0019:
	{
		QuasiRandomGenerator_1_t585 * L_2 = ___mouseTypeGenerator;
		List_1_t576 * L_3 = LevelConfig_GenerateDistributedWave_m3114(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t585 * L_4 = ___mouseTypeGenerator;
		List_1_t576 * L_5 = LevelConfig_GenerateParadeWave_m3115(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0029:
	{
		QuasiRandomGenerator_1_t585 * L_6 = ___mouseTypeGenerator;
		List_1_t576 * L_7 = LevelConfig_GenerateSpoutWave_m3116(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t576_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4240_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4269_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var;
extern "C" List_1_t576 * LevelConfig_GenerateDistributedWave_m3114 (LevelConfig_t588 * __this, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		QuasiRandomGenerator_1_GetNextValue_m4269_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484191);
		QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484192);
		QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t576 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = {0};
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t576 * L_0 = (List_1_t576 *)il2cpp_codegen_object_new (List_1_t576_il2cpp_TypeInfo_var);
		List_1__ctor_m4240(L_0, /*hidden argument*/List_1__ctor_m4240_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minDistributedMice_8);
		int32_t L_2 = (__this->___maxDistributedMice_9);
		int32_t L_3 = Random_Range_m3780(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0081;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t586 * L_4 = (__this->___distributedPauseGenerator_20);
		NullCheck(L_4);
		float L_5 = QuasiRandomGenerator_1_GetNextValue_m4269(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4269_MethodInfo_var);
		V_3 = L_5;
		int32_t L_6 = Random_Range_m3780(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_4 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t584 * L_7 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4270(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t585 * L_9 = ___mouseTypeGenerator;
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4265(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t585 * L_11 = (__this->___trackGenerator_19);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4265(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_7 = L_12;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)((int32_t)L_14-(int32_t)1))))))
		{
			goto IL_006b;
		}
	}
	{
		float L_15 = (__this->___distributedEndPause_11);
		V_3 = L_15;
	}

IL_006b:
	{
		float L_16 = V_3;
		bool L_17 = V_4;
		int32_t L_18 = V_5;
		int32_t L_19 = V_6;
		int32_t L_20 = V_7;
		LevelConfig_AddExplicitMouseDesc_m3102(__this, (&V_0), L_16, L_17, L_18, L_19, L_20, 0, /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0081:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0021;
		}
	}
	{
		List_1_t576 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t576_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4240_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_RefreshValues_m4271_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var;
extern "C" List_1_t576 * LevelConfig_GenerateParadeWave_m3115 (LevelConfig_t588 * __this, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		QuasiRandomGenerator_1_RefreshValues_m4271_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484193);
		QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484192);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t576 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = {0};
	{
		List_1_t576 * L_0 = (List_1_t576 *)il2cpp_codegen_object_new (List_1_t576_il2cpp_TypeInfo_var);
		List_1__ctor_m4240(L_0, /*hidden argument*/List_1__ctor_m4240_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = Random_Range_m3780(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_1 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t584 * L_2 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_2);
		QuasiRandomGenerator_1_RefreshValues_m4271(L_2, /*hidden argument*/QuasiRandomGenerator_1_RefreshValues_m4271_MethodInfo_var);
		int32_t L_3 = (__this->___minParadeMice_5);
		int32_t L_4 = (__this->___maxParadeMice_6);
		int32_t L_5 = Random_Range_m3780(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_008d;
	}

IL_0037:
	{
		float L_6 = (__this->___paradePause_4);
		V_4 = L_6;
		QuasiRandomGenerator_1_t585 * L_7 = ___mouseTypeGenerator;
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4265(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t585 * L_9 = (__this->___trackGenerator_19);
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4265(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t584 * L_11 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4270(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var);
		V_7 = L_12;
		List_1_t576 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_13);
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)((int32_t)L_15-(int32_t)1))))))
		{
			goto IL_0077;
		}
	}
	{
		float L_16 = (__this->___paradeEndPause_7);
		V_4 = L_16;
	}

IL_0077:
	{
		float L_17 = V_4;
		bool L_18 = V_1;
		int32_t L_19 = V_7;
		int32_t L_20 = V_5;
		int32_t L_21 = V_6;
		LevelConfig_AddExplicitMouseDesc_m3102(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_008d:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t576 * L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t576_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4240_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var;
extern "C" List_1_t576 * LevelConfig_GenerateSpoutWave_m3116 (LevelConfig_t588 * __this, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484192);
		QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t576 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t576 * L_0 = (List_1_t576 *)il2cpp_codegen_object_new (List_1_t576_il2cpp_TypeInfo_var);
		List_1__ctor_m4240(L_0, /*hidden argument*/List_1__ctor_m4240_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minSpoutMice_15);
		int32_t L_2 = (__this->___maxSpoutMice_16);
		int32_t L_3 = Random_Range_m3780(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		QuasiRandomGenerator_1_t584 * L_4 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_4);
		int32_t L_5 = QuasiRandomGenerator_1_GetNextValue_m4270(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4270_MethodInfo_var);
		V_2 = L_5;
		int32_t L_6 = Random_Range_m3780(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		V_4 = 0;
		goto IL_008f;
	}

IL_0039:
	{
		float L_7 = (__this->___minSpoutPause_12);
		float L_8 = (__this->___maxSpoutPause_13);
		float L_9 = Random_Range_m4209(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		QuasiRandomGenerator_1_t585 * L_10 = ___mouseTypeGenerator;
		NullCheck(L_10);
		int32_t L_11 = QuasiRandomGenerator_1_GetNextValue_m4265(L_10, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_6 = L_11;
		QuasiRandomGenerator_1_t585 * L_12 = (__this->___trackGenerator_19);
		NullCheck(L_12);
		int32_t L_13 = QuasiRandomGenerator_1_GetNextValue_m4265(L_12, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4265_MethodInfo_var);
		V_7 = L_13;
		int32_t L_14 = V_4;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)((int32_t)L_15-(int32_t)1))))))
		{
			goto IL_0073;
		}
	}
	{
		float L_16 = (__this->___spoutEndPause_14);
		V_5 = L_16;
	}

IL_0073:
	{
		float L_17 = V_5;
		bool L_18 = V_3;
		int32_t L_19 = V_2;
		int32_t L_20 = V_6;
		int32_t L_21 = V_7;
		LevelConfig_AddExplicitMouseDesc_m3102(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
		bool L_22 = V_3;
		V_3 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008f:
	{
		int32_t L_24 = V_4;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		List_1_t576 * L_26 = V_0;
		return L_26;
	}
}
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern TypeInfo* List_1_t799_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t584_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t798_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t586_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4272_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4273_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4274_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4275_MethodInfo_var;
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m3117 (LevelConfig_t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		QuasiRandomGenerator_1_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(539);
		List_1_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		QuasiRandomGenerator_1_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		List_1__ctor_m4272_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484194);
		QuasiRandomGenerator_1__ctor_m4273_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484195);
		List_1__ctor_m4274_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484196);
		QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		QuasiRandomGenerator_1__ctor_m4275_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484197);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t799 * V_0 = {0};
	List_1_t798 * V_1 = {0};
	int32_t V_2 = 0;
	{
		List_1_t799 * L_0 = (List_1_t799 *)il2cpp_codegen_object_new (List_1_t799_il2cpp_TypeInfo_var);
		List_1__ctor_m4272(L_0, /*hidden argument*/List_1__ctor_m4272_MethodInfo_var);
		V_0 = L_0;
		List_1_t799 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_1, 1);
		List_1_t799 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_2, 0);
		List_1_t799 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_3, 3);
		List_1_t799 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_4, 2);
		List_1_t799 * L_5 = V_0;
		QuasiRandomGenerator_1_t584 * L_6 = (QuasiRandomGenerator_1_t584 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t584_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4273(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4273_MethodInfo_var);
		__this->___mouseHoleGenerator_18 = L_6;
		QuasiRandomGenerator_1_t584 * L_7 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_7);
		L_7->___refreshTrigger_2 = 1;
		List_1_t798 * L_8 = (List_1_t798 *)il2cpp_codegen_object_new (List_1_t798_il2cpp_TypeInfo_var);
		List_1__ctor_m4274(L_8, /*hidden argument*/List_1__ctor_m4274_MethodInfo_var);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0052;
	}

IL_0047:
	{
		List_1_t798 * L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_9, L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_0047;
		}
	}
	{
		List_1_t798 * L_13 = V_1;
		QuasiRandomGenerator_1_t585 * L_14 = (QuasiRandomGenerator_1_t585 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t585_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4264(L_14, L_13, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4264_MethodInfo_var);
		__this->___trackGenerator_19 = L_14;
		SingleU5BU5D_t583* L_15 = (__this->___distributedPauseDist_10);
		QuasiRandomGenerator_1_t586 * L_16 = (QuasiRandomGenerator_1_t586 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t586_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4275(L_16, L_15, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4275_MethodInfo_var);
		__this->___distributedPauseGenerator_20 = L_16;
		return;
	}
}
// LevelEndTitlesLayout
#include "AssemblyU2DCSharp_LevelEndTitlesLayout.h"
#ifndef _MSC_VER
#else
#endif
// LevelEndTitlesLayout
#include "AssemblyU2DCSharp_LevelEndTitlesLayoutMethodDeclarations.h"

// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"


// System.Void LevelEndTitlesLayout::.ctor()
extern "C" void LevelEndTitlesLayout__ctor_m3118 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::Awake()
extern "C" void LevelEndTitlesLayout_Awake_m3119 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_6 = 0;
		__this->___waveDirty_8 = 0;
		return;
	}
}
// System.Void LevelEndTitlesLayout::Start()
extern "C" void LevelEndTitlesLayout_Start_m3120 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_RegisterForEvents_m3123(__this, /*hidden argument*/NULL);
		__this->___started_9 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnEnable()
extern "C" void LevelEndTitlesLayout_OnEnable_m3121 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_8 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnDestroy()
extern "C" void LevelEndTitlesLayout_OnDestroy_m3122 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_UnregisterForEvents_m3124(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m3127_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_RegisterForEvents_m3123 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		LevelEndTitlesLayout_OnGameLevelChanged_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t557 * L_0 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m3127_MethodInfo_var };
		GameLevelChangedEventHandler_t556 * L_2 = (GameLevelChangedEventHandler_t556 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2970(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_add_GameLevelChanged_m2975(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_6 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m3127_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_UnregisterForEvents_m3124 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		LevelEndTitlesLayout_OnGameLevelChanged_m3127_MethodInfo_var = il2cpp_codegen_method_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_6);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GameLevelState_t557 * L_1 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m3127_MethodInfo_var };
		GameLevelChangedEventHandler_t556 * L_3 = (GameLevelChangedEventHandler_t556 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2970(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m2976(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::Update()
extern "C" void LevelEndTitlesLayout_Update_m3125 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___waveDirty_8);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		LevelEndTitlesLayout_SetWaveViews_m3126(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::SetWaveViews()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LevelEndTitlesLayout_SetWaveViews_m3126 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t582 * V_0 = {0};
	{
		bool L_0 = (__this->___started_9);
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
		__this->___waveDirty_8 = 0;
		Text_t500 * L_1 = (__this->___waveTitleText_2);
		GameLevelState_t557 * L_2 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m2977(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral998, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_6);
		LevelConfig_t588 * L_7 = LevelConfig_get_instance_m3094(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		LevelDescription_t582 * L_8 = LevelConfig_GetCurrentLevelDescription_m3103(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Text_t500 * L_9 = (__this->___waveCountText_3);
		LevelDescription_t582 * L_10 = V_0;
		NullCheck(L_10);
		List_1_t576 * L_11 = (L_10->___explicitMouseDescs_1);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_11);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m409(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral1082, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_15);
		Text_t500 * L_16 = (__this->___waveSpecialText_4);
		LevelDescription_t582 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (L_17->___specialText_0);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		LevelDescription_t582 * L_19 = V_0;
		NullCheck(L_19);
		Sprite_t510 * L_20 = (L_19->___sprite_2);
		bool L_21 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_20, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		Image_t501 * L_22 = (__this->___waveSpecialImage_5);
		NullCheck(L_22);
		GameObject_t352 * L_23 = Component_get_gameObject_m3771(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m3971(L_23, 1, /*hidden argument*/NULL);
		Image_t501 * L_24 = (__this->___waveSpecialImage_5);
		LevelDescription_t582 * L_25 = V_0;
		NullCheck(L_25);
		Sprite_t510 * L_26 = (L_25->___sprite_2);
		NullCheck(L_24);
		Image_set_sprite_m4185(L_24, L_26, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00b0:
	{
		Image_t501 * L_27 = (__this->___waveSpecialImage_5);
		NullCheck(L_27);
		GameObject_t352 * L_28 = Component_get_gameObject_m3771(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_SetActive_m3971(L_28, 0, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnGameLevelChanged()
extern "C" void LevelEndTitlesLayout_OnGameLevelChanged_m3127 (LevelEndTitlesLayout_t589 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_8 = 1;
		return;
	}
}
// MoneyEarningController
#include "AssemblyU2DCSharp_MoneyEarningController.h"
#ifndef _MSC_VER
#else
#endif
// MoneyEarningController
#include "AssemblyU2DCSharp_MoneyEarningControllerMethodDeclarations.h"

struct Object_t704;
struct GameObject_t352;
struct Object_t704;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m4277_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m4277(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m4277_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t352_m4276(__this /* static, unused */, p0, method) (( GameObject_t352 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Object_Instantiate_TisObject_t_m4277_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t352;
struct FlyingAnimation_t546;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
// !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
#define GameObject_GetComponent_TisFlyingAnimation_t546_m4278(__this, method) (( FlyingAnimation_t546 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void MoneyEarningController::.ctor()
extern "C" void MoneyEarningController__ctor_m3128 (MoneyEarningController_t590 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::Start()
extern "C" void MoneyEarningController_Start_m3129 (MoneyEarningController_t590 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_RegisterForEvents_m3131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::OnDestroy()
extern "C" void MoneyEarningController_OnDestroy_m3130 (MoneyEarningController_t590 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_UnregisterForEvents_m3132(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t526_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m3133_MethodInfo_var;
extern "C" void MoneyEarningController_RegisterForEvents_m3131 (MoneyEarningController_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MultiKillEventHandler_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		MoneyEarningController_OnMultiKill_m3133_MethodInfo_var = il2cpp_codegen_method_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_4);
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
		__this->___registeredForEvents_4 = 1;
		DeadMouseRelay_t529 * L_1 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m3133_MethodInfo_var };
		MultiKillEventHandler_t526 * L_3 = (MultiKillEventHandler_t526 *)il2cpp_codegen_object_new (MultiKillEventHandler_t526_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2843(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MultiKill_m2852(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t526_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m3133_MethodInfo_var;
extern "C" void MoneyEarningController_UnregisterForEvents_m3132 (MoneyEarningController_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MultiKillEventHandler_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		MoneyEarningController_OnMultiKill_m3133_MethodInfo_var = il2cpp_codegen_method_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DeadMouseRelay_t529 * L_1 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m3133_MethodInfo_var };
		MultiKillEventHandler_t526 * L_3 = (MultiKillEventHandler_t526 *)il2cpp_codegen_object_new (MultiKillEventHandler_t526_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2843(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MultiKill_m2853(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MoneyEarningController::OnMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void MoneyEarningController_OnMultiKill_m3133 (MoneyEarningController_t590 * __this, int32_t ___numKilled, Vector3_t535  ___pawPosition, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___numKilled;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		int32_t L_1 = ___numKilled;
		int32_t L_2 = ___numKilled;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)1))*(int32_t)((int32_t)((int32_t)L_2-(int32_t)1))));
		PlayerStats_t513 * L_3 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PlayerStats_EarnMoney_m3370(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		Vector3_t535  L_6 = ___pawPosition;
		MoneyEarningController_MakeMoneyEffect_m3134(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::MakeMoneyEffect(System.Int32,UnityEngine.Vector3)
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var;
extern "C" void MoneyEarningController_MakeMoneyEffect_m3134 (MoneyEarningController_t590 * __this, int32_t ___moneyEarned, Vector3_t535  ___pawPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t546 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___moneyEffectPrototype_2);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4276(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		FlyingAnimation_t546 * L_3 = GameObject_GetComponent_TisFlyingAnimation_t546_m4278(L_2, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var);
		V_1 = L_3;
		FlyingAnimation_t546 * L_4 = V_1;
		Vector3_t535  L_5 = ___pawPosition;
		GameObject_t352 * L_6 = (__this->___moneyDisplay_3);
		NullCheck(L_4);
		FlyingAnimation_Configure_m2932(L_4, L_5, L_6, /*hidden argument*/NULL);
		FlyingAnimation_t546 * L_7 = V_1;
		NullCheck(L_7);
		FlyingAnimation_Run_m2934(L_7, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
#ifndef _MSC_VER
#else
#endif
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// MouseTypeDesc
#include "AssemblyU2DCSharp_MouseTypeDescMethodDeclarations.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDescMethodDeclarations.h"


// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m3135 (MouseConfig_t596 * __this, const MethodInfo* method)
{
	{
		__this->___timeToTurn_2 = (0.2f);
		__this->___minCirclingRadius_3 = (3.3f);
		__this->___maxCirclingRadius_4 = (3.9f);
		__this->___startMouseRadius_5 = (5.5f);
		__this->___minBFWiggleMagnitude_12 = (0.15f);
		__this->___maxBFWiggleMagnitude_13 = (0.55f);
		__this->___minBFWiggleCycles_14 = ((int32_t)10);
		__this->___maxBFWiggleCycles_15 = ((int32_t)14);
		__this->___minSSWiggleMagnitude_16 = (0.15f);
		__this->___maxSSWiggleMagnitude_17 = (0.55f);
		__this->___minSSWiggleCycles_18 = ((int32_t)15);
		__this->___maxSSWiggleCycles_19 = ((int32_t)20);
		__this->___minRDWiggleMagnitude_20 = (0.15f);
		__this->___maxRDWiggleMagnitude_21 = (0.55f);
		__this->___minRDWiggleCycles_22 = ((int32_t)9);
		__this->___maxRDWiggleCycles_23 = ((int32_t)14);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::Awake()
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_Awake_m3136 (MouseConfig_t596 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26 = __this;
		MouseConfig_LoadMouseDescs_m3137(__this, /*hidden argument*/NULL);
		MouseConfig_LoadMouseWiggleDescs_m3138(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::LoadMouseDescs()
extern TypeInfo* MouseTypeDescU5BU5D_t594_il2cpp_TypeInfo_var;
extern TypeInfo* MouseTypeDesc_t605_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseDescs_m3137 (MouseConfig_t596 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseTypeDescU5BU5D_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		MouseTypeDesc_t605_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseDescs_24 = ((MouseTypeDescU5BU5D_t594*)SZArrayNew(MouseTypeDescU5BU5D_t594_il2cpp_TypeInfo_var, 4));
		MouseTypeDescU5BU5D_t594* L_0 = (__this->___mouseDescs_24);
		SingleU5BU5D_t583* L_1 = (__this->___speeds_6);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		SingleU5BU5D_t583* L_3 = (__this->___scales_7);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		MouseTypeDesc_t605 * L_5 = (MouseTypeDesc_t605 *)il2cpp_codegen_object_new (MouseTypeDesc_t605_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3232(L_5, (String_t*) &_stringLiteral1083, (String_t*) &_stringLiteral1084, (*(float*)(float*)SZArrayLdElema(L_1, L_2)), (*(float*)(float*)SZArrayLdElema(L_3, L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_5);
		*((MouseTypeDesc_t605 **)(MouseTypeDesc_t605 **)SZArrayLdElema(L_0, 0)) = (MouseTypeDesc_t605 *)L_5;
		MouseTypeDescU5BU5D_t594* L_6 = (__this->___mouseDescs_24);
		SingleU5BU5D_t583* L_7 = (__this->___speeds_6);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		SingleU5BU5D_t583* L_9 = (__this->___scales_7);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		int32_t L_10 = 1;
		MouseTypeDesc_t605 * L_11 = (MouseTypeDesc_t605 *)il2cpp_codegen_object_new (MouseTypeDesc_t605_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3232(L_11, (String_t*) &_stringLiteral1085, (String_t*) &_stringLiteral1086, (*(float*)(float*)SZArrayLdElema(L_7, L_8)), (*(float*)(float*)SZArrayLdElema(L_9, L_10)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_11);
		*((MouseTypeDesc_t605 **)(MouseTypeDesc_t605 **)SZArrayLdElema(L_6, 1)) = (MouseTypeDesc_t605 *)L_11;
		MouseTypeDescU5BU5D_t594* L_12 = (__this->___mouseDescs_24);
		SingleU5BU5D_t583* L_13 = (__this->___speeds_6);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		int32_t L_14 = 2;
		SingleU5BU5D_t583* L_15 = (__this->___scales_7);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		MouseTypeDesc_t605 * L_17 = (MouseTypeDesc_t605 *)il2cpp_codegen_object_new (MouseTypeDesc_t605_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3232(L_17, (String_t*) &_stringLiteral1087, (String_t*) &_stringLiteral1088, (*(float*)(float*)SZArrayLdElema(L_13, L_14)), (*(float*)(float*)SZArrayLdElema(L_15, L_16)), /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, L_17);
		*((MouseTypeDesc_t605 **)(MouseTypeDesc_t605 **)SZArrayLdElema(L_12, 2)) = (MouseTypeDesc_t605 *)L_17;
		MouseTypeDescU5BU5D_t594* L_18 = (__this->___mouseDescs_24);
		SingleU5BU5D_t583* L_19 = (__this->___speeds_6);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		SingleU5BU5D_t583* L_21 = (__this->___scales_7);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		int32_t L_22 = 3;
		MouseTypeDesc_t605 * L_23 = (MouseTypeDesc_t605 *)il2cpp_codegen_object_new (MouseTypeDesc_t605_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3232(L_23, (String_t*) &_stringLiteral1089, (String_t*) &_stringLiteral1090, (*(float*)(float*)SZArrayLdElema(L_19, L_20)), (*(float*)(float*)SZArrayLdElema(L_21, L_22)), /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 3);
		ArrayElementTypeCheck (L_18, L_23);
		*((MouseTypeDesc_t605 **)(MouseTypeDesc_t605 **)SZArrayLdElema(L_18, 3)) = (MouseTypeDesc_t605 *)L_23;
		return;
	}
}
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern TypeInfo* MouseWiggleDescU5BU5D_t595_il2cpp_TypeInfo_var;
extern TypeInfo* MouseWiggleDesc_t606_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseWiggleDescs_m3138 (MouseConfig_t596 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseWiggleDescU5BU5D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		MouseWiggleDesc_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseWiggleDescs_25 = ((MouseWiggleDescU5BU5D_t595*)SZArrayNew(MouseWiggleDescU5BU5D_t595_il2cpp_TypeInfo_var, 4));
		MouseWiggleDescU5BU5D_t595* L_0 = (__this->___mouseWiggleDescs_25);
		float L_1 = (__this->___minBFWiggleMagnitude_12);
		float L_2 = (__this->___maxBFWiggleMagnitude_13);
		int32_t L_3 = (__this->___minBFWiggleCycles_14);
		int32_t L_4 = (__this->___maxBFWiggleCycles_15);
		MouseWiggleDesc_t606 * L_5 = (MouseWiggleDesc_t606 *)il2cpp_codegen_object_new (MouseWiggleDesc_t606_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3233(L_5, (String_t*) &_stringLiteral1091, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 2);
		ArrayElementTypeCheck (L_0, L_5);
		*((MouseWiggleDesc_t606 **)(MouseWiggleDesc_t606 **)SZArrayLdElema(L_0, 2)) = (MouseWiggleDesc_t606 *)L_5;
		MouseWiggleDescU5BU5D_t595* L_6 = (__this->___mouseWiggleDescs_25);
		float L_7 = (__this->___minSSWiggleMagnitude_16);
		float L_8 = (__this->___maxSSWiggleMagnitude_17);
		int32_t L_9 = (__this->___minSSWiggleCycles_18);
		int32_t L_10 = (__this->___maxSSWiggleCycles_19);
		MouseWiggleDesc_t606 * L_11 = (MouseWiggleDesc_t606 *)il2cpp_codegen_object_new (MouseWiggleDesc_t606_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3233(L_11, (String_t*) &_stringLiteral1092, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_11);
		*((MouseWiggleDesc_t606 **)(MouseWiggleDesc_t606 **)SZArrayLdElema(L_6, 1)) = (MouseWiggleDesc_t606 *)L_11;
		MouseWiggleDescU5BU5D_t595* L_12 = (__this->___mouseWiggleDescs_25);
		float L_13 = (__this->___minRDWiggleMagnitude_20);
		float L_14 = (__this->___maxRDWiggleMagnitude_21);
		int32_t L_15 = (__this->___minRDWiggleCycles_22);
		int32_t L_16 = (__this->___maxRDWiggleCycles_23);
		MouseWiggleDesc_t606 * L_17 = (MouseWiggleDesc_t606 *)il2cpp_codegen_object_new (MouseWiggleDesc_t606_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3233(L_17, (String_t*) &_stringLiteral1093, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_17);
		*((MouseWiggleDesc_t606 **)(MouseWiggleDesc_t606 **)SZArrayLdElema(L_12, 3)) = (MouseWiggleDesc_t606 *)L_17;
		return;
	}
}
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m3139 (MouseConfig_t596 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m3780(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t510 * MouseConfig_GetIntroSpriteForMouseType_m3140 (MouseConfig_t596 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseTypeDescU5BU5D_t594* L_0 = (__this->___mouseDescs_24);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(MouseTypeDesc_t605 **)(MouseTypeDesc_t605 **)SZArrayLdElema(L_0, L_2)));
		Sprite_t510 * L_3 = ((*(MouseTypeDesc_t605 **)(MouseTypeDesc_t605 **)SZArrayLdElema(L_0, L_2))->___introScreenSprite_2);
		return L_3;
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t510 * MouseConfig_GetIntroSpriteForMouseWiggle_m3141 (MouseConfig_t596 * __this, int32_t ___wt, const MethodInfo* method)
{
	MouseWiggleDesc_t606 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		MouseWiggleDesc_t606 * L_1 = MouseConfig_GetWiggleDesc_m3142(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseWiggleDesc_t606 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		MouseWiggleDesc_t606 * L_3 = V_0;
		NullCheck(L_3);
		Sprite_t510 * L_4 = (L_3->___introScreenSprite_0);
		return L_4;
	}

IL_0015:
	{
		return (Sprite_t510 *)NULL;
	}
}
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t606 * MouseConfig_GetWiggleDesc_m3142 (MouseConfig_t596 * __this, int32_t ___wt, const MethodInfo* method)
{
	{
		MouseWiggleDescU5BU5D_t595* L_0 = (__this->___mouseWiggleDescs_25);
		int32_t L_1 = ___wt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseWiggleDesc_t606 **)(MouseWiggleDesc_t606 **)SZArrayLdElema(L_0, L_2));
	}
}
// MouseTypeDesc MouseConfig::GetMouseTypeDesc(MouseConfig/MouseType)
extern "C" MouseTypeDesc_t605 * MouseConfig_GetMouseTypeDesc_m3143 (MouseConfig_t596 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseTypeDescU5BU5D_t594* L_0 = (__this->___mouseDescs_24);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseTypeDesc_t605 **)(MouseTypeDesc_t605 **)SZArrayLdElema(L_0, L_2));
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_Slider.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayer.h"
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayerMethodDeclarations.h"
struct GameObject_t352;
struct WorldObjectFollower_t675;
// Declaration !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
// !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
#define GameObject_GetComponent_TisWorldObjectFollower_t675_m4279(__this, method) (( WorldObjectFollower_t675 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)
struct GameObject_t352;
struct Slider_t495;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t495_m4172(__this, method) (( Slider_t495 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)
struct GameObject_t352;
struct TweakableSlider_t598;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
// !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
#define GameObject_GetComponent_TisTweakableSlider_t598_m4280(__this, method) (( TweakableSlider_t598 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)
struct Component_t762;
struct DistortForEffect_t534;
// Declaration !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
// !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
#define Component_GetComponent_TisDistortForEffect_t534_m4182(__this, method) (( DistortForEffect_t534 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void MouseMove::.ctor()
extern "C" void MouseMove__ctor_m3144 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		__this->___minDistanceToManuallyOrient_5 = (0.01f);
		__this->___wiggleCycles_23 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m3145 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m3146 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_26);
		return L_0;
	}
}
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m3147 (MouseMove_t527 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m3148 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdeadU3Ek__BackingField_27);
		return L_0;
	}
}
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m3149 (MouseMove_t527 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdeadU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m3150 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPoisonedU3Ek__BackingField_28);
		return L_0;
	}
}
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m3151 (MouseMove_t527 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPoisonedU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isFartedUpon()
extern "C" bool MouseMove_get_isFartedUpon_m3152 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisFartedUponU3Ek__BackingField_29);
		return L_0;
	}
}
// System.Void MouseMove::set_isFartedUpon(System.Boolean)
extern "C" void MouseMove_set_isFartedUpon_m3153 (MouseMove_t527 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisFartedUponU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m3154 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		MouseMove_set_dead_m3149(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::Start()
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern TypeInfo* MouseMove_t527_il2cpp_TypeInfo_var;
extern "C" void MouseMove_Start_m3155 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		MouseMove_t527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_RegisterForEvents_m3157(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___startAngleDeg_8);
		__this->___mouseAngleDeg_7 = L_0;
		MouseMove_SetPhase_m3168(__this, 0, /*hidden argument*/NULL);
		MouseConfig_t596 * L_1 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_1);
		float L_2 = (L_1->___startMouseRadius_5);
		__this->___mouseRadius_10 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t527_il2cpp_TypeInfo_var);
		int32_t L_3 = ((MouseMove_t527_StaticFields*)MouseMove_t527_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t527_StaticFields*)MouseMove_t527_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		float L_4 = (__this->___baseSpeedM_14);
		__this->___actualSpeedM_15 = L_4;
		MouseMove_MakeSlider_m3162(__this, /*hidden argument*/NULL);
		MouseMove_SetMouseTransform_m3163(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnDestroy()
extern TypeInfo* MouseMove_t527_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnDestroy_m3156 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_UnregisterForEvents_m3158(__this, /*hidden argument*/NULL);
		Slider_t495 * L_0 = (__this->___sliderInstance_19);
		bool L_1 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_0, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Slider_t495 * L_2 = (__this->___sliderInstance_19);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3771(L_2, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t527_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t527_StaticFields*)MouseMove_t527_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t527_StaticFields*)MouseMove_t527_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_4-(int32_t)1));
		return;
	}
}
// System.Void MouseMove::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m3159_MethodInfo_var;
extern "C" void MouseMove_RegisterForEvents_m3157 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseMove_OnGamePhaseChanged_m3159_MethodInfo_var = il2cpp_codegen_method_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_25);
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
		__this->___registeredForEvents_25 = 1;
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m3159_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m3159_MethodInfo_var;
extern "C" void MouseMove_UnregisterForEvents_m3158 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseMove_OnGamePhaseChanged_m3159_MethodInfo_var = il2cpp_codegen_method_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_25);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m3159_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseMove::OnGamePhaseChanged()
extern "C" void MouseMove_OnGamePhaseChanged_m3159 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		GamePhaseState_t561 * L_2 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3003(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void MouseMove::OnFartedUpon()
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnFartedUpon_m3160 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___baseSpeedM_14);
		__this->___actualSpeedM_15 = ((float)((float)L_0*(float)(0.3f)));
		Renderer_t597 * L_1 = (__this->___mouseRenderer_3);
		NullCheck(L_1);
		Material_t523 * L_2 = Renderer_get_material_m4016(L_1, /*hidden argument*/NULL);
		MouseConfig_t596 * L_3 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_3);
		Color_t325  L_4 = (L_3->___fartedUponColor_9);
		NullCheck(L_2);
		Material_set_color_m4281(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPoisoned()
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetPoisoned_m3161 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_set_isPoisoned_m3151(__this, 1, /*hidden argument*/NULL);
		Renderer_t597 * L_0 = (__this->___mouseRenderer_3);
		NullCheck(L_0);
		Material_t523 * L_1 = Renderer_get_material_m4016(L_0, /*hidden argument*/NULL);
		MouseConfig_t596 * L_2 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_2);
		Color_t325  L_3 = (L_2->___poisonedColor_8);
		NullCheck(L_1);
		Material_set_color_m4281(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeSlider()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisWorldObjectFollower_t675_m4279_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t495_m4172_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTweakableSlider_t598_m4280_MethodInfo_var;
extern "C" void MouseMove_MakeSlider_m3162 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		GameObject_GetComponent_TisWorldObjectFollower_t675_m4279_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484203);
		GameObject_GetComponent_TisSlider_t495_m4172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		GameObject_GetComponent_TisTweakableSlider_t598_m4280_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484204);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	WorldObjectFollower_t675 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___trackingStatusBarPrototype_4);
		Vector3_t535  L_1 = {0};
		Vector3__ctor_m4049(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t789  L_2 = Quaternion_get_identity_m4175(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t704 * L_3 = Object_Instantiate_m4176(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		WorldObjectFollower_t675 * L_5 = GameObject_GetComponent_TisWorldObjectFollower_t675_m4279(L_4, /*hidden argument*/GameObject_GetComponent_TisWorldObjectFollower_t675_m4279_MethodInfo_var);
		V_1 = L_5;
		WorldObjectFollower_t675 * L_6 = V_1;
		GameObject_t352 * L_7 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		MouseConfig_t596 * L_8 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_8);
		Vector3_t535  L_9 = (L_8->___progressBarOffset_10);
		NullCheck(L_6);
		WorldObjectFollower_SetObjectToFollow_m3636(L_6, L_7, L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = V_0;
		NullCheck(L_10);
		Slider_t495 * L_11 = GameObject_GetComponent_TisSlider_t495_m4172(L_10, /*hidden argument*/GameObject_GetComponent_TisSlider_t495_m4172_MethodInfo_var);
		__this->___sliderInstance_19 = L_11;
		GameObject_t352 * L_12 = V_0;
		NullCheck(L_12);
		TweakableSlider_t598 * L_13 = GameObject_GetComponent_TisTweakableSlider_t598_m4280(L_12, /*hidden argument*/GameObject_GetComponent_TisTweakableSlider_t598_m4280_MethodInfo_var);
		__this->___tweakableSlider_20 = L_13;
		Slider_t495 * L_14 = (__this->___sliderInstance_19);
		NullCheck(L_14);
		GameObject_t352 * L_15 = Component_get_gameObject_m3771(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m3971(L_15, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseTransform()
extern "C" void MouseMove_SetMouseTransform_m3163 (MouseMove_t527 * __this, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	{
		Transform_t406 * L_0 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t535  L_1 = Transform_get_position_m4056(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseMove_SetMousePosition_m3164(__this, /*hidden argument*/NULL);
		Vector3_t535  L_2 = V_0;
		MouseMove_SetMouseOrientation_m3165(__this, L_2, /*hidden argument*/NULL);
		MouseMove_UpdateSlider_m3167(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMousePosition()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMousePosition_m3164 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___mouseRadius_10);
		float L_1 = (__this->___mouseAngleDeg_7);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_2 = sinf(((float)((float)(0.0174532924f)*(float)L_1)));
		V_0 = ((float)((float)L_0*(float)L_2));
		float L_3 = (__this->___mouseRadius_10);
		float L_4 = (__this->___mouseAngleDeg_7);
		float L_5 = cosf(((float)((float)(0.0174532924f)*(float)L_4)));
		V_1 = ((float)((float)L_3*(float)L_5));
		Transform_t406 * L_6 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_7 = V_1;
		float L_8 = V_0;
		Vector3_t535  L_9 = {0};
		Vector3__ctor_m4049(&L_9, L_7, L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m4058(L_6, L_9, /*hidden argument*/NULL);
		MouseMove_ApplyWiggle_m3166(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseOrientation(UnityEngine.Vector3)
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseOrientation_m3165 (MouseMove_t527 * __this, Vector3_t535  ___oldPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t535  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t535  V_3 = {0};
	Vector3_t535  V_4 = {0};
	int32_t V_5 = {0};
	{
		int32_t L_0 = (__this->___phase_12);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_00b0;
		}
	}
	{
		Transform_t406 * L_1 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t535  L_2 = Transform_get_position_m4056(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = ((&V_3)->___x_1);
		float L_4 = ((&___oldPosition)->___x_1);
		Transform_t406 * L_5 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t535  L_6 = Transform_get_position_m4056(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = ((&V_4)->___y_2);
		float L_8 = ((&___oldPosition)->___y_2);
		Vector3__ctor_m4049((&V_1), ((float)((float)L_3-(float)L_4)), ((float)((float)L_7-(float)L_8)), (0.0f), /*hidden argument*/NULL);
		int32_t L_9 = (__this->___wiggleType_21);
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_10 = (__this->___wiggleType_21);
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0078;
		}
	}
	{
		float L_11 = Vector3_get_magnitude_m4282((&V_1), /*hidden argument*/NULL);
		float L_12 = (__this->___minDistanceToManuallyOrient_5);
		if ((!(((float)L_11) <= ((float)L_12))))
		{
			goto IL_008b;
		}
	}

IL_0078:
	{
		float L_13 = (__this->___mouseAngleDeg_7);
		float L_14 = (__this->___angleAdjustmentWhileRunning_17);
		V_0 = ((float)((float)L_13+(float)L_14));
		goto IL_00ab;
	}

IL_008b:
	{
		Vector3_t535  L_15 = Vector3_get_right_m4283(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t535  L_16 = V_1;
		float L_17 = Vector3_Angle_m4284(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		float L_18 = ((&V_1)->___y_2);
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_00ab;
		}
	}
	{
		float L_19 = V_0;
		V_0 = ((-L_19));
	}

IL_00ab:
	{
		goto IL_017b;
	}

IL_00b0:
	{
		float L_20 = (__this->___mouseAngleDeg_7);
		V_0 = L_20;
		V_2 = (0.0f);
		int32_t L_21 = (__this->___phase_12);
		V_5 = L_21;
		int32_t L_22 = V_5;
		if (L_22 == 0)
		{
			goto IL_00e9;
		}
		if (L_22 == 1)
		{
			goto IL_00f4;
		}
		if (L_22 == 2)
		{
			goto IL_0177;
		}
		if (L_22 == 3)
		{
			goto IL_0121;
		}
		if (L_22 == 4)
		{
			goto IL_0177;
		}
		if (L_22 == 5)
		{
			goto IL_014e;
		}
	}
	{
		goto IL_0177;
	}

IL_00e9:
	{
		V_2 = (180.0f);
		goto IL_0177;
	}

IL_00f4:
	{
		float L_23 = (__this->___angleAdjustmentWhileRunning_17);
		float L_24 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = (__this->___phaseStartTime_13);
		MouseConfig_t596 * L_26 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_26);
		float L_27 = (L_26->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Lerp_m4285(NULL /*static, unused*/, (180.0f), L_23, ((float)((float)((float)((float)L_24-(float)L_25))/(float)L_27)), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_0177;
	}

IL_0121:
	{
		float L_29 = (__this->___zeroCenteredAngleAdjustmentWhileRunning_18);
		float L_30 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_31 = (__this->___phaseStartTime_13);
		MouseConfig_t596 * L_32 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_32);
		float L_33 = (L_32->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_34 = Mathf_Lerp_m4285(NULL /*static, unused*/, L_29, (0.0f), ((float)((float)((float)((float)L_30-(float)L_31))/(float)L_33)), /*hidden argument*/NULL);
		V_2 = L_34;
		goto IL_0177;
	}

IL_014e:
	{
		float L_35 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = (__this->___phaseStartTime_13);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_37 = sinf(((float)((float)((float)((float)((float)((float)L_35-(float)L_36))*(float)(3.14159274f)))*(float)(2.0f))));
		V_2 = ((float)((float)(30.0f)*(float)L_37));
		goto IL_0177;
	}

IL_0177:
	{
		float L_38 = V_0;
		float L_39 = V_2;
		V_0 = ((float)((float)L_38+(float)L_39));
	}

IL_017b:
	{
		Transform_t406 * L_40 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_41 = V_0;
		Quaternion_t789  L_42 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_rotation_m4164(L_40, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::ApplyWiggle()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void MouseMove_ApplyWiggle_m3166 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t535  V_3 = {0};
	int32_t V_4 = {0};
	{
		int32_t L_0 = (__this->___wiggleType_21);
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
		float L_1 = (__this->___mouseAngleDeg_7);
		float L_2 = (__this->___startAngleDeg_8);
		float L_3 = (__this->___endAngleDeg_9);
		float L_4 = (__this->___startAngleDeg_8);
		V_0 = ((float)((float)((float)((float)L_1-(float)L_2))/(float)((float)((float)L_3-(float)L_4))));
		float L_5 = V_0;
		float L_6 = (__this->___wiggleCycles_23);
		V_1 = ((float)((float)L_5*(float)L_6));
		float L_7 = V_1;
		V_2 = ((float)((float)((float)((float)L_7*(float)(2.0f)))*(float)(3.14159274f)));
		bool L_8 = (__this->___wiggleClockwise_24);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		float L_9 = V_2;
		V_2 = ((-L_9));
	}

IL_004d:
	{
		Vector3__ctor_m4049((&V_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_10 = (__this->___wiggleType_21);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (((int32_t)((int32_t)L_11-(int32_t)1)) == 0)
		{
			goto IL_00a8;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)1)) == 1)
		{
			goto IL_0085;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)1)) == 2)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0128;
	}

IL_0085:
	{
		float L_12 = (__this->___wiggleMagnitude_22);
		float L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_14 = sinf(L_13);
		Vector3__ctor_m4049((&V_3), ((float)((float)L_12*(float)L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_00a8:
	{
		float L_15 = (__this->___wiggleMagnitude_22);
		float L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_17 = sinf(L_16);
		Vector3__ctor_m4049((&V_3), (0.0f), ((float)((float)L_15*(float)L_17)), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_00cb:
	{
		float L_18 = V_2;
		V_2 = ((float)((float)L_18+(float)(1.57079637f)));
		float L_19 = V_2;
		if ((!(((float)(fmodf(L_19, (6.28318548f)))) > ((float)(3.14159274f)))))
		{
			goto IL_00e7;
		}
	}
	{
		float L_20 = V_2;
		V_2 = ((-L_20));
	}

IL_00e7:
	{
		float L_21 = V_2;
		V_2 = ((float)((float)L_21-(float)(1.57079637f)));
		float L_22 = (__this->___wiggleMagnitude_22);
		float L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_24 = cosf(((float)((float)(3.14159274f)+(float)L_23)));
		float L_25 = (__this->___wiggleMagnitude_22);
		float L_26 = (__this->___wiggleMagnitude_22);
		float L_27 = V_2;
		float L_28 = sinf(((-L_27)));
		Vector3__ctor_m4049((&V_3), ((float)((float)((float)((float)L_22*(float)L_24))+(float)L_25)), ((float)((float)L_26*(float)L_28)), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_0128:
	{
		float L_29 = (__this->___mouseAngleDeg_7);
		float L_30 = (__this->___angleAdjustmentWhileRunning_17);
		Vector3_t535  L_31 = {0};
		Vector3__ctor_m4049(&L_31, (0.0f), (0.0f), ((float)((float)L_29+(float)L_30)), /*hidden argument*/NULL);
		Quaternion_t789  L_32 = Quaternion_Euler_m4286(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Vector3_t535  L_33 = V_3;
		Vector3_t535  L_34 = Quaternion_op_Multiply_m4287(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		Transform_t406 * L_35 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Transform_t406 * L_36 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t535  L_37 = Transform_get_position_m4056(L_36, /*hidden argument*/NULL);
		Vector3_t535  L_38 = V_3;
		Vector3_t535  L_39 = Vector3_op_Addition_m4213(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_m4058(L_35, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UpdateSlider()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void MouseMove_UpdateSlider_m3167 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Color_t325  V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = (0.0f);
		int32_t L_0 = (__this->___phase_12);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_002a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0060;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0076;
	}

IL_002a:
	{
		V_0 = (0.0f);
		goto IL_0076;
	}

IL_0035:
	{
		float L_2 = (__this->___mouseAngleDeg_7);
		float L_3 = (__this->___startAngleDeg_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_4 = fabsf(((float)((float)L_2-(float)L_3)));
		float L_5 = (__this->___startAngleDeg_8);
		float L_6 = (__this->___endAngleDeg_9);
		float L_7 = fabsf(((float)((float)L_5-(float)L_6)));
		V_0 = ((float)((float)L_4/(float)L_7));
		goto IL_0076;
	}

IL_0060:
	{
		V_0 = (1.0f);
		goto IL_0076;
	}

IL_006b:
	{
		V_0 = (1.0f);
		goto IL_0076;
	}

IL_0076:
	{
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		Color_t325  L_9 = Utilities_TrafficLightColorLerp_m3620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		TweakableSlider_t598 * L_10 = (__this->___tweakableSlider_20);
		NullCheck(L_10);
		Image_t501 * L_11 = (L_10->___fill_2);
		Color_t325  L_12 = V_1;
		NullCheck(L_11);
		Graphic_set_color_m4288(L_11, L_12, /*hidden argument*/NULL);
		Slider_t495 * L_13 = (__this->___sliderInstance_19);
		float L_14 = V_0;
		NullCheck(L_13);
		Slider_set_value_m4181(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPhase(MouseConfig/MovementPhaseType)
extern "C" void MouseMove_SetPhase_m3168 (MouseMove_t527 * __this, int32_t ___phase, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___phase_12);
		int32_t L_1 = ___phase;
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
		int32_t L_2 = ___phase;
		__this->___phase_12 = L_2;
		float L_3 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_13 = L_3;
		return;
	}
}
// System.Void MouseMove::FixedUpdate()
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern "C" void MouseMove_FixedUpdate_m3169 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = {0};
	{
		float L_0 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->___phase_12);
		V_4 = L_1;
		int32_t L_2 = V_4;
		if (L_2 == 0)
		{
			goto IL_002e;
		}
		if (L_2 == 1)
		{
			goto IL_007d;
		}
		if (L_2 == 2)
		{
			goto IL_00a4;
		}
		if (L_2 == 3)
		{
			goto IL_013b;
		}
		if (L_2 == 4)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_017c;
	}

IL_002e:
	{
		float L_3 = (__this->___mouseRadius_10);
		float L_4 = V_0;
		float L_5 = (__this->___actualSpeedM_15);
		__this->___mouseRadius_10 = ((float)((float)L_3-(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___mouseRadius_10);
		float L_7 = (__this->___circlingRadius_11);
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_0078;
		}
	}
	{
		float L_8 = (__this->___circlingRadius_11);
		__this->___mouseRadius_10 = L_8;
		MouseMove_SetPhase_m3168(__this, 1, /*hidden argument*/NULL);
		Slider_t495 * L_9 = (__this->___sliderInstance_19);
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3771(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m3971(L_10, 1, /*hidden argument*/NULL);
	}

IL_0078:
	{
		goto IL_017c;
	}

IL_007d:
	{
		float L_11 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t596 * L_12 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_12);
		float L_13 = (L_12->___timeToTurn_2);
		float L_14 = (__this->___phaseStartTime_13);
		if ((!(((float)L_11) >= ((float)((float)((float)L_13+(float)L_14))))))
		{
			goto IL_009f;
		}
	}
	{
		MouseMove_SetPhase_m3168(__this, 2, /*hidden argument*/NULL);
	}

IL_009f:
	{
		goto IL_017c;
	}

IL_00a4:
	{
		float L_15 = (__this->___actualSpeedM_15);
		float L_16 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_15*(float)L_16));
		float L_17 = V_1;
		float L_18 = (__this->___mouseRadius_10);
		V_2 = ((float)((float)L_17/(float)L_18));
		float L_19 = V_2;
		V_3 = ((float)((float)L_19*(float)(57.29578f)));
		bool L_20 = (__this->___isClockwise_16);
		if (!L_20)
		{
			goto IL_0104;
		}
	}
	{
		float L_21 = (__this->___mouseAngleDeg_7);
		float L_22 = V_3;
		__this->___mouseAngleDeg_7 = ((float)((float)L_21-(float)L_22));
		float L_23 = (__this->___mouseAngleDeg_7);
		float L_24 = (__this->___endAngleDeg_9);
		if ((!(((float)L_23) <= ((float)L_24))))
		{
			goto IL_00ff;
		}
	}
	{
		float L_25 = (__this->___endAngleDeg_9);
		__this->___mouseAngleDeg_7 = L_25;
		MouseMove_SetPhase_m3168(__this, 3, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		goto IL_0136;
	}

IL_0104:
	{
		float L_26 = (__this->___mouseAngleDeg_7);
		float L_27 = V_3;
		__this->___mouseAngleDeg_7 = ((float)((float)L_26+(float)L_27));
		float L_28 = (__this->___mouseAngleDeg_7);
		float L_29 = (__this->___endAngleDeg_9);
		if ((!(((float)L_28) >= ((float)L_29))))
		{
			goto IL_0136;
		}
	}
	{
		float L_30 = (__this->___endAngleDeg_9);
		__this->___mouseAngleDeg_7 = L_30;
		MouseMove_SetPhase_m3168(__this, 3, /*hidden argument*/NULL);
	}

IL_0136:
	{
		goto IL_017c;
	}

IL_013b:
	{
		float L_31 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t596 * L_32 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_32);
		float L_33 = (L_32->___timeToTurn_2);
		float L_34 = (__this->___phaseStartTime_13);
		if ((!(((float)L_31) >= ((float)((float)((float)L_33+(float)L_34))))))
		{
			goto IL_015d;
		}
	}
	{
		MouseMove_SetPhase_m3168(__this, 4, /*hidden argument*/NULL);
	}

IL_015d:
	{
		goto IL_017c;
	}

IL_0162:
	{
		float L_35 = (__this->___mouseRadius_10);
		float L_36 = V_0;
		float L_37 = (__this->___actualSpeedM_15);
		__this->___mouseRadius_10 = ((float)((float)L_35+(float)((float)((float)L_36*(float)L_37))));
		goto IL_017c;
	}

IL_017c:
	{
		MouseMove_SetMouseTransform_m3163(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnKilled()
extern "C" void MouseMove_OnKilled_m3170 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		MouseMove_MakeDeadMouse_m3171(__this, /*hidden argument*/NULL);
		MouseMove_set_dead_m3149(__this, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeDeadMouse()
extern "C" void MouseMove_MakeDeadMouse_m3171 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t636 * L_0 = SFXPlayer_get_instance_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t636 * L_1 = SFXPlayer_get_instance_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		SFXTypeU5BU5D_t635* L_2 = (L_1->___deadMouseIds_4);
		NullCheck(L_0);
		SFXPlayer_PlayRandom_m3416(L_0, L_2, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnSafeExit()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var;
extern "C" void MouseMove_OnSafeExit_m3172 (MouseMove_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	DistortForEffect_t534 * V_0 = {0};
	{
		MouseMove_SetPhase_m3168(__this, 5, /*hidden argument*/NULL);
		DistortForEffect_t534 * L_0 = Component_GetComponent_TisDistortForEffect_t534_m4182(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var);
		V_0 = L_0;
		DistortForEffect_t534 * L_1 = V_0;
		NullCheck(L_1);
		DistortForEffect_Distort_m2888(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern TypeInfo* MaterialU5BU5D_t653_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseType_m3173 (MouseMove_t527 * __this, int32_t ___mt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		MaterialU5BU5D_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(549);
		s_Il2CppMethodIntialized = true;
	}
	MouseTypeDesc_t605 * V_0 = {0};
	Vector3_t535  V_1 = {0};
	float V_2 = 0.0f;
	MaterialU5BU5D_t653* V_3 = {0};
	float G_B3_0 = 0.0f;
	{
		int32_t L_0 = ___mt;
		MouseMove_set_mouseType_m3147(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t596 * L_1 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		int32_t L_2 = ___mt;
		NullCheck(L_1);
		MouseTypeDesc_t605 * L_3 = MouseConfig_GetMouseTypeDesc_m3143(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseTypeDesc_t605 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = (L_4->___speed_4);
		__this->___baseSpeedM_14 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t535  L_7 = Transform_get_localScale_m4059(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_9 = ((&V_1)->___x_1);
		MouseTypeDesc_t605 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___scale_5);
		float L_12 = ((&V_1)->___y_2);
		MouseTypeDesc_t605 * L_13 = V_0;
		NullCheck(L_13);
		float L_14 = (L_13->___scale_5);
		float L_15 = ((&V_1)->___z_3);
		Vector3_t535  L_16 = {0};
		Vector3__ctor_m4049(&L_16, ((float)((float)L_9*(float)L_11)), ((float)((float)L_12*(float)L_14)), L_15, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m4060(L_8, L_16, /*hidden argument*/NULL);
		bool L_17 = (__this->___isClockwise_16);
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0078;
	}

IL_0073:
	{
		G_B3_0 = (1.0f);
	}

IL_0078:
	{
		V_2 = G_B3_0;
		Transform_t406 * L_18 = (__this->___artTransform_6);
		NullCheck(L_18);
		Vector3_t535  L_19 = Transform_get_localScale_m4059(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Transform_t406 * L_20 = (__this->___artTransform_6);
		float L_21 = ((&V_1)->___x_1);
		float L_22 = ((&V_1)->___y_2);
		float L_23 = V_2;
		float L_24 = ((&V_1)->___z_3);
		Vector3_t535  L_25 = {0};
		Vector3__ctor_m4049(&L_25, L_21, ((float)((float)L_22*(float)L_23)), L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_m4060(L_20, L_25, /*hidden argument*/NULL);
		V_3 = ((MaterialU5BU5D_t653*)SZArrayNew(MaterialU5BU5D_t653_il2cpp_TypeInfo_var, 1));
		MaterialU5BU5D_t653* L_26 = V_3;
		MouseTypeDesc_t605 * L_27 = V_0;
		NullCheck(L_27);
		Material_t523 * L_28 = (L_27->___mouseMaterial_3);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_28);
		*((Material_t523 **)(Material_t523 **)SZArrayLdElema(L_26, 0)) = (Material_t523 *)L_28;
		Renderer_t597 * L_29 = (__this->___mouseRenderer_3);
		MaterialU5BU5D_t653* L_30 = V_3;
		NullCheck(L_29);
		Renderer_set_materials_m4289(L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m3174 (MouseMove_t527 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___phase_12);
		return L_0;
	}
}
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseSinkController/MouseHoleLocation,System.Boolean,System.Int32)
extern TypeInfo* MouseSinkController_t601_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetupMouse_m3175 (MouseMove_t527 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSinkController_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		bool L_0 = ___isClockwise;
		__this->___isClockwise_16 = L_0;
		bool L_1 = ___isClockwise;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->___angleAdjustmentWhileRunning_17 = (270.0f);
		__this->___zeroCenteredAngleAdjustmentWhileRunning_18 = (-90.0f);
		goto IL_003e;
	}

IL_0028:
	{
		__this->___angleAdjustmentWhileRunning_17 = (90.0f);
		__this->___zeroCenteredAngleAdjustmentWhileRunning_18 = (90.0f);
	}

IL_003e:
	{
		int32_t L_2 = ___originHole;
		IL2CPP_RUNTIME_CLASS_INIT(MouseSinkController_t601_il2cpp_TypeInfo_var);
		float L_3 = ((MouseSinkController_t601_StaticFields*)MouseSinkController_t601_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_9;
		__this->___startAngleDeg_8 = ((float)((float)(((float)L_2))*(float)L_3));
		bool L_4 = ___isClockwise;
		if (!L_4)
		{
			goto IL_0069;
		}
	}
	{
		float L_5 = (__this->___startAngleDeg_8);
		__this->___startAngleDeg_8 = ((float)((float)L_5+(float)(45.0f)));
		goto IL_007b;
	}

IL_0069:
	{
		float L_6 = (__this->___startAngleDeg_8);
		__this->___startAngleDeg_8 = ((float)((float)L_6-(float)(45.0f)));
	}

IL_007b:
	{
		int32_t L_7 = ___track;
		V_0 = ((float)((float)(((float)L_7))/(float)(2.0f)));
		MouseConfig_t596 * L_8 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_8);
		float L_9 = (L_8->___maxCirclingRadius_4);
		MouseConfig_t596 * L_10 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_10);
		float L_11 = (L_10->___minCirclingRadius_3);
		float L_12 = V_0;
		V_1 = ((float)((float)((float)((float)L_9-(float)L_11))*(float)L_12));
		MouseConfig_t596 * L_13 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_13);
		float L_14 = (L_13->___minCirclingRadius_3);
		float L_15 = V_1;
		__this->___circlingRadius_11 = ((float)((float)L_14+(float)L_15));
		int32_t L_16 = ___mouseType;
		MouseMove_SetMouseType_m3173(__this, L_16, /*hidden argument*/NULL);
		__this->___wiggleType_21 = 0;
		int32_t L_17 = ___mouseType;
		V_2 = ((int32_t)((int32_t)2+(int32_t)L_17));
		DebugConfig_t530 * L_18 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = DebugConfig_DebugFlagSet_m2866(L_18, 0, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00d3;
		}
	}
	{
		V_2 = 0;
	}

IL_00d3:
	{
		int32_t L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MouseSinkController_t601_il2cpp_TypeInfo_var);
		float L_21 = ((MouseSinkController_t601_StaticFields*)MouseSinkController_t601_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_9;
		V_3 = ((float)((float)((float)((float)(((float)L_20))*(float)L_21))+(float)(45.0f)));
		bool L_22 = ___isClockwise;
		if (!L_22)
		{
			goto IL_012f;
		}
	}
	{
		float L_23 = (__this->___startAngleDeg_8);
		float L_24 = V_3;
		__this->___endAngleDeg_9 = ((float)((float)L_23-(float)L_24));
		float L_25 = (__this->___endAngleDeg_9);
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_012a;
		}
	}
	{
		float L_26 = (__this->___startAngleDeg_8);
		__this->___startAngleDeg_8 = ((float)((float)L_26+(float)(360.0f)));
		float L_27 = (__this->___endAngleDeg_9);
		__this->___endAngleDeg_9 = ((float)((float)L_27+(float)(360.0f)));
	}

IL_012a:
	{
		goto IL_013d;
	}

IL_012f:
	{
		float L_28 = (__this->___startAngleDeg_8);
		float L_29 = V_3;
		__this->___endAngleDeg_9 = ((float)((float)L_28+(float)L_29));
	}

IL_013d:
	{
		return;
	}
}
// System.Void MouseMove::AddWiggle(MouseConfig/MouseWiggleType,System.Single,System.Int32,System.Boolean)
extern "C" void MouseMove_AddWiggle_m3176 (MouseMove_t527 * __this, int32_t ___wiggleType, float ___wiggleMagnitude, int32_t ___wiggleCycles, bool ___wiggleClockwise, const MethodInfo* method)
{
	{
		int32_t L_0 = ___wiggleType;
		__this->___wiggleType_21 = L_0;
		float L_1 = ___wiggleMagnitude;
		__this->___wiggleMagnitude_22 = L_1;
		int32_t L_2 = ___wiggleCycles;
		__this->___wiggleCycles_23 = (((float)L_2));
		bool L_3 = ___wiggleClockwise;
		__this->___wiggleClockwise_24 = L_3;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocationMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// SizeCamera/CameraConfiguredHandler
#include "AssemblyU2DCSharp_SizeCamera_CameraConfiguredHandler.h"
// MouseTrap
#include "AssemblyU2DCSharp_MouseTrap.h"
// System.Collections.Generic.List`1<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
// SizeCamera/CameraConfiguredHandler
#include "AssemblyU2DCSharp_SizeCamera_CameraConfiguredHandlerMethodDeclarations.h"
// MouseTrap
#include "AssemblyU2DCSharp_MouseTrapMethodDeclarations.h"
struct Component_t762;
struct SizeCamera_t516;
// Declaration !!0 UnityEngine.Component::GetComponent<SizeCamera>()
// !!0 UnityEngine.Component::GetComponent<SizeCamera>()
#define Component_GetComponent_TisSizeCamera_t516_m4290(__this, method) (( SizeCamera_t516 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)
struct Utilities_t674;
struct MouseMove_t527;
struct GameObject_t352;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t674;
struct Object_t;
struct GameObject_t352;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m4292_gshared (Object_t * __this /* static, unused */, GameObject_t352 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m4292(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4292_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291(__this /* static, unused */, p0, method) (( MouseMove_t527 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4292_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t352;
struct MouseTrap_t604;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseTrap>()
// !!0 UnityEngine.GameObject::GetComponent<MouseTrap>()
#define GameObject_GetComponent_TisMouseTrap_t604_m4293(__this, method) (( MouseTrap_t604 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void MouseSinkController::.ctor()
extern "C" void MouseSinkController__ctor_m3177 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	{
		__this->___trapCapacity_5 = 1;
		__this->___trapBasicZ_7 = (-0.1f);
		__this->___distortDelay_8 = (0.9f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::.cctor()
extern TypeInfo* MouseSinkController_t601_il2cpp_TypeInfo_var;
extern "C" void MouseSinkController__cctor_m3178 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSinkController_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseSinkController_t601_StaticFields*)MouseSinkController_t601_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_9 = (90.0f);
		return;
	}
}
// System.Int32 MouseSinkController::get_savedMouseCount()
extern "C" int32_t MouseSinkController_get_savedMouseCount_m3179 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CsavedMouseCountU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void MouseSinkController::set_savedMouseCount(System.Int32)
extern "C" void MouseSinkController_set_savedMouseCount_m3180 (MouseSinkController_t601 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CsavedMouseCountU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void MouseSinkController::Awake()
extern TypeInfo* List_1_t600_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4294_MethodInfo_var;
extern "C" void MouseSinkController_Awake_m3181 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(552);
		List_1__ctor_m4294_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484205);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSinkController_set_savedMouseCount_m3180(__this, 0, /*hidden argument*/NULL);
		List_1_t600 * L_0 = (List_1_t600 *)il2cpp_codegen_object_new (List_1_t600_il2cpp_TypeInfo_var);
		List_1__ctor_m4294(L_0, /*hidden argument*/List_1__ctor_m4294_MethodInfo_var);
		__this->___mouseTraps_12 = L_0;
		return;
	}
}
// System.Void MouseSinkController::Start()
extern const MethodInfo* Component_GetComponent_TisSizeCamera_t516_m4290_MethodInfo_var;
extern "C" void MouseSinkController_Start_m3182 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSizeCamera_t516_m4290_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484206);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t545 * L_0 = Camera_get_main_m4022(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SizeCamera_t516 * L_1 = Component_GetComponent_TisSizeCamera_t516_m4290(L_0, /*hidden argument*/Component_GetComponent_TisSizeCamera_t516_m4290_MethodInfo_var);
		__this->___sizeCameraWorld_14 = L_1;
		MouseSinkController_RegisterForEvents_m3184(__this, /*hidden argument*/NULL);
		MouseSinkController_Reset_m3188(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::OnDestroy()
extern "C" void MouseSinkController_OnDestroy_m3183 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	{
		MouseSinkController_UnregisterForEvents_m3185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* CameraConfiguredHandler_t642_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSinkController_OnInstanceChanged_m3187_MethodInfo_var;
extern const MethodInfo* MouseSinkController_OnCameraChanged_m3186_MethodInfo_var;
extern "C" void MouseSinkController_RegisterForEvents_m3184 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		CameraConfiguredHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		MouseSinkController_OnInstanceChanged_m3187_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		MouseSinkController_OnCameraChanged_m3186_MethodInfo_var = il2cpp_codegen_method_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_15);
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
		__this->___registeredForEvents_15 = 1;
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSinkController_OnInstanceChanged_m3187_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_3 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2999(L_1, L_3, /*hidden argument*/NULL);
		SizeCamera_t516 * L_4 = (__this->___sizeCameraWorld_14);
		IntPtr_t L_5 = { (void*)MouseSinkController_OnCameraChanged_m3186_MethodInfo_var };
		CameraConfiguredHandler_t642 * L_6 = (CameraConfiguredHandler_t642 *)il2cpp_codegen_object_new (CameraConfiguredHandler_t642_il2cpp_TypeInfo_var);
		CameraConfiguredHandler__ctor_m3455(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SizeCamera_add_CameraConfigured_m3460(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* CameraConfiguredHandler_t642_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSinkController_OnInstanceChanged_m3187_MethodInfo_var;
extern const MethodInfo* MouseSinkController_OnCameraChanged_m3186_MethodInfo_var;
extern "C" void MouseSinkController_UnregisterForEvents_m3185 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		CameraConfiguredHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		MouseSinkController_OnInstanceChanged_m3187_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		MouseSinkController_OnCameraChanged_m3186_MethodInfo_var = il2cpp_codegen_method_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_15);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSinkController_OnInstanceChanged_m3187_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_3 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3000(L_1, L_3, /*hidden argument*/NULL);
		SizeCamera_t516 * L_4 = (__this->___sizeCameraWorld_14);
		IntPtr_t L_5 = { (void*)MouseSinkController_OnCameraChanged_m3186_MethodInfo_var };
		CameraConfiguredHandler_t642 * L_6 = (CameraConfiguredHandler_t642 *)il2cpp_codegen_object_new (CameraConfiguredHandler_t642_il2cpp_TypeInfo_var);
		CameraConfiguredHandler__ctor_m3455(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SizeCamera_remove_CameraConfigured_m3461(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void MouseSinkController::OnCameraChanged()
extern "C" void MouseSinkController_OnCameraChanged_m3186 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	{
		MouseSinkController_Reset_m3188(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::OnInstanceChanged()
extern "C" void MouseSinkController_OnInstanceChanged_m3187 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	{
		MouseSinkController_Reset_m3188(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::Reset()
extern "C" void MouseSinkController_Reset_m3188 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	MouseTrap_t604 * V_1 = {0};
	int32_t V_2 = 0;
	MouseSinkController_t601 * G_B3_0 = {0};
	MouseSinkController_t601 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	MouseSinkController_t601 * G_B4_1 = {0};
	MouseSinkController_t601 * G_B7_0 = {0};
	MouseSinkController_t601 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	MouseSinkController_t601 * G_B8_1 = {0};
	{
		SizeCamera_t516 * L_0 = (__this->___sizeCameraWorld_14);
		NullCheck(L_0);
		float L_1 = SizeCamera_GetAspectRatio_m3464(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = (__this->___mouseHoleLocation_13);
		G_B2_0 = __this;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B3_0 = __this;
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = (__this->___mouseHoleLocation_13);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0030:
	{
		NullCheck(G_B4_1);
		G_B4_1->___spreadClockwise_6 = G_B4_0;
		goto IL_0057;
	}

IL_003a:
	{
		int32_t L_5 = (__this->___mouseHoleLocation_13);
		G_B6_0 = __this;
		if (!L_5)
		{
			G_B7_0 = __this;
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = (__this->___mouseHoleLocation_13);
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0052:
	{
		NullCheck(G_B8_1);
		G_B8_1->___spreadClockwise_6 = G_B8_0;
	}

IL_0057:
	{
		MouseSinkController_set_savedMouseCount_m3180(__this, 0, /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0063:
	{
		List_1_t600 * L_7 = (__this->___mouseTraps_12);
		NullCheck(L_7);
		MouseTrap_t604 * L_8 = (MouseTrap_t604 *)VirtFuncInvoker1< MouseTrap_t604 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_7, 0);
		V_1 = L_8;
		List_1_t600 * L_9 = (__this->___mouseTraps_12);
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32) */, L_9, 0);
		MouseTrap_t604 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t352 * L_11 = Component_get_gameObject_m3771(L_10, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0087:
	{
		List_1_t600 * L_12 = (__this->___mouseTraps_12);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_12);
		if (L_13)
		{
			goto IL_0063;
		}
	}
	{
		V_2 = 0;
		goto IL_00a8;
	}

IL_009e:
	{
		MouseSinkController_AddTrap_m3190(__this, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00a8:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = (__this->___trapCapacity_5);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_009e;
		}
	}
	{
		return;
	}
}
// System.Void MouseSinkController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var;
extern "C" void MouseSinkController_OnTriggerEnter2D_m3189 (MouseSinkController_t601 * __this, Collider2D_t700 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484209);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t527 * V_0 = {0};
	{
		Collider2D_t700 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4233(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1094, /*hidden argument*/NULL);
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
		Collider2D_t700 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3771(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		MouseMove_t527 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t527 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		MouseMove_t527 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MouseMove_GetMousePhase_m3174(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		List_1_t600 * L_10 = (__this->___mouseTraps_12);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_10);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		DeadMouseRelay_t529 * L_12 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		MouseMove_t527 * L_13 = V_0;
		NullCheck(L_12);
		DeadMouseRelay_HandleMouseKill_m2860(L_12, L_13, /*hidden argument*/NULL);
		MouseSinkController_RemoveTopmostMouseTrap_m3194(__this, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_0062:
	{
		int32_t L_14 = MouseSinkController_get_savedMouseCount_m3179(__this, /*hidden argument*/NULL);
		MouseSinkController_set_savedMouseCount_m3180(__this, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		GameController_t555 * L_15 = GameController_get_instance_m2951(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseMove_t527 * L_16 = V_0;
		NullCheck(L_15);
		GameController_OnMouseExit_m2964(L_15, L_16, /*hidden argument*/NULL);
		MouseMove_t527 * L_17 = V_0;
		NullCheck(L_17);
		MouseMove_OnSafeExit_m3172(L_17, /*hidden argument*/NULL);
	}

IL_0081:
	{
		return;
	}
}
// System.Void MouseSinkController::AddTrap()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseTrap_t604_m4293_MethodInfo_var;
extern "C" void MouseSinkController_AddTrap_m3190 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisMouseTrap_t604_m4293_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484210);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t352 * V_1 = {0};
	MouseTrap_t604 * V_2 = {0};
	{
		List_1_t600 * L_0 = (__this->___mouseTraps_12);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_0);
		V_0 = L_1;
		GameObject_t352 * L_2 = (__this->___mouseTrapPrototype_10);
		Vector3_t535  L_3 = {0};
		Vector3__ctor_m4049(&L_3, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t789  L_4 = Quaternion_get_identity_m4175(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t704 * L_5 = Object_Instantiate_m4176(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((GameObject_t352 *)IsInst(L_5, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_6 = V_1;
		NullCheck(L_6);
		Transform_t406 * L_7 = GameObject_get_transform_m4054(L_6, /*hidden argument*/NULL);
		Transform_t406 * L_8 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m4295(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t352 * L_9 = V_1;
		int32_t L_10 = V_0;
		MouseSinkController_PositionNthMousetrap_m3193(__this, L_9, L_10, /*hidden argument*/NULL);
		GameObject_t352 * L_11 = V_1;
		NullCheck(L_11);
		MouseTrap_t604 * L_12 = GameObject_GetComponent_TisMouseTrap_t604_m4293(L_11, /*hidden argument*/GameObject_GetComponent_TisMouseTrap_t604_m4293_MethodInfo_var);
		V_2 = L_12;
		List_1_t600 * L_13 = (__this->___mouseTraps_12);
		MouseTrap_t604 * L_14 = V_2;
		NullCheck(L_13);
		VirtActionInvoker1< MouseTrap_t604 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseTrap>::Add(!0) */, L_13, L_14);
		return;
	}
}
// UnityEngine.Vector3 MouseSinkController::NthMouseTrapPosition(System.Int32)
extern "C" Vector3_t535  MouseSinkController_NthMouseTrapPosition_m3191 (MouseSinkController_t601 * __this, int32_t ___i, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___i;
		V_0 = ((float)((float)(0.2f)*(float)(((float)L_0))));
		int32_t L_1 = ___i;
		V_1 = ((float)((float)(0.3f)*(float)(((float)L_1))));
		bool L_2 = (__this->___spreadClockwise_6);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		float L_3 = V_1;
		V_1 = ((float)((float)L_3*(float)(-1.0f)));
	}

IL_0025:
	{
		float L_4 = (__this->___trapBasicZ_7);
		int32_t L_5 = ___i;
		V_2 = ((float)((float)L_4+(float)((float)((float)(0.01f)*(float)(((float)L_5))))));
		float L_6 = V_0;
		float L_7 = V_1;
		float L_8 = V_2;
		Vector3_t535  L_9 = {0};
		Vector3__ctor_m4049(&L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single MouseSinkController::NthMouseTrapRotation(System.Int32)
extern "C" float MouseSinkController_NthMouseTrapRotation_m3192 (MouseSinkController_t601 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___spreadClockwise_6);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___i;
		return ((float)((float)(90.0f)-(float)((float)((float)(((float)L_1))*(float)(5.0f)))));
	}

IL_001a:
	{
		int32_t L_2 = ___i;
		return ((float)((float)(90.0f)+(float)((float)((float)(((float)L_2))*(float)(5.0f)))));
	}
}
// System.Void MouseSinkController::PositionNthMousetrap(UnityEngine.GameObject,System.Int32)
extern "C" void MouseSinkController_PositionNthMousetrap_m3193 (MouseSinkController_t601 * __this, GameObject_t352 * ___mouseTrapGameObject, int32_t ___i, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___mouseTrapGameObject;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4054(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		Vector3_t535  L_3 = MouseSinkController_NthMouseTrapPosition_m3191(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m4214(L_1, L_3, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = ___mouseTrapGameObject;
		NullCheck(L_4);
		Transform_t406 * L_5 = GameObject_get_transform_m4054(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = MouseSinkController_NthMouseTrapRotation_m3192(__this, L_6, /*hidden argument*/NULL);
		Quaternion_t789  L_8 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localRotation_m4228(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::RemoveTopmostMouseTrap()
extern "C" void MouseSinkController_RemoveTopmostMouseTrap_m3194 (MouseSinkController_t601 * __this, const MethodInfo* method)
{
	MouseTrap_t604 * V_0 = {0};
	int32_t V_1 = 0;
	Vector3_t535  V_2 = {0};
	float V_3 = 0.0f;
	{
		List_1_t600 * L_0 = (__this->___mouseTraps_12);
		NullCheck(L_0);
		MouseTrap_t604 * L_1 = (MouseTrap_t604 *)VirtFuncInvoker1< MouseTrap_t604 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_0, 0);
		V_0 = L_1;
		List_1_t600 * L_2 = (__this->___mouseTraps_12);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32) */, L_2, 0);
		MouseTrap_t604 * L_3 = V_0;
		NullCheck(L_3);
		MouseTrap_AnimateOut_m3229(L_3, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_004d;
	}

IL_0026:
	{
		int32_t L_4 = V_1;
		Vector3_t535  L_5 = MouseSinkController_NthMouseTrapPosition_m3191(__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_1;
		float L_7 = MouseSinkController_NthMouseTrapRotation_m3192(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t600 * L_8 = (__this->___mouseTraps_12);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		MouseTrap_t604 * L_10 = (MouseTrap_t604 *)VirtFuncInvoker1< MouseTrap_t604 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_8, L_9);
		Vector3_t535  L_11 = V_2;
		float L_12 = V_3;
		NullCheck(L_10);
		MouseTrap_SlideTo_m3230(L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		List_1_t600 * L_15 = (__this->___mouseTraps_12);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
// System.Void MouseSinkController::SetTrapCapacity(System.Int32)
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var;
extern "C" void MouseSinkController_SetTrapCapacity_m3195 (MouseSinkController_t601 * __this, int32_t ___newTrapCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	DistortForEffect_t534 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_001d;
	}

IL_0007:
	{
		MouseSinkController_AddTrap_m3190(__this, /*hidden argument*/NULL);
		V_0 = 1;
		int32_t L_0 = (__this->___trapCapacity_5);
		__this->___trapCapacity_5 = ((int32_t)((int32_t)L_0+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_1 = (__this->___trapCapacity_5);
		int32_t L_2 = ___newTrapCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0007;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		GameLevelState_t557 * L_4 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GameLevelState_get_gameLevel_m2977(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		DistortForEffect_t534 * L_6 = Component_GetComponent_TisDistortForEffect_t534_m4182(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var);
		V_1 = L_6;
		DistortForEffect_t534 * L_7 = V_1;
		bool L_8 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		DistortForEffect_t534 * L_9 = V_1;
		float L_10 = (__this->___distortDelay_8);
		NullCheck(L_9);
		DistortForEffect_DistortWithDelay_m2886(L_9, L_10, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// MouseSpawnFromData/MouseSpawnEventHandler
#include "AssemblyU2DCSharp_MouseSpawnFromData_MouseSpawnEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// MouseSpawnFromData/MouseSpawnEventHandler
#include "AssemblyU2DCSharp_MouseSpawnFromData_MouseSpawnEventHandlerMethodDeclarations.h"



// System.Void MouseSpawnFromData/MouseSpawnEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MouseSpawnEventHandler__ctor_m3196 (MouseSpawnEventHandler_t602 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke()
extern "C" void MouseSpawnEventHandler_Invoke_m3197 (MouseSpawnEventHandler_t602 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MouseSpawnEventHandler_Invoke_m3197((MouseSpawnEventHandler_t602 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MouseSpawnEventHandler_t602(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseSpawnFromData/MouseSpawnEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MouseSpawnEventHandler_BeginInvoke_m3198 (MouseSpawnEventHandler_t602 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseSpawnEventHandler_EndInvoke_m3199 (MouseSpawnEventHandler_t602 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct GameObject_t352;
struct MouseMove_t527;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
// !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
#define GameObject_GetComponent_TisMouseMove_t527_m4296(__this, method) (( MouseMove_t527 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m3200 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	{
		__this->___maxRandomDelay_4 = (4.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_add_MouseSpawn_m3201 (MouseSpawnFromData_t554 * __this, MouseSpawnEventHandler_t602 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t602 * L_0 = (__this->___MouseSpawn_9);
		MouseSpawnEventHandler_t602 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_9 = ((MouseSpawnEventHandler_t602 *)Castclass(L_2, MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m3202 (MouseSpawnFromData_t554 * __this, MouseSpawnEventHandler_t602 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t602 * L_0 = (__this->___MouseSpawn_9);
		MouseSpawnEventHandler_t602 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_9 = ((MouseSpawnEventHandler_t602 *)Castclass(L_2, MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m3203 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmiceSpawnedU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m3204 (MouseSpawnFromData_t554 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmiceSpawnedU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void MouseSpawnFromData::Awake()
extern TypeInfo* MouseSpawnFromData_t554_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_Awake_m3205 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseSpawnFromData_t554_StaticFields*)MouseSpawnFromData_t554_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m3206 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_RegisterForEvents_m3208(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m3207 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_UnregisterForEvents_m3209(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m3210_MethodInfo_var;
extern "C" void MouseSpawnFromData_RegisterForEvents_m3208 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseSpawnFromData_OnPhaseChanged_m3210_MethodInfo_var = il2cpp_codegen_method_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)MouseSpawnFromData_OnPhaseChanged_m3210_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_2 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m3001(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_8 = 1;
		return;
	}
}
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m3210_MethodInfo_var;
extern "C" void MouseSpawnFromData_UnregisterForEvents_m3209 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseSpawnFromData_OnPhaseChanged_m3210_MethodInfo_var = il2cpp_codegen_method_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_8);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSpawnFromData_OnPhaseChanged_m3210_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m3210 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3016(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___nextSpawnTime_6 = ((float)((float)L_2+(float)(1.0f)));
		goto IL_002b;
	}

IL_0025:
	{
		MouseSpawnFromData_Clear_m3215(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m3211 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3016(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		float L_2 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		MouseSpawnFromData_MaybeProduceNextMouse_m3212(__this, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m3212 (MouseSpawnFromData_t554 * __this, float ___timeNow, const MethodInfo* method)
{
	ExplicitMouseDesc_t536 * V_0 = {0};
	{
		List_1_t576 * L_0 = (__this->___miceDesc_5);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t576 * L_1 = (__this->___miceDesc_5);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		return;
	}

IL_001c:
	{
		float L_3 = ___timeNow;
		float L_4 = (__this->___nextSpawnTime_6);
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		List_1_t576 * L_5 = (__this->___miceDesc_5);
		NullCheck(L_5);
		ExplicitMouseDesc_t536 * L_6 = (ExplicitMouseDesc_t536 *)VirtFuncInvoker1< ExplicitMouseDesc_t536 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_5, 0);
		V_0 = L_6;
		List_1_t576 * L_7 = (__this->___miceDesc_5);
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32) */, L_7, 0);
		ExplicitMouseDesc_t536 * L_8 = V_0;
		MouseSpawnFromData_ProduceMouse_m3213(__this, L_8, /*hidden argument*/NULL);
		float L_9 = ___timeNow;
		ExplicitMouseDesc_t536 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___delayToNextMouse_4);
		__this->___nextSpawnTime_6 = ((float)((float)L_9+(float)L_11));
		return;
	}
}
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseMove_t527_m4296_MethodInfo_var;
extern "C" void MouseSpawnFromData_ProduceMouse_m3213 (MouseSpawnFromData_t554 * __this, ExplicitMouseDesc_t536 * ___emd, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisMouseMove_t527_m4296_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484212);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	MouseMove_t527 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___mousePrototype_7);
		Vector3_t535  L_1 = {0};
		Vector3__ctor_m4049(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t789  L_2 = Quaternion_get_identity_m4175(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t704 * L_3 = Object_Instantiate_m4176(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		MouseMove_t527 * L_5 = GameObject_GetComponent_TisMouseMove_t527_m4296(L_4, /*hidden argument*/GameObject_GetComponent_TisMouseMove_t527_m4296_MethodInfo_var);
		V_1 = L_5;
		MouseMove_t527 * L_6 = V_1;
		ExplicitMouseDesc_t536 * L_7 = ___emd;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___mouseType_0);
		ExplicitMouseDesc_t536 * L_9 = ___emd;
		NullCheck(L_9);
		int32_t L_10 = (L_9->___mouseHoleLocation_1);
		ExplicitMouseDesc_t536 * L_11 = ___emd;
		NullCheck(L_11);
		bool L_12 = (L_11->___isClockwise_2);
		ExplicitMouseDesc_t536 * L_13 = ___emd;
		NullCheck(L_13);
		int32_t L_14 = (L_13->___track_3);
		NullCheck(L_6);
		MouseMove_SetupMouse_m3175(L_6, L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		ExplicitMouseDesc_t536 * L_15 = ___emd;
		NullCheck(L_15);
		int32_t L_16 = ExplicitMouseDesc_get_wiggleType_m2892(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		MouseMove_t527 * L_17 = V_1;
		ExplicitMouseDesc_t536 * L_18 = ___emd;
		NullCheck(L_18);
		int32_t L_19 = ExplicitMouseDesc_get_wiggleType_m2892(L_18, /*hidden argument*/NULL);
		ExplicitMouseDesc_t536 * L_20 = ___emd;
		NullCheck(L_20);
		float L_21 = ExplicitMouseDesc_get_wiggleMagnitude_m2894(L_20, /*hidden argument*/NULL);
		ExplicitMouseDesc_t536 * L_22 = ___emd;
		NullCheck(L_22);
		int32_t L_23 = ExplicitMouseDesc_get_wiggleCycles_m2896(L_22, /*hidden argument*/NULL);
		ExplicitMouseDesc_t536 * L_24 = ___emd;
		NullCheck(L_24);
		bool L_25 = ExplicitMouseDesc_get_wiggleClockwise_m2898(L_24, /*hidden argument*/NULL);
		NullCheck(L_17);
		MouseMove_AddWiggle_m3176(L_17, L_19, L_21, L_23, L_25, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_26 = MouseSpawnFromData_get_miceSpawned_m3203(__this, /*hidden argument*/NULL);
		MouseSpawnFromData_set_miceSpawned_m3204(__this, ((int32_t)((int32_t)L_26+(int32_t)1)), /*hidden argument*/NULL);
		MouseSpawnEventHandler_t602 * L_27 = (__this->___MouseSpawn_9);
		if (!L_27)
		{
			goto IL_009c;
		}
	}
	{
		MouseSpawnEventHandler_t602 * L_28 = (__this->___MouseSpawn_9);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke() */, L_28);
	}

IL_009c:
	{
		return;
	}
}
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m3214 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	{
		List_1_t576 * L_0 = (__this->___miceDesc_5);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_0);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void MouseSpawnFromData::Clear()
extern TypeInfo* List_1_t576_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4240_MethodInfo_var;
extern "C" void MouseSpawnFromData_Clear_m3215 (MouseSpawnFromData_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t576_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t576 * L_0 = (List_1_t576 *)il2cpp_codegen_object_new (List_1_t576_il2cpp_TypeInfo_var);
		List_1__ctor_m4240(L_0, /*hidden argument*/List_1__ctor_m4240_MethodInfo_var);
		__this->___miceDesc_5 = L_0;
		MouseSpawnFromData_set_miceSpawned_m3204(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern const MethodInfo* List_1_AddRange_m4268_MethodInfo_var;
extern "C" void MouseSpawnFromData_AddMice_m3216 (MouseSpawnFromData_t554 * __this, List_1_t576 * ___explicitMice, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m4268_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484190);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t576 * L_0 = (__this->___miceDesc_5);
		List_1_t576 * L_1 = ___explicitMice;
		NullCheck(L_0);
		List_1_AddRange_m4268(L_0, L_1, /*hidden argument*/List_1_AddRange_m4268_MethodInfo_var);
		return;
	}
}
// MouseSpawnTracker
#include "AssemblyU2DCSharp_MouseSpawnTracker.h"
#ifndef _MSC_VER
#else
#endif
// MouseSpawnTracker
#include "AssemblyU2DCSharp_MouseSpawnTrackerMethodDeclarations.h"



// System.Void MouseSpawnTracker::.ctor()
extern "C" void MouseSpawnTracker__ctor_m3217 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::Start()
extern "C" void MouseSpawnTracker_Start_m3218 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_RegisterForEvents_m3220(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateLevelConfig_m3224(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateSlider_m3225(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::OnDestroy()
extern "C" void MouseSpawnTracker_OnDestroy_m3219 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UnregisterForEvents_m3221(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::RegisterForEvents()
extern TypeInfo* MouseSpawnFromData_t554_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnMouseSpawned_m3223_MethodInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnLevelChanged_m3222_MethodInfo_var;
extern "C" void MouseSpawnTracker_RegisterForEvents_m3220 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		MouseSpawnTracker_OnMouseSpawned_m3223_MethodInfo_var = il2cpp_codegen_method_info_from_index(565);
		MouseSpawnTracker_OnLevelChanged_m3222_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
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
		MouseSpawnFromData_t554 * L_1 = ((MouseSpawnFromData_t554_StaticFields*)MouseSpawnFromData_t554_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MouseSpawnTracker_OnMouseSpawned_m3223_MethodInfo_var };
		MouseSpawnEventHandler_t602 * L_3 = (MouseSpawnEventHandler_t602 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m3196(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_add_MouseSpawn_m3201(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t557 * L_4 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseSpawnTracker_OnLevelChanged_m3222_MethodInfo_var };
		GameLevelChangedEventHandler_t556 * L_6 = (GameLevelChangedEventHandler_t556 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2970(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_add_GameLevelChanged_m2975(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::UnregisterForEvents()
extern TypeInfo* MouseSpawnFromData_t554_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnMouseSpawned_m3223_MethodInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnLevelChanged_m3222_MethodInfo_var;
extern "C" void MouseSpawnTracker_UnregisterForEvents_m3221 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		MouseSpawnTracker_OnMouseSpawned_m3223_MethodInfo_var = il2cpp_codegen_method_info_from_index(565);
		MouseSpawnTracker_OnLevelChanged_m3222_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		MouseSpawnFromData_t554 * L_1 = ((MouseSpawnFromData_t554_StaticFields*)MouseSpawnFromData_t554_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MouseSpawnTracker_OnMouseSpawned_m3223_MethodInfo_var };
		MouseSpawnEventHandler_t602 * L_3 = (MouseSpawnEventHandler_t602 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t602_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m3196(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_remove_MouseSpawn_m3202(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t557 * L_4 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseSpawnTracker_OnLevelChanged_m3222_MethodInfo_var };
		GameLevelChangedEventHandler_t556 * L_6 = (GameLevelChangedEventHandler_t556 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t556_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2970(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_remove_GameLevelChanged_m2976(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void MouseSpawnTracker::OnLevelChanged()
extern "C" void MouseSpawnTracker_OnLevelChanged_m3222 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UpdateLevelConfig_m3224(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateSlider_m3225(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::OnMouseSpawned()
extern "C" void MouseSpawnTracker_OnMouseSpawned_m3223 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UpdateSlider_m3225(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::UpdateLevelConfig()
extern "C" void MouseSpawnTracker_UpdateLevelConfig_m3224 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	LevelDescription_t582 * V_1 = {0};
	{
		GameLevelState_t557 * L_0 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m2977(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		LevelConfig_t588 * L_3 = LevelConfig_get_instance_m3094(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		LevelDescription_t582 * L_4 = LevelConfig_GetCurrentLevelDescription_m3103(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		LevelDescription_t582 * L_5 = V_1;
		NullCheck(L_5);
		List_1_t576 * L_6 = (L_5->___explicitMouseDescs_1);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_6);
		__this->___miceThisLevel_4 = L_7;
		goto IL_003a;
	}

IL_0033:
	{
		__this->___miceThisLevel_4 = 1;
	}

IL_003a:
	{
		return;
	}
}
// System.Void MouseSpawnTracker::UpdateSlider()
extern TypeInfo* MouseSpawnFromData_t554_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnTracker_UpdateSlider_m3225 (MouseSpawnTracker_t603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		MouseSpawnFromData_t554 * L_0 = ((MouseSpawnFromData_t554_StaticFields*)MouseSpawnFromData_t554_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = MouseSpawnFromData_get_miceSpawned_m3203(L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___miceThisLevel_4);
		V_0 = ((float)((float)(((float)L_1))/(float)(((float)L_2))));
		Slider_t495 * L_3 = (__this->___slider_3);
		float L_4 = V_0;
		NullCheck(L_3);
		Slider_set_value_m4181(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinner.h"
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinnerMethodDeclarations.h"
struct GameObject_t352;
struct AcceleratingSpinner_t491;
// Declaration !!0 UnityEngine.GameObject::GetComponent<AcceleratingSpinner>()
// !!0 UnityEngine.GameObject::GetComponent<AcceleratingSpinner>()
#define GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297(__this, method) (( AcceleratingSpinner_t491 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void MouseTrap::.ctor()
extern "C" void MouseTrap__ctor_m3226 (MouseTrap_t604 * __this, const MethodInfo* method)
{
	{
		__this->___timeToSlide_9 = (0.5f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseTrap::Start()
extern "C" void MouseTrap_Start_m3227 (MouseTrap_t604 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MouseTrap::Update()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void MouseTrap_Update_m3228 (MouseTrap_t604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0 = (__this->___sliding_3);
		if (!L_0)
		{
			goto IL_00dc;
		}
	}
	{
		float L_1 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___startSlideTime_4);
		float L_3 = (__this->___timeToSlide_9);
		V_0 = ((float)((float)((float)((float)L_1-(float)L_2))/(float)L_3));
		float L_4 = V_0;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_0030:
	{
		float L_5 = (__this->___originalRotation_5);
		float L_6 = (__this->___targetRotation_7);
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Lerp_m4285(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t535 * L_9 = &(__this->___originalPosition_6);
		float L_10 = (L_9->___x_1);
		Vector3_t535 * L_11 = &(__this->___targetPosition_8);
		float L_12 = (L_11->___x_1);
		float L_13 = V_0;
		float L_14 = Mathf_Lerp_m4285(NULL /*static, unused*/, L_10, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Vector3_t535 * L_15 = &(__this->___originalPosition_6);
		float L_16 = (L_15->___y_2);
		Vector3_t535 * L_17 = &(__this->___targetPosition_8);
		float L_18 = (L_17->___y_2);
		float L_19 = V_0;
		float L_20 = Mathf_Lerp_m4285(NULL /*static, unused*/, L_16, L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_t535 * L_21 = &(__this->___originalPosition_6);
		float L_22 = (L_21->___z_3);
		Vector3_t535 * L_23 = &(__this->___targetPosition_8);
		float L_24 = (L_23->___z_3);
		float L_25 = V_0;
		float L_26 = Mathf_Lerp_m4285(NULL /*static, unused*/, L_22, L_24, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t406 * L_27 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_28 = V_1;
		Quaternion_t789  L_29 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localRotation_m4228(L_27, L_29, /*hidden argument*/NULL);
		Transform_t406 * L_30 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_31 = V_2;
		float L_32 = V_3;
		float L_33 = V_4;
		Vector3_t535  L_34 = {0};
		Vector3__ctor_m4049(&L_34, L_31, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m4214(L_30, L_34, /*hidden argument*/NULL);
		float L_35 = V_0;
		if ((!(((float)L_35) >= ((float)(1.0f)))))
		{
			goto IL_00dc;
		}
	}
	{
		__this->___sliding_3 = 0;
	}

IL_00dc:
	{
		return;
	}
}
// System.Void MouseTrap::AnimateOut()
extern "C" void MouseTrap_AnimateOut_m3229 (MouseTrap_t604 * __this, const MethodInfo* method)
{
	{
		MouseTrap_DoTrapDestructionFX_m3231(__this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseTrap::SlideTo(UnityEngine.Vector3,System.Single)
extern "C" void MouseTrap_SlideTo_m3230 (MouseTrap_t604 * __this, Vector3_t535  ___newPosition, float ___newRotation, const MethodInfo* method)
{
	Quaternion_t789  V_0 = {0};
	Vector3_t535  V_1 = {0};
	{
		Vector3_t535  L_0 = ___newPosition;
		__this->___targetPosition_8 = L_0;
		float L_1 = ___newRotation;
		__this->___targetRotation_7 = L_1;
		__this->___sliding_3 = 1;
		float L_2 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startSlideTime_4 = L_2;
		Transform_t406 * L_3 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t789  L_4 = Transform_get_localRotation_m4298(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t535  L_5 = Quaternion_get_eulerAngles_m4299((&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ((&V_1)->___z_3);
		__this->___originalRotation_5 = L_6;
		Transform_t406 * L_7 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t535  L_8 = Transform_get_localPosition_m4212(L_7, /*hidden argument*/NULL);
		__this->___originalPosition_6 = L_8;
		return;
	}
}
// System.Void MouseTrap::DoTrapDestructionFX()
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297_MethodInfo_var;
extern "C" void MouseTrap_DoTrapDestructionFX_m3231 (MouseTrap_t604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484215);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t546 * V_1 = {0};
	AcceleratingSpinner_t491 * V_2 = {0};
	Vector3_t535  V_3 = {0};
	Vector3_t535  V_4 = {0};
	{
		SFXPlayer_t636 * L_0 = SFXPlayer_get_instance_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SFXPlayer_Play_m3414(L_0, 7, /*hidden argument*/NULL);
		GameObject_t352 * L_1 = (__this->___mouseTrapEffectPrototype_2);
		GameObject_t352 * L_2 = Object_Instantiate_TisGameObject_t352_m4276(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var);
		V_0 = L_2;
		GameObject_t352 * L_3 = V_0;
		NullCheck(L_3);
		FlyingAnimation_t546 * L_4 = GameObject_GetComponent_TisFlyingAnimation_t546_m4278(L_3, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var);
		V_1 = L_4;
		FlyingAnimation_t546 * L_5 = V_1;
		Transform_t406 * L_6 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t535  L_7 = Transform_get_position_m4056(L_6, /*hidden argument*/NULL);
		Vector3_t535  L_8 = {0};
		Vector3__ctor_m4049(&L_8, (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		FlyingAnimation_ConfigureWithViewportPos_m2933(L_5, L_7, L_8, /*hidden argument*/NULL);
		FlyingAnimation_t546 * L_9 = V_1;
		NullCheck(L_9);
		FlyingAnimation_Run_m2934(L_9, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = V_0;
		NullCheck(L_10);
		AcceleratingSpinner_t491 * L_11 = GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297(L_10, /*hidden argument*/GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297_MethodInfo_var);
		V_2 = L_11;
		AcceleratingSpinner_t491 * L_12 = V_2;
		Transform_t406 * L_13 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t535  L_14 = Transform_get_eulerAngles_m4300(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = ((&V_3)->___z_3);
		Camera_t545 * L_16 = Camera_get_main_m4022(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_t406 * L_17 = Component_get_transform_m4051(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t535  L_18 = Transform_get_eulerAngles_m4300(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = ((&V_4)->___z_3);
		NullCheck(L_12);
		AcceleratingSpinner_Configure_m2711(L_12, ((float)((float)L_15-(float)L_19)), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Resources_t791;
struct Material_t523;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
#define Resources_Load_TisMaterial_t523_m4301(__this /* static, unused */, p0, method) (( Material_t523 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4197_gshared)(__this /* static, unused */, p0, method)


// System.Void MouseTypeDesc::.ctor(System.String,System.String,System.Single,System.Single)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t510_m4196_MethodInfo_var;
extern const MethodInfo* Resources_Load_TisMaterial_t523_m4301_MethodInfo_var;
extern "C" void MouseTypeDesc__ctor_m3232 (MouseTypeDesc_t605 * __this, String_t* ___oldImageName, String_t* ___newImageName, float ___speed, float ___scale, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t510_m4196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		Resources_Load_TisMaterial_t523_m4301_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484216);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___newImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1095, L_0, (String_t*) &_stringLiteral1096, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t510 * L_3 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___deadMouseSprite_0 = L_3;
		String_t* L_4 = ___newImageName;
		String_t* L_5 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1095, L_4, (String_t*) &_stringLiteral1097, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t510 * L_7 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___exitingMouseSprite_1 = L_7;
		String_t* L_8 = ___newImageName;
		String_t* L_9 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1098, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = V_0;
		Material_t523 * L_11 = Resources_Load_TisMaterial_t523_m4301(NULL /*static, unused*/, L_10, /*hidden argument*/Resources_Load_TisMaterial_t523_m4301_MethodInfo_var);
		__this->___mouseMaterial_3 = L_11;
		String_t* L_12 = ___newImageName;
		String_t* L_13 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1099, L_12, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		Sprite_t510 * L_15 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_14, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___introScreenSprite_2 = L_15;
		float L_16 = ___speed;
		__this->___speed_4 = L_16;
		float L_17 = ___scale;
		__this->___scale_5 = L_17;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void MouseWiggleDesc::.ctor(System.String,System.Single,System.Single,System.Int32,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t510_m4196_MethodInfo_var;
extern "C" void MouseWiggleDesc__ctor_m3233 (MouseWiggleDesc_t606 * __this, String_t* ___introScreenImageName, float ___minMagnitude, float ___maxMagnitude, int32_t ___minCycles, int32_t ___maxCycles, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t510_m4196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___introScreenImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1101, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t510 * L_3 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___introScreenSprite_0 = L_3;
		float L_4 = ___minMagnitude;
		__this->___minMagnitude_1 = L_4;
		float L_5 = ___maxMagnitude;
		__this->___maxMagnitude_2 = L_5;
		int32_t L_6 = ___minCycles;
		__this->___minCycles_3 = L_6;
		int32_t L_7 = ___maxCycles;
		__this->___maxCycles_4 = L_7;
		return;
	}
}
// MusicButton
#include "AssemblyU2DCSharp_MusicButton.h"
#ifndef _MSC_VER
#else
#endif
// MusicButton
#include "AssemblyU2DCSharp_MusicButtonMethodDeclarations.h"

// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandl.h"
// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandlMethodDeclarations.h"


// System.Void MusicButton::.ctor()
extern "C" void MusicButton__ctor_m3234 (MusicButton_t607 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t510_m4196_MethodInfo_var;
extern "C" void MusicButton_Awake_m3235 (MusicButton_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t510_m4196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1102;
		String_t* L_0 = V_0;
		Sprite_t510 * L_1 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___onSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1103;
		String_t* L_2 = V_0;
		Sprite_t510 * L_3 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___offSprite_4 = L_3;
		return;
	}
}
// System.Void MusicButton::Start()
extern "C" void MusicButton_Start_m3236 (MusicButton_t607 * __this, const MethodInfo* method)
{
	{
		MusicButton_RegisterForEvents_m3238(__this, /*hidden argument*/NULL);
		MusicButton_UpdateButtonImage_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::OnDestroy()
extern "C" void MusicButton_OnDestroy_m3237 (MusicButton_t607 * __this, const MethodInfo* method)
{
	{
		MusicButton_UnregisterForEvents_m3239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::RegisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3240_MethodInfo_var;
extern "C" void MusicButton_RegisterForEvents_m3238 (MusicButton_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		MusicButton_OnMusicMuteChanged_m3240_MethodInfo_var = il2cpp_codegen_method_info_from_index(569);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3240_MethodInfo_var };
		MusicMuteChangedEventHandler_t651 * L_3 = (MusicMuteChangedEventHandler_t651 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3505(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_MusicMuteChanged_m3512(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UnregisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3240_MethodInfo_var;
extern "C" void MusicButton_UnregisterForEvents_m3239 (MusicButton_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		MusicButton_OnMusicMuteChanged_m3240_MethodInfo_var = il2cpp_codegen_method_info_from_index(569);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3240_MethodInfo_var };
		MusicMuteChangedEventHandler_t651 * L_3 = (MusicMuteChangedEventHandler_t651 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3505(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_MusicMuteChanged_m3513(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MusicButton::OnMusicMuteChanged()
extern "C" void MusicButton_OnMusicMuteChanged_m3240 (MusicButton_t607 * __this, const MethodInfo* method)
{
	{
		MusicButton_UpdateButtonImage_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UpdateButtonImage()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void MusicButton_UpdateButtonImage_m3241 (MusicButton_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3516(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t501 * L_2 = (__this->___buttonImage_5);
		Sprite_t510 * L_3 = (__this->___offSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m4185(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t501 * L_4 = (__this->___buttonImage_5);
		Sprite_t510 * L_5 = (__this->___onSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m4185(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// MusicPlayer/<PlayMusic>c__Iterator17
#include "AssemblyU2DCSharp_MusicPlayer_U3CPlayMusicU3Ec__Iterator17.h"
#ifndef _MSC_VER
#else
#endif
// MusicPlayer/<PlayMusic>c__Iterator17
#include "AssemblyU2DCSharp_MusicPlayer_U3CPlayMusicU3Ec__Iterator17MethodDeclarations.h"

// MusicPlayer
#include "AssemblyU2DCSharp_MusicPlayer.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"


// System.Void MusicPlayer/<PlayMusic>c__Iterator17::.ctor()
extern "C" void U3CPlayMusicU3Ec__Iterator17__ctor_m3242 (U3CPlayMusicU3Ec__Iterator17_t610 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object MusicPlayer/<PlayMusic>c__Iterator17::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayMusicU3Ec__Iterator17_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3243 (U3CPlayMusicU3Ec__Iterator17_t610 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object MusicPlayer/<PlayMusic>c__Iterator17::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayMusicU3Ec__Iterator17_System_Collections_IEnumerator_get_Current_m3244 (U3CPlayMusicU3Ec__Iterator17_t610 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean MusicPlayer/<PlayMusic>c__Iterator17::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayMusicU3Ec__Iterator17_MoveNext_m3245 (U3CPlayMusicU3Ec__Iterator17_t610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		goto IL_0076;
	}

IL_0021:
	{
		WaitForSeconds_t786 * L_2 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_2, (0.5f), /*hidden argument*/NULL);
		__this->___U24current_2 = L_2;
		__this->___U24PC_1 = 1;
		goto IL_0078;
	}

IL_003d:
	{
		MusicPlayer_t609 * L_3 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		L_3->___playCuedMusic_6 = (Object_t *)NULL;
		AudioSource_t608 * L_4 = (__this->___music_0);
		MusicPlayer_t609 * L_5 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_5);
		AudioSource_t608 * L_6 = (L_5->___currentMusic_5);
		bool L_7 = Object_op_Equality_m3796(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		AudioSource_t608 * L_8 = (__this->___music_0);
		NullCheck(L_8);
		AudioSource_Play_m4302(L_8, /*hidden argument*/NULL);
	}

IL_006f:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void MusicPlayer/<PlayMusic>c__Iterator17::Dispose()
extern "C" void U3CPlayMusicU3Ec__Iterator17_Dispose_m3246 (U3CPlayMusicU3Ec__Iterator17_t610 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void MusicPlayer/<PlayMusic>c__Iterator17::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CPlayMusicU3Ec__Iterator17_Reset_m3247 (U3CPlayMusicU3Ec__Iterator17_t610 * __this, const MethodInfo* method)
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
// MusicPlayer
#include "AssemblyU2DCSharp_MusicPlayerMethodDeclarations.h"



// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m3248 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m3249 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_RegisterForEvents_m3251(__this, /*hidden argument*/NULL);
		MusicPlayer_UpdateAllMusic_m3255(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m3250 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UnregisterForEvents_m3252(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3253_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3254_MethodInfo_var;
extern "C" void MusicPlayer_RegisterForEvents_m3251 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		MusicPlayer_OnGamePhaseChanged_m3253_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
		MusicPlayer_OnMusicMuteChanged_m3254_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3253_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t652 * L_4 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3254_MethodInfo_var };
		MusicMuteChangedEventHandler_t651 * L_6 = (MusicMuteChangedEventHandler_t651 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3505(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_add_MusicMuteChanged_m3512(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3253_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3254_MethodInfo_var;
extern "C" void MusicPlayer_UnregisterForEvents_m3252 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		MusicPlayer_OnGamePhaseChanged_m3253_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
		MusicPlayer_OnMusicMuteChanged_m3254_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3253_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t652 * L_4 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3254_MethodInfo_var };
		MusicMuteChangedEventHandler_t651 * L_6 = (MusicMuteChangedEventHandler_t651 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t651_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3505(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_remove_MusicMuteChanged_m3513(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m3253 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3255(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m3254 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3255(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::UpdateAllMusic()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void MusicPlayer_UpdateAllMusic_m3255 (MusicPlayer_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t608 * V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = (AudioSource_t608 *)NULL;
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3516(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		GamePhaseState_t561 * L_2 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3003(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 0)
		{
			goto IL_0039;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 1)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 3)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0045;
	}

IL_0039:
	{
		AudioSource_t608 * L_5 = (__this->___gameMusic_3);
		V_0 = L_5;
		goto IL_0051;
	}

IL_0045:
	{
		AudioSource_t608 * L_6 = (__this->___menuMusic_4);
		V_0 = L_6;
		goto IL_0051;
	}

IL_0051:
	{
		AudioSource_t608 * L_7 = V_0;
		AudioSource_t608 * L_8 = (__this->___currentMusic_5);
		bool L_9 = Object_op_Equality_m3796(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		return;
	}

IL_0063:
	{
		AudioSource_t608 * L_10 = (__this->___currentMusic_5);
		bool L_11 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_10, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		AudioSource_t608 * L_12 = (__this->___currentMusic_5);
		NullCheck(L_12);
		bool L_13 = AudioSource_get_isPlaying_m4303(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		AudioSource_t608 * L_14 = (__this->___currentMusic_5);
		NullCheck(L_14);
		AudioSource_Stop_m4015(L_14, /*hidden argument*/NULL);
	}

IL_008f:
	{
		Object_t * L_15 = (__this->___playCuedMusic_6);
		if (!L_15)
		{
			goto IL_00ad;
		}
	}
	{
		Object_t * L_16 = (__this->___playCuedMusic_6);
		MonoBehaviour_StopCoroutine_m4195(__this, L_16, /*hidden argument*/NULL);
		__this->___playCuedMusic_6 = (Object_t *)NULL;
	}

IL_00ad:
	{
		__this->___currentMusic_5 = (AudioSource_t608 *)NULL;
		AudioSource_t608 * L_17 = V_0;
		bool L_18 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e0;
		}
	}
	{
		AudioSource_t608 * L_19 = V_0;
		__this->___currentMusic_5 = L_19;
		AudioSource_t608 * L_20 = V_0;
		Object_t * L_21 = MusicPlayer_PlayMusic_m3256(__this, L_20, /*hidden argument*/NULL);
		__this->___playCuedMusic_6 = L_21;
		Object_t * L_22 = (__this->___playCuedMusic_6);
		MonoBehaviour_StartCoroutine_m3734(__this, L_22, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		return;
	}
}
// System.Collections.IEnumerator MusicPlayer::PlayMusic(UnityEngine.AudioSource)
extern TypeInfo* U3CPlayMusicU3Ec__Iterator17_t610_il2cpp_TypeInfo_var;
extern "C" Object_t * MusicPlayer_PlayMusic_m3256 (MusicPlayer_t609 * __this, AudioSource_t608 * ___music, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayMusicU3Ec__Iterator17_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayMusicU3Ec__Iterator17_t610 * V_0 = {0};
	{
		U3CPlayMusicU3Ec__Iterator17_t610 * L_0 = (U3CPlayMusicU3Ec__Iterator17_t610 *)il2cpp_codegen_object_new (U3CPlayMusicU3Ec__Iterator17_t610_il2cpp_TypeInfo_var);
		U3CPlayMusicU3Ec__Iterator17__ctor_m3242(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayMusicU3Ec__Iterator17_t610 * L_1 = V_0;
		AudioSource_t608 * L_2 = ___music;
		NullCheck(L_1);
		L_1->___music_0 = L_2;
		U3CPlayMusicU3Ec__Iterator17_t610 * L_3 = V_0;
		AudioSource_t608 * L_4 = ___music;
		NullCheck(L_3);
		L_3->___U3CU24U3Emusic_3 = L_4;
		U3CPlayMusicU3Ec__Iterator17_t610 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CPlayMusicU3Ec__Iterator17_t610 * L_6 = V_0;
		return L_6;
	}
}
// ParseAnalyticsController
#include "AssemblyU2DCSharp_ParseAnalyticsController.h"
#ifndef _MSC_VER
#else
#endif
// ParseAnalyticsController
#include "AssemblyU2DCSharp_ParseAnalyticsControllerMethodDeclarations.h"

// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// Parse.ParseAnalytics
#include "Parse_Unity_Parse_ParseAnalyticsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"


// System.Void ParseAnalyticsController::.ctor()
extern "C" void ParseAnalyticsController__ctor_m3257 (ParseAnalyticsController_t611 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::Start()
extern "C" void ParseAnalyticsController_Start_m3258 (ParseAnalyticsController_t611 * __this, const MethodInfo* method)
{
	{
		ParseAnalytics_TrackAppOpenedAsync_m4304(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseAnalyticsController_RegisterForEvents_m3260(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnDestroy()
extern "C" void ParseAnalyticsController_OnDestroy_m3259 (ParseAnalyticsController_t611 * __this, const MethodInfo* method)
{
	{
		ParseAnalyticsController_UnregisterForEvents_m3261(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3263_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3262_MethodInfo_var;
extern "C" void ParseAnalyticsController_RegisterForEvents_m3260 (ParseAnalyticsController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ParseAnalyticsController_OnGamePhaseChanged_m3263_MethodInfo_var = il2cpp_codegen_method_info_from_index(572);
		ParseAnalyticsController_OnBoostActive_m3262_MethodInfo_var = il2cpp_codegen_method_info_from_index(573);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3263_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3001(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t494 * L_4 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3262_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_6 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2784(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3263_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3262_MethodInfo_var;
extern "C" void ParseAnalyticsController_UnregisterForEvents_m3261 (ParseAnalyticsController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ParseAnalyticsController_OnGamePhaseChanged_m3263_MethodInfo_var = il2cpp_codegen_method_info_from_index(572);
		ParseAnalyticsController_OnBoostActive_m3262_MethodInfo_var = il2cpp_codegen_method_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3263_MethodInfo_var };
		GamePhaseChangedEventHandler_t560 * L_3 = (GamePhaseChangedEventHandler_t560 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t560_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2988(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t494 * L_4 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3262_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_6 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2785(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void ParseAnalyticsController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* BoostType_t506_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3710_MethodInfo_var;
extern "C" void ParseAnalyticsController_OnBoostActive_m3262 (ParseAnalyticsController_t611 * __this, int32_t ___bType, int32_t ___oldType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		BoostType_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		Dictionary_2__ctor_m3710_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	{
		int32_t L_0 = ___bType;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		Dictionary_2_t122 * L_1 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3710(L_1, /*hidden argument*/Dictionary_2__ctor_m3710_MethodInfo_var);
		V_0 = L_1;
		Dictionary_2_t122 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t561 * L_4 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_instancesFinishedThisSession_m3007(L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m409(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral1104, L_8);
		Dictionary_2_t122 * L_9 = V_0;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t561 * L_11 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = GamePhaseState_get_instancesFinishedEver_m3009(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m409(NULL /*static, unused*/, L_10, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral1105, L_15);
		Dictionary_2_t122 * L_16 = V_0;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t557 * L_18 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = GameLevelState_get_gameLevel_m2977(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_m409(NULL /*static, unused*/, L_17, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_16, (String_t*) &_stringLiteral1106, L_22);
		Dictionary_2_t122 * L_23 = V_0;
		String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_25 = ___bType;
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(BoostType_t506_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral1107, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t513 * L_31 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_32 = ___bType;
		NullCheck(L_31);
		int32_t L_33 = PlayerStats_GetPurchasedBoostCount_m3372(L_31, L_32, /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = String_Concat_m409(NULL /*static, unused*/, L_30, L_35, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1108, L_36);
		Dictionary_2_t122 * L_37 = V_0;
		ParseAnalytics_TrackEventAsync_m4305(NULL /*static, unused*/, (String_t*) &_stringLiteral1109, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnGamePhaseChanged()
extern "C" void ParseAnalyticsController_OnGamePhaseChanged_m3263 (ParseAnalyticsController_t611 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		ParseAnalyticsController_LogGameOverEvent_m3264(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void ParseAnalyticsController::LogGameOverEvent()
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3710_MethodInfo_var;
extern "C" void ParseAnalyticsController_LogGameOverEvent_m3264 (ParseAnalyticsController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Dictionary_2__ctor_m3710_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	String_t* G_B2_0 = {0};
	Dictionary_2_t122 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	Dictionary_2_t122 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	Dictionary_2_t122 * G_B3_2 = {0};
	{
		Dictionary_2_t122 * L_0 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3710(L_0, /*hidden argument*/Dictionary_2__ctor_m3710_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t122 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t561 * L_3 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GamePhaseState_get_instancesFinishedThisSession_m3007(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m409(NULL /*static, unused*/, L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral1104, L_7);
		Dictionary_2_t122 * L_8 = V_0;
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t561 * L_10 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = GamePhaseState_get_instancesFinishedEver_m3009(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m409(NULL /*static, unused*/, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral1105, L_14);
		Dictionary_2_t122 * L_15 = V_0;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t513 * L_17 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = PlayerStats_get_gameScore_m3355(L_17, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_m409(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral542, L_21);
		Dictionary_2_t122 * L_22 = V_0;
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t513 * L_24 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = PlayerStats_get_money_m3357(L_24, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_22, (String_t*) &_stringLiteral1110, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t557 * L_31 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = GameLevelState_get_gameLevel_m2977(L_31, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35 = String_Concat_m409(NULL /*static, unused*/, L_30, L_34, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1106, L_35);
		Dictionary_2_t122 * L_36 = V_0;
		PlayerStats_t513 * L_37 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = PlayerStats_GetHighScore_m3376(L_37, /*hidden argument*/NULL);
		PlayerStats_t513 * L_39 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40 = PlayerStats_get_gameScore_m3355(L_39, /*hidden argument*/NULL);
		G_B1_0 = (String_t*) &_stringLiteral1111;
		G_B1_1 = L_36;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_40))))
		{
			G_B2_0 = (String_t*) &_stringLiteral1111;
			G_B2_1 = L_36;
			goto IL_00e3;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral105;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_00e8;
	}

IL_00e3:
	{
		G_B3_0 = (String_t*) &_stringLiteral106;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_00e8:
	{
		NullCheck(G_B3_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, G_B3_2, G_B3_1, G_B3_0);
		Dictionary_2_t122 * L_41 = V_0;
		ParseAnalytics_TrackEventAsync_m4305(NULL /*static, unused*/, (String_t*) &_stringLiteral1112, L_41, /*hidden argument*/NULL);
		return;
	}
}
// PausePlayToggle
#include "AssemblyU2DCSharp_PausePlayToggle.h"
#ifndef _MSC_VER
#else
#endif
// PausePlayToggle
#include "AssemblyU2DCSharp_PausePlayToggleMethodDeclarations.h"



// System.Void PausePlayToggle::.ctor()
extern "C" void PausePlayToggle__ctor_m3265 (PausePlayToggle_t612 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::TogglePausePlay()
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern TypeInfo* PausedOverlay_t613_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_TogglePausePlay_m3266 (PausePlayToggle_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		PausedOverlay_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t657 * L_0 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m3538(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TimeController_t657 * L_2 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		TimeController_UnPauseTime_m3542(L_2, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_001e:
	{
		TimeController_t657 * L_3 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_PauseTime_m3541(L_3, /*hidden argument*/NULL);
		PausedOverlay_t613 * L_4 = ((PausedOverlay_t613_StaticFields*)PausedOverlay_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_4);
		PausedOverlay_ShowBigPlayButton_m3274(L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandler.h"
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandlerMethodDeclarations.h"


// System.Void PausedOverlay::.ctor()
extern "C" void PausedOverlay__ctor_m3267 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Awake()
extern TypeInfo* PausedOverlay_t613_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_Awake_m3268 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PausedOverlay_t613_StaticFields*)PausedOverlay_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		__this->___registeredForEvents_6 = 0;
		Button_t499 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3771(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3971(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Start()
extern "C" void PausedOverlay_Start_m3269 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_RegisterForEvents_m3270(__this, /*hidden argument*/NULL);
		PausedOverlay_UpdateUX_m3273(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::RegisterForEvents()
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t656_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3272_MethodInfo_var;
extern "C" void PausedOverlay_RegisterForEvents_m3270 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		PauseChangedEventHandler_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		PausedOverlay_OnPauseChanged_m3272_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t657 * L_0 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_1 = { (void*)PausedOverlay_OnPauseChanged_m3272_MethodInfo_var };
		PauseChangedEventHandler_t656 * L_2 = (PauseChangedEventHandler_t656 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t656_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m3531(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TimeController_add_PauseChanged_m3536(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_6 = 1;
		return;
	}
}
// System.Void PausedOverlay::UnregisterForEvents()
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t656_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3272_MethodInfo_var;
extern "C" void PausedOverlay_UnregisterForEvents_m3271 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		PauseChangedEventHandler_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		PausedOverlay_OnPauseChanged_m3272_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_6);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		TimeController_t657 * L_1 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)PausedOverlay_OnPauseChanged_m3272_MethodInfo_var };
		PauseChangedEventHandler_t656 * L_3 = (PauseChangedEventHandler_t656 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t656_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m3531(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimeController_remove_PauseChanged_m3537(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PausedOverlay::OnPauseChanged()
extern "C" void PausedOverlay_OnPauseChanged_m3272 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_UpdateUX_m3273(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::UpdateUX()
extern TypeInfo* TimeController_t657_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_UpdateUX_m3273 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t657 * L_0 = ((TimeController_t657_StaticFields*)TimeController_t657_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m3538(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___overlay_3);
		NullCheck(L_2);
		GameObject_SetActive_m3971(L_2, 1, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_0020:
	{
		GameObject_t352 * L_3 = (__this->___overlay_3);
		NullCheck(L_3);
		GameObject_SetActive_m3971(L_3, 0, /*hidden argument*/NULL);
		Button_t499 * L_4 = (__this->___bigPlayButton_4);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3771(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3971(L_5, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = (__this->___childElement_5);
		bool L_7 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_6, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		GameObject_t352 * L_8 = (__this->___childElement_5);
		NullCheck(L_8);
		Transform_t406 * L_9 = GameObject_get_transform_m4054(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetParent_m4177(L_9, (Transform_t406 *)NULL, 0, /*hidden argument*/NULL);
		__this->___childElement_5 = (GameObject_t352 *)NULL;
	}

IL_0067:
	{
		return;
	}
}
// System.Void PausedOverlay::ShowBigPlayButton()
extern "C" void PausedOverlay_ShowBigPlayButton_m3274 (PausedOverlay_t613 * __this, const MethodInfo* method)
{
	{
		Button_t499 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3771(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3971(L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::SetChildElement(UnityEngine.GameObject)
extern "C" void PausedOverlay_SetChildElement_m3275 (PausedOverlay_t613 * __this, GameObject_t352 * ___newChildElement, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___newChildElement;
		__this->___childElement_5 = L_0;
		Button_t499 * L_1 = (__this->___bigPlayButton_4);
		NullCheck(L_1);
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m3971(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___childElement_5);
		bool L_4 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_3, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GameObject_t352 * L_5 = (__this->___childElement_5);
		NullCheck(L_5);
		Transform_t406 * L_6 = GameObject_get_transform_m4054(L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_7 = (__this->___overlay_3);
		NullCheck(L_7);
		Transform_t406 * L_8 = GameObject_get_transform_m4054(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m4177(L_6, L_8, 0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// PawCollider
#include "AssemblyU2DCSharp_PawCollider.h"
#ifndef _MSC_VER
#else
#endif
// PawCollider
#include "AssemblyU2DCSharp_PawColliderMethodDeclarations.h"

// PawController
#include "AssemblyU2DCSharp_PawController.h"
// PawController
#include "AssemblyU2DCSharp_PawControllerMethodDeclarations.h"


// System.Void PawCollider::.ctor()
extern "C" void PawCollider__ctor_m3276 (PawCollider_t615 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3277 (PawCollider_t615 * __this, Collider2D_t700 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t700 * L_0 = ___other;
		PawCollider_HandleCollision_m3279(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3278 (PawCollider_t615 * __this, Collider2D_t700 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t700 * L_0 = ___other;
		PawCollider_HandleCollision_m3279(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var;
extern "C" void PawCollider_HandleCollision_m3279 (PawCollider_t615 * __this, Collider2D_t700 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484209);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t527 * V_0 = {0};
	{
		Collider2D_t700 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4233(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1094, /*hidden argument*/NULL);
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
		Collider2D_t700 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3771(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		MouseMove_t527 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t527 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m3148(L_6, /*hidden argument*/NULL);
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
		DeadMouseRelay_t529 * L_8 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		MouseMove_t527 * L_9 = V_0;
		NullCheck(L_8);
		DeadMouseRelay_HandleMouseKill_m2860(L_8, L_9, /*hidden argument*/NULL);
		PawController_t614 * L_10 = (__this->___pawController_2);
		bool L_11 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		PawController_t614 * L_12 = (__this->___pawController_2);
		NullCheck(L_12);
		PawController_CountKill_m3300(L_12, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhase.h"
#ifndef _MSC_VER
#else
#endif
// PawController/SwipePhase
#include "AssemblyU2DCSharp_PawController_SwipePhaseMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2D.h"
// TimerWidget
#include "AssemblyU2DCSharp_TimerWidget.h"
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// TimerWidget
#include "AssemblyU2DCSharp_TimerWidgetMethodDeclarations.h"
struct GameObject_t352;
struct TimerWidget_t618;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TimerWidget>()
// !!0 UnityEngine.GameObject::GetComponent<TimerWidget>()
#define GameObject_GetComponent_TisTimerWidget_t618_m4306(__this, method) (( TimerWidget_t618 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m3280 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m3281 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_17 = 0;
		return;
	}
}
// System.Void PawController::Start()
extern "C" void PawController_Start_m3282 (PawController_t614 * __this, const MethodInfo* method)
{
	Vector3_t535  V_0 = {0};
	{
		__this->___swipePhase_4 = 0;
		__this->___swipeSpeed_14 = (14.0f);
		__this->___initialPauseLength_15 = (0.5f);
		Transform_t406 * L_0 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Transform_t406 * L_1 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_1);
		Vector3_t535  L_2 = Transform_get_localPosition_m4212(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m4214(L_0, L_2, /*hidden argument*/NULL);
		Transform_t406 * L_3 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_3);
		Vector3_t535  L_4 = Transform_get_localPosition_m4212(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Vector3_get_magnitude_m4282((&V_0), /*hidden argument*/NULL);
		__this->___pawHomeCatTransformMagnitude_20 = L_5;
		CircleCollider2D_t617 * L_6 = (__this->___normalCollider_11);
		NullCheck(L_6);
		CircleCollider2D_set_radius_m4307(L_6, (0.4f), /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_7 = (__this->___bigCollider_12);
		CircleCollider2D_t617 * L_8 = (__this->___normalCollider_11);
		NullCheck(L_8);
		float L_9 = CircleCollider2D_get_radius_m4308(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		CircleCollider2D_set_radius_m4307(L_7, ((float)((float)L_9*(float)(2.0f))), /*hidden argument*/NULL);
		PawController_RegisterForEvents_m3284(__this, /*hidden argument*/NULL);
		PawController_UpdatePawState_m3290(__this, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3292(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m3283 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		PawController_UnregisterForEvents_m3285(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3286_MethodInfo_var;
extern "C" void PawController_RegisterForEvents_m3284 (PawController_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PawController_OnBoostUsageChanged_m3286_MethodInfo_var = il2cpp_codegen_method_info_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)PawController_OnBoostUsageChanged_m3286_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_2 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2784(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_17 = 1;
		return;
	}
}
// System.Void PawController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3286_MethodInfo_var;
extern "C" void PawController_UnregisterForEvents_m3285 (PawController_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PawController_OnBoostUsageChanged_m3286_MethodInfo_var = il2cpp_codegen_method_info_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_17);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		BoostConfig_t494 * L_1 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PawController_OnBoostUsageChanged_m3286_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_3 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2785(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m3286 (PawController_t614 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		__this->___swipeSpeed_14 = (14.0f);
		__this->___initialPauseLength_15 = (0.1665f);
		goto IL_003d;
	}

IL_0021:
	{
		int32_t L_1 = ___oldType;
		if (L_1)
		{
			goto IL_003d;
		}
	}
	{
		__this->___swipeSpeed_14 = (14.0f);
		__this->___initialPauseLength_15 = (0.5f);
	}

IL_003d:
	{
		int32_t L_2 = ___newType;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_3 = ___oldType;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}

IL_004b:
	{
		PawController_UpdatePawState_m3290(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void PawController::Update()
extern "C" void PawController_Update_m3287 (PawController_t614 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = {0};
	{
		float L_0 = (__this->___timeStartNextSwipe_5);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___timeStartNextSwipe_5);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		__this->___timeStartNextSwipe_5 = (0.0f);
		Vector3_t535  L_3 = (__this->___nextSwipeLocationCat_2);
		__this->___currentSwipeLocationCat_3 = L_3;
		PawController_SetPhase_m3288(__this, 1, /*hidden argument*/NULL);
	}

IL_003e:
	{
		PawController_UpdateTimerWidget_m3298(__this, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___swipePhase_4);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5 == 0)
		{
			goto IL_00a9;
		}
		if (L_5 == 1)
		{
			goto IL_0062;
		}
		if (L_5 == 2)
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00c0;
	}

IL_0062:
	{
		Vector3_t535  L_6 = (__this->___currentSwipeLocationCat_3);
		bool L_7 = PawController_MovePawTowards_m3291(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		PawController_RemoveTimer_m3299(__this, /*hidden argument*/NULL);
		PawController_SetPhase_m3288(__this, 2, /*hidden argument*/NULL);
	}

IL_0080:
	{
		goto IL_00c0;
	}

IL_0085:
	{
		float L_8 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = V_0;
		float L_10 = (__this->___extendedPauseStarted_6);
		if ((!(((float)((float)((float)L_9-(float)L_10))) > ((float)(0.1f)))))
		{
			goto IL_00a4;
		}
	}
	{
		PawController_SetPhase_m3288(__this, 0, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		goto IL_00c0;
	}

IL_00a9:
	{
		Transform_t406 * L_11 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_11);
		Vector3_t535  L_12 = Transform_get_localPosition_m4212(L_11, /*hidden argument*/NULL);
		PawController_MovePawTowards_m3291(__this, L_12, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_00c0:
	{
		return;
	}
}
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern "C" void PawController_SetPhase_m3288 (PawController_t614 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___swipePhase_4);
		V_0 = L_0;
		int32_t L_1 = ___newPhase;
		__this->___swipePhase_4 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_3 = (__this->___killsThisSwipe_16);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		DeadMouseRelay_t529 * L_4 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_5 = (__this->___killsThisSwipe_16);
		Transform_t406 * L_6 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t535  L_7 = Transform_get_position_m4056(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		DeadMouseRelay_HandleMultiKill_m2859(L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		__this->___killsThisSwipe_16 = 0;
	}

IL_0043:
	{
		int32_t L_8 = ___newPhase;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		float L_9 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___extendedPauseStarted_6 = L_9;
		PawController_PlayRandomSound_m3289(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		PawController_UpdatePawState_m3290(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::PlayRandomSound()
extern "C" void PawController_PlayRandomSound_m3289 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t636 * L_0 = SFXPlayer_get_instance_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t636 * L_1 = SFXPlayer_get_instance_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		SFXTypeU5BU5D_t635* L_2 = (L_1->___slapIds_5);
		NullCheck(L_0);
		SFXPlayer_PlayRandom_m3416(L_0, L_2, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m3290 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2788(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_2);
		GameObject_SetActive_m3971(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_3);
		GameObject_SetActive_m3971(L_3, 0, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_4 = (__this->___normalCollider_11);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3771(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3971(L_5, 0, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_6 = (__this->___bigCollider_12);
		NullCheck(L_6);
		GameObject_t352 * L_7 = Component_get_gameObject_m3771(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m3971(L_7, 1, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___swipePhase_4);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_007f;
		}
	}
	{
		GameObject_t352 * L_9 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_9);
		GameObject_SetActive_m3971(L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_10);
		GameObject_SetActive_m3971(L_10, 0, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_11 = (__this->___bigCollider_12);
		NullCheck(L_11);
		Collider2D_set_isTrigger_m4309(L_11, 1, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_007f:
	{
		GameObject_t352 * L_12 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_12);
		GameObject_SetActive_m3971(L_12, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_13 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_13);
		GameObject_SetActive_m3971(L_13, 1, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_14 = (__this->___bigCollider_12);
		NullCheck(L_14);
		Collider2D_set_isTrigger_m4309(L_14, 0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		goto IL_013b;
	}

IL_00a8:
	{
		GameObject_t352 * L_15 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_15);
		GameObject_SetActive_m3971(L_15, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_16 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_16);
		GameObject_SetActive_m3971(L_16, 0, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_17 = (__this->___bigCollider_12);
		NullCheck(L_17);
		GameObject_t352 * L_18 = Component_get_gameObject_m3771(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m3971(L_18, 0, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_19 = (__this->___normalCollider_11);
		NullCheck(L_19);
		GameObject_t352 * L_20 = Component_get_gameObject_m3771(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_m3971(L_20, 1, /*hidden argument*/NULL);
		int32_t L_21 = (__this->___swipePhase_4);
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_0117;
		}
	}
	{
		GameObject_t352 * L_22 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_22);
		GameObject_SetActive_m3971(L_22, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_23 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_23);
		GameObject_SetActive_m3971(L_23, 0, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_24 = (__this->___normalCollider_11);
		NullCheck(L_24);
		Collider2D_set_isTrigger_m4309(L_24, 1, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0117:
	{
		GameObject_t352 * L_25 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_25);
		GameObject_SetActive_m3971(L_25, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_26 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_26);
		GameObject_SetActive_m3971(L_26, 1, /*hidden argument*/NULL);
		CircleCollider2D_t617 * L_27 = (__this->___normalCollider_11);
		NullCheck(L_27);
		Collider2D_set_isTrigger_m4309(L_27, 0, /*hidden argument*/NULL);
	}

IL_013b:
	{
		return;
	}
}
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m3291 (PawController_t614 * __this, Vector3_t535  ___targetLocationCat, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t535  V_1 = {0};
	Vector3_t535  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t535  V_6 = {0};
	bool V_7 = false;
	Vector3_t535  V_8 = {0};
	{
		(&___targetLocationCat)->___z_3 = (0.0f);
		float L_0 = Vector3_get_magnitude_m4282((&___targetLocationCat), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___pawHomeCatTransformMagnitude_20);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		Transform_t406 * L_3 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t535  L_4 = Transform_get_localPosition_m4212(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t535  L_5 = ___targetLocationCat;
		Vector3_t535  L_6 = V_1;
		Vector3_t535  L_7 = Vector3_op_Subtraction_m4310(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (__this->___swipeSpeed_14);
		float L_10 = V_3;
		V_4 = ((float)((float)L_9*(float)L_10));
		float L_11 = Vector3_get_magnitude_m4282((&V_2), /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = V_5;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		return 1;
	}

IL_005d:
	{
		float L_13 = V_5;
		float L_14 = V_4;
		if ((!(((float)L_13) <= ((float)L_14))))
		{
			goto IL_0071;
		}
	}
	{
		Vector3_t535  L_15 = ___targetLocationCat;
		V_6 = L_15;
		V_7 = 1;
		goto IL_008f;
	}

IL_0071:
	{
		Vector3_t535  L_16 = V_2;
		float L_17 = V_4;
		Vector3_t535  L_18 = Vector3_op_Multiply_m4061(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = V_5;
		Vector3_t535  L_20 = Vector3_op_Division_m4311(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		Vector3_t535  L_21 = V_1;
		Vector3_t535  L_22 = V_8;
		Vector3_t535  L_23 = Vector3_op_Addition_m4213(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		V_7 = 0;
	}

IL_008f:
	{
		Transform_t406 * L_24 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Vector3_t535  L_25 = V_6;
		NullCheck(L_24);
		Transform_set_localPosition_m4214(L_24, L_25, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3292(__this, /*hidden argument*/NULL);
		bool L_26 = V_7;
		return L_26;
	}
}
// System.Void PawController::UpdateArmRotation()
extern TypeInfo* Mathf_t728_il2cpp_TypeInfo_var;
extern "C" void PawController_UpdateArmRotation_m3292 (PawController_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t535  V_0 = {0};
	float V_1 = 0.0f;
	{
		Transform_t406 * L_0 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t535  L_1 = Transform_get_localPosition_m4212(L_0, /*hidden argument*/NULL);
		Transform_t406 * L_2 = (__this->___shoulderJointCatTransform_19);
		NullCheck(L_2);
		Vector3_t535  L_3 = Transform_get_localPosition_m4212(L_2, /*hidden argument*/NULL);
		Vector3_t535  L_4 = Vector3_op_Subtraction_m4310(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		float L_6 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t728_il2cpp_TypeInfo_var);
		float L_7 = atan2f(L_5, L_6);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_9 = V_1;
		Quaternion_t789  L_10 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_9*(float)(57.29578f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_m4228(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m3293 (PawController_t614 * __this, Vector3_t535  ___location, const MethodInfo* method)
{
	{
		Vector3_t535  L_0 = ___location;
		__this->___nextSwipeLocationCat_2 = L_0;
		if (0)
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = (__this->___timeStartNextSwipe_5);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}

IL_001d:
	{
		float L_2 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___initialPauseLength_15);
		__this->___timeStartNextSwipe_5 = ((float)((float)L_2+(float)L_3));
	}

IL_002f:
	{
		return;
	}
}
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m3294 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		PawController_RemoveTimer_m3299(__this, /*hidden argument*/NULL);
		PawController_SetPhase_m3288(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::AddTimer()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTimerWidget_t618_m4306_MethodInfo_var;
extern "C" void PawController_AddTimer_m3295 (PawController_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisTimerWidget_t618_m4306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484224);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		PawController_RemoveTimer_m3299(__this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = (__this->___timerWidgetPrototype_21);
		Vector3_t535  L_1 = {0};
		Vector3__ctor_m4049(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t789  L_2 = Quaternion_get_identity_m4175(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t704 * L_3 = Object_Instantiate_m4176(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		TimerWidget_t618 * L_5 = GameObject_GetComponent_TisTimerWidget_t618_m4306(L_4, /*hidden argument*/GameObject_GetComponent_TisTimerWidget_t618_m4306_MethodInfo_var);
		__this->___timerWidget_22 = L_5;
		TimerWidget_t618 * L_6 = (__this->___timerWidget_22);
		float L_7 = (__this->___initialPauseLength_15);
		Vector3_t535  L_8 = PawController_GetTimerWidgetPosition_m3296(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TimerWidget_Configure_m3551(L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 PawController::GetTimerWidgetPosition()
extern "C" Vector3_t535  PawController_GetTimerWidgetPosition_m3296 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t406 * L_1 = Transform_get_parent_m4312(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t406 * L_2 = Component_get_transform_m4051(L_1, /*hidden argument*/NULL);
		Vector3_t535  L_3 = (__this->___nextSwipeLocationCat_2);
		NullCheck(L_2);
		Vector3_t535  L_4 = Transform_TransformVector_m4313(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean PawController::ShouldHaveTimer()
extern "C" bool PawController_ShouldHaveTimer_m3297 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___timeStartNextSwipe_5);
		return ((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
// System.Void PawController::UpdateTimerWidget()
extern "C" void PawController_UpdateTimerWidget_m3298 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		bool L_0 = PawController_ShouldHaveTimer_m3297(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		TimerWidget_t618 * L_1 = (__this->___timerWidget_22);
		bool L_2 = Object_op_Equality_m3796(NULL /*static, unused*/, L_1, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		PawController_AddTimer_m3295(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		TimerWidget_t618 * L_3 = (__this->___timerWidget_22);
		Vector3_t535  L_4 = PawController_GetTimerWidgetPosition_m3296(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TimerWidget_UpdatePosition_m3552(L_3, L_4, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0038:
	{
		TimerWidget_t618 * L_5 = (__this->___timerWidget_22);
		bool L_6 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_5, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		PawController_RemoveTimer_m3299(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void PawController::RemoveTimer()
extern "C" void PawController_RemoveTimer_m3299 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		TimerWidget_t618 * L_0 = (__this->___timerWidget_22);
		bool L_1 = Object_op_Inequality_m3692(NULL /*static, unused*/, L_0, (Object_t704 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		TimerWidget_t618 * L_2 = (__this->___timerWidget_22);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3771(L_2, /*hidden argument*/NULL);
		Object_Destroy_m3915(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___timerWidget_22 = (TimerWidget_t618 *)NULL;
	}

IL_0028:
	{
		return;
	}
}
// System.Void PawController::CountKill()
extern "C" void PawController_CountKill_m3300 (PawController_t614 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___killsThisSwipe_16);
		__this->___killsThisSwipe_16 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"


// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m3301 (PersistentStorage_t619 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::Awake()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_Awake_m3302 (PersistentStorage_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void PersistentStorage::ClearAll()
extern "C" void PersistentStorage_ClearAll_m3303 (PersistentStorage_t619 * __this, const MethodInfo* method)
{
	{
		PlayerPrefs_DeleteAll_m4314(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::SetFloatValue(System.String,System.Single)
extern "C" void PersistentStorage_SetFloatValue_m3304 (PersistentStorage_t619 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		PlayerPrefs_SetFloat_m4315(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single PersistentStorage::GetFloatValue(System.String,System.Single)
extern "C" float PersistentStorage_GetFloatValue_m3305 (PersistentStorage_t619 * __this, String_t* ___name, float ___defaultValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___defaultValue;
		float L_2 = PlayerPrefs_GetFloat_m4316(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern "C" void PersistentStorage_SetIntValue_m3306 (PersistentStorage_t619 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		PlayerPrefs_SetInt_m4317(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern "C" int32_t PersistentStorage_GetIntValue_m3307 (PersistentStorage_t619 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___defaultValue;
		int32_t L_2 = PlayerPrefs_GetInt_m4318(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m3308 (PersistentStorage_t619 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		String_t* L_1 = ___name;
		int32_t L_2 = V_0;
		PlayerPrefs_SetInt_m4317(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern "C" bool PersistentStorage_GetBoolValue_m3309 (PersistentStorage_t619 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___defaultValue;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		String_t* L_1 = ___name;
		int32_t L_2 = V_0;
		int32_t L_3 = PlayerPrefs_GetInt_m4318(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// PlayButtonClickSound
#include "AssemblyU2DCSharp_PlayButtonClickSound.h"
#ifndef _MSC_VER
#else
#endif
// PlayButtonClickSound
#include "AssemblyU2DCSharp_PlayButtonClickSoundMethodDeclarations.h"



// System.Void PlayButtonClickSound::.ctor()
extern "C" void PlayButtonClickSound__ctor_m3310 (PlayButtonClickSound_t620 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayButtonClickSound::Play()
extern "C" void PlayButtonClickSound_Play_m3311 (PlayButtonClickSound_t620 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t636 * L_0 = SFXPlayer_get_instance_m3409(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SFXPlayer_Play_m3414(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// PlayLevelHandler
#include "AssemblyU2DCSharp_PlayLevelHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayLevelHandler
#include "AssemblyU2DCSharp_PlayLevelHandlerMethodDeclarations.h"



// System.Void PlayLevelHandler::.ctor()
extern "C" void PlayLevelHandler__ctor_m3312 (PlayLevelHandler_t621 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayLevelHandler::Play()
extern "C" void PlayLevelHandler_Play_m3313 (PlayLevelHandler_t621 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_TransitionToPhase_m3022(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementType.h"
#ifndef _MSC_VER
#else
#endif
// PlayerController/BodyMovementType
#include "AssemblyU2DCSharp_PlayerController_BodyMovementTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// TipController
#include "AssemblyU2DCSharp_TipController.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"
struct GameObject_t352;
struct PawController_t614;
// Declaration !!0 UnityEngine.GameObject::GetComponent<PawController>()
// !!0 UnityEngine.GameObject::GetComponent<PawController>()
#define GameObject_GetComponent_TisPawController_t614_m4319(__this, method) (( PawController_t614 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)
struct GameObject_t352;
struct FartPuff_t538;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
// !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
#define GameObject_GetComponent_TisFartPuff_t538_m4320(__this, method) (( FartPuff_t538 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3314 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		__this->___startCatAngle_2 = (45.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController/BodyMovementType PlayerController::get_bodyMovement()
extern "C" int32_t PlayerController_get_bodyMovement_m3315 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CbodyMovementU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void PlayerController::set_bodyMovement(PlayerController/BodyMovementType)
extern "C" void PlayerController_set_bodyMovement_m3316 (PlayerController_t623 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CbodyMovementU3Ek__BackingField_17 = L_0;
		return;
	}
}
// PlayerController PlayerController::get_instance()
extern TypeInfo* PlayerController_t623_il2cpp_TypeInfo_var;
extern "C" PlayerController_t623 * PlayerController_get_instance_m3317 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t623 * L_0 = ((PlayerController_t623_StaticFields*)PlayerController_t623_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void PlayerController::set_instance(PlayerController)
extern TypeInfo* PlayerController_t623_il2cpp_TypeInfo_var;
extern "C" void PlayerController_set_instance_m3318 (Object_t * __this /* static, unused */, PlayerController_t623 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t623 * L_0 = ___value;
		((PlayerController_t623_StaticFields*)PlayerController_t623_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void PlayerController::Awake()
extern TypeInfo* TipConfig_t511_il2cpp_TypeInfo_var;
extern "C" void PlayerController_Awake_m3319 (PlayerController_t623 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_instance_m3318(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerController_set_bodyMovement_m3316(__this, 0, /*hidden argument*/NULL);
		TipConfig_t511 * L_0 = (TipConfig_t511 *)il2cpp_codegen_object_new (TipConfig_t511_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3558(L_0, (String_t*) &_stringLiteral1113, (String_t*) &_stringLiteral1114, /*hidden argument*/NULL);
		__this->___turningTip_13 = L_0;
		return;
	}
}
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3320 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		PlayerController_RegisterForEvents_m3322(__this, /*hidden argument*/NULL);
		PlayerController_Reset_m3326(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3321 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		PlayerController_UnregisterForEvents_m3323(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3324_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3325_MethodInfo_var;
extern "C" void PlayerController_RegisterForEvents_m3322 (PlayerController_t623 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PlayerController_OnInstanceChanged_m3324_MethodInfo_var = il2cpp_codegen_method_info_from_index(577);
		PlayerController_OnBoostActive_m3325_MethodInfo_var = il2cpp_codegen_method_info_from_index(578);
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
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3324_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_3 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2999(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t494 * L_4 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3325_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_6 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2784(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3324_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3325_MethodInfo_var;
extern "C" void PlayerController_UnregisterForEvents_m3323 (PlayerController_t623 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PlayerController_OnInstanceChanged_m3324_MethodInfo_var = il2cpp_codegen_method_info_from_index(577);
		PlayerController_OnBoostActive_m3325_MethodInfo_var = il2cpp_codegen_method_info_from_index(578);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_12);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3324_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_3 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3000(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t494 * L_4 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3325_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_6 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2773(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2785(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3324 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		PlayerController_Reset_m3326(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3325 (PlayerController_t623 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3334(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3326 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		PlayerController_set_bodyMovement_m3316(__this, 0, /*hidden argument*/NULL);
		float L_0 = (__this->___startCatAngle_2);
		__this->___currentTurnAngleDegrees_9 = L_0;
		float L_1 = (__this->___currentTurnAngleDegrees_9);
		__this->___targetTurnAngleDegrees_8 = L_1;
		Transform_t406 * L_2 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___currentTurnAngleDegrees_9);
		Quaternion_t789  L_4 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m4164(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3327 (PlayerController_t623 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		PlayerController_MaybeMakeFartPuff_m3333(__this, /*hidden argument*/NULL);
		int32_t L_0 = PlayerController_get_bodyMovement_m3315(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0036;
	}

IL_0020:
	{
		PlayerController_UpdateDrag_m3329(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_002b:
	{
		PlayerController_UpdateTurn_m3328(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0036:
	{
		return;
	}
}
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3328 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___currentTurnAngleDegrees_9);
		float L_1 = (__this->___targetTurnAngleDegrees_8);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0052;
		}
	}
	{
		float L_2 = (__this->___currentTurnAngleDegrees_9);
		float L_3 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentTurnAngleDegrees_9 = ((float)((float)L_2+(float)((float)((float)(180.0f)*(float)L_3))));
		float L_4 = (__this->___currentTurnAngleDegrees_9);
		float L_5 = (__this->___targetTurnAngleDegrees_8);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_004d;
		}
	}
	{
		float L_6 = (__this->___targetTurnAngleDegrees_8);
		__this->___currentTurnAngleDegrees_9 = L_6;
		PlayerController_set_bodyMovement_m3316(__this, 0, /*hidden argument*/NULL);
	}

IL_004d:
	{
		goto IL_008e;
	}

IL_0052:
	{
		float L_7 = (__this->___currentTurnAngleDegrees_9);
		float L_8 = Time_get_deltaTime_m4162(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentTurnAngleDegrees_9 = ((float)((float)L_7-(float)((float)((float)(180.0f)*(float)L_8))));
		float L_9 = (__this->___currentTurnAngleDegrees_9);
		float L_10 = (__this->___targetTurnAngleDegrees_8);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_008e;
		}
	}
	{
		float L_11 = (__this->___targetTurnAngleDegrees_8);
		__this->___currentTurnAngleDegrees_9 = L_11;
		PlayerController_set_bodyMovement_m3316(__this, 0, /*hidden argument*/NULL);
	}

IL_008e:
	{
		Transform_t406 * L_12 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_13 = (__this->___currentTurnAngleDegrees_9);
		Quaternion_t789  L_14 = Quaternion_Euler_m4163(NULL /*static, unused*/, (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m4164(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UpdateDrag()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void PlayerController_UpdateDrag_m3329 (PlayerController_t623 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t535  V_0 = {0};
	bool V_1 = false;
	Vector3_t535  V_2 = {0};
	Vector3_t535  V_3 = {0};
	float V_4 = 0.0f;
	{
		InputHandler_t572 * L_0 = InputHandler_get_instance_m3076(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InputHandler_GetWorldClickPosition_m3086(L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		PlayerController_set_bodyMovement_m3316(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_001b:
	{
		Camera_t545 * L_3 = Camera_get_main_m4022(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t535  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t535  L_5 = Camera_ScreenToWorldPoint_m4057(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Vector3_t535  L_7 = V_2;
		NullCheck(L_6);
		Vector3_t535  L_8 = Transform_InverseTransformPoint_m4321(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t535  L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		float L_10 = Utilities_GetZAngle_m3618(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Transform_t406 * L_11 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		float L_12 = V_4;
		float L_13 = (__this->___dragAnchorAngleCat_11);
		Vector3_t535  L_14 = {0};
		Vector3__ctor_m4049(&L_14, (0.0f), (0.0f), ((float)((float)L_12-(float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m4322(L_11, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var;
extern "C" void PlayerController_HandleDragClickStart_m3330 (PlayerController_t623 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484227);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_bodyMovement_m3316(__this, 2, /*hidden argument*/NULL);
		Transform_t406 * L_0 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Vector2_t110  L_1 = ___worldPoint2d;
		Vector3_t535  L_2 = Vector2_op_Implicit_m4220(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t535  L_3 = Transform_InverseTransformPoint_m4321(L_0, L_2, /*hidden argument*/NULL);
		__this->___dragAnchorCat_10 = L_3;
		Vector3_t535 * L_4 = &(__this->___dragAnchorCat_10);
		L_4->___z_3 = (0.0f);
		Vector3_t535  L_5 = (__this->___dragAnchorCat_10);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		float L_6 = Utilities_GetZAngle_m3618(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___dragAnchorAngleCat_11 = L_6;
		GameObject_t352 * L_7 = (__this->___rightPawGameObject_3);
		NullCheck(L_7);
		PawController_t614 * L_8 = GameObject_GetComponent_TisPawController_t614_m4319(L_7, /*hidden argument*/GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var);
		NullCheck(L_8);
		PawController_CancelSwipe_m3294(L_8, /*hidden argument*/NULL);
		GameObject_t352 * L_9 = (__this->___leftPawGameObject_4);
		NullCheck(L_9);
		PawController_t614 * L_10 = GameObject_GetComponent_TisPawController_t614_m4319(L_9, /*hidden argument*/GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var);
		NullCheck(L_10);
		PawController_CancelSwipe_m3294(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern TypeInfo* TipController_t662_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var;
extern "C" void PlayerController_HandleSlapClickStart_m3331 (PlayerController_t623 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484227);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t535  V_0 = {0};
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	Quaternion_t789  V_3 = {0};
	Vector3_t535  V_4 = {0};
	{
		Vector2_t110  L_0 = ___worldPoint2d;
		GameObject_t352 * L_1 = PlayerController_GetPawToHitWorldLocation_m3335(__this, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		GameObject_t352 * L_2 = V_2;
		bool L_3 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_t352 * L_4 = V_2;
		NullCheck(L_4);
		PawController_t614 * L_5 = GameObject_GetComponent_TisPawController_t614_m4319(L_4, /*hidden argument*/GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var);
		Vector3_t535  L_6 = V_0;
		NullCheck(L_5);
		PawController_Swipe_m3293(L_5, L_6, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0028:
	{
		Transform_t406 * L_7 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t789  L_8 = Transform_get_rotation_m4206(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t535  L_9 = Quaternion_get_eulerAngles_m4299((&V_3), /*hidden argument*/NULL);
		V_4 = L_9;
		float L_10 = ((&V_4)->___z_3);
		__this->___currentTurnAngleDegrees_9 = L_10;
		float L_11 = V_1;
		float L_12 = (__this->___currentTurnAngleDegrees_9);
		__this->___targetTurnAngleDegrees_8 = ((float)((float)L_11+(float)L_12));
		PlayerController_set_bodyMovement_m3316(__this, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_13 = (__this->___rightPawGameObject_3);
		NullCheck(L_13);
		PawController_t614 * L_14 = GameObject_GetComponent_TisPawController_t614_m4319(L_13, /*hidden argument*/GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var);
		NullCheck(L_14);
		PawController_CancelSwipe_m3294(L_14, /*hidden argument*/NULL);
		GameObject_t352 * L_15 = (__this->___leftPawGameObject_4);
		NullCheck(L_15);
		PawController_t614 * L_16 = GameObject_GetComponent_TisPawController_t614_m4319(L_15, /*hidden argument*/GameObject_GetComponent_TisPawController_t614_m4319_MethodInfo_var);
		NullCheck(L_16);
		PawController_CancelSwipe_m3294(L_16, /*hidden argument*/NULL);
		GameLevelState_t557 * L_17 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = GameLevelState_get_gameLevel_m2977(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		TipController_t662 * L_19 = ((TipController_t662_StaticFields*)TipController_t662_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t511 * L_20 = (__this->___turningTip_13);
		float L_21 = (__this->___turningTipPause_14);
		NullCheck(L_19);
		TipController_EnqueueTip_m3573(L_19, L_20, L_21, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		HeadMovement_t570 * L_22 = (__this->___headMovement_5);
		Vector3_t535  L_23 = V_0;
		NullCheck(L_22);
		HeadMovement_LookTowards_m3069(L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3332 (PlayerController_t623 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		DebugConfig_t530 * L_1 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (L_1->___useDebugValues_2);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		PlayerController_set_bodyMovement_m3316(__this, 0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3333 (PlayerController_t623 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2786(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2788(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___lastFartTime_15);
		float L_4 = (__this->___fartPause_16);
		if ((!(((float)L_2) > ((float)((float)((float)L_3+(float)L_4))))))
		{
			goto IL_002d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3334(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PlayerController::MakeFartPuff()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFartPuff_t538_m4320_MethodInfo_var;
extern "C" void PlayerController_MakeFartPuff_m3334 (PlayerController_t623 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisFartPuff_t538_m4320_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484228);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FartPuff_t538 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___fartPuffPrototype_6);
		GameObject_t352 * L_1 = (__this->___butthole_7);
		NullCheck(L_1);
		Transform_t406 * L_2 = GameObject_get_transform_m4054(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t535  L_3 = Transform_get_position_m4056(L_2, /*hidden argument*/NULL);
		Quaternion_t789  L_4 = Quaternion_get_identity_m4175(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t704 * L_5 = Object_Instantiate_m4176(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_5, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_6 = V_0;
		NullCheck(L_6);
		FartPuff_t538 * L_7 = GameObject_GetComponent_TisFartPuff_t538_m4320(L_6, /*hidden argument*/GameObject_GetComponent_TisFartPuff_t538_m4320_MethodInfo_var);
		V_1 = L_7;
		FartPuff_t538 * L_8 = V_1;
		Transform_t406 * L_9 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t789  L_10 = Transform_get_rotation_m4206(L_9, /*hidden argument*/NULL);
		Vector3_t535  L_11 = Vector3_get_left_m4323(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t535  L_12 = Quaternion_op_Multiply_m4287(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		FartPuff_SetDirection_m2915(L_8, L_12, /*hidden argument*/NULL);
		float L_13 = Time_get_time_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastFartTime_15 = L_13;
		return;
	}
}
// UnityEngine.GameObject PlayerController::GetPawToHitWorldLocation(UnityEngine.Vector2,UnityEngine.Vector3&,System.Single&)
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* ConeOfViewController_t521_il2cpp_TypeInfo_var;
extern "C" GameObject_t352 * PlayerController_GetPawToHitWorldLocation_m3335 (PlayerController_t623 * __this, Vector2_t110  ___worldPoint2d, Vector3_t535 * ___swipeLocationCat, float* ___angle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		ConeOfViewController_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t535 * L_0 = ___swipeLocationCat;
		Transform_t406 * L_1 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		Vector2_t110  L_2 = ___worldPoint2d;
		Vector3_t535  L_3 = Vector2_op_Implicit_m4220(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t535  L_4 = Transform_InverseTransformPoint_m4321(L_1, L_3, /*hidden argument*/NULL);
		*L_0 = L_4;
		float* L_5 = ___angle;
		*((float*)(L_5)) = (float)(0.0f);
		Vector3_t535 * L_6 = ___swipeLocationCat;
		float L_7 = Vector3_get_magnitude_m4282(L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) > ((float)(4.6f)))))
		{
			goto IL_004b;
		}
	}
	{
		Vector3_t535 * L_8 = ___swipeLocationCat;
		Vector3_t535 * L_9 = ___swipeLocationCat;
		Vector3_t535 * L_10 = ___swipeLocationCat;
		float L_11 = Vector3_get_magnitude_m4282(L_10, /*hidden argument*/NULL);
		Vector3_t535  L_12 = Vector3_op_Multiply_m4061(NULL /*static, unused*/, (*(Vector3_t535 *)L_9), ((float)((float)(4.6f)/(float)L_11)), /*hidden argument*/NULL);
		*L_8 = L_12;
	}

IL_004b:
	{
		float* L_13 = ___angle;
		Vector3_t535 * L_14 = ___swipeLocationCat;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		float L_15 = Utilities_GetZAngle_m3618(NULL /*static, unused*/, (*(Vector3_t535 *)L_14), /*hidden argument*/NULL);
		*((float*)(L_13)) = (float)L_15;
		float* L_16 = ___angle;
		if ((!(((float)(*((float*)L_16))) >= ((float)(0.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		float* L_17 = ___angle;
		ConeOfViewController_t521 * L_18 = ((ConeOfViewController_t521_StaticFields*)ConeOfViewController_t521_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_18);
		float L_19 = ConeOfViewController_get_actualAngleRange_m2820(L_18, /*hidden argument*/NULL);
		if ((!(((float)(*((float*)L_17))) <= ((float)((float)((float)L_19/(float)(2.0f)))))))
		{
			goto IL_0082;
		}
	}
	{
		GameObject_t352 * L_20 = (__this->___leftPawGameObject_4);
		return L_20;
	}

IL_0082:
	{
		float* L_21 = ___angle;
		if ((!(((float)(*((float*)L_21))) < ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		float* L_22 = ___angle;
		ConeOfViewController_t521 * L_23 = ((ConeOfViewController_t521_StaticFields*)ConeOfViewController_t521_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_23);
		float L_24 = ConeOfViewController_get_actualAngleRange_m2820(L_23, /*hidden argument*/NULL);
		if ((!(((float)(*((float*)L_22))) >= ((float)((float)((float)((-L_24))/(float)(2.0f)))))))
		{
			goto IL_00ad;
		}
	}
	{
		GameObject_t352 * L_25 = (__this->___rightPawGameObject_3);
		return L_25;
	}

IL_00ad:
	{
		return (GameObject_t352 *)NULL;
	}
}
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandlerMethodDeclarations.h"



// System.Void PlayerStats/ScoreChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ScoreChangedEventHandler__ctor_m3336 (ScoreChangedEventHandler_t624 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m3337 (ScoreChangedEventHandler_t624 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreChangedEventHandler_Invoke_m3337((ScoreChangedEventHandler_t624 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t624(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m3338 (ScoreChangedEventHandler_t624 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m3339 (ScoreChangedEventHandler_t624 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandlerMethodDeclarations.h"



// System.Void PlayerStats/MoneyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MoneyChangedEventHandler__ctor_m3340 (MoneyChangedEventHandler_t625 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/MoneyChangedEventHandler::Invoke()
extern "C" void MoneyChangedEventHandler_Invoke_m3341 (MoneyChangedEventHandler_t625 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MoneyChangedEventHandler_Invoke_m3341((MoneyChangedEventHandler_t625 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MoneyChangedEventHandler_t625(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/MoneyChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MoneyChangedEventHandler_BeginInvoke_m3342 (MoneyChangedEventHandler_t625 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/MoneyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MoneyChangedEventHandler_EndInvoke_m3343 (MoneyChangedEventHandler_t625 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// PlayerStats/BoostsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_BoostsChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayerStats/BoostsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_BoostsChangedEventHandlerMethodDeclarations.h"



// System.Void PlayerStats/BoostsChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void BoostsChangedEventHandler__ctor_m3344 (BoostsChangedEventHandler_t626 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m3345 (BoostsChangedEventHandler_t626 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostsChangedEventHandler_Invoke_m3345((BoostsChangedEventHandler_t626 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t626(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m3346 (BoostsChangedEventHandler_t626 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m3347 (BoostsChangedEventHandler_t626 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m3348 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_ScoreChanged_m3349 (PlayerStats_t513 * __this, ScoreChangedEventHandler_t624 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t624 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t624 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t624 *)Castclass(L_2, ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_ScoreChanged_m3350 (PlayerStats_t513 * __this, ScoreChangedEventHandler_t624 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t624 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t624 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t624 *)Castclass(L_2, ScoreChangedEventHandler_t624_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_MoneyChanged_m3351 (PlayerStats_t513 * __this, MoneyChangedEventHandler_t625 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t625 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t625 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t625 *)Castclass(L_2, MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_MoneyChanged_m3352 (PlayerStats_t513 * __this, MoneyChangedEventHandler_t625 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t625 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t625 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t625 *)Castclass(L_2, MoneyChangedEventHandler_t625_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t626_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_BoostsChanged_m3353 (PlayerStats_t513 * __this, BoostsChangedEventHandler_t626 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t626 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t626 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t626 *)Castclass(L_2, BoostsChangedEventHandler_t626_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t626_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_BoostsChanged_m3354 (PlayerStats_t513 * __this, BoostsChangedEventHandler_t626 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t626 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t626 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t626 *)Castclass(L_2, BoostsChangedEventHandler_t626_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 PlayerStats::get_gameScore()
extern "C" int32_t PlayerStats_get_gameScore_m3355 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameScoreU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void PlayerStats::set_gameScore(System.Int32)
extern "C" void PlayerStats_set_gameScore_m3356 (PlayerStats_t513 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameScoreU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 PlayerStats::get_money()
extern "C" int32_t PlayerStats_get_money_m3357 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmoneyU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void PlayerStats::set_money(System.Int32)
extern "C" void PlayerStats_set_money_m3358 (PlayerStats_t513 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmoneyU3Ek__BackingField_10 = L_0;
		return;
	}
}
// PlayerStats PlayerStats::get_instance()
extern TypeInfo* PlayerStats_t513_il2cpp_TypeInfo_var;
extern "C" PlayerStats_t513 * PlayerStats_get_instance_m3359 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t513 * L_0 = ((PlayerStats_t513_StaticFields*)PlayerStats_t513_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void PlayerStats::set_instance(PlayerStats)
extern TypeInfo* PlayerStats_t513_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_set_instance_m3360 (Object_t * __this /* static, unused */, PlayerStats_t513 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t513 * L_0 = ___value;
		((PlayerStats_t513_StaticFields*)PlayerStats_t513_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m3361 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	{
		PlayerStats_set_instance_m3360(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerStats_Reset_m3368(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m3362 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	{
		PlayerStats_RegisterForEvents_m3364(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m3363 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	{
		PlayerStats_UnregisterForEvents_m3365(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3366_MethodInfo_var;
extern "C" void PlayerStats_RegisterForEvents_m3364 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		PlayerStats_OnInstanceChanged_m3366_MethodInfo_var = il2cpp_codegen_method_info_from_index(581);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_5);
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
		__this->___registeredForEvents_5 = 1;
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3366_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_3 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2999(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3366_MethodInfo_var;
extern "C" void PlayerStats_UnregisterForEvents_m3365 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		PlayerStats_OnInstanceChanged_m3366_MethodInfo_var = il2cpp_codegen_method_info_from_index(581);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_5);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t561 * L_1 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3366_MethodInfo_var };
		GameInstanceChangedEventHandler_t559 * L_3 = (GameInstanceChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2984(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3000(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m3366 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	{
		PlayerStats_Reset_m3368(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m3367 (PlayerStats_t513 * __this, int32_t ___increment, const MethodInfo* method)
{
	{
		int32_t L_0 = ___increment;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		int32_t L_1 = PlayerStats_get_gameScore_m3355(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___increment;
		PlayerStats_set_gameScore_m3356(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		ScoreChangedEventHandler_t624 * L_3 = (__this->___ScoreChanged_6);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ScoreChangedEventHandler_t624 * L_4 = (__this->___ScoreChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::Reset()
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_Reset_m3368 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_set_gameScore_m3356(__this, 0, /*hidden argument*/NULL);
		int32_t L_0 = TweakableParams_GetInitialMoney_m3598(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerStats_set_money_m3358(__this, L_0, /*hidden argument*/NULL);
		__this->___purchasedBoostCount_4 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, 4));
		__this->___availableBoostCount_3 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, 4));
		V_0 = 0;
		goto IL_004b;
	}

IL_0031:
	{
		Int32U5BU5D_t484* L_1 = (__this->___purchasedBoostCount_4);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)0;
		Int32U5BU5D_t484* L_3 = (__this->___availableBoostCount_3);
		int32_t L_4 = V_0;
		int32_t L_5 = TweakableParams_GetInitialBoosts_m3599(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)) = (int32_t)L_5;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0031;
		}
	}
	{
		MoneyChangedEventHandler_t625 * L_8 = (__this->___MoneyChanged_7);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		MoneyChangedEventHandler_t625 * L_9 = (__this->___MoneyChanged_7);
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_9);
	}

IL_0068:
	{
		ScoreChangedEventHandler_t624 * L_10 = (__this->___ScoreChanged_6);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		ScoreChangedEventHandler_t624 * L_11 = (__this->___ScoreChanged_6);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_11);
	}

IL_007e:
	{
		BoostsChangedEventHandler_t626 * L_12 = (__this->___BoostsChanged_8);
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		BoostsChangedEventHandler_t626 * L_13 = (__this->___BoostsChanged_8);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_13);
	}

IL_0094:
	{
		return;
	}
}
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m3369 (PlayerStats_t513 * __this, int32_t ___price, const MethodInfo* method)
{
	{
		int32_t L_0 = PlayerStats_get_money_m3357(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___price;
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerStats::EarnMoney(System.Int32)
extern "C" void PlayerStats_EarnMoney_m3370 (PlayerStats_t513 * __this, int32_t ___earnedMoney, const MethodInfo* method)
{
	{
		int32_t L_0 = ___earnedMoney;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		int32_t L_1 = PlayerStats_get_money_m3357(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___earnedMoney;
		PlayerStats_set_money_m3358(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		MoneyChangedEventHandler_t625 * L_3 = (__this->___MoneyChanged_7);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		MoneyChangedEventHandler_t625 * L_4 = (__this->___MoneyChanged_7);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::SpendMoney(System.Int32)
extern "C" void PlayerStats_SpendMoney_m3371 (PlayerStats_t513 * __this, int32_t ___spentMoney, const MethodInfo* method)
{
	{
		int32_t L_0 = ___spentMoney;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		int32_t L_1 = PlayerStats_get_money_m3357(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___spentMoney;
		PlayerStats_set_money_m3358(__this, ((int32_t)((int32_t)L_1-(int32_t)L_2)), /*hidden argument*/NULL);
		int32_t L_3 = PlayerStats_get_money_m3357(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		PlayerStats_set_money_m3358(__this, 0, /*hidden argument*/NULL);
	}

IL_0028:
	{
		MoneyChangedEventHandler_t625 * L_4 = (__this->___MoneyChanged_7);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		MoneyChangedEventHandler_t625 * L_5 = (__this->___MoneyChanged_7);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_5);
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m3372 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t484* L_1 = (__this->___purchasedBoostCount_4);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m3373 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t484* L_1 = (__this->___availableBoostCount_3);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m3374 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t484* L_1 = (__this->___purchasedBoostCount_4);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t* L_3 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2));
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_3))+(int32_t)1));
		Int32U5BU5D_t484* L_4 = (__this->___availableBoostCount_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t* L_6 = ((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5));
		*((int32_t*)(L_6)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		BoostsChangedEventHandler_t626 * L_7 = (__this->___BoostsChanged_8);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		BoostsChangedEventHandler_t626 * L_8 = (__this->___BoostsChanged_8);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_8);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m3375 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t484* L_1 = (__this->___availableBoostCount_3);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t484* L_4 = (__this->___availableBoostCount_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		return;
	}

IL_001a:
	{
		Int32U5BU5D_t484* L_6 = (__this->___availableBoostCount_3);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t* L_8 = ((int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7));
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))-(int32_t)1));
		BoostsChangedEventHandler_t626 * L_9 = (__this->___BoostsChanged_8);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		BoostsChangedEventHandler_t626 * L_10 = (__this->___BoostsChanged_8);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetHighScore()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" int32_t PlayerStats_GetHighScore_m3376 (PlayerStats_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3307(L_0, (String_t*) &_stringLiteral1115, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerStats::SetHighScore(System.Int32)
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_SetHighScore_m3377 (PlayerStats_t513 * __this, int32_t ___highScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_1 = ___highScore;
		NullCheck(L_0);
		PersistentStorage_SetIntValue_m3306(L_0, (String_t*) &_stringLiteral1115, L_1, /*hidden argument*/NULL);
		return;
	}
}
// RateMeController/<WaitAndShowDialog>c__Iterator18
#include "AssemblyU2DCSharp_RateMeController_U3CWaitAndShowDialogU3Ec_.h"
#ifndef _MSC_VER
#else
#endif
// RateMeController/<WaitAndShowDialog>c__Iterator18
#include "AssemblyU2DCSharp_RateMeController_U3CWaitAndShowDialogU3Ec_MethodDeclarations.h"

// RateMeController
#include "AssemblyU2DCSharp_RateMeController.h"
// RateMeController
#include "AssemblyU2DCSharp_RateMeControllerMethodDeclarations.h"


// System.Void RateMeController/<WaitAndShowDialog>c__Iterator18::.ctor()
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18__ctor_m3378 (U3CWaitAndShowDialogU3Ec__Iterator18_t628 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object RateMeController/<WaitAndShowDialog>c__Iterator18::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitAndShowDialogU3Ec__Iterator18_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3379 (U3CWaitAndShowDialogU3Ec__Iterator18_t628 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object RateMeController/<WaitAndShowDialog>c__Iterator18::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitAndShowDialogU3Ec__Iterator18_System_Collections_IEnumerator_get_Current_m3380 (U3CWaitAndShowDialogU3Ec__Iterator18_t628 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean RateMeController/<WaitAndShowDialog>c__Iterator18::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitAndShowDialogU3Ec__Iterator18_MoveNext_m3381 (U3CWaitAndShowDialogU3Ec__Iterator18_t628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
			goto IL_0043;
		}
	}
	{
		goto IL_0056;
	}

IL_0021:
	{
		RateMeController_t627 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___waitToShow_5);
		WaitForSeconds_t786 * L_4 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0058;
	}

IL_0043:
	{
		RateMeController_t627 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		RateMeController_MaybeShowRateMeDialog_m3387(L_5, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0056:
	{
		return 0;
	}

IL_0058:
	{
		return 1;
	}
	// Dead block : IL_005a: ldloc.1
}
// System.Void RateMeController/<WaitAndShowDialog>c__Iterator18::Dispose()
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18_Dispose_m3382 (U3CWaitAndShowDialogU3Ec__Iterator18_t628 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void RateMeController/<WaitAndShowDialog>c__Iterator18::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18_Reset_m3383 (U3CWaitAndShowDialogU3Ec__Iterator18_t628 * __this, const MethodInfo* method)
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



// System.Void RateMeController::.ctor()
extern "C" void RateMeController__ctor_m3384 (RateMeController_t627 * __this, const MethodInfo* method)
{
	{
		__this->___launchFrequency_2 = 2;
		__this->___minTimeFrequencySec_3 = (60.0000038f);
		__this->___waitToShow_5 = (3.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::Start()
extern "C" void RateMeController_Start_m3385 (RateMeController_t627 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = RateMeController_WaitAndShowDialog_m3386(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3734(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator RateMeController::WaitAndShowDialog()
extern TypeInfo* U3CWaitAndShowDialogU3Ec__Iterator18_t628_il2cpp_TypeInfo_var;
extern "C" Object_t * RateMeController_WaitAndShowDialog_m3386 (RateMeController_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitAndShowDialogU3Ec__Iterator18_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitAndShowDialogU3Ec__Iterator18_t628 * V_0 = {0};
	{
		U3CWaitAndShowDialogU3Ec__Iterator18_t628 * L_0 = (U3CWaitAndShowDialogU3Ec__Iterator18_t628 *)il2cpp_codegen_object_new (U3CWaitAndShowDialogU3Ec__Iterator18_t628_il2cpp_TypeInfo_var);
		U3CWaitAndShowDialogU3Ec__Iterator18__ctor_m3378(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAndShowDialogU3Ec__Iterator18_t628 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CWaitAndShowDialogU3Ec__Iterator18_t628 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean RateMeController::MaybeShowRateMeDialog()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t532_il2cpp_TypeInfo_var;
extern "C" bool RateMeController_MaybeShowRateMeDialog_m3387 (RateMeController_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		DialogController_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	GameObject_t352 * V_5 = {0};
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m3309(L_0, (String_t*) &_stringLiteral1116, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		PersistentStorage_t619 * L_3 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		int32_t L_4 = PersistentStorage_GetIntValue_m3307(L_3, (String_t*) &_stringLiteral1057, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		PersistentStorage_t619 * L_5 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_5);
		int32_t L_6 = PersistentStorage_GetIntValue_m3307(L_5, (String_t*) &_stringLiteral1117, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = (__this->___launchFrequency_2);
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		float L_10 = Utilities_SecondsSinceEpoch_m3629(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_10;
		PersistentStorage_t619 * L_11 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_11);
		float L_12 = PersistentStorage_GetFloatValue_m3305(L_11, (String_t*) &_stringLiteral1118, (0.0f), /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = V_3;
		float L_14 = V_4;
		float L_15 = (__this->___minTimeFrequencySec_3);
		if ((!(((float)L_13) < ((float)((float)((float)L_14+(float)L_15))))))
		{
			goto IL_0078;
		}
	}
	{
		return 0;
	}

IL_0078:
	{
		GameObject_t352 * L_16 = (__this->___rateMeDialogPrototype_4);
		Vector3_t535  L_17 = {0};
		Vector3__ctor_m4049(&L_17, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t789  L_18 = Quaternion_get_identity_m4175(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t704 * L_19 = Object_Instantiate_m4176(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_5 = ((GameObject_t352 *)IsInst(L_19, GameObject_t352_il2cpp_TypeInfo_var));
		DialogController_t532 * L_20 = ((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_21 = V_5;
		NullCheck(L_20);
		DialogController_ShowDialog_m2874(L_20, L_21, /*hidden argument*/NULL);
		return 1;
	}
}
// RateMeDialog
#include "AssemblyU2DCSharp_RateMeDialog.h"
#ifndef _MSC_VER
#else
#endif
// RateMeDialog
#include "AssemblyU2DCSharp_RateMeDialogMethodDeclarations.h"



// System.Void RateMeDialog::.ctor()
extern "C" void RateMeDialog__ctor_m3388 (RateMeDialog_t629 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::Start()
extern "C" void RateMeDialog_Start_m3389 (RateMeDialog_t629 * __this, const MethodInfo* method)
{
	{
		RateMeDialog_RecordShowTime_m3390(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RecordShowTime()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RecordShowTime_m3390 (RateMeDialog_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3307(L_0, (String_t*) &_stringLiteral1057, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		float L_2 = Utilities_SecondsSinceEpoch_m3629(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		PersistentStorage_t619 * L_3 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PersistentStorage_SetIntValue_m3306(L_3, (String_t*) &_stringLiteral1117, L_4, /*hidden argument*/NULL);
		PersistentStorage_t619 * L_5 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		float L_6 = V_1;
		NullCheck(L_5);
		PersistentStorage_SetFloatValue_m3304(L_5, (String_t*) &_stringLiteral1118, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RateThis()
extern TypeInfo* RatingsHelper_t630_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t532_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RateThis_m3391 (RateMeDialog_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		DialogController_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t630 * L_0 = ((RatingsHelper_t630_StaticFields*)RatingsHelper_t630_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m3397(L_0, /*hidden argument*/NULL);
		PersistentStorage_t619 * L_1 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3308(L_1, (String_t*) &_stringLiteral1116, 1, /*hidden argument*/NULL);
		DialogController_t532 * L_2 = ((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		DialogController_HideDialog_m2875(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RemindMeLater()
extern TypeInfo* DialogController_t532_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RemindMeLater_m3392 (RateMeDialog_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t532 * L_0 = ((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m2875(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::NoThanks()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t532_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_NoThanks_m3393 (RateMeDialog_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		DialogController_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		PersistentStorage_SetBoolValue_m3308(L_0, (String_t*) &_stringLiteral1116, 1, /*hidden argument*/NULL);
		DialogController_t532 * L_1 = ((DialogController_t532_StaticFields*)DialogController_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_2 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DialogController_HideDialog_m2875(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void RatingsHelper::.ctor()
extern "C" void RatingsHelper__ctor_m3394 (RatingsHelper_t630 * __this, const MethodInfo* method)
{
	{
		__this->___iosAppID_2 = (String_t*) &_stringLiteral1119;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RatingsHelper::Awake()
extern TypeInfo* RatingsHelper_t630_il2cpp_TypeInfo_var;
extern "C" void RatingsHelper_Awake_m3395 (RatingsHelper_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RatingsHelper_t630_StaticFields*)RatingsHelper_t630_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.String RatingsHelper::GetStorePageURL()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RatingsHelper_GetStorePageURL_m3396 (RatingsHelper_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		float L_1 = Utilities_GetIOSVersion_m3628(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) >= ((float)(8.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1120, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002d:
	{
		String_t* L_5 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1121, L_5, (String_t*) &_stringLiteral1122, /*hidden argument*/NULL);
		return L_6;
	}

IL_0043:
	{
		String_t* L_7 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1123, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void RatingsHelper::ShowRatingsPage()
extern "C" void RatingsHelper_ShowRatingsPage_m3397 (RatingsHelper_t630 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = RatingsHelper_GetStorePageURL_m3396(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		Application_OpenURL_m3975(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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



// System.Void RestartGameHandler::.ctor()
extern "C" void RestartGameHandler__ctor_m3398 (RestartGameHandler_t631 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::RestartGame()
extern "C" void RestartGameHandler_RestartGame_m3399 (RestartGameHandler_t631 * __this, const MethodInfo* method)
{
	{
		GameController_t555 * L_0 = GameController_get_instance_m2951(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameController_RestartGame_m2959(L_0, /*hidden argument*/NULL);
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

// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandl.h"
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandlMethodDeclarations.h"


// System.Void SFXButton::.ctor()
extern "C" void SFXButton__ctor_m3400 (SFXButton_t632 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t510_m4196_MethodInfo_var;
extern "C" void SFXButton_Awake_m3401 (SFXButton_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t510_m4196_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1124;
		String_t* L_0 = V_0;
		Sprite_t510 * L_1 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___soundOnSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1125;
		String_t* L_2 = V_0;
		Sprite_t510 * L_3 = Resources_Load_TisSprite_t510_m4196(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t510_m4196_MethodInfo_var);
		__this->___soundOffSprite_4 = L_3;
		return;
	}
}
// System.Void SFXButton::Start()
extern "C" void SFXButton_Start_m3402 (SFXButton_t632 * __this, const MethodInfo* method)
{
	{
		SFXButton_RegisterForEvents_m3404(__this, /*hidden argument*/NULL);
		SFXButton_UpdateButtonImage_m3407(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::OnDestroy()
extern "C" void SFXButton_OnDestroy_m3403 (SFXButton_t632 * __this, const MethodInfo* method)
{
	{
		SFXButton_UnregisterForEvents_m3405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::RegisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3406_MethodInfo_var;
extern "C" void SFXButton_RegisterForEvents_m3404 (SFXButton_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		SFXButton_OnSoundMuteChanged_m3406_MethodInfo_var = il2cpp_codegen_method_info_from_index(582);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3406_MethodInfo_var };
		SoundMuteChangedEventHandler_t650 * L_3 = (SoundMuteChangedEventHandler_t650 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3501(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3510(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UnregisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3406_MethodInfo_var;
extern "C" void SFXButton_UnregisterForEvents_m3405 (SFXButton_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		SFXButton_OnSoundMuteChanged_m3406_MethodInfo_var = il2cpp_codegen_method_info_from_index(582);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3406_MethodInfo_var };
		SoundMuteChangedEventHandler_t650 * L_3 = (SoundMuteChangedEventHandler_t650 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3501(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3511(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXButton::OnSoundMuteChanged()
extern "C" void SFXButton_OnSoundMuteChanged_m3406 (SFXButton_t632 * __this, const MethodInfo* method)
{
	{
		SFXButton_UpdateButtonImage_m3407(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UpdateButtonImage()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void SFXButton_UpdateButtonImage_m3407 (SFXButton_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3514(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t501 * L_2 = (__this->___buttonImage_5);
		Sprite_t510 * L_3 = (__this->___soundOffSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m4185(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t501 * L_4 = (__this->___buttonImage_5);
		Sprite_t510 * L_5 = (__this->___soundOnSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m4185(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
struct GameObject_t352;
struct AudioSource_t608;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t608_m4012(__this, method) (( AudioSource_t608 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3872_gshared)(__this, method)


// System.Void SFXPlayer::.ctor()
extern TypeInfo* SFXTypeU5BU5D_t635_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer__ctor_m3408 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXTypeU5BU5D_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXTypeU5BU5D_t635* L_0 = ((SFXTypeU5BU5D_t635*)SZArrayNew(SFXTypeU5BU5D_t635_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 1)) = (int32_t)1;
		__this->___deadMouseIds_4 = L_0;
		SFXTypeU5BU5D_t635* L_1 = ((SFXTypeU5BU5D_t635*)SZArrayNew(SFXTypeU5BU5D_t635_il2cpp_TypeInfo_var, 3));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 0)) = (int32_t)3;
		SFXTypeU5BU5D_t635* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 1)) = (int32_t)4;
		SFXTypeU5BU5D_t635* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, 2)) = (int32_t)5;
		__this->___slapIds_5 = L_3;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// SFXPlayer SFXPlayer::get_instance()
extern TypeInfo* SFXPlayer_t636_il2cpp_TypeInfo_var;
extern "C" SFXPlayer_t636 * SFXPlayer_get_instance_m3409 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t636 * L_0 = ((SFXPlayer_t636_StaticFields*)SFXPlayer_t636_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SFXPlayer::set_instance(SFXPlayer)
extern TypeInfo* SFXPlayer_t636_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_set_instance_m3410 (Object_t * __this /* static, unused */, SFXPlayer_t636 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t636 * L_0 = ___value;
		((SFXPlayer_t636_StaticFields*)SFXPlayer_t636_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void SFXPlayer::Awake()
extern "C" void SFXPlayer_Awake_m3411 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_set_instance_m3410(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSources_m3412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSources()
extern TypeInfo* AudioSourceU5BU5D_t634_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_LoadAudioSources_m3412 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSourceU5BU5D_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___audioSources_2 = ((AudioSourceU5BU5D_t634*)SZArrayNew(AudioSourceU5BU5D_t634_il2cpp_TypeInfo_var, 8));
		SFXPlayer_LoadAudioSource_m3413(__this, 0, (String_t*) &_stringLiteral1083, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3413(__this, 1, (String_t*) &_stringLiteral1085, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3413(__this, 2, (String_t*) &_stringLiteral1126, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3413(__this, 3, (String_t*) &_stringLiteral1127, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3413(__this, 4, (String_t*) &_stringLiteral1128, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3413(__this, 5, (String_t*) &_stringLiteral1129, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3413(__this, 6, (String_t*) &_stringLiteral1130, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3413(__this, 7, (String_t*) &_stringLiteral1131, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSource(SFXPlayer/SFXType,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* AudioClip_t395_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t608_m4012_MethodInfo_var;
extern "C" void SFXPlayer_LoadAudioSource_m3413 (SFXPlayer_t636 * __this, int32_t ___type, String_t* ___resourceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		AudioClip_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		GameObject_AddComponent_TisAudioSource_t608_m4012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t608 * V_0 = {0};
	AudioClip_t395 * V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3771(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_t608 * L_1 = GameObject_AddComponent_TisAudioSource_t608_m4012(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t608_m4012_MethodInfo_var);
		V_0 = L_1;
		String_t* L_2 = ___resourceName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1132, L_2, /*hidden argument*/NULL);
		Object_t704 * L_4 = Resources_Load_m3797(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = ((AudioClip_t395 *)IsInst(L_4, AudioClip_t395_il2cpp_TypeInfo_var));
		AudioSource_t608 * L_5 = V_0;
		AudioClip_t395 * L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_clip_m4014(L_5, L_6, /*hidden argument*/NULL);
		AudioSourceU5BU5D_t634* L_7 = (__this->___audioSources_2);
		int32_t L_8 = ___type;
		AudioSource_t608 * L_9 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ArrayElementTypeCheck (L_7, L_9);
		*((AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_7, L_8)) = (AudioSource_t608 *)L_9;
		return;
	}
}
// System.Void SFXPlayer::Play(SFXPlayer/SFXType)
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_Play_m3414 (SFXPlayer_t636 * __this, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3514(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t634* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Play_m4302((*(AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayDelayed(SFXPlayer/SFXType,System.Single)
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_PlayDelayed_m3415 (SFXPlayer_t636 * __this, int32_t ___type, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3514(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t634* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		float L_5 = ___delay;
		NullCheck((*(AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_PlayDelayed_m4324((*(AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_2, L_4)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayRandom(SFXPlayer/SFXType[],System.Single)
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_PlayRandom_m3416 (SFXPlayer_t636 * __this, SFXTypeU5BU5D_t635* ___types, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AudioSource_t608 * V_1 = {0};
	{
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3514(L_0, /*hidden argument*/NULL);
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
		SFXTypeU5BU5D_t635* L_2 = ___types;
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m3780(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		AudioSourceU5BU5D_t634* L_4 = (__this->___audioSources_2);
		SFXTypeU5BU5D_t635* L_5 = ___types;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)));
		int32_t L_8 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7));
		V_1 = (*(AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_4, L_8));
		AudioSource_t608 * L_9 = V_1;
		float L_10 = ___delay;
		NullCheck(L_9);
		AudioSource_PlayDelayed_m4324(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::Start()
extern "C" void SFXPlayer_Start_m3417 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_RegisterForEvents_m3419(__this, /*hidden argument*/NULL);
		SFXPlayer_OnSoundMuteChanged_m3421(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::OnDestroy()
extern "C" void SFXPlayer_OnDestroy_m3418 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_UnregisterForEvents_m3420(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::RegisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3421_MethodInfo_var;
extern "C" void SFXPlayer_RegisterForEvents_m3419 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		SFXPlayer_OnSoundMuteChanged_m3421_MethodInfo_var = il2cpp_codegen_method_info_from_index(583);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3421_MethodInfo_var };
		SoundMuteChangedEventHandler_t650 * L_3 = (SoundMuteChangedEventHandler_t650 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3501(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3510(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::UnregisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3421_MethodInfo_var;
extern "C" void SFXPlayer_UnregisterForEvents_m3420 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		SFXPlayer_OnSoundMuteChanged_m3421_MethodInfo_var = il2cpp_codegen_method_info_from_index(583);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3421_MethodInfo_var };
		SoundMuteChangedEventHandler_t650 * L_3 = (SoundMuteChangedEventHandler_t650 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3501(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3511(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXPlayer::OnSoundMuteChanged()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_OnSoundMuteChanged_m3421 (SFXPlayer_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		SoundController_t652 * L_0 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3514(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_0016:
	{
		AudioSourceU5BU5D_t634* L_2 = (__this->___audioSources_2);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Stop_m4015((*(AudioSource_t608 **)(AudioSource_t608 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)8)))
		{
			goto IL_0016;
		}
	}

IL_002e:
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



// System.Void SFXSilencer::.ctor()
extern "C" void SFXSilencer__ctor_m3422 (SFXSilencer_t637 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::Start()
extern "C" void SFXSilencer_Start_m3423 (SFXSilencer_t637 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_RegisterForEvents_m3425(__this, /*hidden argument*/NULL);
		SFXSilencer_UpdateSoundsActive_m3428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::OnDestroy()
extern "C" void SFXSilencer_OnDestroy_m3424 (SFXSilencer_t637 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UnregisterForEvents_m3426(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::RegisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3427_MethodInfo_var;
extern "C" void SFXSilencer_RegisterForEvents_m3425 (SFXSilencer_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		SFXSilencer_OnSoundMuteChanged_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(584);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3427_MethodInfo_var };
		SoundMuteChangedEventHandler_t650 * L_3 = (SoundMuteChangedEventHandler_t650 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3501(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3510(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UnregisterForEvents()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3427_MethodInfo_var;
extern "C" void SFXSilencer_UnregisterForEvents_m3426 (SFXSilencer_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		SFXSilencer_OnSoundMuteChanged_m3427_MethodInfo_var = il2cpp_codegen_method_info_from_index(584);
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
		SoundController_t652 * L_1 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3427_MethodInfo_var };
		SoundMuteChangedEventHandler_t650 * L_3 = (SoundMuteChangedEventHandler_t650 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t650_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3501(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3511(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXSilencer::OnSoundMuteChanged()
extern "C" void SFXSilencer_OnSoundMuteChanged_m3427 (SFXSilencer_t637 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UpdateSoundsActive_m3428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UpdateSoundsActive()
extern TypeInfo* SoundController_t652_il2cpp_TypeInfo_var;
extern "C" void SFXSilencer_UpdateSoundsActive_m3428 (SFXSilencer_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
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
		Transform_t406 * L_0 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_t406 * L_2 = Transform_GetChild_m4325(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3771(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t352 * L_4 = V_1;
		SoundController_t652 * L_5 = ((SoundController_t652_StaticFields*)SoundController_t652_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		bool L_6 = SoundController_get_sfxMuted_m3514(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m3971(L_4, ((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		Transform_t406 * L_9 = Component_get_transform_m4051(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m4326(L_9, /*hidden argument*/NULL);
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



// System.Void ScoreController/<DestroyMouse>c__Iterator19::.ctor()
extern "C" void U3CDestroyMouseU3Ec__Iterator19__ctor_m3429 (U3CDestroyMouseU3Ec__Iterator19_t638 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object ScoreController/<DestroyMouse>c__Iterator19::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDestroyMouseU3Ec__Iterator19_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3430 (U3CDestroyMouseU3Ec__Iterator19_t638 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object ScoreController/<DestroyMouse>c__Iterator19::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDestroyMouseU3Ec__Iterator19_System_Collections_IEnumerator_get_Current_m3431 (U3CDestroyMouseU3Ec__Iterator19_t638 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean ScoreController/<DestroyMouse>c__Iterator19::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CDestroyMouseU3Ec__Iterator19_MoveNext_m3432 (U3CDestroyMouseU3Ec__Iterator19_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		WaitForSeconds_t786 * L_2 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_2, (0.001f), /*hidden argument*/NULL);
		__this->___U24current_2 = L_2;
		__this->___U24PC_1 = 1;
		goto IL_0051;
	}

IL_003d:
	{
		GameObject_t352 * L_3 = (__this->___deadMouseGameObject_0);
		Object_Destroy_m3915(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
extern "C" void U3CDestroyMouseU3Ec__Iterator19_Dispose_m3433 (U3CDestroyMouseU3Ec__Iterator19_t638 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void ScoreController/<DestroyMouse>c__Iterator19::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDestroyMouseU3Ec__Iterator19_Reset_m3434 (U3CDestroyMouseU3Ec__Iterator19_t638 * __this, const MethodInfo* method)
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

struct GameObject_t352;
struct DeadMouse_t525;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
// !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
#define GameObject_GetComponent_TisDeadMouse_t525_m4327(__this, method) (( DeadMouse_t525 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4044_gshared)(__this, method)


// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3435 (ScoreController_t639 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3436 (ScoreController_t639 * __this, const MethodInfo* method)
{
	{
		ScoreController_RegisterForEvents_m3438(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3437 (ScoreController_t639 * __this, const MethodInfo* method)
{
	{
		ScoreController_UnregisterForEvents_m3439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t528_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3440_MethodInfo_var;
extern "C" void ScoreController_RegisterForEvents_m3438 (ScoreController_t639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ScoreController_OnMouseKill_m3440_MethodInfo_var = il2cpp_codegen_method_info_from_index(585);
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
		DeadMouseRelay_t529 * L_1 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3440_MethodInfo_var };
		MouseKillEventHandler_t528 * L_3 = (MouseKillEventHandler_t528 *)il2cpp_codegen_object_new (MouseKillEventHandler_t528_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2847(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MouseKill_m2854(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t529_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t528_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3440_MethodInfo_var;
extern "C" void ScoreController_UnregisterForEvents_m3439 (ScoreController_t639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		ScoreController_OnMouseKill_m3440_MethodInfo_var = il2cpp_codegen_method_info_from_index(585);
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
		DeadMouseRelay_t529 * L_1 = ((DeadMouseRelay_t529_StaticFields*)DeadMouseRelay_t529_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3440_MethodInfo_var };
		MouseKillEventHandler_t528 * L_3 = (MouseKillEventHandler_t528 *)il2cpp_codegen_object_new (MouseKillEventHandler_t528_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2847(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MouseKill_m2855(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3440 (ScoreController_t639 * __this, MouseMove_t527 * ___killedMouse, const MethodInfo* method)
{
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3359(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayerStats_IncrementScore_m3367(L_0, 1, /*hidden argument*/NULL);
		MouseMove_t527 * L_1 = ___killedMouse;
		ScoreController_MakeScoreEffect_m3444(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::OnDeadMouseDone(UnityEngine.GameObject)
extern "C" void ScoreController_OnDeadMouseDone_m3441 (ScoreController_t639 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	{
		GamePhaseState_t561 * L_0 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3003(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		GamePhaseState_t561 * L_2 = GamePhaseState_get_instance_m3011(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3003(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0027;
		}
	}

IL_0020:
	{
		GameObject_t352 * L_4 = ___deadMouseGameObject;
		ScoreController_MakeFlyingAnimation_m3443(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		GameObject_t352 * L_5 = ___deadMouseGameObject;
		Object_t * L_6 = ScoreController_DestroyMouse_m3442(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3734(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ScoreController::DestroyMouse(UnityEngine.GameObject)
extern TypeInfo* U3CDestroyMouseU3Ec__Iterator19_t638_il2cpp_TypeInfo_var;
extern "C" Object_t * ScoreController_DestroyMouse_m3442 (ScoreController_t639 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDestroyMouseU3Ec__Iterator19_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	U3CDestroyMouseU3Ec__Iterator19_t638 * V_0 = {0};
	{
		U3CDestroyMouseU3Ec__Iterator19_t638 * L_0 = (U3CDestroyMouseU3Ec__Iterator19_t638 *)il2cpp_codegen_object_new (U3CDestroyMouseU3Ec__Iterator19_t638_il2cpp_TypeInfo_var);
		U3CDestroyMouseU3Ec__Iterator19__ctor_m3429(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDestroyMouseU3Ec__Iterator19_t638 * L_1 = V_0;
		GameObject_t352 * L_2 = ___deadMouseGameObject;
		NullCheck(L_1);
		L_1->___deadMouseGameObject_0 = L_2;
		U3CDestroyMouseU3Ec__Iterator19_t638 * L_3 = V_0;
		GameObject_t352 * L_4 = ___deadMouseGameObject;
		NullCheck(L_3);
		L_3->___U3CU24U3EdeadMouseGameObject_3 = L_4;
		U3CDestroyMouseU3Ec__Iterator19_t638 * L_5 = V_0;
		return L_5;
	}
}
// System.Void ScoreController::MakeFlyingAnimation(UnityEngine.GameObject)
extern TypeInfo* MouseConfig_t596_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t525_m4327_MethodInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297_MethodInfo_var;
extern "C" void ScoreController_MakeFlyingAnimation_m3443 (ScoreController_t639 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		GameObject_GetComponent_TisDeadMouse_t525_m4327_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484234);
		Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484215);
		s_Il2CppMethodIntialized = true;
	}
	DeadMouse_t525 * V_0 = {0};
	MouseTypeDesc_t605 * V_1 = {0};
	GameObject_t352 * V_2 = {0};
	FlyingAnimation_t546 * V_3 = {0};
	float V_4 = 0.0f;
	AcceleratingSpinner_t491 * V_5 = {0};
	Vector3_t535  V_6 = {0};
	Vector3_t535  V_7 = {0};
	Vector3_t535  V_8 = {0};
	{
		GameObject_t352 * L_0 = ___deadMouseGameObject;
		NullCheck(L_0);
		DeadMouse_t525 * L_1 = GameObject_GetComponent_TisDeadMouse_t525_m4327(L_0, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t525_m4327_MethodInfo_var);
		V_0 = L_1;
		MouseConfig_t596 * L_2 = ((MouseConfig_t596_StaticFields*)MouseConfig_t596_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		DeadMouse_t525 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = DeadMouse_get_mouseType_m2839(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MouseTypeDesc_t605 * L_5 = MouseConfig_GetMouseTypeDesc_m3143(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		GameObject_t352 * L_6 = (__this->___scoreEffectPrototype_4);
		GameObject_t352 * L_7 = Object_Instantiate_TisGameObject_t352_m4276(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var);
		V_2 = L_7;
		GameObject_t352 * L_8 = V_2;
		NullCheck(L_8);
		FlyingAnimation_t546 * L_9 = GameObject_GetComponent_TisFlyingAnimation_t546_m4278(L_8, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t546_m4278_MethodInfo_var);
		V_3 = L_9;
		FlyingAnimation_t546 * L_10 = V_3;
		DeadMouse_t525 * L_11 = V_0;
		NullCheck(L_11);
		Transform_t406 * L_12 = Component_get_transform_m4051(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t535  L_13 = Transform_get_position_m4056(L_12, /*hidden argument*/NULL);
		GameObject_t352 * L_14 = (__this->___scoreDisplay_5);
		NullCheck(L_10);
		FlyingAnimation_Configure_m2932(L_10, L_13, L_14, /*hidden argument*/NULL);
		FlyingAnimation_t546 * L_15 = V_3;
		NullCheck(L_15);
		Image_t501 * L_16 = (L_15->___image_18);
		MouseTypeDesc_t605 * L_17 = V_1;
		NullCheck(L_17);
		Sprite_t510 * L_18 = (L_17->___deadMouseSprite_0);
		NullCheck(L_16);
		Image_set_sprite_m4185(L_16, L_18, /*hidden argument*/NULL);
		FlyingAnimation_t546 * L_19 = V_3;
		NullCheck(L_19);
		Transform_t406 * L_20 = Component_get_transform_m4051(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t535  L_21 = Transform_get_localScale_m4059(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		float L_22 = ((&V_6)->___x_1);
		V_4 = L_22;
		float L_23 = V_4;
		MouseTypeDesc_t605 * L_24 = V_1;
		NullCheck(L_24);
		float L_25 = (L_24->___scale_5);
		V_4 = ((float)((float)L_23*(float)L_25));
		FlyingAnimation_t546 * L_26 = V_3;
		NullCheck(L_26);
		Transform_t406 * L_27 = Component_get_transform_m4051(L_26, /*hidden argument*/NULL);
		float L_28 = V_4;
		float L_29 = V_4;
		Vector3_t535  L_30 = {0};
		Vector3__ctor_m4049(&L_30, L_28, L_29, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localScale_m4060(L_27, L_30, /*hidden argument*/NULL);
		FlyingAnimation_t546 * L_31 = V_3;
		NullCheck(L_31);
		FlyingAnimation_Run_m2934(L_31, /*hidden argument*/NULL);
		GameObject_t352 * L_32 = V_2;
		NullCheck(L_32);
		AcceleratingSpinner_t491 * L_33 = GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297(L_32, /*hidden argument*/GameObject_GetComponent_TisAcceleratingSpinner_t491_m4297_MethodInfo_var);
		V_5 = L_33;
		AcceleratingSpinner_t491 * L_34 = V_5;
		DeadMouse_t525 * L_35 = V_0;
		NullCheck(L_35);
		Transform_t406 * L_36 = Component_get_transform_m4051(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t535  L_37 = Transform_get_eulerAngles_m4300(L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		float L_38 = ((&V_7)->___z_3);
		Camera_t545 * L_39 = Camera_get_main_m4022(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_t406 * L_40 = Component_get_transform_m4051(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t535  L_41 = Transform_get_eulerAngles_m4300(L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		float L_42 = ((&V_8)->___z_3);
		NullCheck(L_34);
		AcceleratingSpinner_Configure_m2711(L_34, ((float)((float)L_38-(float)L_42)), /*hidden argument*/NULL);
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
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern TypeInfo* DistortFinishedHandler_t533_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t525_m4327_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var;
extern const MethodInfo* ScoreController_OnDeadMouseDone_m3441_MethodInfo_var;
extern "C" void ScoreController_MakeScoreEffect_m3444 (ScoreController_t639 * __this, MouseMove_t527 * ___killedMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DistortFinishedHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(575);
		Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisDeadMouse_t525_m4327_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484234);
		Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		ScoreController_OnDeadMouseDone_m3441_MethodInfo_var = il2cpp_codegen_method_info_from_index(587);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	DeadMouse_t525 * V_1 = {0};
	DistortForEffect_t534 * V_2 = {0};
	{
		GameObject_t352 * L_0 = (__this->___deadMousePrototype_3);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4276(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4276_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		DeadMouse_t525 * L_3 = GameObject_GetComponent_TisDeadMouse_t525_m4327(L_2, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t525_m4327_MethodInfo_var);
		V_1 = L_3;
		DeadMouse_t525 * L_4 = V_1;
		MouseMove_t527 * L_5 = ___killedMouse;
		NullCheck(L_4);
		DeadMouse_Configure_m2842(L_4, L_5, /*hidden argument*/NULL);
		DeadMouse_t525 * L_6 = V_1;
		NullCheck(L_6);
		DistortForEffect_t534 * L_7 = Component_GetComponent_TisDistortForEffect_t534_m4182(L_6, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t534_m4182_MethodInfo_var);
		V_2 = L_7;
		DistortForEffect_t534 * L_8 = V_2;
		IntPtr_t L_9 = { (void*)ScoreController_OnDeadMouseDone_m3441_MethodInfo_var };
		DistortFinishedHandler_t533 * L_10 = (DistortFinishedHandler_t533 *)il2cpp_codegen_object_new (DistortFinishedHandler_t533_il2cpp_TypeInfo_var);
		DistortFinishedHandler__ctor_m2877(L_10, __this, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		DistortForEffect_SetDistortFinishedHandler_m2887(L_8, L_10, /*hidden argument*/NULL);
		DistortForEffect_t534 * L_11 = V_2;
		NullCheck(L_11);
		DistortForEffect_Distort_m2888(L_11, /*hidden argument*/NULL);
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

// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"
// UnityEngine.UI.InputField/SubmitEvent
#include "UnityEngine_UI_UnityEngine_UI_InputField_SubmitEvent.h"
// UnityEngine.Events.UnityAction`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputFieldMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"
// UnityEngine.Events.UnityEvent`1<System.String>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_genMethodDeclarations.h"


// System.Void SecretUI::.ctor()
extern "C" void SecretUI__ctor_m3445 (SecretUI_t640 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::ResetPreferences()
extern TypeInfo* PersistentStorage_t619_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ResetPreferences_m3446 (SecretUI_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t619 * L_0 = ((PersistentStorage_t619_StaticFields*)PersistentStorage_t619_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		PersistentStorage_ClearAll_m3303(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::ToggleVisibility()
extern "C" void SecretUI_ToggleVisibility_m3447 (SecretUI_t640 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___inputs_3);
		NullCheck(L_0);
		GameObject_SetActive_m3971(L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Awake()
extern TypeInfo* SecretUI_t640_il2cpp_TypeInfo_var;
extern "C" void SecretUI_Awake_m3448 (SecretUI_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(576);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SecretUI_t640_StaticFields*)SecretUI_t640_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void SecretUI::Start()
extern TypeInfo* UnityAction_1_t801_il2cpp_TypeInfo_var;
extern const MethodInfo* SecretUI_U3CStartU3Em__4E_m3453_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m4329_MethodInfo_var;
extern const MethodInfo* UnityEvent_1_AddListener_m4330_MethodInfo_var;
extern const MethodInfo* SecretUI_U3CStartU3Em__4F_m3454_MethodInfo_var;
extern "C" void SecretUI_Start_m3449 (SecretUI_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_1_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(577);
		SecretUI_U3CStartU3Em__4E_m3453_MethodInfo_var = il2cpp_codegen_method_info_from_index(588);
		UnityAction_1__ctor_m4329_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484237);
		UnityEvent_1_AddListener_m4330_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484238);
		SecretUI_U3CStartU3Em__4F_m3454_MethodInfo_var = il2cpp_codegen_method_info_from_index(591);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t641 * L_0 = (__this->___levelInputField_4);
		NullCheck(L_0);
		SubmitEvent_t800 * L_1 = InputField_get_onEndEdit_m4328(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)SecretUI_U3CStartU3Em__4E_m3453_MethodInfo_var };
		UnityAction_1_t801 * L_3 = (UnityAction_1_t801 *)il2cpp_codegen_object_new (UnityAction_1_t801_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4329(L_3, __this, L_2, /*hidden argument*/UnityAction_1__ctor_m4329_MethodInfo_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m4330(L_1, L_3, /*hidden argument*/UnityEvent_1_AddListener_m4330_MethodInfo_var);
		InputField_t641 * L_4 = (__this->___debugFlagsInputField_5);
		NullCheck(L_4);
		SubmitEvent_t800 * L_5 = InputField_get_onEndEdit_m4328(L_4, /*hidden argument*/NULL);
		IntPtr_t L_6 = { (void*)SecretUI_U3CStartU3Em__4F_m3454_MethodInfo_var };
		UnityAction_1_t801 * L_7 = (UnityAction_1_t801 *)il2cpp_codegen_object_new (UnityAction_1_t801_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4329(L_7, __this, L_6, /*hidden argument*/UnityAction_1__ctor_m4329_MethodInfo_var);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m4330(L_5, L_7, /*hidden argument*/UnityEvent_1_AddListener_m4330_MethodInfo_var);
		return;
	}
}
// System.Void SecretUI::ApplyLevelInput()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ApplyLevelInput_m3450 (SecretUI_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		InputField_t641 * L_0 = (__this->___levelInputField_4);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m4331(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		int32_t L_2 = Utilities_ParseIntWithDefault_m3631(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		GameLevelState_t557 * L_4 = GameLevelState_get_instance_m2979(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameLevelState_SetGameLevel_m2983(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		GameObject_t352 * L_6 = (__this->___inputs_3);
		NullCheck(L_6);
		GameObject_SetActive_m3971(L_6, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::ApplyDebugFlags()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ApplyDebugFlags_m3451 (SecretUI_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		InputField_t641 * L_0 = (__this->___debugFlagsInputField_5);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m4331(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		int32_t L_2 = Utilities_ParseIntWithDefault_m3631(NULL /*static, unused*/, L_1, (-1), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		DebugConfig_t530 * L_4 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		L_4->___debugFlags_7 = L_5;
	}

IL_0024:
	{
		GameObject_t352 * L_6 = (__this->___inputs_3);
		NullCheck(L_6);
		GameObject_SetActive_m3971(L_6, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::DebugShowSharing()
extern TypeInfo* FacebookSharing_t537_il2cpp_TypeInfo_var;
extern "C" void SecretUI_DebugShowSharing_m3452 (SecretUI_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookSharing_t537 * L_0 = ((FacebookSharing_t537_StaticFields*)FacebookSharing_t537_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_0);
		FacebookSharing_ShareScore_m2905(L_0, ((int32_t)100), 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::<Start>m__4E(System.String)
extern "C" void SecretUI_U3CStartU3Em__4E_m3453 (SecretUI_t640 * __this, String_t* p0, const MethodInfo* method)
{
	{
		SecretUI_ApplyLevelInput_m3450(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::<Start>m__4F(System.String)
extern "C" void SecretUI_U3CStartU3Em__4F_m3454 (SecretUI_t640 * __this, String_t* p0, const MethodInfo* method)
{
	{
		SecretUI_ApplyDebugFlags_m3451(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SizeCamera/CameraConfiguredHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CameraConfiguredHandler__ctor_m3455 (CameraConfiguredHandler_t642 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SizeCamera/CameraConfiguredHandler::Invoke()
extern "C" void CameraConfiguredHandler_Invoke_m3456 (CameraConfiguredHandler_t642 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraConfiguredHandler_Invoke_m3456((CameraConfiguredHandler_t642 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_CameraConfiguredHandler_t642(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SizeCamera/CameraConfiguredHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CameraConfiguredHandler_BeginInvoke_m3457 (CameraConfiguredHandler_t642 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SizeCamera/CameraConfiguredHandler::EndInvoke(System.IAsyncResult)
extern "C" void CameraConfiguredHandler_EndInvoke_m3458 (CameraConfiguredHandler_t642 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCamera.h"
// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCameraMethodDeclarations.h"
struct Component_t762;
struct Camera_t545;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t545_m4165(__this, method) (( Camera_t545 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)
struct Component_t762;
struct ZoomCamera_t643;
// Declaration !!0 UnityEngine.Component::GetComponent<ZoomCamera>()
// !!0 UnityEngine.Component::GetComponent<ZoomCamera>()
#define Component_GetComponent_TisZoomCamera_t643_m4332(__this, method) (( ZoomCamera_t643 * (*) (Component_t762 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4011_gshared)(__this, method)


// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m3459 (SizeCamera_t516 * __this, const MethodInfo* method)
{
	{
		__this->___minWorldAspectRatio_2 = (1.33333337f);
		__this->___targetWorldHalfHeight_3 = (5.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::add_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern TypeInfo* CameraConfiguredHandler_t642_il2cpp_TypeInfo_var;
extern "C" void SizeCamera_add_CameraConfigured_m3460 (SizeCamera_t516 * __this, CameraConfiguredHandler_t642 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraConfiguredHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraConfiguredHandler_t642 * L_0 = (__this->___CameraConfigured_12);
		CameraConfiguredHandler_t642 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CameraConfigured_12 = ((CameraConfiguredHandler_t642 *)Castclass(L_2, CameraConfiguredHandler_t642_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SizeCamera::remove_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern TypeInfo* CameraConfiguredHandler_t642_il2cpp_TypeInfo_var;
extern "C" void SizeCamera_remove_CameraConfigured_m3461 (SizeCamera_t516 * __this, CameraConfiguredHandler_t642 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraConfiguredHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraConfiguredHandler_t642 * L_0 = (__this->___CameraConfigured_12);
		CameraConfiguredHandler_t642 * L_1 = ___value;
		Delegate_t725 * L_2 = Delegate_Remove_m3782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CameraConfigured_12 = ((CameraConfiguredHandler_t642 *)Castclass(L_2, CameraConfiguredHandler_t642_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SizeCamera::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t545_m4165_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisZoomCamera_t643_m4332_MethodInfo_var;
extern "C" void SizeCamera_Awake_m3462 (SizeCamera_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t545_m4165_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484115);
		Component_GetComponent_TisZoomCamera_t643_m4332_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484240);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___finalAspectRatio_11 = (0.0f);
		Camera_t545 * L_0 = Component_GetComponent_TisCamera_t545_m4165(__this, /*hidden argument*/Component_GetComponent_TisCamera_t545_m4165_MethodInfo_var);
		__this->___myCamera_8 = L_0;
		ZoomCamera_t643 * L_1 = Component_GetComponent_TisZoomCamera_t643_m4332(__this, /*hidden argument*/Component_GetComponent_TisZoomCamera_t643_m4332_MethodInfo_var);
		__this->___myZoomCamera_9 = L_1;
		return;
	}
}
// System.Void SizeCamera::UpdateCameraSize()
extern "C" void SizeCamera_UpdateCameraSize_m3463 (SizeCamera_t516 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_t643 * L_0 = (__this->___myZoomCamera_9);
		bool L_1 = Object_op_Implicit_m4114(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ZoomCamera_t643 * L_2 = (__this->___myZoomCamera_9);
		NullCheck(L_2);
		ZoomCamera_UpdateCameraSize_m3650(L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		Camera_t545 * L_3 = (__this->___myCamera_8);
		float L_4 = (__this->___finalWorldHalfHeight_6);
		NullCheck(L_3);
		Camera_set_orthographicSize_m4333(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Single SizeCamera::GetAspectRatio()
extern "C" float SizeCamera_GetAspectRatio_m3464 (SizeCamera_t516 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___finalAspectRatio_11);
		return L_0;
	}
}
// System.Void SizeCamera::Configure()
extern "C" void SizeCamera_Configure_m3465 (SizeCamera_t516 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Rect_t695  V_3 = {0};
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3691(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___screenPixelsTopToIgnore_4);
		float L_2 = (__this->___screenPixelsBottomToIgnore_5);
		V_0 = ((float)((float)(((float)L_0))-(float)((float)((float)L_1+(float)L_2))));
		int32_t L_3 = Screen_get_width_m3676(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = V_0;
		__this->___finalAspectRatio_11 = ((float)((float)(((float)L_3))/(float)L_4));
		float L_5 = (__this->___targetWorldHalfHeight_3);
		V_1 = L_5;
		float L_6 = (__this->___finalAspectRatio_11);
		float L_7 = V_1;
		V_2 = ((float)((float)L_6*(float)L_7));
		float L_8 = (__this->___finalAspectRatio_11);
		float L_9 = (__this->___minWorldAspectRatio_2);
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_005b;
		}
	}
	{
		float L_10 = (__this->___minWorldAspectRatio_2);
		float L_11 = (__this->___targetWorldHalfHeight_3);
		V_2 = ((float)((float)L_10*(float)L_11));
		float L_12 = V_2;
		float L_13 = (__this->___finalAspectRatio_11);
		V_1 = ((float)((float)L_12/(float)L_13));
	}

IL_005b:
	{
		float L_14 = V_1;
		__this->___finalWorldHalfHeight_6 = L_14;
		SizeCamera_UpdateCameraSize_m3463(__this, /*hidden argument*/NULL);
		Camera_t545 * L_15 = (__this->___myCamera_8);
		NullCheck(L_15);
		Rect_t695  L_16 = Camera_get_rect_m4166(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = (__this->___screenPixelsBottomToIgnore_5);
		int32_t L_18 = Screen_get_height_m3691(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_17/(float)(((float)L_18))));
		float L_19 = V_0;
		int32_t L_20 = Screen_get_height_m3691(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = ((float)((float)L_19/(float)(((float)L_20))));
		Rect_set_width_m4167((&V_3), (1.0f), /*hidden argument*/NULL);
		float L_21 = V_5;
		Rect_set_height_m4168((&V_3), L_21, /*hidden argument*/NULL);
		Rect_set_x_m4169((&V_3), (0.0f), /*hidden argument*/NULL);
		float L_22 = V_4;
		Rect_set_y_m4170((&V_3), L_22, /*hidden argument*/NULL);
		Camera_t545 * L_23 = (__this->___myCamera_8);
		Rect_t695  L_24 = V_3;
		NullCheck(L_23);
		Camera_set_rect_m4171(L_23, L_24, /*hidden argument*/NULL);
		CameraConfiguredHandler_t642 * L_25 = (__this->___CameraConfigured_12);
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		CameraConfiguredHandler_t642 * L_26 = (__this->___CameraConfigured_12);
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(11 /* System.Void SizeCamera/CameraConfiguredHandler::Invoke() */, L_26);
	}

IL_00d9:
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



// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m3466 (SlowByCollision_t644 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3467 (SlowByCollision_t644 * __this, Collider2D_t700 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t700 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3469(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3468 (SlowByCollision_t644 * __this, Collider2D_t700 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t700 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3469(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var;
extern "C" void SlowByCollision_HandleCollision_m3469 (SlowByCollision_t644 * __this, Collider2D_t700 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484209);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t527 * V_0 = {0};
	{
		Collider2D_t700 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4233(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1094, /*hidden argument*/NULL);
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
		Collider2D_t700 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3771(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		MouseMove_t527 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t527_m4291_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t527 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m3148(L_6, /*hidden argument*/NULL);
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
		MouseMove_t527 * L_8 = V_0;
		NullCheck(L_8);
		MouseMove_OnFartedUpon_m3160(L_8, /*hidden argument*/NULL);
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



// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::.ctor()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator1A__ctor_m3470 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator1A_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3471 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator1A_System_Collections_IEnumerator_get_Current_m3472 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::MoveNext()
extern TypeInfo* WaitForSeconds_t786_il2cpp_TypeInfo_var;
extern "C" bool U3CDebugScoreAndAchievementU3Ec__Iterator1A_MoveNext_m3473 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1137, /*hidden argument*/NULL);
		WaitForSeconds_t786 * L_2 = (WaitForSeconds_t786 *)il2cpp_codegen_object_new (WaitForSeconds_t786_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4154(L_2, (2.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0065;
	}

IL_0047:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1138, /*hidden argument*/NULL);
		SocialHelper_CustomReportAchievement_m3481(NULL /*static, unused*/, (String_t*) &_stringLiteral1139, /*hidden argument*/NULL);
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
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator1A_Dispose_m3474 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator1A::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator1A_Reset_m3475 (U3CDebugScoreAndAchievementU3Ec__Iterator1A_t645 * __this, const MethodInfo* method)
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

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"


// System.Void SocialHelper/<Authenticate>c__AnonStorey1D::.ctor()
extern "C" void U3CAuthenticateU3Ec__AnonStorey1D__ctor_m3476 (U3CAuthenticateU3Ec__AnonStorey1D_t646 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<Authenticate>c__AnonStorey1D::<>m__50(System.Boolean)
extern TypeInfo* GameCenterPlatform_t802_il2cpp_TypeInfo_var;
extern "C" void U3CAuthenticateU3Ec__AnonStorey1D_U3CU3Em__50_m3477 (U3CAuthenticateU3Ec__AnonStorey1D_t646 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(579);
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
		int32_t L_1 = Application_get_platform_m3784(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t802_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m4334(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Action_1_t277 * L_2 = (__this->___handler_0);
		bool L_3 = ___success;
		NullCheck(L_2);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_2, L_3);
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
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1E__ctor_m3478 (U3CRecordAchievementU3Ec__AnonStorey1E_t647 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<RecordAchievement>c__AnonStorey1E::<>m__52(System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1E_U3CU3Em__52_m3479 (U3CRecordAchievementU3Ec__AnonStorey1E_t647 * __this, bool ___success, const MethodInfo* method)
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
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1140, L_0, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = ___success;
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1141, L_4, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
