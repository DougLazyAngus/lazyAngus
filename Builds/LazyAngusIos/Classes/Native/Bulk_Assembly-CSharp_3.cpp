#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// GameUI
#include "AssemblyU2DCSharp_GameUI.h"
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
// GameUI
#include "AssemblyU2DCSharp_GameUIMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void GameUI::.ctor()
extern "C" void GameUI__ctor_m2803 (GameUI_t502 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::SetUIActive(System.Boolean)
extern "C" void GameUI_SetUIActive_m2804 (GameUI_t502 * __this, bool ___uiActive, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		bool L_1 = ___uiActive;
		NullCheck(L_0);
		GameObject_SetActive_m3729(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___uiActive;
		if (!L_2)
		{
			goto IL_0012;
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void GameUI::ConfirmLayoutComplete()
extern "C" void GameUI_ConfirmLayoutComplete_m2805 (GameUI_t502 * __this, const MethodInfo* method)
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



// GameUIController/<ConfirmComplete>c__Iterator13
#include "AssemblyU2DCSharp_GameUIController_U3CConfirmCompleteU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// GameUIController/<ConfirmComplete>c__Iterator13
#include "AssemblyU2DCSharp_GameUIController_U3CConfirmCompleteU3Ec__IMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// System.Single
#include "mscorlib_System_Single.h"
// GameUIController
#include "AssemblyU2DCSharp_GameUIController.h"
#include "Assembly-CSharp_ArrayTypes.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void GameUIController/<ConfirmComplete>c__Iterator13::.ctor()
extern "C" void U3CConfirmCompleteU3Ec__Iterator13__ctor_m2806 (U3CConfirmCompleteU3Ec__Iterator13_t522 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator13::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator13_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2807 (U3CConfirmCompleteU3Ec__Iterator13_t522 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator13::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator13_System_Collections_IEnumerator_get_Current_m2808 (U3CConfirmCompleteU3Ec__Iterator13_t522 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean GameUIController/<ConfirmComplete>c__Iterator13::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CConfirmCompleteU3Ec__Iterator13_MoveNext_m2809 (U3CConfirmCompleteU3Ec__Iterator13_t522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
		WaitForSeconds_t738 * L_2 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_2, (0.0f), /*hidden argument*/NULL);
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
		GameUIController_t521 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		GameUIU5BU5D_t519* L_4 = (L_3->___gameUIs_6);
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(GameUI_t502 **)(GameUI_t502 **)SZArrayLdElema(L_4, L_6)));
		VirtActionInvoker0::Invoke(4 /* System.Void GameUI::ConfirmLayoutComplete() */, (*(GameUI_t502 **)(GameUI_t502 **)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_8 = (__this->___U3CiU3E__0_0);
		GameUIController_t521 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		GameUIU5BU5D_t519* L_10 = (L_9->___gameUIs_6);
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
// System.Void GameUIController/<ConfirmComplete>c__Iterator13::Dispose()
extern "C" void U3CConfirmCompleteU3Ec__Iterator13_Dispose_m2810 (U3CConfirmCompleteU3Ec__Iterator13_t522 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void GameUIController/<ConfirmComplete>c__Iterator13::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CConfirmCompleteU3Ec__Iterator13_Reset_m2811 (U3CConfirmCompleteU3Ec__Iterator13_t522 * __this, const MethodInfo* method)
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

// LevelPlayUI
#include "AssemblyU2DCSharp_LevelPlayUI.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneState.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// System.String
#include "mscorlib_System_String.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"
// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneStateMethodDeclarations.h"
struct GameObject_t352;
struct GameUI_t502;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m3802_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m3802(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<GameUI>()
// !!0 UnityEngine.GameObject::GetComponent<GameUI>()
#define GameObject_GetComponent_TisGameUI_t502_m3973(__this, method) (( GameUI_t502 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)
struct GameObject_t352;
struct LevelPlayUI_t552;
// Declaration !!0 UnityEngine.GameObject::GetComponent<LevelPlayUI>()
// !!0 UnityEngine.GameObject::GetComponent<LevelPlayUI>()
#define GameObject_GetComponent_TisLevelPlayUI_t552_m3974(__this, method) (( LevelPlayUI_t552 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void GameUIController::.ctor()
extern "C" void GameUIController__ctor_m2812 (GameUIController_t521 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameUIController GameUIController::get_instance()
extern TypeInfo* GameUIController_t521_il2cpp_TypeInfo_var;
extern "C" GameUIController_t521 * GameUIController_get_instance_m2813 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t521 * L_0 = ((GameUIController_t521_StaticFields*)GameUIController_t521_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GameUIController::set_instance(GameUIController)
extern TypeInfo* GameUIController_t521_il2cpp_TypeInfo_var;
extern "C" void GameUIController_set_instance_m2814 (Object_t * __this /* static, unused */, GameUIController_t521 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t521 * L_0 = ___value;
		((GameUIController_t521_StaticFields*)GameUIController_t521_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void GameUIController::Awake()
extern TypeInfo* GameUIU5BU5D_t519_il2cpp_TypeInfo_var;
extern "C" void GameUIController_Awake_m2815 (GameUIController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIU5BU5D_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_set_instance_m2814(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___gameUIs_6 = ((GameUIU5BU5D_t519*)SZArrayNew(GameUIU5BU5D_t519_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Void GameUIController::Start()
extern const MethodInfo* GameObject_GetComponent_TisGameUI_t502_m3973_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisLevelPlayUI_t552_m3974_MethodInfo_var;
extern "C" void GameUIController_Start_m2816 (GameUIController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisGameUI_t502_m3973_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		GameObject_GetComponent_TisLevelPlayUI_t552_m3974_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484154);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_0);
		GameObject_SetActive_m3729(L_0, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_1 = (__this->___levelPlayUIGameObject_4);
		NullCheck(L_1);
		GameObject_SetActive_m3729(L_1, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_2);
		GameObject_SetActive_m3729(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___gameOverUIGameObject_5);
		NullCheck(L_3);
		GameObject_SetActive_m3729(L_3, 0, /*hidden argument*/NULL);
		GameUIU5BU5D_t519* L_4 = (__this->___gameUIs_6);
		GameObject_t352 * L_5 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_5);
		GameUI_t502 * L_6 = GameObject_GetComponent_TisGameUI_t502_m3973(L_5, /*hidden argument*/GameObject_GetComponent_TisGameUI_t502_m3973_MethodInfo_var);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_6);
		*((GameUI_t502 **)(GameUI_t502 **)SZArrayLdElema(L_4, 0)) = (GameUI_t502 *)L_6;
		GameUIU5BU5D_t519* L_7 = (__this->___gameUIs_6);
		GameObject_t352 * L_8 = (__this->___levelPlayUIGameObject_4);
		NullCheck(L_8);
		LevelPlayUI_t552 * L_9 = GameObject_GetComponent_TisLevelPlayUI_t552_m3974(L_8, /*hidden argument*/GameObject_GetComponent_TisLevelPlayUI_t552_m3974_MethodInfo_var);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_9);
		*((GameUI_t502 **)(GameUI_t502 **)SZArrayLdElema(L_7, 2)) = (GameUI_t502 *)L_9;
		GameUIU5BU5D_t519* L_10 = (__this->___gameUIs_6);
		GameObject_t352 * L_11 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_11);
		GameUI_t502 * L_12 = GameObject_GetComponent_TisGameUI_t502_m3973(L_11, /*hidden argument*/GameObject_GetComponent_TisGameUI_t502_m3973_MethodInfo_var);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_12);
		*((GameUI_t502 **)(GameUI_t502 **)SZArrayLdElema(L_10, 1)) = (GameUI_t502 *)L_12;
		GameUIU5BU5D_t519* L_13 = (__this->___gameUIs_6);
		GameObject_t352 * L_14 = (__this->___gameOverUIGameObject_5);
		NullCheck(L_14);
		GameUI_t502 * L_15 = GameObject_GetComponent_TisGameUI_t502_m3973(L_14, /*hidden argument*/GameObject_GetComponent_TisGameUI_t502_m3973_MethodInfo_var);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_15);
		*((GameUI_t502 **)(GameUI_t502 **)SZArrayLdElema(L_13, 3)) = (GameUI_t502 *)L_15;
		GameUIController_RegisterForEvents_m2819(__this, /*hidden argument*/NULL);
		GameUIController_OnGamePhaseChanged_m2821(__this, /*hidden argument*/NULL);
		Object_t * L_16 = GameUIController_ConfirmComplete_m2817(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3492(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GameUIController::ConfirmComplete()
extern TypeInfo* U3CConfirmCompleteU3Ec__Iterator13_t522_il2cpp_TypeInfo_var;
extern "C" Object_t * GameUIController_ConfirmComplete_m2817 (GameUIController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CConfirmCompleteU3Ec__Iterator13_t522_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	U3CConfirmCompleteU3Ec__Iterator13_t522 * V_0 = {0};
	{
		U3CConfirmCompleteU3Ec__Iterator13_t522 * L_0 = (U3CConfirmCompleteU3Ec__Iterator13_t522 *)il2cpp_codegen_object_new (U3CConfirmCompleteU3Ec__Iterator13_t522_il2cpp_TypeInfo_var);
		U3CConfirmCompleteU3Ec__Iterator13__ctor_m2806(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CConfirmCompleteU3Ec__Iterator13_t522 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CConfirmCompleteU3Ec__Iterator13_t522 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameUIController::OnDestroy()
extern "C" void GameUIController_OnDestroy_m2818 (GameUIController_t521 * __this, const MethodInfo* method)
{
	{
		GameUIController_UnregisterForEvents_m2820(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m2821_MethodInfo_var;
extern "C" void GameUIController_RegisterForEvents_m2819 (GameUIController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		GameUIController_OnGamePhaseChanged_m2821_MethodInfo_var = il2cpp_codegen_method_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_7);
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
		__this->___registeredForEvents_7 = 1;
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m2821_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2783(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m2821_MethodInfo_var;
extern "C" void GameUIController_UnregisterForEvents_m2820 (GameUIController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		GameUIController_OnGamePhaseChanged_m2821_MethodInfo_var = il2cpp_codegen_method_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m2821_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2784(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameUIController::OnGamePhaseChanged()
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameUIController_OnGamePhaseChanged_m2821 (GameUIController_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	CrossSceneState_t484 * V_0 = {0};
	int32_t V_1 = {0};
	{
		float L_0 = Time_get_realtimeSinceStartup_m3971(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t87_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1011, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		GamePhaseState_t517 * L_4 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_gamePhase_m2785(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (((int32_t)((int32_t)L_6-(int32_t)1)) == 0)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)1)) == 1)
		{
			goto IL_0079;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)1)) == 2)
		{
			goto IL_0091;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)1)) == 3)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)1)) == 4)
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00a9;
	}

IL_0045:
	{
		DebugConfig_t490 * L_7 = DebugConfig_get_instance_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = DebugConfig_get_useDebugValues_m2658(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		GameUIController_SetActiveUI_m2822(__this, 1, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_0060:
	{
		GameUIController_SetActiveUI_m2822(__this, 0, /*hidden argument*/NULL);
	}

IL_0067:
	{
		CrossSceneState_t484 * L_9 = CrossSceneState_get_instance_m2632(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_9;
		CrossSceneState_t484 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___didWelcome_2 = 1;
		goto IL_00a9;
	}

IL_0079:
	{
		GameUIController_SetActiveUI_m2822(__this, 2, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0085:
	{
		GameUIController_SetActiveUI_m2822(__this, 2, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0091:
	{
		GameUIController_SetActiveUI_m2822(__this, 1, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_009d:
	{
		GameUIController_SetActiveUI_m2822(__this, 3, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_00a9:
	{
		float L_11 = Time_get_realtimeSinceStartup_m3971(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = L_11;
		Object_t * L_13 = Box(Single_t87_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1012, L_13, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::SetActiveUI(GameUIController/GameUIsType)
extern "C" void GameUIController_SetActiveUI_m2822 (GameUIController_t521 * __this, int32_t ___uiType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	GameUI_t502 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameUIU5BU5D_t519* L_0 = (__this->___gameUIs_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(GameUI_t502 **)(GameUI_t502 **)SZArrayLdElema(L_0, L_2));
		GameUI_t502 * L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = ___uiType;
		NullCheck(L_3);
		GameUI_SetUIActive_m2804(L_3, ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14
#include "AssemblyU2DCSharp_GoogleAdController_U3CCreatePendingInterst.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14
#include "AssemblyU2DCSharp_GoogleAdController_U3CCreatePendingInterstMethodDeclarations.h"

// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdController.h"
// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdControllerMethodDeclarations.h"


// System.Void GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14::.ctor()
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator14__ctor_m2823 (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CCreatePendingInterstitialAdU3Ec__Iterator14_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2824 (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreatePendingInterstitialAdU3Ec__Iterator14_System_Collections_IEnumerator_get_Current_m2825 (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CCreatePendingInterstitialAdU3Ec__Iterator14_MoveNext_m2826 (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
		GoogleAdController_t523 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___waitBeforeAd_4);
		WaitForSeconds_t738 * L_4 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0063;
	}

IL_0043:
	{
		GoogleAdController_t523 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		L_5->___pendingInterstitialAd_5 = (Object_t *)NULL;
		GoogleAdController_t523 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		GoogleAdController_TryToShowInterstitialAd_m2847(L_6, /*hidden argument*/NULL);
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
// System.Void GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14::Dispose()
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator14_Dispose_m2827 (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GoogleAdController/<CreatePendingInterstitialAd>c__Iterator14::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator14_Reset_m2828 (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * __this, const MethodInfo* method)
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
// GoogleAdController/<RefreshInSeparateThread>c__Iterator15
#include "AssemblyU2DCSharp_GoogleAdController_U3CRefreshInSeparateThr.h"
#ifndef _MSC_VER
#else
#endif
// GoogleAdController/<RefreshInSeparateThread>c__Iterator15
#include "AssemblyU2DCSharp_GoogleAdController_U3CRefreshInSeparateThrMethodDeclarations.h"



// System.Void GoogleAdController/<RefreshInSeparateThread>c__Iterator15::.ctor()
extern "C" void U3CRefreshInSeparateThreadU3Ec__Iterator15__ctor_m2829 (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GoogleAdController/<RefreshInSeparateThread>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CRefreshInSeparateThreadU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2830 (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GoogleAdController/<RefreshInSeparateThread>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CRefreshInSeparateThreadU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m2831 (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GoogleAdController/<RefreshInSeparateThread>c__Iterator15::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CRefreshInSeparateThreadU3Ec__Iterator15_MoveNext_m2832 (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
			goto IL_003d;
		}
	}
	{
		goto IL_0044;
	}

IL_0021:
	{
		WaitForSeconds_t738 * L_2 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_2, (0.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0046;
	}

IL_003d:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0044:
	{
		return 0;
	}

IL_0046:
	{
		return 1;
	}
	// Dead block : IL_0048: ldloc.1
}
// System.Void GoogleAdController/<RefreshInSeparateThread>c__Iterator15::Dispose()
extern "C" void U3CRefreshInSeparateThreadU3Ec__Iterator15_Dispose_m2833 (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GoogleAdController/<RefreshInSeparateThread>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CRefreshInSeparateThreadU3Ec__Iterator15_Reset_m2834 (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * __this, const MethodInfo* method)
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
// System.Delegate
#include "mscorlib_System_Delegate.h"
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
// GoogleMobileAd
#include "AssemblyU2DCSharp_GoogleMobileAdMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"


// System.Void GoogleAdController::.ctor()
extern "C" void GoogleAdController__ctor_m2835 (GoogleAdController_t523 * __this, const MethodInfo* method)
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
extern TypeInfo* GoogleAdController_t523_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsLoaded_m2839_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsOpen_m2840_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsClosed_m2841_MethodInfo_var;
extern "C" void GoogleAdController_Awake_m2836 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAdController_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		GoogleAdController_OnInterstisialsLoaded_m2839_MethodInfo_var = il2cpp_codegen_method_info_from_index(508);
		GoogleAdController_OnInterstisialsOpen_m2840_MethodInfo_var = il2cpp_codegen_method_info_from_index(509);
		GoogleAdController_OnInterstisialsClosed_m2841_MethodInfo_var = il2cpp_codegen_method_info_from_index(510);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GoogleAdController_t523_StaticFields*)GoogleAdController_t523_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
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
		IntPtr_t L_4 = { (void*)GoogleAdController_OnInterstisialsLoaded_m2839_MethodInfo_var };
		Action_t143 * L_5 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3531(L_5, __this, L_4, /*hidden argument*/NULL);
		Delegate_t677 * L_6 = Delegate_Combine_m3532(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = ((Action_t143 *)Castclass(L_6, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_7 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4;
		IntPtr_t L_8 = { (void*)GoogleAdController_OnInterstisialsOpen_m2840_MethodInfo_var };
		Action_t143 * L_9 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3531(L_9, __this, L_8, /*hidden argument*/NULL);
		Delegate_t677 * L_10 = Delegate_Combine_m3532(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4 = ((Action_t143 *)Castclass(L_10, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_11 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5;
		IntPtr_t L_12 = { (void*)GoogleAdController_OnInterstisialsClosed_m2841_MethodInfo_var };
		Action_t143 * L_13 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3531(L_13, __this, L_12, /*hidden argument*/NULL);
		Delegate_t677 * L_14 = Delegate_Combine_m3532(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5 = ((Action_t143 *)Castclass(L_14, Action_t143_il2cpp_TypeInfo_var));
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::Start()
extern "C" void GoogleAdController_Start_m2837 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_RegisterForEvents_m2842(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateBanner_m2849(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnDestroy()
extern "C" void GoogleAdController_OnDestroy_m2838 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UnregisterForEvents_m2843(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsLoaded()
extern "C" void GoogleAdController_OnInterstisialsLoaded_m2839 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	{
		__this->___interstitialAdLoaded_7 = 1;
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsOpen()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsOpen_m2840 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_SuppressSounds_m3307(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsClosed()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsClosed_m2841 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___interstitialAdLoaded_7 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_UnsuppressSounds_m3308(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m2844_MethodInfo_var;
extern "C" void GoogleAdController_RegisterForEvents_m2842 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		GoogleAdController_OnGamePhaseChanged_m2844_MethodInfo_var = il2cpp_codegen_method_info_from_index(511);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m2844_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2783(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m2844_MethodInfo_var;
extern "C" void GoogleAdController_UnregisterForEvents_m2843 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		GoogleAdController_OnGamePhaseChanged_m2844_MethodInfo_var = il2cpp_codegen_method_info_from_index(511);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m2844_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2784(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GoogleAdController::OnGamePhaseChanged()
extern "C" void GoogleAdController_OnGamePhaseChanged_m2844 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GoogleAdController::UpdateInterstialAd()
extern "C" void GoogleAdController_UpdateInterstialAd_m2845 (GoogleAdController_t523 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m3936(__this, L_1, /*hidden argument*/NULL);
		__this->___pendingInterstitialAd_5 = (Object_t *)NULL;
	}

IL_001e:
	{
		GamePhaseState_t517 * L_2 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m2785(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_4 = GoogleAdController_CreatePendingInterstitialAd_m2846(__this, /*hidden argument*/NULL);
		__this->___pendingInterstitialAd_5 = L_4;
		Object_t * L_5 = (__this->___pendingInterstitialAd_5);
		MonoBehaviour_StartCoroutine_m3492(__this, L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Collections.IEnumerator GoogleAdController::CreatePendingInterstitialAd()
extern TypeInfo* U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleAdController_CreatePendingInterstitialAd_m2846 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * V_0 = {0};
	{
		U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * L_0 = (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 *)il2cpp_codegen_object_new (U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524_il2cpp_TypeInfo_var);
		U3CCreatePendingInterstitialAdU3Ec__Iterator14__ctor_m2823(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CCreatePendingInterstitialAdU3Ec__Iterator14_t524 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GoogleAdController::TryToShowInterstitialAd()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_TryToShowInterstitialAd_m2847 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = GoogleAdController_ShouldShowInterstitialAd_m2848(__this, /*hidden argument*/NULL);
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
extern "C" bool GoogleAdController_ShouldShowInterstitialAd_m2848 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t517 * L_0 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_instancesFinishedThisSession_m2787(L_0, /*hidden argument*/NULL);
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
extern "C" void GoogleAdController_UpdateBanner_m2849 (GoogleAdController_t523 * __this, const MethodInfo* method)
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
		GamePhaseState_t517 * L_2 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m2785(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 1)
		{
			goto IL_005f;
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
		goto IL_005f;
	}

IL_003f:
	{
		Object_t * L_5 = (__this->___banner_9);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_5);
		goto IL_0071;
	}

IL_004f:
	{
		Object_t * L_6 = (__this->___banner_9);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_6);
		goto IL_0071;
	}

IL_005f:
	{
		Object_t * L_7 = GoogleAdController_RefreshInSeparateThread_m2850(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3492(__this, L_7, /*hidden argument*/NULL);
		goto IL_0071;
	}

IL_0071:
	{
		return;
	}
}
// System.Collections.IEnumerator GoogleAdController::RefreshInSeparateThread()
extern TypeInfo* U3CRefreshInSeparateThreadU3Ec__Iterator15_t525_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleAdController_RefreshInSeparateThread_m2850 (GoogleAdController_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRefreshInSeparateThreadU3Ec__Iterator15_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		s_Il2CppMethodIntialized = true;
	}
	U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * V_0 = {0};
	{
		U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * L_0 = (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 *)il2cpp_codegen_object_new (U3CRefreshInSeparateThreadU3Ec__Iterator15_t525_il2cpp_TypeInfo_var);
		U3CRefreshInSeparateThreadU3Ec__Iterator15__ctor_m2829(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRefreshInSeparateThreadU3Ec__Iterator15_t525 * L_1 = V_0;
		return L_1;
	}
}
// System.Single GoogleAdController::GetBannerHeight()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern "C" float GoogleAdController_GetBannerHeight_m2851 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3449(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (((float)L_0));
		int32_t L_1 = Screen_get_height_m3449(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1013, L_3, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_5 = Screen_get_dpi_m3556(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t87_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1014, L_7, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		float L_9 = V_0;
		if ((!(((float)L_9) < ((float)(400.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		return (32.0f);
	}

IL_004a:
	{
		float L_10 = V_0;
		if ((!(((float)L_10) <= ((float)(720.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		return (50.0f);
	}

IL_005b:
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

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRenderer.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRendererMethodDeclarations.h"


// System.Void HeadMovement::.ctor()
extern "C" void HeadMovement__ctor_m2852 (HeadMovement_t527 * __this, const MethodInfo* method)
{
	{
		__this->___moveToSpeedDeg_2 = (360.0f);
		__this->___moveHomeSpeedDeg_3 = (90.0f);
		__this->___maxTurnDeg_4 = (25.0f);
		__this->___holdTime_6 = (0.2f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HeadMovement::Start()
extern "C" void HeadMovement_Start_m2853 (HeadMovement_t527 * __this, const MethodInfo* method)
{
	{
		__this->___phase_9 = 0;
		__this->___currentDeg_8 = (0.0f);
		return;
	}
}
// System.Void HeadMovement::Update()
extern "C" void HeadMovement_Update_m2854 (HeadMovement_t527 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___phase_9);
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
		float L_2 = (__this->___targetDeg_7);
		float L_3 = (__this->___moveToSpeedDeg_2);
		bool L_4 = HeadMovement_MoveTowards_m2855(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		__this->___phase_9 = 2;
		float L_5 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_10 = L_5;
	}

IL_0049:
	{
		goto IL_0093;
	}

IL_004e:
	{
		float L_6 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___phaseStartTime_10);
		float L_8 = (__this->___holdTime_6);
		if ((!(((float)L_6) > ((float)((float)((float)L_7+(float)L_8))))))
		{
			goto IL_006c;
		}
	}
	{
		__this->___phase_9 = 3;
	}

IL_006c:
	{
		goto IL_0093;
	}

IL_0071:
	{
		float L_9 = (__this->___moveHomeSpeedDeg_3);
		bool L_10 = HeadMovement_MoveTowards_m2855(__this, (0.0f), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		__this->___phase_9 = 0;
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
extern "C" bool HeadMovement_MoveTowards_m2855 (HeadMovement_t527 * __this, float ___targetDeg, float ___speedDeg, const MethodInfo* method)
{
	bool V_0 = false;
	{
		float L_0 = ___targetDeg;
		float L_1 = (__this->___currentDeg_8);
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
		float L_3 = (__this->___currentDeg_8);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_004a;
		}
	}
	{
		float L_4 = (__this->___currentDeg_8);
		float L_5 = Time_get_deltaTime_m3957(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = ___speedDeg;
		__this->___currentDeg_8 = ((float)((float)L_4-(float)((float)((float)L_5*(float)L_6))));
		float L_7 = (__this->___currentDeg_8);
		float L_8 = ___targetDeg;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_0045;
		}
	}
	{
		float L_9 = ___targetDeg;
		__this->___currentDeg_8 = L_9;
		V_0 = 1;
	}

IL_0045:
	{
		goto IL_0073;
	}

IL_004a:
	{
		float L_10 = (__this->___currentDeg_8);
		float L_11 = Time_get_deltaTime_m3957(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = ___speedDeg;
		__this->___currentDeg_8 = ((float)((float)L_10+(float)((float)((float)L_11*(float)L_12))));
		float L_13 = (__this->___currentDeg_8);
		float L_14 = ___targetDeg;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0073;
		}
	}
	{
		float L_15 = ___targetDeg;
		__this->___currentDeg_8 = L_15;
		V_0 = 1;
	}

IL_0073:
	{
		Transform_t406 * L_16 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		float L_17 = (__this->___currentDeg_8);
		Quaternion_t737  L_18 = Quaternion_Euler_m3962(NULL /*static, unused*/, (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localRotation_m3975(L_16, L_18, /*hidden argument*/NULL);
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void HeadMovement::LookTowards(UnityEngine.Vector3)
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" void HeadMovement_LookTowards_m2856 (HeadMovement_t527 * __this, Vector3_t496  ___location, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ((&___location)->___y_2);
		float L_1 = ((&___location)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_2 = atan2f(L_0, L_1);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = ((float)((float)L_3*(float)(57.29578f)));
		ConeOfViewRenderer_t483 * L_4 = (__this->___coneOfView_5);
		NullCheck(L_4);
		float L_5 = ConeOfViewRenderer_get_actualAngleRange_m2622(L_4, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_5/(float)(2.0f)));
		float L_6 = V_1;
		float L_7 = V_2;
		float L_8 = V_2;
		float L_9 = Mathf_Clamp_m3976(NULL /*static, unused*/, L_6, ((-L_7)), L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		float L_11 = (__this->___maxTurnDeg_4);
		float L_12 = V_2;
		V_3 = ((float)((float)((float)((float)L_10*(float)L_11))/(float)L_12));
		float L_13 = V_3;
		__this->___targetDeg_7 = L_13;
		__this->___phase_9 = 1;
		return;
	}
}
// HoleMeter/<TriggerDistortionEffect>c__Iterator16
#include "AssemblyU2DCSharp_HoleMeter_U3CTriggerDistortionEffectU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// HoleMeter/<TriggerDistortionEffect>c__Iterator16
#include "AssemblyU2DCSharp_HoleMeter_U3CTriggerDistortionEffectU3Ec__MethodDeclarations.h"

// HoleMeter
#include "AssemblyU2DCSharp_HoleMeter.h"
#include "UnityEngine_ArrayTypes.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct GameObject_t352;
struct DistortForEffect_t495;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t495_m3977(__this, method) (( DistortForEffect_t495 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void HoleMeter/<TriggerDistortionEffect>c__Iterator16::.ctor()
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator16__ctor_m2857 (U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object HoleMeter/<TriggerDistortionEffect>c__Iterator16::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__Iterator16_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2858 (U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object HoleMeter/<TriggerDistortionEffect>c__Iterator16::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__Iterator16_System_Collections_IEnumerator_get_Current_m2859 (U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean HoleMeter/<TriggerDistortionEffect>c__Iterator16::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var;
extern "C" bool U3CTriggerDistortionEffectU3Ec__Iterator16_MoveNext_m2860 (U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484160);
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
			goto IL_003d;
		}
	}
	{
		goto IL_009e;
	}

IL_0021:
	{
		WaitForSeconds_t738 * L_2 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_2, (0.25f), /*hidden argument*/NULL);
		__this->___U24current_3 = L_2;
		__this->___U24PC_2 = 1;
		goto IL_00a0;
	}

IL_003d:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_007f;
	}

IL_0049:
	{
		HoleMeter_t528 * L_3 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		GameObjectU5BU5D_t467* L_4 = (L_3->___meterWidgetGameObjects_6);
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		__this->___U3CgoU3E__1_1 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_4, L_6));
		GameObject_t352 * L_7 = (__this->___U3CgoU3E__1_1);
		NullCheck(L_7);
		DistortForEffect_t495 * L_8 = GameObject_GetComponent_TisDistortForEffect_t495_m3977(L_7, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var);
		NullCheck(L_8);
		DistortForEffect_Distort_m2681(L_8, /*hidden argument*/NULL);
		int32_t L_9 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_007f:
	{
		int32_t L_10 = (__this->___U3CiU3E__0_0);
		HoleMeter_t528 * L_11 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_11);
		GameObjectU5BU5D_t467* L_12 = (L_11->___meterWidgetGameObjects_6);
		NullCheck(L_12);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		__this->___U24PC_2 = (-1);
	}

IL_009e:
	{
		return 0;
	}

IL_00a0:
	{
		return 1;
	}
	// Dead block : IL_00a2: ldloc.1
}
// System.Void HoleMeter/<TriggerDistortionEffect>c__Iterator16::Dispose()
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator16_Dispose_m2861 (U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void HoleMeter/<TriggerDistortionEffect>c__Iterator16::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator16_Reset_m2862 (U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * __this, const MethodInfo* method)
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
// HoleMeter
#include "AssemblyU2DCSharp_HoleMeterMethodDeclarations.h"

// MouseHole
#include "AssemblyU2DCSharp_MouseHole.h"
// MouseHole/MousePopChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_MousePopChangedEventHandler.h"
// MouseHole/CapacityChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_CapacityChangedEventHandler.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// MouseHole/MousePopChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_MousePopChangedEventHandlerMethodDeclarations.h"
// MouseHole
#include "AssemblyU2DCSharp_MouseHoleMethodDeclarations.h"
// MouseHole/CapacityChangedEventHandler
#include "AssemblyU2DCSharp_MouseHole_CapacityChangedEventHandlerMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
struct Component_t714;
struct RectTransform_t503;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t714;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m3769_gshared (Component_t714 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m3769(__this, method) (( Object_t * (*) (Component_t714 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3769_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t503_m3963(__this, method) (( RectTransform_t503 * (*) (Component_t714 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3769_gshared)(__this, method)
struct GameObject_t352;
struct Image_t463;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t463_m3924(__this, method) (( Image_t463 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void HoleMeter::.ctor()
extern "C" void HoleMeter__ctor_m2863 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::Start()
extern "C" void HoleMeter_Start_m2864 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_8 = 0;
		return;
	}
}
// System.Void HoleMeter::TrackHole(MouseHole)
extern "C" void HoleMeter_TrackHole_m2865 (HoleMeter_t528 * __this, MouseHole_t530 * ___mh, const MethodInfo* method)
{
	{
		MouseHole_t530 * L_0 = ___mh;
		__this->___mouseHole_7 = L_0;
		HoleMeter_RegisterForEvents_m2866(__this, /*hidden argument*/NULL);
		HoleMeter_CreateMeterWidgets_m2872(__this, /*hidden argument*/NULL);
		HoleMeter_UpdateMeterWidgets_m2873(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::RegisterForEvents()
extern TypeInfo* MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* HoleMeter_OnMousePopChanged_m2871_MethodInfo_var;
extern const MethodInfo* HoleMeter_OnCapacityChanged_m2869_MethodInfo_var;
extern "C" void HoleMeter_RegisterForEvents_m2866 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		HoleMeter_OnMousePopChanged_m2871_MethodInfo_var = il2cpp_codegen_method_info_from_index(513);
		HoleMeter_OnCapacityChanged_m2869_MethodInfo_var = il2cpp_codegen_method_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_8);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->___registerdForEvents_8 = 1;
		MouseHole_t530 * L_1 = (__this->___mouseHole_7);
		IntPtr_t L_2 = { (void*)HoleMeter_OnMousePopChanged_m2871_MethodInfo_var };
		MousePopChangedEventHandler_t562 * L_3 = (MousePopChangedEventHandler_t562 *)il2cpp_codegen_object_new (MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var);
		MousePopChangedEventHandler__ctor_m2951(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseHole_add_MousePopChanged_m2961(L_1, L_3, /*hidden argument*/NULL);
		MouseHole_t530 * L_4 = (__this->___mouseHole_7);
		IntPtr_t L_5 = { (void*)HoleMeter_OnCapacityChanged_m2869_MethodInfo_var };
		CapacityChangedEventHandler_t563 * L_6 = (CapacityChangedEventHandler_t563 *)il2cpp_codegen_object_new (CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var);
		CapacityChangedEventHandler__ctor_m2955(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		MouseHole_add_CapacityChanged_m2963(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void HoleMeter::OnDestroy()
extern "C" void HoleMeter_OnDestroy_m2867 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	{
		HoleMeter_UnregisterForEvents_m2868(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::UnregisterForEvents()
extern TypeInfo* MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* HoleMeter_OnMousePopChanged_m2871_MethodInfo_var;
extern const MethodInfo* HoleMeter_OnCapacityChanged_m2869_MethodInfo_var;
extern "C" void HoleMeter_UnregisterForEvents_m2868 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		HoleMeter_OnMousePopChanged_m2871_MethodInfo_var = il2cpp_codegen_method_info_from_index(513);
		HoleMeter_OnCapacityChanged_m2869_MethodInfo_var = il2cpp_codegen_method_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_8);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->___registerdForEvents_8 = 0;
		MouseHole_t530 * L_1 = (__this->___mouseHole_7);
		IntPtr_t L_2 = { (void*)HoleMeter_OnMousePopChanged_m2871_MethodInfo_var };
		MousePopChangedEventHandler_t562 * L_3 = (MousePopChangedEventHandler_t562 *)il2cpp_codegen_object_new (MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var);
		MousePopChangedEventHandler__ctor_m2951(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseHole_remove_MousePopChanged_m2962(L_1, L_3, /*hidden argument*/NULL);
		MouseHole_t530 * L_4 = (__this->___mouseHole_7);
		IntPtr_t L_5 = { (void*)HoleMeter_OnCapacityChanged_m2869_MethodInfo_var };
		CapacityChangedEventHandler_t563 * L_6 = (CapacityChangedEventHandler_t563 *)il2cpp_codegen_object_new (CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var);
		CapacityChangedEventHandler__ctor_m2955(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		MouseHole_remove_CapacityChanged_m2964(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void HoleMeter::OnCapacityChanged()
extern "C" void HoleMeter_OnCapacityChanged_m2869 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	{
		HoleMeter_CreateMeterWidgets_m2872(__this, /*hidden argument*/NULL);
		HoleMeter_UpdateMeterWidgets_m2873(__this, /*hidden argument*/NULL);
		Object_t * L_0 = HoleMeter_TriggerDistortionEffect_m2870(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3492(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator HoleMeter::TriggerDistortionEffect()
extern TypeInfo* U3CTriggerDistortionEffectU3Ec__Iterator16_t529_il2cpp_TypeInfo_var;
extern "C" Object_t * HoleMeter_TriggerDistortionEffect_m2870 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTriggerDistortionEffectU3Ec__Iterator16_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * V_0 = {0};
	{
		U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * L_0 = (U3CTriggerDistortionEffectU3Ec__Iterator16_t529 *)il2cpp_codegen_object_new (U3CTriggerDistortionEffectU3Ec__Iterator16_t529_il2cpp_TypeInfo_var);
		U3CTriggerDistortionEffectU3Ec__Iterator16__ctor_m2857(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CTriggerDistortionEffectU3Ec__Iterator16_t529 * L_2 = V_0;
		return L_2;
	}
}
// System.Void HoleMeter::OnMousePopChanged()
extern "C" void HoleMeter_OnMousePopChanged_m2871 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	{
		HoleMeter_UpdateMeterWidgets_m2873(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::CreateMeterWidgets()
extern TypeInfo* GameObjectU5BU5D_t467_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRectTransform_t503_m3963_MethodInfo_var;
extern "C" void HoleMeter_CreateMeterWidgets_m2872 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObjectU5BU5D_t467_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		Component_GetComponent_TisRectTransform_t503_m3963_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484143);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RectTransform_t503 * V_2 = {0};
	Rect_t650  V_3 = {0};
	{
		GameObjectU5BU5D_t467* L_0 = (__this->___meterWidgetGameObjects_6);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0012:
	{
		GameObjectU5BU5D_t467* L_1 = (__this->___meterWidgetGameObjects_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		Object_Destroy_m3673(NULL /*static, unused*/, (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t467* L_6 = (__this->___meterWidgetGameObjects_6);
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		__this->___meterWidgetGameObjects_6 = (GameObjectU5BU5D_t467*)NULL;
	}

IL_0038:
	{
		MouseHole_t530 * L_7 = (__this->___mouseHole_7);
		NullCheck(L_7);
		int32_t L_8 = MouseHole_GetCapacity_m2980(L_7, /*hidden argument*/NULL);
		__this->___meterWidgetGameObjects_6 = ((GameObjectU5BU5D_t467*)SZArrayNew(GameObjectU5BU5D_t467_il2cpp_TypeInfo_var, L_8));
		V_1 = 0;
		goto IL_0114;
	}

IL_0055:
	{
		GameObjectU5BU5D_t467* L_9 = (__this->___meterWidgetGameObjects_6);
		int32_t L_10 = V_1;
		GameObject_t352 * L_11 = (__this->___meterWidgetPrototype_5);
		Vector3_t496  L_12 = {0};
		Vector3__ctor_m3807(&L_12, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t737  L_13 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_14 = Object_Instantiate_m3914(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		ArrayElementTypeCheck (L_9, ((GameObject_t352 *)IsInst(L_14, GameObject_t352_il2cpp_TypeInfo_var)));
		*((GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_9, L_10)) = (GameObject_t352 *)((GameObject_t352 *)IsInst(L_14, GameObject_t352_il2cpp_TypeInfo_var));
		GameObjectU5BU5D_t467* L_15 = (__this->___meterWidgetGameObjects_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_15, L_17)));
		Transform_t406 * L_18 = GameObject_get_transform_m3812((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_15, L_17)), /*hidden argument*/NULL);
		Transform_t406 * L_19 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_SetParent_m3978(L_18, L_19, /*hidden argument*/NULL);
		GameObjectU5BU5D_t467* L_20 = (__this->___meterWidgetGameObjects_6);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_20, L_22)));
		Transform_t406 * L_23 = GameObject_get_transform_m3812((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_20, L_22)), /*hidden argument*/NULL);
		Vector3_t496  L_24 = {0};
		Vector3__ctor_m3807(&L_24, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_m3818(L_23, L_24, /*hidden argument*/NULL);
		GameObjectU5BU5D_t467* L_25 = (__this->___meterWidgetGameObjects_6);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		NullCheck((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_25, L_27)));
		Transform_t406 * L_28 = GameObject_get_transform_m3812((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_25, L_27)), /*hidden argument*/NULL);
		Quaternion_t737  L_29 = Quaternion_Euler_m3962(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localRotation_m3975(L_28, L_29, /*hidden argument*/NULL);
		GameObjectU5BU5D_t467* L_30 = (__this->___meterWidgetGameObjects_6);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		NullCheck((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_30, L_32)));
		Transform_t406 * L_33 = GameObject_get_transform_m3812((*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_30, L_32)), /*hidden argument*/NULL);
		Vector3_t496  L_34 = {0};
		Vector3__ctor_m3807(&L_34, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localPosition_m3961(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_1;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0114:
	{
		int32_t L_36 = V_1;
		GameObjectU5BU5D_t467* L_37 = (__this->___meterWidgetGameObjects_6);
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((Array_t *)L_37)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		RectTransform_t503 * L_38 = Component_GetComponent_TisRectTransform_t503_m3963(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t503_m3963_MethodInfo_var);
		V_2 = L_38;
		RectTransform_t503 * L_39 = V_2;
		NullCheck(L_39);
		Rect_t650  L_40 = RectTransform_get_rect_m3931(L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		float L_41 = Rect_get_width_m3810((&V_3), /*hidden argument*/NULL);
		GameObjectU5BU5D_t467* L_42 = (__this->___meterWidgetGameObjects_6);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		Utilities_SpaceHorizontally_m3398(NULL /*static, unused*/, L_41, L_42, (0.0f), (10.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoleMeter::UpdateMeterWidgets()
extern const MethodInfo* GameObject_GetComponent_TisImage_t463_m3924_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var;
extern "C" void HoleMeter_UpdateMeterWidgets_m2873 (HoleMeter_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisImage_t463_m3924_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484124);
		GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484160);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t352 * V_1 = {0};
	Image_t463 * V_2 = {0};
	Sprite_t472 * V_3 = {0};
	{
		V_0 = 0;
		goto IL_0062;
	}

IL_0007:
	{
		GameObjectU5BU5D_t467* L_0 = (__this->___meterWidgetGameObjects_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_0, L_2));
		GameObject_t352 * L_3 = V_1;
		NullCheck(L_3);
		Image_t463 * L_4 = GameObject_GetComponent_TisImage_t463_m3924(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t463_m3924_MethodInfo_var);
		V_2 = L_4;
		int32_t L_5 = V_0;
		MouseHole_t530 * L_6 = (__this->___mouseHole_7);
		NullCheck(L_6);
		int32_t L_7 = MouseHole_GetPopulation_m2979(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		Sprite_t472 * L_8 = (__this->___emptySprite_2);
		V_3 = L_8;
		goto IL_003b;
	}

IL_0034:
	{
		Sprite_t472 * L_9 = (__this->___fullSprite_3);
		V_3 = L_9;
	}

IL_003b:
	{
		Sprite_t472 * L_10 = V_3;
		Image_t463 * L_11 = V_2;
		NullCheck(L_11);
		Sprite_t472 * L_12 = Image_get_sprite_m3979(L_11, /*hidden argument*/NULL);
		bool L_13 = Object_op_Inequality_m3450(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		Image_t463 * L_14 = V_2;
		Sprite_t472 * L_15 = V_3;
		NullCheck(L_14);
		Image_set_sprite_m3925(L_14, L_15, /*hidden argument*/NULL);
		GameObject_t352 * L_16 = V_1;
		NullCheck(L_16);
		DistortForEffect_t495 * L_17 = GameObject_GetComponent_TisDistortForEffect_t495_m3977(L_16, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var);
		NullCheck(L_17);
		DistortForEffect_Distort_m2681(L_17, /*hidden argument*/NULL);
	}

IL_005e:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_0;
		GameObjectU5BU5D_t467* L_20 = (__this->___meterWidgetGameObjects_6);
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
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
extern "C" void IOSSharing__ctor_m2874 (IOSSharing_t531 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSSharing::Start()
extern "C" void IOSSharing_Start_m2875 (IOSSharing_t531 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSSharing::Update()
extern "C" void IOSSharing_Update_m2876 (IOSSharing_t531 * __this, const MethodInfo* method)
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

// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// TimeController
#include "AssemblyU2DCSharp_TimeController.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct GameObject_t352;
struct Camera_t532;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t532_m3980(__this, method) (( Camera_t532 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void InputHandler::.ctor()
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern "C" void InputHandler__ctor_m2877 (InputHandler_t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t533_il2cpp_TypeInfo_var);
		int32_t L_0 = ((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___UserInteractionsLayerBit_2;
		int32_t L_1 = ((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___UILayerBit_3;
		__this->___UserInteractionsLayerBitmask_6 = ((int32_t)((int32_t)L_0|(int32_t)L_1));
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InputHandler::.cctor()
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern "C" void InputHandler__cctor_m2878 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___UserInteractionsLayerBit_2 = ((int32_t)512);
		((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___UILayerBit_3 = ((int32_t)32);
		return;
	}
}
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m2879 (InputHandler_t533 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisTouchDeviceU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m2880 (InputHandler_t533 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisTouchDeviceU3Ek__BackingField_7 = L_0;
		return;
	}
}
// InputHandler InputHandler::get_instance()
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern "C" InputHandler_t533 * InputHandler_get_instance_m2881 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t533_il2cpp_TypeInfo_var);
		InputHandler_t533 * L_0 = ((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void InputHandler::set_instance(InputHandler)
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern "C" void InputHandler_set_instance_m2882 (Object_t * __this /* static, unused */, InputHandler_t533 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t533 * L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t533_il2cpp_TypeInfo_var);
		((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void InputHandler::Awake()
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern "C" void InputHandler_Awake_m2883 (InputHandler_t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t533_il2cpp_TypeInfo_var);
		InputHandler_set_instance_m2882(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		InputHandler_set_isTouchDevice_m2880(__this, 1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		InputHandler_set_isTouchDevice_m2880(__this, 0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m2884 (InputHandler_t533 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void InputHandler::Update()
extern TypeInfo* TimeController_t613_il2cpp_TypeInfo_var;
extern "C" void InputHandler_Update_m2885 (InputHandler_t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t496  V_0 = {0};
	Collider2D_t579 * V_1 = {0};
	{
		GamePhaseState_t517 * L_0 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m2796(L_0, /*hidden argument*/NULL);
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
		TimeController_t613 * L_2 = ((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = TimeController_get_paused_m3320(L_2, /*hidden argument*/NULL);
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
		Vector3__ctor_m3807((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Collider2D_t579 * L_4 = InputHandler_CheckForWorldClickStart_m2886(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		Collider2D_t579 * L_5 = V_1;
		bool L_6 = Object_op_Inequality_m3450(NULL /*static, unused*/, L_5, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		Collider2D_t579 * L_7 = V_1;
		Vector3_t496  L_8 = V_0;
		InputHandler_HandleClickStart_m2887(__this, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern TypeInfo* Physics2D_t746_il2cpp_TypeInfo_var;
extern "C" Collider2D_t579 * InputHandler_CheckForWorldClickStart_m2886 (InputHandler_t533 * __this, Vector3_t496 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t496  V_0 = {0};
	bool V_1 = false;
	Vector3_t496  V_2 = {0};
	Collider2D_t579 * V_3 = {0};
	{
		bool L_0 = InputHandler_GetWorldClickStarted_m2889(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (Collider2D_t579 *)NULL;
	}

IL_0011:
	{
		Camera_t532 * L_2 = (__this->___uxCamera_5);
		Vector3_t496  L_3 = V_0;
		NullCheck(L_2);
		Vector3_t496  L_4 = Camera_ScreenToWorldPoint_m3815(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t496  L_5 = V_2;
		Vector2_t110  L_6 = Vector2_op_Implicit_m3981(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___UserInteractionsLayerBitmask_6);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t746_il2cpp_TypeInfo_var);
		Collider2D_t579 * L_8 = Physics2D_OverlapPoint_m3982(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		bool L_9 = Object_op_Implicit_m3872(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		return (Collider2D_t579 *)NULL;
	}

IL_003b:
	{
		Vector3_t496 * L_10 = ___worldPoint;
		Camera_t532 * L_11 = (__this->___worldCamera_4);
		Vector3_t496  L_12 = V_0;
		NullCheck(L_11);
		Vector3_t496  L_13 = Camera_ScreenToWorldPoint_m3815(L_11, L_12, /*hidden argument*/NULL);
		*L_10 = L_13;
		Vector3_t496 * L_14 = ___worldPoint;
		Vector2_t110  L_15 = Vector2_op_Implicit_m3981(NULL /*static, unused*/, (*(Vector3_t496 *)L_14), /*hidden argument*/NULL);
		int32_t L_16 = (__this->___UserInteractionsLayerBitmask_6);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t746_il2cpp_TypeInfo_var);
		Collider2D_t579 * L_17 = Physics2D_OverlapPoint_m3982(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Collider2D_t579 * L_18 = V_3;
		bool L_19 = Object_op_Implicit_m3872(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		Collider2D_t579 * L_20 = V_3;
		return L_20;
	}

IL_0071:
	{
		return (Collider2D_t579 *)NULL;
	}
}
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void InputHandler_HandleClickStart_m2887 (InputHandler_t533 * __this, Collider2D_t579 * ___collider, Vector3_t496  ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	{
		Vector3_t496  L_0 = ___worldPoint;
		Vector2_t110  L_1 = Vector2_op_Implicit_m3981(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Collider2D_t579 * L_2 = ___collider;
		NullCheck(L_2);
		String_t* L_3 = Component_get_tag_m3954(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral1015, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PlayerController_t584 * L_5 = PlayerController_get_instance_m3125(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_6 = V_0;
		NullCheck(L_5);
		PlayerController_HandleDragClickStart_m3138(L_5, L_6, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_002c:
	{
		Collider2D_t579 * L_7 = ___collider;
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_m3954(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m456(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral1016, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		PlayerController_t584 * L_10 = PlayerController_get_instance_m3125(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_11 = V_0;
		NullCheck(L_10);
		PlayerController_HandleSlapClickStart_m3139(L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern const MethodInfo* GameObject_GetComponent_TisCamera_t532_m3980_MethodInfo_var;
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m2888 (InputHandler_t533 * __this, Vector3_t496  ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCamera_t532_m3980_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Rect_t650  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Camera_t532 * L_0 = (__this->___worldCamera_4);
		bool L_1 = Object_op_Equality_m3554(NULL /*static, unused*/, L_0, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Camera_t532 * L_2 = Camera_get_main_m3780(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___worldCamera_4 = L_2;
		GameObject_t352 * L_3 = GameObject_FindGameObjectWithTag_m3983(NULL /*static, unused*/, (String_t*) &_stringLiteral999, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		Camera_t532 * L_5 = GameObject_GetComponent_TisCamera_t532_m3980(L_4, /*hidden argument*/GameObject_GetComponent_TisCamera_t532_m3980_MethodInfo_var);
		__this->___uxCamera_5 = L_5;
	}

IL_0033:
	{
		Camera_t532 * L_6 = (__this->___worldCamera_4);
		NullCheck(L_6);
		Rect_t650  L_7 = Camera_get_rect_m3904(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_x_m3455((&V_1), /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_width_m3434(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_8*(float)(((float)L_9))));
		float L_10 = Rect_get_x_m3455((&V_1), /*hidden argument*/NULL);
		float L_11 = Rect_get_width_m3810((&V_1), /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_width_m3434(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)((float)L_10+(float)L_11))*(float)(((float)L_12))));
		float L_13 = Rect_get_y_m3454((&V_1), /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_height_m3449(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_13*(float)(((float)L_14))));
		float L_15 = Rect_get_y_m3454((&V_1), /*hidden argument*/NULL);
		float L_16 = Rect_get_height_m3811((&V_1), /*hidden argument*/NULL);
		int32_t L_17 = Screen_get_height_m3449(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern TypeInfo* Input_t659_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickStarted_m2889 (InputHandler_t533 * __this, Vector3_t496 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t658  V_1 = {0};
	Touch_t658  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m2879(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3462(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		Touch_t658  L_2 = Input_GetTouch_m3463(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3464((&V_1), /*hidden argument*/NULL);
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
		Vector3_t496 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		Touch_t658  L_6 = Input_GetTouch_m3463(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m3984((&V_2), /*hidden argument*/NULL);
		Vector3_t496  L_8 = Vector2_op_Implicit_m3985(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t496 * L_9 = ___clickPosition;
		Vector3_t496  L_10 = Vector3_get_forward_m3986(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonDown_m3783(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t496 * L_12 = ___clickPosition;
		Vector3_t496  L_13 = Input_get_mousePosition_m3781(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Vector3_t496 * L_15 = ___clickPosition;
		bool L_16 = InputHandler_IsPointInWorldCameraScreenSpace_m2888(__this, (*(Vector3_t496 *)L_15), /*hidden argument*/NULL);
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
extern TypeInfo* Input_t659_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickEnded_m2890 (InputHandler_t533 * __this, Vector3_t496 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t658  V_1 = {0};
	Touch_t658  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m2879(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3462(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		Touch_t658  L_2 = Input_GetTouch_m3463(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3464((&V_1), /*hidden argument*/NULL);
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
		Vector3_t496 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		Touch_t658  L_6 = Input_GetTouch_m3463(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m3984((&V_2), /*hidden argument*/NULL);
		Vector3_t496  L_8 = Vector2_op_Implicit_m3985(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t496 * L_9 = ___clickPosition;
		Vector3_t496  L_10 = Vector3_get_forward_m3986(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonUp_m3987(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t496 * L_12 = ___clickPosition;
		Vector3_t496  L_13 = Input_get_mousePosition_m3781(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_12 = L_13;
	}

IL_0071:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern TypeInfo* Input_t659_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickPosition_m2891 (InputHandler_t533 * __this, Vector3_t496 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t658  V_1 = {0};
	{
		bool L_0 = InputHandler_get_isTouchDevice_m2879(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3462(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Vector3_t496 * L_3 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		Touch_t658  L_4 = Input_GetTouch_m3463(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector2_t110  L_5 = Touch_get_position_m3984((&V_1), /*hidden argument*/NULL);
		Vector3_t496  L_6 = Vector2_op_Implicit_m3985(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*L_3 = L_6;
		goto IL_0043;
	}

IL_0038:
	{
		Vector3_t496 * L_7 = ___clickPosition;
		Vector3_t496  L_8 = Vector3_get_forward_m3986(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_7 = L_8;
	}

IL_0043:
	{
		goto IL_0070;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButton_m3988(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		Vector3_t496 * L_11 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		Vector3_t496  L_12 = Input_get_mousePosition_m3781(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_11 = L_12;
		goto IL_0070;
	}

IL_0065:
	{
		Vector3_t496 * L_13 = ___clickPosition;
		Vector3_t496  L_14 = Vector3_get_forward_m3986(NULL /*static, unused*/, /*hidden argument*/NULL);
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

// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"


// System.Void LaunchCountController::.ctor()
extern "C" void LaunchCountController__ctor_m2892 (LaunchCountController_t534 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LaunchCountController::Start()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void LaunchCountController_Start_m2893 (LaunchCountController_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3114(L_0, (String_t*) &_stringLiteral1017, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		PersistentStorage_t580 * L_2 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		PersistentStorage_SetIntValue_m3113(L_2, (String_t*) &_stringLiteral1017, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// Layers
#include "AssemblyU2DCSharp_Layers.h"
#ifndef _MSC_VER
#else
#endif
// Layers
#include "AssemblyU2DCSharp_LayersMethodDeclarations.h"



// System.Void Layers::.ctor()
extern "C" void Layers__ctor_m2894 (Layers_t535 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Layers::Awake()
extern TypeInfo* Physics2D_t746_il2cpp_TypeInfo_var;
extern "C" void Layers_Awake_m2895 (Layers_t535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t746_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m3989(NULL /*static, unused*/, 8, ((int32_t)9), 1, /*hidden argument*/NULL);
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



// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
#ifndef _MSC_VER
#else
#endif
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescriptionMethodDeclarations.h"

// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
// EnumAccumulator`1<MouseHole/MouseHoleLocation>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen.h"
// EnumAccumulator`1<BoostConfig/BoostType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_0.h"
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_1.h"
// EnumAccumulator`1<MouseConfig/MouseType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_2.h"
// EnumAccumulator`1<LevelDescription/WaveType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_3.h"
// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
// EnumAccumulator`1<MouseHole/MouseHoleLocation>
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
extern TypeInfo* List_1_t537_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t538_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t539_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t540_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t541_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t542_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3990_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m3991_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m3992_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m3993_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m3994_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m3995_MethodInfo_var;
extern "C" void LevelDescription__ctor_m2896 (LevelDescription_t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		EnumAccumulator_1_t538_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		EnumAccumulator_1_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(516);
		EnumAccumulator_1_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		EnumAccumulator_1_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(518);
		EnumAccumulator_1_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		List_1__ctor_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		EnumAccumulator_1__ctor_m3991_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484165);
		EnumAccumulator_1__ctor_m3992_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		EnumAccumulator_1__ctor_m3993_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484167);
		EnumAccumulator_1__ctor_m3994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484168);
		EnumAccumulator_1__ctor_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484169);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___specialText_0 = L_0;
		List_1_t537 * L_1 = (List_1_t537 *)il2cpp_codegen_object_new (List_1_t537_il2cpp_TypeInfo_var);
		List_1__ctor_m3990(L_1, /*hidden argument*/List_1__ctor_m3990_MethodInfo_var);
		__this->___explicitMouseDescs_1 = L_1;
		__this->___sprite_2 = (Sprite_t472 *)NULL;
		__this->___previousLevelClearedAchievementID_11 = (String_t*)NULL;
		EnumAccumulator_1_t538 * L_2 = (EnumAccumulator_1_t538 *)il2cpp_codegen_object_new (EnumAccumulator_1_t538_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m3991(L_2, 4, /*hidden argument*/EnumAccumulator_1__ctor_m3991_MethodInfo_var);
		__this->___mouseHolesAccumulator_5 = L_2;
		EnumAccumulator_1_t539 * L_3 = (EnumAccumulator_1_t539 *)il2cpp_codegen_object_new (EnumAccumulator_1_t539_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m3992(L_3, 5, /*hidden argument*/EnumAccumulator_1__ctor_m3992_MethodInfo_var);
		__this->___boostsAccumulator_6 = L_3;
		EnumAccumulator_1_t540 * L_4 = (EnumAccumulator_1_t540 *)il2cpp_codegen_object_new (EnumAccumulator_1_t540_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m3993(L_4, 4, /*hidden argument*/EnumAccumulator_1__ctor_m3993_MethodInfo_var);
		__this->___wigglesAccumulator_7 = L_4;
		EnumAccumulator_1_t541 * L_5 = (EnumAccumulator_1_t541 *)il2cpp_codegen_object_new (EnumAccumulator_1_t541_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m3994(L_5, 4, /*hidden argument*/EnumAccumulator_1__ctor_m3994_MethodInfo_var);
		__this->___mouseTypesAccumulator_8 = L_5;
		EnumAccumulator_1_t542 * L_6 = (EnumAccumulator_1_t542 *)il2cpp_codegen_object_new (EnumAccumulator_1_t542_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m3995(L_6, 3, /*hidden argument*/EnumAccumulator_1__ctor_m3995_MethodInfo_var);
		__this->___waveTypesAccumulator_9 = L_6;
		return;
	}
}
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
#ifndef _MSC_VER
#else
#endif
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
#include "mscorlib_ArrayTypes.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfig.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_18.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0.h"
// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1.h"
// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_gen_19.h"
// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21MethodDeclarations.h"
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDescMethodDeclarations.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfigMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_genMethodDeclarations.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0MethodDeclarations.h"
// QuasiRandomGenerator`1<MouseHole/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_gen_19MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_18MethodDeclarations.h"
struct Resources_t740;
struct Sprite_t472;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t740;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m3938_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m3938(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m3938_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t472_m3937(__this /* static, unused */, p0, method) (( Sprite_t472 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m3938_gshared)(__this /* static, unused */, p0, method)


// System.Void LevelConfig::.ctor()
extern "C" void LevelConfig__ctor_m2897 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	{
		__this->___paradePause_2 = (0.1f);
		__this->___minParadeMice_3 = 2;
		__this->___maxParadeMice_4 = 4;
		__this->___paradeEndPause_5 = (4.0f);
		__this->___minDistributedMice_6 = 3;
		__this->___maxDistributedMice_7 = 7;
		__this->___distributedEndPause_9 = (2.0f);
		__this->___minSpoutPause_10 = (0.2f);
		__this->___maxSpoutPause_11 = (1.1f);
		__this->___spoutEndPause_12 = (3.0f);
		__this->___minSpoutMice_13 = 6;
		__this->___maxSpoutMice_14 = ((int32_t)10);
		__this->___superSpeedMiceLevel_15 = 7;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// LevelConfig LevelConfig::get_instance()
extern TypeInfo* LevelConfig_t550_il2cpp_TypeInfo_var;
extern "C" LevelConfig_t550 * LevelConfig_get_instance_m2898 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t550 * L_0 = ((LevelConfig_t550_StaticFields*)LevelConfig_t550_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void LevelConfig::set_instance(LevelConfig)
extern TypeInfo* LevelConfig_t550_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_set_instance_m2899 (Object_t * __this /* static, unused */, LevelConfig_t550 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t550 * L_0 = ___value;
		((LevelConfig_t550_StaticFields*)LevelConfig_t550_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Void LevelConfig::Awake()
extern TypeInfo* Dictionary_2_t548_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3996_MethodInfo_var;
extern "C" void LevelConfig_Awake_m2900 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		Dictionary_2__ctor_m3996_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484170);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_set_instance_m2899(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		Dictionary_2_t548 * L_0 = (Dictionary_2_t548 *)il2cpp_codegen_object_new (Dictionary_2_t548_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3996(L_0, /*hidden argument*/Dictionary_2__ctor_m3996_MethodInfo_var);
		__this->___levelDescMap_19 = L_0;
		return;
	}
}
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m2901 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	{
		LevelConfig_MakeQuasiRandomGenerators_m2920(__this, /*hidden argument*/NULL);
		LevelConfig_GeneratePresetLevels_m2908(__this, /*hidden argument*/NULL);
		LevelConfig_GenerateLevelLockInfo_m2902(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::GenerateLevelLockInfo()
extern TypeInfo* Int32U5BU5D_t549_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_GenerateLevelLockInfo_m2902 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___boostLevelLocks_20 = ((Int32U5BU5D_t549*)SZArrayNew(Int32U5BU5D_t549_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_0028;
	}

IL_0013:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = LevelConfig_GetLevelLockInfoForBoost_m2903(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Int32U5BU5D_t549* L_2 = (__this->___boostLevelLocks_20);
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
		if ((((int32_t)L_6) < ((int32_t)5)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Int32 LevelConfig::GetLevelLockInfoForBoost(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLockInfoForBoost_m2903 (LevelConfig_t550 * __this, int32_t ___bt, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LevelDescription_t543 * V_2 = {0};
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
		LevelDescription_t543 * L_3 = LevelConfig_GetLevelDescription_m2907(__this, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		LevelDescription_t543 * L_4 = V_2;
		NullCheck(L_4);
		EnumAccumulator_1_t539 * L_5 = (L_4->___boostsAccumulator_6);
		NullCheck(L_5);
		Int32U5BU5D_t549* L_6 = (L_5->___newCount_0);
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
extern "C" int32_t LevelConfig_GetLevelLock_m2904 (LevelConfig_t550 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t549* L_1 = (__this->___boostLevelLocks_20);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Void LevelConfig::AddExplicitMouseDesc(System.Collections.Generic.List`1<ExplicitMouseDesc>&,System.Single,System.Boolean,MouseHole/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern TypeInfo* ExplicitMouseDesc_t497_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_AddExplicitMouseDesc_m2905 (LevelConfig_t550 * __this, List_1_t537 ** ___retVal, float ___pause, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExplicitMouseDesc_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	ExplicitMouseDesc_t497 * V_0 = {0};
	{
		float L_0 = ___pause;
		bool L_1 = ___isClockwise;
		int32_t L_2 = ___location;
		int32_t L_3 = ___mType;
		int32_t L_4 = ___track;
		int32_t L_5 = ___wType;
		ExplicitMouseDesc_t497 * L_6 = (ExplicitMouseDesc_t497 *)il2cpp_codegen_object_new (ExplicitMouseDesc_t497_il2cpp_TypeInfo_var);
		ExplicitMouseDesc__ctor_m2684(L_6, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t537 ** L_7 = ___retVal;
		ExplicitMouseDesc_t497 * L_8 = V_0;
		NullCheck((*((List_1_t537 **)L_7)));
		VirtActionInvoker1< ExplicitMouseDesc_t497 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(!0) */, (*((List_1_t537 **)L_7)), L_8);
		return;
	}
}
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t543 * LevelConfig_GetCurrentLevelDescription_m2906 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GameLevelState_t513 * L_0 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m2759(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		LevelDescription_t543 * L_3 = LevelConfig_GetLevelDescription_m2907(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t543 * LevelConfig_GetLevelDescription_m2907 (LevelConfig_t550 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	LevelDescription_t543 * V_0 = {0};
	{
		Dictionary_2_t548 * L_0 = (__this->___levelDescMap_19);
		int32_t L_1 = ___gameLevel;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t548 * L_3 = (__this->___levelDescMap_19);
		int32_t L_4 = ___gameLevel;
		NullCheck(L_3);
		LevelDescription_t543 * L_5 = (LevelDescription_t543 *)VirtFuncInvoker1< LevelDescription_t543 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___gameLevel;
		LevelDescription_t543 * L_7 = LevelConfig_GenerateRandomLevelDescription_m2913(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Dictionary_2_t548 * L_8 = (__this->___levelDescMap_19);
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(!0) */, L_8, L_9);
		LevelDescription_t543 * L_10 = V_0;
		int32_t L_11 = ___gameLevel;
		NullCheck(L_10);
		L_10->___gameLevel_10 = L_11;
		Dictionary_2_t548 * L_12 = (__this->___levelDescMap_19);
		int32_t L_13 = ___gameLevel;
		LevelDescription_t543 * L_14 = V_0;
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, LevelDescription_t543 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_12, L_13, L_14);
		LevelDescription_t543 * L_15 = V_0;
		return L_15;
	}
}
// System.Void LevelConfig::GeneratePresetLevels()
extern "C" void LevelConfig_GeneratePresetLevels_m2908 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	LevelDescription_t543 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Dictionary_2_t548 * L_0 = (__this->___levelDescMap_19);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear() */, L_0);
		V_1 = 0;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_1;
		LevelDescription_t543 * L_3 = LevelConfig_MakePresetGameLevelSkeleton_m2912(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t543 * L_4 = V_0;
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
		LevelDescription_t543 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		L_5->___gameLevel_10 = L_6;
		Dictionary_2_t548 * L_7 = (__this->___levelDescMap_19);
		int32_t L_8 = V_1;
		LevelDescription_t543 * L_9 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LevelDescription_t543 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_7, L_8, L_9);
		goto IL_000d;
	}

IL_003d:
	{
		LevelConfig_FillOutPresetGameLevelSkeletons_m2910(__this, /*hidden argument*/NULL);
		LevelConfig_AddPreviousLevelClearedAchievements_m2909(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::AddPreviousLevelClearedAchievements()
extern "C" void LevelConfig_AddPreviousLevelClearedAchievements_m2909 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	LevelDescription_t543 * V_0 = {0};
	{
		LevelDescription_t543 * L_0 = LevelConfig_GetLevelDescription_m2907(__this, 6, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t543 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1018;
		LevelDescription_t543 * L_2 = LevelConfig_GetLevelDescription_m2907(__this, ((int32_t)11), /*hidden argument*/NULL);
		V_0 = L_2;
		LevelDescription_t543 * L_3 = V_0;
		NullCheck(L_3);
		L_3->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1019;
		return;
	}
}
// System.Void LevelConfig::FillOutPresetGameLevelSkeletons()
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m3997_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m3998_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m3999_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4000_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4001_MethodInfo_var;
extern "C" void LevelConfig_FillOutPresetGameLevelSkeletons_m2910 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_DeriveFrom_m3997_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484171);
		EnumAccumulator_1_DeriveFrom_m3998_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484172);
		EnumAccumulator_1_DeriveFrom_m3999_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484173);
		EnumAccumulator_1_DeriveFrom_m4000_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484174);
		EnumAccumulator_1_DeriveFrom_m4001_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484175);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	LevelDescription_t543 * V_1 = {0};
	LevelDescription_t543 * V_2 = {0};
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t548 * L_1 = (__this->___levelDescMap_19);
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
		Dictionary_2_t548 * L_4 = (__this->___levelDescMap_19);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		LevelDescription_t543 * L_6 = (LevelDescription_t543 *)VirtFuncInvoker1< LevelDescription_t543 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_4, L_5);
		V_1 = L_6;
		V_2 = (LevelDescription_t543 *)NULL;
		Dictionary_2_t548 * L_7 = (__this->___levelDescMap_19);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_7, ((int32_t)((int32_t)L_8-(int32_t)1)));
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t548 * L_10 = (__this->___levelDescMap_19);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		LevelDescription_t543 * L_12 = (LevelDescription_t543 *)VirtFuncInvoker1< LevelDescription_t543 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_10, ((int32_t)((int32_t)L_11-(int32_t)1)));
		V_2 = L_12;
	}

IL_0049:
	{
		LevelDescription_t543 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_00a4;
		}
	}
	{
		LevelDescription_t543 * L_14 = V_1;
		NullCheck(L_14);
		EnumAccumulator_1_t539 * L_15 = (L_14->___boostsAccumulator_6);
		LevelDescription_t543 * L_16 = V_2;
		NullCheck(L_16);
		EnumAccumulator_1_t539 * L_17 = (L_16->___boostsAccumulator_6);
		NullCheck(L_15);
		EnumAccumulator_1_DeriveFrom_m3997(L_15, L_17, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m3997_MethodInfo_var);
		LevelDescription_t543 * L_18 = V_1;
		NullCheck(L_18);
		EnumAccumulator_1_t538 * L_19 = (L_18->___mouseHolesAccumulator_5);
		LevelDescription_t543 * L_20 = V_2;
		NullCheck(L_20);
		EnumAccumulator_1_t538 * L_21 = (L_20->___mouseHolesAccumulator_5);
		NullCheck(L_19);
		EnumAccumulator_1_DeriveFrom_m3998(L_19, L_21, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m3998_MethodInfo_var);
		LevelDescription_t543 * L_22 = V_1;
		NullCheck(L_22);
		EnumAccumulator_1_t540 * L_23 = (L_22->___wigglesAccumulator_7);
		LevelDescription_t543 * L_24 = V_2;
		NullCheck(L_24);
		EnumAccumulator_1_t540 * L_25 = (L_24->___wigglesAccumulator_7);
		NullCheck(L_23);
		EnumAccumulator_1_DeriveFrom_m3999(L_23, L_25, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m3999_MethodInfo_var);
		LevelDescription_t543 * L_26 = V_1;
		NullCheck(L_26);
		EnumAccumulator_1_t541 * L_27 = (L_26->___mouseTypesAccumulator_8);
		LevelDescription_t543 * L_28 = V_2;
		NullCheck(L_28);
		EnumAccumulator_1_t541 * L_29 = (L_28->___mouseTypesAccumulator_8);
		NullCheck(L_27);
		EnumAccumulator_1_DeriveFrom_m4000(L_27, L_29, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4000_MethodInfo_var);
		LevelDescription_t543 * L_30 = V_1;
		NullCheck(L_30);
		EnumAccumulator_1_t542 * L_31 = (L_30->___waveTypesAccumulator_9);
		LevelDescription_t543 * L_32 = V_2;
		NullCheck(L_32);
		EnumAccumulator_1_t542 * L_33 = (L_32->___waveTypesAccumulator_9);
		NullCheck(L_31);
		EnumAccumulator_1_DeriveFrom_m4001(L_31, L_33, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4001_MethodInfo_var);
	}

IL_00a4:
	{
		LevelDescription_t543 * L_34 = V_1;
		NullCheck(L_34);
		List_1_t537 * L_35 = (L_34->___explicitMouseDescs_1);
		NullCheck(L_35);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_35);
		if (L_36)
		{
			goto IL_00c8;
		}
	}
	{
		LevelDescription_t543 * L_37 = V_1;
		LevelDescription_t543 * L_38 = V_1;
		List_1_t537 * L_39 = LevelConfig_GenerateRandomMiceForLevel_m2915(__this, L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		L_37->___explicitMouseDescs_1 = L_39;
		LevelDescription_t543 * L_40 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m2914(__this, L_40, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		goto IL_0002;
	}
}
// System.Void LevelConfig::SetupInitialAccumulators(LevelDescription)
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4002_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4003_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4004_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4005_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4006_MethodInfo_var;
extern "C" void LevelConfig_SetupInitialAccumulators_m2911 (LevelConfig_t550 * __this, LevelDescription_t543 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_AddDerived_m4002_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		EnumAccumulator_1_AddDerived_m4003_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		EnumAccumulator_1_AddDerived_m4004_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		EnumAccumulator_1_AddDerived_m4005_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484179);
		EnumAccumulator_1_AddDerived_m4006_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484180);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelDescription_t543 * L_0 = ___ld;
		NullCheck(L_0);
		EnumAccumulator_1_t538 * L_1 = (L_0->___mouseHolesAccumulator_5);
		int32_t L_2 = TweakableParams_GetInitialMicePerHole_m3371(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		EnumAccumulator_1_AddDerived_m4002(L_1, 0, L_2, /*hidden argument*/EnumAccumulator_1_AddDerived_m4002_MethodInfo_var);
		LevelDescription_t543 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t538 * L_4 = (L_3->___mouseHolesAccumulator_5);
		int32_t L_5 = TweakableParams_GetInitialMicePerHole_m3371(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		EnumAccumulator_1_AddDerived_m4002(L_4, 2, L_5, /*hidden argument*/EnumAccumulator_1_AddDerived_m4002_MethodInfo_var);
		LevelDescription_t543 * L_6 = ___ld;
		NullCheck(L_6);
		EnumAccumulator_1_t538 * L_7 = (L_6->___mouseHolesAccumulator_5);
		int32_t L_8 = TweakableParams_GetInitialMicePerHole_m3371(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		EnumAccumulator_1_AddDerived_m4002(L_7, 1, L_8, /*hidden argument*/EnumAccumulator_1_AddDerived_m4002_MethodInfo_var);
		LevelDescription_t543 * L_9 = ___ld;
		NullCheck(L_9);
		EnumAccumulator_1_t538 * L_10 = (L_9->___mouseHolesAccumulator_5);
		int32_t L_11 = TweakableParams_GetInitialMicePerHole_m3371(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		EnumAccumulator_1_AddDerived_m4002(L_10, 3, L_11, /*hidden argument*/EnumAccumulator_1_AddDerived_m4002_MethodInfo_var);
		LevelDescription_t543 * L_12 = ___ld;
		NullCheck(L_12);
		EnumAccumulator_1_t541 * L_13 = (L_12->___mouseTypesAccumulator_8);
		NullCheck(L_13);
		EnumAccumulator_1_AddDerived_m4003(L_13, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4003_MethodInfo_var);
		LevelDescription_t543 * L_14 = ___ld;
		NullCheck(L_14);
		EnumAccumulator_1_t540 * L_15 = (L_14->___wigglesAccumulator_7);
		NullCheck(L_15);
		EnumAccumulator_1_AddDerived_m4004(L_15, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4004_MethodInfo_var);
		LevelDescription_t543 * L_16 = ___ld;
		NullCheck(L_16);
		EnumAccumulator_1_t542 * L_17 = (L_16->___waveTypesAccumulator_9);
		NullCheck(L_17);
		EnumAccumulator_1_AddDerived_m4005(L_17, 0, 2, /*hidden argument*/EnumAccumulator_1_AddDerived_m4005_MethodInfo_var);
		LevelDescription_t543 * L_18 = ___ld;
		NullCheck(L_18);
		EnumAccumulator_1_t542 * L_19 = (L_18->___waveTypesAccumulator_9);
		NullCheck(L_19);
		EnumAccumulator_1_AddDerived_m4005(L_19, 2, 2, /*hidden argument*/EnumAccumulator_1_AddDerived_m4005_MethodInfo_var);
		LevelDescription_t543 * L_20 = ___ld;
		NullCheck(L_20);
		EnumAccumulator_1_t542 * L_21 = (L_20->___waveTypesAccumulator_9);
		NullCheck(L_21);
		EnumAccumulator_1_AddDerived_m4006(L_21, 1, /*hidden argument*/EnumAccumulator_1_AddDerived_m4006_MethodInfo_var);
		return;
	}
}
// LevelDescription LevelConfig::MakePresetGameLevelSkeleton(System.Int32)
extern TypeInfo* LevelDescription_t543_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t537_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TipConfig_t473_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3990_MethodInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t472_m3937_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4007_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4008_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4009_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4010_MethodInfo_var;
extern "C" LevelDescription_t543 * LevelConfig_MakePresetGameLevelSkeleton_m2912 (LevelConfig_t550 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelDescription_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		List_1_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		TipConfig_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		List_1__ctor_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		Resources_Load_TisSprite_t472_m3937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484131);
		EnumAccumulator_1_AddNew_m4007_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484181);
		EnumAccumulator_1_AddNew_m4008_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484182);
		EnumAccumulator_1_AddNew_m4009_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484183);
		EnumAccumulator_1_AddNew_m4010_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484184);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t543 * V_0 = {0};
	int32_t V_1 = 0;
	{
		LevelDescription_t543 * L_0 = (LevelDescription_t543 *)il2cpp_codegen_object_new (LevelDescription_t543_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m2896(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t543 * L_1 = V_0;
		List_1_t537 * L_2 = (List_1_t537 *)il2cpp_codegen_object_new (List_1_t537_il2cpp_TypeInfo_var);
		List_1__ctor_m3990(L_2, /*hidden argument*/List_1__ctor_m3990_MethodInfo_var);
		NullCheck(L_1);
		L_1->___explicitMouseDescs_1 = L_2;
		int32_t L_3 = ___gameLevel;
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_1 = L_5;
		if (L_5)
		{
			goto IL_008c;
		}
	}
	{
		LevelDescription_t543 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___specialText_0 = L_7;
		LevelDescription_t543 * L_8 = V_0;
		LevelConfig_SetupInitialAccumulators_m2911(__this, L_8, /*hidden argument*/NULL);
		LevelDescription_t543 * L_9 = V_0;
		NullCheck(L_9);
		List_1_t537 ** L_10 = &(L_9->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_10, (3.0f), 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_11 = V_0;
		NullCheck(L_11);
		List_1_t537 ** L_12 = &(L_11->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_12, (3.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_13 = V_0;
		NullCheck(L_13);
		List_1_t537 ** L_14 = &(L_13->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_14, (3.0f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_15 = V_0;
		NullCheck(L_15);
		List_1_t537 ** L_16 = &(L_15->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_16, (3.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_008c:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = ((int32_t)((int32_t)L_17-(int32_t)1));
		V_1 = L_18;
		if (L_18)
		{
			goto IL_016a;
		}
	}
	{
		LevelDescription_t543 * L_19 = V_0;
		NullCheck(L_19);
		L_19->___specialText_0 = (String_t*) &_stringLiteral1020;
		LevelDescription_t543 * L_20 = V_0;
		Sprite_t472 * L_21 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		NullCheck(L_20);
		L_20->___sprite_2 = L_21;
		LevelDescription_t543 * L_22 = V_0;
		NullCheck(L_22);
		EnumAccumulator_1_t538 * L_23 = (L_22->___mouseHolesAccumulator_5);
		NullCheck(L_23);
		EnumAccumulator_1_AddNew_m4007(L_23, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		LevelDescription_t543 * L_24 = V_0;
		NullCheck(L_24);
		EnumAccumulator_1_t538 * L_25 = (L_24->___mouseHolesAccumulator_5);
		NullCheck(L_25);
		EnumAccumulator_1_AddNew_m4007(L_25, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		LevelDescription_t543 * L_26 = V_0;
		NullCheck(L_26);
		EnumAccumulator_1_t538 * L_27 = (L_26->___mouseHolesAccumulator_5);
		NullCheck(L_27);
		EnumAccumulator_1_AddNew_m4007(L_27, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		LevelDescription_t543 * L_28 = V_0;
		NullCheck(L_28);
		EnumAccumulator_1_t538 * L_29 = (L_28->___mouseHolesAccumulator_5);
		NullCheck(L_29);
		EnumAccumulator_1_AddNew_m4007(L_29, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		LevelDescription_t543 * L_30 = V_0;
		NullCheck(L_30);
		List_1_t537 ** L_31 = &(L_30->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_31, (2.0f), 0, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_32 = V_0;
		NullCheck(L_32);
		List_1_t537 ** L_33 = &(L_32->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_33, (0.1f), 1, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_34 = V_0;
		NullCheck(L_34);
		List_1_t537 ** L_35 = &(L_34->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_35, (0.1f), 1, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_36 = V_0;
		NullCheck(L_36);
		List_1_t537 ** L_37 = &(L_36->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_37, (3.0f), 0, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_38 = V_0;
		NullCheck(L_38);
		List_1_t537 ** L_39 = &(L_38->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_39, (1.5f), 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_40 = V_0;
		NullCheck(L_40);
		List_1_t537 ** L_41 = &(L_40->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_41, (4.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_016a:
	{
		int32_t L_42 = V_1;
		int32_t L_43 = ((int32_t)((int32_t)L_42-(int32_t)1));
		V_1 = L_43;
		if (L_43)
		{
			goto IL_0245;
		}
	}
	{
		LevelDescription_t543 * L_44 = V_0;
		NullCheck(L_44);
		L_44->___specialText_0 = (String_t*) &_stringLiteral1022;
		LevelDescription_t543 * L_45 = V_0;
		BoostConfig_t456 * L_46 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_46);
		Sprite_t472 * L_47 = BoostConfig_GetIntroImageForType_m2600(L_46, 0, /*hidden argument*/NULL);
		NullCheck(L_45);
		L_45->___sprite_2 = L_47;
		LevelDescription_t543 * L_48 = V_0;
		NullCheck(L_48);
		EnumAccumulator_1_t539 * L_49 = (L_48->___boostsAccumulator_6);
		NullCheck(L_49);
		EnumAccumulator_1_AddNew_m4008(L_49, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4008_MethodInfo_var);
		LevelDescription_t543 * L_50 = V_0;
		TipConfig_t473 * L_51 = (TipConfig_t473 *)il2cpp_codegen_object_new (TipConfig_t473_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3329(L_51, (String_t*) &_stringLiteral1023, (String_t*) &_stringLiteral1024, /*hidden argument*/NULL);
		NullCheck(L_50);
		L_50->___tipConfig_3 = L_51;
		LevelDescription_t543 * L_52 = V_0;
		NullCheck(L_52);
		L_52->___tipPause_4 = (2.0f);
		LevelDescription_t543 * L_53 = V_0;
		NullCheck(L_53);
		List_1_t537 ** L_54 = &(L_53->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_54, (4.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_55 = V_0;
		NullCheck(L_55);
		List_1_t537 ** L_56 = &(L_55->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_56, (3.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_57 = V_0;
		NullCheck(L_57);
		List_1_t537 ** L_58 = &(L_57->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_58, (2.0f), 0, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_59 = V_0;
		NullCheck(L_59);
		List_1_t537 ** L_60 = &(L_59->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_60, (3.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_61 = V_0;
		NullCheck(L_61);
		List_1_t537 ** L_62 = &(L_61->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_62, (3.0f), 0, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_63 = V_0;
		NullCheck(L_63);
		List_1_t537 ** L_64 = &(L_63->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_64, (3.0f), 0, 3, 0, 1, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0245:
	{
		int32_t L_65 = V_1;
		int32_t L_66 = ((int32_t)((int32_t)L_65-(int32_t)1));
		V_1 = L_66;
		if (L_66)
		{
			goto IL_032c;
		}
	}
	{
		LevelDescription_t543 * L_67 = V_0;
		NullCheck(L_67);
		L_67->___specialText_0 = (String_t*) &_stringLiteral1025;
		LevelDescription_t543 * L_68 = V_0;
		MouseConfig_t559 * L_69 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_69);
		Sprite_t472 * L_70 = MouseConfig_GetIntroSpriteForMouseType_m2946(L_69, 1, /*hidden argument*/NULL);
		NullCheck(L_68);
		L_68->___sprite_2 = L_70;
		LevelDescription_t543 * L_71 = V_0;
		NullCheck(L_71);
		EnumAccumulator_1_t541 * L_72 = (L_71->___mouseTypesAccumulator_8);
		NullCheck(L_72);
		EnumAccumulator_1_AddNew_m4009(L_72, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4009_MethodInfo_var);
		LevelDescription_t543 * L_73 = V_0;
		NullCheck(L_73);
		List_1_t537 ** L_74 = &(L_73->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_74, (1.0f), 0, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_75 = V_0;
		NullCheck(L_75);
		List_1_t537 ** L_76 = &(L_75->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_76, (2.1f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_77 = V_0;
		NullCheck(L_77);
		List_1_t537 ** L_78 = &(L_77->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_78, (3.1f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_79 = V_0;
		NullCheck(L_79);
		List_1_t537 ** L_80 = &(L_79->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_80, (2.0f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_81 = V_0;
		NullCheck(L_81);
		List_1_t537 ** L_82 = &(L_81->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_82, (1.5f), 0, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_83 = V_0;
		NullCheck(L_83);
		List_1_t537 ** L_84 = &(L_83->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_84, (2.0f), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_85 = V_0;
		NullCheck(L_85);
		List_1_t537 ** L_86 = &(L_85->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_86, (3.0f), 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_87 = V_0;
		NullCheck(L_87);
		List_1_t537 ** L_88 = &(L_87->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_88, (4.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_032c:
	{
		int32_t L_89 = V_1;
		int32_t L_90 = ((int32_t)((int32_t)L_89-(int32_t)1));
		V_1 = L_90;
		if (L_90)
		{
			goto IL_0413;
		}
	}
	{
		LevelDescription_t543 * L_91 = V_0;
		NullCheck(L_91);
		L_91->___specialText_0 = (String_t*) &_stringLiteral1026;
		LevelDescription_t543 * L_92 = V_0;
		BoostConfig_t456 * L_93 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_93);
		Sprite_t472 * L_94 = BoostConfig_GetIntroImageForType_m2600(L_93, 1, /*hidden argument*/NULL);
		NullCheck(L_92);
		L_92->___sprite_2 = L_94;
		LevelDescription_t543 * L_95 = V_0;
		NullCheck(L_95);
		EnumAccumulator_1_t539 * L_96 = (L_95->___boostsAccumulator_6);
		NullCheck(L_96);
		EnumAccumulator_1_AddNew_m4008(L_96, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4008_MethodInfo_var);
		LevelDescription_t543 * L_97 = V_0;
		NullCheck(L_97);
		List_1_t537 ** L_98 = &(L_97->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_98, (2.0f), 0, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_99 = V_0;
		NullCheck(L_99);
		List_1_t537 ** L_100 = &(L_99->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_100, (2.0f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_101 = V_0;
		NullCheck(L_101);
		List_1_t537 ** L_102 = &(L_101->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_102, (1.0f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_103 = V_0;
		NullCheck(L_103);
		List_1_t537 ** L_104 = &(L_103->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_104, (0.1f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_105 = V_0;
		NullCheck(L_105);
		List_1_t537 ** L_106 = &(L_105->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_106, (3.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_107 = V_0;
		NullCheck(L_107);
		List_1_t537 ** L_108 = &(L_107->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_108, (3.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_109 = V_0;
		NullCheck(L_109);
		List_1_t537 ** L_110 = &(L_109->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_110, (0.1f), 0, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_111 = V_0;
		NullCheck(L_111);
		List_1_t537 ** L_112 = &(L_111->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_112, (4.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0413:
	{
		int32_t L_113 = V_1;
		int32_t L_114 = ((int32_t)((int32_t)L_113-(int32_t)1));
		V_1 = L_114;
		if (L_114)
		{
			goto IL_0526;
		}
	}
	{
		LevelDescription_t543 * L_115 = V_0;
		NullCheck(L_115);
		L_115->___specialText_0 = (String_t*) &_stringLiteral1027;
		LevelDescription_t543 * L_116 = V_0;
		MouseConfig_t559 * L_117 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_117);
		Sprite_t472 * L_118 = MouseConfig_GetIntroSpriteForMouseWiggle_m2947(L_117, 2, /*hidden argument*/NULL);
		NullCheck(L_116);
		L_116->___sprite_2 = L_118;
		LevelDescription_t543 * L_119 = V_0;
		NullCheck(L_119);
		EnumAccumulator_1_t540 * L_120 = (L_119->___wigglesAccumulator_7);
		NullCheck(L_120);
		EnumAccumulator_1_AddNew_m4010(L_120, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4010_MethodInfo_var);
		LevelDescription_t543 * L_121 = V_0;
		NullCheck(L_121);
		List_1_t537 ** L_122 = &(L_121->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_122, (2.0f), 0, 0, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_123 = V_0;
		NullCheck(L_123);
		List_1_t537 ** L_124 = &(L_123->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_124, (2.5f), 1, 1, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_125 = V_0;
		NullCheck(L_125);
		List_1_t537 ** L_126 = &(L_125->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_126, (2.0f), 1, 2, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_127 = V_0;
		NullCheck(L_127);
		List_1_t537 ** L_128 = &(L_127->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_128, (3.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_129 = V_0;
		NullCheck(L_129);
		List_1_t537 ** L_130 = &(L_129->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_130, (0.1f), 0, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_131 = V_0;
		NullCheck(L_131);
		List_1_t537 ** L_132 = &(L_131->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_132, (0.5f), 1, 1, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_133 = V_0;
		NullCheck(L_133);
		List_1_t537 ** L_134 = &(L_133->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_134, (2.0f), 0, 3, 0, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_135 = V_0;
		NullCheck(L_135);
		List_1_t537 ** L_136 = &(L_135->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_136, (1.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_137 = V_0;
		NullCheck(L_137);
		List_1_t537 ** L_138 = &(L_137->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_138, (2.0f), 0, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_139 = V_0;
		NullCheck(L_139);
		List_1_t537 ** L_140 = &(L_139->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_140, (0.1f), 1, 1, 1, 0, 2, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0526:
	{
		int32_t L_141 = V_1;
		int32_t L_142 = ((int32_t)((int32_t)L_141-(int32_t)1));
		V_1 = L_142;
		if (L_142)
		{
			goto IL_0645;
		}
	}
	{
		LevelDescription_t543 * L_143 = V_0;
		NullCheck(L_143);
		L_143->___specialText_0 = (String_t*) &_stringLiteral1028;
		LevelDescription_t543 * L_144 = V_0;
		MouseConfig_t559 * L_145 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_145);
		Sprite_t472 * L_146 = MouseConfig_GetIntroSpriteForMouseType_m2946(L_145, 2, /*hidden argument*/NULL);
		NullCheck(L_144);
		L_144->___sprite_2 = L_146;
		LevelDescription_t543 * L_147 = V_0;
		NullCheck(L_147);
		EnumAccumulator_1_t541 * L_148 = (L_147->___mouseTypesAccumulator_8);
		NullCheck(L_148);
		EnumAccumulator_1_AddNew_m4009(L_148, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4009_MethodInfo_var);
		LevelDescription_t543 * L_149 = V_0;
		NullCheck(L_149);
		EnumAccumulator_1_t541 * L_150 = (L_149->___mouseTypesAccumulator_8);
		NullCheck(L_150);
		EnumAccumulator_1_AddNew_m4009(L_150, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4009_MethodInfo_var);
		LevelDescription_t543 * L_151 = V_0;
		NullCheck(L_151);
		List_1_t537 ** L_152 = &(L_151->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_152, (3.0f), 0, 2, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_153 = V_0;
		NullCheck(L_153);
		List_1_t537 ** L_154 = &(L_153->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_154, (2.0f), 1, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_155 = V_0;
		NullCheck(L_155);
		List_1_t537 ** L_156 = &(L_155->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_156, (2.0f), 0, 0, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_157 = V_0;
		NullCheck(L_157);
		List_1_t537 ** L_158 = &(L_157->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_158, (1.0f), 0, 1, 0, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_159 = V_0;
		NullCheck(L_159);
		List_1_t537 ** L_160 = &(L_159->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_160, (3.0f), 0, 0, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_161 = V_0;
		NullCheck(L_161);
		List_1_t537 ** L_162 = &(L_161->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_162, (2.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_163 = V_0;
		NullCheck(L_163);
		List_1_t537 ** L_164 = &(L_163->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_164, (1.0f), 0, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_165 = V_0;
		NullCheck(L_165);
		List_1_t537 ** L_166 = &(L_165->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_166, (4.0f), 1, 0, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_167 = V_0;
		NullCheck(L_167);
		List_1_t537 ** L_168 = &(L_167->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_168, (2.0f), 0, 3, 2, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_169 = V_0;
		NullCheck(L_169);
		List_1_t537 ** L_170 = &(L_169->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_170, (4.0f), 1, 0, 0, 1, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0645:
	{
		int32_t L_171 = V_1;
		int32_t L_172 = ((int32_t)((int32_t)L_171-(int32_t)1));
		V_1 = L_172;
		if (L_172)
		{
			goto IL_0763;
		}
	}
	{
		LevelDescription_t543 * L_173 = V_0;
		NullCheck(L_173);
		L_173->___specialText_0 = (String_t*) &_stringLiteral1029;
		LevelDescription_t543 * L_174 = V_0;
		Sprite_t472 * L_175 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		NullCheck(L_174);
		L_174->___sprite_2 = L_175;
		LevelDescription_t543 * L_176 = V_0;
		NullCheck(L_176);
		EnumAccumulator_1_t538 * L_177 = (L_176->___mouseHolesAccumulator_5);
		NullCheck(L_177);
		EnumAccumulator_1_AddNew_m4007(L_177, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		LevelDescription_t543 * L_178 = V_0;
		NullCheck(L_178);
		EnumAccumulator_1_t538 * L_179 = (L_178->___mouseHolesAccumulator_5);
		NullCheck(L_179);
		EnumAccumulator_1_AddNew_m4007(L_179, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		LevelDescription_t543 * L_180 = V_0;
		NullCheck(L_180);
		List_1_t537 ** L_181 = &(L_180->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_181, (3.0f), 0, 2, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_182 = V_0;
		NullCheck(L_182);
		List_1_t537 ** L_183 = &(L_182->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_183, (2.0f), 1, 1, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_184 = V_0;
		NullCheck(L_184);
		List_1_t537 ** L_185 = &(L_184->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_185, (4.0f), 1, 0, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_186 = V_0;
		NullCheck(L_186);
		List_1_t537 ** L_187 = &(L_186->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_187, (2.0f), 1, 0, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_188 = V_0;
		NullCheck(L_188);
		List_1_t537 ** L_189 = &(L_188->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_189, (1.0f), 0, 1, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_190 = V_0;
		NullCheck(L_190);
		List_1_t537 ** L_191 = &(L_190->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_191, (1.0f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_192 = V_0;
		NullCheck(L_192);
		List_1_t537 ** L_193 = &(L_192->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_193, (2.0f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_194 = V_0;
		NullCheck(L_194);
		List_1_t537 ** L_195 = &(L_194->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_195, (3.0f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_196 = V_0;
		NullCheck(L_196);
		List_1_t537 ** L_197 = &(L_196->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_197, (2.0f), 0, 3, 2, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_198 = V_0;
		NullCheck(L_198);
		List_1_t537 ** L_199 = &(L_198->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_199, (4.0f), 0, 0, 2, 2, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0763:
	{
		int32_t L_200 = V_1;
		int32_t L_201 = ((int32_t)((int32_t)L_200-(int32_t)1));
		V_1 = L_201;
		if (L_201)
		{
			goto IL_079a;
		}
	}
	{
		LevelDescription_t543 * L_202 = V_0;
		NullCheck(L_202);
		L_202->___specialText_0 = (String_t*) &_stringLiteral1030;
		LevelDescription_t543 * L_203 = V_0;
		BoostConfig_t456 * L_204 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_204);
		Sprite_t472 * L_205 = BoostConfig_GetIntroImageForType_m2600(L_204, 2, /*hidden argument*/NULL);
		NullCheck(L_203);
		L_203->___sprite_2 = L_205;
		LevelDescription_t543 * L_206 = V_0;
		NullCheck(L_206);
		EnumAccumulator_1_t539 * L_207 = (L_206->___boostsAccumulator_6);
		NullCheck(L_207);
		EnumAccumulator_1_AddNew_m4008(L_207, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4008_MethodInfo_var);
		goto IL_0e9a;
	}

IL_079a:
	{
		int32_t L_208 = V_1;
		int32_t L_209 = ((int32_t)((int32_t)L_208-(int32_t)1));
		V_1 = L_209;
		if (L_209)
		{
			goto IL_08f1;
		}
	}
	{
		LevelDescription_t543 * L_210 = V_0;
		NullCheck(L_210);
		L_210->___specialText_0 = (String_t*) &_stringLiteral1031;
		LevelDescription_t543 * L_211 = V_0;
		MouseConfig_t559 * L_212 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_212);
		Sprite_t472 * L_213 = MouseConfig_GetIntroSpriteForMouseType_m2946(L_212, 3, /*hidden argument*/NULL);
		NullCheck(L_211);
		L_211->___sprite_2 = L_213;
		LevelDescription_t543 * L_214 = V_0;
		NullCheck(L_214);
		EnumAccumulator_1_t541 * L_215 = (L_214->___mouseTypesAccumulator_8);
		NullCheck(L_215);
		EnumAccumulator_1_AddNew_m4009(L_215, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4009_MethodInfo_var);
		LevelDescription_t543 * L_216 = V_0;
		NullCheck(L_216);
		EnumAccumulator_1_t541 * L_217 = (L_216->___mouseTypesAccumulator_8);
		NullCheck(L_217);
		EnumAccumulator_1_AddNew_m4009(L_217, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4009_MethodInfo_var);
		LevelDescription_t543 * L_218 = V_0;
		NullCheck(L_218);
		EnumAccumulator_1_t541 * L_219 = (L_218->___mouseTypesAccumulator_8);
		NullCheck(L_219);
		EnumAccumulator_1_AddNew_m4009(L_219, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4009_MethodInfo_var);
		LevelDescription_t543 * L_220 = V_0;
		NullCheck(L_220);
		List_1_t537 ** L_221 = &(L_220->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_221, (2.0f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_222 = V_0;
		NullCheck(L_222);
		List_1_t537 ** L_223 = &(L_222->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_223, (2.0f), 0, 2, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_224 = V_0;
		NullCheck(L_224);
		List_1_t537 ** L_225 = &(L_224->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_225, (3.0f), 1, 3, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_226 = V_0;
		NullCheck(L_226);
		List_1_t537 ** L_227 = &(L_226->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_227, (2.0f), 0, 0, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_228 = V_0;
		NullCheck(L_228);
		List_1_t537 ** L_229 = &(L_228->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_229, (1.0f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_230 = V_0;
		NullCheck(L_230);
		List_1_t537 ** L_231 = &(L_230->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_231, (2.0f), 1, 3, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_232 = V_0;
		NullCheck(L_232);
		List_1_t537 ** L_233 = &(L_232->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_233, (1.0f), 1, 0, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_234 = V_0;
		NullCheck(L_234);
		List_1_t537 ** L_235 = &(L_234->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_235, (2.0f), 0, 1, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_236 = V_0;
		NullCheck(L_236);
		List_1_t537 ** L_237 = &(L_236->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_237, (1.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_238 = V_0;
		NullCheck(L_238);
		List_1_t537 ** L_239 = &(L_238->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_239, (2.0f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_240 = V_0;
		NullCheck(L_240);
		List_1_t537 ** L_241 = &(L_240->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_241, (1.0f), 0, 3, 3, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_242 = V_0;
		NullCheck(L_242);
		List_1_t537 ** L_243 = &(L_242->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_243, (2.0f), 1, 0, 0, 2, 2, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_08f1:
	{
		int32_t L_244 = V_1;
		int32_t L_245 = ((int32_t)((int32_t)L_244-(int32_t)1));
		V_1 = L_245;
		if (L_245)
		{
			goto IL_0933;
		}
	}
	{
		LevelDescription_t543 * L_246 = V_0;
		NullCheck(L_246);
		L_246->___specialText_0 = (String_t*) &_stringLiteral1029;
		LevelDescription_t543 * L_247 = V_0;
		Sprite_t472 * L_248 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		NullCheck(L_247);
		L_247->___sprite_2 = L_248;
		LevelDescription_t543 * L_249 = V_0;
		NullCheck(L_249);
		EnumAccumulator_1_t538 * L_250 = (L_249->___mouseHolesAccumulator_5);
		NullCheck(L_250);
		EnumAccumulator_1_AddNew_m4007(L_250, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		LevelDescription_t543 * L_251 = V_0;
		NullCheck(L_251);
		EnumAccumulator_1_t538 * L_252 = (L_251->___mouseHolesAccumulator_5);
		NullCheck(L_252);
		EnumAccumulator_1_AddNew_m4007(L_252, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		goto IL_0e9a;
	}

IL_0933:
	{
		int32_t L_253 = V_1;
		int32_t L_254 = ((int32_t)((int32_t)L_253-(int32_t)1));
		V_1 = L_254;
		if (L_254)
		{
			goto IL_0aca;
		}
	}
	{
		LevelDescription_t543 * L_255 = V_0;
		NullCheck(L_255);
		L_255->___specialText_0 = (String_t*) &_stringLiteral1032;
		LevelDescription_t543 * L_256 = V_0;
		MouseConfig_t559 * L_257 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_257);
		Sprite_t472 * L_258 = MouseConfig_GetIntroSpriteForMouseWiggle_m2947(L_257, 1, /*hidden argument*/NULL);
		NullCheck(L_256);
		L_256->___sprite_2 = L_258;
		LevelDescription_t543 * L_259 = V_0;
		NullCheck(L_259);
		EnumAccumulator_1_t540 * L_260 = (L_259->___wigglesAccumulator_7);
		NullCheck(L_260);
		EnumAccumulator_1_AddNew_m4010(L_260, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4010_MethodInfo_var);
		LevelDescription_t543 * L_261 = V_0;
		NullCheck(L_261);
		List_1_t537 ** L_262 = &(L_261->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_262, (2.0f), 0, 3, 0, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_263 = V_0;
		NullCheck(L_263);
		List_1_t537 ** L_264 = &(L_263->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_264, (1.0f), 0, 1, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_265 = V_0;
		NullCheck(L_265);
		List_1_t537 ** L_266 = &(L_265->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_266, (2.0f), 1, 3, 0, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_267 = V_0;
		NullCheck(L_267);
		List_1_t537 ** L_268 = &(L_267->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_268, (3.0f), 0, 0, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_269 = V_0;
		NullCheck(L_269);
		List_1_t537 ** L_270 = &(L_269->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_270, (2.0f), 1, 2, 2, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_271 = V_0;
		NullCheck(L_271);
		List_1_t537 ** L_272 = &(L_271->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_272, (1.0f), 1, 3, 2, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_273 = V_0;
		NullCheck(L_273);
		List_1_t537 ** L_274 = &(L_273->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_274, (0.1f), 1, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_275 = V_0;
		NullCheck(L_275);
		List_1_t537 ** L_276 = &(L_275->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_276, (0.1f), 0, 1, 1, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_277 = V_0;
		NullCheck(L_277);
		List_1_t537 ** L_278 = &(L_277->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_278, (1.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_279 = V_0;
		NullCheck(L_279);
		List_1_t537 ** L_280 = &(L_279->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_280, (2.0f), 1, 2, 3, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_281 = V_0;
		NullCheck(L_281);
		List_1_t537 ** L_282 = &(L_281->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_282, (1.0f), 0, 3, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_283 = V_0;
		NullCheck(L_283);
		List_1_t537 ** L_284 = &(L_283->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_284, (0.1f), 1, 1, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_285 = V_0;
		NullCheck(L_285);
		List_1_t537 ** L_286 = &(L_285->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_286, (2.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_287 = V_0;
		NullCheck(L_287);
		List_1_t537 ** L_288 = &(L_287->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_288, (2.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_289 = V_0;
		NullCheck(L_289);
		List_1_t537 ** L_290 = &(L_289->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_290, (2.0f), 0, 3, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_291 = V_0;
		NullCheck(L_291);
		List_1_t537 ** L_292 = &(L_291->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_292, (2.0f), 1, 0, 0, 2, 1, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0aca:
	{
		int32_t L_293 = V_1;
		int32_t L_294 = ((int32_t)((int32_t)L_293-(int32_t)1));
		V_1 = L_294;
		if (L_294)
		{
			goto IL_0b01;
		}
	}
	{
		LevelDescription_t543 * L_295 = V_0;
		NullCheck(L_295);
		L_295->___specialText_0 = (String_t*) &_stringLiteral1033;
		LevelDescription_t543 * L_296 = V_0;
		BoostConfig_t456 * L_297 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_297);
		Sprite_t472 * L_298 = BoostConfig_GetIntroImageForType_m2600(L_297, 3, /*hidden argument*/NULL);
		NullCheck(L_296);
		L_296->___sprite_2 = L_298;
		LevelDescription_t543 * L_299 = V_0;
		NullCheck(L_299);
		EnumAccumulator_1_t539 * L_300 = (L_299->___boostsAccumulator_6);
		NullCheck(L_300);
		EnumAccumulator_1_AddNew_m4008(L_300, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4008_MethodInfo_var);
		goto IL_0e9a;
	}

IL_0b01:
	{
		int32_t L_301 = V_1;
		int32_t L_302 = ((int32_t)((int32_t)L_301-(int32_t)1));
		V_1 = L_302;
		if (L_302)
		{
			goto IL_0b37;
		}
	}
	{
		LevelDescription_t543 * L_303 = V_0;
		NullCheck(L_303);
		L_303->___specialText_0 = (String_t*) &_stringLiteral1034;
		LevelDescription_t543 * L_304 = V_0;
		Sprite_t472 * L_305 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		NullCheck(L_304);
		L_304->___sprite_2 = L_305;
		LevelDescription_t543 * L_306 = V_0;
		NullCheck(L_306);
		EnumAccumulator_1_t538 * L_307 = (L_306->___mouseHolesAccumulator_5);
		NullCheck(L_307);
		EnumAccumulator_1_AddNew_m4007(L_307, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		goto IL_0e9a;
	}

IL_0b37:
	{
		int32_t L_308 = V_1;
		int32_t L_309 = ((int32_t)((int32_t)L_308-(int32_t)1));
		V_1 = L_309;
		if (L_309)
		{
			goto IL_0c80;
		}
	}
	{
		LevelDescription_t543 * L_310 = V_0;
		NullCheck(L_310);
		L_310->___specialText_0 = (String_t*) &_stringLiteral1035;
		LevelDescription_t543 * L_311 = V_0;
		MouseConfig_t559 * L_312 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_312);
		Sprite_t472 * L_313 = MouseConfig_GetIntroSpriteForMouseType_m2946(L_312, 3, /*hidden argument*/NULL);
		NullCheck(L_311);
		L_311->___sprite_2 = L_313;
		LevelDescription_t543 * L_314 = V_0;
		NullCheck(L_314);
		List_1_t537 ** L_315 = &(L_314->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_315, (1.2f), 1, 0, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_316 = V_0;
		NullCheck(L_316);
		List_1_t537 ** L_317 = &(L_316->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_317, (1.4f), 1, 1, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_318 = V_0;
		NullCheck(L_318);
		List_1_t537 ** L_319 = &(L_318->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_319, (1.0f), 0, 2, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_320 = V_0;
		NullCheck(L_320);
		List_1_t537 ** L_321 = &(L_320->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_321, (1.1f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_322 = V_0;
		NullCheck(L_322);
		List_1_t537 ** L_323 = &(L_322->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_323, (1.5f), 1, 0, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_324 = V_0;
		NullCheck(L_324);
		List_1_t537 ** L_325 = &(L_324->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_325, (1.2f), 0, 3, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_326 = V_0;
		NullCheck(L_326);
		List_1_t537 ** L_327 = &(L_326->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_327, (1.3f), 0, 2, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_328 = V_0;
		NullCheck(L_328);
		List_1_t537 ** L_329 = &(L_328->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_329, (2.0f), 1, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_330 = V_0;
		NullCheck(L_330);
		List_1_t537 ** L_331 = &(L_330->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_331, (0.1f), 0, 2, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_332 = V_0;
		NullCheck(L_332);
		List_1_t537 ** L_333 = &(L_332->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_333, (1.1f), 1, 2, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_334 = V_0;
		NullCheck(L_334);
		List_1_t537 ** L_335 = &(L_334->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_335, (0.1f), 0, 3, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_336 = V_0;
		NullCheck(L_336);
		List_1_t537 ** L_337 = &(L_336->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_337, (1.5f), 1, 0, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_338 = V_0;
		NullCheck(L_338);
		List_1_t537 ** L_339 = &(L_338->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_339, (2.2f), 1, 1, 1, 1, 0, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0c80:
	{
		int32_t L_340 = V_1;
		int32_t L_341 = ((int32_t)((int32_t)L_340-(int32_t)1));
		V_1 = L_341;
		if (L_341)
		{
			goto IL_0cb7;
		}
	}
	{
		LevelDescription_t543 * L_342 = V_0;
		NullCheck(L_342);
		L_342->___specialText_0 = (String_t*) &_stringLiteral1036;
		LevelDescription_t543 * L_343 = V_0;
		BoostConfig_t456 * L_344 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_344);
		Sprite_t472 * L_345 = BoostConfig_GetIntroImageForType_m2600(L_344, 4, /*hidden argument*/NULL);
		NullCheck(L_343);
		L_343->___sprite_2 = L_345;
		LevelDescription_t543 * L_346 = V_0;
		NullCheck(L_346);
		EnumAccumulator_1_t539 * L_347 = (L_346->___boostsAccumulator_6);
		NullCheck(L_347);
		EnumAccumulator_1_AddNew_m4008(L_347, 4, /*hidden argument*/EnumAccumulator_1_AddNew_m4008_MethodInfo_var);
		goto IL_0e9a;
	}

IL_0cb7:
	{
		int32_t L_348 = V_1;
		int32_t L_349 = ((int32_t)((int32_t)L_348-(int32_t)1));
		V_1 = L_349;
		if (L_349)
		{
			goto IL_0ced;
		}
	}
	{
		LevelDescription_t543 * L_350 = V_0;
		NullCheck(L_350);
		L_350->___specialText_0 = (String_t*) &_stringLiteral1037;
		LevelDescription_t543 * L_351 = V_0;
		Sprite_t472 * L_352 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		NullCheck(L_351);
		L_351->___sprite_2 = L_352;
		LevelDescription_t543 * L_353 = V_0;
		NullCheck(L_353);
		EnumAccumulator_1_t538 * L_354 = (L_353->___mouseHolesAccumulator_5);
		NullCheck(L_354);
		EnumAccumulator_1_AddNew_m4007(L_354, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		goto IL_0e9a;
	}

IL_0ced:
	{
		int32_t L_355 = V_1;
		int32_t L_356 = ((int32_t)((int32_t)L_355-(int32_t)1));
		V_1 = L_356;
		if (L_356)
		{
			goto IL_0e2c;
		}
	}
	{
		LevelDescription_t543 * L_357 = V_0;
		NullCheck(L_357);
		L_357->___specialText_0 = (String_t*) &_stringLiteral1038;
		LevelDescription_t543 * L_358 = V_0;
		MouseConfig_t559 * L_359 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_359);
		Sprite_t472 * L_360 = MouseConfig_GetIntroSpriteForMouseWiggle_m2947(L_359, 3, /*hidden argument*/NULL);
		NullCheck(L_358);
		L_358->___sprite_2 = L_360;
		LevelDescription_t543 * L_361 = V_0;
		NullCheck(L_361);
		EnumAccumulator_1_t540 * L_362 = (L_361->___wigglesAccumulator_7);
		NullCheck(L_362);
		EnumAccumulator_1_AddNew_m4010(L_362, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4010_MethodInfo_var);
		LevelDescription_t543 * L_363 = V_0;
		NullCheck(L_363);
		List_1_t537 ** L_364 = &(L_363->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_364, (1.3f), 1, 0, 1, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_365 = V_0;
		NullCheck(L_365);
		List_1_t537 ** L_366 = &(L_365->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_366, (0.1f), 0, 3, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_367 = V_0;
		NullCheck(L_367);
		List_1_t537 ** L_368 = &(L_367->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_368, (2.0f), 1, 1, 1, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_369 = V_0;
		NullCheck(L_369);
		List_1_t537 ** L_370 = &(L_369->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_370, (0.1f), 0, 2, 3, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_371 = V_0;
		NullCheck(L_371);
		List_1_t537 ** L_372 = &(L_371->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_372, (1.1f), 0, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_373 = V_0;
		NullCheck(L_373);
		List_1_t537 ** L_374 = &(L_373->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_374, (1.4f), 1, 1, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_375 = V_0;
		NullCheck(L_375);
		List_1_t537 ** L_376 = &(L_375->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_376, (1.0f), 1, 2, 0, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_377 = V_0;
		NullCheck(L_377);
		List_1_t537 ** L_378 = &(L_377->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_378, (1.1f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_379 = V_0;
		NullCheck(L_379);
		List_1_t537 ** L_380 = &(L_379->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_380, (1.2f), 1, 0, 3, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_381 = V_0;
		NullCheck(L_381);
		List_1_t537 ** L_382 = &(L_381->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_382, (1.5f), 0, 0, 2, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t543 * L_383 = V_0;
		NullCheck(L_383);
		List_1_t537 ** L_384 = &(L_383->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_384, (1.2f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t543 * L_385 = V_0;
		NullCheck(L_385);
		List_1_t537 ** L_386 = &(L_385->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m2905(__this, L_386, (1.5f), 1, 0, 2, 0, 3, /*hidden argument*/NULL);
		goto IL_0e9a;
	}

IL_0e2c:
	{
		int32_t L_387 = V_1;
		int32_t L_388 = ((int32_t)((int32_t)L_387-(int32_t)1));
		V_1 = L_388;
		if (L_388)
		{
			goto IL_0e62;
		}
	}
	{
		LevelDescription_t543 * L_389 = V_0;
		NullCheck(L_389);
		L_389->___specialText_0 = (String_t*) &_stringLiteral1039;
		LevelDescription_t543 * L_390 = V_0;
		Sprite_t472 * L_391 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		NullCheck(L_390);
		L_390->___sprite_2 = L_391;
		LevelDescription_t543 * L_392 = V_0;
		NullCheck(L_392);
		EnumAccumulator_1_t538 * L_393 = (L_392->___mouseHolesAccumulator_5);
		NullCheck(L_393);
		EnumAccumulator_1_AddNew_m4007(L_393, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		goto IL_0e9a;
	}

IL_0e62:
	{
		int32_t L_394 = V_1;
		int32_t L_395 = ((int32_t)((int32_t)L_394-(int32_t)1));
		V_1 = L_395;
		if (L_395)
		{
			goto IL_0e98;
		}
	}
	{
		LevelDescription_t543 * L_396 = V_0;
		NullCheck(L_396);
		L_396->___specialText_0 = (String_t*) &_stringLiteral1040;
		LevelDescription_t543 * L_397 = V_0;
		Sprite_t472 * L_398 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		NullCheck(L_397);
		L_397->___sprite_2 = L_398;
		LevelDescription_t543 * L_399 = V_0;
		NullCheck(L_399);
		EnumAccumulator_1_t538 * L_400 = (L_399->___mouseHolesAccumulator_5);
		NullCheck(L_400);
		EnumAccumulator_1_AddNew_m4007(L_400, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4007_MethodInfo_var);
		goto IL_0e9a;
	}

IL_0e98:
	{
		return (LevelDescription_t543 *)NULL;
	}

IL_0e9a:
	{
		LevelDescription_t543 * L_401 = V_0;
		return L_401;
	}
}
// LevelDescription LevelConfig::GenerateRandomLevelDescription(System.Int32)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* LevelDescription_t543_il2cpp_TypeInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m3997_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m3999_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m3998_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4000_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4001_MethodInfo_var;
extern "C" LevelDescription_t543 * LevelConfig_GenerateRandomLevelDescription_m2913 (LevelConfig_t550 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		LevelDescription_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		EnumAccumulator_1_DeriveFrom_m3997_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484171);
		EnumAccumulator_1_DeriveFrom_m3999_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484173);
		EnumAccumulator_1_DeriveFrom_m3998_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484172);
		EnumAccumulator_1_DeriveFrom_m4000_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484174);
		EnumAccumulator_1_DeriveFrom_m4001_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484175);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t543 * V_0 = {0};
	LevelDescription_t543 * V_1 = {0};
	{
		Dictionary_2_t548 * L_0 = (__this->___levelDescMap_19);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t57 * L_2 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_2, (String_t*) &_stringLiteral1041, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		V_0 = (LevelDescription_t543 *)NULL;
		int32_t L_3 = ___gameLevel;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = ___gameLevel;
		LevelDescription_t543 * L_5 = LevelConfig_GetLevelDescription_m2907(__this, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_003e;
	}

IL_0033:
	{
		Exception_t57 * L_6 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_6, (String_t*) &_stringLiteral1042, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003e:
	{
		LevelDescription_t543 * L_7 = (LevelDescription_t543 *)il2cpp_codegen_object_new (LevelDescription_t543_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m2896(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		LevelDescription_t543 * L_8 = V_1;
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		L_8->___gameLevel_10 = L_9;
		LevelDescription_t543 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_00a6;
		}
	}
	{
		LevelDescription_t543 * L_11 = V_1;
		NullCheck(L_11);
		EnumAccumulator_1_t539 * L_12 = (L_11->___boostsAccumulator_6);
		LevelDescription_t543 * L_13 = V_0;
		NullCheck(L_13);
		EnumAccumulator_1_t539 * L_14 = (L_13->___boostsAccumulator_6);
		NullCheck(L_12);
		EnumAccumulator_1_DeriveFrom_m3997(L_12, L_14, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m3997_MethodInfo_var);
		LevelDescription_t543 * L_15 = V_1;
		NullCheck(L_15);
		EnumAccumulator_1_t540 * L_16 = (L_15->___wigglesAccumulator_7);
		LevelDescription_t543 * L_17 = V_0;
		NullCheck(L_17);
		EnumAccumulator_1_t540 * L_18 = (L_17->___wigglesAccumulator_7);
		NullCheck(L_16);
		EnumAccumulator_1_DeriveFrom_m3999(L_16, L_18, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m3999_MethodInfo_var);
		LevelDescription_t543 * L_19 = V_1;
		NullCheck(L_19);
		EnumAccumulator_1_t538 * L_20 = (L_19->___mouseHolesAccumulator_5);
		LevelDescription_t543 * L_21 = V_0;
		NullCheck(L_21);
		EnumAccumulator_1_t538 * L_22 = (L_21->___mouseHolesAccumulator_5);
		NullCheck(L_20);
		EnumAccumulator_1_DeriveFrom_m3998(L_20, L_22, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m3998_MethodInfo_var);
		LevelDescription_t543 * L_23 = V_1;
		NullCheck(L_23);
		EnumAccumulator_1_t541 * L_24 = (L_23->___mouseTypesAccumulator_8);
		LevelDescription_t543 * L_25 = V_0;
		NullCheck(L_25);
		EnumAccumulator_1_t541 * L_26 = (L_25->___mouseTypesAccumulator_8);
		NullCheck(L_24);
		EnumAccumulator_1_DeriveFrom_m4000(L_24, L_26, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4000_MethodInfo_var);
		LevelDescription_t543 * L_27 = V_1;
		NullCheck(L_27);
		EnumAccumulator_1_t542 * L_28 = (L_27->___waveTypesAccumulator_9);
		LevelDescription_t543 * L_29 = V_0;
		NullCheck(L_29);
		EnumAccumulator_1_t542 * L_30 = (L_29->___waveTypesAccumulator_9);
		NullCheck(L_28);
		EnumAccumulator_1_DeriveFrom_m4001(L_28, L_30, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4001_MethodInfo_var);
	}

IL_00a6:
	{
		LevelDescription_t543 * L_31 = V_1;
		LevelDescription_t543 * L_32 = V_1;
		List_1_t537 * L_33 = LevelConfig_GenerateRandomMiceForLevel_m2915(__this, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->___explicitMouseDescs_1 = L_33;
		LevelDescription_t543 * L_34 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m2914(__this, L_34, /*hidden argument*/NULL);
		LevelDescription_t543 * L_35 = V_1;
		return L_35;
	}
}
// System.Void LevelConfig::GenerateRandomWigglesForLevel(LevelDescription)
extern TypeInfo* QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4012_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var;
extern "C" void LevelConfig_GenerateRandomWigglesForLevel_m2914 (LevelConfig_t550 * __this, LevelDescription_t543 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		EnumAccumulator_1_GetDistribution_m4012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484185);
		QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t747 * V_0 = {0};
	QuasiRandomGenerator_1_t546 * V_1 = {0};
	int32_t V_2 = 0;
	ExplicitMouseDesc_t497 * V_3 = {0};
	int32_t V_4 = {0};
	{
		LevelDescription_t543 * L_0 = ___ld;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___gameLevel_10);
		Random_set_seed_m4011(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LevelDescription_t543 * L_2 = ___ld;
		NullCheck(L_2);
		EnumAccumulator_1_t540 * L_3 = (L_2->___wigglesAccumulator_7);
		NullCheck(L_3);
		List_1_t747 * L_4 = EnumAccumulator_1_GetDistribution_m4012(L_3, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4012_MethodInfo_var);
		V_0 = L_4;
		List_1_t747 * L_5 = V_0;
		QuasiRandomGenerator_1_t546 * L_6 = (QuasiRandomGenerator_1_t546 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4013(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0046;
	}

IL_0025:
	{
		LevelDescription_t543 * L_7 = ___ld;
		NullCheck(L_7);
		List_1_t537 * L_8 = (L_7->___explicitMouseDescs_1);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		ExplicitMouseDesc_t497 * L_10 = (ExplicitMouseDesc_t497 *)VirtFuncInvoker1< ExplicitMouseDesc_t497 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_8, L_9);
		V_3 = L_10;
		QuasiRandomGenerator_1_t546 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4014(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_4 = L_12;
		ExplicitMouseDesc_t497 * L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		ExplicitMouseDesc_AddWiggle_m2693(L_13, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_16 = V_2;
		LevelDescription_t543 * L_17 = ___ld;
		NullCheck(L_17);
		List_1_t537 * L_18 = (L_17->___explicitMouseDescs_1);
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
extern TypeInfo* List_1_t537_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3990_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4015_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4016_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m4017_MethodInfo_var;
extern "C" List_1_t537 * LevelConfig_GenerateRandomMiceForLevel_m2915 (LevelConfig_t550 * __this, LevelDescription_t543 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		List_1__ctor_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		EnumAccumulator_1_GetDistribution_m4015_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484188);
		QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		EnumAccumulator_1_GetDistribution_m4016_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484189);
		QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		List_1_AddRange_m4017_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484190);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t537 * V_0 = {0};
	List_1_t747 * V_1 = {0};
	QuasiRandomGenerator_1_t546 * V_2 = {0};
	List_1_t747 * V_3 = {0};
	QuasiRandomGenerator_1_t546 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = {0};
	{
		List_1_t537 * L_0 = (List_1_t537 *)il2cpp_codegen_object_new (List_1_t537_il2cpp_TypeInfo_var);
		List_1__ctor_m3990(L_0, /*hidden argument*/List_1__ctor_m3990_MethodInfo_var);
		V_0 = L_0;
		LevelDescription_t543 * L_1 = ___ld;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___gameLevel_10);
		Random_set_seed_m4011(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		LevelDescription_t543 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t542 * L_4 = (L_3->___waveTypesAccumulator_9);
		NullCheck(L_4);
		List_1_t747 * L_5 = EnumAccumulator_1_GetDistribution_m4015(L_4, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4015_MethodInfo_var);
		V_1 = L_5;
		List_1_t747 * L_6 = V_1;
		QuasiRandomGenerator_1_t546 * L_7 = (QuasiRandomGenerator_1_t546 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4013(L_7, L_6, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var);
		V_2 = L_7;
		LevelDescription_t543 * L_8 = ___ld;
		NullCheck(L_8);
		EnumAccumulator_1_t541 * L_9 = (L_8->___mouseTypesAccumulator_8);
		NullCheck(L_9);
		List_1_t747 * L_10 = EnumAccumulator_1_GetDistribution_m4016(L_9, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4016_MethodInfo_var);
		V_3 = L_10;
		List_1_t747 * L_11 = V_3;
		QuasiRandomGenerator_1_t546 * L_12 = (QuasiRandomGenerator_1_t546 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4013(L_12, L_11, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var);
		V_4 = L_12;
		V_5 = 0;
		goto IL_005f;
	}

IL_0040:
	{
		QuasiRandomGenerator_1_t546 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = QuasiRandomGenerator_1_GetNextValue_m4014(L_13, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_6 = L_14;
		List_1_t537 * L_15 = V_0;
		int32_t L_16 = V_6;
		QuasiRandomGenerator_1_t546 * L_17 = V_4;
		LevelDescription_t543 * L_18 = ___ld;
		List_1_t537 * L_19 = LevelConfig_GenerateWaveForLevel_m2916(__this, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_AddRange_m4017(L_15, L_19, /*hidden argument*/List_1_AddRange_m4017_MethodInfo_var);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_5;
		LevelDescription_t543 * L_22 = ___ld;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___gameLevel_10);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)L_23/(int32_t)2)))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_t537 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelDescription/WaveType,QuasiRandomGenerator`1<System.Int32>,LevelDescription)
extern "C" List_1_t537 * LevelConfig_GenerateWaveForLevel_m2916 (LevelConfig_t550 * __this, int32_t ___wt, QuasiRandomGenerator_1_t546 * ___mouseTypeGenerator, LevelDescription_t543 * ___ld, const MethodInfo* method)
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
		QuasiRandomGenerator_1_t546 * L_2 = ___mouseTypeGenerator;
		List_1_t537 * L_3 = LevelConfig_GenerateDistributedWave_m2917(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t546 * L_4 = ___mouseTypeGenerator;
		List_1_t537 * L_5 = LevelConfig_GenerateParadeWave_m2918(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0029:
	{
		QuasiRandomGenerator_1_t546 * L_6 = ___mouseTypeGenerator;
		List_1_t537 * L_7 = LevelConfig_GenerateSpoutWave_m2919(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t537_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3990_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4018_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var;
extern "C" List_1_t537 * LevelConfig_GenerateDistributedWave_m2917 (LevelConfig_t550 * __this, QuasiRandomGenerator_1_t546 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		List_1__ctor_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		QuasiRandomGenerator_1_GetNextValue_m4018_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484191);
		QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484192);
		QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t537 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = {0};
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t537 * L_0 = (List_1_t537 *)il2cpp_codegen_object_new (List_1_t537_il2cpp_TypeInfo_var);
		List_1__ctor_m3990(L_0, /*hidden argument*/List_1__ctor_m3990_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minDistributedMice_6);
		int32_t L_2 = (__this->___maxDistributedMice_7);
		int32_t L_3 = Random_Range_m3538(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0081;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t547 * L_4 = (__this->___distributedPauseGenerator_18);
		NullCheck(L_4);
		float L_5 = QuasiRandomGenerator_1_GetNextValue_m4018(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4018_MethodInfo_var);
		V_3 = L_5;
		int32_t L_6 = Random_Range_m3538(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_4 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t545 * L_7 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4019(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t546 * L_9 = ___mouseTypeGenerator;
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4014(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t546 * L_11 = (__this->___trackGenerator_17);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4014(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_7 = L_12;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)((int32_t)L_14-(int32_t)1))))))
		{
			goto IL_006b;
		}
	}
	{
		float L_15 = (__this->___distributedEndPause_9);
		V_3 = L_15;
	}

IL_006b:
	{
		float L_16 = V_3;
		bool L_17 = V_4;
		int32_t L_18 = V_5;
		int32_t L_19 = V_6;
		int32_t L_20 = V_7;
		LevelConfig_AddExplicitMouseDesc_m2905(__this, (&V_0), L_16, L_17, L_18, L_19, L_20, 0, /*hidden argument*/NULL);
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
		List_1_t537 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t537_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3990_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_RefreshValues_m4020_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var;
extern "C" List_1_t537 * LevelConfig_GenerateParadeWave_m2918 (LevelConfig_t550 * __this, QuasiRandomGenerator_1_t546 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		List_1__ctor_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		QuasiRandomGenerator_1_RefreshValues_m4020_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484193);
		QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484192);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t537 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = {0};
	{
		List_1_t537 * L_0 = (List_1_t537 *)il2cpp_codegen_object_new (List_1_t537_il2cpp_TypeInfo_var);
		List_1__ctor_m3990(L_0, /*hidden argument*/List_1__ctor_m3990_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = Random_Range_m3538(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_1 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t545 * L_2 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_2);
		QuasiRandomGenerator_1_RefreshValues_m4020(L_2, /*hidden argument*/QuasiRandomGenerator_1_RefreshValues_m4020_MethodInfo_var);
		int32_t L_3 = (__this->___minParadeMice_3);
		int32_t L_4 = (__this->___maxParadeMice_4);
		int32_t L_5 = Random_Range_m3538(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_008d;
	}

IL_0037:
	{
		float L_6 = (__this->___paradePause_2);
		V_4 = L_6;
		QuasiRandomGenerator_1_t546 * L_7 = ___mouseTypeGenerator;
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4014(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t546 * L_9 = (__this->___trackGenerator_17);
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4014(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t545 * L_11 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4019(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var);
		V_7 = L_12;
		List_1_t537 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_13);
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)((int32_t)L_15-(int32_t)1))))))
		{
			goto IL_0077;
		}
	}
	{
		float L_16 = (__this->___paradeEndPause_5);
		V_4 = L_16;
	}

IL_0077:
	{
		float L_17 = V_4;
		bool L_18 = V_1;
		int32_t L_19 = V_7;
		int32_t L_20 = V_5;
		int32_t L_21 = V_6;
		LevelConfig_AddExplicitMouseDesc_m2905(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
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
		List_1_t537 * L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t537_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3990_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var;
extern "C" List_1_t537 * LevelConfig_GenerateSpoutWave_m2919 (LevelConfig_t550 * __this, QuasiRandomGenerator_1_t546 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		List_1__ctor_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484192);
		QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t537 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t537 * L_0 = (List_1_t537 *)il2cpp_codegen_object_new (List_1_t537_il2cpp_TypeInfo_var);
		List_1__ctor_m3990(L_0, /*hidden argument*/List_1__ctor_m3990_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minSpoutMice_13);
		int32_t L_2 = (__this->___maxSpoutMice_14);
		int32_t L_3 = Random_Range_m3538(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		QuasiRandomGenerator_1_t545 * L_4 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_4);
		int32_t L_5 = QuasiRandomGenerator_1_GetNextValue_m4019(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4019_MethodInfo_var);
		V_2 = L_5;
		int32_t L_6 = Random_Range_m3538(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		V_4 = 0;
		goto IL_008f;
	}

IL_0039:
	{
		float L_7 = (__this->___minSpoutPause_10);
		float L_8 = (__this->___maxSpoutPause_11);
		float L_9 = Random_Range_m3955(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		QuasiRandomGenerator_1_t546 * L_10 = ___mouseTypeGenerator;
		NullCheck(L_10);
		int32_t L_11 = QuasiRandomGenerator_1_GetNextValue_m4014(L_10, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_6 = L_11;
		QuasiRandomGenerator_1_t546 * L_12 = (__this->___trackGenerator_17);
		NullCheck(L_12);
		int32_t L_13 = QuasiRandomGenerator_1_GetNextValue_m4014(L_12, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4014_MethodInfo_var);
		V_7 = L_13;
		int32_t L_14 = V_4;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)((int32_t)L_15-(int32_t)1))))))
		{
			goto IL_0073;
		}
	}
	{
		float L_16 = (__this->___spoutEndPause_12);
		V_5 = L_16;
	}

IL_0073:
	{
		float L_17 = V_5;
		bool L_18 = V_3;
		int32_t L_19 = V_2;
		int32_t L_20 = V_6;
		int32_t L_21 = V_7;
		LevelConfig_AddExplicitMouseDesc_m2905(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
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
		List_1_t537 * L_26 = V_0;
		return L_26;
	}
}
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern TypeInfo* List_1_t748_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t545_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t747_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t547_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4021_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4022_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4023_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4024_MethodInfo_var;
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m2920 (LevelConfig_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		QuasiRandomGenerator_1_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		List_1_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(526);
		QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		QuasiRandomGenerator_1_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		List_1__ctor_m4021_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484194);
		QuasiRandomGenerator_1__ctor_m4022_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484195);
		List_1__ctor_m4023_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484196);
		QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		QuasiRandomGenerator_1__ctor_m4024_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484197);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t748 * V_0 = {0};
	List_1_t747 * V_1 = {0};
	int32_t V_2 = 0;
	{
		List_1_t748 * L_0 = (List_1_t748 *)il2cpp_codegen_object_new (List_1_t748_il2cpp_TypeInfo_var);
		List_1__ctor_m4021(L_0, /*hidden argument*/List_1__ctor_m4021_MethodInfo_var);
		V_0 = L_0;
		List_1_t748 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(!0) */, L_1, 0);
		List_1_t748 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(!0) */, L_2, 1);
		List_1_t748 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(!0) */, L_3, 2);
		List_1_t748 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(!0) */, L_4, 3);
		List_1_t748 * L_5 = V_0;
		QuasiRandomGenerator_1_t545 * L_6 = (QuasiRandomGenerator_1_t545 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t545_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4022(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4022_MethodInfo_var);
		__this->___mouseHoleGenerator_16 = L_6;
		QuasiRandomGenerator_1_t545 * L_7 = (__this->___mouseHoleGenerator_16);
		NullCheck(L_7);
		L_7->___refreshTrigger_2 = 1;
		List_1_t747 * L_8 = (List_1_t747 *)il2cpp_codegen_object_new (List_1_t747_il2cpp_TypeInfo_var);
		List_1__ctor_m4023(L_8, /*hidden argument*/List_1__ctor_m4023_MethodInfo_var);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0052;
	}

IL_0047:
	{
		List_1_t747 * L_9 = V_1;
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
		List_1_t747 * L_13 = V_1;
		QuasiRandomGenerator_1_t546 * L_14 = (QuasiRandomGenerator_1_t546 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t546_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4013(L_14, L_13, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4013_MethodInfo_var);
		__this->___trackGenerator_17 = L_14;
		SingleU5BU5D_t544* L_15 = (__this->___distributedPauseDist_8);
		QuasiRandomGenerator_1_t547 * L_16 = (QuasiRandomGenerator_1_t547 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t547_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4024(L_16, L_15, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4024_MethodInfo_var);
		__this->___distributedPauseGenerator_18 = L_16;
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

// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandle.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandleMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"


// System.Void LevelEndTitlesLayout::.ctor()
extern "C" void LevelEndTitlesLayout__ctor_m2921 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::Awake()
extern "C" void LevelEndTitlesLayout_Awake_m2922 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	{
		__this->___started_8 = 0;
		__this->___registerdForEvents_6 = 0;
		return;
	}
}
// System.Void LevelEndTitlesLayout::Start()
extern "C" void LevelEndTitlesLayout_Start_m2923 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_9 = 0;
		LevelEndTitlesLayout_RegisterForEvents_m2926(__this, /*hidden argument*/NULL);
		__this->___started_8 = 1;
		LevelEndTitlesLayout_SetWaveViews_m2929(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnDestroy()
extern "C" void LevelEndTitlesLayout_OnDestroy_m2924 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_UnregisterForEvents_m2927(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnEnable()
extern "C" void LevelEndTitlesLayout_OnEnable_m2925 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_SetWaveViews_m2929(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m2930_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_RegisterForEvents_m2926 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		LevelEndTitlesLayout_OnGameLevelChanged_m2930_MethodInfo_var = il2cpp_codegen_method_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t513 * L_0 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m2930_MethodInfo_var };
		GameLevelChangedEventHandler_t512 * L_2 = (GameLevelChangedEventHandler_t512 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2752(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_add_GameLevelChanged_m2757(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_6 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m2930_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_UnregisterForEvents_m2927 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		LevelEndTitlesLayout_OnGameLevelChanged_m2930_MethodInfo_var = il2cpp_codegen_method_info_from_index(550);
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
		GameLevelState_t513 * L_1 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m2930_MethodInfo_var };
		GameLevelChangedEventHandler_t512 * L_3 = (GameLevelChangedEventHandler_t512 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2752(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m2758(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::Update()
extern "C" void LevelEndTitlesLayout_Update_m2928 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___waveDirty_9);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		LevelEndTitlesLayout_SetWaveViews_m2929(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::SetWaveViews()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LevelEndTitlesLayout_SetWaveViews_m2929 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t543 * V_0 = {0};
	{
		bool L_0 = (__this->___started_8);
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
		bool L_1 = Behaviour_get_enabled_m4025(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		__this->___waveDirty_9 = 0;
		Text_t462 * L_2 = (__this->___waveTitleText_2);
		GameLevelState_t513 * L_3 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GameLevelState_get_gameLevel_m2759(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral944, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
		LevelConfig_t550 * L_8 = LevelConfig_get_instance_m2898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		LevelDescription_t543 * L_9 = LevelConfig_GetCurrentLevelDescription_m2906(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Text_t462 * L_10 = (__this->___waveCountText_3);
		LevelDescription_t543 * L_11 = V_0;
		NullCheck(L_11);
		List_1_t537 * L_12 = (L_11->___explicitMouseDescs_1);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_12);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Concat_m409(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral1043, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_16);
		Text_t462 * L_17 = (__this->___waveSpecialText_4);
		LevelDescription_t543 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___specialText_0);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		LevelDescription_t543 * L_20 = V_0;
		NullCheck(L_20);
		Sprite_t472 * L_21 = (L_20->___sprite_2);
		bool L_22 = Object_op_Inequality_m3450(NULL /*static, unused*/, L_21, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00bc;
		}
	}
	{
		Image_t463 * L_23 = (__this->___waveSpecialImage_5);
		NullCheck(L_23);
		GameObject_t352 * L_24 = Component_get_gameObject_m3529(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m3729(L_24, 1, /*hidden argument*/NULL);
		Image_t463 * L_25 = (__this->___waveSpecialImage_5);
		LevelDescription_t543 * L_26 = V_0;
		NullCheck(L_26);
		Sprite_t472 * L_27 = (L_26->___sprite_2);
		NullCheck(L_25);
		Image_set_sprite_m3925(L_25, L_27, /*hidden argument*/NULL);
		goto IL_00cd;
	}

IL_00bc:
	{
		Image_t463 * L_28 = (__this->___waveSpecialImage_5);
		NullCheck(L_28);
		GameObject_t352 * L_29 = Component_get_gameObject_m3529(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_SetActive_m3729(L_29, 0, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnGameLevelChanged()
extern "C" void LevelEndTitlesLayout_OnGameLevelChanged_m2930 (LevelEndTitlesLayout_t551 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_9 = 1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// LevelPlayUI
#include "AssemblyU2DCSharp_LevelPlayUIMethodDeclarations.h"

// BoostButtonLayout
#include "AssemblyU2DCSharp_BoostButtonLayout.h"
// BoostButtonLayout
#include "AssemblyU2DCSharp_BoostButtonLayoutMethodDeclarations.h"


// System.Void LevelPlayUI::.ctor()
extern "C" void LevelPlayUI__ctor_m2931 (LevelPlayUI_t552 * __this, const MethodInfo* method)
{
	{
		GameUI__ctor_m2803(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelPlayUI::ConfirmLayoutComplete()
extern "C" void LevelPlayUI_ConfirmLayoutComplete_m2932 (LevelPlayUI_t552 * __this, const MethodInfo* method)
{
	{
		BoostButtonLayout_t464 * L_0 = (__this->___boostButtonLayout_2);
		NullCheck(L_0);
		BoostButtonLayout_ConfirmLayoutComplete_m2567(L_0, /*hidden argument*/NULL);
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

// DeadMouseRelay
#include "AssemblyU2DCSharp_DeadMouseRelay.h"
// DeadMouseRelay/MultiKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MultiKillEventHandler.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimation.h"
// DeadMouseRelay
#include "AssemblyU2DCSharp_DeadMouseRelayMethodDeclarations.h"
// DeadMouseRelay/MultiKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MultiKillEventHandlerMethodDeclarations.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimationMethodDeclarations.h"
struct Object_t655;
struct GameObject_t352;
struct Object_t655;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m4027_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m4027(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m4027_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t352_m4026(__this /* static, unused */, p0, method) (( GameObject_t352 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Object_Instantiate_TisObject_t_m4027_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t352;
struct FlyingAnimation_t505;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
// !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
#define GameObject_GetComponent_TisFlyingAnimation_t505_m4028(__this, method) (( FlyingAnimation_t505 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void MoneyEarningController::.ctor()
extern "C" void MoneyEarningController__ctor_m2933 (MoneyEarningController_t553 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::Start()
extern "C" void MoneyEarningController_Start_m2934 (MoneyEarningController_t553 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_RegisterForEvents_m2936(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::OnDestroy()
extern "C" void MoneyEarningController_OnDestroy_m2935 (MoneyEarningController_t553 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_UnregisterForEvents_m2937(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t489_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t486_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m2938_MethodInfo_var;
extern "C" void MoneyEarningController_RegisterForEvents_m2936 (MoneyEarningController_t553 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MultiKillEventHandler_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		MoneyEarningController_OnMultiKill_m2938_MethodInfo_var = il2cpp_codegen_method_info_from_index(551);
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
		DeadMouseRelay_t489 * L_1 = ((DeadMouseRelay_t489_StaticFields*)DeadMouseRelay_t489_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m2938_MethodInfo_var };
		MultiKillEventHandler_t486 * L_3 = (MultiKillEventHandler_t486 *)il2cpp_codegen_object_new (MultiKillEventHandler_t486_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2639(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MultiKill_m2648(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t489_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t486_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m2938_MethodInfo_var;
extern "C" void MoneyEarningController_UnregisterForEvents_m2937 (MoneyEarningController_t553 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MultiKillEventHandler_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		MoneyEarningController_OnMultiKill_m2938_MethodInfo_var = il2cpp_codegen_method_info_from_index(551);
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
		DeadMouseRelay_t489 * L_1 = ((DeadMouseRelay_t489_StaticFields*)DeadMouseRelay_t489_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m2938_MethodInfo_var };
		MultiKillEventHandler_t486 * L_3 = (MultiKillEventHandler_t486 *)il2cpp_codegen_object_new (MultiKillEventHandler_t486_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2639(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MultiKill_m2649(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MoneyEarningController::OnMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void MoneyEarningController_OnMultiKill_m2938 (MoneyEarningController_t553 * __this, int32_t ___numKilled, Vector3_t496  ___pawPosition, const MethodInfo* method)
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
		PlayerStats_t475 * L_3 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PlayerStats_EarnMoney_m3177(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		Vector3_t496  L_6 = ___pawPosition;
		MoneyEarningController_MakeMoneyEffect_m2939(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::MakeMoneyEffect(System.Int32,UnityEngine.Vector3)
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4026_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t505_m4028_MethodInfo_var;
extern "C" void MoneyEarningController_MakeMoneyEffect_m2939 (MoneyEarningController_t553 * __this, int32_t ___moneyEarned, Vector3_t496  ___pawPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4026_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t505_m4028_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t505 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___moneyEffectPrototype_2);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4026(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4026_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		FlyingAnimation_t505 * L_3 = GameObject_GetComponent_TisFlyingAnimation_t505_m4028(L_2, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t505_m4028_MethodInfo_var);
		V_1 = L_3;
		FlyingAnimation_t505 * L_4 = V_1;
		Vector3_t496  L_5 = ___pawPosition;
		GameObject_t352 * L_6 = (__this->___moneyDisplay_3);
		NullCheck(L_4);
		FlyingAnimation_Configure_m2724(L_4, L_5, L_6, /*hidden argument*/NULL);
		FlyingAnimation_t505 * L_7 = V_1;
		NullCheck(L_7);
		FlyingAnimation_Run_m2725(L_7, /*hidden argument*/NULL);
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

// MouseDesc
#include "AssemblyU2DCSharp_MouseDesc.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDesc.h"
// MouseDesc
#include "AssemblyU2DCSharp_MouseDescMethodDeclarations.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDescMethodDeclarations.h"


// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m2940 (MouseConfig_t559 * __this, const MethodInfo* method)
{
	{
		__this->___timeToTurn_2 = (0.2f);
		__this->___minCirclingRadius_3 = (3.3f);
		__this->___maxCirclingRadius_4 = (3.9f);
		__this->___startMouseRadius_5 = (5.5f);
		__this->___minSpeedM_6 = (1.4f);
		__this->___maxSpeedM_7 = (2.6f);
		__this->___minScaleM_8 = (1.0f);
		__this->___maxScaleM_9 = (1.26f);
		__this->___superSpeedM_10 = (4.0f);
		__this->___minBFWiggleMagnitude_15 = (0.15f);
		__this->___maxBFWiggleMagnitude_16 = (0.55f);
		__this->___minBFWiggleCycles_17 = ((int32_t)10);
		__this->___maxBFWiggleCycles_18 = ((int32_t)14);
		__this->___minSSWiggleMagnitude_19 = (0.15f);
		__this->___maxSSWiggleMagnitude_20 = (0.55f);
		__this->___minSSWiggleCycles_21 = ((int32_t)15);
		__this->___maxSSWiggleCycles_22 = ((int32_t)20);
		__this->___minRDWiggleMagnitude_23 = (0.15f);
		__this->___maxRDWiggleMagnitude_24 = (0.55f);
		__this->___minRDWiggleCycles_25 = ((int32_t)9);
		__this->___maxRDWiggleCycles_26 = ((int32_t)14);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::Awake()
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_Awake_m2941 (MouseConfig_t559 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29 = __this;
		MouseConfig_LoadMouseDescs_m2942(__this, /*hidden argument*/NULL);
		MouseConfig_LoadMouseWiggleDescs_m2943(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::LoadMouseDescs()
extern TypeInfo* MouseDescU5BU5D_t557_il2cpp_TypeInfo_var;
extern TypeInfo* MouseDesc_t560_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseDescs_m2942 (MouseConfig_t559 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseDescU5BU5D_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		MouseDesc_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseDescs_27 = ((MouseDescU5BU5D_t557*)SZArrayNew(MouseDescU5BU5D_t557_il2cpp_TypeInfo_var, 4));
		MouseDescU5BU5D_t557* L_0 = (__this->___mouseDescs_27);
		float L_1 = (__this->___minSpeedM_6);
		float L_2 = (__this->___minScaleM_8);
		MouseDesc_t560 * L_3 = (MouseDesc_t560 *)il2cpp_codegen_object_new (MouseDesc_t560_il2cpp_TypeInfo_var);
		MouseDesc__ctor_m2950(L_3, (String_t*) &_stringLiteral1044, (String_t*) &_stringLiteral1045, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_0, 0)) = (MouseDesc_t560 *)L_3;
		MouseDescU5BU5D_t557* L_4 = (__this->___mouseDescs_27);
		float L_5 = (__this->___minSpeedM_6);
		float L_6 = (__this->___maxSpeedM_7);
		float L_7 = (__this->___minScaleM_8);
		float L_8 = (__this->___maxScaleM_9);
		MouseDesc_t560 * L_9 = (MouseDesc_t560 *)il2cpp_codegen_object_new (MouseDesc_t560_il2cpp_TypeInfo_var);
		MouseDesc__ctor_m2950(L_9, (String_t*) &_stringLiteral1046, (String_t*) &_stringLiteral1047, ((float)((float)((float)((float)L_5+(float)L_6))/(float)(2.0f))), ((float)((float)((float)((float)L_7+(float)L_8))/(float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_9);
		*((MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_4, 1)) = (MouseDesc_t560 *)L_9;
		MouseDescU5BU5D_t557* L_10 = (__this->___mouseDescs_27);
		float L_11 = (__this->___maxSpeedM_7);
		float L_12 = (__this->___maxScaleM_9);
		MouseDesc_t560 * L_13 = (MouseDesc_t560 *)il2cpp_codegen_object_new (MouseDesc_t560_il2cpp_TypeInfo_var);
		MouseDesc__ctor_m2950(L_13, (String_t*) &_stringLiteral1048, (String_t*) &_stringLiteral1049, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_10, 2)) = (MouseDesc_t560 *)L_13;
		MouseDescU5BU5D_t557* L_14 = (__this->___mouseDescs_27);
		float L_15 = (__this->___superSpeedM_10);
		float L_16 = (__this->___minScaleM_8);
		MouseDesc_t560 * L_17 = (MouseDesc_t560 *)il2cpp_codegen_object_new (MouseDesc_t560_il2cpp_TypeInfo_var);
		MouseDesc__ctor_m2950(L_17, (String_t*) &_stringLiteral1050, (String_t*) &_stringLiteral1051, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
		ArrayElementTypeCheck (L_14, L_17);
		*((MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_14, 3)) = (MouseDesc_t560 *)L_17;
		return;
	}
}
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern TypeInfo* MouseWiggleDescU5BU5D_t558_il2cpp_TypeInfo_var;
extern TypeInfo* MouseWiggleDesc_t569_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseWiggleDescs_m2943 (MouseConfig_t559 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseWiggleDescU5BU5D_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		MouseWiggleDesc_t569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(532);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseWiggleDescs_28 = ((MouseWiggleDescU5BU5D_t558*)SZArrayNew(MouseWiggleDescU5BU5D_t558_il2cpp_TypeInfo_var, 4));
		MouseWiggleDescU5BU5D_t558* L_0 = (__this->___mouseWiggleDescs_28);
		float L_1 = (__this->___minBFWiggleMagnitude_15);
		float L_2 = (__this->___maxBFWiggleMagnitude_16);
		int32_t L_3 = (__this->___minBFWiggleCycles_17);
		int32_t L_4 = (__this->___maxBFWiggleCycles_18);
		MouseWiggleDesc_t569 * L_5 = (MouseWiggleDesc_t569 *)il2cpp_codegen_object_new (MouseWiggleDesc_t569_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3044(L_5, (String_t*) &_stringLiteral1052, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 2);
		ArrayElementTypeCheck (L_0, L_5);
		*((MouseWiggleDesc_t569 **)(MouseWiggleDesc_t569 **)SZArrayLdElema(L_0, 2)) = (MouseWiggleDesc_t569 *)L_5;
		MouseWiggleDescU5BU5D_t558* L_6 = (__this->___mouseWiggleDescs_28);
		float L_7 = (__this->___minSSWiggleMagnitude_19);
		float L_8 = (__this->___maxSSWiggleMagnitude_20);
		int32_t L_9 = (__this->___minSSWiggleCycles_21);
		int32_t L_10 = (__this->___maxSSWiggleCycles_22);
		MouseWiggleDesc_t569 * L_11 = (MouseWiggleDesc_t569 *)il2cpp_codegen_object_new (MouseWiggleDesc_t569_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3044(L_11, (String_t*) &_stringLiteral1053, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_11);
		*((MouseWiggleDesc_t569 **)(MouseWiggleDesc_t569 **)SZArrayLdElema(L_6, 1)) = (MouseWiggleDesc_t569 *)L_11;
		MouseWiggleDescU5BU5D_t558* L_12 = (__this->___mouseWiggleDescs_28);
		float L_13 = (__this->___minRDWiggleMagnitude_23);
		float L_14 = (__this->___maxRDWiggleMagnitude_24);
		int32_t L_15 = (__this->___minRDWiggleCycles_25);
		int32_t L_16 = (__this->___maxRDWiggleCycles_26);
		MouseWiggleDesc_t569 * L_17 = (MouseWiggleDesc_t569 *)il2cpp_codegen_object_new (MouseWiggleDesc_t569_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3044(L_17, (String_t*) &_stringLiteral1054, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_17);
		*((MouseWiggleDesc_t569 **)(MouseWiggleDesc_t569 **)SZArrayLdElema(L_12, 3)) = (MouseWiggleDesc_t569 *)L_17;
		return;
	}
}
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m2944 (MouseConfig_t559 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m3538(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// UnityEngine.Sprite MouseConfig::deprecated_GetSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t472 * MouseConfig_deprecated_GetSpriteForMouseType_m2945 (MouseConfig_t559 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseDescU5BU5D_t557* L_0 = (__this->___mouseDescs_27);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_0, L_2)));
		Sprite_t472 * L_3 = ((*(MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_0, L_2))->___deprecated_mouseSprite_0);
		return L_3;
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t472 * MouseConfig_GetIntroSpriteForMouseType_m2946 (MouseConfig_t559 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseDescU5BU5D_t557* L_0 = (__this->___mouseDescs_27);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_0, L_2)));
		Sprite_t472 * L_3 = ((*(MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_0, L_2))->___introScreenSprite_2);
		return L_3;
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t472 * MouseConfig_GetIntroSpriteForMouseWiggle_m2947 (MouseConfig_t559 * __this, int32_t ___wt, const MethodInfo* method)
{
	MouseWiggleDesc_t569 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		MouseWiggleDesc_t569 * L_1 = MouseConfig_GetWiggleDesc_m2948(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseWiggleDesc_t569 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		MouseWiggleDesc_t569 * L_3 = V_0;
		NullCheck(L_3);
		Sprite_t472 * L_4 = (L_3->___introScreenSprite_0);
		return L_4;
	}

IL_0015:
	{
		return (Sprite_t472 *)NULL;
	}
}
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t569 * MouseConfig_GetWiggleDesc_m2948 (MouseConfig_t559 * __this, int32_t ___wt, const MethodInfo* method)
{
	{
		MouseWiggleDescU5BU5D_t558* L_0 = (__this->___mouseWiggleDescs_28);
		int32_t L_1 = ___wt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseWiggleDesc_t569 **)(MouseWiggleDesc_t569 **)SZArrayLdElema(L_0, L_2));
	}
}
// MouseDesc MouseConfig::GetMouseDesc(MouseConfig/MouseType)
extern "C" MouseDesc_t560 * MouseConfig_GetMouseDesc_m2949 (MouseConfig_t559 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseDescU5BU5D_t557* L_0 = (__this->___mouseDescs_27);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseDesc_t560 **)(MouseDesc_t560 **)SZArrayLdElema(L_0, L_2));
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
struct Resources_t740;
struct Material_t482;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
#define Resources_Load_TisMaterial_t482_m4029(__this /* static, unused */, p0, method) (( Material_t482 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m3938_gshared)(__this /* static, unused */, p0, method)


// System.Void MouseDesc::.ctor(System.String,System.String,System.Single,System.Single)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t472_m3937_MethodInfo_var;
extern const MethodInfo* Resources_Load_TisMaterial_t482_m4029_MethodInfo_var;
extern "C" void MouseDesc__ctor_m2950 (MouseDesc_t560 * __this, String_t* ___oldImageName, String_t* ___newImageName, float ___speed, float ___scale, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t472_m3937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484131);
		Resources_Load_TisMaterial_t482_m4029_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484202);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1055, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t472 * L_3 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		__this->___deprecated_mouseSprite_0 = L_3;
		String_t* L_4 = ___oldImageName;
		String_t* L_5 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1055, L_4, (String_t*) &_stringLiteral1056, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t472 * L_7 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		__this->___deadMouseSprite_1 = L_7;
		String_t* L_8 = ___newImageName;
		String_t* L_9 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1057, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = V_0;
		Material_t482 * L_11 = Resources_Load_TisMaterial_t482_m4029(NULL /*static, unused*/, L_10, /*hidden argument*/Resources_Load_TisMaterial_t482_m4029_MethodInfo_var);
		__this->___mouseMaterial_3 = L_11;
		String_t* L_12 = ___newImageName;
		String_t* L_13 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1058, L_12, (String_t*) &_stringLiteral1059, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		Sprite_t472 * L_15 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_14, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
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
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocationMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void MouseHole/MousePopChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MousePopChangedEventHandler__ctor_m2951 (MousePopChangedEventHandler_t562 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseHole/MousePopChangedEventHandler::Invoke()
extern "C" void MousePopChangedEventHandler_Invoke_m2952 (MousePopChangedEventHandler_t562 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MousePopChangedEventHandler_Invoke_m2952((MousePopChangedEventHandler_t562 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MousePopChangedEventHandler_t562(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseHole/MousePopChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MousePopChangedEventHandler_BeginInvoke_m2953 (MousePopChangedEventHandler_t562 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseHole/MousePopChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MousePopChangedEventHandler_EndInvoke_m2954 (MousePopChangedEventHandler_t562 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void MouseHole/CapacityChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CapacityChangedEventHandler__ctor_m2955 (CapacityChangedEventHandler_t563 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseHole/CapacityChangedEventHandler::Invoke()
extern "C" void CapacityChangedEventHandler_Invoke_m2956 (CapacityChangedEventHandler_t563 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CapacityChangedEventHandler_Invoke_m2956((CapacityChangedEventHandler_t563 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_CapacityChangedEventHandler_t563(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseHole/CapacityChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CapacityChangedEventHandler_BeginInvoke_m2957 (CapacityChangedEventHandler_t563 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseHole/CapacityChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void CapacityChangedEventHandler_EndInvoke_m2958 (CapacityChangedEventHandler_t563 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffect.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHan.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMove.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayer.h"
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"
// TipController
#include "AssemblyU2DCSharp_TipController.h"
// GameController
#include "AssemblyU2DCSharp_GameController.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHanMethodDeclarations.h"
// ThrobForEffect
#include "AssemblyU2DCSharp_ThrobForEffectMethodDeclarations.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMoveMethodDeclarations.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayerMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"
struct GameObject_t352;
struct ThrobForEffect_t564;
// Declaration !!0 UnityEngine.GameObject::GetComponent<ThrobForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<ThrobForEffect>()
#define GameObject_GetComponent_TisThrobForEffect_t564_m4030(__this, method) (( ThrobForEffect_t564 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)
struct GameObject_t352;
struct HoleMeter_t528;
// Declaration !!0 UnityEngine.GameObject::GetComponent<HoleMeter>()
// !!0 UnityEngine.GameObject::GetComponent<HoleMeter>()
#define GameObject_GetComponent_TisHoleMeter_t528_m4031(__this, method) (( HoleMeter_t528 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)
struct GameObject_t352;
struct WorldObjectFollower_t629;
// Declaration !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
// !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
#define GameObject_GetComponent_TisWorldObjectFollower_t629_m4032(__this, method) (( WorldObjectFollower_t629 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void MouseHole::.ctor()
extern "C" void MouseHole__ctor_m2959 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::.cctor()
extern TypeInfo* MouseHole_t530_il2cpp_TypeInfo_var;
extern "C" void MouseHole__cctor_m2960 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseHole_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseHole_t530_StaticFields*)MouseHole_t530_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_4 = (90.0f);
		return;
	}
}
// System.Void MouseHole::add_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern TypeInfo* MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern "C" void MouseHole_add_MousePopChanged_m2961 (MouseHole_t530 * __this, MousePopChangedEventHandler_t562 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		MousePopChangedEventHandler_t562 * L_0 = (__this->___MousePopChanged_11);
		MousePopChangedEventHandler_t562 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MousePopChanged_11 = ((MousePopChangedEventHandler_t562 *)Castclass(L_2, MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::remove_MousePopChanged(MouseHole/MousePopChangedEventHandler)
extern TypeInfo* MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern "C" void MouseHole_remove_MousePopChanged_m2962 (MouseHole_t530 * __this, MousePopChangedEventHandler_t562 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		MousePopChangedEventHandler_t562 * L_0 = (__this->___MousePopChanged_11);
		MousePopChangedEventHandler_t562 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MousePopChanged_11 = ((MousePopChangedEventHandler_t562 *)Castclass(L_2, MousePopChangedEventHandler_t562_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::add_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern TypeInfo* CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern "C" void MouseHole_add_CapacityChanged_m2963 (MouseHole_t530 * __this, CapacityChangedEventHandler_t563 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		CapacityChangedEventHandler_t563 * L_0 = (__this->___CapacityChanged_12);
		CapacityChangedEventHandler_t563 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CapacityChanged_12 = ((CapacityChangedEventHandler_t563 *)Castclass(L_2, CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::remove_CapacityChanged(MouseHole/CapacityChangedEventHandler)
extern TypeInfo* CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern "C" void MouseHole_remove_CapacityChanged_m2964 (MouseHole_t530 * __this, CapacityChangedEventHandler_t563 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		CapacityChangedEventHandler_t563 * L_0 = (__this->___CapacityChanged_12);
		CapacityChangedEventHandler_t563 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CapacityChanged_12 = ((CapacityChangedEventHandler_t563 *)Castclass(L_2, CapacityChangedEventHandler_t563_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseHole::Awake()
extern TypeInfo* TipConfig_t473_il2cpp_TypeInfo_var;
extern "C" void MouseHole_Awake_m2965 (MouseHole_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		TipConfig_t473 * L_0 = (TipConfig_t473 *)il2cpp_codegen_object_new (TipConfig_t473_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3329(L_0, (String_t*) &_stringLiteral1060, (String_t*) &_stringLiteral1061, /*hidden argument*/NULL);
		__this->___mouseHoleTip_8 = L_0;
		return;
	}
}
// System.Void MouseHole::Start()
extern const MethodInfo* GameObject_GetComponent_TisThrobForEffect_t564_m4030_MethodInfo_var;
extern "C" void MouseHole_Start_m2966 (MouseHole_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisThrobForEffect_t564_m4030_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484203);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseHole_RegisterForEvents_m2968(__this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ThrobForEffect_t564 * L_1 = GameObject_GetComponent_TisThrobForEffect_t564_m4030(L_0, /*hidden argument*/GameObject_GetComponent_TisThrobForEffect_t564_m4030_MethodInfo_var);
		__this->___throbForEffect_6 = L_1;
		MouseHole_MakeHoleMeter_m2972(__this, /*hidden argument*/NULL);
		MouseHole_Reset_m2971(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::OnDestroy()
extern "C" void MouseHole_OnDestroy_m2967 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		MouseHole_UnregisterForEvents_m2969(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseHole_OnInstanceChanged_m2970_MethodInfo_var;
extern "C" void MouseHole_RegisterForEvents_m2968 (MouseHole_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		MouseHole_OnInstanceChanged_m2970_MethodInfo_var = il2cpp_codegen_method_info_from_index(556);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_10);
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
		__this->___registeredForEvents_10 = 1;
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseHole_OnInstanceChanged_m2970_MethodInfo_var };
		GameInstanceChangedEventHandler_t515 * L_3 = (GameInstanceChangedEventHandler_t515 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2766(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2781(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseHole_OnInstanceChanged_m2970_MethodInfo_var;
extern "C" void MouseHole_UnregisterForEvents_m2969 (MouseHole_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		MouseHole_OnInstanceChanged_m2970_MethodInfo_var = il2cpp_codegen_method_info_from_index(556);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_10);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseHole_OnInstanceChanged_m2970_MethodInfo_var };
		GameInstanceChangedEventHandler_t515 * L_3 = (GameInstanceChangedEventHandler_t515 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2766(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m2782(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseHole::OnInstanceChanged()
extern "C" void MouseHole_OnInstanceChanged_m2970 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		MouseHole_Reset_m2971(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::Reset()
extern "C" void MouseHole_Reset_m2971 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		__this->___savedMouseCount_5 = 0;
		int32_t L_0 = TweakableParams_GetInitialMicePerHole_m3371(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___capacity_9 = L_0;
		ThrobForEffect_t564 * L_1 = (__this->___throbForEffect_6);
		NullCheck(L_1);
		ThrobForEffect_SetThrobbing_m3311(L_1, 0, /*hidden argument*/NULL);
		MousePopChangedEventHandler_t562 * L_2 = (__this->___MousePopChanged_11);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		MousePopChangedEventHandler_t562 * L_3 = (__this->___MousePopChanged_11);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseHole/MousePopChangedEventHandler::Invoke() */, L_3);
	}

IL_0034:
	{
		CapacityChangedEventHandler_t563 * L_4 = (__this->___CapacityChanged_12);
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		CapacityChangedEventHandler_t563 * L_5 = (__this->___CapacityChanged_12);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseHole/CapacityChangedEventHandler::Invoke() */, L_5);
	}

IL_004a:
	{
		return;
	}
}
// System.Void MouseHole::MakeHoleMeter()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisHoleMeter_t528_m4031_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisWorldObjectFollower_t629_m4032_MethodInfo_var;
extern "C" void MouseHole_MakeHoleMeter_m2972 (MouseHole_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisHoleMeter_t528_m4031_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484205);
		GameObject_GetComponent_TisWorldObjectFollower_t629_m4032_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484206);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	HoleMeter_t528 * V_1 = {0};
	WorldObjectFollower_t629 * V_2 = {0};
	{
		GameObject_t352 * L_0 = (__this->___holeMeterPrototype_7);
		Vector3_t496  L_1 = {0};
		Vector3__ctor_m3807(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t737  L_2 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_3 = Object_Instantiate_m3914(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		HoleMeter_t528 * L_5 = GameObject_GetComponent_TisHoleMeter_t528_m4031(L_4, /*hidden argument*/GameObject_GetComponent_TisHoleMeter_t528_m4031_MethodInfo_var);
		V_1 = L_5;
		HoleMeter_t528 * L_6 = V_1;
		NullCheck(L_6);
		HoleMeter_TrackHole_m2865(L_6, __this, /*hidden argument*/NULL);
		GameObject_t352 * L_7 = V_0;
		NullCheck(L_7);
		WorldObjectFollower_t629 * L_8 = GameObject_GetComponent_TisWorldObjectFollower_t629_m4032(L_7, /*hidden argument*/GameObject_GetComponent_TisWorldObjectFollower_t629_m4032_MethodInfo_var);
		V_2 = L_8;
		WorldObjectFollower_t629 * L_9 = V_2;
		GameObject_t352 * L_10 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		Vector3_t496  L_11 = (__this->___meterOffset_2);
		NullCheck(L_9);
		WorldObjectFollower_SetObjectToFollow_m3405(L_9, L_10, L_11, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::DoDoomedBoxFX()
extern "C" void MouseHole_DoDoomedBoxFX_m2973 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		ThrobForEffect_t564 * L_0 = (__this->___throbForEffect_6);
		NullCheck(L_0);
		ThrobForEffect_SetThrobbing_m3311(L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MouseHole::CountSavedMouse(MouseMove)
extern "C" bool MouseHole_CountSavedMouse_m2974 (MouseHole_t530 * __this, MouseMove_t487 * ___mouse, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_5);
		int32_t L_1 = (__this->___capacity_9);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = (__this->___savedMouseCount_5);
		__this->___savedMouseCount_5 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return 1;
	}

IL_0021:
	{
		return 0;
	}
}
// System.Void MouseHole::ClearNMice(System.Int32)
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" void MouseHole_ClearNMice_m2975 (MouseHole_t530 * __this, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___count;
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
		int32_t L_1 = (__this->___savedMouseCount_5);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_2 = ___count;
		int32_t L_3 = (__this->___savedMouseCount_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_Min_m4033(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		___count = L_4;
		int32_t L_5 = (__this->___savedMouseCount_5);
		int32_t L_6 = ___count;
		__this->___savedMouseCount_5 = ((int32_t)((int32_t)L_5-(int32_t)L_6));
		MousePopChangedEventHandler_t562 * L_7 = (__this->___MousePopChanged_11);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		MousePopChangedEventHandler_t562 * L_8 = (__this->___MousePopChanged_11);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseHole/MousePopChangedEventHandler::Invoke() */, L_8);
	}

IL_0045:
	{
		return;
	}
}
// System.Void MouseHole::ClearMice()
extern "C" void MouseHole_ClearMice_m2976 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_5);
		MouseHole_ClearNMice_m2975(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseHole::SaveMouse(MouseMove)
extern TypeInfo* TipController_t616_il2cpp_TypeInfo_var;
extern "C" void MouseHole_SaveMouse_m2977 (MouseHole_t530 * __this, MouseMove_t487 * ___mouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_t487 * L_0 = ___mouse;
		NullCheck(L_0);
		MouseMove_OnSafeExit_m3009(L_0, /*hidden argument*/NULL);
		MouseMove_t487 * L_1 = ___mouse;
		bool L_2 = MouseHole_CountSavedMouse_m2974(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		SFXPlayer_t597 * L_3 = SFXPlayer_get_instance_m3216(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		SFXPlayer_Play_m3221(L_3, 7, /*hidden argument*/NULL);
		TipController_t616 * L_4 = ((TipController_t616_StaticFields*)TipController_t616_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t473 * L_5 = (__this->___mouseHoleTip_8);
		NullCheck(L_4);
		TipController_MaybeShowTip_m3347(L_4, L_5, /*hidden argument*/NULL);
		MousePopChangedEventHandler_t562 * L_6 = (__this->___MousePopChanged_11);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		MousePopChangedEventHandler_t562 * L_7 = (__this->___MousePopChanged_11);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseHole/MousePopChangedEventHandler::Invoke() */, L_7);
	}

IL_0044:
	{
		GameController_t511 * L_8 = GameController_get_instance_m2733(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseMove_t487 * L_9 = ___mouse;
		NullCheck(L_8);
		GameController_OnMouseExit_m2747(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean MouseHole::IsFull()
extern "C" bool MouseHole_IsFull_m2978 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_5);
		int32_t L_1 = (__this->___capacity_9);
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 MouseHole::GetPopulation()
extern "C" int32_t MouseHole_GetPopulation_m2979 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___savedMouseCount_5);
		return L_0;
	}
}
// System.Int32 MouseHole::GetCapacity()
extern "C" int32_t MouseHole_GetCapacity_m2980 (MouseHole_t530 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___capacity_9);
		return L_0;
	}
}
// System.Void MouseHole::SetCapacity(System.Int32)
extern "C" void MouseHole_SetCapacity_m2981 (MouseHole_t530 * __this, int32_t ___newCapacity, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___capacity_9);
		int32_t L_1 = ___newCapacity;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = ___newCapacity;
		__this->___capacity_9 = L_2;
		CapacityChangedEventHandler_t563 * L_3 = (__this->___CapacityChanged_12);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		CapacityChangedEventHandler_t563 * L_4 = (__this->___CapacityChanged_12);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseHole/CapacityChangedEventHandler::Invoke() */, L_4);
	}

IL_0029:
	{
		return;
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
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouse.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"
// DeadMouse
#include "AssemblyU2DCSharp_DeadMouseMethodDeclarations.h"
struct GameObject_t352;
struct Slider_t457;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t457_m3910(__this, method) (( Slider_t457 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)
struct GameObject_t352;
struct TweakableSlider_t566;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
// !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
#define GameObject_GetComponent_TisTweakableSlider_t566_m4034(__this, method) (( TweakableSlider_t566 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)
struct GameObject_t352;
struct DeadMouse_t485;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
// !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
#define GameObject_GetComponent_TisDeadMouse_t485_m4035(__this, method) (( DeadMouse_t485 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void MouseMove::.ctor()
extern "C" void MouseMove__ctor_m2982 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		__this->___minDistanceToManuallyOrient_5 = (0.01f);
		__this->___wiggleCycles_22 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m2983 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m2984 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_25);
		return L_0;
	}
}
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m2985 (MouseMove_t487 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m2986 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdeadU3Ek__BackingField_26);
		return L_0;
	}
}
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m2987 (MouseMove_t487 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdeadU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m2988 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPoisonedU3Ek__BackingField_27);
		return L_0;
	}
}
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m2989 (MouseMove_t487 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPoisonedU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isFartedUpon()
extern "C" bool MouseMove_get_isFartedUpon_m2990 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisFartedUponU3Ek__BackingField_28);
		return L_0;
	}
}
// System.Void MouseMove::set_isFartedUpon(System.Boolean)
extern "C" void MouseMove_set_isFartedUpon_m2991 (MouseMove_t487 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisFartedUponU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m2992 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		MouseMove_set_dead_m2987(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::Start()
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern TypeInfo* MouseMove_t487_il2cpp_TypeInfo_var;
extern "C" void MouseMove_Start_m2993 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		MouseMove_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_RegisterForEvents_m2995(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___startAngleDeg_7);
		__this->___mouseAngleDeg_6 = L_0;
		MouseMove_SetPhase_m3006(__this, 0, /*hidden argument*/NULL);
		MouseConfig_t559 * L_1 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_1);
		float L_2 = (L_1->___startMouseRadius_5);
		__this->___mouseRadius_9 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t487_il2cpp_TypeInfo_var);
		int32_t L_3 = ((MouseMove_t487_StaticFields*)MouseMove_t487_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t487_StaticFields*)MouseMove_t487_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		float L_4 = (__this->___baseSpeedM_13);
		__this->___actualSpeedM_14 = L_4;
		MouseMove_MakeSlider_m3000(__this, /*hidden argument*/NULL);
		MouseMove_SetMouseTransform_m3001(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnDestroy()
extern TypeInfo* MouseMove_t487_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnDestroy_m2994 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_UnregisterForEvents_m2996(__this, /*hidden argument*/NULL);
		Slider_t457 * L_0 = (__this->___sliderInstance_18);
		bool L_1 = Object_op_Inequality_m3450(NULL /*static, unused*/, L_0, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Slider_t457 * L_2 = (__this->___sliderInstance_18);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3529(L_2, /*hidden argument*/NULL);
		Object_Destroy_m3673(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t487_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t487_StaticFields*)MouseMove_t487_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t487_StaticFields*)MouseMove_t487_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_4-(int32_t)1));
		return;
	}
}
// System.Void MouseMove::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m2997_MethodInfo_var;
extern "C" void MouseMove_RegisterForEvents_m2995 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		MouseMove_OnGamePhaseChanged_m2997_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_24);
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
		__this->___registeredForEvents_24 = 1;
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m2997_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2783(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m2997_MethodInfo_var;
extern "C" void MouseMove_UnregisterForEvents_m2996 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		MouseMove_OnGamePhaseChanged_m2997_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_24);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m2997_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2784(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseMove::OnGamePhaseChanged()
extern "C" void MouseMove_OnGamePhaseChanged_m2997 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MouseMove::OnFartedUpon()
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnFartedUpon_m2998 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___baseSpeedM_13);
		__this->___actualSpeedM_14 = ((float)((float)L_0*(float)(0.3f)));
		Renderer_t565 * L_1 = (__this->___mouseRenderer_3);
		NullCheck(L_1);
		Material_t482 * L_2 = Renderer_get_material_m3774(L_1, /*hidden argument*/NULL);
		MouseConfig_t559 * L_3 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_3);
		Color_t325  L_4 = (L_3->___fartedUponColor_12);
		NullCheck(L_2);
		Material_set_color_m4036(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPoisoned()
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetPoisoned_m2999 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_set_isPoisoned_m2989(__this, 1, /*hidden argument*/NULL);
		Renderer_t565 * L_0 = (__this->___mouseRenderer_3);
		NullCheck(L_0);
		Material_t482 * L_1 = Renderer_get_material_m3774(L_0, /*hidden argument*/NULL);
		MouseConfig_t559 * L_2 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_2);
		Color_t325  L_3 = (L_2->___poisonedColor_11);
		NullCheck(L_1);
		Material_set_color_m4036(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeSlider()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisWorldObjectFollower_t629_m4032_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t457_m3910_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTweakableSlider_t566_m4034_MethodInfo_var;
extern "C" void MouseMove_MakeSlider_m3000 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		GameObject_GetComponent_TisWorldObjectFollower_t629_m4032_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484206);
		GameObject_GetComponent_TisSlider_t457_m3910_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484114);
		GameObject_GetComponent_TisTweakableSlider_t566_m4034_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484208);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	WorldObjectFollower_t629 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___trackingStatusBarPrototype_4);
		Vector3_t496  L_1 = {0};
		Vector3__ctor_m3807(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t737  L_2 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_3 = Object_Instantiate_m3914(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		WorldObjectFollower_t629 * L_5 = GameObject_GetComponent_TisWorldObjectFollower_t629_m4032(L_4, /*hidden argument*/GameObject_GetComponent_TisWorldObjectFollower_t629_m4032_MethodInfo_var);
		V_1 = L_5;
		WorldObjectFollower_t629 * L_6 = V_1;
		GameObject_t352 * L_7 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		MouseConfig_t559 * L_8 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_8);
		Vector3_t496  L_9 = (L_8->___progressBarOffset_13);
		NullCheck(L_6);
		WorldObjectFollower_SetObjectToFollow_m3405(L_6, L_7, L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = V_0;
		NullCheck(L_10);
		Slider_t457 * L_11 = GameObject_GetComponent_TisSlider_t457_m3910(L_10, /*hidden argument*/GameObject_GetComponent_TisSlider_t457_m3910_MethodInfo_var);
		__this->___sliderInstance_18 = L_11;
		GameObject_t352 * L_12 = V_0;
		NullCheck(L_12);
		TweakableSlider_t566 * L_13 = GameObject_GetComponent_TisTweakableSlider_t566_m4034(L_12, /*hidden argument*/GameObject_GetComponent_TisTweakableSlider_t566_m4034_MethodInfo_var);
		__this->___tweakableSlider_19 = L_13;
		Slider_t457 * L_14 = (__this->___sliderInstance_18);
		NullCheck(L_14);
		GameObject_t352 * L_15 = Component_get_gameObject_m3529(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m3729(L_15, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseTransform()
extern "C" void MouseMove_SetMouseTransform_m3001 (MouseMove_t487 * __this, const MethodInfo* method)
{
	Vector3_t496  V_0 = {0};
	{
		Transform_t406 * L_0 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t496  L_1 = Transform_get_position_m3814(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseMove_SetMousePosition_m3002(__this, /*hidden argument*/NULL);
		Vector3_t496  L_2 = V_0;
		MouseMove_SetMouseOrientation_m3003(__this, L_2, /*hidden argument*/NULL);
		MouseMove_UpdateSlider_m3005(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMousePosition()
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMousePosition_m3002 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___mouseRadius_9);
		float L_1 = (__this->___mouseAngleDeg_6);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_2 = sinf(((float)((float)(0.0174532924f)*(float)L_1)));
		V_0 = ((float)((float)L_0*(float)L_2));
		float L_3 = (__this->___mouseRadius_9);
		float L_4 = (__this->___mouseAngleDeg_6);
		float L_5 = cosf(((float)((float)(0.0174532924f)*(float)L_4)));
		V_1 = ((float)((float)L_3*(float)L_5));
		Transform_t406 * L_6 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		float L_7 = V_1;
		float L_8 = V_0;
		Vector3_t496  L_9 = {0};
		Vector3__ctor_m3807(&L_9, L_7, L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m3816(L_6, L_9, /*hidden argument*/NULL);
		MouseMove_ApplyWiggle_m3004(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseOrientation(UnityEngine.Vector3)
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseOrientation_m3003 (MouseMove_t487 * __this, Vector3_t496  ___oldPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t496  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t496  V_3 = {0};
	Vector3_t496  V_4 = {0};
	int32_t V_5 = {0};
	{
		int32_t L_0 = (__this->___phase_11);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_00b0;
		}
	}
	{
		Transform_t406 * L_1 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t496  L_2 = Transform_get_position_m3814(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = ((&V_3)->___x_1);
		float L_4 = ((&___oldPosition)->___x_1);
		Transform_t406 * L_5 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t496  L_6 = Transform_get_position_m3814(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = ((&V_4)->___y_2);
		float L_8 = ((&___oldPosition)->___y_2);
		Vector3__ctor_m3807((&V_1), ((float)((float)L_3-(float)L_4)), ((float)((float)L_7-(float)L_8)), (0.0f), /*hidden argument*/NULL);
		int32_t L_9 = (__this->___wiggleType_20);
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_10 = (__this->___wiggleType_20);
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0078;
		}
	}
	{
		float L_11 = Vector3_get_magnitude_m4037((&V_1), /*hidden argument*/NULL);
		float L_12 = (__this->___minDistanceToManuallyOrient_5);
		if ((!(((float)L_11) <= ((float)L_12))))
		{
			goto IL_008b;
		}
	}

IL_0078:
	{
		float L_13 = (__this->___mouseAngleDeg_6);
		float L_14 = (__this->___angleAdjustmentWhileRunning_16);
		V_0 = ((float)((float)L_13+(float)L_14));
		goto IL_00ab;
	}

IL_008b:
	{
		Vector3_t496  L_15 = Vector3_get_right_m4038(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t496  L_16 = V_1;
		float L_17 = Vector3_Angle_m4039(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
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
		goto IL_014a;
	}

IL_00b0:
	{
		float L_20 = (__this->___mouseAngleDeg_6);
		V_0 = L_20;
		V_2 = (0.0f);
		int32_t L_21 = (__this->___phase_11);
		V_5 = L_21;
		int32_t L_22 = V_5;
		if (L_22 == 0)
		{
			goto IL_00e1;
		}
		if (L_22 == 1)
		{
			goto IL_00ec;
		}
		if (L_22 == 2)
		{
			goto IL_0146;
		}
		if (L_22 == 3)
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0146;
	}

IL_00e1:
	{
		V_2 = (180.0f);
		goto IL_0146;
	}

IL_00ec:
	{
		float L_23 = (__this->___angleAdjustmentWhileRunning_16);
		float L_24 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = (__this->___phaseStartTime_12);
		MouseConfig_t559 * L_26 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_26);
		float L_27 = (L_26->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Lerp_m4040(NULL /*static, unused*/, (180.0f), L_23, ((float)((float)((float)((float)L_24-(float)L_25))/(float)L_27)), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_0146;
	}

IL_0119:
	{
		float L_29 = (__this->___zeroCenteredAngleAdjustmentWhileRunning_17);
		float L_30 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_31 = (__this->___phaseStartTime_12);
		MouseConfig_t559 * L_32 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_32);
		float L_33 = (L_32->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_34 = Mathf_Lerp_m4040(NULL /*static, unused*/, L_29, (0.0f), ((float)((float)((float)((float)L_30-(float)L_31))/(float)L_33)), /*hidden argument*/NULL);
		V_2 = L_34;
		goto IL_0146;
	}

IL_0146:
	{
		float L_35 = V_0;
		float L_36 = V_2;
		V_0 = ((float)((float)L_35+(float)L_36));
	}

IL_014a:
	{
		Transform_t406 * L_37 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		float L_38 = V_0;
		Quaternion_t737  L_39 = Quaternion_Euler_m3962(NULL /*static, unused*/, (0.0f), (0.0f), L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_rotation_m3919(L_37, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::ApplyWiggle()
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" void MouseMove_ApplyWiggle_m3004 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t496  V_3 = {0};
	int32_t V_4 = {0};
	{
		int32_t L_0 = (__this->___wiggleType_20);
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
		float L_1 = (__this->___mouseAngleDeg_6);
		float L_2 = (__this->___startAngleDeg_7);
		float L_3 = (__this->___endAngleDeg_8);
		float L_4 = (__this->___startAngleDeg_7);
		V_0 = ((float)((float)((float)((float)L_1-(float)L_2))/(float)((float)((float)L_3-(float)L_4))));
		float L_5 = V_0;
		float L_6 = (__this->___wiggleCycles_22);
		V_1 = ((float)((float)L_5*(float)L_6));
		float L_7 = V_1;
		V_2 = ((float)((float)((float)((float)L_7*(float)(2.0f)))*(float)(3.14159274f)));
		bool L_8 = (__this->___wiggleClockwise_23);
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
		Vector3__ctor_m3807((&V_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_10 = (__this->___wiggleType_20);
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
		float L_12 = (__this->___wiggleMagnitude_21);
		float L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_14 = sinf(L_13);
		Vector3__ctor_m3807((&V_3), ((float)((float)L_12*(float)L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_00a8:
	{
		float L_15 = (__this->___wiggleMagnitude_21);
		float L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_17 = sinf(L_16);
		Vector3__ctor_m3807((&V_3), (0.0f), ((float)((float)L_15*(float)L_17)), (0.0f), /*hidden argument*/NULL);
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
		float L_22 = (__this->___wiggleMagnitude_21);
		float L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_24 = cosf(((float)((float)(3.14159274f)+(float)L_23)));
		float L_25 = (__this->___wiggleMagnitude_21);
		float L_26 = (__this->___wiggleMagnitude_21);
		float L_27 = V_2;
		float L_28 = sinf(((-L_27)));
		Vector3__ctor_m3807((&V_3), ((float)((float)((float)((float)L_22*(float)L_24))+(float)L_25)), ((float)((float)L_26*(float)L_28)), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_0128:
	{
		float L_29 = (__this->___mouseAngleDeg_6);
		float L_30 = (__this->___angleAdjustmentWhileRunning_16);
		Vector3_t496  L_31 = {0};
		Vector3__ctor_m3807(&L_31, (0.0f), (0.0f), ((float)((float)L_29+(float)L_30)), /*hidden argument*/NULL);
		Quaternion_t737  L_32 = Quaternion_Euler_m4041(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Vector3_t496  L_33 = V_3;
		Vector3_t496  L_34 = Quaternion_op_Multiply_m4042(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		Transform_t406 * L_35 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		Transform_t406 * L_36 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t496  L_37 = Transform_get_position_m3814(L_36, /*hidden argument*/NULL);
		Vector3_t496  L_38 = V_3;
		Vector3_t496  L_39 = Vector3_op_Addition_m3960(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_m3816(L_35, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UpdateSlider()
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern "C" void MouseMove_UpdateSlider_m3005 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Color_t325  V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = (0.0f);
		int32_t L_0 = (__this->___phase_11);
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
		float L_2 = (__this->___mouseAngleDeg_6);
		float L_3 = (__this->___startAngleDeg_7);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_4 = fabsf(((float)((float)L_2-(float)L_3)));
		float L_5 = (__this->___startAngleDeg_7);
		float L_6 = (__this->___endAngleDeg_8);
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
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		Color_t325  L_9 = Utilities_TrafficLightColorLerp_m3391(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		TweakableSlider_t566 * L_10 = (__this->___tweakableSlider_19);
		NullCheck(L_10);
		Image_t463 * L_11 = (L_10->___fill_2);
		Color_t325  L_12 = V_1;
		NullCheck(L_11);
		Graphic_set_color_m4043(L_11, L_12, /*hidden argument*/NULL);
		Slider_t457 * L_13 = (__this->___sliderInstance_18);
		float L_14 = V_0;
		NullCheck(L_13);
		Slider_set_value_m3920(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPhase(MouseConfig/MovementPhaseType)
extern "C" void MouseMove_SetPhase_m3006 (MouseMove_t487 * __this, int32_t ___phase, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___phase_11);
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
		__this->___phase_11 = L_2;
		float L_3 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_12 = L_3;
		return;
	}
}
// System.Void MouseMove::FixedUpdate()
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern "C" void MouseMove_FixedUpdate_m3007 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = {0};
	{
		float L_0 = Time_get_deltaTime_m3957(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->___phase_11);
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
			goto IL_014b;
		}
		if (L_2 == 4)
		{
			goto IL_0172;
		}
	}
	{
		goto IL_018c;
	}

IL_002e:
	{
		float L_3 = (__this->___mouseRadius_9);
		float L_4 = V_0;
		float L_5 = (__this->___actualSpeedM_14);
		__this->___mouseRadius_9 = ((float)((float)L_3-(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___mouseRadius_9);
		float L_7 = (__this->___circlingRadius_10);
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_0078;
		}
	}
	{
		float L_8 = (__this->___circlingRadius_10);
		__this->___mouseRadius_9 = L_8;
		MouseMove_SetPhase_m3006(__this, 1, /*hidden argument*/NULL);
		Slider_t457 * L_9 = (__this->___sliderInstance_18);
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3529(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m3729(L_10, 1, /*hidden argument*/NULL);
	}

IL_0078:
	{
		goto IL_018c;
	}

IL_007d:
	{
		float L_11 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t559 * L_12 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_12);
		float L_13 = (L_12->___timeToTurn_2);
		float L_14 = (__this->___phaseStartTime_12);
		if ((!(((float)L_11) >= ((float)((float)((float)L_13+(float)L_14))))))
		{
			goto IL_009f;
		}
	}
	{
		MouseMove_SetPhase_m3006(__this, 2, /*hidden argument*/NULL);
	}

IL_009f:
	{
		goto IL_018c;
	}

IL_00a4:
	{
		float L_15 = (__this->___actualSpeedM_14);
		float L_16 = Time_get_deltaTime_m3957(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_15*(float)L_16));
		float L_17 = V_1;
		float L_18 = (__this->___mouseRadius_9);
		V_2 = ((float)((float)L_17/(float)L_18));
		float L_19 = V_2;
		V_3 = ((float)((float)L_19*(float)(57.29578f)));
		bool L_20 = (__this->___isClockwise_15);
		if (!L_20)
		{
			goto IL_00e0;
		}
	}
	{
		float L_21 = (__this->___mouseAngleDeg_6);
		float L_22 = V_3;
		__this->___mouseAngleDeg_6 = ((float)((float)L_21+(float)L_22));
		goto IL_00ee;
	}

IL_00e0:
	{
		float L_23 = (__this->___mouseAngleDeg_6);
		float L_24 = V_3;
		__this->___mouseAngleDeg_6 = ((float)((float)L_23-(float)L_24));
	}

IL_00ee:
	{
		bool L_25 = (__this->___isClockwise_15);
		if (!L_25)
		{
			goto IL_0122;
		}
	}
	{
		float L_26 = (__this->___mouseAngleDeg_6);
		float L_27 = (__this->___endAngleDeg_8);
		if ((!(((float)L_26) >= ((float)L_27))))
		{
			goto IL_011d;
		}
	}
	{
		float L_28 = (__this->___endAngleDeg_8);
		__this->___mouseAngleDeg_6 = L_28;
		MouseMove_SetPhase_m3006(__this, 3, /*hidden argument*/NULL);
	}

IL_011d:
	{
		goto IL_0146;
	}

IL_0122:
	{
		float L_29 = (__this->___mouseAngleDeg_6);
		float L_30 = (__this->___endAngleDeg_8);
		if ((!(((float)L_29) <= ((float)L_30))))
		{
			goto IL_0146;
		}
	}
	{
		float L_31 = (__this->___endAngleDeg_8);
		__this->___mouseAngleDeg_6 = L_31;
		MouseMove_SetPhase_m3006(__this, 3, /*hidden argument*/NULL);
	}

IL_0146:
	{
		goto IL_018c;
	}

IL_014b:
	{
		float L_32 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t559 * L_33 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_33);
		float L_34 = (L_33->___timeToTurn_2);
		float L_35 = (__this->___phaseStartTime_12);
		if ((!(((float)L_32) >= ((float)((float)((float)L_34+(float)L_35))))))
		{
			goto IL_016d;
		}
	}
	{
		MouseMove_SetPhase_m3006(__this, 4, /*hidden argument*/NULL);
	}

IL_016d:
	{
		goto IL_018c;
	}

IL_0172:
	{
		float L_36 = (__this->___mouseRadius_9);
		float L_37 = V_0;
		float L_38 = (__this->___actualSpeedM_14);
		__this->___mouseRadius_9 = ((float)((float)L_36+(float)((float)((float)L_37*(float)L_38))));
		goto IL_018c;
	}

IL_018c:
	{
		MouseMove_SetMouseTransform_m3001(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnKilled()
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t485_m4035_MethodInfo_var;
extern "C" void MouseMove_OnKilled_m3008 (MouseMove_t487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisDeadMouse_t485_m4035_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484209);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	DeadMouse_t485 * V_1 = {0};
	{
		MouseConfig_t559 * L_0 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_0);
		GameObject_t352 * L_1 = (L_0->___deadMousePrototype_14);
		Vector3_t496  L_2 = {0};
		Vector3__ctor_m3807(&L_2, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t737  L_3 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_4 = Object_Instantiate_m3914(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_4, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_5 = V_0;
		NullCheck(L_5);
		DeadMouse_t485 * L_6 = GameObject_GetComponent_TisDeadMouse_t485_m4035(L_5, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t485_m4035_MethodInfo_var);
		V_1 = L_6;
		DeadMouse_t485 * L_7 = V_1;
		NullCheck(L_7);
		DeadMouse_Configure_m2638(L_7, __this, /*hidden argument*/NULL);
		MouseMove_set_dead_m2987(__this, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_8 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		Object_Destroy_m3673(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnSafeExit()
extern "C" void MouseMove_OnSafeExit_m3009 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		Object_Destroy_m3673(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern TypeInfo* MaterialU5BU5D_t749_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseType_m3010 (MouseMove_t487 * __this, int32_t ___mt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		MaterialU5BU5D_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(539);
		s_Il2CppMethodIntialized = true;
	}
	MouseDesc_t560 * V_0 = {0};
	Vector3_t496  V_1 = {0};
	MaterialU5BU5D_t749* V_2 = {0};
	{
		int32_t L_0 = ___mt;
		MouseMove_set_mouseType_m2985(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t559 * L_1 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		int32_t L_2 = ___mt;
		NullCheck(L_1);
		MouseDesc_t560 * L_3 = MouseConfig_GetMouseDesc_m2949(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseDesc_t560 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = (L_4->___speed_4);
		__this->___baseSpeedM_13 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t496  L_7 = Transform_get_localScale_m3817(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector3_t496  L_8 = V_1;
		MouseDesc_t560 * L_9 = V_0;
		NullCheck(L_9);
		float L_10 = (L_9->___scale_5);
		Vector3_t496  L_11 = Vector3_op_Multiply_m3819(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		Transform_t406 * L_12 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		Vector3_t496  L_13 = V_1;
		NullCheck(L_12);
		Transform_set_localScale_m3818(L_12, L_13, /*hidden argument*/NULL);
		V_2 = ((MaterialU5BU5D_t749*)SZArrayNew(MaterialU5BU5D_t749_il2cpp_TypeInfo_var, 1));
		MaterialU5BU5D_t749* L_14 = V_2;
		MouseDesc_t560 * L_15 = V_0;
		NullCheck(L_15);
		Material_t482 * L_16 = (L_15->___mouseMaterial_3);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, L_16);
		*((Material_t482 **)(Material_t482 **)SZArrayLdElema(L_14, 0)) = (Material_t482 *)L_16;
		Renderer_t565 * L_17 = (__this->___mouseRenderer_3);
		MaterialU5BU5D_t749* L_18 = V_2;
		NullCheck(L_17);
		Renderer_set_materials_m4044(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m3011 (MouseMove_t487 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___phase_11);
		return L_0;
	}
}
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseHole/MouseHoleLocation,System.Boolean,System.Int32)
extern TypeInfo* MouseHole_t530_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t559_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetupMouse_m3012 (MouseMove_t487 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseHole_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		MouseConfig_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		bool L_0 = ___isClockwise;
		__this->___isClockwise_15 = L_0;
		bool L_1 = ___isClockwise;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->___angleAdjustmentWhileRunning_16 = (90.0f);
		__this->___zeroCenteredAngleAdjustmentWhileRunning_17 = (90.0f);
		goto IL_003e;
	}

IL_0028:
	{
		__this->___angleAdjustmentWhileRunning_16 = (270.0f);
		__this->___zeroCenteredAngleAdjustmentWhileRunning_17 = (-90.0f);
	}

IL_003e:
	{
		int32_t L_2 = ___originHole;
		IL2CPP_RUNTIME_CLASS_INIT(MouseHole_t530_il2cpp_TypeInfo_var);
		float L_3 = ((MouseHole_t530_StaticFields*)MouseHole_t530_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_4;
		__this->___startAngleDeg_7 = ((float)((float)(((float)L_2))*(float)L_3));
		int32_t L_4 = ___track;
		V_0 = ((float)((float)(((float)L_4))/(float)(2.0f)));
		MouseConfig_t559 * L_5 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_5);
		float L_6 = (L_5->___maxCirclingRadius_4);
		MouseConfig_t559 * L_7 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_7);
		float L_8 = (L_7->___minCirclingRadius_3);
		float L_9 = V_0;
		V_1 = ((float)((float)((float)((float)L_6-(float)L_8))*(float)L_9));
		MouseConfig_t559 * L_10 = ((MouseConfig_t559_StaticFields*)MouseConfig_t559_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		NullCheck(L_10);
		float L_11 = (L_10->___minCirclingRadius_3);
		float L_12 = V_1;
		__this->___circlingRadius_10 = ((float)((float)L_11+(float)L_12));
		int32_t L_13 = ___mouseType;
		MouseMove_SetMouseType_m3010(__this, L_13, /*hidden argument*/NULL);
		__this->___wiggleType_20 = 0;
		int32_t L_14 = ___mouseType;
		V_2 = ((int32_t)((int32_t)2+(int32_t)L_14));
		int32_t L_15 = V_2;
		float L_16 = ((MouseHole_t530_StaticFields*)MouseHole_t530_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_4;
		V_3 = ((float)((float)(((float)L_15))*(float)L_16));
		bool L_17 = ___isClockwise;
		if (!L_17)
		{
			goto IL_00b4;
		}
	}
	{
		float L_18 = (__this->___startAngleDeg_7);
		float L_19 = V_3;
		__this->___endAngleDeg_8 = ((float)((float)L_18+(float)L_19));
		goto IL_00f6;
	}

IL_00b4:
	{
		float L_20 = (__this->___startAngleDeg_7);
		float L_21 = V_3;
		__this->___endAngleDeg_8 = ((float)((float)L_20-(float)L_21));
		float L_22 = (__this->___endAngleDeg_8);
		if ((!(((float)L_22) < ((float)(0.0f)))))
		{
			goto IL_00f6;
		}
	}
	{
		float L_23 = (__this->___startAngleDeg_7);
		__this->___startAngleDeg_7 = ((float)((float)L_23+(float)(360.0f)));
		float L_24 = (__this->___endAngleDeg_8);
		__this->___endAngleDeg_8 = ((float)((float)L_24+(float)(360.0f)));
	}

IL_00f6:
	{
		return;
	}
}
// System.Void MouseMove::AddWiggle(MouseConfig/MouseWiggleType,System.Single,System.Int32,System.Boolean)
extern "C" void MouseMove_AddWiggle_m3013 (MouseMove_t487 * __this, int32_t ___wiggleType, float ___wiggleMagnitude, int32_t ___wiggleCycles, bool ___wiggleClockwise, const MethodInfo* method)
{
	{
		int32_t L_0 = ___wiggleType;
		__this->___wiggleType_20 = L_0;
		float L_1 = ___wiggleMagnitude;
		__this->___wiggleMagnitude_21 = L_1;
		int32_t L_2 = ___wiggleCycles;
		__this->___wiggleCycles_22 = (((float)L_2));
		bool L_3 = ___wiggleClockwise;
		__this->___wiggleClockwise_23 = L_3;
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
extern "C" void MouseSpawnEventHandler__ctor_m3014 (MouseSpawnEventHandler_t567 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke()
extern "C" void MouseSpawnEventHandler_Invoke_m3015 (MouseSpawnEventHandler_t567 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MouseSpawnEventHandler_Invoke_m3015((MouseSpawnEventHandler_t567 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MouseSpawnEventHandler_t567(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseSpawnFromData/MouseSpawnEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MouseSpawnEventHandler_BeginInvoke_m3016 (MouseSpawnEventHandler_t567 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseSpawnEventHandler_EndInvoke_m3017 (MouseSpawnEventHandler_t567 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromData.h"
#ifndef _MSC_VER
#else
#endif
// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromDataMethodDeclarations.h"

struct GameObject_t352;
struct MouseMove_t487;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
// !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
#define GameObject_GetComponent_TisMouseMove_t487_m4045(__this, method) (( MouseMove_t487 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m3018 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	{
		__this->___initialSpawnDelta_2 = (1.0f);
		__this->___maxRandomDelay_5 = (4.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_add_MouseSpawn_m3019 (MouseSpawnFromData_t510 * __this, MouseSpawnEventHandler_t567 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t567 * L_0 = (__this->___MouseSpawn_10);
		MouseSpawnEventHandler_t567 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_10 = ((MouseSpawnEventHandler_t567 *)Castclass(L_2, MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m3020 (MouseSpawnFromData_t510 * __this, MouseSpawnEventHandler_t567 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t567 * L_0 = (__this->___MouseSpawn_10);
		MouseSpawnEventHandler_t567 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_10 = ((MouseSpawnEventHandler_t567 *)Castclass(L_2, MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m3021 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmiceSpawnedU3Ek__BackingField_11);
		return L_0;
	}
}
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m3022 (MouseSpawnFromData_t510 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmiceSpawnedU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void MouseSpawnFromData::Awake()
extern TypeInfo* MouseSpawnFromData_t510_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_Awake_m3023 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseSpawnFromData_t510_StaticFields*)MouseSpawnFromData_t510_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m3024 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_RegisterForEvents_m3026(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m3025 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_UnregisterForEvents_m3027(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m3028_MethodInfo_var;
extern "C" void MouseSpawnFromData_RegisterForEvents_m3026 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		MouseSpawnFromData_OnPhaseChanged_m3028_MethodInfo_var = il2cpp_codegen_method_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t517 * L_0 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)MouseSpawnFromData_OnPhaseChanged_m3028_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_2 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m2783(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_9 = 1;
		return;
	}
}
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m3028_MethodInfo_var;
extern "C" void MouseSpawnFromData_UnregisterForEvents_m3027 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		MouseSpawnFromData_OnPhaseChanged_m3028_MethodInfo_var = il2cpp_codegen_method_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_9);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSpawnFromData_OnPhaseChanged_m3028_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2784(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m3028 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m3029 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		GamePhaseState_t517 * L_0 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m2796(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		float L_2 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		MouseSpawnFromData_MaybeProduceNextMouse_m3030(__this, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m3030 (MouseSpawnFromData_t510 * __this, float ___timeNow, const MethodInfo* method)
{
	ExplicitMouseDesc_t497 * V_0 = {0};
	{
		List_1_t537 * L_0 = (__this->___miceDesc_6);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t537 * L_1 = (__this->___miceDesc_6);
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
		float L_4 = (__this->___nextSpawnTime_7);
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
		List_1_t537 * L_5 = (__this->___miceDesc_6);
		NullCheck(L_5);
		ExplicitMouseDesc_t497 * L_6 = (ExplicitMouseDesc_t497 *)VirtFuncInvoker1< ExplicitMouseDesc_t497 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_5, 0);
		V_0 = L_6;
		List_1_t537 * L_7 = (__this->___miceDesc_6);
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32) */, L_7, 0);
		ExplicitMouseDesc_t497 * L_8 = V_0;
		MouseSpawnFromData_ProduceMouse_m3031(__this, L_8, /*hidden argument*/NULL);
		float L_9 = ___timeNow;
		ExplicitMouseDesc_t497 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___delayToNextMouse_4);
		__this->___nextSpawnTime_7 = ((float)((float)L_9+(float)L_11));
		return;
	}
}
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseMove_t487_m4045_MethodInfo_var;
extern "C" void MouseSpawnFromData_ProduceMouse_m3031 (MouseSpawnFromData_t510 * __this, ExplicitMouseDesc_t497 * ___emd, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisMouseMove_t487_m4045_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484211);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	MouseMove_t487 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___mousePrototype_8);
		Vector3_t496  L_1 = {0};
		Vector3__ctor_m3807(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t737  L_2 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_3 = Object_Instantiate_m3914(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		MouseMove_t487 * L_5 = GameObject_GetComponent_TisMouseMove_t487_m4045(L_4, /*hidden argument*/GameObject_GetComponent_TisMouseMove_t487_m4045_MethodInfo_var);
		V_1 = L_5;
		MouseMove_t487 * L_6 = V_1;
		ExplicitMouseDesc_t497 * L_7 = ___emd;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___mouseType_0);
		ExplicitMouseDesc_t497 * L_9 = ___emd;
		NullCheck(L_9);
		int32_t L_10 = (L_9->___mouseHoleLocation_1);
		ExplicitMouseDesc_t497 * L_11 = ___emd;
		NullCheck(L_11);
		bool L_12 = (L_11->___isClockwise_2);
		ExplicitMouseDesc_t497 * L_13 = ___emd;
		NullCheck(L_13);
		int32_t L_14 = (L_13->___track_3);
		NullCheck(L_6);
		MouseMove_SetupMouse_m3012(L_6, L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		ExplicitMouseDesc_t497 * L_15 = ___emd;
		NullCheck(L_15);
		int32_t L_16 = ExplicitMouseDesc_get_wiggleType_m2685(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		MouseMove_t487 * L_17 = V_1;
		ExplicitMouseDesc_t497 * L_18 = ___emd;
		NullCheck(L_18);
		int32_t L_19 = ExplicitMouseDesc_get_wiggleType_m2685(L_18, /*hidden argument*/NULL);
		ExplicitMouseDesc_t497 * L_20 = ___emd;
		NullCheck(L_20);
		float L_21 = ExplicitMouseDesc_get_wiggleMagnitude_m2687(L_20, /*hidden argument*/NULL);
		ExplicitMouseDesc_t497 * L_22 = ___emd;
		NullCheck(L_22);
		int32_t L_23 = ExplicitMouseDesc_get_wiggleCycles_m2689(L_22, /*hidden argument*/NULL);
		ExplicitMouseDesc_t497 * L_24 = ___emd;
		NullCheck(L_24);
		bool L_25 = ExplicitMouseDesc_get_wiggleClockwise_m2691(L_24, /*hidden argument*/NULL);
		NullCheck(L_17);
		MouseMove_AddWiggle_m3013(L_17, L_19, L_21, L_23, L_25, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_26 = MouseSpawnFromData_get_miceSpawned_m3021(__this, /*hidden argument*/NULL);
		MouseSpawnFromData_set_miceSpawned_m3022(__this, ((int32_t)((int32_t)L_26+(int32_t)1)), /*hidden argument*/NULL);
		MouseSpawnEventHandler_t567 * L_27 = (__this->___MouseSpawn_10);
		if (!L_27)
		{
			goto IL_009c;
		}
	}
	{
		MouseSpawnEventHandler_t567 * L_28 = (__this->___MouseSpawn_10);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke() */, L_28);
	}

IL_009c:
	{
		return;
	}
}
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m3032 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	{
		List_1_t537 * L_0 = (__this->___miceDesc_6);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_0);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void MouseSpawnFromData::Clear()
extern TypeInfo* List_1_t537_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3990_MethodInfo_var;
extern "C" void MouseSpawnFromData_Clear_m3033 (MouseSpawnFromData_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		List_1__ctor_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t537 * L_0 = (List_1_t537 *)il2cpp_codegen_object_new (List_1_t537_il2cpp_TypeInfo_var);
		List_1__ctor_m3990(L_0, /*hidden argument*/List_1__ctor_m3990_MethodInfo_var);
		__this->___miceDesc_6 = L_0;
		MouseSpawnFromData_set_miceSpawned_m3022(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern const MethodInfo* List_1_AddRange_m4017_MethodInfo_var;
extern "C" void MouseSpawnFromData_AddMice_m3034 (MouseSpawnFromData_t510 * __this, List_1_t537 * ___explicitMice, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m4017_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484190);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t537 * L_0 = (__this->___miceDesc_6);
		List_1_t537 * L_1 = ___explicitMice;
		NullCheck(L_0);
		List_1_AddRange_m4017(L_0, L_1, /*hidden argument*/List_1_AddRange_m4017_MethodInfo_var);
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
extern "C" void MouseSpawnTracker__ctor_m3035 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::Start()
extern "C" void MouseSpawnTracker_Start_m3036 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_RegisterForEvents_m3038(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateLevelConfig_m3042(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateSlider_m3043(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::OnDestroy()
extern "C" void MouseSpawnTracker_OnDestroy_m3037 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UnregisterForEvents_m3039(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::RegisterForEvents()
extern TypeInfo* MouseSpawnFromData_t510_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnMouseSpawned_m3041_MethodInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnLevelChanged_m3040_MethodInfo_var;
extern "C" void MouseSpawnTracker_RegisterForEvents_m3038 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		MouseSpawnTracker_OnMouseSpawned_m3041_MethodInfo_var = il2cpp_codegen_method_info_from_index(564);
		MouseSpawnTracker_OnLevelChanged_m3040_MethodInfo_var = il2cpp_codegen_method_info_from_index(565);
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
		MouseSpawnFromData_t510 * L_1 = ((MouseSpawnFromData_t510_StaticFields*)MouseSpawnFromData_t510_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_2 = { (void*)MouseSpawnTracker_OnMouseSpawned_m3041_MethodInfo_var };
		MouseSpawnEventHandler_t567 * L_3 = (MouseSpawnEventHandler_t567 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_add_MouseSpawn_m3019(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t513 * L_4 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseSpawnTracker_OnLevelChanged_m3040_MethodInfo_var };
		GameLevelChangedEventHandler_t512 * L_6 = (GameLevelChangedEventHandler_t512 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2752(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_add_GameLevelChanged_m2757(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::UnregisterForEvents()
extern TypeInfo* MouseSpawnFromData_t510_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnMouseSpawned_m3041_MethodInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnLevelChanged_m3040_MethodInfo_var;
extern "C" void MouseSpawnTracker_UnregisterForEvents_m3039 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		MouseSpawnTracker_OnMouseSpawned_m3041_MethodInfo_var = il2cpp_codegen_method_info_from_index(564);
		MouseSpawnTracker_OnLevelChanged_m3040_MethodInfo_var = il2cpp_codegen_method_info_from_index(565);
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
		MouseSpawnFromData_t510 * L_1 = ((MouseSpawnFromData_t510_StaticFields*)MouseSpawnFromData_t510_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_2 = { (void*)MouseSpawnTracker_OnMouseSpawned_m3041_MethodInfo_var };
		MouseSpawnEventHandler_t567 * L_3 = (MouseSpawnEventHandler_t567 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t567_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_remove_MouseSpawn_m3020(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t513 * L_4 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseSpawnTracker_OnLevelChanged_m3040_MethodInfo_var };
		GameLevelChangedEventHandler_t512 * L_6 = (GameLevelChangedEventHandler_t512 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2752(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_remove_GameLevelChanged_m2758(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void MouseSpawnTracker::OnLevelChanged()
extern "C" void MouseSpawnTracker_OnLevelChanged_m3040 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UpdateLevelConfig_m3042(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateSlider_m3043(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::OnMouseSpawned()
extern "C" void MouseSpawnTracker_OnMouseSpawned_m3041 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UpdateSlider_m3043(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::UpdateLevelConfig()
extern "C" void MouseSpawnTracker_UpdateLevelConfig_m3042 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	LevelDescription_t543 * V_1 = {0};
	{
		GameLevelState_t513 * L_0 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m2759(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		LevelConfig_t550 * L_3 = LevelConfig_get_instance_m2898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		LevelDescription_t543 * L_4 = LevelConfig_GetCurrentLevelDescription_m2906(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		LevelDescription_t543 * L_5 = V_1;
		NullCheck(L_5);
		List_1_t537 * L_6 = (L_5->___explicitMouseDescs_1);
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
extern TypeInfo* MouseSpawnFromData_t510_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnTracker_UpdateSlider_m3043 (MouseSpawnTracker_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		MouseSpawnFromData_t510 * L_0 = ((MouseSpawnFromData_t510_StaticFields*)MouseSpawnFromData_t510_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		int32_t L_1 = MouseSpawnFromData_get_miceSpawned_m3021(L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___miceThisLevel_4);
		V_0 = ((float)((float)(((float)L_1))/(float)(((float)L_2))));
		Slider_t457 * L_3 = (__this->___slider_3);
		float L_4 = V_0;
		NullCheck(L_3);
		Slider_set_value_m3920(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void MouseWiggleDesc::.ctor(System.String,System.Single,System.Single,System.Int32,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t472_m3937_MethodInfo_var;
extern "C" void MouseWiggleDesc__ctor_m3044 (MouseWiggleDesc_t569 * __this, String_t* ___introScreenImageName, float ___minMagnitude, float ___maxMagnitude, int32_t ___minCycles, int32_t ___maxCycles, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t472_m3937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484131);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___introScreenImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1062, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t472 * L_3 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
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
extern "C" void MusicButton__ctor_m3045 (MusicButton_t570 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t472_m3937_MethodInfo_var;
extern "C" void MusicButton_Awake_m3046 (MusicButton_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t472_m3937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484131);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1063;
		String_t* L_0 = V_0;
		Sprite_t472 * L_1 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		__this->___onSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1064;
		String_t* L_2 = V_0;
		Sprite_t472 * L_3 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		__this->___offSprite_4 = L_3;
		return;
	}
}
// System.Void MusicButton::Start()
extern "C" void MusicButton_Start_m3047 (MusicButton_t570 * __this, const MethodInfo* method)
{
	{
		MusicButton_RegisterForEvents_m3049(__this, /*hidden argument*/NULL);
		MusicButton_UpdateButtonImage_m3052(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::OnDestroy()
extern "C" void MusicButton_OnDestroy_m3048 (MusicButton_t570 * __this, const MethodInfo* method)
{
	{
		MusicButton_UnregisterForEvents_m3050(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::RegisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3051_MethodInfo_var;
extern "C" void MusicButton_RegisterForEvents_m3049 (MusicButton_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		MusicButton_OnMusicMuteChanged_m3051_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3051_MethodInfo_var };
		MusicMuteChangedEventHandler_t610 * L_3 = (MusicMuteChangedEventHandler_t610 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3290(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_MusicMuteChanged_m3297(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UnregisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3051_MethodInfo_var;
extern "C" void MusicButton_UnregisterForEvents_m3050 (MusicButton_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		MusicButton_OnMusicMuteChanged_m3051_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3051_MethodInfo_var };
		MusicMuteChangedEventHandler_t610 * L_3 = (MusicMuteChangedEventHandler_t610 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3290(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_MusicMuteChanged_m3298(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MusicButton::OnMusicMuteChanged()
extern "C" void MusicButton_OnMusicMuteChanged_m3051 (MusicButton_t570 * __this, const MethodInfo* method)
{
	{
		MusicButton_UpdateButtonImage_m3052(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UpdateButtonImage()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void MusicButton_UpdateButtonImage_m3052 (MusicButton_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3301(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t463 * L_2 = (__this->___buttonImage_5);
		Sprite_t472 * L_3 = (__this->___offSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m3925(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t463 * L_4 = (__this->___buttonImage_5);
		Sprite_t472 * L_5 = (__this->___onSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m3925(L_4, L_5, /*hidden argument*/NULL);
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
extern "C" void U3CPlayMusicU3Ec__Iterator17__ctor_m3053 (U3CPlayMusicU3Ec__Iterator17_t573 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object MusicPlayer/<PlayMusic>c__Iterator17::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayMusicU3Ec__Iterator17_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3054 (U3CPlayMusicU3Ec__Iterator17_t573 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object MusicPlayer/<PlayMusic>c__Iterator17::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayMusicU3Ec__Iterator17_System_Collections_IEnumerator_get_Current_m3055 (U3CPlayMusicU3Ec__Iterator17_t573 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean MusicPlayer/<PlayMusic>c__Iterator17::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayMusicU3Ec__Iterator17_MoveNext_m3056 (U3CPlayMusicU3Ec__Iterator17_t573 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
		WaitForSeconds_t738 * L_2 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_2, (0.5f), /*hidden argument*/NULL);
		__this->___U24current_2 = L_2;
		__this->___U24PC_1 = 1;
		goto IL_0078;
	}

IL_003d:
	{
		MusicPlayer_t572 * L_3 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		L_3->___playCuedMusic_6 = (Object_t *)NULL;
		AudioSource_t571 * L_4 = (__this->___music_0);
		MusicPlayer_t572 * L_5 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_5);
		AudioSource_t571 * L_6 = (L_5->___currentMusic_5);
		bool L_7 = Object_op_Equality_m3554(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		AudioSource_t571 * L_8 = (__this->___music_0);
		NullCheck(L_8);
		AudioSource_Play_m4046(L_8, /*hidden argument*/NULL);
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
extern "C" void U3CPlayMusicU3Ec__Iterator17_Dispose_m3057 (U3CPlayMusicU3Ec__Iterator17_t573 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void MusicPlayer/<PlayMusic>c__Iterator17::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CPlayMusicU3Ec__Iterator17_Reset_m3058 (U3CPlayMusicU3Ec__Iterator17_t573 * __this, const MethodInfo* method)
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
extern "C" void MusicPlayer__ctor_m3059 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m3060 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_RegisterForEvents_m3062(__this, /*hidden argument*/NULL);
		MusicPlayer_UpdateAllMusic_m3066(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m3061 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UnregisterForEvents_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3064_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3065_MethodInfo_var;
extern "C" void MusicPlayer_RegisterForEvents_m3062 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		MusicPlayer_OnGamePhaseChanged_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(567);
		MusicPlayer_OnMusicMuteChanged_m3065_MethodInfo_var = il2cpp_codegen_method_info_from_index(568);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3064_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2783(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t611 * L_4 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3065_MethodInfo_var };
		MusicMuteChangedEventHandler_t610 * L_6 = (MusicMuteChangedEventHandler_t610 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3290(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_add_MusicMuteChanged_m3297(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3064_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3065_MethodInfo_var;
extern "C" void MusicPlayer_UnregisterForEvents_m3063 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		MusicPlayer_OnGamePhaseChanged_m3064_MethodInfo_var = il2cpp_codegen_method_info_from_index(567);
		MusicPlayer_OnMusicMuteChanged_m3065_MethodInfo_var = il2cpp_codegen_method_info_from_index(568);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3064_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2784(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t611 * L_4 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3065_MethodInfo_var };
		MusicMuteChangedEventHandler_t610 * L_6 = (MusicMuteChangedEventHandler_t610 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3290(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_remove_MusicMuteChanged_m3298(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m3064 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m3065 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3066(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::UpdateAllMusic()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void MusicPlayer_UpdateAllMusic_m3066 (MusicPlayer_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t571 * V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = (AudioSource_t571 *)NULL;
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3301(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		GamePhaseState_t517 * L_2 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m2785(L_2, /*hidden argument*/NULL);
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
		AudioSource_t571 * L_5 = (__this->___gameMusic_3);
		V_0 = L_5;
		goto IL_0051;
	}

IL_0045:
	{
		AudioSource_t571 * L_6 = (__this->___menuMusic_4);
		V_0 = L_6;
		goto IL_0051;
	}

IL_0051:
	{
		AudioSource_t571 * L_7 = V_0;
		AudioSource_t571 * L_8 = (__this->___currentMusic_5);
		bool L_9 = Object_op_Equality_m3554(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
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
		AudioSource_t571 * L_10 = (__this->___currentMusic_5);
		bool L_11 = Object_op_Inequality_m3450(NULL /*static, unused*/, L_10, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		AudioSource_t571 * L_12 = (__this->___currentMusic_5);
		NullCheck(L_12);
		bool L_13 = AudioSource_get_isPlaying_m4047(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		AudioSource_t571 * L_14 = (__this->___currentMusic_5);
		NullCheck(L_14);
		AudioSource_Stop_m3773(L_14, /*hidden argument*/NULL);
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
		MonoBehaviour_StopCoroutine_m3936(__this, L_16, /*hidden argument*/NULL);
		__this->___playCuedMusic_6 = (Object_t *)NULL;
	}

IL_00ad:
	{
		__this->___currentMusic_5 = (AudioSource_t571 *)NULL;
		AudioSource_t571 * L_17 = V_0;
		bool L_18 = Object_op_Implicit_m3872(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e0;
		}
	}
	{
		AudioSource_t571 * L_19 = V_0;
		__this->___currentMusic_5 = L_19;
		AudioSource_t571 * L_20 = V_0;
		Object_t * L_21 = MusicPlayer_PlayMusic_m3067(__this, L_20, /*hidden argument*/NULL);
		__this->___playCuedMusic_6 = L_21;
		Object_t * L_22 = (__this->___playCuedMusic_6);
		MonoBehaviour_StartCoroutine_m3492(__this, L_22, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		return;
	}
}
// System.Collections.IEnumerator MusicPlayer::PlayMusic(UnityEngine.AudioSource)
extern TypeInfo* U3CPlayMusicU3Ec__Iterator17_t573_il2cpp_TypeInfo_var;
extern "C" Object_t * MusicPlayer_PlayMusic_m3067 (MusicPlayer_t572 * __this, AudioSource_t571 * ___music, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayMusicU3Ec__Iterator17_t573_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayMusicU3Ec__Iterator17_t573 * V_0 = {0};
	{
		U3CPlayMusicU3Ec__Iterator17_t573 * L_0 = (U3CPlayMusicU3Ec__Iterator17_t573 *)il2cpp_codegen_object_new (U3CPlayMusicU3Ec__Iterator17_t573_il2cpp_TypeInfo_var);
		U3CPlayMusicU3Ec__Iterator17__ctor_m3053(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayMusicU3Ec__Iterator17_t573 * L_1 = V_0;
		AudioSource_t571 * L_2 = ___music;
		NullCheck(L_1);
		L_1->___music_0 = L_2;
		U3CPlayMusicU3Ec__Iterator17_t573 * L_3 = V_0;
		AudioSource_t571 * L_4 = ___music;
		NullCheck(L_3);
		L_3->___U3CU24U3Emusic_3 = L_4;
		U3CPlayMusicU3Ec__Iterator17_t573 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CPlayMusicU3Ec__Iterator17_t573 * L_6 = V_0;
		return L_6;
	}
}
// OnMouseEntersHole
#include "AssemblyU2DCSharp_OnMouseEntersHole.h"
#ifndef _MSC_VER
#else
#endif
// OnMouseEntersHole
#include "AssemblyU2DCSharp_OnMouseEntersHoleMethodDeclarations.h"

struct Utilities_t628;
struct MouseMove_t487;
struct GameObject_t352;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t628;
struct Object_t;
struct GameObject_t352;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m3953_gshared (Object_t * __this /* static, unused */, GameObject_t352 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m3953(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m3953_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952(__this /* static, unused */, p0, method) (( MouseMove_t487 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m3953_gshared)(__this /* static, unused */, p0, method)


// System.Void OnMouseEntersHole::.ctor()
extern "C" void OnMouseEntersHole__ctor_m3068 (OnMouseEntersHole_t574 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnMouseEntersHole::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t489_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952_MethodInfo_var;
extern "C" void OnMouseEntersHole_OnTriggerEnter2D_m3069 (OnMouseEntersHole_t574 * __this, Collider2D_t579 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		DeadMouseRelay_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484138);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t487 * V_0 = {0};
	{
		Collider2D_t579 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m3954(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral971, /*hidden argument*/NULL);
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
		Collider2D_t579 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3529(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		MouseMove_t487 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t487 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m3872(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
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
		MouseMove_t487 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MouseMove_GetMousePhase_m3011(L_8, /*hidden argument*/NULL);
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
		MouseMove_t487 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = MouseMove_get_isPoisoned_m2988(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		MouseHole_t530 * L_12 = (__this->___mouseHole_2);
		NullCheck(L_12);
		MouseHole_ClearNMice_m2975(L_12, 1, /*hidden argument*/NULL);
		DeadMouseRelay_t489 * L_13 = ((DeadMouseRelay_t489_StaticFields*)DeadMouseRelay_t489_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		MouseMove_t487 * L_14 = V_0;
		NullCheck(L_13);
		DeadMouseRelay_HandleMouseKill_m2656(L_13, L_14, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0062:
	{
		MouseHole_t530 * L_15 = (__this->___mouseHole_2);
		MouseMove_t487 * L_16 = V_0;
		NullCheck(L_15);
		MouseHole_SaveMouse_m2977(L_15, L_16, /*hidden argument*/NULL);
	}

IL_006e:
	{
		return;
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
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandler.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// Parse.ParseAnalytics
#include "Parse_Unity_Parse_ParseAnalyticsMethodDeclarations.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandlerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"


// System.Void ParseAnalyticsController::.ctor()
extern "C" void ParseAnalyticsController__ctor_m3070 (ParseAnalyticsController_t575 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::Start()
extern "C" void ParseAnalyticsController_Start_m3071 (ParseAnalyticsController_t575 * __this, const MethodInfo* method)
{
	{
		ParseAnalytics_TrackAppOpenedAsync_m4048(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseAnalyticsController_RegisterForEvents_m3073(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnDestroy()
extern "C" void ParseAnalyticsController_OnDestroy_m3072 (ParseAnalyticsController_t575 * __this, const MethodInfo* method)
{
	{
		ParseAnalyticsController_UnregisterForEvents_m3074(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t469_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3076_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3075_MethodInfo_var;
extern "C" void ParseAnalyticsController_RegisterForEvents_m3073 (ParseAnalyticsController_t575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		BoostActiveEventHandler_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		ParseAnalyticsController_OnGamePhaseChanged_m3076_MethodInfo_var = il2cpp_codegen_method_info_from_index(569);
		ParseAnalyticsController_OnBoostActive_m3075_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3076_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2783(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t456 * L_4 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3075_MethodInfo_var };
		BoostActiveEventHandler_t469 * L_6 = (BoostActiveEventHandler_t469 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t469_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2575(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2586(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t469_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3076_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3075_MethodInfo_var;
extern "C" void ParseAnalyticsController_UnregisterForEvents_m3074 (ParseAnalyticsController_t575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		BoostActiveEventHandler_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		ParseAnalyticsController_OnGamePhaseChanged_m3076_MethodInfo_var = il2cpp_codegen_method_info_from_index(569);
		ParseAnalyticsController_OnBoostActive_m3075_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3076_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2784(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t456 * L_4 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3075_MethodInfo_var };
		BoostActiveEventHandler_t469 * L_6 = (BoostActiveEventHandler_t469 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t469_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2575(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2587(L_4, L_6, /*hidden argument*/NULL);
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
extern TypeInfo* BoostType_t468_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3468_MethodInfo_var;
extern "C" void ParseAnalyticsController_OnBoostActive_m3075 (ParseAnalyticsController_t575 * __this, int32_t ___bType, int32_t ___oldType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		BoostType_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		Dictionary_2__ctor_m3468_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	{
		int32_t L_0 = ___bType;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
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
		Dictionary_2__ctor_m3468(L_1, /*hidden argument*/Dictionary_2__ctor_m3468_MethodInfo_var);
		V_0 = L_1;
		Dictionary_2_t122 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t517 * L_4 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_instancesFinishedThisSession_m2787(L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m409(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral1065, L_8);
		Dictionary_2_t122 * L_9 = V_0;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t517 * L_11 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = GamePhaseState_get_instancesFinishedEver_m2789(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m409(NULL /*static, unused*/, L_10, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral1066, L_15);
		Dictionary_2_t122 * L_16 = V_0;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t513 * L_18 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = GameLevelState_get_gameLevel_m2759(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_m409(NULL /*static, unused*/, L_17, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_16, (String_t*) &_stringLiteral1067, L_22);
		Dictionary_2_t122 * L_23 = V_0;
		String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_25 = ___bType;
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(BoostType_t468_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral1068, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t475 * L_31 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_32 = ___bType;
		NullCheck(L_31);
		int32_t L_33 = PlayerStats_GetPurchasedBoostCount_m3179(L_31, L_32, /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = String_Concat_m409(NULL /*static, unused*/, L_30, L_35, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1069, L_36);
		Dictionary_2_t122 * L_37 = V_0;
		ParseAnalytics_TrackEventAsync_m4049(NULL /*static, unused*/, (String_t*) &_stringLiteral1070, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnGamePhaseChanged()
extern "C" void ParseAnalyticsController_OnGamePhaseChanged_m3076 (ParseAnalyticsController_t575 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ParseAnalyticsController::LogGameOverEvent()
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3468_MethodInfo_var;
extern "C" void ParseAnalyticsController_LogGameOverEvent_m3077 (ParseAnalyticsController_t575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Dictionary_2__ctor_m3468_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
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
		Dictionary_2__ctor_m3468(L_0, /*hidden argument*/Dictionary_2__ctor_m3468_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t122 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t517 * L_3 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GamePhaseState_get_instancesFinishedThisSession_m2787(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m409(NULL /*static, unused*/, L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral1065, L_7);
		Dictionary_2_t122 * L_8 = V_0;
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t517 * L_10 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = GamePhaseState_get_instancesFinishedEver_m2789(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m409(NULL /*static, unused*/, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral1066, L_14);
		Dictionary_2_t122 * L_15 = V_0;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t475 * L_17 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = PlayerStats_get_gameScore_m3162(L_17, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_m409(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral542, L_21);
		Dictionary_2_t122 * L_22 = V_0;
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t475 * L_24 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = PlayerStats_get_money_m3164(L_24, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_22, (String_t*) &_stringLiteral1071, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t513 * L_31 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = GameLevelState_get_gameLevel_m2759(L_31, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35 = String_Concat_m409(NULL /*static, unused*/, L_30, L_34, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1067, L_35);
		Dictionary_2_t122 * L_36 = V_0;
		PlayerStats_t475 * L_37 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = PlayerStats_GetHighScore_m3183(L_37, /*hidden argument*/NULL);
		PlayerStats_t475 * L_39 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40 = PlayerStats_get_gameScore_m3162(L_39, /*hidden argument*/NULL);
		G_B1_0 = (String_t*) &_stringLiteral1072;
		G_B1_1 = L_36;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_40))))
		{
			G_B2_0 = (String_t*) &_stringLiteral1072;
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
		ParseAnalytics_TrackEventAsync_m4049(NULL /*static, unused*/, (String_t*) &_stringLiteral1073, L_41, /*hidden argument*/NULL);
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

// PausedOverlay
#include "AssemblyU2DCSharp_PausedOverlay.h"
// PausedOverlay
#include "AssemblyU2DCSharp_PausedOverlayMethodDeclarations.h"


// System.Void PausePlayToggle::.ctor()
extern "C" void PausePlayToggle__ctor_m3078 (PausePlayToggle_t576 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::TogglePausePlay()
extern TypeInfo* TimeController_t613_il2cpp_TypeInfo_var;
extern TypeInfo* PausedOverlay_t577_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_TogglePausePlay_m3079 (PausePlayToggle_t576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		PausedOverlay_t577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t613 * L_0 = ((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m3320(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TimeController_t613 * L_2 = ((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		TimeController_UnPauseTime_m3324(L_2, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_001e:
	{
		TimeController_t613 * L_3 = ((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_PauseTime_m3323(L_3, /*hidden argument*/NULL);
		PausedOverlay_t577 * L_4 = ((PausedOverlay_t577_StaticFields*)PausedOverlay_t577_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_4);
		PausedOverlay_ShowBigPlayButton_m3087(L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandler.h"
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandlerMethodDeclarations.h"


// System.Void PausedOverlay::.ctor()
extern "C" void PausedOverlay__ctor_m3080 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Awake()
extern TypeInfo* PausedOverlay_t577_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_Awake_m3081 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PausedOverlay_t577_StaticFields*)PausedOverlay_t577_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		__this->___registeredForEvents_6 = 0;
		Button_t461 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3529(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3729(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Start()
extern "C" void PausedOverlay_Start_m3082 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_RegisterForEvents_m3083(__this, /*hidden argument*/NULL);
		PausedOverlay_UpdateUX_m3086(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::RegisterForEvents()
extern TypeInfo* TimeController_t613_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t612_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3085_MethodInfo_var;
extern "C" void PausedOverlay_RegisterForEvents_m3083 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		PauseChangedEventHandler_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		PausedOverlay_OnPauseChanged_m3085_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t613 * L_0 = ((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_1 = { (void*)PausedOverlay_OnPauseChanged_m3085_MethodInfo_var };
		PauseChangedEventHandler_t612 * L_2 = (PauseChangedEventHandler_t612 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t612_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m3313(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TimeController_add_PauseChanged_m3318(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_6 = 1;
		return;
	}
}
// System.Void PausedOverlay::UnregisterForEvents()
extern TypeInfo* TimeController_t613_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t612_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3085_MethodInfo_var;
extern "C" void PausedOverlay_UnregisterForEvents_m3084 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		PauseChangedEventHandler_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		PausedOverlay_OnPauseChanged_m3085_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
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
		TimeController_t613 * L_1 = ((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)PausedOverlay_OnPauseChanged_m3085_MethodInfo_var };
		PauseChangedEventHandler_t612 * L_3 = (PauseChangedEventHandler_t612 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t612_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m3313(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimeController_remove_PauseChanged_m3319(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PausedOverlay::OnPauseChanged()
extern "C" void PausedOverlay_OnPauseChanged_m3085 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_UpdateUX_m3086(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::UpdateUX()
extern TypeInfo* TimeController_t613_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_UpdateUX_m3086 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t613 * L_0 = ((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m3320(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___overlay_3);
		NullCheck(L_2);
		GameObject_SetActive_m3729(L_2, 1, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_0020:
	{
		GameObject_t352 * L_3 = (__this->___overlay_3);
		NullCheck(L_3);
		GameObject_SetActive_m3729(L_3, 0, /*hidden argument*/NULL);
		Button_t461 * L_4 = (__this->___bigPlayButton_4);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3529(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3729(L_5, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = (__this->___childElement_5);
		bool L_7 = Object_op_Inequality_m3450(NULL /*static, unused*/, L_6, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		GameObject_t352 * L_8 = (__this->___childElement_5);
		NullCheck(L_8);
		Transform_t406 * L_9 = GameObject_get_transform_m3812(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetParent_m3915(L_9, (Transform_t406 *)NULL, 0, /*hidden argument*/NULL);
		__this->___childElement_5 = (GameObject_t352 *)NULL;
	}

IL_0067:
	{
		return;
	}
}
// System.Void PausedOverlay::ShowBigPlayButton()
extern "C" void PausedOverlay_ShowBigPlayButton_m3087 (PausedOverlay_t577 * __this, const MethodInfo* method)
{
	{
		Button_t461 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3529(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3729(L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::SetChildElement(UnityEngine.GameObject)
extern "C" void PausedOverlay_SetChildElement_m3088 (PausedOverlay_t577 * __this, GameObject_t352 * ___newChildElement, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___newChildElement;
		__this->___childElement_5 = L_0;
		Button_t461 * L_1 = (__this->___bigPlayButton_4);
		NullCheck(L_1);
		GameObject_t352 * L_2 = Component_get_gameObject_m3529(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m3729(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___childElement_5);
		bool L_4 = Object_op_Inequality_m3450(NULL /*static, unused*/, L_3, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GameObject_t352 * L_5 = (__this->___childElement_5);
		NullCheck(L_5);
		Transform_t406 * L_6 = GameObject_get_transform_m3812(L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_7 = (__this->___overlay_3);
		NullCheck(L_7);
		Transform_t406 * L_8 = GameObject_get_transform_m3812(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m3915(L_6, L_8, 0, /*hidden argument*/NULL);
	}

IL_0045:
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



// PawController
#include "AssemblyU2DCSharp_PawController.h"
#ifndef _MSC_VER
#else
#endif
// PawController
#include "AssemblyU2DCSharp_PawControllerMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"


// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m3089 (PawController_t492 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m3090 (PawController_t492 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_13 = 0;
		return;
	}
}
// System.Void PawController::Start()
extern "C" void PawController_Start_m3091 (PawController_t492 * __this, const MethodInfo* method)
{
	Vector3_t496  V_0 = {0};
	{
		__this->___swipePhase_3 = 0;
		__this->___swipeSpeed_11 = (7.0f);
		Transform_t406 * L_0 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		Transform_t406 * L_1 = (__this->___pawHomeCatTransform_14);
		NullCheck(L_1);
		Vector3_t496  L_2 = Transform_get_localPosition_m3959(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m3961(L_0, L_2, /*hidden argument*/NULL);
		Transform_t406 * L_3 = (__this->___pawHomeCatTransform_14);
		NullCheck(L_3);
		Vector3_t496  L_4 = Transform_get_localPosition_m3959(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Vector3_get_magnitude_m4037((&V_0), /*hidden argument*/NULL);
		__this->___pawHomeCatTransformMagnitude_16 = L_5;
		PawController_RegisterForEvents_m3093(__this, /*hidden argument*/NULL);
		PawController_UpdatePawState_m3099(__this, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3101(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m3092 (PawController_t492 * __this, const MethodInfo* method)
{
	{
		PawController_UnregisterForEvents_m3094(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t469_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3095_MethodInfo_var;
extern "C" void PawController_RegisterForEvents_m3093 (PawController_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		PawController_OnBoostUsageChanged_m3095_MethodInfo_var = il2cpp_codegen_method_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t456 * L_0 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)PawController_OnBoostUsageChanged_m3095_MethodInfo_var };
		BoostActiveEventHandler_t469 * L_2 = (BoostActiveEventHandler_t469 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t469_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2575(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2586(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_13 = 1;
		return;
	}
}
// System.Void PawController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t469_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3095_MethodInfo_var;
extern "C" void PawController_UnregisterForEvents_m3094 (PawController_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		PawController_OnBoostUsageChanged_m3095_MethodInfo_var = il2cpp_codegen_method_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_13);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		BoostConfig_t456 * L_1 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PawController_OnBoostUsageChanged_m3095_MethodInfo_var };
		BoostActiveEventHandler_t469 * L_3 = (BoostActiveEventHandler_t469 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t469_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2575(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2587(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m3095 (PawController_t492 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->___swipeSpeed_11 = (21.0f);
		goto IL_0027;
	}

IL_0016:
	{
		int32_t L_1 = ___oldType;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		__this->___swipeSpeed_11 = (7.0f);
	}

IL_0027:
	{
		int32_t L_2 = ___newType;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___oldType;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_003b;
		}
	}

IL_0035:
	{
		PawController_UpdatePawState_m3099(__this, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void PawController::Update()
extern "C" void PawController_Update_m3096 (PawController_t492 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	{
		int32_t L_0 = (__this->___swipePhase_3);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00ab;
	}

IL_0024:
	{
		float L_2 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = (__this->___pauseStarted_4);
		if ((!(((float)((float)((float)L_3-(float)L_4))) > ((float)(0.1f)))))
		{
			goto IL_0043;
		}
	}
	{
		PawController_SetPhase_m3097(__this, 2, /*hidden argument*/NULL);
	}

IL_0043:
	{
		goto IL_00ab;
	}

IL_0048:
	{
		Vector3_t496  L_5 = (__this->___swipeLocationCat_2);
		bool L_6 = PawController_MovePawTowards_m3100(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		PawController_SetPhase_m3097(__this, 3, /*hidden argument*/NULL);
	}

IL_0060:
	{
		goto IL_00ab;
	}

IL_0065:
	{
		float L_7 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = V_1;
		float L_9 = (__this->___pauseStarted_4);
		if ((!(((float)((float)((float)L_8-(float)L_9))) > ((float)(0.1f)))))
		{
			goto IL_0084;
		}
	}
	{
		PawController_SetPhase_m3097(__this, 4, /*hidden argument*/NULL);
	}

IL_0084:
	{
		goto IL_00ab;
	}

IL_0089:
	{
		Transform_t406 * L_10 = (__this->___pawHomeCatTransform_14);
		NullCheck(L_10);
		Vector3_t496  L_11 = Transform_get_localPosition_m3959(L_10, /*hidden argument*/NULL);
		bool L_12 = PawController_MovePawTowards_m3100(__this, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a6;
		}
	}
	{
		PawController_SetPhase_m3097(__this, 0, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern TypeInfo* DeadMouseRelay_t489_il2cpp_TypeInfo_var;
extern "C" void PawController_SetPhase_m3097 (PawController_t492 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___swipePhase_3);
		V_0 = L_0;
		int32_t L_1 = ___newPhase;
		__this->___swipePhase_3 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_3 = (__this->___killsThisSwipe_12);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		DeadMouseRelay_t489 * L_4 = ((DeadMouseRelay_t489_StaticFields*)DeadMouseRelay_t489_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_5 = (__this->___killsThisSwipe_12);
		Transform_t406 * L_6 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t496  L_7 = Transform_get_position_m3814(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		DeadMouseRelay_HandleMultiKill_m2655(L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		__this->___killsThisSwipe_12 = 0;
	}

IL_0043:
	{
		int32_t L_8 = ___newPhase;
		if ((((int32_t)L_8) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_9 = ___newPhase;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}

IL_0051:
	{
		float L_10 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pauseStarted_4 = L_10;
	}

IL_005c:
	{
		int32_t L_11 = ___newPhase;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_0069;
		}
	}
	{
		PawController_PlayRandomSound_m3098(__this, /*hidden argument*/NULL);
	}

IL_0069:
	{
		PawController_UpdatePawState_m3099(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::PlayRandomSound()
extern "C" void PawController_PlayRandomSound_m3098 (PawController_t492 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t597 * L_0 = SFXPlayer_get_instance_m3216(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t597 * L_1 = SFXPlayer_get_instance_m3216(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		SFXTypeU5BU5D_t596* L_2 = (L_1->___slapIds_5);
		NullCheck(L_0);
		SFXPlayer_PlayRandom_m3223(L_0, L_2, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m3099 (PawController_t492 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t456 * L_0 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2590(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___dangerPawArtGameObject_6);
		NullCheck(L_2);
		GameObject_SetActive_m3729(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___normalPawArtGameObject_5);
		NullCheck(L_3);
		GameObject_SetActive_m3729(L_3, 0, /*hidden argument*/NULL);
		Collider2D_t579 * L_4 = (__this->___normalCollider_9);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3529(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3729(L_5, 0, /*hidden argument*/NULL);
		Collider2D_t579 * L_6 = (__this->___bigCollider_10);
		NullCheck(L_6);
		GameObject_t352 * L_7 = Component_get_gameObject_m3529(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m3729(L_7, 1, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___swipePhase_3);
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_007f;
		}
	}
	{
		GameObject_t352 * L_9 = (__this->___bigDangerPawArtGameObject_8);
		NullCheck(L_9);
		GameObject_SetActive_m3729(L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = (__this->___bigPawArtGameObject_7);
		NullCheck(L_10);
		GameObject_SetActive_m3729(L_10, 0, /*hidden argument*/NULL);
		Collider2D_t579 * L_11 = (__this->___bigCollider_10);
		NullCheck(L_11);
		Collider2D_set_isTrigger_m4050(L_11, 1, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_007f:
	{
		GameObject_t352 * L_12 = (__this->___bigDangerPawArtGameObject_8);
		NullCheck(L_12);
		GameObject_SetActive_m3729(L_12, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_13 = (__this->___bigPawArtGameObject_7);
		NullCheck(L_13);
		GameObject_SetActive_m3729(L_13, 1, /*hidden argument*/NULL);
		Collider2D_t579 * L_14 = (__this->___bigCollider_10);
		NullCheck(L_14);
		Collider2D_set_isTrigger_m4050(L_14, 0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		goto IL_013b;
	}

IL_00a8:
	{
		GameObject_t352 * L_15 = (__this->___bigDangerPawArtGameObject_8);
		NullCheck(L_15);
		GameObject_SetActive_m3729(L_15, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_16 = (__this->___bigPawArtGameObject_7);
		NullCheck(L_16);
		GameObject_SetActive_m3729(L_16, 0, /*hidden argument*/NULL);
		Collider2D_t579 * L_17 = (__this->___bigCollider_10);
		NullCheck(L_17);
		GameObject_t352 * L_18 = Component_get_gameObject_m3529(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m3729(L_18, 0, /*hidden argument*/NULL);
		Collider2D_t579 * L_19 = (__this->___normalCollider_9);
		NullCheck(L_19);
		GameObject_t352 * L_20 = Component_get_gameObject_m3529(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_m3729(L_20, 1, /*hidden argument*/NULL);
		int32_t L_21 = (__this->___swipePhase_3);
		if ((!(((uint32_t)L_21) == ((uint32_t)3))))
		{
			goto IL_0117;
		}
	}
	{
		GameObject_t352 * L_22 = (__this->___dangerPawArtGameObject_6);
		NullCheck(L_22);
		GameObject_SetActive_m3729(L_22, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_23 = (__this->___normalPawArtGameObject_5);
		NullCheck(L_23);
		GameObject_SetActive_m3729(L_23, 0, /*hidden argument*/NULL);
		Collider2D_t579 * L_24 = (__this->___normalCollider_9);
		NullCheck(L_24);
		Collider2D_set_isTrigger_m4050(L_24, 1, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0117:
	{
		GameObject_t352 * L_25 = (__this->___dangerPawArtGameObject_6);
		NullCheck(L_25);
		GameObject_SetActive_m3729(L_25, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_26 = (__this->___normalPawArtGameObject_5);
		NullCheck(L_26);
		GameObject_SetActive_m3729(L_26, 1, /*hidden argument*/NULL);
		Collider2D_t579 * L_27 = (__this->___normalCollider_9);
		NullCheck(L_27);
		Collider2D_set_isTrigger_m4050(L_27, 0, /*hidden argument*/NULL);
	}

IL_013b:
	{
		return;
	}
}
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m3100 (PawController_t492 * __this, Vector3_t496  ___targetLocationCat, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t496  V_1 = {0};
	Vector3_t496  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t496  V_6 = {0};
	bool V_7 = false;
	Vector3_t496  V_8 = {0};
	{
		(&___targetLocationCat)->___z_3 = (0.0f);
		float L_0 = Vector3_get_magnitude_m4037((&___targetLocationCat), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___pawHomeCatTransformMagnitude_16);
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
		Transform_t406 * L_3 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t496  L_4 = Transform_get_localPosition_m3959(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t496  L_5 = ___targetLocationCat;
		Vector3_t496  L_6 = V_1;
		Vector3_t496  L_7 = Vector3_op_Subtraction_m4051(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Time_get_deltaTime_m3957(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (__this->___swipeSpeed_11);
		float L_10 = V_3;
		V_4 = ((float)((float)L_9*(float)L_10));
		float L_11 = Vector3_get_magnitude_m4037((&V_2), /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = V_5;
		float L_13 = V_4;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0063;
		}
	}
	{
		Vector3_t496  L_14 = ___targetLocationCat;
		V_6 = L_14;
		V_7 = 1;
		goto IL_0081;
	}

IL_0063:
	{
		Vector3_t496  L_15 = V_2;
		float L_16 = V_4;
		Vector3_t496  L_17 = Vector3_op_Multiply_m3819(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		float L_18 = V_5;
		Vector3_t496  L_19 = Vector3_op_Division_m4052(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		Vector3_t496  L_20 = V_1;
		Vector3_t496  L_21 = V_8;
		Vector3_t496  L_22 = Vector3_op_Addition_m3960(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		V_7 = 0;
	}

IL_0081:
	{
		Transform_t406 * L_23 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		Vector3_t496  L_24 = V_6;
		NullCheck(L_23);
		Transform_set_localPosition_m3961(L_23, L_24, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3101(__this, /*hidden argument*/NULL);
		bool L_25 = V_7;
		return L_25;
	}
}
// System.Void PawController::UpdateArmRotation()
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" void PawController_UpdateArmRotation_m3101 (PawController_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t496  V_0 = {0};
	float V_1 = 0.0f;
	{
		Transform_t406 * L_0 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t496  L_1 = Transform_get_localPosition_m3959(L_0, /*hidden argument*/NULL);
		Transform_t406 * L_2 = (__this->___shoulderJointCatTransform_15);
		NullCheck(L_2);
		Vector3_t496  L_3 = Transform_get_localPosition_m3959(L_2, /*hidden argument*/NULL);
		Vector3_t496  L_4 = Vector3_op_Subtraction_m4051(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		float L_6 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_7 = atan2f(L_5, L_6);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		float L_9 = V_1;
		Quaternion_t737  L_10 = Quaternion_Euler_m3962(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_9*(float)(57.29578f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_m3975(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m3102 (PawController_t492 * __this, Vector3_t496  ___location, const MethodInfo* method)
{
	{
		Vector3_t496  L_0 = ___location;
		__this->___swipeLocationCat_2 = L_0;
		float L_1 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pauseStarted_4 = L_1;
		PawController_SetPhase_m3097(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m3103 (PawController_t492 * __this, const MethodInfo* method)
{
	{
		PawController_SetPhase_m3097(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::CountKill()
extern "C" void PawController_CountKill_m3104 (PawController_t492 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___killsThisSwipe_12);
		__this->___killsThisSwipe_12 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONMethodDeclarations.h"


// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m3105 (PersistentStorage_t580 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::.cctor()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage__cctor_m3106 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3 = (String_t*) &_stringLiteral1074;
		return;
	}
}
// System.String PersistentStorage::FullPathFromPartialPath(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PersistentStorage_FullPathFromPartialPath_m3107 (PersistentStorage_t580 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m4053(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m455(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral521, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::Awake()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_Awake_m3108 (PersistentStorage_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		PersistentStorage_LoadValueStore_m3118(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String PersistentStorage::ReadFileAsText(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PersistentStorage_ReadFileAsText_m3109 (PersistentStorage_t580 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___path;
		String_t* L_1 = PersistentStorage_FullPathFromPartialPath_m3107(__this, L_0, /*hidden argument*/NULL);
		___path = L_1;
		String_t* L_2 = ___path;
		bool L_3 = File_Exists_m4054(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_4;
	}

IL_001a:
	{
		String_t* L_5 = ___path;
		String_t* L_6 = File_ReadAllText_m4055(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void PersistentStorage::WriteTextToFile(System.String,System.String)
extern "C" void PersistentStorage_WriteTextToFile_m3110 (PersistentStorage_t580 * __this, String_t* ___path, String_t* ___text, const MethodInfo* method)
{
	{
		String_t* L_0 = ___path;
		String_t* L_1 = PersistentStorage_FullPathFromPartialPath_m3107(__this, L_0, /*hidden argument*/NULL);
		___path = L_1;
		String_t* L_2 = ___path;
		String_t* L_3 = ___text;
		File_WriteAllText_m4056(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::SetFloatValue(System.String,System.Single)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_SetFloatValue_m3111 (PersistentStorage_t580 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONNode_t29 * L_0 = (__this->___storedValues_4);
		String_t* L_1 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		float L_3 = ___value;
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t87_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		JSONNode_t29 * L_7 = JSONNode_op_Implicit_m254(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_0, L_1, L_7);
		PersistentStorage_SaveValueStore_m3117(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single PersistentStorage::GetFloatValue(System.String,System.Single)
extern "C" float PersistentStorage_GetFloatValue_m3112 (PersistentStorage_t580 * __this, String_t* ___name, float ___defaultValue, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		JSONNode_t29 * L_0 = (__this->___storedValues_4);
		bool L_1 = JSONNode_op_Equality_m256(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		float L_2 = ___defaultValue;
		return L_2;
	}

IL_0013:
	{
		JSONNode_t29 * L_3 = (__this->___storedValues_4);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		JSONNode_t29 * L_5 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_3, L_4);
		String_t* L_6 = JSONNode_op_Implicit_m255(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		float L_8 = ___defaultValue;
		return L_8;
	}

IL_002d:
	{
		String_t* L_9 = V_0;
		float L_10 = Single_Parse_m4057(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_SetIntValue_m3113 (PersistentStorage_t580 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONNode_t29 * L_0 = (__this->___storedValues_4);
		String_t* L_1 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_3 = ___value;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		JSONNode_t29 * L_7 = JSONNode_op_Implicit_m254(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, JSONNode_t29 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_0, L_1, L_7);
		PersistentStorage_SaveValueStore_m3117(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" int32_t PersistentStorage_GetIntValue_m3114 (PersistentStorage_t580 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t29 * L_0 = (__this->___storedValues_4);
		bool L_1 = JSONNode_op_Equality_m256(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___defaultValue;
		return L_2;
	}

IL_0013:
	{
		JSONNode_t29 * L_3 = (__this->___storedValues_4);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		JSONNode_t29 * L_5 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_3, L_4);
		String_t* L_6 = JSONNode_op_Implicit_m255(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = ___defaultValue;
		return L_8;
	}

IL_002d:
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_10 = Convert_ToInt32_m3566(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m3115 (PersistentStorage_t580 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	PersistentStorage_t580 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	PersistentStorage_t580 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	PersistentStorage_t580 * G_B3_2 = {0};
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000f:
	{
		NullCheck(G_B3_2);
		PersistentStorage_SetIntValue_m3113(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" bool PersistentStorage_GetBoolValue_m3116 (PersistentStorage_t580 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t29 * L_0 = (__this->___storedValues_4);
		bool L_1 = JSONNode_op_Equality_m256(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		bool L_2 = ___defaultValue;
		return L_2;
	}

IL_0013:
	{
		JSONNode_t29 * L_3 = (__this->___storedValues_4);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		JSONNode_t29 * L_5 = (JSONNode_t29 *)VirtFuncInvoker1< JSONNode_t29 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_3, L_4);
		String_t* L_6 = JSONNode_op_Implicit_m255(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		bool L_8 = ___defaultValue;
		return L_8;
	}

IL_002d:
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_10 = Convert_ToInt32_m3566(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_10) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PersistentStorage::SaveValueStore()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_SaveValueStore_m3117 (PersistentStorage_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t29 * L_0 = (__this->___storedValues_4);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_0);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		String_t* L_2 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3;
		String_t* L_3 = V_0;
		PersistentStorage_WriteTextToFile_m3110(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::LoadValueStore()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_LoadValueStore_m3118 (PersistentStorage_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3;
		String_t* L_1 = PersistentStorage_ReadFileAsText_m3109(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		JSONNode_t29 * L_3 = JSON_Parse_m352(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___storedValues_4 = L_3;
		JSONNode_t29 * L_4 = (__this->___storedValues_4);
		bool L_5 = JSONNode_op_Equality_m256(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		JSONNode_t29 * L_6 = JSON_Parse_m352(NULL /*static, unused*/, (String_t*) &_stringLiteral174, /*hidden argument*/NULL);
		__this->___storedValues_4 = L_6;
	}

IL_0039:
	{
		return;
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
extern "C" void PlayButtonClickSound__ctor_m3119 (PlayButtonClickSound_t581 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayButtonClickSound::Play()
extern "C" void PlayButtonClickSound_Play_m3120 (PlayButtonClickSound_t581 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t597 * L_0 = SFXPlayer_get_instance_m3216(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SFXPlayer_Play_m3221(L_0, 2, /*hidden argument*/NULL);
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

// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharing.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharing.h"
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharingMethodDeclarations.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharingMethodDeclarations.h"


// System.Void PlayLevelHandler::.ctor()
extern "C" void PlayLevelHandler__ctor_m3121 (PlayLevelHandler_t582 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayLevelHandler::Start()
extern "C" void PlayLevelHandler_Start_m3122 (PlayLevelHandler_t582 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayLevelHandler::Play()
extern TypeInfo* FacebookSharing_t498_il2cpp_TypeInfo_var;
extern TypeInfo* TwitterSharing_t625_il2cpp_TypeInfo_var;
extern "C" void PlayLevelHandler_Play_m3123 (PlayLevelHandler_t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		TwitterSharing_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t490 * L_0 = DebugConfig_get_instance_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___debugFBShare_2);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		FacebookSharing_t498 * L_2 = ((FacebookSharing_t498_StaticFields*)FacebookSharing_t498_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_2);
		FacebookSharing_ShareScore_m2698(L_2, ((int32_t)24), /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		DebugConfig_t490 * L_3 = DebugConfig_get_instance_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (L_3->___debugTwitterShare_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		TwitterSharing_t625 * L_5 = ((TwitterSharing_t625_StaticFields*)TwitterSharing_t625_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		TwitterSharing_ShareScore_m3375(L_5, ((int32_t)25), /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		GamePhaseState_t517 * L_6 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GamePhaseState_TransitionToPhase_m2802(L_6, 2, /*hidden argument*/NULL);
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

// FartPuff
#include "AssemblyU2DCSharp_FartPuff.h"
// FartPuff
#include "AssemblyU2DCSharp_FartPuffMethodDeclarations.h"
struct GameObject_t352;
struct PawController_t492;
// Declaration !!0 UnityEngine.GameObject::GetComponent<PawController>()
// !!0 UnityEngine.GameObject::GetComponent<PawController>()
#define GameObject_GetComponent_TisPawController_t492_m4058(__this, method) (( PawController_t492 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)
struct GameObject_t352;
struct FartPuff_t499;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
// !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
#define GameObject_GetComponent_TisFartPuff_t499_m4059(__this, method) (( FartPuff_t499 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3124 (PlayerController_t584 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController PlayerController::get_instance()
extern TypeInfo* PlayerController_t584_il2cpp_TypeInfo_var;
extern "C" PlayerController_t584 * PlayerController_get_instance_m3125 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t584 * L_0 = ((PlayerController_t584_StaticFields*)PlayerController_t584_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void PlayerController::set_instance(PlayerController)
extern TypeInfo* PlayerController_t584_il2cpp_TypeInfo_var;
extern "C" void PlayerController_set_instance_m3126 (Object_t * __this /* static, unused */, PlayerController_t584 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t584 * L_0 = ___value;
		((PlayerController_t584_StaticFields*)PlayerController_t584_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void PlayerController::Awake()
extern TypeInfo* TipConfig_t473_il2cpp_TypeInfo_var;
extern "C" void PlayerController_Awake_m3127 (PlayerController_t584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_instance_m3126(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		TipConfig_t473 * L_0 = (TipConfig_t473 *)il2cpp_codegen_object_new (TipConfig_t473_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3329(L_0, (String_t*) &_stringLiteral1075, (String_t*) &_stringLiteral1076, /*hidden argument*/NULL);
		__this->___turningTip_15 = L_0;
		return;
	}
}
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3128 (PlayerController_t584 * __this, const MethodInfo* method)
{
	{
		PlayerController_RegisterForEvents_m3130(__this, /*hidden argument*/NULL);
		PlayerController_Reset_m3134(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3129 (PlayerController_t584 * __this, const MethodInfo* method)
{
	{
		PlayerController_UnregisterForEvents_m3131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t469_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3132_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3133_MethodInfo_var;
extern "C" void PlayerController_RegisterForEvents_m3130 (PlayerController_t584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		BoostActiveEventHandler_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		PlayerController_OnInstanceChanged_m3132_MethodInfo_var = il2cpp_codegen_method_info_from_index(573);
		PlayerController_OnBoostActive_m3133_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_14);
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
		__this->___registeredForEvents_14 = 1;
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3132_MethodInfo_var };
		GameInstanceChangedEventHandler_t515 * L_3 = (GameInstanceChangedEventHandler_t515 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2766(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2781(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t456 * L_4 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3133_MethodInfo_var };
		BoostActiveEventHandler_t469 * L_6 = (BoostActiveEventHandler_t469 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t469_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2575(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2586(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t469_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3132_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3133_MethodInfo_var;
extern "C" void PlayerController_UnregisterForEvents_m3131 (PlayerController_t584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		BoostActiveEventHandler_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		PlayerController_OnInstanceChanged_m3132_MethodInfo_var = il2cpp_codegen_method_info_from_index(573);
		PlayerController_OnBoostActive_m3133_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_14);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3132_MethodInfo_var };
		GameInstanceChangedEventHandler_t515 * L_3 = (GameInstanceChangedEventHandler_t515 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2766(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m2782(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t456 * L_4 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3133_MethodInfo_var };
		BoostActiveEventHandler_t469 * L_6 = (BoostActiveEventHandler_t469 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t469_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2575(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2587(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3132 (PlayerController_t584 * __this, const MethodInfo* method)
{
	{
		PlayerController_Reset_m3134(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3133 (PlayerController_t584 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3142(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3134 (PlayerController_t584 * __this, const MethodInfo* method)
{
	{
		__this->___bodyMovement_9 = 0;
		__this->___currentTurnAngleDegrees_11 = (45.0f);
		float L_0 = (__this->___currentTurnAngleDegrees_11);
		__this->___targetTurnAngleDegrees_10 = L_0;
		Transform_t406 * L_1 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		float L_2 = (__this->___currentTurnAngleDegrees_11);
		Quaternion_t737  L_3 = Quaternion_Euler_m3962(NULL /*static, unused*/, (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m3919(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3135 (PlayerController_t584 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		PlayerController_MaybeMakeFartPuff_m3141(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___bodyMovement_9);
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
		PlayerController_UpdateDrag_m3137(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_002b:
	{
		PlayerController_UpdateTurn_m3136(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0036:
	{
		return;
	}
}
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3136 (PlayerController_t584 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___currentTurnAngleDegrees_11);
		float L_1 = (__this->___targetTurnAngleDegrees_10);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0052;
		}
	}
	{
		float L_2 = (__this->___currentTurnAngleDegrees_11);
		float L_3 = Time_get_deltaTime_m3957(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentTurnAngleDegrees_11 = ((float)((float)L_2+(float)((float)((float)(180.0f)*(float)L_3))));
		float L_4 = (__this->___currentTurnAngleDegrees_11);
		float L_5 = (__this->___targetTurnAngleDegrees_10);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_004d;
		}
	}
	{
		float L_6 = (__this->___targetTurnAngleDegrees_10);
		__this->___currentTurnAngleDegrees_11 = L_6;
		__this->___bodyMovement_9 = 0;
	}

IL_004d:
	{
		goto IL_008e;
	}

IL_0052:
	{
		float L_7 = (__this->___currentTurnAngleDegrees_11);
		float L_8 = Time_get_deltaTime_m3957(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentTurnAngleDegrees_11 = ((float)((float)L_7-(float)((float)((float)(180.0f)*(float)L_8))));
		float L_9 = (__this->___currentTurnAngleDegrees_11);
		float L_10 = (__this->___targetTurnAngleDegrees_10);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_008e;
		}
	}
	{
		float L_11 = (__this->___targetTurnAngleDegrees_10);
		__this->___currentTurnAngleDegrees_11 = L_11;
		__this->___bodyMovement_9 = 0;
	}

IL_008e:
	{
		Transform_t406 * L_12 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		float L_13 = (__this->___currentTurnAngleDegrees_11);
		Quaternion_t737  L_14 = Quaternion_Euler_m3962(NULL /*static, unused*/, (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m3919(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UpdateDrag()
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern "C" void PlayerController_UpdateDrag_m3137 (PlayerController_t584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t496  V_0 = {0};
	bool V_1 = false;
	Vector3_t496  V_2 = {0};
	Vector3_t496  V_3 = {0};
	float V_4 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t533_il2cpp_TypeInfo_var);
		InputHandler_t533 * L_0 = InputHandler_get_instance_m2881(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InputHandler_GetWorldClickPosition_m2891(L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		__this->___bodyMovement_9 = 0;
		return;
	}

IL_001b:
	{
		Camera_t532 * L_3 = Camera_get_main_m3780(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t496  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t496  L_5 = Camera_ScreenToWorldPoint_m3815(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		Vector3_t496  L_7 = V_2;
		NullCheck(L_6);
		Vector3_t496  L_8 = Transform_InverseTransformPoint_m4060(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t496  L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		float L_10 = Utilities_GetZAngle_m3389(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Transform_t406 * L_11 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		float L_12 = V_4;
		float L_13 = (__this->___dragAnchorAngleCat_13);
		Vector3_t496  L_14 = {0};
		Vector3__ctor_m3807(&L_14, (0.0f), (0.0f), ((float)((float)L_12-(float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m4061(L_11, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var;
extern "C" void PlayerController_HandleDragClickStart_m3138 (PlayerController_t584 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484223);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___bodyMovement_9 = 2;
		Transform_t406 * L_0 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		Vector2_t110  L_1 = ___worldPoint2d;
		Vector3_t496  L_2 = Vector2_op_Implicit_m3985(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t496  L_3 = Transform_InverseTransformPoint_m4060(L_0, L_2, /*hidden argument*/NULL);
		__this->___dragAnchorCat_12 = L_3;
		Vector3_t496 * L_4 = &(__this->___dragAnchorCat_12);
		L_4->___z_3 = (0.0f);
		Vector3_t496  L_5 = (__this->___dragAnchorCat_12);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		float L_6 = Utilities_GetZAngle_m3389(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___dragAnchorAngleCat_13 = L_6;
		GameObject_t352 * L_7 = (__this->___rightPawGameObject_3);
		NullCheck(L_7);
		PawController_t492 * L_8 = GameObject_GetComponent_TisPawController_t492_m4058(L_7, /*hidden argument*/GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var);
		NullCheck(L_8);
		PawController_CancelSwipe_m3103(L_8, /*hidden argument*/NULL);
		GameObject_t352 * L_9 = (__this->___leftPawGameObject_4);
		NullCheck(L_9);
		PawController_t492 * L_10 = GameObject_GetComponent_TisPawController_t492_m4058(L_9, /*hidden argument*/GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var);
		NullCheck(L_10);
		PawController_CancelSwipe_m3103(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern TypeInfo* TipController_t616_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var;
extern "C" void PlayerController_HandleSlapClickStart_m3139 (PlayerController_t584 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		TipController_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484223);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t496  V_0 = {0};
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	Quaternion_t737  V_3 = {0};
	Vector3_t496  V_4 = {0};
	{
		Transform_t406 * L_0 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		Vector2_t110  L_1 = ___worldPoint2d;
		Vector3_t496  L_2 = Vector2_op_Implicit_m3985(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t496  L_3 = Transform_InverseTransformPoint_m4060(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector3_get_magnitude_m4037((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(4.6f)))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		Vector3_t496  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		float L_6 = Utilities_GetZAngle_m3389(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = (GameObject_t352 *)NULL;
		float L_7 = V_1;
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		float L_8 = V_1;
		ConeOfViewRenderer_t483 * L_9 = (__this->___coneOfView_5);
		NullCheck(L_9);
		float L_10 = ConeOfViewRenderer_get_actualAngleRange_m2622(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) <= ((float)((float)((float)L_10/(float)(2.0f)))))))
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t352 * L_11 = (__this->___leftPawGameObject_4);
		V_2 = L_11;
		goto IL_0085;
	}

IL_005b:
	{
		float L_12 = V_1;
		if ((!(((float)L_12) < ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		float L_13 = V_1;
		ConeOfViewRenderer_t483 * L_14 = (__this->___coneOfView_5);
		NullCheck(L_14);
		float L_15 = ConeOfViewRenderer_get_actualAngleRange_m2622(L_14, /*hidden argument*/NULL);
		if ((!(((float)L_13) >= ((float)((float)((float)((-L_15))/(float)(2.0f)))))))
		{
			goto IL_0085;
		}
	}
	{
		GameObject_t352 * L_16 = (__this->___rightPawGameObject_3);
		V_2 = L_16;
	}

IL_0085:
	{
		GameObject_t352 * L_17 = V_2;
		bool L_18 = Object_op_Implicit_m3872(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_t352 * L_19 = V_2;
		NullCheck(L_19);
		PawController_t492 * L_20 = GameObject_GetComponent_TisPawController_t492_m4058(L_19, /*hidden argument*/GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var);
		Vector3_t496  L_21 = V_0;
		NullCheck(L_20);
		PawController_Swipe_m3102(L_20, L_21, /*hidden argument*/NULL);
		goto IL_010e;
	}

IL_00a1:
	{
		Transform_t406 * L_22 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Quaternion_t737  L_23 = Transform_get_rotation_m3948(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		Vector3_t496  L_24 = Quaternion_get_eulerAngles_m4062((&V_3), /*hidden argument*/NULL);
		V_4 = L_24;
		float L_25 = ((&V_4)->___z_3);
		__this->___currentTurnAngleDegrees_11 = L_25;
		float L_26 = V_1;
		float L_27 = (__this->___currentTurnAngleDegrees_11);
		__this->___targetTurnAngleDegrees_10 = ((float)((float)L_26+(float)L_27));
		__this->___bodyMovement_9 = 1;
		GameObject_t352 * L_28 = (__this->___rightPawGameObject_3);
		NullCheck(L_28);
		PawController_t492 * L_29 = GameObject_GetComponent_TisPawController_t492_m4058(L_28, /*hidden argument*/GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var);
		NullCheck(L_29);
		PawController_CancelSwipe_m3103(L_29, /*hidden argument*/NULL);
		GameObject_t352 * L_30 = (__this->___leftPawGameObject_4);
		NullCheck(L_30);
		PawController_t492 * L_31 = GameObject_GetComponent_TisPawController_t492_m4058(L_30, /*hidden argument*/GameObject_GetComponent_TisPawController_t492_m4058_MethodInfo_var);
		NullCheck(L_31);
		PawController_CancelSwipe_m3103(L_31, /*hidden argument*/NULL);
		TipController_t616 * L_32 = ((TipController_t616_StaticFields*)TipController_t616_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t473 * L_33 = (__this->___turningTip_15);
		float L_34 = (__this->___turningTipPause_16);
		NullCheck(L_32);
		TipController_EnqueueTip_m3344(L_32, L_33, L_34, /*hidden argument*/NULL);
	}

IL_010e:
	{
		HeadMovement_t527 * L_35 = (__this->___headMovement_6);
		Vector3_t496  L_36 = V_0;
		NullCheck(L_35);
		HeadMovement_LookTowards_m2856(L_35, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3140 (PlayerController_t584 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		DebugConfig_t490 * L_1 = DebugConfig_get_instance_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = DebugConfig_get_useDebugValues_m2658(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->___bodyMovement_9 = 0;
	}

IL_001c:
	{
		return;
	}
}
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3141 (PlayerController_t584 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t456 * L_0 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2590(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___lastFartTime_17);
		float L_4 = (__this->___fartPause_18);
		if ((!(((float)L_2) > ((float)((float)((float)L_3+(float)L_4))))))
		{
			goto IL_002d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3142(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PlayerController::MakeFartPuff()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFartPuff_t499_m4059_MethodInfo_var;
extern "C" void PlayerController_MakeFartPuff_m3142 (PlayerController_t584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisFartPuff_t499_m4059_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484224);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FartPuff_t499 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___fartPuffPrototype_7);
		GameObject_t352 * L_1 = (__this->___butthole_8);
		NullCheck(L_1);
		Transform_t406 * L_2 = GameObject_get_transform_m3812(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t496  L_3 = Transform_get_position_m3814(L_2, /*hidden argument*/NULL);
		Quaternion_t737  L_4 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_5 = Object_Instantiate_m3914(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_5, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_6 = V_0;
		NullCheck(L_6);
		FartPuff_t499 * L_7 = GameObject_GetComponent_TisFartPuff_t499_m4059(L_6, /*hidden argument*/GameObject_GetComponent_TisFartPuff_t499_m4059_MethodInfo_var);
		V_1 = L_7;
		FartPuff_t499 * L_8 = V_1;
		Transform_t406 * L_9 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t737  L_10 = Transform_get_rotation_m3948(L_9, /*hidden argument*/NULL);
		Vector3_t496  L_11 = Vector3_get_left_m4063(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t496  L_12 = Quaternion_op_Multiply_m4042(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		FartPuff_SetDirection_m2708(L_8, L_12, /*hidden argument*/NULL);
		float L_13 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastFartTime_17 = L_13;
		return;
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
extern "C" void ScoreChangedEventHandler__ctor_m3143 (ScoreChangedEventHandler_t585 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m3144 (ScoreChangedEventHandler_t585 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreChangedEventHandler_Invoke_m3144((ScoreChangedEventHandler_t585 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t585(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m3145 (ScoreChangedEventHandler_t585 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m3146 (ScoreChangedEventHandler_t585 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void MoneyChangedEventHandler__ctor_m3147 (MoneyChangedEventHandler_t586 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/MoneyChangedEventHandler::Invoke()
extern "C" void MoneyChangedEventHandler_Invoke_m3148 (MoneyChangedEventHandler_t586 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MoneyChangedEventHandler_Invoke_m3148((MoneyChangedEventHandler_t586 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MoneyChangedEventHandler_t586(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/MoneyChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MoneyChangedEventHandler_BeginInvoke_m3149 (MoneyChangedEventHandler_t586 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/MoneyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MoneyChangedEventHandler_EndInvoke_m3150 (MoneyChangedEventHandler_t586 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void BoostsChangedEventHandler__ctor_m3151 (BoostsChangedEventHandler_t587 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m3152 (BoostsChangedEventHandler_t587 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostsChangedEventHandler_Invoke_m3152((BoostsChangedEventHandler_t587 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t587(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m3153 (BoostsChangedEventHandler_t587 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m3154 (BoostsChangedEventHandler_t587 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m3155 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_ScoreChanged_m3156 (PlayerStats_t475 * __this, ScoreChangedEventHandler_t585 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(548);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t585 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t585 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t585 *)Castclass(L_2, ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_ScoreChanged_m3157 (PlayerStats_t475 * __this, ScoreChangedEventHandler_t585 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(548);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t585 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t585 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t585 *)Castclass(L_2, ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_MoneyChanged_m3158 (PlayerStats_t475 * __this, MoneyChangedEventHandler_t586 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t586 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t586 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t586 *)Castclass(L_2, MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_MoneyChanged_m3159 (PlayerStats_t475 * __this, MoneyChangedEventHandler_t586 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t586 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t586 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t586 *)Castclass(L_2, MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t587_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_BoostsChanged_m3160 (PlayerStats_t475 * __this, BoostsChangedEventHandler_t587 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t587 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t587 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t587 *)Castclass(L_2, BoostsChangedEventHandler_t587_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t587_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_BoostsChanged_m3161 (PlayerStats_t475 * __this, BoostsChangedEventHandler_t587 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t587 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t587 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t587 *)Castclass(L_2, BoostsChangedEventHandler_t587_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 PlayerStats::get_gameScore()
extern "C" int32_t PlayerStats_get_gameScore_m3162 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameScoreU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void PlayerStats::set_gameScore(System.Int32)
extern "C" void PlayerStats_set_gameScore_m3163 (PlayerStats_t475 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameScoreU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 PlayerStats::get_money()
extern "C" int32_t PlayerStats_get_money_m3164 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmoneyU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void PlayerStats::set_money(System.Int32)
extern "C" void PlayerStats_set_money_m3165 (PlayerStats_t475 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmoneyU3Ek__BackingField_10 = L_0;
		return;
	}
}
// PlayerStats PlayerStats::get_instance()
extern TypeInfo* PlayerStats_t475_il2cpp_TypeInfo_var;
extern "C" PlayerStats_t475 * PlayerStats_get_instance_m3166 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(549);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t475 * L_0 = ((PlayerStats_t475_StaticFields*)PlayerStats_t475_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void PlayerStats::set_instance(PlayerStats)
extern TypeInfo* PlayerStats_t475_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_set_instance_m3167 (Object_t * __this /* static, unused */, PlayerStats_t475 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(549);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t475 * L_0 = ___value;
		((PlayerStats_t475_StaticFields*)PlayerStats_t475_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m3168 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	{
		PlayerStats_set_instance_m3167(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerStats_Reset_m3175(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m3169 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	{
		PlayerStats_RegisterForEvents_m3171(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m3170 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	{
		PlayerStats_UnregisterForEvents_m3172(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3173_MethodInfo_var;
extern "C" void PlayerStats_RegisterForEvents_m3171 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		PlayerStats_OnInstanceChanged_m3173_MethodInfo_var = il2cpp_codegen_method_info_from_index(577);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3173_MethodInfo_var };
		GameInstanceChangedEventHandler_t515 * L_3 = (GameInstanceChangedEventHandler_t515 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2766(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2781(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3173_MethodInfo_var;
extern "C" void PlayerStats_UnregisterForEvents_m3172 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		PlayerStats_OnInstanceChanged_m3173_MethodInfo_var = il2cpp_codegen_method_info_from_index(577);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3173_MethodInfo_var };
		GameInstanceChangedEventHandler_t515 * L_3 = (GameInstanceChangedEventHandler_t515 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t515_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2766(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m2782(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m3173 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	{
		PlayerStats_Reset_m3175(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m3174 (PlayerStats_t475 * __this, int32_t ___increment, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_gameScore_m3162(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___increment;
		PlayerStats_set_gameScore_m3163(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		ScoreChangedEventHandler_t585 * L_3 = (__this->___ScoreChanged_6);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ScoreChangedEventHandler_t585 * L_4 = (__this->___ScoreChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::Reset()
extern TypeInfo* Int32U5BU5D_t549_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_Reset_m3175 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_set_gameScore_m3163(__this, 0, /*hidden argument*/NULL);
		int32_t L_0 = TweakableParams_GetInitialMoney_m3369(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerStats_set_money_m3165(__this, L_0, /*hidden argument*/NULL);
		__this->___purchasedBoostCount_4 = ((Int32U5BU5D_t549*)SZArrayNew(Int32U5BU5D_t549_il2cpp_TypeInfo_var, 5));
		__this->___availableBoostCount_3 = ((Int32U5BU5D_t549*)SZArrayNew(Int32U5BU5D_t549_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_004b;
	}

IL_0031:
	{
		Int32U5BU5D_t549* L_1 = (__this->___purchasedBoostCount_4);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)0;
		Int32U5BU5D_t549* L_3 = (__this->___availableBoostCount_3);
		int32_t L_4 = V_0;
		int32_t L_5 = TweakableParams_GetInitialBoosts_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)) = (int32_t)L_5;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)5)))
		{
			goto IL_0031;
		}
	}
	{
		MoneyChangedEventHandler_t586 * L_8 = (__this->___MoneyChanged_7);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		MoneyChangedEventHandler_t586 * L_9 = (__this->___MoneyChanged_7);
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_9);
	}

IL_0068:
	{
		ScoreChangedEventHandler_t585 * L_10 = (__this->___ScoreChanged_6);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		ScoreChangedEventHandler_t585 * L_11 = (__this->___ScoreChanged_6);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_11);
	}

IL_007e:
	{
		BoostsChangedEventHandler_t587 * L_12 = (__this->___BoostsChanged_8);
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		BoostsChangedEventHandler_t587 * L_13 = (__this->___BoostsChanged_8);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_13);
	}

IL_0094:
	{
		return;
	}
}
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m3176 (PlayerStats_t475 * __this, int32_t ___price, const MethodInfo* method)
{
	{
		int32_t L_0 = PlayerStats_get_money_m3164(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___price;
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerStats::EarnMoney(System.Int32)
extern "C" void PlayerStats_EarnMoney_m3177 (PlayerStats_t475 * __this, int32_t ___earnedMoney, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_money_m3164(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___earnedMoney;
		PlayerStats_set_money_m3165(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		MoneyChangedEventHandler_t586 * L_3 = (__this->___MoneyChanged_7);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		MoneyChangedEventHandler_t586 * L_4 = (__this->___MoneyChanged_7);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::SpendMoney(System.Int32)
extern "C" void PlayerStats_SpendMoney_m3178 (PlayerStats_t475 * __this, int32_t ___spentMoney, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_money_m3164(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___spentMoney;
		PlayerStats_set_money_m3165(__this, ((int32_t)((int32_t)L_1-(int32_t)L_2)), /*hidden argument*/NULL);
		int32_t L_3 = PlayerStats_get_money_m3164(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		PlayerStats_set_money_m3165(__this, 0, /*hidden argument*/NULL);
	}

IL_0028:
	{
		MoneyChangedEventHandler_t586 * L_4 = (__this->___MoneyChanged_7);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		MoneyChangedEventHandler_t586 * L_5 = (__this->___MoneyChanged_7);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_5);
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m3179 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t549* L_1 = (__this->___purchasedBoostCount_4);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m3180 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t549* L_1 = (__this->___availableBoostCount_3);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m3181 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t549* L_1 = (__this->___purchasedBoostCount_4);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t* L_3 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2));
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_3))+(int32_t)1));
		Int32U5BU5D_t549* L_4 = (__this->___availableBoostCount_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t* L_6 = ((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5));
		*((int32_t*)(L_6)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		BoostsChangedEventHandler_t587 * L_7 = (__this->___BoostsChanged_8);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		BoostsChangedEventHandler_t587 * L_8 = (__this->___BoostsChanged_8);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_8);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m3182 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t549* L_1 = (__this->___availableBoostCount_3);
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
		Int32U5BU5D_t549* L_4 = (__this->___availableBoostCount_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		return;
	}

IL_001a:
	{
		Int32U5BU5D_t549* L_6 = (__this->___availableBoostCount_3);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t* L_8 = ((int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7));
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))-(int32_t)1));
		BoostsChangedEventHandler_t587 * L_9 = (__this->___BoostsChanged_8);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		BoostsChangedEventHandler_t587 * L_10 = (__this->___BoostsChanged_8);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetHighScore()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" int32_t PlayerStats_GetHighScore_m3183 (PlayerStats_t475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3114(L_0, (String_t*) &_stringLiteral1077, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerStats::SetHighScore(System.Int32)
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_SetHighScore_m3184 (PlayerStats_t475 * __this, int32_t ___highScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_1 = ___highScore;
		NullCheck(L_0);
		PersistentStorage_SetIntValue_m3113(L_0, (String_t*) &_stringLiteral1077, L_1, /*hidden argument*/NULL);
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
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18__ctor_m3185 (U3CWaitAndShowDialogU3Ec__Iterator18_t589 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object RateMeController/<WaitAndShowDialog>c__Iterator18::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitAndShowDialogU3Ec__Iterator18_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3186 (U3CWaitAndShowDialogU3Ec__Iterator18_t589 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object RateMeController/<WaitAndShowDialog>c__Iterator18::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitAndShowDialogU3Ec__Iterator18_System_Collections_IEnumerator_get_Current_m3187 (U3CWaitAndShowDialogU3Ec__Iterator18_t589 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean RateMeController/<WaitAndShowDialog>c__Iterator18::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitAndShowDialogU3Ec__Iterator18_MoveNext_m3188 (U3CWaitAndShowDialogU3Ec__Iterator18_t589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
		RateMeController_t588 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___waitToShow_5);
		WaitForSeconds_t738 * L_4 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0058;
	}

IL_0043:
	{
		RateMeController_t588 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		RateMeController_MaybeShowRateMeDialog_m3194(L_5, /*hidden argument*/NULL);
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
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18_Dispose_m3189 (U3CWaitAndShowDialogU3Ec__Iterator18_t589 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void RateMeController/<WaitAndShowDialog>c__Iterator18::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18_Reset_m3190 (U3CWaitAndShowDialogU3Ec__Iterator18_t589 * __this, const MethodInfo* method)
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

// DialogController
#include "AssemblyU2DCSharp_DialogController.h"
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"


// System.Void RateMeController::.ctor()
extern "C" void RateMeController__ctor_m3191 (RateMeController_t588 * __this, const MethodInfo* method)
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
extern "C" void RateMeController_Start_m3192 (RateMeController_t588 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = RateMeController_WaitAndShowDialog_m3193(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3492(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator RateMeController::WaitAndShowDialog()
extern TypeInfo* U3CWaitAndShowDialogU3Ec__Iterator18_t589_il2cpp_TypeInfo_var;
extern "C" Object_t * RateMeController_WaitAndShowDialog_m3193 (RateMeController_t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitAndShowDialogU3Ec__Iterator18_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitAndShowDialogU3Ec__Iterator18_t589 * V_0 = {0};
	{
		U3CWaitAndShowDialogU3Ec__Iterator18_t589 * L_0 = (U3CWaitAndShowDialogU3Ec__Iterator18_t589 *)il2cpp_codegen_object_new (U3CWaitAndShowDialogU3Ec__Iterator18_t589_il2cpp_TypeInfo_var);
		U3CWaitAndShowDialogU3Ec__Iterator18__ctor_m3185(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAndShowDialogU3Ec__Iterator18_t589 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CWaitAndShowDialogU3Ec__Iterator18_t589 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean RateMeController::MaybeShowRateMeDialog()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t494_il2cpp_TypeInfo_var;
extern "C" bool RateMeController_MaybeShowRateMeDialog_m3194 (RateMeController_t588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		DialogController_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	GameObject_t352 * V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m3116(L_0, (String_t*) &_stringLiteral1078, 0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_3 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		int32_t L_4 = PersistentStorage_GetIntValue_m3114(L_3, (String_t*) &_stringLiteral1017, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		PersistentStorage_t580 * L_5 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_5);
		int32_t L_6 = PersistentStorage_GetIntValue_m3114(L_5, (String_t*) &_stringLiteral1079, 0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		float L_10 = Utilities_SecondsSinceEpoch_m3400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_11 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_11);
		float L_12 = PersistentStorage_GetFloatValue_m3112(L_11, (String_t*) &_stringLiteral1080, (0.0f), /*hidden argument*/NULL);
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
		Vector3_t496  L_17 = {0};
		Vector3__ctor_m3807(&L_17, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t737  L_18 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_19 = Object_Instantiate_m3914(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_5 = ((GameObject_t352 *)IsInst(L_19, GameObject_t352_il2cpp_TypeInfo_var));
		DialogController_t494 * L_20 = ((DialogController_t494_StaticFields*)DialogController_t494_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_21 = V_5;
		NullCheck(L_20);
		DialogController_ShowDialog_m2675(L_20, L_21, /*hidden argument*/NULL);
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

// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelper.h"
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelperMethodDeclarations.h"


// System.Void RateMeDialog::.ctor()
extern "C" void RateMeDialog__ctor_m3195 (RateMeDialog_t590 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::Start()
extern "C" void RateMeDialog_Start_m3196 (RateMeDialog_t590 * __this, const MethodInfo* method)
{
	{
		RateMeDialog_RecordShowTime_m3197(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RecordShowTime()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RecordShowTime_m3197 (RateMeDialog_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3114(L_0, (String_t*) &_stringLiteral1017, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		float L_2 = Utilities_SecondsSinceEpoch_m3400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		PersistentStorage_t580 * L_3 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PersistentStorage_SetIntValue_m3113(L_3, (String_t*) &_stringLiteral1079, L_4, /*hidden argument*/NULL);
		PersistentStorage_t580 * L_5 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		float L_6 = V_1;
		NullCheck(L_5);
		PersistentStorage_SetFloatValue_m3111(L_5, (String_t*) &_stringLiteral1080, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RateThis()
extern TypeInfo* RatingsHelper_t591_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t494_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RateThis_m3198 (RateMeDialog_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		DialogController_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t591 * L_0 = ((RatingsHelper_t591_StaticFields*)RatingsHelper_t591_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m3204(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_1 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3115(L_1, (String_t*) &_stringLiteral1078, 1, /*hidden argument*/NULL);
		DialogController_t494 * L_2 = ((DialogController_t494_StaticFields*)DialogController_t494_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		DialogController_HideDialog_m2676(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RemindMeLater()
extern TypeInfo* DialogController_t494_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RemindMeLater_m3199 (RateMeDialog_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t494 * L_0 = ((DialogController_t494_StaticFields*)DialogController_t494_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m2676(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::NoThanks()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t494_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_NoThanks_m3200 (RateMeDialog_t590 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		DialogController_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		PersistentStorage_SetBoolValue_m3115(L_0, (String_t*) &_stringLiteral1078, 1, /*hidden argument*/NULL);
		DialogController_t494 * L_1 = ((DialogController_t494_StaticFields*)DialogController_t494_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_2 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DialogController_HideDialog_m2676(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void RatingsHelper::.ctor()
extern "C" void RatingsHelper__ctor_m3201 (RatingsHelper_t591 * __this, const MethodInfo* method)
{
	{
		__this->___iosAppID_2 = (String_t*) &_stringLiteral1081;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RatingsHelper::Awake()
extern TypeInfo* RatingsHelper_t591_il2cpp_TypeInfo_var;
extern "C" void RatingsHelper_Awake_m3202 (RatingsHelper_t591 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RatingsHelper_t591_StaticFields*)RatingsHelper_t591_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.String RatingsHelper::GetStorePageURL()
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RatingsHelper_GetStorePageURL_m3203 (RatingsHelper_t591 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		float L_1 = Utilities_GetIOSVersion_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1082, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002d:
	{
		String_t* L_5 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1083, L_5, (String_t*) &_stringLiteral1084, /*hidden argument*/NULL);
		return L_6;
	}

IL_0043:
	{
		String_t* L_7 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1085, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void RatingsHelper::ShowRatingsPage()
extern "C" void RatingsHelper_ShowRatingsPage_m3204 (RatingsHelper_t591 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = RatingsHelper_GetStorePageURL_m3203(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		Application_OpenURL_m3733(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
extern "C" void RestartGameHandler__ctor_m3205 (RestartGameHandler_t592 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::RestartGame()
extern "C" void RestartGameHandler_RestartGame_m3206 (RestartGameHandler_t592 * __this, const MethodInfo* method)
{
	{
		GameController_t511 * L_0 = GameController_get_instance_m2733(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameController_RestartGame_m2741(L_0, /*hidden argument*/NULL);
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
extern "C" void SFXButton__ctor_m3207 (SFXButton_t593 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t472_m3937_MethodInfo_var;
extern "C" void SFXButton_Awake_m3208 (SFXButton_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t472_m3937_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484131);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1086;
		String_t* L_0 = V_0;
		Sprite_t472 * L_1 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		__this->___soundOnSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1087;
		String_t* L_2 = V_0;
		Sprite_t472 * L_3 = Resources_Load_TisSprite_t472_m3937(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t472_m3937_MethodInfo_var);
		__this->___soundOffSprite_4 = L_3;
		return;
	}
}
// System.Void SFXButton::Start()
extern "C" void SFXButton_Start_m3209 (SFXButton_t593 * __this, const MethodInfo* method)
{
	{
		SFXButton_RegisterForEvents_m3211(__this, /*hidden argument*/NULL);
		SFXButton_UpdateButtonImage_m3214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::OnDestroy()
extern "C" void SFXButton_OnDestroy_m3210 (SFXButton_t593 * __this, const MethodInfo* method)
{
	{
		SFXButton_UnregisterForEvents_m3212(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::RegisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3213_MethodInfo_var;
extern "C" void SFXButton_RegisterForEvents_m3211 (SFXButton_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		SFXButton_OnSoundMuteChanged_m3213_MethodInfo_var = il2cpp_codegen_method_info_from_index(578);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3213_MethodInfo_var };
		SoundMuteChangedEventHandler_t609 * L_3 = (SoundMuteChangedEventHandler_t609 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3286(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3295(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UnregisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3213_MethodInfo_var;
extern "C" void SFXButton_UnregisterForEvents_m3212 (SFXButton_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		SFXButton_OnSoundMuteChanged_m3213_MethodInfo_var = il2cpp_codegen_method_info_from_index(578);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3213_MethodInfo_var };
		SoundMuteChangedEventHandler_t609 * L_3 = (SoundMuteChangedEventHandler_t609 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3286(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3296(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXButton::OnSoundMuteChanged()
extern "C" void SFXButton_OnSoundMuteChanged_m3213 (SFXButton_t593 * __this, const MethodInfo* method)
{
	{
		SFXButton_UpdateButtonImage_m3214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UpdateButtonImage()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void SFXButton_UpdateButtonImage_m3214 (SFXButton_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3299(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t463 * L_2 = (__this->___buttonImage_5);
		Sprite_t472 * L_3 = (__this->___soundOffSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m3925(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t463 * L_4 = (__this->___buttonImage_5);
		Sprite_t472 * L_5 = (__this->___soundOnSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m3925(L_4, L_5, /*hidden argument*/NULL);
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
struct AudioSource_t571;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m3630_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m3630(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3630_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t571_m3770(__this, method) (( AudioSource_t571 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3630_gshared)(__this, method)


// System.Void SFXPlayer::.ctor()
extern TypeInfo* SFXTypeU5BU5D_t596_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer__ctor_m3215 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXTypeU5BU5D_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(552);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXTypeU5BU5D_t596* L_0 = ((SFXTypeU5BU5D_t596*)SZArrayNew(SFXTypeU5BU5D_t596_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 1)) = (int32_t)1;
		__this->___deadMouseIds_4 = L_0;
		SFXTypeU5BU5D_t596* L_1 = ((SFXTypeU5BU5D_t596*)SZArrayNew(SFXTypeU5BU5D_t596_il2cpp_TypeInfo_var, 3));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 0)) = (int32_t)3;
		SFXTypeU5BU5D_t596* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 1)) = (int32_t)4;
		SFXTypeU5BU5D_t596* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, 2)) = (int32_t)5;
		__this->___slapIds_5 = L_3;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// SFXPlayer SFXPlayer::get_instance()
extern TypeInfo* SFXPlayer_t597_il2cpp_TypeInfo_var;
extern "C" SFXPlayer_t597 * SFXPlayer_get_instance_m3216 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t597 * L_0 = ((SFXPlayer_t597_StaticFields*)SFXPlayer_t597_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SFXPlayer::set_instance(SFXPlayer)
extern TypeInfo* SFXPlayer_t597_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_set_instance_m3217 (Object_t * __this /* static, unused */, SFXPlayer_t597 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t597 * L_0 = ___value;
		((SFXPlayer_t597_StaticFields*)SFXPlayer_t597_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void SFXPlayer::Awake()
extern "C" void SFXPlayer_Awake_m3218 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_set_instance_m3217(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSources_m3219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSources()
extern TypeInfo* AudioSourceU5BU5D_t595_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_LoadAudioSources_m3219 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSourceU5BU5D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___audioSources_2 = ((AudioSourceU5BU5D_t595*)SZArrayNew(AudioSourceU5BU5D_t595_il2cpp_TypeInfo_var, 8));
		SFXPlayer_LoadAudioSource_m3220(__this, 0, (String_t*) &_stringLiteral1044, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3220(__this, 1, (String_t*) &_stringLiteral1046, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3220(__this, 2, (String_t*) &_stringLiteral1088, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3220(__this, 3, (String_t*) &_stringLiteral1089, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3220(__this, 4, (String_t*) &_stringLiteral1090, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3220(__this, 5, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3220(__this, 6, (String_t*) &_stringLiteral1092, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3220(__this, 7, (String_t*) &_stringLiteral1093, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSource(SFXPlayer/SFXType,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* AudioClip_t395_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t571_m3770_MethodInfo_var;
extern "C" void SFXPlayer_LoadAudioSource_m3220 (SFXPlayer_t597 * __this, int32_t ___type, String_t* ___resourceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		AudioClip_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		GameObject_AddComponent_TisAudioSource_t571_m3770_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t571 * V_0 = {0};
	AudioClip_t395 * V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_t571 * L_1 = GameObject_AddComponent_TisAudioSource_t571_m3770(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t571_m3770_MethodInfo_var);
		V_0 = L_1;
		String_t* L_2 = ___resourceName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1094, L_2, /*hidden argument*/NULL);
		Object_t655 * L_4 = Resources_Load_m3555(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = ((AudioClip_t395 *)IsInst(L_4, AudioClip_t395_il2cpp_TypeInfo_var));
		AudioSource_t571 * L_5 = V_0;
		AudioClip_t395 * L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_clip_m3772(L_5, L_6, /*hidden argument*/NULL);
		AudioSourceU5BU5D_t595* L_7 = (__this->___audioSources_2);
		int32_t L_8 = ___type;
		AudioSource_t571 * L_9 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ArrayElementTypeCheck (L_7, L_9);
		*((AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_7, L_8)) = (AudioSource_t571 *)L_9;
		return;
	}
}
// System.Void SFXPlayer::Play(SFXPlayer/SFXType)
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_Play_m3221 (SFXPlayer_t597 * __this, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3299(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t595* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Play_m4046((*(AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayDelayed(SFXPlayer/SFXType,System.Single)
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_PlayDelayed_m3222 (SFXPlayer_t597 * __this, int32_t ___type, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3299(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t595* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		float L_5 = ___delay;
		NullCheck((*(AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_PlayDelayed_m4064((*(AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_2, L_4)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayRandom(SFXPlayer/SFXType[],System.Single)
extern "C" void SFXPlayer_PlayRandom_m3223 (SFXPlayer_t597 * __this, SFXTypeU5BU5D_t596* ___types, float ___delay, const MethodInfo* method)
{
	int32_t V_0 = 0;
	AudioSource_t571 * V_1 = {0};
	{
		SFXTypeU5BU5D_t596* L_0 = ___types;
		NullCheck(L_0);
		int32_t L_1 = Random_Range_m3538(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		AudioSourceU5BU5D_t595* L_2 = (__this->___audioSources_2);
		SFXTypeU5BU5D_t596* L_3 = ___types;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5)));
		int32_t L_6 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5));
		V_1 = (*(AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_2, L_6));
		AudioSource_t571 * L_7 = V_1;
		float L_8 = ___delay;
		NullCheck(L_7);
		AudioSource_PlayDelayed_m4064(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::Start()
extern "C" void SFXPlayer_Start_m3224 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_RegisterForEvents_m3226(__this, /*hidden argument*/NULL);
		SFXPlayer_OnSoundMuteChanged_m3228(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::OnDestroy()
extern "C" void SFXPlayer_OnDestroy_m3225 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_UnregisterForEvents_m3227(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::RegisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3228_MethodInfo_var;
extern "C" void SFXPlayer_RegisterForEvents_m3226 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		SFXPlayer_OnSoundMuteChanged_m3228_MethodInfo_var = il2cpp_codegen_method_info_from_index(579);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3228_MethodInfo_var };
		SoundMuteChangedEventHandler_t609 * L_3 = (SoundMuteChangedEventHandler_t609 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3286(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3295(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::UnregisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3228_MethodInfo_var;
extern "C" void SFXPlayer_UnregisterForEvents_m3227 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		SFXPlayer_OnSoundMuteChanged_m3228_MethodInfo_var = il2cpp_codegen_method_info_from_index(579);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3228_MethodInfo_var };
		SoundMuteChangedEventHandler_t609 * L_3 = (SoundMuteChangedEventHandler_t609 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3286(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3296(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXPlayer::OnSoundMuteChanged()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_OnSoundMuteChanged_m3228 (SFXPlayer_t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		SoundController_t611 * L_0 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3299(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t595* L_2 = (__this->___audioSources_2);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Stop_m3773((*(AudioSource_t571 **)(AudioSource_t571 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
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
extern "C" void SFXSilencer__ctor_m3229 (SFXSilencer_t598 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::Start()
extern "C" void SFXSilencer_Start_m3230 (SFXSilencer_t598 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_RegisterForEvents_m3232(__this, /*hidden argument*/NULL);
		SFXSilencer_UpdateSoundsActive_m3235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::OnDestroy()
extern "C" void SFXSilencer_OnDestroy_m3231 (SFXSilencer_t598 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UnregisterForEvents_m3233(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::RegisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3234_MethodInfo_var;
extern "C" void SFXSilencer_RegisterForEvents_m3232 (SFXSilencer_t598 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		SFXSilencer_OnSoundMuteChanged_m3234_MethodInfo_var = il2cpp_codegen_method_info_from_index(580);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3234_MethodInfo_var };
		SoundMuteChangedEventHandler_t609 * L_3 = (SoundMuteChangedEventHandler_t609 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3286(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3295(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UnregisterForEvents()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3234_MethodInfo_var;
extern "C" void SFXSilencer_UnregisterForEvents_m3233 (SFXSilencer_t598 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		SFXSilencer_OnSoundMuteChanged_m3234_MethodInfo_var = il2cpp_codegen_method_info_from_index(580);
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
		SoundController_t611 * L_1 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3234_MethodInfo_var };
		SoundMuteChangedEventHandler_t609 * L_3 = (SoundMuteChangedEventHandler_t609 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3286(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3296(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXSilencer::OnSoundMuteChanged()
extern "C" void SFXSilencer_OnSoundMuteChanged_m3234 (SFXSilencer_t598 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UpdateSoundsActive_m3235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UpdateSoundsActive()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void SFXSilencer_UpdateSoundsActive_m3235 (SFXSilencer_t598 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
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
		Transform_t406 * L_0 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_t406 * L_2 = Transform_GetChild_m4065(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3529(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t352 * L_4 = V_1;
		SoundController_t611 * L_5 = ((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		bool L_6 = SoundController_get_sfxMuted_m3299(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m3729(L_4, ((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		Transform_t406 * L_9 = Component_get_transform_m3809(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m4066(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// ScoreController
#include "AssemblyU2DCSharp_ScoreController.h"
#ifndef _MSC_VER
#else
#endif
// ScoreController
#include "AssemblyU2DCSharp_ScoreControllerMethodDeclarations.h"

// DeadMouseRelay/MouseKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MouseKillEventHandler.h"
// DeadMouseRelay/MouseKillEventHandler
#include "AssemblyU2DCSharp_DeadMouseRelay_MouseKillEventHandlerMethodDeclarations.h"


// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3236 (ScoreController_t599 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3237 (ScoreController_t599 * __this, const MethodInfo* method)
{
	{
		ScoreController_RegisterForEvents_m3239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3238 (ScoreController_t599 * __this, const MethodInfo* method)
{
	{
		ScoreController_UnregisterForEvents_m3240(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t489_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t488_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3241_MethodInfo_var;
extern "C" void ScoreController_RegisterForEvents_m3239 (ScoreController_t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MouseKillEventHandler_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		ScoreController_OnMouseKill_m3241_MethodInfo_var = il2cpp_codegen_method_info_from_index(581);
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
		DeadMouseRelay_t489 * L_1 = ((DeadMouseRelay_t489_StaticFields*)DeadMouseRelay_t489_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3241_MethodInfo_var };
		MouseKillEventHandler_t488 * L_3 = (MouseKillEventHandler_t488 *)il2cpp_codegen_object_new (MouseKillEventHandler_t488_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2643(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MouseKill_m2650(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t489_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t488_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3241_MethodInfo_var;
extern "C" void ScoreController_UnregisterForEvents_m3240 (ScoreController_t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MouseKillEventHandler_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		ScoreController_OnMouseKill_m3241_MethodInfo_var = il2cpp_codegen_method_info_from_index(581);
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
		DeadMouseRelay_t489 * L_1 = ((DeadMouseRelay_t489_StaticFields*)DeadMouseRelay_t489_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3241_MethodInfo_var };
		MouseKillEventHandler_t488 * L_3 = (MouseKillEventHandler_t488 *)il2cpp_codegen_object_new (MouseKillEventHandler_t488_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2643(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MouseKill_m2651(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3241 (ScoreController_t599 * __this, MouseMove_t487 * ___deadMouse, const MethodInfo* method)
{
	{
		PlayerStats_t475 * L_0 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayerStats_IncrementScore_m3174(L_0, 1, /*hidden argument*/NULL);
		MouseMove_t487 * L_1 = ___deadMouse;
		ScoreController_MakeScoreEffect_m3242(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::MakeScoreEffect(MouseMove)
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4026_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t505_m4028_MethodInfo_var;
extern "C" void ScoreController_MakeScoreEffect_m3242 (ScoreController_t599 * __this, MouseMove_t487 * ___deadMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4026_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t505_m4028_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t505 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___scoreEffectPrototype_3);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4026(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4026_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		FlyingAnimation_t505 * L_3 = GameObject_GetComponent_TisFlyingAnimation_t505_m4028(L_2, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t505_m4028_MethodInfo_var);
		V_1 = L_3;
		FlyingAnimation_t505 * L_4 = V_1;
		MouseMove_t487 * L_5 = ___deadMouse;
		NullCheck(L_5);
		Transform_t406 * L_6 = Component_get_transform_m3809(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t496  L_7 = Transform_get_position_m3814(L_6, /*hidden argument*/NULL);
		GameObject_t352 * L_8 = (__this->___scoreDisplay_4);
		NullCheck(L_4);
		FlyingAnimation_Configure_m2724(L_4, L_7, L_8, /*hidden argument*/NULL);
		FlyingAnimation_t505 * L_9 = V_1;
		NullCheck(L_9);
		FlyingAnimation_Run_m2725(L_9, /*hidden argument*/NULL);
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

// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputFieldMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void SecretUI::.ctor()
extern "C" void SecretUI__ctor_m3243 (SecretUI_t602 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Awake()
extern TypeInfo* SecretUI_t602_il2cpp_TypeInfo_var;
extern "C" void SecretUI_Awake_m3244 (SecretUI_t602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SecretUI_t602_StaticFields*)SecretUI_t602_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		return;
	}
}
// System.Void SecretUI::Start()
extern "C" void SecretUI_Start_m3245 (SecretUI_t602 * __this, const MethodInfo* method)
{
	{
		__this->___uiIsVisible_4 = 0;
		SecretUI_UpdateVisibility_m3246(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::UpdateVisibility()
extern "C" void SecretUI_UpdateVisibility_m3246 (SecretUI_t602 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___uiIsVisible_4);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CanvasGroup_t601 * L_1 = (__this->___canvasGroup_3);
		NullCheck(L_1);
		CanvasGroup_set_alpha_m4067(L_1, (1.0f), /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		CanvasGroup_t601 * L_2 = (__this->___canvasGroup_3);
		NullCheck(L_2);
		CanvasGroup_set_alpha_m4067(L_2, (0.0f), /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void SecretUI::Update()
extern "C" void SecretUI_Update_m3247 (SecretUI_t602 * __this, const MethodInfo* method)
{
	{
		InputField_t600 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		bool L_1 = InputField_get_isFocused_m4068(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		bool L_2 = (__this->___uiIsVisible_4);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		__this->___uiIsVisible_4 = 0;
		SecretUI_MaybeApplySuggestedLevel_m3248(__this, /*hidden argument*/NULL);
		SecretUI_UpdateVisibility_m3246(__this, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0033:
	{
		InputField_t600 * L_3 = (__this->___inputField_2);
		NullCheck(L_3);
		bool L_4 = InputField_get_isFocused_m4068(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		bool L_5 = (__this->___uiIsVisible_4);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		__this->___uiIsVisible_4 = 1;
		SecretUI_UpdateVisibility_m3246(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void SecretUI::MaybeApplySuggestedLevel()
extern TypeInfo* SecretUI_t602_il2cpp_TypeInfo_var;
extern "C" void SecretUI_MaybeApplySuggestedLevel_m3248 (SecretUI_t602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(557);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = SecretUI_GetSuggestedLevel_m3249(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		GameLevelState_t513 * L_2 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameLevelState_SetGameLevel_m2765(L_2, L_3, /*hidden argument*/NULL);
		SecretUI_t602 * L_4 = ((SecretUI_t602_StaticFields*)SecretUI_t602_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_4);
		SecretUI_ClearSuggestedLevel_m3250(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Int32 SecretUI::GetSuggestedLevel()
extern "C" int32_t SecretUI_GetSuggestedLevel_m3249 (SecretUI_t602 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		InputField_t600 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m4069(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = Int32_TryParse_m398(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_1;
		return L_5;
	}

IL_0022:
	{
		return (-1);
	}
}
// System.Void SecretUI::ClearSuggestedLevel()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ClearSuggestedLevel_m3250 (SecretUI_t602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t600 * L_0 = (__this->___inputField_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_0);
		InputField_set_text_m4070(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// SizeCamera
#include "AssemblyU2DCSharp_SizeCamera.h"
#ifndef _MSC_VER
#else
#endif
// SizeCamera
#include "AssemblyU2DCSharp_SizeCameraMethodDeclarations.h"

struct Component_t714;
struct Camera_t532;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t532_m3903(__this, method) (( Camera_t532 * (*) (Component_t714 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3769_gshared)(__this, method)


// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m3251 (SizeCamera_t478 * __this, const MethodInfo* method)
{
	{
		__this->___minWorldAspectRatio_2 = (1.33333337f);
		__this->___targetWorldHalfHeight_3 = (5.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::Configure()
extern const MethodInfo* Component_GetComponent_TisCamera_t532_m3903_MethodInfo_var;
extern "C" void SizeCamera_Configure_m3252 (SizeCamera_t478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t532_m3903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484112);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Camera_t532 * V_4 = {0};
	Rect_t650  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3449(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___screenPixelsTopToIgnore_4);
		float L_2 = (__this->___screenPixelsBottomToIgnore_5);
		V_0 = ((float)((float)(((float)L_0))-(float)((float)((float)L_1+(float)L_2))));
		int32_t L_3 = Screen_get_width_m3434(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = V_0;
		V_1 = ((float)((float)(((float)L_3))/(float)L_4));
		float L_5 = (__this->___targetWorldHalfHeight_3);
		V_2 = L_5;
		float L_6 = V_1;
		float L_7 = V_2;
		V_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = V_1;
		float L_9 = (__this->___minWorldAspectRatio_2);
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0047;
		}
	}
	{
		float L_10 = (__this->___minWorldAspectRatio_2);
		float L_11 = (__this->___targetWorldHalfHeight_3);
		V_3 = ((float)((float)L_10*(float)L_11));
		float L_12 = V_3;
		float L_13 = V_1;
		V_2 = ((float)((float)L_12/(float)L_13));
	}

IL_0047:
	{
		Camera_t532 * L_14 = Component_GetComponent_TisCamera_t532_m3903(__this, /*hidden argument*/Component_GetComponent_TisCamera_t532_m3903_MethodInfo_var);
		V_4 = L_14;
		Camera_t532 * L_15 = V_4;
		float L_16 = V_2;
		NullCheck(L_15);
		Camera_set_orthographicSize_m4071(L_15, L_16, /*hidden argument*/NULL);
		Camera_t532 * L_17 = V_4;
		NullCheck(L_17);
		Rect_t650  L_18 = Camera_get_rect_m3904(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		float L_19 = (__this->___screenPixelsBottomToIgnore_5);
		int32_t L_20 = Screen_get_height_m3449(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_19/(float)(((float)L_20))));
		float L_21 = V_0;
		int32_t L_22 = Screen_get_height_m3449(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_21/(float)(((float)L_22))));
		Rect_set_width_m3905((&V_5), (1.0f), /*hidden argument*/NULL);
		float L_23 = V_7;
		Rect_set_height_m3906((&V_5), L_23, /*hidden argument*/NULL);
		Rect_set_x_m3907((&V_5), (0.0f), /*hidden argument*/NULL);
		float L_24 = V_6;
		Rect_set_y_m3908((&V_5), L_24, /*hidden argument*/NULL);
		Camera_t532 * L_25 = V_4;
		Rect_t650  L_26 = V_5;
		NullCheck(L_25);
		Camera_set_rect_m3909(L_25, L_26, /*hidden argument*/NULL);
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
extern "C" void SlowByCollision__ctor_m3253 (SlowByCollision_t603 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3254 (SlowByCollision_t603 * __this, Collider2D_t579 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t579 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3256(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3255 (SlowByCollision_t603 * __this, Collider2D_t579 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t579 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3256(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952_MethodInfo_var;
extern "C" void SlowByCollision_HandleCollision_m3256 (SlowByCollision_t603 * __this, Collider2D_t579 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484138);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t487 * V_0 = {0};
	{
		Collider2D_t579 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m3954(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral971, /*hidden argument*/NULL);
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
		Collider2D_t579 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3529(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		MouseMove_t487 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t487_m3952_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t487 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m2986(L_6, /*hidden argument*/NULL);
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
		MouseMove_t487 * L_8 = V_0;
		NullCheck(L_8);
		MouseMove_OnFartedUpon_m2998(L_8, /*hidden argument*/NULL);
		return;
	}
}
// SocialHelper/<DebugScoreAndAchievement>c__Iterator19
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<DebugScoreAndAchievement>c__Iterator19
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3MethodDeclarations.h"

// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"


// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator19::.ctor()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator19__ctor_m3257 (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator19::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator19_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3258 (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator19::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator19_System_Collections_IEnumerator_get_Current_m3259 (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean SocialHelper/<DebugScoreAndAchievement>c__Iterator19::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CDebugScoreAndAchievementU3Ec__Iterator19_MoveNext_m3260 (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1099, /*hidden argument*/NULL);
		WaitForSeconds_t738 * L_2 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_2, (2.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0065;
	}

IL_0047:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		SocialHelper_CustomReportAchievement_m3268(NULL /*static, unused*/, (String_t*) &_stringLiteral1101, /*hidden argument*/NULL);
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
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator19::Dispose()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator19_Dispose_m3261 (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator19::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator19_Reset_m3262 (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * __this, const MethodInfo* method)
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
// SocialHelper/<Authenticate>c__AnonStorey1C
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStor.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<Authenticate>c__AnonStorey1C
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStorMethodDeclarations.h"

// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"


// System.Void SocialHelper/<Authenticate>c__AnonStorey1C::.ctor()
extern "C" void U3CAuthenticateU3Ec__AnonStorey1C__ctor_m3263 (U3CAuthenticateU3Ec__AnonStorey1C_t605 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<Authenticate>c__AnonStorey1C::<>m__4E(System.Boolean)
extern TypeInfo* GameCenterPlatform_t750_il2cpp_TypeInfo_var;
extern "C" void U3CAuthenticateU3Ec__AnonStorey1C_U3CU3Em__4E_m3264 (U3CAuthenticateU3Ec__AnonStorey1C_t605 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
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
		int32_t L_1 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t750_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m4072(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
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
// SocialHelper/<RecordAchievement>c__AnonStorey1D
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<RecordAchievement>c__AnonStorey1D
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__AnoMethodDeclarations.h"



// System.Void SocialHelper/<RecordAchievement>c__AnonStorey1D::.ctor()
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1D__ctor_m3265 (U3CRecordAchievementU3Ec__AnonStorey1D_t606 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<RecordAchievement>c__AnonStorey1D::<>m__50(System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1D_U3CU3Em__50_m3266 (U3CRecordAchievementU3Ec__AnonStorey1D_t606 * __this, bool ___success, const MethodInfo* method)
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
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1102, L_0, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = ___success;
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1103, L_4, /*hidden argument*/NULL);
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
extern "C" void SocialHelper__ctor_m3267 (SocialHelper_t607 * __this, const MethodInfo* method)
{
	{
		__this->___leaderboardID_2 = (String_t*) &_stringLiteral1095;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" {int32_t DEFAULT_CALL CustomReportAchievement(char*);}
extern "C" bool SocialHelper_CustomReportAchievement_m3268 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method)
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
extern "C" bool SocialHelper_CustomClearAchivements_m3269 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern TypeInfo* SocialHelper_t607_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_Awake_m3270 (SocialHelper_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SocialHelper_t607_StaticFields*)SocialHelper_t607_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		int32_t L_0 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern TypeInfo* U3CAuthenticateU3Ec__AnonStorey1C_t605_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t745_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAuthenticateU3Ec__AnonStorey1C_U3CU3Em__4E_m3264_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3636_MethodInfo_var;
extern "C" void SocialHelper_Authenticate_m3271 (SocialHelper_t607 * __this, Action_1_t277 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAuthenticateU3Ec__AnonStorey1C_t605_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		ILocalUser_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		U3CAuthenticateU3Ec__AnonStorey1C_U3CU3Em__4E_m3264_MethodInfo_var = il2cpp_codegen_method_info_from_index(582);
		Action_1__ctor_m3636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CAuthenticateU3Ec__AnonStorey1C_t605 * V_0 = {0};
	{
		U3CAuthenticateU3Ec__AnonStorey1C_t605 * L_0 = (U3CAuthenticateU3Ec__AnonStorey1C_t605 *)il2cpp_codegen_object_new (U3CAuthenticateU3Ec__AnonStorey1C_t605_il2cpp_TypeInfo_var);
		U3CAuthenticateU3Ec__AnonStorey1C__ctor_m3263(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAuthenticateU3Ec__AnonStorey1C_t605 * L_1 = V_0;
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
		Object_t * L_4 = Social_get_localUser_m3972(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CAuthenticateU3Ec__AnonStorey1C_t605 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)U3CAuthenticateU3Ec__AnonStorey1C_U3CU3Em__4E_m3264_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3636(L_7, L_5, L_6, /*hidden argument*/Action_1__ctor_m3636_MethodInfo_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t277 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t745_il2cpp_TypeInfo_var, L_4, L_7);
		goto IL_003f;
	}

IL_0033:
	{
		U3CAuthenticateU3Ec__AnonStorey1C_t605 * L_8 = V_0;
		NullCheck(L_8);
		Action_1_t277 * L_9 = (L_8->___handler_0);
		NullCheck(L_9);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_9, 0);
	}

IL_003f:
	{
		return;
	}
}
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern TypeInfo* U3CDebugScoreAndAchievementU3Ec__Iterator19_t604_il2cpp_TypeInfo_var;
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m3272 (SocialHelper_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator19_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * V_0 = {0};
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * L_0 = (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 *)il2cpp_codegen_object_new (U3CDebugScoreAndAchievementU3Ec__Iterator19_t604_il2cpp_TypeInfo_var);
		U3CDebugScoreAndAchievementU3Ec__Iterator19__ctor_m3257(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDebugScoreAndAchievementU3Ec__Iterator19_t604 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m3273 (SocialHelper_t607 * __this, const MethodInfo* method)
{
	{
		SocialHelper_CustomClearAchivements_m3269(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ReportScore(System.Int32)
extern TypeInfo* ILocalUser_t745_il2cpp_TypeInfo_var;
extern TypeInfo* SocialHelper_t607_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CReportScoreU3Em__4F_m3279_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3636_MethodInfo_var;
extern "C" void SocialHelper_ReportScore_m3274 (SocialHelper_t607 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		SocialHelper_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CReportScoreU3Em__4F_m3279_MethodInfo_var = il2cpp_codegen_method_info_from_index(583);
		Action_1__ctor_m3636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B4_0 = {0};
	int64_t G_B4_1 = 0;
	String_t* G_B3_0 = {0};
	int64_t G_B3_1 = 0;
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1096, /*hidden argument*/NULL);
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		Object_t * L_1 = Social_get_localUser_m3972(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t745_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_3 = ___score;
		String_t* L_4 = (__this->___leaderboardID_2);
		Action_1_t277 * L_5 = ((SocialHelper_t607_StaticFields*)SocialHelper_t607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
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
		IntPtr_t L_6 = { (void*)SocialHelper_U3CReportScoreU3Em__4F_m3279_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3636(L_7, NULL, L_6, /*hidden argument*/Action_1__ctor_m3636_MethodInfo_var);
		((SocialHelper_t607_StaticFields*)SocialHelper_t607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_7;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		Action_1_t277 * L_8 = ((SocialHelper_t607_StaticFields*)SocialHelper_t607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		Social_ReportScore_m4073(NULL /*static, unused*/, G_B4_1, G_B4_0, L_8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void SocialHelper::RecordAchievement(System.String)
extern TypeInfo* U3CRecordAchievementU3Ec__AnonStorey1D_t606_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t745_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRecordAchievementU3Ec__AnonStorey1D_U3CU3Em__50_m3266_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3636_MethodInfo_var;
extern "C" void SocialHelper_RecordAchievement_m3275 (SocialHelper_t607 * __this, String_t* ___achievementID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRecordAchievementU3Ec__AnonStorey1D_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(561);
		ILocalUser_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		U3CRecordAchievementU3Ec__AnonStorey1D_U3CU3Em__50_m3266_MethodInfo_var = il2cpp_codegen_method_info_from_index(584);
		Action_1__ctor_m3636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CRecordAchievementU3Ec__AnonStorey1D_t606 * V_0 = {0};
	{
		U3CRecordAchievementU3Ec__AnonStorey1D_t606 * L_0 = (U3CRecordAchievementU3Ec__AnonStorey1D_t606 *)il2cpp_codegen_object_new (U3CRecordAchievementU3Ec__AnonStorey1D_t606_il2cpp_TypeInfo_var);
		U3CRecordAchievementU3Ec__AnonStorey1D__ctor_m3265(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRecordAchievementU3Ec__AnonStorey1D_t606 * L_1 = V_0;
		String_t* L_2 = ___achievementID;
		NullCheck(L_1);
		L_1->___achievementID_0 = L_2;
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1097, /*hidden argument*/NULL);
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m3972(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t745_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		U3CRecordAchievementU3Ec__AnonStorey1D_t606 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___achievementID_0);
		SocialHelper_CustomReportAchievement_m3268(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_004d:
	{
		U3CRecordAchievementU3Ec__AnonStorey1D_t606 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___achievementID_0);
		U3CRecordAchievementU3Ec__AnonStorey1D_t606 * L_11 = V_0;
		IntPtr_t L_12 = { (void*)U3CRecordAchievementU3Ec__AnonStorey1D_U3CU3Em__50_m3266_MethodInfo_var };
		Action_1_t277 * L_13 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3636(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m3636_MethodInfo_var);
		Social_ReportProgress_m4074(NULL /*static, unused*/, L_10, (100.0), L_13, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m3276 (SocialHelper_t607 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		return L_0;
	}
}
// System.Void SocialHelper::ShowLeaderBoard()
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowLeaderBoardU3Em__51_m3280_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3636_MethodInfo_var;
extern "C" void SocialHelper_ShowLeaderBoard_m3277 (SocialHelper_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowLeaderBoardU3Em__51_m3280_MethodInfo_var = il2cpp_codegen_method_info_from_index(585);
		Action_1__ctor_m3636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
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
		IntPtr_t L_1 = { (void*)SocialHelper_U3CShowLeaderBoardU3Em__51_m3280_MethodInfo_var };
		Action_1_t277 * L_2 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3636(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m3636_MethodInfo_var);
		SocialHelper_Authenticate_m3271(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ShowAchievements()
extern TypeInfo* SocialHelper_t607_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowAchievementsU3Em__52_m3281_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3636_MethodInfo_var;
extern "C" void SocialHelper_ShowAchievements_m3278 (SocialHelper_t607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowAchievementsU3Em__52_m3281_MethodInfo_var = il2cpp_codegen_method_info_from_index(586);
		Action_1__ctor_m3636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t607 * G_B4_0 = {0};
	SocialHelper_t607 * G_B3_0 = {0};
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
		Action_1_t277 * L_1 = ((SocialHelper_t607_StaticFields*)SocialHelper_t607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B3_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		IntPtr_t L_2 = { (void*)SocialHelper_U3CShowAchievementsU3Em__52_m3281_MethodInfo_var };
		Action_1_t277 * L_3 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m3636(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m3636_MethodInfo_var);
		((SocialHelper_t607_StaticFields*)SocialHelper_t607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_3;
		G_B4_0 = G_B3_0;
	}

IL_0025:
	{
		Action_1_t277 * L_4 = ((SocialHelper_t607_StaticFields*)SocialHelper_t607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B4_0);
		SocialHelper_Authenticate_m3271(G_B4_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ReportScore>m__4F(System.Boolean)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CReportScoreU3Em__4F_m3279 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
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
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1098, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ShowLeaderBoard>m__51(System.Boolean)
extern TypeInfo* GameCenterPlatform_t750_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__51_m3280 (SocialHelper_t607 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = (__this->___leaderboardID_2);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t750_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowLeaderboardUI_m4075(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void SocialHelper::<ShowAchievements>m__52(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__52_m3281 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	{
		Social_ShowAchievementsUI_m4076(NULL /*static, unused*/, /*hidden argument*/NULL);
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

// UnityEngine.UI.Button/ButtonClickedEvent
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClickedEvent.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_ButtonMethodDeclarations.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"


// System.Void SocialMediaButtons::.ctor()
extern "C" void SocialMediaButtons__ctor_m3282 (SocialMediaButtons_t608 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::Start()
extern TypeInfo* SocialMediaButtons_t608_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialMediaButtons_U3CStartU3Em__53_m3284_MethodInfo_var;
extern const MethodInfo* SocialMediaButtons_U3CStartU3Em__54_m3285_MethodInfo_var;
extern "C" void SocialMediaButtons_Start_m3283 (SocialMediaButtons_t608 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialMediaButtons_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		UnityAction_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		SocialMediaButtons_U3CStartU3Em__53_m3284_MethodInfo_var = il2cpp_codegen_method_info_from_index(587);
		SocialMediaButtons_U3CStartU3Em__54_m3285_MethodInfo_var = il2cpp_codegen_method_info_from_index(588);
		s_Il2CppMethodIntialized = true;
	}
	ButtonClickedEvent_t743 * G_B2_0 = {0};
	ButtonClickedEvent_t743 * G_B1_0 = {0};
	ButtonClickedEvent_t743 * G_B4_0 = {0};
	ButtonClickedEvent_t743 * G_B3_0 = {0};
	{
		Button_t461 * L_0 = (__this->___fbButton_2);
		NullCheck(L_0);
		ButtonClickedEvent_t743 * L_1 = Button_get_onClick_m3967(L_0, /*hidden argument*/NULL);
		UnityAction_t507 * L_2 = ((SocialMediaButtons_t608_StaticFields*)SocialMediaButtons_t608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_4;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0023;
		}
	}
	{
		IntPtr_t L_3 = { (void*)SocialMediaButtons_U3CStartU3Em__53_m3284_MethodInfo_var };
		UnityAction_t507 * L_4 = (UnityAction_t507 *)il2cpp_codegen_object_new (UnityAction_t507_il2cpp_TypeInfo_var);
		UnityAction__ctor_m3968(L_4, NULL, L_3, /*hidden argument*/NULL);
		((SocialMediaButtons_t608_StaticFields*)SocialMediaButtons_t608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_4 = L_4;
		G_B2_0 = G_B1_0;
	}

IL_0023:
	{
		UnityAction_t507 * L_5 = ((SocialMediaButtons_t608_StaticFields*)SocialMediaButtons_t608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_4;
		NullCheck(G_B2_0);
		UnityEvent_AddListener_m3969(G_B2_0, L_5, /*hidden argument*/NULL);
		Button_t461 * L_6 = (__this->___twitterButton_3);
		NullCheck(L_6);
		ButtonClickedEvent_t743 * L_7 = Button_get_onClick_m3967(L_6, /*hidden argument*/NULL);
		UnityAction_t507 * L_8 = ((SocialMediaButtons_t608_StaticFields*)SocialMediaButtons_t608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		G_B3_0 = L_7;
		if (L_8)
		{
			G_B4_0 = L_7;
			goto IL_0050;
		}
	}
	{
		IntPtr_t L_9 = { (void*)SocialMediaButtons_U3CStartU3Em__54_m3285_MethodInfo_var };
		UnityAction_t507 * L_10 = (UnityAction_t507 *)il2cpp_codegen_object_new (UnityAction_t507_il2cpp_TypeInfo_var);
		UnityAction__ctor_m3968(L_10, NULL, L_9, /*hidden argument*/NULL);
		((SocialMediaButtons_t608_StaticFields*)SocialMediaButtons_t608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_10;
		G_B4_0 = G_B3_0;
	}

IL_0050:
	{
		UnityAction_t507 * L_11 = ((SocialMediaButtons_t608_StaticFields*)SocialMediaButtons_t608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		NullCheck(G_B4_0);
		UnityEvent_AddListener_m3969(G_B4_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::<Start>m__53()
extern TypeInfo* FacebookSharing_t498_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_U3CStartU3Em__53_m3284 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t475 * L_0 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_get_gameScore_m3162(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		FacebookSharing_t498 * L_2 = ((FacebookSharing_t498_StaticFields*)FacebookSharing_t498_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		FacebookSharing_ShareScore_m2698(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::<Start>m__54()
extern TypeInfo* TwitterSharing_t625_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_U3CStartU3Em__54_m3285 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t475 * L_0 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_get_gameScore_m3162(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TwitterSharing_t625 * L_2 = ((TwitterSharing_t625_StaticFields*)TwitterSharing_t625_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		TwitterSharing_ShareScore_m3375(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m3286 (SoundMuteChangedEventHandler_t609 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m3287 (SoundMuteChangedEventHandler_t609 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SoundMuteChangedEventHandler_Invoke_m3287((SoundMuteChangedEventHandler_t609 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t609(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m3288 (SoundMuteChangedEventHandler_t609 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m3289 (SoundMuteChangedEventHandler_t609 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController/MusicMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MusicMuteChangedEventHandler__ctor_m3290 (MusicMuteChangedEventHandler_t610 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/MusicMuteChangedEventHandler::Invoke()
extern "C" void MusicMuteChangedEventHandler_Invoke_m3291 (MusicMuteChangedEventHandler_t610 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MusicMuteChangedEventHandler_Invoke_m3291((MusicMuteChangedEventHandler_t610 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MusicMuteChangedEventHandler_t610(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/MusicMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MusicMuteChangedEventHandler_BeginInvoke_m3292 (MusicMuteChangedEventHandler_t610 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/MusicMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MusicMuteChangedEventHandler_EndInvoke_m3293 (MusicMuteChangedEventHandler_t610 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3294 (SoundController_t611 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_SoundMuteChanged_m3295 (SoundController_t611 * __this, SoundMuteChangedEventHandler_t609 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t609 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t609 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t609 *)Castclass(L_2, SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_SoundMuteChanged_m3296 (SoundController_t611 * __this, SoundMuteChangedEventHandler_t609 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t609 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t609 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t609 *)Castclass(L_2, SoundMuteChangedEventHandler_t609_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_MusicMuteChanged_m3297 (SoundController_t611 * __this, MusicMuteChangedEventHandler_t610 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t610 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t610 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t610 *)Castclass(L_2, MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_MusicMuteChanged_m3298 (SoundController_t611 * __this, MusicMuteChangedEventHandler_t610 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t610 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t610 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t610 *)Castclass(L_2, MusicMuteChangedEventHandler_t610_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3299 (SoundController_t611 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsfxMutedU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3300 (SoundController_t611 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsfxMutedU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3301 (SoundController_t611 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmusicMutedU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3302 (SoundController_t611 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmusicMutedU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void SoundController::Awake()
extern TypeInfo* SoundController_t611_il2cpp_TypeInfo_var;
extern "C" void SoundController_Awake_m3303 (SoundController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SoundController_t611_StaticFields*)SoundController_t611_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void SoundController::Start()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void SoundController_Start_m3304 (SoundController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m3116(L_0, (String_t*) &_stringLiteral1104, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3300(__this, L_1, /*hidden argument*/NULL);
		PersistentStorage_t580 * L_2 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = PersistentStorage_GetBoolValue_m3116(L_2, (String_t*) &_stringLiteral1105, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3302(__this, L_3, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t609 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		SoundMuteChangedEventHandler_t609 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0042:
	{
		MusicMuteChangedEventHandler_t610 * L_6 = (__this->___MusicMuteChanged_6);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		MusicMuteChangedEventHandler_t610 * L_7 = (__this->___MusicMuteChanged_6);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_7);
	}

IL_0058:
	{
		return;
	}
}
// System.Void SoundController::ToggleSoundsMuted()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleSoundsMuted_m3305 (SoundController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_sfxMuted_m3299(__this, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3300(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_1 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_sfxMuted_m3299(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3115(L_1, (String_t*) &_stringLiteral1104, L_2, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t609 * L_3 = (__this->___SoundMuteChanged_5);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		SoundMuteChangedEventHandler_t609 * L_4 = (__this->___SoundMuteChanged_5);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::ToggleMusicMuted()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleMusicMuted_m3306 (SoundController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3301(__this, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3302(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_1 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_musicMuted_m3301(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3115(L_1, (String_t*) &_stringLiteral1105, L_2, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t610 * L_3 = (__this->___MusicMuteChanged_6);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MusicMuteChangedEventHandler_t610 * L_4 = (__this->___MusicMuteChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3307 (SoundController_t611 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SoundController_get_musicMuted_m3301(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		SoundController_set_musicMuted_m3302(__this, 1, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t610 * L_1 = (__this->___MusicMuteChanged_6);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		MusicMuteChangedEventHandler_t610 * L_2 = (__this->___MusicMuteChanged_6);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_2);
	}

IL_0028:
	{
		bool L_3 = SoundController_get_sfxMuted_m3299(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0050;
		}
	}
	{
		SoundController_set_sfxMuted_m3300(__this, 1, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t609 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		SoundMuteChangedEventHandler_t609 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0050:
	{
		return;
	}
}
// System.Void SoundController::UnsuppressSounds()
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern "C" void SoundController_UnsuppressSounds_m3308 (SoundController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3301(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_1 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		bool L_2 = PersistentStorage_GetBoolValue_m3116(L_1, (String_t*) &_stringLiteral1105, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_3 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		bool L_4 = PersistentStorage_GetBoolValue_m3116(L_3, (String_t*) &_stringLiteral1105, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3302(__this, L_4, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t610 * L_5 = (__this->___MusicMuteChanged_6);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		MusicMuteChangedEventHandler_t610 * L_6 = (__this->___MusicMuteChanged_6);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_6);
	}

IL_0047:
	{
		bool L_7 = SoundController_get_sfxMuted_m3299(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_8 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_8);
		bool L_9 = PersistentStorage_GetBoolValue_m3116(L_8, (String_t*) &_stringLiteral1104, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_008e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_10 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_10);
		bool L_11 = PersistentStorage_GetBoolValue_m3116(L_10, (String_t*) &_stringLiteral1104, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3300(__this, L_11, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t609 * L_12 = (__this->___SoundMuteChanged_5);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		SoundMuteChangedEventHandler_t609 * L_13 = (__this->___SoundMuteChanged_5);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_13);
	}

IL_008e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ThrobForEffect::.ctor()
extern "C" void ThrobForEffect__ctor_m3309 (ThrobForEffect_t564 * __this, const MethodInfo* method)
{
	{
		__this->___throbPeriod_4 = (0.3f);
		__this->___throbScale_5 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThrobForEffect::Start()
extern "C" void ThrobForEffect_Start_m3310 (ThrobForEffect_t564 * __this, const MethodInfo* method)
{
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_0 = (__this->___thingToScale_6);
		NullCheck(L_0);
		Vector3_t496  L_1 = Transform_get_localScale_m3817(L_0, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_1;
		return;
	}
}
// System.Void ThrobForEffect::SetThrobbing(System.Boolean)
extern "C" void ThrobForEffect_SetThrobbing_m3311 (ThrobForEffect_t564 * __this, bool ___throbbing, const MethodInfo* method)
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
		float L_3 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startThrobTime_3 = L_3;
		goto IL_0042;
	}

IL_002a:
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_4 = (__this->___thingToScale_6);
		Vector3_t496  L_5 = (__this->___originalScale_7);
		NullCheck(L_4);
		Transform_set_localScale_m3818(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ThrobForEffect::Update()
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" void ThrobForEffect_Update_m3312 (ThrobForEffect_t564 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
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
		float L_1 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startThrobTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___throbPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
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
		Vector3_t496 * L_12 = &(__this->___originalScale_7);
		float L_13 = (L_12->___x_1);
		float L_14 = V_3;
		Vector3_t496 * L_15 = &(__this->___originalScale_7);
		float L_16 = (L_15->___y_2);
		float L_17 = V_3;
		Vector3_t496 * L_18 = &(__this->___originalScale_7);
		float L_19 = (L_18->___z_3);
		Vector3_t496  L_20 = {0};
		Vector3__ctor_m3807(&L_20, ((float)((float)L_11*(float)L_13)), ((float)((float)L_14*(float)L_16)), ((float)((float)L_17*(float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3818(L_10, L_20, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimeController/PauseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PauseChangedEventHandler__ctor_m3313 (PauseChangedEventHandler_t612 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void TimeController/PauseChangedEventHandler::Invoke()
extern "C" void PauseChangedEventHandler_Invoke_m3314 (PauseChangedEventHandler_t612 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PauseChangedEventHandler_Invoke_m3314((PauseChangedEventHandler_t612 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_PauseChangedEventHandler_t612(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult TimeController/PauseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * PauseChangedEventHandler_BeginInvoke_m3315 (PauseChangedEventHandler_t612 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void TimeController/PauseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PauseChangedEventHandler_EndInvoke_m3316 (PauseChangedEventHandler_t612 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m3317 (TimeController_t613 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t612_il2cpp_TypeInfo_var;
extern "C" void TimeController_add_PauseChanged_m3318 (TimeController_t613 * __this, PauseChangedEventHandler_t612 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t612 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t612 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Combine_m3532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t612 *)Castclass(L_2, PauseChangedEventHandler_t612_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t612_il2cpp_TypeInfo_var;
extern "C" void TimeController_remove_PauseChanged_m3319 (TimeController_t613 * __this, PauseChangedEventHandler_t612 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t612 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t612 * L_1 = ___value;
		Delegate_t677 * L_2 = Delegate_Remove_m3540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t612 *)Castclass(L_2, PauseChangedEventHandler_t612_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m3320 (TimeController_t613 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CpausedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m3321 (TimeController_t613 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CpausedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TimeController::Awake()
extern TypeInfo* TimeController_t613_il2cpp_TypeInfo_var;
extern "C" void TimeController_Awake_m3322 (TimeController_t613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimeController_t613_StaticFields*)TimeController_t613_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m3323 (TimeController_t613 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m3320(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m3321(__this, 1, /*hidden argument*/NULL);
		Time_set_timeScale_m3734(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t612 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t612 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
	{
		return;
	}
}
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m3324 (TimeController_t613 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m3320(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m3321(__this, 0, /*hidden argument*/NULL);
		Time_set_timeScale_m3734(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t612 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t612 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
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
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
struct Component_t714;
struct SpriteRenderer_t614;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t614_m3946(__this, method) (( SpriteRenderer_t614 * (*) (Component_t714 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3769_gshared)(__this, method)


// System.Void TimedFader::.ctor()
extern "C" void TimedFader__ctor_m3325 (TimedFader_t615 * __this, const MethodInfo* method)
{
	{
		__this->___staticLifespan_2 = (0.5f);
		__this->___fadingLifespan_3 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedFader::Awake()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t614_m3946_MethodInfo_var;
extern "C" void TimedFader_Awake_m3326 (TimedFader_t615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t614_m3946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484136);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_5 = L_0;
		SpriteRenderer_t614 * L_1 = Component_GetComponent_TisSpriteRenderer_t614_m3946(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t614_m3946_MethodInfo_var);
		__this->___spriteRenderer_4 = L_1;
		return;
	}
}
// System.Void TimedFader::Update()
extern "C" void TimedFader_Update_m3327 (TimedFader_t615 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = Time_get_time_m3935(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		SpriteRenderer_t614 * L_9 = (__this->___spriteRenderer_4);
		float L_10 = V_2;
		Color_t325  L_11 = {0};
		Color__ctor_m4077(&L_11, (1.0f), (1.0f), (1.0f), ((float)((float)(1.0f)-(float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_9);
		SpriteRenderer_set_color_m4078(L_9, L_11, /*hidden argument*/NULL);
		float L_12 = V_2;
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		GameObject_t352 * L_13 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		Object_Destroy_m3673(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TipConfig::.ctor(System.String,System.String,UnityEngine.Vector2)
extern "C" void TipConfig__ctor_m3328 (TipConfig_t473 * __this, String_t* ___tipID, String_t* ___tipText, Vector2_t110  ___tipPosition, const MethodInfo* method)
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
extern "C" void TipConfig__ctor_m3329 (TipConfig_t473 * __this, String_t* ___tipID, String_t* ___tipText, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		Vector2_t110  L_2 = {0};
		Vector2__ctor_m4079(&L_2, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___tipPosition_2 = L_2;
		return;
	}
}
// TipController/<PlayTipWithPause>c__Iterator1A
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__Ite.h"
#ifndef _MSC_VER
#else
#endif
// TipController/<PlayTipWithPause>c__Iterator1A
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__IteMethodDeclarations.h"



// System.Void TipController/<PlayTipWithPause>c__Iterator1A::.ctor()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1A__ctor_m3330 (U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator1A::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator1A_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3331 (U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator1A::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator1A_System_Collections_IEnumerator_get_Current_m3332 (U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean TipController/<PlayTipWithPause>c__Iterator1A::MoveNext()
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayTipWithPauseU3Ec__Iterator1A_MoveNext_m3333 (U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
		WaitForSeconds_t738 * L_3 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_3 = L_3;
		__this->___U24PC_2 = 1;
		goto IL_0065;
	}

IL_003e:
	{
		TipController_t616 * L_4 = (__this->___U3CU3Ef__this_6);
		TipConfig_t473 * L_5 = (__this->___tipConfig_1);
		NullCheck(L_4);
		TipController_MaybeShowTip_m3347(L_4, L_5, /*hidden argument*/NULL);
		TipController_t616 * L_6 = (__this->___U3CU3Ef__this_6);
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
// System.Void TipController/<PlayTipWithPause>c__Iterator1A::Dispose()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1A_Dispose_m3334 (U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void TipController/<PlayTipWithPause>c__Iterator1A::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator1A_Reset_m3335 (U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * __this, const MethodInfo* method)
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

// TipDialog
#include "AssemblyU2DCSharp_TipDialog.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"
struct GameObject_t352;
struct TipDialog_t618;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t618_m4080(__this, method) (( TipDialog_t618 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m3336 (TipController_t616 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::Awake()
extern TypeInfo* TipController_t616_il2cpp_TypeInfo_var;
extern "C" void TipController_Awake_m3337 (TipController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TipController_t616_StaticFields*)TipController_t616_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_2 = 0;
		return;
	}
}
// System.Void TipController::Start()
extern "C" void TipController_Start_m3338 (TipController_t616 * __this, const MethodInfo* method)
{
	{
		TipController_RegisterForEvents_m3340(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m3339 (TipController_t616 * __this, const MethodInfo* method)
{
	{
		TipController_UnregisterForEvents_m3341(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3342_MethodInfo_var;
extern "C" void TipController_RegisterForEvents_m3340 (TipController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		TipController_OnPhaseChanged_m3342_MethodInfo_var = il2cpp_codegen_method_info_from_index(589);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t517 * L_0 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)TipController_OnPhaseChanged_m3342_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_2 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m2783(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_2 = 1;
		return;
	}
}
// System.Void TipController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3342_MethodInfo_var;
extern "C" void TipController_UnregisterForEvents_m3341 (TipController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		TipController_OnPhaseChanged_m3342_MethodInfo_var = il2cpp_codegen_method_info_from_index(589);
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
		GamePhaseState_t517 * L_1 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TipController_OnPhaseChanged_m3342_MethodInfo_var };
		GamePhaseChangedEventHandler_t516 * L_3 = (GamePhaseChangedEventHandler_t516 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t516_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2784(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m3342 (TipController_t616 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t517 * L_0 = GamePhaseState_get_instance_m2791(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m2796(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TipController_EnqueueTipForLevel_m3343(__this, /*hidden argument*/NULL);
		goto IL_0020;
	}

IL_001a:
	{
		TipController_ClearEnqueuedTips_m3346(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m3343 (TipController_t616 * __this, const MethodInfo* method)
{
	LevelDescription_t543 * V_0 = {0};
	{
		LevelConfig_t550 * L_0 = LevelConfig_get_instance_m2898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t543 * L_1 = LevelConfig_GetCurrentLevelDescription_m2906(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t543 * L_2 = V_0;
		NullCheck(L_2);
		TipConfig_t473 * L_3 = (L_2->___tipConfig_3);
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
		LevelDescription_t543 * L_4 = V_0;
		NullCheck(L_4);
		TipConfig_t473 * L_5 = (L_4->___tipConfig_3);
		LevelDescription_t543 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = (L_6->___tipPause_4);
		TipController_EnqueueTip_m3344(__this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m3344 (TipController_t616 * __this, TipConfig_t473 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	{
		TipConfig_t473 * L_0 = ___tipConfig;
		float L_1 = ___tipPause;
		Object_t * L_2 = TipController_PlayTipWithPause_m3345(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = L_2;
		Object_t * L_3 = (__this->___enqueuedTip_4);
		MonoBehaviour_StartCoroutine_m3492(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern TypeInfo* U3CPlayTipWithPauseU3Ec__Iterator1A_t617_il2cpp_TypeInfo_var;
extern "C" Object_t * TipController_PlayTipWithPause_m3345 (TipController_t616 * __this, TipConfig_t473 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * V_0 = {0};
	{
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * L_0 = (U3CPlayTipWithPauseU3Ec__Iterator1A_t617 *)il2cpp_codegen_object_new (U3CPlayTipWithPauseU3Ec__Iterator1A_t617_il2cpp_TypeInfo_var);
		U3CPlayTipWithPauseU3Ec__Iterator1A__ctor_m3330(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * L_1 = V_0;
		float L_2 = ___tipPause;
		NullCheck(L_1);
		L_1->___tipPause_0 = L_2;
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * L_3 = V_0;
		TipConfig_t473 * L_4 = ___tipConfig;
		NullCheck(L_3);
		L_3->___tipConfig_1 = L_4;
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * L_5 = V_0;
		float L_6 = ___tipPause;
		NullCheck(L_5);
		L_5->___U3CU24U3EtipPause_4 = L_6;
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * L_7 = V_0;
		TipConfig_t473 * L_8 = ___tipConfig;
		NullCheck(L_7);
		L_7->___U3CU24U3EtipConfig_5 = L_8;
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3Ef__this_6 = __this;
		U3CPlayTipWithPauseU3Ec__Iterator1A_t617 * L_10 = V_0;
		return L_10;
	}
}
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m3346 (TipController_t616 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m3936(__this, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = (Object_t *)NULL;
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern TypeInfo* PersistentStorage_t580_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t494_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t618_m4080_MethodInfo_var;
extern "C" bool TipController_MaybeShowTip_m3347 (TipController_t616 * __this, TipConfig_t473 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DialogController_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisTipDialog_t618_m4080_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484238);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GameObject_t352 * V_1 = {0};
	TipDialog_t618 * V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_0 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t473 * L_1 = ___tipConfig;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1106, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = PersistentStorage_GetBoolValue_m3116(L_0, L_3, 0, /*hidden argument*/NULL);
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
		DialogController_t494 * L_6 = ((DialogController_t494_StaticFields*)DialogController_t494_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_6);
		bool L_7 = DialogController_IsDialogShowing_m2677(L_6, /*hidden argument*/NULL);
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
		Vector3_t496  L_9 = {0};
		Vector3__ctor_m3807(&L_9, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t737  L_10 = Quaternion_get_identity_m3913(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t655 * L_11 = Object_Instantiate_m3914(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = ((GameObject_t352 *)IsInst(L_11, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_12 = V_1;
		NullCheck(L_12);
		Transform_t406 * L_13 = GameObject_get_transform_m3812(L_12, /*hidden argument*/NULL);
		Vector3_t496  L_14 = {0};
		Vector3__ctor_m3807(&L_14, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_m3818(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t352 * L_15 = V_1;
		NullCheck(L_15);
		TipDialog_t618 * L_16 = GameObject_GetComponent_TisTipDialog_t618_m4080(L_15, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t618_m4080_MethodInfo_var);
		V_2 = L_16;
		TipDialog_t618 * L_17 = V_2;
		TipConfig_t473 * L_18 = ___tipConfig;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___tipText_1);
		TipConfig_t473 * L_20 = ___tipConfig;
		NullCheck(L_20);
		Vector2_t110  L_21 = (L_20->___tipPosition_2);
		NullCheck(L_17);
		TipDialog_ConfigureDialog_m3350(L_17, L_19, L_21, /*hidden argument*/NULL);
		DialogController_t494 * L_22 = ((DialogController_t494_StaticFields*)DialogController_t494_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_23 = V_1;
		NullCheck(L_22);
		DialogController_ShowDialog_m2675(L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t580_il2cpp_TypeInfo_var);
		PersistentStorage_t580 * L_24 = ((PersistentStorage_t580_StaticFields*)PersistentStorage_t580_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t473 * L_25 = ___tipConfig;
		NullCheck(L_25);
		String_t* L_26 = (L_25->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1106, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		PersistentStorage_SetBoolValue_m3115(L_24, L_27, 1, /*hidden argument*/NULL);
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TipDialog::.ctor()
extern "C" void TipDialog__ctor_m3348 (TipDialog_t618 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::CloseDialog()
extern TypeInfo* DialogController_t494_il2cpp_TypeInfo_var;
extern "C" void TipDialog_CloseDialog_m3349 (TipDialog_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t494 * L_0 = ((DialogController_t494_StaticFields*)DialogController_t494_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m2676(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::ConfigureDialog(System.String,UnityEngine.Vector2)
extern const MethodInfo* Component_GetComponent_TisRectTransform_t503_m3963_MethodInfo_var;
extern "C" void TipDialog_ConfigureDialog_m3350 (TipDialog_t618 * __this, String_t* ___message, Vector2_t110  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t503_m3963_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484143);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t503 * V_0 = {0};
	{
		Text_t462 * L_0 = (__this->___dialogText_2);
		String_t* L_1 = ___message;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		RectTransform_t503 * L_2 = Component_GetComponent_TisRectTransform_t503_m3963(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t503_m3963_MethodInfo_var);
		V_0 = L_2;
		RectTransform_t503 * L_3 = V_0;
		Vector2_t110  L_4 = ___position;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m4081(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// TrackLevel
#include "AssemblyU2DCSharp_TrackLevel.h"
#ifndef _MSC_VER
#else
#endif
// TrackLevel
#include "AssemblyU2DCSharp_TrackLevelMethodDeclarations.h"

struct GameObject_t352;
struct Text_t462;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t462_m4082(__this, method) (( Text_t462 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void TrackLevel::.ctor()
extern "C" void TrackLevel__ctor_m3351 (TrackLevel_t619 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::Start()
extern TypeInfo* GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m3354_MethodInfo_var;
extern "C" void TrackLevel_Start_m3352 (TrackLevel_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484239);
		TrackLevel_SetGameLevelText_m3354_MethodInfo_var = il2cpp_codegen_method_info_from_index(592);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t462 * L_1 = GameObject_GetComponent_TisText_t462_m4082(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var);
		__this->___levelText_2 = L_1;
		GameLevelState_t513 * L_2 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)TrackLevel_SetGameLevelText_m3354_MethodInfo_var };
		GameLevelChangedEventHandler_t512 * L_4 = (GameLevelChangedEventHandler_t512 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2752(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameLevelState_add_GameLevelChanged_m2757(L_2, L_4, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		TrackLevel_SetGameLevelText_m3354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::OnDestroy()
extern TypeInfo* GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m3354_MethodInfo_var;
extern "C" void TrackLevel_OnDestroy_m3353 (TrackLevel_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		TrackLevel_SetGameLevelText_m3354_MethodInfo_var = il2cpp_codegen_method_info_from_index(592);
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
		GameLevelState_t513 * L_1 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TrackLevel_SetGameLevelText_m3354_MethodInfo_var };
		GameLevelChangedEventHandler_t512 * L_3 = (GameLevelChangedEventHandler_t512 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t512_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2752(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m2758(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TrackLevel::SetGameLevelText()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackLevel_SetGameLevelText_m3354 (TrackLevel_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t462 * L_0 = (__this->___levelText_2);
		GameLevelState_t513 * L_1 = GameLevelState_get_instance_m2761(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m2759(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral944, L_4, /*hidden argument*/NULL);
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



// System.Void TrackScore::.ctor()
extern "C" void TrackScore__ctor_m3355 (TrackScore_t620 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::Start()
extern TypeInfo* ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m3359_MethodInfo_var;
extern "C" void TrackScore_Start_m3356 (TrackScore_t620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(548);
		GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484239);
		GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484160);
		TrackScore_DynamicUpdateScoreText_m3359_MethodInfo_var = il2cpp_codegen_method_info_from_index(593);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t475 * L_0 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t352 * L_1 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t462 * L_2 = GameObject_GetComponent_TisText_t462_m4082(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var);
		__this->___scoreText_2 = L_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t495 * L_4 = GameObject_GetComponent_TisDistortForEffect_t495_m3977(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t475 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackScore_DynamicUpdateScoreText_m3359_MethodInfo_var };
		ScoreChangedEventHandler_t585 * L_7 = (ScoreChangedEventHandler_t585 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3143(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_ScoreChanged_m3156(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackScore_SetScoreText_m3358(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::OnDestroy()
extern TypeInfo* ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m3359_MethodInfo_var;
extern "C" void TrackScore_OnDestroy_m3357 (TrackScore_t620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(548);
		TrackScore_DynamicUpdateScoreText_m3359_MethodInfo_var = il2cpp_codegen_method_info_from_index(593);
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
		PlayerStats_t475 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackScore_DynamicUpdateScoreText_m3359_MethodInfo_var };
		ScoreChangedEventHandler_t585 * L_3 = (ScoreChangedEventHandler_t585 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t585_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3143(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_ScoreChanged_m3157(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackScore::SetScoreText()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackScore_SetScoreText_m3358 (TrackScore_t620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t462 * L_0 = (__this->___scoreText_2);
		PlayerStats_t475 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_get_gameScore_m3162(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1107, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackScore::DynamicUpdateScoreText()
extern "C" void TrackScore_DynamicUpdateScoreText_m3359 (TrackScore_t620 * __this, const MethodInfo* method)
{
	{
		TrackScore_SetScoreText_m3358(__this, /*hidden argument*/NULL);
		DistortForEffect_t495 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_DistortWithDelay_m2680(L_0, (1.0f), /*hidden argument*/NULL);
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



// System.Void TrackTreats::.ctor()
extern "C" void TrackTreats__ctor_m3360 (TrackTreats_t621 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::Start()
extern TypeInfo* MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m3364_MethodInfo_var;
extern "C" void TrackTreats_Start_m3361 (TrackTreats_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484239);
		GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484160);
		TrackTreats_DynamicUpdateTreatsText_m3364_MethodInfo_var = il2cpp_codegen_method_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t475 * L_0 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t352 * L_1 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t462 * L_2 = GameObject_GetComponent_TisText_t462_m4082(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t462_m4082_MethodInfo_var);
		__this->___treatsText_2 = L_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t495 * L_4 = GameObject_GetComponent_TisDistortForEffect_t495_m3977(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t495_m3977_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t475 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackTreats_DynamicUpdateTreatsText_m3364_MethodInfo_var };
		MoneyChangedEventHandler_t586 * L_7 = (MoneyChangedEventHandler_t586 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3147(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_MoneyChanged_m3158(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackTreats_SetTreatsText_m3363(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::OnDestroy()
extern TypeInfo* MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m3364_MethodInfo_var;
extern "C" void TrackTreats_OnDestroy_m3362 (TrackTreats_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		TrackTreats_DynamicUpdateTreatsText_m3364_MethodInfo_var = il2cpp_codegen_method_info_from_index(594);
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
		PlayerStats_t475 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackTreats_DynamicUpdateTreatsText_m3364_MethodInfo_var };
		MoneyChangedEventHandler_t586 * L_3 = (MoneyChangedEventHandler_t586 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t586_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3147(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_MoneyChanged_m3159(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackTreats::SetTreatsText()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackTreats_SetTreatsText_m3363 (TrackTreats_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t462 * L_0 = (__this->___treatsText_2);
		PlayerStats_t475 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_get_money_m3164(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1108, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackTreats::DynamicUpdateTreatsText()
extern "C" void TrackTreats_DynamicUpdateTreatsText_m3364 (TrackTreats_t621 * __this, const MethodInfo* method)
{
	{
		TrackTreats_SetTreatsText_m3363(__this, /*hidden argument*/NULL);
		DistortForEffect_t495 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_DistortWithDelay_m2680(L_0, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// TutsPlayerController
#include "AssemblyU2DCSharp_TutsPlayerController.h"
#ifndef _MSC_VER
#else
#endif
// TutsPlayerController
#include "AssemblyU2DCSharp_TutsPlayerControllerMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
struct Component_t714;
struct Animator_t622;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t622_m4083(__this, method) (( Animator_t622 * (*) (Component_t714 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3769_gshared)(__this, method)


// System.Void TutsPlayerController::.ctor()
extern "C" void TutsPlayerController__ctor_m3365 (TutsPlayerController_t623 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutsPlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t622_m4083_MethodInfo_var;
extern "C" void TutsPlayerController_Start_m3366 (TutsPlayerController_t623 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t622_m4083_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484243);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t622 * L_0 = Component_GetComponent_TisAnimator_t622_m4083(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t622_m4083_MethodInfo_var);
		__this->___animator_2 = L_0;
		return;
	}
}
// System.Void TutsPlayerController::Update()
extern TypeInfo* Input_t659_il2cpp_TypeInfo_var;
extern "C" void TutsPlayerController_Update_m3367 (TutsPlayerController_t623 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t659_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4084(NULL /*static, unused*/, (String_t*) &_stringLiteral1109, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m4084(NULL /*static, unused*/, (String_t*) &_stringLiteral1110, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		Animator_t622 * L_3 = (__this->___animator_2);
		NullCheck(L_3);
		Animator_SetInteger_m4085(L_3, (String_t*) &_stringLiteral1111, 2, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0037:
	{
		float L_4 = V_0;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		Animator_t622 * L_5 = (__this->___animator_2);
		NullCheck(L_5);
		Animator_SetInteger_m4085(L_5, (String_t*) &_stringLiteral1111, 0, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0058:
	{
		float L_6 = V_1;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		Animator_t622 * L_7 = (__this->___animator_2);
		NullCheck(L_7);
		Animator_SetInteger_m4085(L_7, (String_t*) &_stringLiteral1111, 1, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0079:
	{
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		Animator_t622 * L_9 = (__this->___animator_2);
		NullCheck(L_9);
		Animator_SetInteger_m4085(L_9, (String_t*) &_stringLiteral1111, 3, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParams.h"
#ifndef _MSC_VER
#else
#endif



// System.Void TweakableParams::.ctor()
extern "C" void TweakableParams__ctor_m3368 (TweakableParams_t624 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TweakableParams::GetInitialMoney()
extern "C" int32_t TweakableParams_GetInitialMoney_m3369 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t490 * L_0 = DebugConfig_get_instance_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_get_useDebugValues_m2658(L_0, /*hidden argument*/NULL);
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
extern "C" int32_t TweakableParams_GetInitialBoosts_m3370 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t490 * L_0 = DebugConfig_get_instance_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_get_useDebugValues_m2658(L_0, /*hidden argument*/NULL);
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
// System.Int32 TweakableParams::GetInitialMicePerHole()
extern "C" int32_t TweakableParams_GetInitialMicePerHole_m3371 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t490 * L_0 = DebugConfig_get_instance_m2660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_get_useDebugValues_m2658(L_0, /*hidden argument*/NULL);
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
		return 2;
	}
}
#ifndef _MSC_VER
#else
#endif
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSliderMethodDeclarations.h"



// System.Void TweakableSlider::.ctor()
extern "C" void TweakableSlider__ctor_m3372 (TweakableSlider_t566 * __this, const MethodInfo* method)
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
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// SPTwitter
#include "AssemblyU2DCSharp_SPTwitterMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void TwitterSharing::.ctor()
extern "C" void TwitterSharing__ctor_m3373 (TwitterSharing_t625 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::Awake()
extern TypeInfo* TwitterSharing_t625_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_Awake_m3374 (TwitterSharing_t625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TwitterSharing_t625_StaticFields*)TwitterSharing_t625_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_0 = SPTwitter_get_instance_m1947(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void SPTwitter::Init() */, L_0);
		return;
	}
}
// System.Void TwitterSharing::ShareScore(System.Int32)
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScore_m3375 (TwitterSharing_t625 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1112, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_0 = SPTwitter_get_instance_m1947(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean SPTwitter::get_IsAuthed() */, L_0);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___score;
		TwitterSharing_ShareScoreInternal_m3377(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0025:
	{
		int32_t L_3 = ___score;
		TwitterSharing_ShareScoreThroughURLs_m3376(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreThroughURLs_m3376 (TwitterSharing_t625 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1113, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3393(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t75* L_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1114);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral1114;
		StringU5BU5D_t75* L_3 = L_2;
		String_t* L_4 = V_0;
		String_t* L_5 = WWW_EscapeURL_m3956(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1115);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral1115;
		StringU5BU5D_t75* L_7 = L_6;
		String_t* L_8 = WWW_EscapeURL_m3956(NULL /*static, unused*/, (String_t*) &_stringLiteral975, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t75* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1116);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral1116;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m450(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_m408(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral1117, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14 = WWW_EscapeURL_m3956(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1118, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17 = String_Replace_m3516(L_16, (String_t*) &_stringLiteral1119, (String_t*) &_stringLiteral1120, /*hidden argument*/NULL);
		V_2 = L_17;
		String_t* L_18 = V_2;
		String_t* L_19 = V_1;
		Object_t * L_20 = Utilities_LaunchAppOrWeb_m3397(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3492(__this, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreInternal_m3377 (TwitterSharing_t625 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1121, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3393(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_2 = SPTwitter_get_instance_m1947(NULL /*static, unused*/, /*hidden argument*/NULL);
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
struct BoostButton_t459;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t459_m3929(__this, method) (( BoostButton_t459 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void UseBoost::.ctor()
extern "C" void UseBoost__ctor_m3378 (UseBoost_t626 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UseBoost::Start()
extern "C" void UseBoost_Start_m3379 (UseBoost_t626 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t456 * L_0 = BoostConfig_get_instance_m2588(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t475 * L_1 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void UseBoost::Use()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t459_m3929_MethodInfo_var;
extern "C" void UseBoost_Use_m3380 (UseBoost_t626 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t459_m3929_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484126);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t459 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t459 * L_1 = GameObject_GetComponent_TisBoostButton_t459_m3929(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t459_m3929_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t459 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2550(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PlayerStats_t475 * L_4 = (__this->___playerStats_3);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = PlayerStats_GetAvailableBoostCount_m3180(L_4, L_5, /*hidden argument*/NULL);
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
		PlayerStats_t475 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		PlayerStats_RemoveBoost_m3182(L_7, L_8, /*hidden argument*/NULL);
		BoostConfig_t456 * L_9 = (__this->___boostConfig_2);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		BoostConfig_ExecuteBoost_m2605(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// Utilities/<LaunchAppOrWeb>c__Iterator1B
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1.h"
#ifndef _MSC_VER
#else
#endif
// Utilities/<LaunchAppOrWeb>c__Iterator1B
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1MethodDeclarations.h"



// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1B::.ctor()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1B__ctor_m3381 (U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1B::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1B_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3382 (U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1B::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1B_System_Collections_IEnumerator_get_Current_m3383 (U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean Utilities/<LaunchAppOrWeb>c__Iterator1B::MoveNext()
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t738_il2cpp_TypeInfo_var;
extern "C" bool U3CLaunchAppOrWebU3Ec__Iterator1B_MoveNext_m3384 (U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		WaitForSeconds_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
		int32_t L_2 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_3 = (__this->___appURL_0);
		String_t* L_4 = (__this->___webURL_1);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		Utilities_LaunchAppOrWebOnIOS_m3396(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		WaitForSeconds_t738 * L_5 = (WaitForSeconds_t738 *)il2cpp_codegen_object_new (WaitForSeconds_t738_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3922(L_5, (0.001f), /*hidden argument*/NULL);
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
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1B::Dispose()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1B_Dispose_m3385 (U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1B::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1B_Reset_m3386 (U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * __this, const MethodInfo* method)
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
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
struct GameObject_t352;
struct RectTransform_t503;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t503_m3912(__this, method) (( RectTransform_t503 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3387 (Utilities_t628 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Utilities::.cctor()
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern "C" void Utilities__cctor_m3388 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t287  L_0 = {0};
		DateTime__ctor_m4086(&L_0, ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		((Utilities_t628_StaticFields*)Utilities_t628_il2cpp_TypeInfo_var->static_fields)->___epoch_2 = L_0;
		return;
	}
}
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3389 (Object_t * __this /* static, unused */, Vector3_t496  ___vector, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		(&___vector)->___z_3 = (0.0f);
		Vector3_t496  L_0 = Vector3_get_right_m4038(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t496  L_1 = ___vector;
		float L_2 = Vector3_Angle_m4039(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" GameObject_t352 * Utilities_FindChildWithTag_m3390 (Object_t * __this /* static, unused */, GameObject_t352 * ___gameObject, String_t* ___tag, const MethodInfo* method)
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
		Transform_t406 * L_1 = GameObject_get_transform_m3812(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t406 * L_3 = Transform_GetChild_m4065(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t406 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3529(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m4087(L_5, /*hidden argument*/NULL);
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
		GameObject_t352 * L_10 = Component_get_gameObject_m3529(L_9, /*hidden argument*/NULL);
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
		Transform_t406 * L_14 = GameObject_get_transform_m3812(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m4066(L_14, /*hidden argument*/NULL);
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
extern TypeInfo* Mathf_t680_il2cpp_TypeInfo_var;
extern "C" Color_t325  Utilities_TrafficLightColorLerp_m3391 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___fractionFinished;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t680_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m3976(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___fractionFinished = L_1;
		float L_2 = ___fractionFinished;
		if ((!(((float)L_2) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		Color_t325  L_3 = Color_get_green_m4088(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_4 = Color_get_yellow_m4089(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___fractionFinished;
		Color_t325  L_6 = Color_Lerp_m4090(NULL /*static, unused*/, L_3, L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		Color_t325  L_7 = Color_get_yellow_m4089(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_8 = Color_get_red_m4091(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___fractionFinished;
		Color_t325  L_10 = Color_Lerp_m4090(NULL /*static, unused*/, L_7, L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3392 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t475 * L_0 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3183(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*) &_stringLiteral996;
	}

IL_0018:
	{
		return (String_t*) &_stringLiteral1122;
	}
}
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_GetShareMessageForScore_m3393 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
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
		PlayerStats_t475 * L_0 = PlayerStats_get_instance_m3166(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3183(L_0, /*hidden argument*/NULL);
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
		String_t* L_7 = String_Concat_m3646(NULL /*static, unused*/, (String_t*) &_stringLiteral1123, L_6, (String_t*) &_stringLiteral1124, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___score;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3646(NULL /*static, unused*/, (String_t*) &_stringLiteral1125, L_10, (String_t*) &_stringLiteral1124, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" {int32_t DEFAULT_CALL CanLaunchURL(char*);}
extern "C" bool Utilities_CanLaunchURL_m3394 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
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
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern "C" bool Utilities_AppCanLaunchURL_m3395 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3394(NULL /*static, unused*/, (String_t*) &_stringLiteral975, /*hidden argument*/NULL);
		return L_1;
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3396 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appURL;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3394(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1126, /*hidden argument*/NULL);
		String_t* L_2 = ___appURL;
		Application_OpenURL_m3733(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1127, /*hidden argument*/NULL);
		String_t* L_3 = ___webURL;
		Application_OpenURL_m3733(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern TypeInfo* U3CLaunchAppOrWebU3Ec__Iterator1B_t627_il2cpp_TypeInfo_var;
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3397 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CLaunchAppOrWebU3Ec__Iterator1B_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * V_0 = {0};
	{
		U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * L_0 = (U3CLaunchAppOrWebU3Ec__Iterator1B_t627 *)il2cpp_codegen_object_new (U3CLaunchAppOrWebU3Ec__Iterator1B_t627_il2cpp_TypeInfo_var);
		U3CLaunchAppOrWebU3Ec__Iterator1B__ctor_m3381(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * L_1 = V_0;
		String_t* L_2 = ___appURL;
		NullCheck(L_1);
		L_1->___appURL_0 = L_2;
		U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * L_3 = V_0;
		String_t* L_4 = ___webURL;
		NullCheck(L_3);
		L_3->___webURL_1 = L_4;
		U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * L_5 = V_0;
		String_t* L_6 = ___appURL;
		NullCheck(L_5);
		L_5->___U3CU24U3EappURL_4 = L_6;
		U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * L_7 = V_0;
		String_t* L_8 = ___webURL;
		NullCheck(L_7);
		L_7->___U3CU24U3EwebURL_5 = L_8;
		U3CLaunchAppOrWebU3Ec__Iterator1B_t627 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t503_m3912_MethodInfo_var;
extern "C" void Utilities_SpaceHorizontally_m3398 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t467* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t503_m3912_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484116);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	GameObjectU5BU5D_t467* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t352 * V_10 = {0};
	GameObjectU5BU5D_t467* V_11 = {0};
	int32_t V_12 = 0;
	RectTransform_t503 * V_13 = {0};
	float V_14 = 0.0f;
	Vector2_t110  V_15 = {0};
	Rect_t650  V_16 = {0};
	Rect_t650  V_17 = {0};
	{
		float L_0 = ___containingWidth;
		V_0 = L_0;
		V_1 = (0.0f);
		GameObjectU5BU5D_t467* L_1 = ___objects;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		GameObjectU5BU5D_t467* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_2, L_4));
		float L_5 = V_1;
		GameObject_t352 * L_6 = V_2;
		NullCheck(L_6);
		RectTransform_t503 * L_7 = GameObject_GetComponent_TisRectTransform_t503_m3912(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t503_m3912_MethodInfo_var);
		NullCheck(L_7);
		Rect_t650  L_8 = RectTransform_get_rect_m3931(L_7, /*hidden argument*/NULL);
		V_16 = L_8;
		float L_9 = Rect_get_width_m3810((&V_16), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5+(float)L_9));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_4;
		GameObjectU5BU5D_t467* L_12 = V_3;
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
		GameObjectU5BU5D_t467* L_16 = ___objects;
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
		GameObjectU5BU5D_t467* L_20 = ___objects;
		V_11 = L_20;
		V_12 = 0;
		goto IL_00d7;
	}

IL_0079:
	{
		GameObjectU5BU5D_t467* L_21 = V_11;
		int32_t L_22 = V_12;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_10 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_21, L_23));
		GameObject_t352 * L_24 = V_10;
		NullCheck(L_24);
		RectTransform_t503 * L_25 = GameObject_GetComponent_TisRectTransform_t503_m3912(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t503_m3912_MethodInfo_var);
		V_13 = L_25;
		RectTransform_t503 * L_26 = V_13;
		NullCheck(L_26);
		Rect_t650  L_27 = RectTransform_get_rect_m3931(L_26, /*hidden argument*/NULL);
		V_17 = L_27;
		float L_28 = Rect_get_width_m3810((&V_17), /*hidden argument*/NULL);
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
		Vector2__ctor_m4079((&V_15), L_33, ((float)((float)L_34+(float)L_35)), /*hidden argument*/NULL);
		float L_36 = V_9;
		V_9 = ((-L_36));
		RectTransform_t503 * L_37 = V_13;
		Vector2_t110  L_38 = V_15;
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_m4081(L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_7;
		float L_40 = V_14;
		V_7 = ((float)((float)L_39+(float)L_40));
		int32_t L_41 = V_12;
		V_12 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_42 = V_12;
		GameObjectU5BU5D_t467* L_43 = V_11;
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
extern TypeInfo* CharU5BU5D_t663_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t721_il2cpp_TypeInfo_var;
extern "C" float Utilities_GetIOSVersion_m3399 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		CultureInfo_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t75* V_1 = {0};
	String_t* V_2 = {0};
	{
		int32_t L_0 = Application_get_platform_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		String_t* L_1 = SystemInfo_get_operatingSystem_m4092(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1128, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		CharU5BU5D_t663* L_5 = ((CharU5BU5D_t663*)SZArrayNew(CharU5BU5D_t663_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)((int32_t)32);
		NullCheck(L_4);
		StringU5BU5D_t75* L_6 = String_Split_m3485(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t75* L_7 = V_1;
		StringU5BU5D_t75* L_8 = V_1;
		NullCheck(L_8);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1)));
		int32_t L_9 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1));
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9));
		String_t* L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t721_il2cpp_TypeInfo_var);
		CultureInfo_t721 * L_11 = CultureInfo_get_InvariantCulture_m3835(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = Single_Parse_m4093(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Utilities::SecondsSinceEpoch()
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t628_il2cpp_TypeInfo_var;
extern "C" float Utilities_SecondsSinceEpoch_m3400 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Utilities_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t334  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_0 = DateTime_get_UtcNow_m3706(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t628_il2cpp_TypeInfo_var);
		DateTime_t287  L_1 = ((Utilities_t628_StaticFields*)Utilities_t628_il2cpp_TypeInfo_var->static_fields)->___epoch_2;
		TimeSpan_t334  L_2 = DateTime_op_Subtraction_m3708(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = TimeSpan_get_TotalSeconds_m3710((&V_0), /*hidden argument*/NULL);
		return (((float)L_3));
	}
}
// System.Single[] Utilities::GetBlendingCoefficients(System.Single,System.Int32)
extern TypeInfo* SingleU5BU5D_t544_il2cpp_TypeInfo_var;
extern "C" SingleU5BU5D_t544* Utilities_GetBlendingCoefficients_m3401 (Object_t * __this /* static, unused */, float ___t, int32_t ___numPoints, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	SingleU5BU5D_t544* V_0 = {0};
	SingleU5BU5D_t544* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___numPoints;
		V_0 = ((SingleU5BU5D_t544*)SZArrayNew(SingleU5BU5D_t544_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___numPoints;
		V_1 = ((SingleU5BU5D_t544*)SZArrayNew(SingleU5BU5D_t544_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_0023;
	}

IL_0015:
	{
		SingleU5BU5D_t544* L_2 = V_1;
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
		SingleU5BU5D_t544* L_13 = V_1;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		SingleU5BU5D_t544* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		SingleU5BU5D_t544* L_19 = V_1;
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
		SingleU5BU5D_t544* L_25 = V_0;
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
		SingleU5BU5D_t544* L_31 = V_0;
		return L_31;
	}
}
#ifndef _MSC_VER
#else
#endif

// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElementMethodDeclarations.h"


// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m3402 (WorldObjectFollower_t629 * __this, const MethodInfo* method)
{
	{
		Vector3_t496  L_0 = {0};
		Vector3__ctor_m3807(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_11 = L_0;
		WorldRelativeGUIElement__ctor_m3407(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldObjectFollower::Start()
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t503_m3912_MethodInfo_var;
extern "C" void WorldObjectFollower_Start_m3403 (WorldObjectFollower_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t503_m3912_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484116);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m3965(NULL /*static, unused*/, (String_t*) &_stringLiteral1129, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3408(__this, L_1, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_t503 * L_3 = GameObject_GetComponent_TisRectTransform_t503_m3912(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t503_m3912_MethodInfo_var);
		__this->___myRectTransform_8 = L_3;
		return;
	}
}
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m3404 (WorldObjectFollower_t629 * __this, const MethodInfo* method)
{
	{
		RectTransform_t503 * L_0 = (__this->___myRectTransform_8);
		bool L_1 = Object_op_Implicit_m3872(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		WorldObjectFollower_ResetPosition_m3406(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m3405 (WorldObjectFollower_t629 * __this, GameObject_t352 * ___go, Vector3_t496  ___offset, bool ___followeeMoves, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___go;
		__this->___objectToFollow_7 = L_0;
		Vector3_t496  L_1 = ___offset;
		__this->___offset_11 = L_1;
		bool L_2 = ___followeeMoves;
		__this->___followeeMoves_9 = L_2;
		__this->___positionDirty_10 = 1;
		return;
	}
}
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m3406 (WorldObjectFollower_t629 * __this, const MethodInfo* method)
{
	Vector3_t496  V_0 = {0};
	{
		GameObject_t352 * L_0 = (__this->___objectToFollow_7);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m3812(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t496  L_2 = Transform_get_position_m3814(L_1, /*hidden argument*/NULL);
		Vector3_t496  L_3 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3410(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RectTransform_t503 * L_4 = (__this->___myRectTransform_8);
		Vector3_t496  L_5 = V_0;
		Vector3_t496  L_6 = (__this->___offset_11);
		Vector3_t496  L_7 = Vector3_op_Addition_m3960(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m3961(L_4, L_7, /*hidden argument*/NULL);
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
struct Canvas_t630;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t630_m3964(__this, method) (( Canvas_t630 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3802_gshared)(__this, method)


// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3407 (WorldRelativeGUIElement_t506 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t630_m3964_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3408 (WorldRelativeGUIElement_t506 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t630_m3964_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484144);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t650  V_0 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3529(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m3812(L_0, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = ___parentCanvasGameObject;
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m3812(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_SetParent_m3915(L_1, L_3, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = ___parentCanvasGameObject;
		NullCheck(L_4);
		Canvas_t630 * L_5 = GameObject_GetComponent_TisCanvas_t630_m3964(L_4, /*hidden argument*/GameObject_GetComponent_TisCanvas_t630_m3964_MethodInfo_var);
		__this->___parentCanvas_3 = L_5;
		Canvas_t630 * L_6 = (__this->___parentCanvas_3);
		NullCheck(L_6);
		Camera_t532 * L_7 = Canvas_get_worldCamera_m3966(L_6, /*hidden argument*/NULL);
		__this->___parentCamera_4 = L_7;
		Canvas_t630 * L_8 = (__this->___parentCanvas_3);
		NullCheck(L_8);
		Rect_t650  L_9 = Canvas_get_pixelRect_m4094(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = Rect_get_width_m3810((&V_0), /*hidden argument*/NULL);
		Canvas_t630 * L_11 = (__this->___parentCanvas_3);
		NullCheck(L_11);
		float L_12 = Canvas_get_scaleFactor_m4095(L_11, /*hidden argument*/NULL);
		__this->___parentCanvasWidth_5 = ((float)((float)L_10/(float)L_12));
		float L_13 = Rect_get_height_m3811((&V_0), /*hidden argument*/NULL);
		Canvas_t630 * L_14 = (__this->___parentCanvas_3);
		NullCheck(L_14);
		float L_15 = Canvas_get_scaleFactor_m4095(L_14, /*hidden argument*/NULL);
		__this->___parentCanvasHeight_6 = ((float)((float)L_13/(float)L_15));
		return;
	}
}
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t630_m3964_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3409 (WorldRelativeGUIElement_t506 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t630_m3964_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484144);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Canvas_t630 * V_1 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m3965(NULL /*static, unused*/, (String_t*) &_stringLiteral1129, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		NullCheck(L_1);
		Canvas_t630 * L_2 = GameObject_GetComponent_TisCanvas_t630_m3964(L_1, /*hidden argument*/GameObject_GetComponent_TisCanvas_t630_m3964_MethodInfo_var);
		V_1 = L_2;
		Canvas_t630 * L_3 = V_1;
		NullCheck(L_3);
		Camera_t532 * L_4 = Canvas_get_worldCamera_m3966(L_3, /*hidden argument*/NULL);
		__this->___worldCamera_2 = L_4;
		return;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t496  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3410 (WorldRelativeGUIElement_t506 * __this, Vector3_t496  ___worldPosition, const MethodInfo* method)
{
	{
		Camera_t532 * L_0 = (__this->___worldCamera_2);
		bool L_1 = Object_op_Equality_m3554(NULL /*static, unused*/, L_0, (Object_t655 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		WorldRelativeGUIElement_GetWorldCamera_m3409(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Camera_t532 * L_2 = (__this->___worldCamera_2);
		Vector3_t496  L_3 = ___worldPosition;
		Vector3_t496  L_4 = WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3411(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t496  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3411 (WorldRelativeGUIElement_t506 * __this, Camera_t532 * ___otherCamera, Vector3_t496  ___otherCameraPosition, const MethodInfo* method)
{
	Vector3_t496  V_0 = {0};
	Vector3_t496  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Camera_t532 * L_0 = ___otherCamera;
		Vector3_t496  L_1 = ___otherCameraPosition;
		NullCheck(L_0);
		Vector3_t496  L_2 = Camera_WorldToScreenPoint_m3808(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Camera_t532 * L_3 = (__this->___parentCamera_4);
		Vector3_t496  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t496  L_5 = Camera_ScreenToViewportPoint_m4096(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ((&V_1)->___x_1);
		float L_7 = (__this->___parentCanvasWidth_5);
		V_2 = ((float)((float)((float)((float)L_6-(float)(0.5f)))*(float)L_7));
		float L_8 = ((&V_1)->___y_2);
		float L_9 = (__this->___parentCanvasHeight_6);
		V_3 = ((float)((float)((float)((float)L_8-(float)(0.5f)))*(float)L_9));
		float L_10 = V_2;
		float L_11 = V_3;
		Vector3_t496  L_12 = {0};
		Vector3__ctor_m3807(&L_12, L_10, L_11, (0.0f), /*hidden argument*/NULL);
		return L_12;
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
extern "C" void EventHandlerFunction__ctor_m3412 (EventHandlerFunction_t631 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m3413 (EventHandlerFunction_t631 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandlerFunction_Invoke_m3413((EventHandlerFunction_t631 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t631(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m3414 (EventHandlerFunction_t631 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m3415 (EventHandlerFunction_t631 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void DataEventHandlerFunction__ctor_m3416 (DataEventHandlerFunction_t632 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m3417 (DataEventHandlerFunction_t632 * __this, CEvent_t133 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DataEventHandlerFunction_Invoke_m3417((DataEventHandlerFunction_t632 *)__this->___prev_9,___e, method);
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
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t632(Il2CppObject* delegate, CEvent_t133 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	CEvent_t133 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnionAssets.FLE.CEvent'."));
}
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m3418 (DataEventHandlerFunction_t632 * __this, CEvent_t133 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m3419 (DataEventHandlerFunction_t632 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void InitDelegate__ctor_m3420 (InitDelegate_t419 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m3421 (InitDelegate_t419 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		InitDelegate_Invoke_m3421((InitDelegate_t419 *)__this->___prev_9, method);
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
extern "C" Object_t * InitDelegate_BeginInvoke_m3422 (InitDelegate_t419 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m3423 (InitDelegate_t419 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void FacebookDelegate__ctor_m3424 (FacebookDelegate_t433 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m3425 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FacebookDelegate_Invoke_m3425((FacebookDelegate_t433 *)__this->___prev_9,___result, method);
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
extern "C" Object_t * FacebookDelegate_BeginInvoke_m3426 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m3427 (FacebookDelegate_t433 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void HideUnityDelegate__ctor_m3428 (HideUnityDelegate_t420 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C" void HideUnityDelegate_Invoke_m3429 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HideUnityDelegate_Invoke_m3429((HideUnityDelegate_t420 *)__this->___prev_9,___isUnityShown, method);
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
extern "C" Object_t * HideUnityDelegate_BeginInvoke_m3430 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
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
extern "C" void HideUnityDelegate_EndInvoke_m3431 (HideUnityDelegate_t420 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
