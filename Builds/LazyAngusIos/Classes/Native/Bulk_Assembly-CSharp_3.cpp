#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// TrackLevel
#include "AssemblyU2DCSharp_TrackLevel.h"
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
// TrackLevel
#include "AssemblyU2DCSharp_TrackLevelMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// GameController
#include "AssemblyU2DCSharp_GameController.h"
// GameController/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameLevelChangedEventHandle.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"
// GameController/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameLevelChangedEventHandleMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
struct GameObject_t284;
struct Text_t381;
struct GameObject_t284;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2592_gshared (GameObject_t284 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2592(__this, method) (( Object_t * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t381_m2820(__this, method) (( Text_t381 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)

// System.Array
#include "mscorlib_System_Array.h"

// System.Void TrackLevel::.ctor()
extern "C" void TrackLevel__ctor_m2211 (TrackLevel_t470 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::Start()
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m2214_MethodInfo_var;
extern "C" void TrackLevel_Start_m2212 (TrackLevel_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484044);
		TrackLevel_SetGameLevelText_m2214_MethodInfo_var = il2cpp_codegen_method_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t381 * L_1 = GameObject_GetComponent_TisText_t381_m2820(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var);
		__this->___levelText_2 = L_1;
		GameController_t383 * L_2 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)TrackLevel_SetGameLevelText_m2214_MethodInfo_var };
		GameLevelChangedEventHandler_t418 * L_4 = (GameLevelChangedEventHandler_t418 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1929(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameController_add_GameLevelChanged_m1944(L_2, L_4, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		TrackLevel_SetGameLevelText_m2214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::OnDestroy()
extern TypeInfo* GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m2214_MethodInfo_var;
extern "C" void TrackLevel_OnDestroy_m2213 (TrackLevel_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		TrackLevel_SetGameLevelText_m2214_MethodInfo_var = il2cpp_codegen_method_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_3);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GameController_t383 * L_1 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TrackLevel_SetGameLevelText_m2214_MethodInfo_var };
		GameLevelChangedEventHandler_t418 * L_3 = (GameLevelChangedEventHandler_t418 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t418_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1929(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameController_remove_GameLevelChanged_m1945(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TrackLevel::SetGameLevelText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackLevel_SetGameLevelText_m2214 (TrackLevel_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t381 * L_0 = (__this->___levelText_2);
		GameController_t383 * L_1 = GameController_get_instance_m1952(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameController_get_gameLevel_m1948(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral736, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// TrackScore
#include "AssemblyU2DCSharp_TrackScore.h"
#ifndef _MSC_VER
#else
#endif
// TrackScore
#include "AssemblyU2DCSharp_TrackScoreMethodDeclarations.h"

// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandler.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandlerMethodDeclarations.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct GameObject_t284;
struct DistortForEffect_t411;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t411_m2759(__this, method) (( DistortForEffect_t411 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void TrackScore::.ctor()
extern "C" void TrackScore__ctor_m2215 (TrackScore_t471 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::Start()
extern TypeInfo* ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m2219_MethodInfo_var;
extern "C" void TrackScore_Start_m2216 (TrackScore_t471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484044);
		GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484014);
		TrackScore_DynamicUpdateScoreText_m2219_MethodInfo_var = il2cpp_codegen_method_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t382 * L_0 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t381 * L_2 = GameObject_GetComponent_TisText_t381_m2820(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var);
		__this->___scoreText_2 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t411 * L_4 = GameObject_GetComponent_TisDistortForEffect_t411_m2759(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t382 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackScore_DynamicUpdateScoreText_m2219_MethodInfo_var };
		ScoreChangedEventHandler_t459 * L_7 = (ScoreChangedEventHandler_t459 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m2147(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_ScoreChanged_m2160(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackScore_SetScoreText_m2218(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::OnDestroy()
extern TypeInfo* ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m2219_MethodInfo_var;
extern "C" void TrackScore_OnDestroy_m2217 (TrackScore_t471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		TrackScore_DynamicUpdateScoreText_m2219_MethodInfo_var = il2cpp_codegen_method_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_5);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		PlayerStats_t382 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackScore_DynamicUpdateScoreText_m2219_MethodInfo_var };
		ScoreChangedEventHandler_t459 * L_3 = (ScoreChangedEventHandler_t459 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t459_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m2147(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_ScoreChanged_m2161(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackScore::SetScoreText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackScore_SetScoreText_m2218 (TrackScore_t471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t381 * L_0 = (__this->___scoreText_2);
		PlayerStats_t382 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_GetScore_m2174(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral806, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackScore::DynamicUpdateScoreText()
extern "C" void TrackScore_DynamicUpdateScoreText_m2219 (TrackScore_t471 * __this, const MethodInfo* method)
{
	{
		TrackScore_SetScoreText_m2218(__this, /*hidden argument*/NULL);
		DistortForEffect_t411 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_Distort_m1909(L_0, /*hidden argument*/NULL);
		return;
	}
}
// TrackTreats
#include "AssemblyU2DCSharp_TrackTreats.h"
#ifndef _MSC_VER
#else
#endif
// TrackTreats
#include "AssemblyU2DCSharp_TrackTreatsMethodDeclarations.h"

// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandler.h"
// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandlerMethodDeclarations.h"


// System.Void TrackTreats::.ctor()
extern "C" void TrackTreats__ctor_m2220 (TrackTreats_t472 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::Start()
extern TypeInfo* TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m2224_MethodInfo_var;
extern "C" void TrackTreats_Start_m2221 (TrackTreats_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484044);
		GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484014);
		TrackTreats_DynamicUpdateTreatsText_m2224_MethodInfo_var = il2cpp_codegen_method_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t382 * L_0 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t381 * L_2 = GameObject_GetComponent_TisText_t381_m2820(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t381_m2820_MethodInfo_var);
		__this->___treatsText_2 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t411 * L_4 = GameObject_GetComponent_TisDistortForEffect_t411_m2759(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t411_m2759_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t382 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackTreats_DynamicUpdateTreatsText_m2224_MethodInfo_var };
		TreatsChangedEventHandler_t460 * L_7 = (TreatsChangedEventHandler_t460 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2151(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_TreatsChanged_m2162(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackTreats_SetTreatsText_m2223(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::OnDestroy()
extern TypeInfo* TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m2224_MethodInfo_var;
extern "C" void TrackTreats_OnDestroy_m2222 (TrackTreats_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		TrackTreats_DynamicUpdateTreatsText_m2224_MethodInfo_var = il2cpp_codegen_method_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_5);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		PlayerStats_t382 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackTreats_DynamicUpdateTreatsText_m2224_MethodInfo_var };
		TreatsChangedEventHandler_t460 * L_3 = (TreatsChangedEventHandler_t460 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t460_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2151(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_TreatsChanged_m2163(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackTreats::SetTreatsText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackTreats_SetTreatsText_m2223 (TrackTreats_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t381 * L_0 = (__this->___treatsText_2);
		PlayerStats_t382 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_GetTreats_m2175(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral807, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackTreats::DynamicUpdateTreatsText()
extern "C" void TrackTreats_DynamicUpdateTreatsText_m2224 (TrackTreats_t472 * __this, const MethodInfo* method)
{
	{
		TrackTreats_SetTreatsText_m2223(__this, /*hidden argument*/NULL);
		DistortForEffect_t411 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_Distort_m1909(L_0, /*hidden argument*/NULL);
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

// System.Single
#include "mscorlib_System_Single.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"


// System.Void TweakableParams::.ctor()
extern "C" void TweakableParams__ctor_m2225 (TweakableParams_t401 * __this, const MethodInfo* method)
{
	{
		__this->___fastPawsSwipeSpeedMultiplier_2 = (3.0f);
		__this->___goodEyesAngleMultiplier_3 = (1.3333f);
		__this->___bigPawsMultiplier_4 = (2.0f);
		__this->___baseSwipeSpeed_5 = (7.0f);
		__this->___swipeInitialPause_6 = (0.3f);
		__this->___swipeExtendedPause_7 = (0.1f);
		__this->___swipeRadius_8 = (5.0f);
		__this->___baseSwipeAngleRange_9 = (90.0f);
		__this->___turnVelocityDegrees_10 = (180.0f);
		__this->___numTracks_11 = 3;
		__this->___initialMicePerHole_12 = 2;
		__this->___initialMoney_13 = 1;
		__this->___debugInitialMoney_15 = ((int32_t)100);
		__this->___debugInitialBoosts_16 = 5;
		__this->___debugMaxMicePerHole_17 = ((int32_t)100);
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// TweakableParams TweakableParams::get_instance()
extern TypeInfo* TweakableParams_t401_il2cpp_TypeInfo_var;
extern "C" TweakableParams_t401 * TweakableParams_get_instance_m2226 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TweakableParams_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	{
		TweakableParams_t401 * L_0 = ((TweakableParams_t401_StaticFields*)TweakableParams_t401_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void TweakableParams::set_instance(TweakableParams)
extern TypeInfo* TweakableParams_t401_il2cpp_TypeInfo_var;
extern "C" void TweakableParams_set_instance_m2227 (Object_t * __this /* static, unused */, TweakableParams_t401 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TweakableParams_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	{
		TweakableParams_t401 * L_0 = ___value;
		((TweakableParams_t401_StaticFields*)TweakableParams_t401_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Int32 TweakableParams::GetInitialMoney()
extern "C" int32_t TweakableParams_GetInitialMoney_m2228 (TweakableParams_t401 * __this, const MethodInfo* method)
{
	{
		DebugConfig_t407 * L_0 = DebugConfig_get_instance_m1894(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___isDebug_2);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = (__this->___debugInitialMoney_15);
		return L_2;
	}

IL_0016:
	{
		int32_t L_3 = (__this->___initialMoney_13);
		return L_3;
	}
}
// System.Int32 TweakableParams::GetInitialBoosts()
extern "C" int32_t TweakableParams_GetInitialBoosts_m2229 (TweakableParams_t401 * __this, const MethodInfo* method)
{
	{
		DebugConfig_t407 * L_0 = DebugConfig_get_instance_m1894(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___isDebug_2);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = (__this->___debugInitialBoosts_16);
		return L_2;
	}

IL_0016:
	{
		int32_t L_3 = (__this->___initialBoosts_14);
		return L_3;
	}
}
// System.Void TweakableParams::Awake()
extern "C" void TweakableParams_Awake_m2230 (TweakableParams_t401 * __this, const MethodInfo* method)
{
	{
		TweakableParams_set_instance_m2227(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
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
extern "C" void TweakableSlider__ctor_m2231 (TweakableSlider_t450 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharing.h"
#ifndef _MSC_VER
#else
#endif
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharingMethodDeclarations.h"

// SPTwitter
#include "AssemblyU2DCSharp_SPTwitter.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// SPTwitter
#include "AssemblyU2DCSharp_SPTwitterMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void TwitterSharing::.ctor()
extern "C" void TwitterSharing__ctor_m2232 (TwitterSharing_t473 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::Awake()
extern TypeInfo* TwitterSharing_t473_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_Awake_m2233 (TwitterSharing_t473 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TwitterSharing_t473_StaticFields*)TwitterSharing_t473_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t296_il2cpp_TypeInfo_var);
		SPTwitter_t296 * L_0 = SPTwitter_get_instance_m1274(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void SPTwitter::Init() */, L_0);
		return;
	}
}
// System.Void TwitterSharing::Start()
extern "C" void TwitterSharing_Start_m2234 (TwitterSharing_t473 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TwitterSharing::Update()
extern "C" void TwitterSharing_Update_m2235 (TwitterSharing_t473 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScore(System.Int32)
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScore_m2236 (TwitterSharing_t473 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral808, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t296_il2cpp_TypeInfo_var);
		SPTwitter_t296 * L_0 = SPTwitter_get_instance_m1274(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean SPTwitter::get_IsAuthed() */, L_0);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___score;
		TwitterSharing_ShareScoreInternal_m2238(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0025:
	{
		int32_t L_3 = ___score;
		TwitterSharing_ShareScoreThroughURLs_m2237(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreThroughURLs_m2237 (TwitterSharing_t473 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral809, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		String_t* L_1 = Utilities_GetShareMessageForScore_m2254(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t45* L_2 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral810);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral810;
		StringU5BU5D_t45* L_3 = L_2;
		String_t* L_4 = V_0;
		String_t* L_5 = WWW_EscapeURL_m2749(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)L_5;
		StringU5BU5D_t45* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral811);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral811;
		StringU5BU5D_t45* L_7 = L_6;
		String_t* L_8 = WWW_EscapeURL_m2749(NULL /*static, unused*/, (String_t*) &_stringLiteral758, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t45* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral812);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral812;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m217(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_m174(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral813, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14 = WWW_EscapeURL_m2749(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral814, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		String_t* L_17 = V_1;
		Object_t * L_18 = Utilities_LaunchAppOrWeb_m2258(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2347(__this, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreInternal_m2238 (TwitterSharing_t473 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral815, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		String_t* L_1 = Utilities_GetShareMessageForScore_m2254(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t296_il2cpp_TypeInfo_var);
		SPTwitter_t296 * L_2 = SPTwitter_get_instance_m1274(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		Texture2D_t65 * L_4 = (__this->___lazyAngusIcon_5);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Texture2D_t65 * >::Invoke(26 /* System.Void SPTwitter::Post(System.String,UnityEngine.Texture2D) */, L_2, L_3, L_4);
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

// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"
struct GameObject_t284;
struct BoostButton_t378;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t378_m2720(__this, method) (( BoostButton_t378 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void UseBoost::.ctor()
extern "C" void UseBoost__ctor_m2239 (UseBoost_t474 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UseBoost::Start()
extern "C" void UseBoost_Start_m2240 (UseBoost_t474 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t382 * L_1 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void UseBoost::Update()
extern "C" void UseBoost_Update_m2241 (UseBoost_t474 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UseBoost::Use()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var;
extern "C" void UseBoost_Use_m2242 (UseBoost_t474 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483997);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t378 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t378 * L_1 = GameObject_GetComponent_TisBoostButton_t378_m2720(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t378_m2720_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t378 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m1811(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PlayerStats_t382 * L_4 = (__this->___playerStats_3);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = PlayerStats_GetAvailableBoostCount_m2177(L_4, L_5, /*hidden argument*/NULL);
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
		PlayerStats_t382 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		PlayerStats_RemoveBoost_m2179(L_7, L_8, /*hidden argument*/NULL);
		BoostConfig_t373 * L_9 = (__this->___boostConfig_2);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		BoostConfig_ExecuteBoost_m1857(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// Utilities/<LaunchAppOrWeb>c__Iterator13
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1.h"
#ifndef _MSC_VER
#else
#endif
// Utilities/<LaunchAppOrWeb>c__Iterator13
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void Utilities/<LaunchAppOrWeb>c__Iterator13::.ctor()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator13__ctor_m2243 (U3CLaunchAppOrWebU3Ec__Iterator13_t475 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator13::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator13_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2244 (U3CLaunchAppOrWebU3Ec__Iterator13_t475 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator13::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator13_System_Collections_IEnumerator_get_Current_m2245 (U3CLaunchAppOrWebU3Ec__Iterator13_t475 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean Utilities/<LaunchAppOrWeb>c__Iterator13::MoveNext()
extern TypeInfo* WaitForSeconds_t579_il2cpp_TypeInfo_var;
extern "C" bool U3CLaunchAppOrWebU3Ec__Iterator13_MoveNext_m2246 (U3CLaunchAppOrWebU3Ec__Iterator13_t475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
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
		int32_t L_2 = Application_get_platform_m2541(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_3 = (__this->___appURL_0);
		String_t* L_4 = (__this->___webURL_1);
		Utilities_LaunchAppOrWebOnIOS_m2257(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		WaitForSeconds_t579 * L_5 = (WaitForSeconds_t579 *)il2cpp_codegen_object_new (WaitForSeconds_t579_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2713(L_5, (0.001f), /*hidden argument*/NULL);
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
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator13::Dispose()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator13_Dispose_m2247 (U3CLaunchAppOrWebU3Ec__Iterator13_t475 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator13::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator13_Reset_m2248 (U3CLaunchAppOrWebU3Ec__Iterator13_t475 * __this, const MethodInfo* method)
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
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
struct GameObject_t284;
struct RectTransform_t477;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t477_m2703(__this, method) (( RectTransform_t477 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m2249 (Utilities_t476 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m2250 (Object_t * __this /* static, unused */, Vector3_t412  ___vector, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		(&___vector)->___z_3 = (0.0f);
		Vector3_t412  L_0 = Vector3_get_right_m2821(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t412  L_1 = ___vector;
		float L_2 = Vector3_Angle_m2822(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" GameObject_t284 * Utilities_FindChildWithTag_m2251 (Object_t * __this /* static, unused */, GameObject_t284 * ___gameObject, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Transform_t323 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0007:
	{
		GameObject_t284 * L_0 = ___gameObject;
		NullCheck(L_0);
		Transform_t323 * L_1 = GameObject_get_transform_m2602(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t323 * L_3 = Transform_GetChild_m2823(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t323 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_t284 * L_5 = Component_get_gameObject_m2393(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m2824(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___tag;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m223(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t323 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_t284 * L_10 = Component_get_gameObject_m2393(L_9, /*hidden argument*/NULL);
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
		GameObject_t284 * L_13 = ___gameObject;
		NullCheck(L_13);
		Transform_t323 * L_14 = GameObject_get_transform_m2602(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m2825(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		return (GameObject_t284 *)NULL;
	}
}
// UnityEngine.Color Utilities::TrafficLightColorLerp(System.Single)
extern TypeInfo* Mathf_t585_il2cpp_TypeInfo_var;
extern "C" Color_t257  Utilities_TrafficLightColorLerp_m2252 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___fractionFinished;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t585_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m2758(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___fractionFinished = L_1;
		float L_2 = ___fractionFinished;
		if ((!(((float)L_2) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		Color_t257  L_3 = Color_get_green_m2826(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t257  L_4 = Color_get_yellow_m2827(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___fractionFinished;
		Color_t257  L_6 = Color_Lerp_m2828(NULL /*static, unused*/, L_3, L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		Color_t257  L_7 = Color_get_yellow_m2827(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t257  L_8 = Color_get_red_m2829(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___fractionFinished;
		Color_t257  L_10 = Color_Lerp_m2828(NULL /*static, unused*/, L_7, L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m2253 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t382 * L_0 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m2180(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*) &_stringLiteral779;
	}

IL_0018:
	{
		return (String_t*) &_stringLiteral816;
	}
}
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_GetShareMessageForScore_m2254 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t382 * L_0 = PlayerStats_get_instance_m2166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m2180(L_0, /*hidden argument*/NULL);
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
		Object_t * L_6 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m2448(NULL /*static, unused*/, (String_t*) &_stringLiteral817, L_6, (String_t*) &_stringLiteral818, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___score;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2448(NULL /*static, unused*/, (String_t*) &_stringLiteral819, L_10, (String_t*) &_stringLiteral818, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" {int32_t DEFAULT_CALL CanLaunchURL(char*);}
extern "C" bool Utilities_CanLaunchURL_m2255 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
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
extern "C" bool Utilities_AppCanLaunchURL_m2256 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m2541(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = Utilities_CanLaunchURL_m2255(NULL /*static, unused*/, (String_t*) &_stringLiteral758, /*hidden argument*/NULL);
		return L_1;
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m2257 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appURL;
		bool L_1 = Utilities_CanLaunchURL_m2255(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral820, /*hidden argument*/NULL);
		String_t* L_2 = ___appURL;
		Application_OpenURL_m2535(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		Debug_Log_m2322(NULL /*static, unused*/, (String_t*) &_stringLiteral821, /*hidden argument*/NULL);
		String_t* L_3 = ___webURL;
		Application_OpenURL_m2535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern TypeInfo* U3CLaunchAppOrWebU3Ec__Iterator13_t475_il2cpp_TypeInfo_var;
extern "C" Object_t * Utilities_LaunchAppOrWeb_m2258 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CLaunchAppOrWebU3Ec__Iterator13_t475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	U3CLaunchAppOrWebU3Ec__Iterator13_t475 * V_0 = {0};
	{
		U3CLaunchAppOrWebU3Ec__Iterator13_t475 * L_0 = (U3CLaunchAppOrWebU3Ec__Iterator13_t475 *)il2cpp_codegen_object_new (U3CLaunchAppOrWebU3Ec__Iterator13_t475_il2cpp_TypeInfo_var);
		U3CLaunchAppOrWebU3Ec__Iterator13__ctor_m2243(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLaunchAppOrWebU3Ec__Iterator13_t475 * L_1 = V_0;
		String_t* L_2 = ___appURL;
		NullCheck(L_1);
		L_1->___appURL_0 = L_2;
		U3CLaunchAppOrWebU3Ec__Iterator13_t475 * L_3 = V_0;
		String_t* L_4 = ___webURL;
		NullCheck(L_3);
		L_3->___webURL_1 = L_4;
		U3CLaunchAppOrWebU3Ec__Iterator13_t475 * L_5 = V_0;
		String_t* L_6 = ___appURL;
		NullCheck(L_5);
		L_5->___U3CU24U3EappURL_4 = L_6;
		U3CLaunchAppOrWebU3Ec__Iterator13_t475 * L_7 = V_0;
		String_t* L_8 = ___webURL;
		NullCheck(L_7);
		L_7->___U3CU24U3EwebURL_5 = L_8;
		U3CLaunchAppOrWebU3Ec__Iterator13_t475 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var;
extern "C" void Utilities_SpaceHorizontally_m2259 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t385* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483987);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t284 * V_2 = {0};
	GameObjectU5BU5D_t385* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t284 * V_10 = {0};
	GameObjectU5BU5D_t385* V_11 = {0};
	int32_t V_12 = 0;
	RectTransform_t477 * V_13 = {0};
	float V_14 = 0.0f;
	Vector2_t68  V_15 = {0};
	Rect_t496  V_16 = {0};
	Rect_t496  V_17 = {0};
	{
		float L_0 = ___containingWidth;
		V_0 = L_0;
		V_1 = (0.0f);
		GameObjectU5BU5D_t385* L_1 = ___objects;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		GameObjectU5BU5D_t385* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_2, L_4));
		float L_5 = V_1;
		GameObject_t284 * L_6 = V_2;
		NullCheck(L_6);
		RectTransform_t477 * L_7 = GameObject_GetComponent_TisRectTransform_t477_m2703(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var);
		NullCheck(L_7);
		Rect_t496  L_8 = RectTransform_get_rect_m2763(L_7, /*hidden argument*/NULL);
		V_16 = L_8;
		float L_9 = Rect_get_width_m2600((&V_16), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5+(float)L_9));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_4;
		GameObjectU5BU5D_t385* L_12 = V_3;
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
		GameObjectU5BU5D_t385* L_16 = ___objects;
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
		GameObjectU5BU5D_t385* L_20 = ___objects;
		V_11 = L_20;
		V_12 = 0;
		goto IL_00d7;
	}

IL_0079:
	{
		GameObjectU5BU5D_t385* L_21 = V_11;
		int32_t L_22 = V_12;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_10 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_21, L_23));
		GameObject_t284 * L_24 = V_10;
		NullCheck(L_24);
		RectTransform_t477 * L_25 = GameObject_GetComponent_TisRectTransform_t477_m2703(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var);
		V_13 = L_25;
		RectTransform_t477 * L_26 = V_13;
		NullCheck(L_26);
		Rect_t496  L_27 = RectTransform_get_rect_m2763(L_26, /*hidden argument*/NULL);
		V_17 = L_27;
		float L_28 = Rect_get_width_m2600((&V_17), /*hidden argument*/NULL);
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
		Vector2__ctor_m2830((&V_15), L_33, ((float)((float)L_34+(float)L_35)), /*hidden argument*/NULL);
		float L_36 = V_9;
		V_9 = ((-L_36));
		RectTransform_t477 * L_37 = V_13;
		Vector2_t68  L_38 = V_15;
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_m2831(L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_7;
		float L_40 = V_14;
		V_7 = ((float)((float)L_39+(float)L_40));
		int32_t L_41 = V_12;
		V_12 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_42 = V_12;
		GameObjectU5BU5D_t385* L_43 = V_11;
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
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
#ifndef _MSC_VER
#else
#endif
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"

// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
struct GameObject_t284;
struct Canvas_t375;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t375_m2832(__this, method) (( Canvas_t375 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2592_gshared)(__this, method)


// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m2260 (WorldObjectFollower_t478 * __this, const MethodInfo* method)
{
	{
		Vector3_t412  L_0 = {0};
		Vector3__ctor_m2597(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_10 = L_0;
		MonoBehaviour__ctor_m2288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldObjectFollower::Start()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t375_m2832_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var;
extern "C" void WorldObjectFollower_Start_m2261 (WorldObjectFollower_t478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t375_m2832_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484048);
		GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483987);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	Rect_t496  V_1 = {0};
	{
		GameObject_t284 * L_0 = GameObject_FindWithTag_m2833(NULL /*static, unused*/, (String_t*) &_stringLiteral822, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t323 * L_2 = GameObject_get_transform_m2602(L_1, /*hidden argument*/NULL);
		GameObject_t284 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t323 * L_4 = GameObject_get_transform_m2602(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_m2706(L_2, L_4, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_5 = V_0;
		NullCheck(L_5);
		Canvas_t375 * L_6 = GameObject_GetComponent_TisCanvas_t375_m2832(L_5, /*hidden argument*/GameObject_GetComponent_TisCanvas_t375_m2832_MethodInfo_var);
		__this->___worldCanvas_4 = L_6;
		Canvas_t375 * L_7 = (__this->___worldCanvas_4);
		NullCheck(L_7);
		Camera_t428 * L_8 = Canvas_get_worldCamera_m2834(L_7, /*hidden argument*/NULL);
		__this->___worldCamera_5 = L_8;
		Canvas_t375 * L_9 = (__this->___worldCanvas_4);
		NullCheck(L_9);
		Rect_t496  L_10 = Canvas_get_pixelRect_m2722(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = Rect_get_width_m2600((&V_1), /*hidden argument*/NULL);
		Canvas_t375 * L_12 = (__this->___worldCanvas_4);
		NullCheck(L_12);
		float L_13 = Canvas_get_scaleFactor_m2723(L_12, /*hidden argument*/NULL);
		__this->___canvasWidth_6 = ((float)((float)L_11/(float)L_13));
		float L_14 = Rect_get_height_m2601((&V_1), /*hidden argument*/NULL);
		Canvas_t375 * L_15 = (__this->___worldCanvas_4);
		NullCheck(L_15);
		float L_16 = Canvas_get_scaleFactor_m2723(L_15, /*hidden argument*/NULL);
		__this->___canvasHeight_7 = ((float)((float)L_14/(float)L_16));
		GameObject_t284 * L_17 = Component_get_gameObject_m2393(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_t477 * L_18 = GameObject_GetComponent_TisRectTransform_t477_m2703(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t477_m2703_MethodInfo_var);
		__this->___myRectTransform_3 = L_18;
		return;
	}
}
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m2262 (WorldObjectFollower_t478 * __this, const MethodInfo* method)
{
	{
		RectTransform_t477 * L_0 = (__this->___myRectTransform_3);
		bool L_1 = Object_op_Implicit_m2663(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = (__this->___followeeMoves_8);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = (__this->___positionDirty_9);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_0026:
	{
		__this->___positionDirty_9 = 0;
		WorldObjectFollower_ResetPosition_m2264(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m2263 (WorldObjectFollower_t478 * __this, GameObject_t284 * ___go, Vector3_t412  ___offset, bool ___followeeMoves, const MethodInfo* method)
{
	{
		GameObject_t284 * L_0 = ___go;
		__this->___objectToFollow_2 = L_0;
		Vector3_t412  L_1 = ___offset;
		__this->___offset_10 = L_1;
		bool L_2 = ___followeeMoves;
		__this->___followeeMoves_8 = L_2;
		__this->___positionDirty_9 = 1;
		return;
	}
}
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m2264 (WorldObjectFollower_t478 * __this, const MethodInfo* method)
{
	Vector3_t412  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Camera_t428 * L_0 = (__this->___worldCamera_5);
		GameObject_t284 * L_1 = (__this->___objectToFollow_2);
		NullCheck(L_1);
		Transform_t323 * L_2 = GameObject_get_transform_m2602(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t412  L_3 = Transform_get_position_m2604(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t412  L_4 = Camera_WorldToViewportPoint_m2835(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___x_1);
		float L_6 = (__this->___canvasWidth_6);
		V_1 = ((float)((float)((float)((float)L_5-(float)(0.5f)))*(float)L_6));
		float L_7 = ((&V_0)->___y_2);
		float L_8 = (__this->___canvasHeight_7);
		V_2 = ((float)((float)((float)((float)L_7-(float)(0.5f)))*(float)L_8));
		RectTransform_t477 * L_9 = (__this->___myRectTransform_3);
		float L_10 = V_1;
		float L_11 = V_2;
		Vector3_t412  L_12 = {0};
		Vector3__ctor_m2597(&L_12, L_10, L_11, (0.0f), /*hidden argument*/NULL);
		Vector3_t412  L_13 = (__this->___offset_10);
		Vector3_t412  L_14 = Vector3_op_Addition_m2804(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m2762(L_9, L_14, /*hidden argument*/NULL);
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

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnionAssets.FLE.EventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandlerFunction__ctor_m2265 (EventHandlerFunction_t479 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m2266 (EventHandlerFunction_t479 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandlerFunction_Invoke_m2266((EventHandlerFunction_t479 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t479(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m2267 (EventHandlerFunction_t479 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m2268 (EventHandlerFunction_t479 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void DataEventHandlerFunction__ctor_m2269 (DataEventHandlerFunction_t480 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m2270 (DataEventHandlerFunction_t480 * __this, CEvent_t91 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DataEventHandlerFunction_Invoke_m2270((DataEventHandlerFunction_t480 *)__this->___prev_9,___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, CEvent_t91 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, CEvent_t91 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t480(Il2CppObject* delegate, CEvent_t91 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	CEvent_t91 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnionAssets.FLE.CEvent'."));
}
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m2271 (DataEventHandlerFunction_t480 * __this, CEvent_t91 * ___e, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m2272 (DataEventHandlerFunction_t480 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void InitDelegate__ctor_m2273 (InitDelegate_t336 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m2274 (InitDelegate_t336 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		InitDelegate_Invoke_m2274((InitDelegate_t336 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_InitDelegate_t336(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult Facebook.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * InitDelegate_BeginInvoke_m2275 (InitDelegate_t336 * __this, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m2276 (InitDelegate_t336 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void FacebookDelegate__ctor_m2277 (FacebookDelegate_t350 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m2278 (FacebookDelegate_t350 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FacebookDelegate_Invoke_m2278((FacebookDelegate_t350 *)__this->___prev_9,___result, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, FBResult_t213 * ___result, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, FBResult_t213 * ___result, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FacebookDelegate_t350(Il2CppObject* delegate, FBResult_t213 * ___result)
{
	// Marshaling of parameter '___result' to native representation
	FBResult_t213 * ____result_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'FBResult'."));
}
// System.IAsyncResult Facebook.FacebookDelegate::BeginInvoke(FBResult,System.AsyncCallback,System.Object)
extern "C" Object_t * FacebookDelegate_BeginInvoke_m2279 (FacebookDelegate_t350 * __this, FBResult_t213 * ___result, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m2280 (FacebookDelegate_t350 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void HideUnityDelegate__ctor_m2281 (HideUnityDelegate_t337 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C" void HideUnityDelegate_Invoke_m2282 (HideUnityDelegate_t337 * __this, bool ___isUnityShown, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HideUnityDelegate_Invoke_m2282((HideUnityDelegate_t337 *)__this->___prev_9,___isUnityShown, method);
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
extern "C" void pinvoke_delegate_wrapper_HideUnityDelegate_t337(Il2CppObject* delegate, bool ___isUnityShown)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___isUnityShown' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___isUnityShown);

	// Marshaling cleanup of parameter '___isUnityShown' native representation

}
// System.IAsyncResult Facebook.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" Object_t * HideUnityDelegate_BeginInvoke_m2283 (HideUnityDelegate_t337 * __this, bool ___isUnityShown, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t29_il2cpp_TypeInfo_var, &___isUnityShown);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.HideUnityDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HideUnityDelegate_EndInvoke_m2284 (HideUnityDelegate_t337 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
