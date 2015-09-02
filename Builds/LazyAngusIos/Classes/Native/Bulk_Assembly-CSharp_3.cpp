#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// BoostConfig/<WaitThenCleanup>c__Iterator13
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__Iterat.h"
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
// BoostConfig/<WaitThenCleanup>c__Iterator13
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__IteratMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void BoostConfig/<WaitThenCleanup>c__Iterator13::.ctor()
extern "C" void U3CWaitThenCleanupU3Ec__Iterator13__ctor_m2791 (U3CWaitThenCleanupU3Ec__Iterator13_t510 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator13::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator13_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2792 (U3CWaitThenCleanupU3Ec__Iterator13_t510 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator13::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator13_System_Collections_IEnumerator_get_Current_m2793 (U3CWaitThenCleanupU3Ec__Iterator13_t510 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean BoostConfig/<WaitThenCleanup>c__Iterator13::MoveNext()
extern TypeInfo* WaitForSeconds_t799_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitThenCleanupU3Ec__Iterator13_MoveNext_m2794 (U3CWaitThenCleanupU3Ec__Iterator13_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
			goto IL_003e;
		}
	}
	{
		goto IL_005c;
	}

IL_0021:
	{
		float L_2 = (__this->___pauseTime_0);
		WaitForSeconds_t799 * L_3 = (WaitForSeconds_t799 *)il2cpp_codegen_object_new (WaitForSeconds_t799_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4284(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_2 = L_3;
		__this->___U24PC_1 = 1;
		goto IL_005e;
	}

IL_003e:
	{
		BoostConfig_t496 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_4);
		L_4->___activePause_3 = (Object_t *)NULL;
		BoostConfig_t496 * L_5 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_5);
		BoostConfig_CleanupActiveBoost_m2819(L_5, /*hidden argument*/NULL);
		__this->___U24PC_1 = (-1);
	}

IL_005c:
	{
		return 0;
	}

IL_005e:
	{
		return 1;
	}
	// Dead block : IL_0060: ldloc.1
}
// System.Void BoostConfig/<WaitThenCleanup>c__Iterator13::Dispose()
extern "C" void U3CWaitThenCleanupU3Ec__Iterator13_Dispose_m2795 (U3CWaitThenCleanupU3Ec__Iterator13_t510 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BoostConfig/<WaitThenCleanup>c__Iterator13::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CWaitThenCleanupU3Ec__Iterator13_Reset_m2796 (U3CWaitThenCleanupU3Ec__Iterator13_t510 * __this, const MethodInfo* method)
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

// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandler.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
#include "Assembly-CSharp_ArrayTypes.h"
// BoostDesc
#include "AssemblyU2DCSharp_BoostDesc.h"
// System.String
#include "mscorlib_System_String.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayer.h"
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"
// TipController
#include "AssemblyU2DCSharp_TipController.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"
// BoostDesc
#include "AssemblyU2DCSharp_BoostDescMethodDeclarations.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayerMethodDeclarations.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandlerMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"


// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m2797 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_add_BoostActive_m2798 (BoostConfig_t496 * __this, BoostActiveEventHandler_t509 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t509 * L_0 = (__this->___BoostActive_7);
		BoostActiveEventHandler_t509 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_7 = ((BoostActiveEventHandler_t509 *)Castclass(L_2, BoostActiveEventHandler_t509_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_remove_BoostActive_m2799 (BoostConfig_t496 * __this, BoostActiveEventHandler_t509 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t509 * L_0 = (__this->___BoostActive_7);
		BoostActiveEventHandler_t509 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_7 = ((BoostActiveEventHandler_t509 *)Castclass(L_2, BoostActiveEventHandler_t509_il2cpp_TypeInfo_var));
		return;
	}
}
// BoostConfig BoostConfig::get_instance()
extern TypeInfo* BoostConfig_t496_il2cpp_TypeInfo_var;
extern "C" BoostConfig_t496 * BoostConfig_get_instance_m2800 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t496 * L_0 = ((BoostConfig_t496_StaticFields*)BoostConfig_t496_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void BoostConfig::set_instance(BoostConfig)
extern TypeInfo* BoostConfig_t496_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_set_instance_m2801 (Object_t * __this /* static, unused */, BoostConfig_t496 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t496_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t496 * L_0 = ___value;
		((BoostConfig_t496_StaticFields*)BoostConfig_t496_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m2802 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CactiveBoostU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m2803 (BoostConfig_t496 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CactiveBoostU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m2804 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		BoostConfig_set_instance_m2801(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		BoostConfig_set_activeBoost_m2803(__this, 4, /*hidden argument*/NULL);
		BoostConfig_LoadBoostDescs_m2810(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m2805 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		BoostConfig_RegisterForEvents_m2807(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::OnDestroy()
extern "C" void BoostConfig_OnDestroy_m2806 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		BoostConfig_UnregisterForEvents_m2808(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostConfig_OnGamePhaseChanged_m2809_MethodInfo_var;
extern "C" void BoostConfig_RegisterForEvents_m2807 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostConfig_OnGamePhaseChanged_m2809_MethodInfo_var = il2cpp_codegen_method_info_from_index(485);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostConfig_OnGamePhaseChanged_m2809_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostConfig_OnGamePhaseChanged_m2809_MethodInfo_var;
extern "C" void BoostConfig_UnregisterForEvents_m2808 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostConfig_OnGamePhaseChanged_m2809_MethodInfo_var = il2cpp_codegen_method_info_from_index(485);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostConfig_OnGamePhaseChanged_m2809_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void BoostConfig::OnGamePhaseChanged()
extern "C" void BoostConfig_OnGamePhaseChanged_m2809 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		BoostConfig_CancelBoosts_m2816(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void BoostConfig::LoadBoostDescs()
extern TypeInfo* BoostDescU5BU5D_t511_il2cpp_TypeInfo_var;
extern TypeInfo* TipConfig_t513_il2cpp_TypeInfo_var;
extern TypeInfo* BoostDesc_t514_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_LoadBoostDescs_m2810 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostDescU5BU5D_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		TipConfig_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		BoostDesc_t514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___boostDescs_2 = ((BoostDescU5BU5D_t511*)SZArrayNew(BoostDescU5BU5D_t511_il2cpp_TypeInfo_var, 4));
		BoostDescU5BU5D_t511* L_0 = (__this->___boostDescs_2);
		TipConfig_t513 * L_1 = (TipConfig_t513 *)il2cpp_codegen_object_new (TipConfig_t513_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3700(L_1, (String_t*) &_stringLiteral1002, (String_t*) &_stringLiteral1003, /*hidden argument*/NULL);
		BoostDesc_t514 * L_2 = (BoostDesc_t514 *)il2cpp_codegen_object_new (BoostDesc_t514_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2822(L_2, (String_t*) &_stringLiteral1000, (String_t*) &_stringLiteral1001, (String_t*) &_stringLiteral1001, (15.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_0, 0)) = (BoostDesc_t514 *)L_2;
		BoostDescU5BU5D_t511* L_3 = (__this->___boostDescs_2);
		TipConfig_t513 * L_4 = (TipConfig_t513 *)il2cpp_codegen_object_new (TipConfig_t513_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3700(L_4, (String_t*) &_stringLiteral1006, (String_t*) &_stringLiteral1007, /*hidden argument*/NULL);
		BoostDesc_t514 * L_5 = (BoostDesc_t514 *)il2cpp_codegen_object_new (BoostDesc_t514_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2822(L_5, (String_t*) &_stringLiteral1004, (String_t*) &_stringLiteral1005, (String_t*) &_stringLiteral1005, (15.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_3, 1)) = (BoostDesc_t514 *)L_5;
		BoostDescU5BU5D_t511* L_6 = (__this->___boostDescs_2);
		TipConfig_t513 * L_7 = (TipConfig_t513 *)il2cpp_codegen_object_new (TipConfig_t513_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3700(L_7, (String_t*) &_stringLiteral1010, (String_t*) &_stringLiteral1011, /*hidden argument*/NULL);
		BoostDesc_t514 * L_8 = (BoostDesc_t514 *)il2cpp_codegen_object_new (BoostDesc_t514_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2822(L_8, (String_t*) &_stringLiteral1008, (String_t*) &_stringLiteral1009, (String_t*) &_stringLiteral1009, (15.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_6, 2)) = (BoostDesc_t514 *)L_8;
		BoostDescU5BU5D_t511* L_9 = (__this->___boostDescs_2);
		TipConfig_t513 * L_10 = (TipConfig_t513 *)il2cpp_codegen_object_new (TipConfig_t513_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3700(L_10, (String_t*) &_stringLiteral1014, (String_t*) &_stringLiteral1015, /*hidden argument*/NULL);
		BoostDesc_t514 * L_11 = (BoostDesc_t514 *)il2cpp_codegen_object_new (BoostDesc_t514_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2822(L_11, (String_t*) &_stringLiteral1012, (String_t*) &_stringLiteral1013, (String_t*) &_stringLiteral1013, (7.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_11);
		*((BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_9, 3)) = (BoostDesc_t514 *)L_11;
		return;
	}
}
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t512 * BoostConfig_GetButtonImageForType_m2811 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t511* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t512 * L_4 = ((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3))->___buttonSprite_0);
		return L_4;
	}
}
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t512 * BoostConfig_GetIntroImageForType_m2812 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t511* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t512 * L_4 = ((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3))->___introScreenSprite_1);
		return L_4;
	}
}
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m2813 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t511* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = ((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3))->___boostName_3);
		return L_4;
	}
}
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m2814 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___bType;
		NullCheck(L_0);
		int32_t L_2 = PlayerStats_GetPurchasedBoostCount_m3412(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)1))*(int32_t)((int32_t)((int32_t)L_4+(int32_t)2))))/(int32_t)2));
	}
}
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m2815 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t511* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3)));
		float L_4 = ((*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_1, L_3))->___effectiveTime_2);
		return L_4;
	}
}
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m2816 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2802(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		BoostConfig_CleanupActiveBoost_m2819(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern TypeInfo* TipController_t680_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_ExecuteBoost_m2817 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		TipController_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = {0};
	BoostDesc_t514 * V_2 = {0};
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2802(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_1 = ___bType;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		GamePhaseState_t564 * L_2 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GamePhaseState_IsPlaying_m3042(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		BoostConfig_CleanupActiveBoost_m2819(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___bType;
		float L_5 = BoostConfig_GetBoostTime_m2815(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = BoostConfig_get_activeBoost_m2802(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = ___bType;
		BoostConfig_set_activeBoost_m2803(__this, L_7, /*hidden argument*/NULL);
		float L_8 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___activeBoostStartTime_4 = L_8;
		float L_9 = (__this->___activeBoostStartTime_4);
		float L_10 = V_0;
		__this->___activeBoostEndTime_5 = ((float)((float)L_9+(float)L_10));
		SoundController_t669 * L_11 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_11);
		bool L_12 = SoundController_get_sfxMuted_m3657(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		SFXPlayer_t652 * L_13 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		SFXPlayer_Play_m3547(L_13, 6, /*hidden argument*/NULL);
	}

IL_0074:
	{
		BoostActiveEventHandler_t509 * L_14 = (__this->___BoostActive_7);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		BoostActiveEventHandler_t509 * L_15 = (__this->___BoostActive_7);
		int32_t L_16 = BoostConfig_get_activeBoost_m2802(__this, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(11 /* System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType) */, L_15, L_16, L_17);
	}

IL_0091:
	{
		float L_18 = V_0;
		Object_t * L_19 = BoostConfig_WaitThenCleanup_m2818(__this, L_18, /*hidden argument*/NULL);
		__this->___activePause_3 = L_19;
		BoostDescU5BU5D_t511* L_20 = (__this->___boostDescs_2);
		int32_t L_21 = ___bType;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(BoostDesc_t514 **)(BoostDesc_t514 **)SZArrayLdElema(L_20, L_22));
		TipController_t680 * L_23 = ((TipController_t680_StaticFields*)TipController_t680_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		BoostDesc_t514 * L_24 = V_2;
		NullCheck(L_24);
		TipConfig_t513 * L_25 = (L_24->___tipConfig_4);
		NullCheck(L_23);
		TipController_MaybeShowTip_m3718(L_23, L_25, /*hidden argument*/NULL);
		Object_t * L_26 = (__this->___activePause_3);
		MonoBehaviour_StartCoroutine_m3864(__this, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern TypeInfo* U3CWaitThenCleanupU3Ec__Iterator13_t510_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostConfig_WaitThenCleanup_m2818 (BoostConfig_t496 * __this, float ___pauseTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitThenCleanupU3Ec__Iterator13_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitThenCleanupU3Ec__Iterator13_t510 * V_0 = {0};
	{
		U3CWaitThenCleanupU3Ec__Iterator13_t510 * L_0 = (U3CWaitThenCleanupU3Ec__Iterator13_t510 *)il2cpp_codegen_object_new (U3CWaitThenCleanupU3Ec__Iterator13_t510_il2cpp_TypeInfo_var);
		U3CWaitThenCleanupU3Ec__Iterator13__ctor_m2791(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitThenCleanupU3Ec__Iterator13_t510 * L_1 = V_0;
		float L_2 = ___pauseTime;
		NullCheck(L_1);
		L_1->___pauseTime_0 = L_2;
		U3CWaitThenCleanupU3Ec__Iterator13_t510 * L_3 = V_0;
		float L_4 = ___pauseTime;
		NullCheck(L_3);
		L_3->___U3CU24U3EpauseTime_3 = L_4;
		U3CWaitThenCleanupU3Ec__Iterator13_t510 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CWaitThenCleanupU3Ec__Iterator13_t510 * L_6 = V_0;
		return L_6;
	}
}
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m2819 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	float V_1 = 0.0f;
	{
		Object_t * L_0 = (__this->___activePause_3);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___activePause_3);
		MonoBehaviour_StopCoroutine_m4325(__this, L_1, /*hidden argument*/NULL);
		__this->___activePause_3 = (Object_t *)NULL;
	}

IL_001e:
	{
		int32_t L_2 = BoostConfig_get_activeBoost_m2802(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		BoostConfig_set_activeBoost_m2803(__this, 4, /*hidden argument*/NULL);
		float L_3 = (0.0f);
		V_1 = L_3;
		__this->___activeBoostEndTime_5 = L_3;
		float L_4 = V_1;
		__this->___activeBoostStartTime_4 = L_4;
		BoostActiveEventHandler_t509 * L_5 = (__this->___BoostActive_7);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		BoostActiveEventHandler_t509 * L_6 = (__this->___BoostActive_7);
		int32_t L_7 = BoostConfig_get_activeBoost_m2802(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(11 /* System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType) */, L_6, L_7, L_8);
	}

IL_005d:
	{
		return;
	}
}
// System.Single BoostConfig::GetActiveBoostFractionUsed()
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m2820 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___activeBoostStartTime_4);
		float L_2 = (__this->___activeBoostEndTime_5);
		float L_3 = (__this->___activeBoostStartTime_4);
		return ((float)((float)((float)((float)L_0-(float)L_1))/(float)((float)((float)L_2-(float)L_3))));
	}
}
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m2821 (BoostConfig_t496 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2802(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
struct Resources_t804;
struct Sprite_t512;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t804;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m4327_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m4327(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4327_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t512_m4326(__this /* static, unused */, p0, method) (( Sprite_t512 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4327_gshared)(__this /* static, unused */, p0, method)


// System.Void BoostDesc::.ctor(System.String,System.String,System.String,System.Single,TipConfig)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t512_m4326_MethodInfo_var;
extern "C" void BoostDesc__ctor_m2822 (BoostDesc_t514 * __this, String_t* ___boostName, String_t* ___buttonImageName, String_t* ___introScreenImageName, float ___effectiveTime, TipConfig_t513 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t512_m4326_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
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
		Sprite_t512 * L_3 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___buttonSprite_0 = L_3;
		String_t* L_4 = ___introScreenImageName;
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1017, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t512 * L_7 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___introScreenSprite_1 = L_7;
		float L_8 = ___effectiveTime;
		__this->___effectiveTime_2 = L_8;
		String_t* L_9 = ___boostName;
		__this->___boostName_3 = L_9;
		TipConfig_t513 * L_10 = ___tipConfig;
		__this->___tipConfig_4 = L_10;
		return;
	}
}
// BounceLerp
#include "AssemblyU2DCSharp_BounceLerp.h"
#ifndef _MSC_VER
#else
#endif
// BounceLerp
#include "AssemblyU2DCSharp_BounceLerpMethodDeclarations.h"

// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"


// System.Void BounceLerp::.ctor()
extern "C" void BounceLerp__ctor_m2823 (BounceLerp_t515 * __this, const MethodInfo* method)
{
	{
		__this->___secondsPerPeriod_2 = (0.3f);
		__this->___totalPeriods_3 = (1.0f);
		__this->___additionalScale_4 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single BounceLerp::GetCoefficientForTime(System.Single,System.Boolean&)
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" float BounceLerp_GetCoefficientForTime_m2824 (BounceLerp_t515 * __this, float ___timeDelta, bool* ___isFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0 = (__this->___looping_6);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = ___timeDelta;
		float L_2 = (__this->___secondsPerPeriod_2);
		float L_3 = (__this->___totalPeriods_3);
		if ((!(((float)L_1) > ((float)((float)((float)L_2*(float)L_3))))))
		{
			goto IL_0027;
		}
	}
	{
		bool* L_4 = ___isFinished;
		*((int8_t*)(L_4)) = (int8_t)1;
		return (1.0f);
	}

IL_0027:
	{
		bool* L_5 = ___isFinished;
		*((int8_t*)(L_5)) = (int8_t)0;
		float L_6 = (__this->___periodOffsetDeg_5);
		V_1 = ((float)((float)((float)((float)L_6*(float)(3.14159274f)))/(float)(180.0f)));
		float L_7 = V_1;
		float L_8 = ___timeDelta;
		float L_9 = (__this->___secondsPerPeriod_2);
		V_1 = ((float)((float)L_7+(float)((float)((float)((float)((float)((float)((float)L_8/(float)L_9))*(float)(2.0f)))*(float)(3.14159274f)))));
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_11 = sinf(L_10);
		float L_12 = (__this->___additionalScale_4);
		V_2 = ((float)((float)L_11*(float)L_12));
		bool L_13 = (__this->___looping_6);
		if (L_13)
		{
			goto IL_0098;
		}
	}
	{
		float L_14 = ___timeDelta;
		float L_15 = (__this->___secondsPerPeriod_2);
		float L_16 = (__this->___totalPeriods_3);
		V_3 = ((float)((float)L_14/(float)((float)((float)L_15*(float)L_16))));
		float L_17 = V_3;
		V_1 = ((float)((float)((float)((float)L_17*(float)(0.5f)))*(float)(3.14159274f)));
		float L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_19 = cosf(L_18);
		V_4 = L_19;
		float L_20 = V_2;
		float L_21 = V_4;
		V_2 = ((float)((float)L_20*(float)L_21));
	}

IL_0098:
	{
		float L_22 = V_2;
		V_0 = ((float)((float)(1.0f)+(float)L_22));
		float L_23 = V_0;
		return L_23;
	}
}
// BuyAndUseBoost
#include "AssemblyU2DCSharp_BuyAndUseBoost.h"
#ifndef _MSC_VER
#else
#endif
// BuyAndUseBoost
#include "AssemblyU2DCSharp_BuyAndUseBoostMethodDeclarations.h"

// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"
struct GameObject_t352;
struct BoostButton_t499;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m4174_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m4174(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t499_m4319(__this, method) (( BoostButton_t499 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void BuyAndUseBoost::.ctor()
extern "C" void BuyAndUseBoost__ctor_m2825 (BuyAndUseBoost_t517 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyAndUseBoost::Start()
extern "C" void BuyAndUseBoost_Start_m2826 (BuyAndUseBoost_t517 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t516 * L_1 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyAndUseBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t499_m4319_MethodInfo_var;
extern "C" void BuyAndUseBoost_BuyAndUse_m2827 (BuyAndUseBoost_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t499_m4319_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t499 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m2821(L_0, /*hidden argument*/NULL);
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
		GameObject_t352 * L_2 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoostButton_t499 * L_3 = GameObject_GetComponent_TisBoostButton_t499_m4319(L_2, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t499_m4319_MethodInfo_var);
		V_0 = L_3;
		BoostButton_t499 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = BoostButton_GetBoostType_m2763(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		BoostConfig_t496 * L_6 = (__this->___boostConfig_2);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = BoostConfig_GetCurrentPriceForBoost_m2814(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		PlayerStats_t516 * L_9 = (__this->___playerStats_3);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = PlayerStats_CanAfford_m3409(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		PlayerStats_t516 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		PlayerStats_AddBoost_m3414(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t516 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		PlayerStats_SpendMoney_m3411(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0059:
	{
		PlayerStats_t516 * L_16 = (__this->___playerStats_3);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		PlayerStats_RemoveBoost_m3415(L_16, L_17, /*hidden argument*/NULL);
		BoostConfig_t496 * L_18 = (__this->___boostConfig_2);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		BoostConfig_ExecuteBoost_m2817(L_18, L_19, /*hidden argument*/NULL);
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
extern "C" void BuyBoost__ctor_m2828 (BuyBoost_t518 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyBoost::Start()
extern "C" void BuyBoost_Start_m2829 (BuyBoost_t518 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t516 * L_1 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t499_m4319_MethodInfo_var;
extern "C" void BuyBoost_BuyAndUse_m2830 (BuyBoost_t518 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t499_m4319_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t499 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t499 * L_1 = GameObject_GetComponent_TisBoostButton_t499_m4319(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t499_m4319_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t499 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2763(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BoostConfig_t496 * L_4 = (__this->___boostConfig_2);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = BoostConfig_GetCurrentPriceForBoost_m2814(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		PlayerStats_t516 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = PlayerStats_CanAfford_m3409(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		PlayerStats_t516 * L_10 = (__this->___playerStats_3);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		PlayerStats_AddBoost_m3414(L_10, L_11, /*hidden argument*/NULL);
		PlayerStats_t516 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		PlayerStats_SpendMoney_m3411(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t516 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		PlayerStats_RemoveBoost_m3415(L_14, L_15, /*hidden argument*/NULL);
		BoostConfig_t496 * L_16 = (__this->___boostConfig_2);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		BoostConfig_ExecuteBoost_m2817(L_16, L_17, /*hidden argument*/NULL);
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
extern "C" void CameraController__ctor_m2831 (CameraController_t521 * __this, const MethodInfo* method)
{
	{
		__this->___actualHUDPixelHeight_5 = (180.0f);
		__this->___minHUDAspectRatio_6 = (2.5f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C" void CameraController_Start_m2832 (CameraController_t521 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		SizeCamera_t519 * L_0 = (__this->___uxCamera_3);
		NullCheck(L_0);
		L_0->___screenPixelsBottomToIgnore_5 = (0.0f);
		SizeCamera_t519 * L_1 = (__this->___uxCamera_3);
		NullCheck(L_1);
		L_1->___screenPixelsTopCameraSlop_4 = (0.0f);
		SizeCamera_t519 * L_2 = (__this->___uxCamera_3);
		NullCheck(L_2);
		SizeCamera_Configure_m3607(L_2, /*hidden argument*/NULL);
		float L_3 = GoogleAdController_GetBannerHeight_m3090(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		SizeCamera_t519 * L_4 = (__this->___worldCamera_2);
		float L_5 = V_0;
		NullCheck(L_4);
		L_4->___screenPixelsBottomToIgnore_5 = L_5;
		int32_t L_6 = Screen_get_height_m3821(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = (((float)L_6));
		int32_t L_7 = Screen_get_width_m3806(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		SizeCamera_t519 * L_20 = (__this->___worldCamera_2);
		float L_21 = V_5;
		NullCheck(L_20);
		L_20->___screenPixelsTopCameraSlop_4 = L_21;
		CanvasScaler_t520 * L_22 = (__this->___constantUXCanvas_4);
		float L_23 = V_5;
		float L_24 = (__this->___actualHUDPixelHeight_5);
		NullCheck(L_22);
		CanvasScaler_set_scaleFactor_m4328(L_22, ((float)((float)L_23/(float)L_24)), /*hidden argument*/NULL);
		SizeCamera_t519 * L_25 = (__this->___worldCamera_2);
		NullCheck(L_25);
		SizeCamera_Configure_m3607(L_25, /*hidden argument*/NULL);
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

// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void CatBodyHitDetection::.ctor()
extern "C" void CatBodyHitDetection__ctor_m2833 (CatBodyHitDetection_t522 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CatBodyHitDetection::OnMouseDown()
extern "C" void CatBodyHitDetection_OnMouseDown_m2834 (CatBodyHitDetection_t522 * __this, const MethodInfo* method)
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

// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRenderer.h"
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRendererMethodDeclarations.h"


// System.Void ConeOfViewController::.ctor()
extern "C" void ConeOfViewController__ctor_m2835 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single ConeOfViewController::get_actualAngleRange()
extern "C" float ConeOfViewController_get_actualAngleRange_m2836 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CactualAngleRangeU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void ConeOfViewController::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewController_set_actualAngleRange_m2837 (ConeOfViewController_t524 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CactualAngleRangeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void ConeOfViewController::Awake()
extern TypeInfo* ConeOfViewController_t524_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewController_Awake_m2838 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConeOfViewController_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ConeOfViewController_t524_StaticFields*)ConeOfViewController_t524_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_4 = 0;
		return;
	}
}
// System.Void ConeOfViewController::Start()
extern "C" void ConeOfViewController_Start_m2839 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	{
		ConeOfViewController_RegisterForEvents_m2841(__this, /*hidden argument*/NULL);
		ConeOfViewController_MaybeUpdateAngleRange_m2844(__this, /*hidden argument*/NULL);
		ConeOfViewController_UpdateCones_m2845(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewController::OnDestroy()
extern "C" void ConeOfViewController_OnDestroy_m2840 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	{
		ConeOfViewController_UnregisterForEvents_m2842(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewController_OnBoostUsageChanged_m2843_MethodInfo_var;
extern "C" void ConeOfViewController_RegisterForEvents_m2841 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ConeOfViewController_OnBoostUsageChanged_m2843_MethodInfo_var = il2cpp_codegen_method_info_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)ConeOfViewController_OnBoostUsageChanged_m2843_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_2 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2798(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_4 = 1;
		return;
	}
}
// System.Void ConeOfViewController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewController_OnBoostUsageChanged_m2843_MethodInfo_var;
extern "C" void ConeOfViewController_UnregisterForEvents_m2842 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ConeOfViewController_OnBoostUsageChanged_m2843_MethodInfo_var = il2cpp_codegen_method_info_from_index(487);
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
		BoostConfig_t496 * L_1 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConeOfViewController_OnBoostUsageChanged_m2843_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_3 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2799(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ConeOfViewController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewController_OnBoostUsageChanged_m2843 (ConeOfViewController_t524 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		bool L_0 = ConeOfViewController_MaybeUpdateAngleRange_m2844(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConeOfViewController_UpdateCones_m2845(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean ConeOfViewController::MaybeUpdateAngleRange()
extern "C" bool ConeOfViewController_MaybeUpdateAngleRange_m2844 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2802(L_0, /*hidden argument*/NULL);
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
		float L_3 = ConeOfViewController_get_actualAngleRange_m2836(__this, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		float L_4 = V_0;
		ConeOfViewController_set_actualAngleRange_m2837(__this, L_4, /*hidden argument*/NULL);
		return 1;
	}

IL_0036:
	{
		return 0;
	}
}
// System.Void ConeOfViewController::UpdateCones()
extern "C" void ConeOfViewController_UpdateCones_m2845 (ConeOfViewController_t524 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_t523 * L_0 = (__this->___leftCone_2);
		float L_1 = ConeOfViewController_get_actualAngleRange_m2836(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConeOfViewRenderer_CreateMeshForAngleRange_m2849(L_0, (0.0f), ((float)((float)L_1/(float)(2.0f))), /*hidden argument*/NULL);
		ConeOfViewRenderer_t523 * L_2 = (__this->___rightCone_3);
		float L_3 = ConeOfViewController_get_actualAngleRange_m2836(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ConeOfViewRenderer_CreateMeshForAngleRange_m2849(L_2, ((float)((float)((-L_3))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
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
struct MeshRenderer_t805;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m4002_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m4002(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4002_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t805_m4329(__this, method) (( MeshRenderer_t805 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4002_gshared)(__this, method)
struct GameObject_t352;
struct MeshFilter_t806;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
#define GameObject_AddComponent_TisMeshFilter_t806_m4330(__this, method) (( MeshFilter_t806 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4002_gshared)(__this, method)
struct GameObject_t352;
struct MeshRenderer_t805;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t805_m4331(__this, method) (( MeshRenderer_t805 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m2846 (ConeOfViewRenderer_t523 * __this, const MethodInfo* method)
{
	{
		__this->___numTriangles_4 = ((int32_t)20);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::Start()
extern "C" void ConeOfViewRenderer_Start_m2847 (ConeOfViewRenderer_t523 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_EnsureInitialized_m2848(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::EnsureInitialized()
extern TypeInfo* Mesh_t525_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshRenderer_t805_m4329_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshFilter_t806_m4330_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t805_m4331_MethodInfo_var;
extern "C" void ConeOfViewRenderer_EnsureInitialized_m2848 (ConeOfViewRenderer_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t525_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		GameObject_AddComponent_TisMeshRenderer_t805_m4329_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484136);
		GameObject_AddComponent_TisMeshFilter_t806_m4330_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484137);
		GameObject_GetComponent_TisMeshRenderer_t805_m4331_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484138);
		s_Il2CppMethodIntialized = true;
	}
	MeshRenderer_t805 * V_0 = {0};
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
		Mesh_t525 * L_1 = (Mesh_t525 *)il2cpp_codegen_object_new (Mesh_t525_il2cpp_TypeInfo_var);
		Mesh__ctor_m4332(L_1, /*hidden argument*/NULL);
		__this->___viewMesh_2 = L_1;
		GameObject_t352 * L_2 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_AddComponent_TisMeshRenderer_t805_m4329(L_2, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t805_m4329_MethodInfo_var);
		GameObject_t352 * L_3 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		MeshFilter_t806 * L_4 = GameObject_AddComponent_TisMeshFilter_t806_m4330(L_3, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t806_m4330_MethodInfo_var);
		Mesh_t525 * L_5 = (__this->___viewMesh_2);
		NullCheck(L_4);
		MeshFilter_set_mesh_m4333(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		MeshRenderer_t805 * L_7 = GameObject_GetComponent_TisMeshRenderer_t805_m4331(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t805_m4331_MethodInfo_var);
		V_0 = L_7;
		MeshRenderer_t805 * L_8 = V_0;
		Material_t526 * L_9 = (__this->___viewMaterial_3);
		NullCheck(L_8);
		Renderer_set_material_m4148(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::CreateMeshForAngleRange(System.Single,System.Single)
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewRenderer_CreateMeshForAngleRange_m2849 (ConeOfViewRenderer_t523 * __this, float ___minAngle, float ___maxAngle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConeOfViewRenderer_EnsureInitialized_m2848(__this, /*hidden argument*/NULL);
		Mesh_t525 ** L_0 = &(__this->___viewMesh_2);
		float L_1 = ___minAngle;
		float L_2 = ___maxAngle;
		int32_t L_3 = (__this->___numTriangles_4);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		Utilities_MakeFanWithAngleRange_m3758(NULL /*static, unused*/, L_0, L_1, L_2, (4.6f), L_3, /*hidden argument*/NULL);
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
extern "C" void CrossSceneState__ctor_m2850 (CrossSceneState_t527 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// CrossSceneState CrossSceneState::get_instance()
extern TypeInfo* CrossSceneState_t527_il2cpp_TypeInfo_var;
extern "C" CrossSceneState_t527 * CrossSceneState_get_instance_m2851 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t527 * L_0 = ((CrossSceneState_t527_StaticFields*)CrossSceneState_t527_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void CrossSceneState::set_instance(CrossSceneState)
extern TypeInfo* CrossSceneState_t527_il2cpp_TypeInfo_var;
extern "C" void CrossSceneState_set_instance_m2852 (Object_t * __this /* static, unused */, CrossSceneState_t527 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t527 * L_0 = ___value;
		((CrossSceneState_t527_StaticFields*)CrossSceneState_t527_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void CrossSceneState::Awake()
extern "C" void CrossSceneState_Awake_m2853 (CrossSceneState_t527 * __this, const MethodInfo* method)
{
	{
		CrossSceneState_set_instance_m2852(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
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
struct Component_t775;
struct SpriteRenderer_t676;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t775;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m4141_gshared (Component_t775 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m4141(__this, method) (( Object_t * (*) (Component_t775 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4141_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t676_m4334(__this, method) (( SpriteRenderer_t676 * (*) (Component_t775 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4141_gshared)(__this, method)


// System.Void DeadMouse::.ctor()
extern "C" void DeadMouse__ctor_m2854 (DeadMouse_t528 * __this, const MethodInfo* method)
{
	{
		__this->___extraScale_3 = (0.32f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MouseType DeadMouse::get_mouseType()
extern "C" int32_t DeadMouse_get_mouseType_m2855 (DeadMouse_t528 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void DeadMouse::set_mouseType(MouseConfig/MouseType)
extern "C" void DeadMouse_set_mouseType_m2856 (DeadMouse_t528 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void DeadMouse::Start()
extern "C" void DeadMouse_Start_m2857 (DeadMouse_t528 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouse::Configure(MouseMove)
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t676_m4334_MethodInfo_var;
extern "C" void DeadMouse_Configure_m2858 (DeadMouse_t528 * __this, MouseMove_t530 * ___parentMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Component_GetComponent_TisSpriteRenderer_t676_m4334_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484139);
		s_Il2CppMethodIntialized = true;
	}
	MouseTypeDesc_t610 * V_0 = {0};
	SpriteRenderer_t676 * V_1 = {0};
	Vector3_t538  V_2 = {0};
	{
		MouseMove_t530 * L_0 = ___parentMouse;
		NullCheck(L_0);
		int32_t L_1 = MouseMove_get_mouseType_m3183(L_0, /*hidden argument*/NULL);
		DeadMouse_set_mouseType_m2856(__this, L_1, /*hidden argument*/NULL);
		MouseConfig_t601 * L_2 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		MouseMove_t530 * L_3 = ___parentMouse;
		NullCheck(L_3);
		int32_t L_4 = MouseMove_get_mouseType_m3183(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MouseTypeDesc_t610 * L_5 = MouseConfig_GetMouseTypeDesc_m3180(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		SpriteRenderer_t676 * L_6 = Component_GetComponent_TisSpriteRenderer_t676_m4334(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t676_m4334_MethodInfo_var);
		V_1 = L_6;
		SpriteRenderer_t676 * L_7 = V_1;
		MouseTypeDesc_t610 * L_8 = V_0;
		NullCheck(L_8);
		Sprite_t512 * L_9 = (L_8->___deadMouseSprite_0);
		NullCheck(L_7);
		SpriteRenderer_set_sprite_m4335(L_7, L_9, /*hidden argument*/NULL);
		MouseMove_t530 * L_10 = ___parentMouse;
		NullCheck(L_10);
		GameObject_t352 * L_11 = Component_get_gameObject_m3901(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t406 * L_12 = GameObject_get_transform_m4184(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t538  L_13 = Transform_get_position_m4186(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (__this->___zIndex_2);
		(&V_2)->___z_3 = L_14;
		Transform_t406 * L_15 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Vector3_t538  L_16 = V_2;
		NullCheck(L_15);
		Transform_set_position_m4188(L_15, L_16, /*hidden argument*/NULL);
		Transform_t406 * L_17 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		MouseMove_t530 * L_18 = ___parentMouse;
		NullCheck(L_18);
		GameObject_t352 * L_19 = Component_get_gameObject_m3901(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_t406 * L_20 = GameObject_get_transform_m4184(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Quaternion_t802  L_21 = Transform_get_rotation_m4336(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_rotation_m4294(L_17, L_21, /*hidden argument*/NULL);
		Transform_t406 * L_22 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		MouseTypeDesc_t610 * L_23 = V_0;
		NullCheck(L_23);
		float L_24 = (L_23->___scale_5);
		float L_25 = (__this->___extraScale_3);
		MouseTypeDesc_t610 * L_26 = V_0;
		NullCheck(L_26);
		float L_27 = (L_26->___scale_5);
		float L_28 = (__this->___extraScale_3);
		Vector3_t538  L_29 = {0};
		Vector3__ctor_m4179(&L_29, ((float)((float)L_24*(float)L_25)), ((float)((float)L_27*(float)L_28)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m4190(L_22, L_29, /*hidden argument*/NULL);
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
extern "C" void MultiKillEventHandler__ctor_m2859 (MultiKillEventHandler_t529 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DeadMouseRelay/MultiKillEventHandler::Invoke(System.Int32,UnityEngine.Vector3)
extern "C" void MultiKillEventHandler_Invoke_m2860 (MultiKillEventHandler_t529 * __this, int32_t ___numKilled, Vector3_t538  ___pawPosition, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MultiKillEventHandler_Invoke_m2860((MultiKillEventHandler_t529 *)__this->___prev_9,___numKilled, ___pawPosition, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___numKilled, Vector3_t538  ___pawPosition, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___numKilled, ___pawPosition,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___numKilled, Vector3_t538  ___pawPosition, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___numKilled, ___pawPosition,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MultiKillEventHandler_t529(Il2CppObject* delegate, int32_t ___numKilled, Vector3_t538  ___pawPosition)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t, Vector3_t538 );
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
extern TypeInfo* Vector3_t538_il2cpp_TypeInfo_var;
extern "C" Object_t * MultiKillEventHandler_BeginInvoke_m2861 (MultiKillEventHandler_t529 * __this, int32_t ___numKilled, Vector3_t538  ___pawPosition, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Vector3_t538_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___numKilled);
	__d_args[1] = Box(Vector3_t538_il2cpp_TypeInfo_var, &___pawPosition);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DeadMouseRelay/MultiKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MultiKillEventHandler_EndInvoke_m2862 (MultiKillEventHandler_t529 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void MouseKillEventHandler__ctor_m2863 (MouseKillEventHandler_t531 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DeadMouseRelay/MouseKillEventHandler::Invoke(MouseMove)
extern "C" void MouseKillEventHandler_Invoke_m2864 (MouseKillEventHandler_t531 * __this, MouseMove_t530 * ___mouseMove, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MouseKillEventHandler_Invoke_m2864((MouseKillEventHandler_t531 *)__this->___prev_9,___mouseMove, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MouseMove_t530 * ___mouseMove, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MouseMove_t530 * ___mouseMove, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MouseKillEventHandler_t531(Il2CppObject* delegate, MouseMove_t530 * ___mouseMove)
{
	// Marshaling of parameter '___mouseMove' to native representation
	MouseMove_t530 * ____mouseMove_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'MouseMove'."));
}
// System.IAsyncResult DeadMouseRelay/MouseKillEventHandler::BeginInvoke(MouseMove,System.AsyncCallback,System.Object)
extern "C" Object_t * MouseKillEventHandler_BeginInvoke_m2865 (MouseKillEventHandler_t531 * __this, MouseMove_t530 * ___mouseMove, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___mouseMove;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DeadMouseRelay/MouseKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseKillEventHandler_EndInvoke_m2866 (MouseKillEventHandler_t531 * __this, Object_t * ___result, const MethodInfo* method)
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



// System.Void DeadMouseRelay::.ctor()
extern "C" void DeadMouseRelay__ctor_m2867 (DeadMouseRelay_t532 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadMouseRelay::add_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern TypeInfo* MultiKillEventHandler_t529_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_add_MultiKill_m2868 (DeadMouseRelay_t532 * __this, MultiKillEventHandler_t529 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MultiKillEventHandler_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		MultiKillEventHandler_t529 * L_0 = (__this->___MultiKill_3);
		MultiKillEventHandler_t529 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MultiKill_3 = ((MultiKillEventHandler_t529 *)Castclass(L_2, MultiKillEventHandler_t529_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::remove_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern TypeInfo* MultiKillEventHandler_t529_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_remove_MultiKill_m2869 (DeadMouseRelay_t532 * __this, MultiKillEventHandler_t529 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MultiKillEventHandler_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		MultiKillEventHandler_t529 * L_0 = (__this->___MultiKill_3);
		MultiKillEventHandler_t529 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MultiKill_3 = ((MultiKillEventHandler_t529 *)Castclass(L_2, MultiKillEventHandler_t529_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::add_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern TypeInfo* MouseKillEventHandler_t531_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_add_MouseKill_m2870 (DeadMouseRelay_t532 * __this, MouseKillEventHandler_t531 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseKillEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseKillEventHandler_t531 * L_0 = (__this->___MouseKill_4);
		MouseKillEventHandler_t531 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseKill_4 = ((MouseKillEventHandler_t531 *)Castclass(L_2, MouseKillEventHandler_t531_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::remove_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern TypeInfo* MouseKillEventHandler_t531_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_remove_MouseKill_m2871 (DeadMouseRelay_t532 * __this, MouseKillEventHandler_t531 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseKillEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseKillEventHandler_t531 * L_0 = (__this->___MouseKill_4);
		MouseKillEventHandler_t531 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseKill_4 = ((MouseKillEventHandler_t531 *)Castclass(L_2, MouseKillEventHandler_t531_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::Awake()
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_Awake_m2872 (DeadMouseRelay_t532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void DeadMouseRelay::Start()
extern "C" void DeadMouseRelay_Start_m2873 (DeadMouseRelay_t532 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouseRelay::Update()
extern "C" void DeadMouseRelay_Update_m2874 (DeadMouseRelay_t532 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouseRelay::HandleMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void DeadMouseRelay_HandleMultiKill_m2875 (DeadMouseRelay_t532 * __this, int32_t ___numKilled, Vector3_t538  ___pawPosition, const MethodInfo* method)
{
	{
		MultiKillEventHandler_t529 * L_0 = (__this->___MultiKill_3);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		MultiKillEventHandler_t529 * L_1 = (__this->___MultiKill_3);
		int32_t L_2 = ___numKilled;
		Vector3_t538  L_3 = ___pawPosition;
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, Vector3_t538  >::Invoke(11 /* System.Void DeadMouseRelay/MultiKillEventHandler::Invoke(System.Int32,UnityEngine.Vector3) */, L_1, L_2, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void DeadMouseRelay::HandleMouseKill(MouseMove)
extern "C" void DeadMouseRelay_HandleMouseKill_m2876 (DeadMouseRelay_t532 * __this, MouseMove_t530 * ___mouseMove, const MethodInfo* method)
{
	{
		MouseKillEventHandler_t531 * L_0 = (__this->___MouseKill_4);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		MouseKillEventHandler_t531 * L_1 = (__this->___MouseKill_4);
		MouseMove_t530 * L_2 = ___mouseMove;
		NullCheck(L_1);
		VirtActionInvoker1< MouseMove_t530 * >::Invoke(11 /* System.Void DeadMouseRelay/MouseKillEventHandler::Invoke(MouseMove) */, L_1, L_2);
	}

IL_0017:
	{
		MouseMove_t530 * L_3 = ___mouseMove;
		NullCheck(L_3);
		MouseMove_OnKilled_m3207(L_3, /*hidden argument*/NULL);
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

// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"


// System.Void DebugConfig::.ctor()
extern "C" void DebugConfig__ctor_m2877 (DebugConfig_t533 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// DebugConfig DebugConfig::get_instance()
extern TypeInfo* DebugConfig_t533_il2cpp_TypeInfo_var;
extern "C" DebugConfig_t533 * DebugConfig_get_instance_m2878 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t533 * L_0 = ((DebugConfig_t533_StaticFields*)DebugConfig_t533_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void DebugConfig::set_instance(DebugConfig)
extern TypeInfo* DebugConfig_t533_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_set_instance_m2879 (Object_t * __this /* static, unused */, DebugConfig_t533 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t533 * L_0 = ___value;
		((DebugConfig_t533_StaticFields*)DebugConfig_t533_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void DebugConfig::Awake()
extern "C" void DebugConfig_Awake_m2880 (DebugConfig_t533 * __this, const MethodInfo* method)
{
	{
		__this->___useDebugValues_4 = 0;
		DebugConfig_set_instance_m2879(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___debugFlags_9 = 0;
		return;
	}
}
// System.Void DebugConfig::Start()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_Start_m2881 (DebugConfig_t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3347(L_0, (String_t*) &_stringLiteral1019, 0, /*hidden argument*/NULL);
		__this->___debugFlags_9 = L_1;
		return;
	}
}
// System.Boolean DebugConfig::IsDebugFlagSet(System.Int32)
extern "C" bool DebugConfig_IsDebugFlagSet_m2882 (DebugConfig_t533 * __this, int32_t ___debugFlag, const MethodInfo* method)
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
		int32_t L_3 = (__this->___debugFlags_9);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)))))&(int32_t)L_3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void DebugConfig::SetDebugFlags(System.Int32)
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_SetDebugFlags_m2883 (DebugConfig_t533 * __this, int32_t ___debugFlags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___debugFlags;
		__this->___debugFlags_9 = L_0;
		PersistentStorage_t624 * L_1 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_2 = ___debugFlags;
		NullCheck(L_1);
		PersistentStorage_SetIntValue_m3346(L_1, (String_t*) &_stringLiteral1019, L_2, /*hidden argument*/NULL);
		return;
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
extern "C" void DebugLogPropagate__ctor_m2884 (DebugLogPropagate_t534 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::LogInIOS(System.String)
extern "C" {void DEFAULT_CALL LogInIOS(char*);}
extern "C" void DebugLogPropagate_LogInIOS_m2885 (Object_t * __this /* static, unused */, String_t* ___testArg, const MethodInfo* method)
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
extern const MethodInfo* DebugLogPropagate_HandleLog_m2888_MethodInfo_var;
extern "C" void DebugLogPropagate_OnEnable_m2886 (DebugLogPropagate_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		DebugLogPropagate_HandleLog_m2888_MethodInfo_var = il2cpp_codegen_method_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m2888_MethodInfo_var };
		LogCallback_t54 * L_1 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m4287(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::OnDisable()
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m2888_MethodInfo_var;
extern "C" void DebugLogPropagate_OnDisable_m2887 (DebugLogPropagate_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		DebugLogPropagate_HandleLog_m2888_MethodInfo_var = il2cpp_codegen_method_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m2888_MethodInfo_var };
		LogCallback_t54 * L_1 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_logMessageReceived_m4337(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::HandleLog(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* LogType_t101_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void DebugLogPropagate_HandleLog_m2888 (DebugLogPropagate_t534 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
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
		String_t* L_5 = String_Format_m4338(NULL /*static, unused*/, (String_t*) &_stringLiteral1020, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = Application_get_platform_m3914(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, L_7, /*hidden argument*/NULL);
		DebugLogPropagate_LogInIOS_m2885(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeState.h"
// PausedOverlay
#include "AssemblyU2DCSharp_PausedOverlayMethodDeclarations.h"
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"


// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m2889 (DialogController_t535 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::Awake()
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern "C" void DialogController_Awake_m2890 (DialogController_t535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern TypeInfo* PausedOverlay_t618_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern "C" void DialogController_ShowDialog_m2891 (DialogController_t535 * __this, GameObject_t352 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = ___dialog;
		__this->___activeDialog_3 = L_0;
		PausedOverlay_t618 * L_1 = ((PausedOverlay_t618_StaticFields*)PausedOverlay_t618_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_2 = ___dialog;
		NullCheck(L_1);
		PausedOverlay_SetChildElement_m3315(L_1, L_2, /*hidden argument*/NULL);
		TimeController_t675 * L_3 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_SetTimeState_m3684(L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern "C" void DialogController_HideDialog_m2892 (DialogController_t535 * __this, GameObject_t352 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = ___dialog;
		GameObject_t352 * L_1 = (__this->___activeDialog_3);
		bool L_2 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
		TimeController_t675 * L_3 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_SetTimeState_m3684(L_3, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m2893 (DialogController_t535 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___activeDialog_3);
		bool L_1 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_0, (Object_t717 *)NULL, /*hidden argument*/NULL);
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
extern "C" void DistortFinishedHandler__ctor_m2894 (DistortFinishedHandler_t536 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DistortForEffect/DistortFinishedHandler::Invoke(UnityEngine.GameObject)
extern "C" void DistortFinishedHandler_Invoke_m2895 (DistortFinishedHandler_t536 * __this, GameObject_t352 * ___go, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DistortFinishedHandler_Invoke_m2895((DistortFinishedHandler_t536 *)__this->___prev_9,___go, method);
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
extern "C" void pinvoke_delegate_wrapper_DistortFinishedHandler_t536(Il2CppObject* delegate, GameObject_t352 * ___go)
{
	// Marshaling of parameter '___go' to native representation
	GameObject_t352 * ____go_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.GameObject'."));
}
// System.IAsyncResult DistortForEffect/DistortFinishedHandler::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * DistortFinishedHandler_BeginInvoke_m2896 (DistortFinishedHandler_t536 * __this, GameObject_t352 * ___go, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___go;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DistortForEffect/DistortFinishedHandler::EndInvoke(System.IAsyncResult)
extern "C" void DistortFinishedHandler_EndInvoke_m2897 (DistortFinishedHandler_t536 * __this, Object_t * ___result, const MethodInfo* method)
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



// System.Void DistortForEffect::.ctor()
extern "C" void DistortForEffect__ctor_m2898 (DistortForEffect_t537 * __this, const MethodInfo* method)
{
	{
		BounceLerp__ctor_m2823(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DistortForEffect::get_distorting()
extern "C" bool DistortForEffect_get_distorting_m2899 (DistortForEffect_t537 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdistortingU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void DistortForEffect::set_distorting(System.Boolean)
extern "C" void DistortForEffect_set_distorting_m2900 (DistortForEffect_t537 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdistortingU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Void DistortForEffect::Awake()
extern "C" void DistortForEffect_Awake_m2901 (DistortForEffect_t537 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___onAtStart_13);
		DistortForEffect_set_distorting_m2900(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Start()
extern "C" void DistortForEffect_Start_m2902 (DistortForEffect_t537 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = (__this->___thingToScale_11);
		bool L_1 = Object_op_Equality_m3926(NULL /*static, unused*/, L_0, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t352 * L_2 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4184(L_2, /*hidden argument*/NULL);
		__this->___thingToScale_11 = L_3;
	}

IL_0022:
	{
		Transform_t406 * L_4 = (__this->___thingToScale_11);
		NullCheck(L_4);
		Vector3_t538  L_5 = Transform_get_localScale_m4189(L_4, /*hidden argument*/NULL);
		__this->___originalScale_9 = L_5;
		return;
	}
}
// System.Void DistortForEffect::DistortWithDelay(System.Single)
extern "C" void DistortForEffect_DistortWithDelay_m2903 (DistortForEffect_t537 * __this, float ___delay, const MethodInfo* method)
{
	{
		bool L_0 = DistortForEffect_get_distorting_m2899(__this, /*hidden argument*/NULL);
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
		float L_1 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = ___delay;
		__this->___startDistortTime_8 = ((float)((float)L_1+(float)L_2));
		DistortForEffect_set_distorting_m2900(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::SetDistortFinishedHandler(DistortForEffect/DistortFinishedHandler)
extern "C" void DistortForEffect_SetDistortFinishedHandler_m2904 (DistortForEffect_t537 * __this, DistortFinishedHandler_t536 * ___handler, const MethodInfo* method)
{
	{
		DistortFinishedHandler_t536 * L_0 = ___handler;
		__this->___handler_7 = L_0;
		return;
	}
}
// System.Void DistortForEffect::Distort()
extern "C" void DistortForEffect_Distort_m2905 (DistortForEffect_t537 * __this, const MethodInfo* method)
{
	{
		DistortForEffect_DistortWithDelay_m2903(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Cancel()
extern "C" void DistortForEffect_Cancel_m2906 (DistortForEffect_t537 * __this, const MethodInfo* method)
{
	{
		DistortForEffect_set_distorting_m2900(__this, 0, /*hidden argument*/NULL);
		Transform_t406 * L_0 = (__this->___thingToScale_11);
		Vector3_t538  L_1 = (__this->___originalScale_9);
		NullCheck(L_0);
		Transform_set_localScale_m4190(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Update()
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" void DistortForEffect_Update_m2907 (DistortForEffect_t537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0 = DistortForEffect_get_distorting_m2899(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___startDistortTime_8);
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
		float L_3 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = (__this->___startDistortTime_8);
		V_1 = ((float)((float)L_4-(float)L_5));
		float L_6 = V_1;
		float L_7 = BounceLerp_GetCoefficientForTime_m2824(__this, L_6, (&V_2), /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		DistortForEffect_set_distorting_m2900(__this, 0, /*hidden argument*/NULL);
		DistortFinishedHandler_t536 * L_9 = (__this->___handler_7);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		DistortFinishedHandler_t536 * L_10 = (__this->___handler_7);
		GameObject_t352 * L_11 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< GameObject_t352 * >::Invoke(11 /* System.Void DistortForEffect/DistortFinishedHandler::Invoke(UnityEngine.GameObject) */, L_10, L_11);
	}

IL_005e:
	{
		float L_12 = (__this->___minScale_10);
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_007b;
		}
	}
	{
		float L_13 = (__this->___minScale_10);
		float L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Max_m4339(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
	}

IL_007b:
	{
		bool L_16 = (__this->___squishAndStretch_12);
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		float L_17 = V_3;
		V_4 = ((float)((float)(1.0f)/(float)L_17));
		goto IL_0097;
	}

IL_0094:
	{
		float L_18 = V_3;
		V_4 = L_18;
	}

IL_0097:
	{
		Transform_t406 * L_19 = (__this->___thingToScale_11);
		float L_20 = V_4;
		Vector3_t538 * L_21 = &(__this->___originalScale_9);
		float L_22 = (L_21->___x_1);
		float L_23 = V_3;
		Vector3_t538 * L_24 = &(__this->___originalScale_9);
		float L_25 = (L_24->___y_2);
		float L_26 = V_3;
		Vector3_t538 * L_27 = &(__this->___originalScale_9);
		float L_28 = (L_27->___z_3);
		Vector3_t538  L_29 = {0};
		Vector3__ctor_m4179(&L_29, ((float)((float)L_20*(float)L_22)), ((float)((float)L_23*(float)L_25)), ((float)((float)L_26*(float)L_28)), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_m4190(L_19, L_29, /*hidden argument*/NULL);
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
extern "C" void ExplicitMouseDesc__ctor_m2908 (ExplicitMouseDesc_t539 * __this, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
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
		ExplicitMouseDesc_AddWiggle_m2917(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MouseWiggleType ExplicitMouseDesc::get_wiggleType()
extern "C" int32_t ExplicitMouseDesc_get_wiggleType_m2909 (ExplicitMouseDesc_t539 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleTypeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleType(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_set_wiggleType_m2910 (ExplicitMouseDesc_t539 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleTypeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Single ExplicitMouseDesc::get_wiggleMagnitude()
extern "C" float ExplicitMouseDesc_get_wiggleMagnitude_m2911 (ExplicitMouseDesc_t539 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CwiggleMagnitudeU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleMagnitude(System.Single)
extern "C" void ExplicitMouseDesc_set_wiggleMagnitude_m2912 (ExplicitMouseDesc_t539 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CwiggleMagnitudeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 ExplicitMouseDesc::get_wiggleCycles()
extern "C" int32_t ExplicitMouseDesc_get_wiggleCycles_m2913 (ExplicitMouseDesc_t539 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleCyclesU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleCycles(System.Int32)
extern "C" void ExplicitMouseDesc_set_wiggleCycles_m2914 (ExplicitMouseDesc_t539 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleCyclesU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean ExplicitMouseDesc::get_wiggleClockwise()
extern "C" bool ExplicitMouseDesc_get_wiggleClockwise_m2915 (ExplicitMouseDesc_t539 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CwiggleClockwiseU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleClockwise(System.Boolean)
extern "C" void ExplicitMouseDesc_set_wiggleClockwise_m2916 (ExplicitMouseDesc_t539 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CwiggleClockwiseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void ExplicitMouseDesc::AddWiggle(MouseConfig/MouseWiggleType)
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern "C" void ExplicitMouseDesc_AddWiggle_m2917 (ExplicitMouseDesc_t539 * __this, int32_t ___wt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	MouseWiggleDesc_t611 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		ExplicitMouseDesc_set_wiggleType_m2910(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t601 * L_1 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		int32_t L_2 = ___wt;
		NullCheck(L_1);
		MouseWiggleDesc_t611 * L_3 = MouseConfig_GetWiggleDesc_m3179(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseWiggleDesc_t611 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		MouseWiggleDesc_t611 * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = (L_5->___minMagnitude_1);
		MouseWiggleDesc_t611 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = (L_7->___maxMagnitude_2);
		float L_9 = Random_Range_m4340(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleMagnitude_m2912(__this, L_9, /*hidden argument*/NULL);
		MouseWiggleDesc_t611 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___minCycles_3);
		MouseWiggleDesc_t611 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___maxCycles_4);
		int32_t L_14 = Random_Range_m3910(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleCycles_m2914(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = Random_Range_m3910(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleClockwise_m2916(__this, ((((int32_t)((((int32_t)L_15) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
extern "C" void FacebookSharing__ctor_m2918 (FacebookSharing_t540 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::Awake()
extern TypeInfo* FacebookSharing_t540_il2cpp_TypeInfo_var;
extern TypeInfo* InitDelegate_t419_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnInitComplete_m2920_MethodInfo_var;
extern "C" void FacebookSharing_Awake_m2919 (FacebookSharing_t540 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		InitDelegate_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookSharing_OnInitComplete_m2920_MethodInfo_var = il2cpp_codegen_method_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		((FacebookSharing_t540_StaticFields*)FacebookSharing_t540_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		IntPtr_t L_0 = { (void*)FacebookSharing_OnInitComplete_m2920_MethodInfo_var };
		InitDelegate_t419 * L_1 = (InitDelegate_t419 *)il2cpp_codegen_object_new (InitDelegate_t419_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m3792(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Init_m2258(NULL /*static, unused*/, L_1, (HideUnityDelegate_t420 *)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnInitComplete()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnInitComplete_m2920 (FacebookSharing_t540 * __this, const MethodInfo* method)
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
extern "C" void FacebookSharing_OnHideUnity_m2921 (FacebookSharing_t540 * __this, bool ___isGameShown, const MethodInfo* method)
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
extern "C" void FacebookSharing_ShareScore_m2922 (FacebookSharing_t540 * __this, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
{
	{
		int32_t L_0 = ___score;
		FacebookSharing_ShareScoreThroughLibraries_m2923(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_LoginCallback_m2925_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2923 (FacebookSharing_t540 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FacebookSharing_LoginCallback_m2925_MethodInfo_var = il2cpp_codegen_method_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1022, /*hidden argument*/NULL);
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
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1023, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FacebookSharing_LoginCallback_m2925_MethodInfo_var };
		FacebookDelegate_t433 * L_3 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3796(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Login_m2261(NULL /*static, unused*/, (String_t*) &_stringLiteral148, L_3, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0040:
	{
		int32_t L_4 = ___score;
		FacebookSharing_ShareScoreInternal_m2926(__this, L_4, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2924 (FacebookSharing_t540 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
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
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1024);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1024;
		StringU5BU5D_t75* L_1 = L_0;
		String_t* L_2 = WWW_EscapeURL_m4341(NULL /*static, unused*/, (String_t*) &_stringLiteral1025, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t75* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1026);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral1026;
		StringU5BU5D_t75* L_4 = L_3;
		String_t* L_5 = WWW_EscapeURL_m4341(NULL /*static, unused*/, (String_t*) &_stringLiteral1027, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1028);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 4)) = (String_t*)(String_t*) &_stringLiteral1028;
		StringU5BU5D_t75* L_7 = L_6;
		int32_t L_8 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		String_t* L_9 = Utilities_GetShareTitleForScore_m3747(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		String_t* L_10 = WWW_EscapeURL_m4341(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 5)) = (String_t*)L_10;
		StringU5BU5D_t75* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral1029);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 6)) = (String_t*)(String_t*) &_stringLiteral1029;
		StringU5BU5D_t75* L_12 = L_11;
		int32_t L_13 = ___score;
		String_t* L_14 = Utilities_GetShareMessageForScore_m3748(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = WWW_EscapeURL_m4341(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 7)) = (String_t*)L_15;
		StringU5BU5D_t75* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral1030);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 8)) = (String_t*)(String_t*) &_stringLiteral1030;
		StringU5BU5D_t75* L_17 = L_16;
		String_t* L_18 = WWW_EscapeURL_m4341(NULL /*static, unused*/, (String_t*) &_stringLiteral1031, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, ((int32_t)9))) = (String_t*)L_18;
		StringU5BU5D_t75* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)10));
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral1032);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral1032;
		StringU5BU5D_t75* L_20 = L_19;
		String_t* L_21 = WWW_EscapeURL_m4341(NULL /*static, unused*/, (String_t*) &_stringLiteral1033, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)11));
		ArrayElementTypeCheck (L_20, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, ((int32_t)11))) = (String_t*)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m450(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23 = V_0;
		String_t* L_24 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1034, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = ___score;
		String_t* L_26 = Utilities_GetShareMessageForScore_m3748(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		String_t* L_27 = WWW_EscapeURL_m4341(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		String_t* L_28 = WWW_EscapeURL_m4341(NULL /*static, unused*/, (String_t*) &_stringLiteral1031, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral1035, L_27, (String_t*) &_stringLiteral1030, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		String_t* L_30 = V_0;
		String_t* L_31 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1036, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_1;
		String_t* L_33 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1037, L_32, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		String_t* L_34 = V_2;
		String_t* L_35 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1038, L_34, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		String_t* L_36 = V_2;
		String_t* L_37 = V_1;
		Object_t * L_38 = Utilities_LaunchAppOrWeb_m3752(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3864(__this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::LoginCallback(FBResult)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_LoginCallback_m2925 (FacebookSharing_t540 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1039, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m2256(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = (__this->___scoreToShare_6);
		FacebookSharing_ShareScoreInternal_m2926(__this, L_1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnFeedFinished_m2927_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreInternal_m2926 (FacebookSharing_t540 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookSharing_OnFeedFinished_m2927_MethodInfo_var = il2cpp_codegen_method_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1040, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareTitleForScore_m3747(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___score;
		String_t* L_3 = Utilities_GetShareMessageForScore_m3748(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1041, L_4, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1042, L_6, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1043, /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		IntPtr_t L_10 = { (void*)FacebookSharing_OnFeedFinished_m2927_MethodInfo_var };
		FacebookDelegate_t433 * L_11 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3796(L_11, __this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Feed_m2266(NULL /*static, unused*/, (String_t*)NULL, (String_t*) &_stringLiteral1025, (String_t*) &_stringLiteral1027, L_8, L_9, (String_t*) &_stringLiteral1031, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (Dictionary_2_t116 *)NULL, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2927 (FacebookSharing_t540 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1044, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1045, /*hidden argument*/NULL);
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
extern "C" void FartPuff__ctor_m2928 (FartPuff_t541 * __this, const MethodInfo* method)
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
extern "C" void FartPuff_Awake_m2929 (FartPuff_t541 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___initialScale_10);
		__this->___scale_9 = L_0;
		float L_1 = Random_Range_m4340(NULL /*static, unused*/, (0.0f), (360.0f), /*hidden argument*/NULL);
		__this->___rotationDeg_8 = L_1;
		float L_2 = (__this->___minRotateDegVeclocity_6);
		float L_3 = (__this->___maxRotateDegVeclocity_5);
		float L_4 = Random_Range_m4340(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___rotateDegVelocity_7 = L_4;
		int32_t L_5 = Random_Range_m3910(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
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
extern "C" void FartPuff_Start_m2930 (FartPuff_t541 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FartPuff::Update()
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern "C" void FartPuff_Update_m2931 (FartPuff_t541 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t538  V_1 = {0};
	{
		TimeController_t675 * L_0 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = TimeController_get_timeState_m3681(L_0, /*hidden argument*/NULL);
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
		float L_2 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = (__this->___velocity_3);
		Vector3_t538  L_5 = (__this->___direction_2);
		Vector3_t538  L_6 = Vector3_op_Multiply_m4342(NULL /*static, unused*/, ((float)((float)L_3*(float)L_4)), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t406 * L_7 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Transform_t406 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t538  L_9 = Transform_get_localPosition_m4343(L_8, /*hidden argument*/NULL);
		Vector3_t538  L_10 = V_1;
		Vector3_t538  L_11 = Vector3_op_Addition_m4344(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localPosition_m4345(L_8, L_11, /*hidden argument*/NULL);
		float L_12 = (__this->___scale_9);
		float L_13 = V_0;
		float L_14 = (__this->___scaleVelocity_4);
		__this->___scale_9 = ((float)((float)L_12+(float)((float)((float)L_13*(float)L_14))));
		Transform_t406 * L_15 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_16 = (__this->___scale_9);
		float L_17 = (__this->___scale_9);
		Vector3_t538  L_18 = {0};
		Vector3__ctor_m4179(&L_18, L_16, L_17, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m4190(L_15, L_18, /*hidden argument*/NULL);
		float L_19 = (__this->___rotationDeg_8);
		float L_20 = V_0;
		float L_21 = (__this->___rotateDegVelocity_7);
		__this->___rotationDeg_8 = ((float)((float)L_19+(float)((float)((float)L_20*(float)L_21))));
		Transform_t406 * L_22 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_23 = (__this->___rotationDeg_8);
		Quaternion_t802  L_24 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m4294(L_22, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FartPuff::SetDirection(UnityEngine.Vector3)
extern "C" void FartPuff_SetDirection_m2932 (FartPuff_t541 * __this, Vector3_t538  ___direction, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = ___direction;
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

// SocialHelper
#include "AssemblyU2DCSharp_SocialHelper.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"


// System.Void FinalScoreController::.ctor()
extern "C" void FinalScoreController__ctor_m2933 (FinalScoreController_t542 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::Awake()
extern "C" void FinalScoreController_Awake_m2934 (FinalScoreController_t542 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FinalScoreController::Start()
extern "C" void FinalScoreController_Start_m2935 (FinalScoreController_t542 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_RegisterForEvents_m2937(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::OnDestroy()
extern "C" void FinalScoreController_OnDestroy_m2936 (FinalScoreController_t542 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_UnregisterForEvents_m2938(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m2939_MethodInfo_var;
extern "C" void FinalScoreController_RegisterForEvents_m2937 (FinalScoreController_t542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		FinalScoreController_OnGamePhaseChanged_m2939_MethodInfo_var = il2cpp_codegen_method_info_from_index(496);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m2939_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m2939_MethodInfo_var;
extern "C" void FinalScoreController_UnregisterForEvents_m2938 (FinalScoreController_t542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		FinalScoreController_OnGamePhaseChanged_m2939_MethodInfo_var = il2cpp_codegen_method_info_from_index(496);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m2939_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void FinalScoreController::OnGamePhaseChanged()
extern TypeInfo* SocialHelper_t665_il2cpp_TypeInfo_var;
extern "C" void FinalScoreController_OnGamePhaseChanged_m2939 (FinalScoreController_t542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0024;
		}
	}
	{
		SocialHelper_t665 * L_2 = ((SocialHelper_t665_StaticFields*)SocialHelper_t665_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		PlayerStats_t516 * L_3 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PlayerStats_get_gameScore_m3395(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		SocialHelper_ReportScore_m3629(L_2, L_4, /*hidden argument*/NULL);
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

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// GameUI
#include "AssemblyU2DCSharp_GameUIMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"


// System.Void FinalScoreUI::.ctor()
extern "C" void FinalScoreUI__ctor_m2940 (FinalScoreUI_t543 * __this, const MethodInfo* method)
{
	{
		Color_t325  L_0 = {0};
		Color__ctor_m4346(&L_0, (0.0f), (0.75f), (0.875f), /*hidden argument*/NULL);
		__this->___labelColor_5 = L_0;
		GameUI__ctor_m3049(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::Awake()
extern "C" void FinalScoreUI_Awake_m2941 (FinalScoreUI_t543 * __this, const MethodInfo* method)
{
	{
		__this->___started_6 = 0;
		Text_t502 * L_0 = (__this->___finalScoreLabel_4);
		Color_t325  L_1 = (__this->___labelColor_5);
		NullCheck(L_0);
		Graphic_set_color_m4347(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::Start()
extern "C" void FinalScoreUI_Start_m2942 (FinalScoreUI_t543 * __this, const MethodInfo* method)
{
	{
		__this->___started_6 = 1;
		FinalScoreUI_UpdateView_m2944(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::OnEnable()
extern "C" void FinalScoreUI_OnEnable_m2943 (FinalScoreUI_t543 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___started_6);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		FinalScoreUI_UpdateView_m2944(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void FinalScoreUI::UpdateView()
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern "C" void FinalScoreUI_UpdateView_m2944 (FinalScoreUI_t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
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
		PlayerStats_t516 * L_2 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_GetHighScore_m3416(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayerStats_t516 * L_4 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = PlayerStats_get_gameScore_m3395(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0039;
		}
	}
	{
		PlayerStats_t516 * L_8 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		PlayerStats_SetHighScore_m3417(L_8, L_9, /*hidden argument*/NULL);
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
		Text_t502 * L_11 = (__this->___personalBestText_2);
		NullCheck(L_11);
		GameObject_t352 * L_12 = Component_get_gameObject_m3901(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m4101(L_12, 0, /*hidden argument*/NULL);
		goto IL_009f;
	}

IL_0055:
	{
		Text_t502 * L_13 = (__this->___personalBestText_2);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3901(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m4101(L_14, 1, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_008d;
		}
	}
	{
		Text_t502 * L_17 = (__this->___personalBestText_2);
		Color_t325  L_18 = (__this->___labelColor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		String_t* L_19 = Utilities_AddTextColor_m3759(NULL /*static, unused*/, (String_t*) &_stringLiteral1046, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		goto IL_009f;
	}

IL_008d:
	{
		Text_t502 * L_20 = (__this->___personalBestText_2);
		int32_t L_21 = V_0;
		String_t* L_22 = FinalScoreUI_MakeBestScoreText_m2945(__this, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
	}

IL_009f:
	{
		Text_t502 * L_23 = (__this->___finalScoreText_3);
		int32_t L_24 = V_1;
		String_t* L_25 = FinalScoreUI_MakeFinalScoreText_m2946(__this, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
		return;
	}
}
// System.String FinalScoreUI::MakeBestScoreText(System.Int32)
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FinalScoreUI_MakeBestScoreText_m2945 (FinalScoreUI_t543 * __this, int32_t ___personalBest, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1047;
		String_t* L_0 = V_0;
		Color_t325  L_1 = (__this->___labelColor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		String_t* L_2 = Utilities_AddTextColor_m3759(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		int32_t L_4 = ___personalBest;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m4018(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral944, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String FinalScoreUI::MakeFinalScoreText(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* FinalScoreUI_MakeFinalScoreText_m2946 (FinalScoreUI_t543 * __this, int32_t ___finalScore, const MethodInfo* method)
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
		int32_t L_1 = ___finalScore;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m409(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
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
struct Canvas_t547;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t547_m4348(__this, method) (( Canvas_t547 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)
struct Component_t775;
struct RectTransform_t545;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t545_m4349(__this, method) (( RectTransform_t545 * (*) (Component_t775 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4141_gshared)(__this, method)


// System.Void FlyingAnimation::.ctor()
extern "C" void FlyingAnimation__ctor_m2947 (FlyingAnimation_t549 * __this, const MethodInfo* method)
{
	{
		WorldRelativeGUIElement__ctor_m3768(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingAnimation::Awake()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t547_m4348_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var;
extern "C" void FlyingAnimation_Awake_m2948 (FlyingAnimation_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t547_m4348_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484145);
		Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4350(NULL /*static, unused*/, (String_t*) &_stringLiteral1048, /*hidden argument*/NULL);
		__this->___uxCanvasGameObject_15 = L_0;
		GameObject_t352 * L_1 = (__this->___uxCanvasGameObject_15);
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3769(__this, L_1, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = (__this->___uxCanvasGameObject_15);
		NullCheck(L_2);
		Canvas_t547 * L_3 = GameObject_GetComponent_TisCanvas_t547_m4348(L_2, /*hidden argument*/GameObject_GetComponent_TisCanvas_t547_m4348_MethodInfo_var);
		__this->___uxCanvas_16 = L_3;
		Canvas_t547 * L_4 = (__this->___uxCanvas_16);
		NullCheck(L_4);
		Camera_t548 * L_5 = Canvas_get_worldCamera_m4351(L_4, /*hidden argument*/NULL);
		__this->___uxCamera_17 = L_5;
		RectTransform_t545 * L_6 = Component_GetComponent_TisRectTransform_t545_m4349(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var);
		__this->___myRectTransform_7 = L_6;
		Image_t503 * L_7 = (__this->___image_18);
		NullCheck(L_7);
		RectTransform_t545 * L_8 = Component_GetComponent_TisRectTransform_t545_m4349(L_7, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var);
		__this->___imageRectTransform_8 = L_8;
		return;
	}
}
// System.Void FlyingAnimation::Start()
extern "C" void FlyingAnimation_Start_m2949 (FlyingAnimation_t549 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FlyingAnimation::Update()
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" void FlyingAnimation_Update_m2950 (FlyingAnimation_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	SingleU5BU5D_t587* V_3 = {0};
	Vector3_t538  V_4 = {0};
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
		float L_1 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		GameObject_t352 * L_5 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		Object_Destroy_m4045(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		float L_6 = V_1;
		V_2 = ((float)((float)L_6/(float)(1.0f)));
		float L_7 = V_2;
		Vector3U5BU5D_t546* L_8 = (__this->___points_9);
		NullCheck(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		SingleU5BU5D_t587* L_9 = Utilities_GetBlendingCoefficients_m3756(NULL /*static, unused*/, L_7, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/NULL);
		V_3 = L_9;
		Vector3__ctor_m4179((&V_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_0091;
	}

IL_0067:
	{
		Vector3_t538  L_10 = V_4;
		SingleU5BU5D_t587* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		Vector3U5BU5D_t546* L_14 = (__this->___points_9);
		int32_t L_15 = V_5;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Vector3_t538  L_16 = Vector3_op_Multiply_m4342(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_11, L_13)), (*(Vector3_t538 *)((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_14, L_15))), /*hidden argument*/NULL);
		Vector3_t538  L_17 = Vector3_op_Addition_m4344(NULL /*static, unused*/, L_10, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		Vector3U5BU5D_t546* L_20 = (__this->___points_9);
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		RectTransform_t545 * L_21 = (__this->___myRectTransform_7);
		Vector3_t538  L_22 = V_4;
		NullCheck(L_21);
		RectTransform_set_anchoredPosition3D_m4310(L_21, L_22, /*hidden argument*/NULL);
		float L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
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
		RectTransform_t545 * L_32 = (__this->___imageRectTransform_8);
		float L_33 = V_8;
		float L_34 = V_8;
		Vector3_t538  L_35 = {0};
		Vector3__ctor_m4179(&L_35, L_33, L_34, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_m4190(L_32, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingAnimation::Configure(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" void FlyingAnimation_Configure_m2951 (FlyingAnimation_t549 * __this, Vector3_t538  ___worldStartPosition, GameObject_t352 * ___canvasTarget, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		Camera_t548 * L_0 = (__this->___uxCamera_17);
		GameObject_t352 * L_1 = ___canvasTarget;
		NullCheck(L_1);
		Transform_t406 * L_2 = GameObject_get_transform_m4184(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t538  L_3 = Transform_get_position_m4186(L_2, /*hidden argument*/NULL);
		Vector3_t538  L_4 = WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3773(__this, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t538  L_5 = ___worldStartPosition;
		Vector3_t538  L_6 = V_0;
		FlyingAnimation_CreatePoints_m2954(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->___running_11 = 0;
		return;
	}
}
// System.Void FlyingAnimation::ConfigureWithViewportPos(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void FlyingAnimation_ConfigureWithViewportPos_m2952 (FlyingAnimation_t549 * __this, Vector3_t538  ___worldStartPosition, Vector3_t538  ___viewportPos, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		Vector3_t538  L_0 = ___viewportPos;
		Vector3_t538  L_1 = WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3774(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t538  L_2 = ___worldStartPosition;
		Vector3_t538  L_3 = V_0;
		FlyingAnimation_CreatePoints_m2954(__this, L_2, L_3, /*hidden argument*/NULL);
		__this->___running_11 = 0;
		return;
	}
}
// System.Void FlyingAnimation::Run()
extern "C" void FlyingAnimation_Run_m2953 (FlyingAnimation_t549 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_10 = L_0;
		__this->___running_11 = 1;
		return;
	}
}
// System.Void FlyingAnimation::CreatePoints(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Vector3U5BU5D_t546_il2cpp_TypeInfo_var;
extern "C" void FlyingAnimation_CreatePoints_m2954 (FlyingAnimation_t549 * __this, Vector3_t538  ___worldStartPosition, Vector3_t538  ___otherCanvasPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		__this->___points_9 = ((Vector3U5BU5D_t546*)SZArrayNew(Vector3U5BU5D_t546_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t546* L_0 = (__this->___points_9);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Vector3_t538  L_1 = ___worldStartPosition;
		Vector3_t538  L_2 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3772(__this, L_1, /*hidden argument*/NULL);
		*((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_0, 0)) = L_2;
		Vector3U5BU5D_t546* L_3 = (__this->___points_9);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		Vector3_t538  L_4 = ___otherCanvasPosition;
		*((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_3, 2)) = L_4;
		float L_5 = Random_Range_m4340(NULL /*static, unused*/, (0.1f), (0.4f), /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = Random_Range_m4340(NULL /*static, unused*/, (0.1f), (0.4f), /*hidden argument*/NULL);
		V_1 = L_6;
		Vector3U5BU5D_t546* L_7 = (__this->___points_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		float L_8 = V_0;
		Vector3U5BU5D_t546* L_9 = (__this->___points_9);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		float L_10 = (((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_9, 0))->___x_1);
		float L_11 = V_0;
		Vector3U5BU5D_t546* L_12 = (__this->___points_9);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		float L_13 = (((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_12, 2))->___x_1);
		float L_14 = V_1;
		Vector3U5BU5D_t546* L_15 = (__this->___points_9);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		float L_16 = (((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_15, 0))->___y_2);
		float L_17 = V_1;
		Vector3U5BU5D_t546* L_18 = (__this->___points_9);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		float L_19 = (((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_18, 2))->___y_2);
		Vector3_t538  L_20 = {0};
		Vector3__ctor_m4179(&L_20, ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_8))*(float)L_10))+(float)((float)((float)L_11*(float)L_13)))), ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_14))*(float)L_16))+(float)((float)((float)L_17*(float)L_19)))), (0.0f), /*hidden argument*/NULL);
		*((Vector3_t538 *)(Vector3_t538 *)SZArrayLdElema(L_7, 1)) = L_20;
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
extern "C" void FooterController__ctor_m2955 (FooterController_t552 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FooterController::Start()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var;
extern "C" void FooterController_Start_m2956 (FooterController_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	RectTransform_t545 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Rect_t708  V_5 = {0};
	{
		float L_0 = GoogleAdController_GetBannerHeight_m3090(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		RectTransform_t545 * L_1 = Component_GetComponent_TisRectTransform_t545_m4349(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var);
		V_1 = L_1;
		RectTransform_t545 * L_2 = V_1;
		NullCheck(L_2);
		Rect_t708  L_3 = RectTransform_get_rect_m4321(L_2, /*hidden argument*/NULL);
		V_5 = L_3;
		float L_4 = Rect_get_height_m4183((&V_5), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = V_0;
		float L_6 = V_2;
		V_3 = ((float)((float)L_5/(float)L_6));
		V_4 = 0;
		goto IL_0049;
	}

IL_0029:
	{
		RectTransformU5BU5D_t551* L_7 = (__this->___contents_2);
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		float L_10 = V_3;
		float L_11 = V_3;
		Vector2_t110  L_12 = {0};
		Vector2__ctor_m4352(&L_12, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t538  L_13 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck((*(RectTransform_t545 **)(RectTransform_t545 **)SZArrayLdElema(L_7, L_9)));
		Transform_set_localScale_m4190((*(RectTransform_t545 **)(RectTransform_t545 **)SZArrayLdElema(L_7, L_9)), L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_15 = V_4;
		RectTransformU5BU5D_t551* L_16 = (__this->___contents_2);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		RectTransform_t545 * L_17 = V_1;
		float L_18 = V_0;
		Vector2_t110  L_19 = {0};
		Vector2__ctor_m4352(&L_19, (0.0f), L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m4354(L_17, L_19, /*hidden argument*/NULL);
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
extern "C" void GameAnalyticsAnalyticsController__ctor_m2957 (GameAnalyticsAnalyticsController_t553 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::Start()
extern "C" void GameAnalyticsAnalyticsController_Start_m2958 (GameAnalyticsAnalyticsController_t553 * __this, const MethodInfo* method)
{
	{
		GameAnalyticsAnalyticsController_RegisterForEvents_m2960(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::OnDestroy()
extern "C" void GameAnalyticsAnalyticsController_OnDestroy_m2959 (GameAnalyticsAnalyticsController_t553 * __this, const MethodInfo* method)
{
	{
		GameAnalyticsAnalyticsController_UnregisterForEvents_m2961(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2962_MethodInfo_var;
extern "C" void GameAnalyticsAnalyticsController_RegisterForEvents_m2960 (GameAnalyticsAnalyticsController_t553 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2962_MethodInfo_var = il2cpp_codegen_method_info_from_index(499);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2962_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2962_MethodInfo_var;
extern "C" void GameAnalyticsAnalyticsController_UnregisterForEvents_m2961 (GameAnalyticsAnalyticsController_t553 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2962_MethodInfo_var = il2cpp_codegen_method_info_from_index(499);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2962_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::OnGamePhaseChanged()
extern "C" void GameAnalyticsAnalyticsController_OnGamePhaseChanged_m2962 (GameAnalyticsAnalyticsController_t553 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		GameAnalyticsAnalyticsController_LogGameOverEvent_m2963(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::LogGameOverEvent()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void GameAnalyticsAnalyticsController_LogGameOverEvent_m2963 (GameAnalyticsAnalyticsController_t553 * __this, const MethodInfo* method)
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
		GamePhaseState_t564 * L_2 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_instancesFinishedEver_m3035(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t564 * L_8 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = GamePhaseState_get_instancesFinishedThisSession_m3033(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Concat_m409(NULL /*static, unused*/, L_7, L_11, /*hidden argument*/NULL);
		PlayerStats_t516 * L_13 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = PlayerStats_get_gameScore_m3395(L_13, /*hidden argument*/NULL);
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

// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelper.h"
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelperMethodDeclarations.h"


// System.Void GameCenterButtons::.ctor()
extern "C" void GameCenterButtons__ctor_m2964 (GameCenterButtons_t554 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::Awake()
extern "C" void GameCenterButtons_Awake_m2965 (GameCenterButtons_t554 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1049, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::Start()
extern "C" void GameCenterButtons_Start_m2966 (GameCenterButtons_t554 * __this, const MethodInfo* method)
{
	{
		GameCenterButtons_UpdateButtonAvailability_m2967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::UpdateButtonAvailability()
extern TypeInfo* SocialHelper_t665_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_UpdateButtonAvailability_m2967 (GameCenterButtons_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t665 * L_0 = ((SocialHelper_t665_StaticFields*)SocialHelper_t665_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		bool L_1 = SocialHelper_IsEnabled_m3631(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		DebugConfig_t533 * L_2 = DebugConfig_get_instance_m2878(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = DebugConfig_IsDebugFlagSet_m2882(L_2, 1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}

IL_001f:
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4101(L_4, 1, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0030:
	{
		GameObject_t352 * L_5 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m4101(L_5, 0, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void GameCenterButtons::ShowLeaderboard()
extern TypeInfo* SocialHelper_t665_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_ShowLeaderboard_m2968 (GameCenterButtons_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t665 * L_0 = ((SocialHelper_t665_StaticFields*)SocialHelper_t665_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowLeaderBoard_m3632(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::ShowRateMe()
extern TypeInfo* RatingsHelper_t635_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_ShowRateMe_m2969 (GameCenterButtons_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t635 * L_0 = ((RatingsHelper_t635_StaticFields*)RatingsHelper_t635_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m3441(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::ShowAchievements()
extern TypeInfo* SocialHelper_t665_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_ShowAchievements_m2970 (GameCenterButtons_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t665 * L_0 = ((SocialHelper_t665_StaticFields*)SocialHelper_t665_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowAchievements_m3633(L_0, /*hidden argument*/NULL);
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
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// RealAngusData
#include "AssemblyU2DCSharp_RealAngusData.h"
// Accumulator
#include "AssemblyU2DCSharp_Accumulator.h"
// EnumAccumulator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen.h"
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
// RealAngusData
#include "AssemblyU2DCSharp_RealAngusDataMethodDeclarations.h"
// Accumulator
#include "AssemblyU2DCSharp_AccumulatorMethodDeclarations.h"
// MouseSinkController
#include "AssemblyU2DCSharp_MouseSinkControllerMethodDeclarations.h"
// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromDataMethodDeclarations.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
struct GameObject_t352;
struct MouseSpawnFromData_t556;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
// !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
#define GameObject_GetComponent_TisMouseSpawnFromData_t556_m4355(__this, method) (( MouseSpawnFromData_t556 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m2971 (GameController_t557 * __this, const MethodInfo* method)
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
extern TypeInfo* GameController_t557_il2cpp_TypeInfo_var;
extern "C" GameController_t557 * GameController_get_instance_m2972 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t557 * L_0 = ((GameController_t557_StaticFields*)GameController_t557_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void GameController::set_instance(GameController)
extern TypeInfo* GameController_t557_il2cpp_TypeInfo_var;
extern "C" void GameController_set_instance_m2973 (Object_t * __this /* static, unused */, GameController_t557 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t557 * L_0 = ___value;
		((GameController_t557_StaticFields*)GameController_t557_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void GameController::Awake()
extern const MethodInfo* GameObject_GetComponent_TisMouseSpawnFromData_t556_m4355_MethodInfo_var;
extern "C" void GameController_Awake_m2974 (GameController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisMouseSpawnFromData_t556_m4355_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484148);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_set_instance_m2973(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___checkForPhaseChanges_9 = 0;
		GameObject_t352 * L_0 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MouseSpawnFromData_t556 * L_1 = GameObject_GetComponent_TisMouseSpawnFromData_t556_m4355(L_0, /*hidden argument*/GameObject_GetComponent_TisMouseSpawnFromData_t556_m4355_MethodInfo_var);
		__this->___mouseSpawnFromData_7 = L_1;
		return;
	}
}
// System.Void GameController::Start()
extern TypeInfo* SocialHelper_t665_il2cpp_TypeInfo_var;
extern TypeInfo* GameController_t557_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_U3CStartU3Em__4A_m2991_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4008_MethodInfo_var;
extern "C" void GameController_Start_m2975 (GameController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		GameController_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		GameController_U3CStartU3Em__4A_m2991_MethodInfo_var = il2cpp_codegen_method_info_from_index(501);
		Action_1__ctor_m4008_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t665 * G_B2_0 = {0};
	SocialHelper_t665 * G_B1_0 = {0};
	{
		GameController_RegisterForEvents_m2978(__this, /*hidden argument*/NULL);
		GameController_RestartGame_m2980(__this, /*hidden argument*/NULL);
		SocialHelper_t665 * L_0 = ((SocialHelper_t665_StaticFields*)SocialHelper_t665_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		Action_1_t277 * L_1 = ((GameController_t557_StaticFields*)GameController_t557_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
	}
	{
		IntPtr_t L_2 = { (void*)GameController_U3CStartU3Em__4A_m2991_MethodInfo_var };
		Action_1_t277 * L_3 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4008(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m4008_MethodInfo_var);
		((GameController_t557_StaticFields*)GameController_t557_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		Action_1_t277 * L_4 = ((GameController_t557_StaticFields*)GameController_t557_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		NullCheck(G_B2_0);
		SocialHelper_Authenticate_m3626(G_B2_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Update()
extern "C" void GameController_Update_m2976 (GameController_t557 * __this, const MethodInfo* method)
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
		bool L_1 = GameController_CheckForGameEnd_m2987(__this, /*hidden argument*/NULL);
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
		bool L_2 = GameController_CheckForLevelEnd_m2989(__this, /*hidden argument*/NULL);
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
extern "C" void GameController_OnDestroy_m2977 (GameController_t557 * __this, const MethodInfo* method)
{
	{
		GameController_UnregisterForEvents_m2979(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t531_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m2982_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m2981_MethodInfo_var;
extern const MethodInfo* GameController_OnMouseKilled_m2990_MethodInfo_var;
extern "C" void GameController_RegisterForEvents_m2978 (GameController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		GameController_OnGamePhaseChanged_m2982_MethodInfo_var = il2cpp_codegen_method_info_from_index(502);
		GameController_OnGameInstanceChanged_m2981_MethodInfo_var = il2cpp_codegen_method_info_from_index(503);
		GameController_OnMouseKilled_m2990_MethodInfo_var = il2cpp_codegen_method_info_from_index(504);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m2982_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t564 * L_4 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m2981_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_6 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GameInstanceChanged_m3025(L_4, L_6, /*hidden argument*/NULL);
		DeadMouseRelay_t532 * L_7 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)GameController_OnMouseKilled_m2990_MethodInfo_var };
		MouseKillEventHandler_t531 * L_9 = (MouseKillEventHandler_t531 *)il2cpp_codegen_object_new (MouseKillEventHandler_t531_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2863(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		DeadMouseRelay_add_MouseKill_m2870(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t531_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m2982_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m2981_MethodInfo_var;
extern const MethodInfo* GameController_OnMouseKilled_m2990_MethodInfo_var;
extern "C" void GameController_UnregisterForEvents_m2979 (GameController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MouseKillEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		GameController_OnGamePhaseChanged_m2982_MethodInfo_var = il2cpp_codegen_method_info_from_index(502);
		GameController_OnGameInstanceChanged_m2981_MethodInfo_var = il2cpp_codegen_method_info_from_index(503);
		GameController_OnMouseKilled_m2990_MethodInfo_var = il2cpp_codegen_method_info_from_index(504);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m2982_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t564 * L_4 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m2981_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_6 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GameInstanceChanged_m3026(L_4, L_6, /*hidden argument*/NULL);
		DeadMouseRelay_t532 * L_7 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)GameController_OnMouseKilled_m2990_MethodInfo_var };
		MouseKillEventHandler_t531 * L_9 = (MouseKillEventHandler_t531 *)il2cpp_codegen_object_new (MouseKillEventHandler_t531_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2863(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		DeadMouseRelay_remove_MouseKill_m2871(L_7, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m2980 (GameController_t557 * __this, const MethodInfo* method)
{
	{
		GameLevelState_t560 * L_0 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_SetGameLevel_m3009(L_0, 1, /*hidden argument*/NULL);
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_RestartGame_m3043(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m2981 (GameController_t557 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m2982 (GameController_t557 * __this, const MethodInfo* method)
{
	CrossSceneState_t527 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
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
			goto IL_004d;
		}
	}
	{
		goto IL_0068;
	}

IL_0024:
	{
		CrossSceneState_t527 * L_3 = CrossSceneState_get_instance_m2851(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		CrossSceneState_t527 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___didWelcome_2 = 1;
		goto IL_0068;
	}

IL_0036:
	{
		GameController_EnqueueMiceForLevel_m2985(__this, /*hidden argument*/NULL);
		GameController_UpdateMouseSinkTrapCount_m2984(__this, /*hidden argument*/NULL);
		GameController_UpdateRealAngusContentLocks_m2983(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_004d:
	{
		GameLevelState_t560 * L_5 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t560 * L_6 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = GameLevelState_get_gameLevel_m3003(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameLevelState_SetGameLevel_m3009(L_5, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// System.Void GameController::UpdateRealAngusContentLocks()
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern "C" void GameController_UpdateRealAngusContentLocks_m2983 (GameController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t586 * V_0 = {0};
	{
		LevelConfig_t592 * L_0 = LevelConfig_get_instance_m3124(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t560 * L_1 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m3003(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t586 * L_3 = LevelConfig_GetLevelDescription_m3134(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RealAngusData_t644 * L_4 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		LevelDescription_t586 * L_5 = V_0;
		NullCheck(L_5);
		Accumulator_t492 * L_6 = (L_5->___realAngusAccumulator_12);
		NullCheck(L_6);
		int32_t L_7 = Accumulator_get_derivedCount_m2715(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RealAngusData_UnlockNItems_m3480(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::UpdateMouseSinkTrapCount()
extern "C" void GameController_UpdateMouseSinkTrapCount_m2984 (GameController_t557 * __this, const MethodInfo* method)
{
	LevelDescription_t586 * V_0 = {0};
	EnumAccumulator_1_t581 * V_1 = {0};
	int32_t V_2 = 0;
	{
		LevelConfig_t592 * L_0 = LevelConfig_get_instance_m3124(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t560 * L_1 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m3003(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t586 * L_3 = LevelConfig_GetLevelDescription_m3134(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t586 * L_4 = V_0;
		NullCheck(L_4);
		EnumAccumulator_1_t581 * L_5 = (L_4->___mouseHolesAccumulator_5);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0041;
	}

IL_0023:
	{
		MouseSinkControllerU5BU5D_t555* L_6 = (__this->___mouseSinkControllers_5);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		EnumAccumulator_1_t581 * L_9 = V_1;
		NullCheck(L_9);
		AccumulatorU5BU5D_t807* L_10 = (L_9->___accumulators_0);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(Accumulator_t492 **)(Accumulator_t492 **)SZArrayLdElema(L_10, L_12)));
		int32_t L_13 = Accumulator_get_derivedCount_m2715((*(Accumulator_t492 **)(Accumulator_t492 **)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck((*(MouseSinkController_t606 **)(MouseSinkController_t606 **)SZArrayLdElema(L_6, L_8)));
		MouseSinkController_SetTrapCapacity_m3233((*(MouseSinkController_t606 **)(MouseSinkController_t606 **)SZArrayLdElema(L_6, L_8)), L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		EnumAccumulator_1_t581 * L_16 = V_1;
		NullCheck(L_16);
		AccumulatorU5BU5D_t807* L_17 = (L_16->___accumulators_0);
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void GameController::EnqueueMiceForLevel()
extern "C" void GameController_EnqueueMiceForLevel_m2985 (GameController_t557 * __this, const MethodInfo* method)
{
	LevelDescription_t586 * V_0 = {0};
	{
		MouseSpawnFromData_t556 * L_0 = (__this->___mouseSpawnFromData_7);
		NullCheck(L_0);
		MouseSpawnFromData_Clear_m3253(L_0, /*hidden argument*/NULL);
		LevelConfig_t592 * L_1 = LevelConfig_get_instance_m3124(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t560 * L_2 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m3003(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		LevelDescription_t586 * L_4 = LevelConfig_GetLevelDescription_m3134(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		MouseSpawnFromData_t556 * L_5 = (__this->___mouseSpawnFromData_7);
		LevelDescription_t586 * L_6 = V_0;
		NullCheck(L_6);
		List_1_t580 * L_7 = (L_6->___explicitMouseDescs_1);
		NullCheck(L_5);
		MouseSpawnFromData_AddMice_m3254(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m2986 (GameController_t557 * __this, MouseMove_t530 * ___mouse, const MethodInfo* method)
{
	{
		__this->___checkForPhaseChanges_9 = 1;
		return;
	}
}
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m2987 (GameController_t557 * __this, const MethodInfo* method)
{
	MouseSinkController_t606 * V_0 = {0};
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
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
		MouseSinkController_t606 * L_2 = GameController_FindDoomedExit_m2988(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		MouseSinkController_t606 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_3, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		GamePhaseState_t564 * L_5 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GamePhaseState_TransitionWithPause_m3045(L_5, 4, /*hidden argument*/NULL);
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// MouseSinkController GameController::FindDoomedExit()
extern "C" MouseSinkController_t606 * GameController_FindDoomedExit_m2988 (GameController_t557 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	MouseSinkController_t606 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0007:
	{
		MouseSinkControllerU5BU5D_t555* L_0 = (__this->___mouseSinkControllers_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(MouseSinkController_t606 **)(MouseSinkController_t606 **)SZArrayLdElema(L_0, L_2));
		MouseSinkController_t606 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = MouseSinkController_get_savedMouseCount_m3216(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		MouseSinkController_t606 * L_5 = V_1;
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
		MouseSinkControllerU5BU5D_t555* L_8 = (__this->___mouseSinkControllers_5);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return (MouseSinkController_t606 *)NULL;
	}
}
// System.Boolean GameController::CheckForLevelEnd()
extern TypeInfo* MouseMove_t530_il2cpp_TypeInfo_var;
extern "C" bool GameController_CheckForLevelEnd_m2989 (GameController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
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
		MouseSpawnFromData_t556 * L_2 = (__this->___mouseSpawnFromData_7);
		NullCheck(L_2);
		bool L_3 = MouseSpawnFromData_FinishedWithCurrentSet_m3252(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t530_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t530_StaticFields*)MouseMove_t530_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		GamePhaseState_t564 * L_5 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GamePhaseState_TransitionWithPause_m3045(L_5, 3, /*hidden argument*/NULL);
		return 1;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m2990 (GameController_t557 * __this, MouseMove_t530 * ___mouse, const MethodInfo* method)
{
	{
		__this->___checkForPhaseChanges_9 = 1;
		return;
	}
}
// System.Void GameController::<Start>m__4A(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t696_il2cpp_TypeInfo_var;
extern TypeInfo* IUserProfile_t808_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t809_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameController_U3CStartU3Em__4A_m2991 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		IUserProfile_t808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		ILocalUser_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
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
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1050, /*hidden argument*/NULL);
		ObjectU5BU5D_t696* L_1 = ((ObjectU5BU5D_t696*)SZArrayNew(ObjectU5BU5D_t696_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral1051);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral1051;
		ObjectU5BU5D_t696* L_2 = L_1;
		Object_t * L_3 = Social_get_localUser_m4356(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_userName() */, IUserProfile_t808_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t696* L_5 = L_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1052);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral1052;
		ObjectU5BU5D_t696* L_6 = L_5;
		Object_t * L_7 = Social_get_localUser_m4356(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_t808_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_8;
		ObjectU5BU5D_t696* L_9 = L_6;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1053);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 4)) = (Object_t *)(String_t*) &_stringLiteral1053;
		ObjectU5BU5D_t696* L_10 = L_9;
		Object_t * L_11 = Social_get_localUser_m4356(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_underage() */, ILocalUser_t809_il2cpp_TypeInfo_var, L_11);
		bool L_13 = L_12;
		Object_t * L_14 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m4019(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = V_0;
		Debug_Log_m382(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_006b:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1054, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// GameLevelDisplay
#include "AssemblyU2DCSharp_GameLevelDisplay.h"
#ifndef _MSC_VER
#else
#endif
// GameLevelDisplay
#include "AssemblyU2DCSharp_GameLevelDisplayMethodDeclarations.h"

// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandle.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandleMethodDeclarations.h"
struct GameObject_t352;
struct Text_t502;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t502_m4357(__this, method) (( Text_t502 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void GameLevelDisplay::.ctor()
extern "C" void GameLevelDisplay__ctor_m2992 (GameLevelDisplay_t558 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelDisplay::Start()
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t502_m4357_MethodInfo_var;
extern const MethodInfo* GameLevelDisplay_SetGameLevelText_m2995_MethodInfo_var;
extern "C" void GameLevelDisplay_Start_m2993 (GameLevelDisplay_t558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GameObject_GetComponent_TisText_t502_m4357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		GameLevelDisplay_SetGameLevelText_m2995_MethodInfo_var = il2cpp_codegen_method_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t502 * L_1 = GameObject_GetComponent_TisText_t502_m4357(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t502_m4357_MethodInfo_var);
		__this->___levelText_2 = L_1;
		GameLevelState_t560 * L_2 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)GameLevelDisplay_SetGameLevelText_m2995_MethodInfo_var };
		GameLevelChangedEventHandler_t559 * L_4 = (GameLevelChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2996(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameLevelState_add_GameLevelChanged_m3001(L_2, L_4, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		GameLevelDisplay_SetGameLevelText_m2995(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelDisplay::OnDestroy()
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* GameLevelDisplay_SetGameLevelText_m2995_MethodInfo_var;
extern "C" void GameLevelDisplay_OnDestroy_m2994 (GameLevelDisplay_t558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GameLevelDisplay_SetGameLevelText_m2995_MethodInfo_var = il2cpp_codegen_method_info_from_index(506);
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
		GameLevelState_t560 * L_1 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameLevelDisplay_SetGameLevelText_m2995_MethodInfo_var };
		GameLevelChangedEventHandler_t559 * L_3 = (GameLevelChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2996(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameLevelDisplay::SetGameLevelText()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameLevelDisplay_SetGameLevelText_m2995 (GameLevelDisplay_t558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t502 * L_0 = (__this->___levelText_2);
		GameLevelState_t560 * L_1 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m3003(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral998, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void GameLevelState/GameLevelChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameLevelChangedEventHandler__ctor_m2996 (GameLevelChangedEventHandler_t559 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GameLevelState/GameLevelChangedEventHandler::Invoke()
extern "C" void GameLevelChangedEventHandler_Invoke_m2997 (GameLevelChangedEventHandler_t559 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameLevelChangedEventHandler_Invoke_m2997((GameLevelChangedEventHandler_t559 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameLevelChangedEventHandler_t559(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GameLevelState/GameLevelChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameLevelChangedEventHandler_BeginInvoke_m2998 (GameLevelChangedEventHandler_t559 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GameLevelState/GameLevelChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameLevelChangedEventHandler_EndInvoke_m2999 (GameLevelChangedEventHandler_t559 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m3000 (GameLevelState_t560 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_add_GameLevelChanged_m3001 (GameLevelState_t560 * __this, GameLevelChangedEventHandler_t559 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t559 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t559 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t559 *)Castclass(L_2, GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_remove_GameLevelChanged_m3002 (GameLevelState_t560 * __this, GameLevelChangedEventHandler_t559 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t559 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t559 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t559 *)Castclass(L_2, GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m3003 (GameLevelState_t560 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameLevelU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m3004 (GameLevelState_t560 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameLevelU3Ek__BackingField_3 = L_0;
		return;
	}
}
// GameLevelState GameLevelState::get_instance()
extern TypeInfo* GameLevelState_t560_il2cpp_TypeInfo_var;
extern "C" GameLevelState_t560 * GameLevelState_get_instance_m3005 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t560 * L_0 = ((GameLevelState_t560_StaticFields*)GameLevelState_t560_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameLevelState::set_instance(GameLevelState)
extern TypeInfo* GameLevelState_t560_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_set_instance_m3006 (Object_t * __this /* static, unused */, GameLevelState_t560 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t560_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t560 * L_0 = ___value;
		((GameLevelState_t560_StaticFields*)GameLevelState_t560_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m3007 (GameLevelState_t560 * __this, const MethodInfo* method)
{
	{
		GameLevelState_set_instance_m3006(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m3008 (GameLevelState_t560 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m3009 (GameLevelState_t560 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___gameLevel;
		GameLevelState_set_gameLevel_m3004(__this, L_0, /*hidden argument*/NULL);
		GameLevelChangedEventHandler_t559 * L_1 = (__this->___GameLevelChanged_2);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameLevelChangedEventHandler_t559 * L_2 = (__this->___GameLevelChanged_2);
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
extern "C" void GameInstanceChangedEventHandler__ctor_m3010 (GameInstanceChangedEventHandler_t562 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke()
extern "C" void GameInstanceChangedEventHandler_Invoke_m3011 (GameInstanceChangedEventHandler_t562 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameInstanceChangedEventHandler_Invoke_m3011((GameInstanceChangedEventHandler_t562 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameInstanceChangedEventHandler_t562(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GameInstanceChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameInstanceChangedEventHandler_BeginInvoke_m3012 (GameInstanceChangedEventHandler_t562 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameInstanceChangedEventHandler_EndInvoke_m3013 (GameInstanceChangedEventHandler_t562 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GamePhaseState/GamePhaseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GamePhaseChangedEventHandler__ctor_m3014 (GamePhaseChangedEventHandler_t563 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke()
extern "C" void GamePhaseChangedEventHandler_Invoke_m3015 (GamePhaseChangedEventHandler_t563 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GamePhaseChangedEventHandler_Invoke_m3015((GamePhaseChangedEventHandler_t563 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GamePhaseChangedEventHandler_t563(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GamePhaseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GamePhaseChangedEventHandler_BeginInvoke_m3016 (GamePhaseChangedEventHandler_t563 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GamePhaseChangedEventHandler_EndInvoke_m3017 (GamePhaseChangedEventHandler_t563 * __this, Object_t * ___result, const MethodInfo* method)
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



// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator14::.ctor()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator14__ctor_m3018 (U3CSetupPendingPhaseU3Ec__Iterator14_t565 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator14::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator14_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3019 (U3CSetupPendingPhaseU3Ec__Iterator14_t565 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator14::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator14_System_Collections_IEnumerator_get_Current_m3020 (U3CSetupPendingPhaseU3Ec__Iterator14_t565 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GamePhaseState/<SetupPendingPhase>c__Iterator14::MoveNext()
extern TypeInfo* WaitForSeconds_t799_il2cpp_TypeInfo_var;
extern "C" bool U3CSetupPendingPhaseU3Ec__Iterator14_MoveNext_m3021 (U3CSetupPendingPhaseU3Ec__Iterator14_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		GamePhaseState_t564 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___pendingPhaseTimeout_3 = ((float)((float)L_3+(float)(2.2f)));
		WaitForSeconds_t799 * L_4 = (WaitForSeconds_t799 *)il2cpp_codegen_object_new (WaitForSeconds_t799_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4284(L_4, (2.2f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0079;
	}

IL_0053:
	{
		GamePhaseState_t564 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		int32_t L_6 = GamePhaseState_get_gamePhase_m3029(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)6))))
		{
			goto IL_0070;
		}
	}
	{
		GamePhaseState_t564 * L_7 = (__this->___U3CU3Ef__this_2);
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
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator14_Dispose_m3022 (U3CSetupPendingPhaseU3Ec__Iterator14_t565 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator14::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator14_Reset_m3023 (U3CSetupPendingPhaseU3Ec__Iterator14_t565 * __this, const MethodInfo* method)
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



// System.Void GamePhaseState::.ctor()
extern "C" void GamePhaseState__ctor_m3024 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GameInstanceChanged_m3025 (GamePhaseState_t564 * __this, GameInstanceChangedEventHandler_t562 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t562 * L_0 = (__this->___GameInstanceChanged_6);
		GameInstanceChangedEventHandler_t562 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_6 = ((GameInstanceChangedEventHandler_t562 *)Castclass(L_2, GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GameInstanceChanged_m3026 (GamePhaseState_t564 * __this, GameInstanceChangedEventHandler_t562 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t562 * L_0 = (__this->___GameInstanceChanged_6);
		GameInstanceChangedEventHandler_t562 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_6 = ((GameInstanceChangedEventHandler_t562 *)Castclass(L_2, GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GamePhaseChanged_m3027 (GamePhaseState_t564 * __this, GamePhaseChangedEventHandler_t563 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t563 * L_0 = (__this->___GamePhaseChanged_7);
		GamePhaseChangedEventHandler_t563 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_7 = ((GamePhaseChangedEventHandler_t563 *)Castclass(L_2, GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GamePhaseChanged_m3028 (GamePhaseState_t564 * __this, GamePhaseChangedEventHandler_t563 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t563 * L_0 = (__this->___GamePhaseChanged_7);
		GamePhaseChangedEventHandler_t563 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_7 = ((GamePhaseChangedEventHandler_t563 *)Castclass(L_2, GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var));
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m3029 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgamePhaseU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m3030 (GamePhaseState_t564 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgamePhaseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_previousGamePhase()
extern "C" int32_t GamePhaseState_get_previousGamePhase_m3031 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpreviousGamePhaseU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void GamePhaseState::set_previousGamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_previousGamePhase_m3032 (GamePhaseState_t564 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpreviousGamePhaseU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 GamePhaseState::get_instancesFinishedThisSession()
extern "C" int32_t GamePhaseState_get_instancesFinishedThisSession_m3033 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CinstancesFinishedThisSessionU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void GamePhaseState::set_instancesFinishedThisSession(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedThisSession_m3034 (GamePhaseState_t564 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CinstancesFinishedThisSessionU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int32 GamePhaseState::get_instancesFinishedEver()
extern "C" int32_t GamePhaseState_get_instancesFinishedEver_m3035 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CinstancesFinishedEverU3Ek__BackingField_11);
		return L_0;
	}
}
// System.Void GamePhaseState::set_instancesFinishedEver(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedEver_m3036 (GamePhaseState_t564 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CinstancesFinishedEverU3Ek__BackingField_11 = L_0;
		return;
	}
}
// GamePhaseState GamePhaseState::get_instance()
extern TypeInfo* GamePhaseState_t564_il2cpp_TypeInfo_var;
extern "C" GamePhaseState_t564 * GamePhaseState_get_instance_m3037 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t564 * L_0 = ((GamePhaseState_t564_StaticFields*)GamePhaseState_t564_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern TypeInfo* GamePhaseState_t564_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_set_instance_m3038 (Object_t * __this /* static, unused */, GamePhaseState_t564 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t564 * L_0 = ___value;
		((GamePhaseState_t564_StaticFields*)GamePhaseState_t564_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m3039 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_instance_m3038(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GamePhaseState_set_gamePhase_m3030(__this, 0, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3032(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::Start()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_Start_m3040 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3347(L_0, (String_t*) &_stringLiteral1055, 0, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedEver_m3036(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m3041 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___shouldCheckForPhaseTransition_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GamePhaseState_CheckForPhaseTransition_m3046(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m3042 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3029(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m3043 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_gamePhase_m3030(__this, 0, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3032(__this, 0, /*hidden argument*/NULL);
		GameInstanceChangedEventHandler_t562 * L_0 = (__this->___GameInstanceChanged_6);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		GameInstanceChangedEventHandler_t562 * L_1 = (__this->___GameInstanceChanged_6);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke() */, L_1);
	}

IL_0024:
	{
		CrossSceneState_t527 * L_2 = CrossSceneState_get_instance_m2851(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (L_2->___didWelcome_2);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		GamePhaseState_TransitionToPhase_m3048(__this, 2, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_003f:
	{
		GamePhaseState_TransitionToPhase_m3048(__this, 1, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern TypeInfo* U3CSetupPendingPhaseU3Ec__Iterator14_t565_il2cpp_TypeInfo_var;
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m3044 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSetupPendingPhaseU3Ec__Iterator14_t565_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	U3CSetupPendingPhaseU3Ec__Iterator14_t565 * V_0 = {0};
	{
		U3CSetupPendingPhaseU3Ec__Iterator14_t565 * L_0 = (U3CSetupPendingPhaseU3Ec__Iterator14_t565 *)il2cpp_codegen_object_new (U3CSetupPendingPhaseU3Ec__Iterator14_t565_il2cpp_TypeInfo_var);
		U3CSetupPendingPhaseU3Ec__Iterator14__ctor_m3018(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetupPendingPhaseU3Ec__Iterator14_t565 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CSetupPendingPhaseU3Ec__Iterator14_t565 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m3045 (GamePhaseState_t564 * __this, int32_t ___phase, const MethodInfo* method)
{
	{
		int32_t L_0 = ___phase;
		__this->___pendingPhase_2 = L_0;
		GamePhaseState_TransitionToPhase_m3048(__this, 6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m3046 (GamePhaseState_t564 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3029(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = (__this->___pendingPhaseTimeout_3);
		float L_2 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) <= ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = (__this->___pendingPhase_2);
		GamePhaseState_TransitionToPhase_m3048(__this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		__this->___shouldCheckForPhaseTransition_4 = 0;
		return;
	}
}
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m3047 (GamePhaseState_t564 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B20_0 = 0;
	{
		int32_t L_0 = ___oldPhase;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
		if (L_1 == 2)
		{
			goto IL_0047;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0060;
		}
		if (L_1 == 5)
		{
			goto IL_0065;
		}
		if (L_1 == 6)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0074;
	}

IL_0029:
	{
		int32_t L_2 = ___newPhase;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = ___newPhase;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
	}

IL_0037:
	{
		return G_B5_0;
	}

IL_0038:
	{
		int32_t L_4 = ___newPhase;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_5 = ___newPhase;
		G_B9_0 = ((((int32_t)L_5) == ((int32_t)5))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B9_0 = 1;
	}

IL_0046:
	{
		return G_B9_0;
	}

IL_0047:
	{
		int32_t L_6 = ___newPhase;
		return ((((int32_t)L_6) == ((int32_t)6))? 1 : 0);
	}

IL_004c:
	{
		int32_t L_7 = ___newPhase;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = ___newPhase;
		G_B14_0 = ((((int32_t)L_8) == ((int32_t)3))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B14_0 = 1;
	}

IL_005a:
	{
		return G_B14_0;
	}

IL_005b:
	{
		int32_t L_9 = ___newPhase;
		return ((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
	}

IL_0060:
	{
		int32_t L_10 = ___newPhase;
		return ((((int32_t)L_10) == ((int32_t)5))? 1 : 0);
	}

IL_0065:
	{
		int32_t L_11 = ___newPhase;
		if ((((int32_t)L_11) == ((int32_t)4)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_12 = ___newPhase;
		G_B20_0 = ((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B20_0 = 1;
	}

IL_0073:
	{
		return G_B20_0;
	}

IL_0074:
	{
		return 0;
	}
}
// System.Void GamePhaseState::TransitionToPhase(GamePhaseState/GamePhaseType)
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_TransitionToPhase_m3048 (GamePhaseState_t564 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3029(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___newPhase;
		bool L_2 = GamePhaseState_IsLegalTransition_m3047(__this, L_0, L_1, /*hidden argument*/NULL);
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
		int32_t L_3 = GamePhaseState_get_gamePhase_m3029(__this, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3032(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___newPhase;
		GamePhaseState_set_gamePhase_m3030(__this, L_4, /*hidden argument*/NULL);
		GamePhaseState_t564 * L_5 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = GamePhaseState_get_gamePhase_m3029(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_7 = GamePhaseState_get_instancesFinishedThisSession_m3033(__this, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedThisSession_m3034(__this, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_8 = GamePhaseState_get_instancesFinishedEver_m3035(__this, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedEver_m3036(__this, ((int32_t)((int32_t)L_8+(int32_t)1)), /*hidden argument*/NULL);
		PersistentStorage_t624 * L_9 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_10 = GamePhaseState_get_instancesFinishedEver_m3035(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		PersistentStorage_SetIntValue_m3346(L_9, (String_t*) &_stringLiteral1055, L_10, /*hidden argument*/NULL);
	}

IL_0067:
	{
		int32_t L_11 = ___newPhase;
		if ((!(((uint32_t)L_11) == ((uint32_t)6))))
		{
			goto IL_007b;
		}
	}
	{
		Object_t * L_12 = GamePhaseState_SetupPendingPhase_m3044(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3864(__this, L_12, /*hidden argument*/NULL);
	}

IL_007b:
	{
		GamePhaseChangedEventHandler_t563 * L_13 = (__this->___GamePhaseChanged_7);
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		GamePhaseChangedEventHandler_t563 * L_14 = (__this->___GamePhaseChanged_7);
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
extern "C" void GameUI__ctor_m3049 (GameUI_t544 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::SetUIActive(System.Boolean)
extern "C" void GameUI_SetUIActive_m3050 (GameUI_t544 * __this, bool ___uiActive, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		bool L_1 = ___uiActive;
		NullCheck(L_0);
		GameObject_SetActive_m4101(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::ConfirmLayoutComplete()
extern "C" void GameUI_ConfirmLayoutComplete_m3051 (GameUI_t544 * __this, const MethodInfo* method)
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
extern "C" void U3CConfirmCompleteU3Ec__Iterator15__ctor_m3052 (U3CConfirmCompleteU3Ec__Iterator15_t569 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3053 (U3CConfirmCompleteU3Ec__Iterator15_t569 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m3054 (U3CConfirmCompleteU3Ec__Iterator15_t569 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean GameUIController/<ConfirmComplete>c__Iterator15::MoveNext()
extern TypeInfo* WaitForSeconds_t799_il2cpp_TypeInfo_var;
extern "C" bool U3CConfirmCompleteU3Ec__Iterator15_MoveNext_m3055 (U3CConfirmCompleteU3Ec__Iterator15_t569 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		WaitForSeconds_t799 * L_2 = (WaitForSeconds_t799 *)il2cpp_codegen_object_new (WaitForSeconds_t799_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4284(L_2, (0.0f), /*hidden argument*/NULL);
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
		GameUIController_t568 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		GameUIU5BU5D_t566* L_4 = (L_3->___gameUIs_6);
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_4, L_6)));
		VirtActionInvoker0::Invoke(5 /* System.Void GameUI::ConfirmLayoutComplete() */, (*(GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_8 = (__this->___U3CiU3E__0_0);
		GameUIController_t568 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		GameUIU5BU5D_t566* L_10 = (L_9->___gameUIs_6);
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
extern "C" void U3CConfirmCompleteU3Ec__Iterator15_Dispose_m3056 (U3CConfirmCompleteU3Ec__Iterator15_t569 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void GameUIController/<ConfirmComplete>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CConfirmCompleteU3Ec__Iterator15_Reset_m3057 (U3CConfirmCompleteU3Ec__Iterator15_t569 * __this, const MethodInfo* method)
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
struct GameUI_t544;
// Declaration !!0 UnityEngine.GameObject::GetComponent<GameUI>()
// !!0 UnityEngine.GameObject::GetComponent<GameUI>()
#define GameObject_GetComponent_TisGameUI_t544_m4358(__this, method) (( GameUI_t544 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void GameUIController::.ctor()
extern "C" void GameUIController__ctor_m3058 (GameUIController_t568 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameUIController GameUIController::get_instance()
extern TypeInfo* GameUIController_t568_il2cpp_TypeInfo_var;
extern "C" GameUIController_t568 * GameUIController_get_instance_m3059 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t568 * L_0 = ((GameUIController_t568_StaticFields*)GameUIController_t568_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GameUIController::set_instance(GameUIController)
extern TypeInfo* GameUIController_t568_il2cpp_TypeInfo_var;
extern "C" void GameUIController_set_instance_m3060 (Object_t * __this /* static, unused */, GameUIController_t568 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t568 * L_0 = ___value;
		((GameUIController_t568_StaticFields*)GameUIController_t568_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void GameUIController::Awake()
extern TypeInfo* GameUIU5BU5D_t566_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameUI_t544_m4358_MethodInfo_var;
extern "C" void GameUIController_Awake_m3061 (GameUIController_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIU5BU5D_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		GameObject_GetComponent_TisGameUI_t544_m4358_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_set_instance_m3060(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___gameUIs_6 = ((GameUIU5BU5D_t566*)SZArrayNew(GameUIU5BU5D_t566_il2cpp_TypeInfo_var, 4));
		GameUIU5BU5D_t566* L_0 = (__this->___gameUIs_6);
		GameObject_t352 * L_1 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_1);
		GameUI_t544 * L_2 = GameObject_GetComponent_TisGameUI_t544_m4358(L_1, /*hidden argument*/GameObject_GetComponent_TisGameUI_t544_m4358_MethodInfo_var);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_0, 0)) = (GameUI_t544 *)L_2;
		GameUIU5BU5D_t566* L_3 = (__this->___gameUIs_6);
		GameObject_t352 * L_4 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_4);
		GameUI_t544 * L_5 = GameObject_GetComponent_TisGameUI_t544_m4358(L_4, /*hidden argument*/GameObject_GetComponent_TisGameUI_t544_m4358_MethodInfo_var);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_3, 1)) = (GameUI_t544 *)L_5;
		GameUIU5BU5D_t566* L_6 = (__this->___gameUIs_6);
		GameObject_t352 * L_7 = (__this->___gameOverUIGameObject_4);
		NullCheck(L_7);
		GameUI_t544 * L_8 = GameObject_GetComponent_TisGameUI_t544_m4358(L_7, /*hidden argument*/GameObject_GetComponent_TisGameUI_t544_m4358_MethodInfo_var);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_6, 2)) = (GameUI_t544 *)L_8;
		GameUIU5BU5D_t566* L_9 = (__this->___gameUIs_6);
		GameObject_t352 * L_10 = (__this->___realAngusUIGameObject_5);
		NullCheck(L_10);
		GameUI_t544 * L_11 = GameObject_GetComponent_TisGameUI_t544_m4358(L_10, /*hidden argument*/GameObject_GetComponent_TisGameUI_t544_m4358_MethodInfo_var);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_11);
		*((GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_9, 3)) = (GameUI_t544 *)L_11;
		return;
	}
}
// System.Void GameUIController::Start()
extern "C" void GameUIController_Start_m3062 (GameUIController_t568 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameUIU5BU5D_t566* L_0 = (__this->___gameUIs_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_0, L_2)));
		GameObject_t352 * L_3 = Component_get_gameObject_m3901((*(GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m4101(L_3, 0, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		GameUIU5BU5D_t566* L_6 = (__this->___gameUIs_6);
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		GameUIController_RegisterForEvents_m3065(__this, /*hidden argument*/NULL);
		GameUIController_OnGamePhaseChanged_m3067(__this, /*hidden argument*/NULL);
		Object_t * L_7 = GameUIController_ConfirmComplete_m3063(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3864(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GameUIController::ConfirmComplete()
extern TypeInfo* U3CConfirmCompleteU3Ec__Iterator15_t569_il2cpp_TypeInfo_var;
extern "C" Object_t * GameUIController_ConfirmComplete_m3063 (GameUIController_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CConfirmCompleteU3Ec__Iterator15_t569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(518);
		s_Il2CppMethodIntialized = true;
	}
	U3CConfirmCompleteU3Ec__Iterator15_t569 * V_0 = {0};
	{
		U3CConfirmCompleteU3Ec__Iterator15_t569 * L_0 = (U3CConfirmCompleteU3Ec__Iterator15_t569 *)il2cpp_codegen_object_new (U3CConfirmCompleteU3Ec__Iterator15_t569_il2cpp_TypeInfo_var);
		U3CConfirmCompleteU3Ec__Iterator15__ctor_m3052(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CConfirmCompleteU3Ec__Iterator15_t569 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CConfirmCompleteU3Ec__Iterator15_t569 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameUIController::OnDestroy()
extern "C" void GameUIController_OnDestroy_m3064 (GameUIController_t568 * __this, const MethodInfo* method)
{
	{
		GameUIController_UnregisterForEvents_m3066(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m3067_MethodInfo_var;
extern "C" void GameUIController_RegisterForEvents_m3065 (GameUIController_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameUIController_OnGamePhaseChanged_m3067_MethodInfo_var = il2cpp_codegen_method_info_from_index(508);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m3067_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m3067_MethodInfo_var;
extern "C" void GameUIController_UnregisterForEvents_m3066 (GameUIController_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GameUIController_OnGamePhaseChanged_m3067_MethodInfo_var = il2cpp_codegen_method_info_from_index(508);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m3067_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameUIController::OnGamePhaseChanged()
extern "C" void GameUIController_OnGamePhaseChanged_m3067 (GameUIController_t568 * __this, const MethodInfo* method)
{
	CrossSceneState_t527 * V_0 = {0};
	int32_t V_1 = {0};
	{
		bool L_0 = (__this->___registeredForEvents_7);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GamePhaseState_get_gamePhase_m3029(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_003c;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_00a0;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_00ac;
	}

IL_003c:
	{
		DebugConfig_t533 * L_4 = DebugConfig_get_instance_m2878(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (L_4->___skipWelcome_5);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		GameUIController_SetActiveUI_m3068(__this, 1, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_0057:
	{
		GameUIController_SetActiveUI_m3068(__this, 0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		CrossSceneState_t527 * L_6 = CrossSceneState_get_instance_m2851(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_6;
		CrossSceneState_t527 * L_7 = V_0;
		NullCheck(L_7);
		L_7->___didWelcome_2 = 1;
		goto IL_00ac;
	}

IL_0070:
	{
		GameUIController_SetActiveUI_m3068(__this, 4, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_007c:
	{
		GameUIController_SetActiveUI_m3068(__this, 4, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_0088:
	{
		GameUIController_SetActiveUI_m3068(__this, 1, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_0094:
	{
		GameUIController_SetActiveUI_m3068(__this, 2, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_00a0:
	{
		GameUIController_SetActiveUI_m3068(__this, 3, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_00ac:
	{
		return;
	}
}
// System.Void GameUIController::SetActiveUI(GameUIController/GameUIsType)
extern "C" void GameUIController_SetActiveUI_m3068 (GameUIController_t568 * __this, int32_t ___uiType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	GameUI_t544 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameUIU5BU5D_t566* L_0 = (__this->___gameUIs_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(GameUI_t544 **)(GameUI_t544 **)SZArrayLdElema(L_0, L_2));
		GameUI_t544 * L_3 = V_1;
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
		if ((((int32_t)L_7) < ((int32_t)4)))
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
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator16__ctor_m3069 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CCreatePendingInterstitialAdU3Ec__Iterator16_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3070 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreatePendingInterstitialAdU3Ec__Iterator16_System_Collections_IEnumerator_get_Current_m3071 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::MoveNext()
extern TypeInfo* WaitForSeconds_t799_il2cpp_TypeInfo_var;
extern "C" bool U3CCreatePendingInterstitialAdU3Ec__Iterator16_MoveNext_m3072 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		GoogleAdController_t570 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___waitBeforeAd_4);
		WaitForSeconds_t799 * L_4 = (WaitForSeconds_t799 *)il2cpp_codegen_object_new (WaitForSeconds_t799_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4284(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0063;
	}

IL_0043:
	{
		GoogleAdController_t570 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		L_5->___pendingInterstitialAd_5 = (Object_t *)NULL;
		GoogleAdController_t570 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		GoogleAdController_TryToShowInterstitialAd_m3087(L_6, /*hidden argument*/NULL);
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
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator16_Dispose_m3073 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GoogleAdController/<CreatePendingInterstitialAd>c__Iterator16::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreatePendingInterstitialAdU3Ec__Iterator16_Reset_m3074 (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * __this, const MethodInfo* method)
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
// GoogleMobileAd
#include "AssemblyU2DCSharp_GoogleMobileAdMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"


// System.Void GoogleAdController::.ctor()
extern "C" void GoogleAdController__ctor_m3075 (GoogleAdController_t570 * __this, const MethodInfo* method)
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
extern TypeInfo* GoogleAdController_t570_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsLoaded_m3079_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsOpen_m3080_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsClosed_m3081_MethodInfo_var;
extern "C" void GoogleAdController_Awake_m3076 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAdController_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		GoogleAdController_OnInterstisialsLoaded_m3079_MethodInfo_var = il2cpp_codegen_method_info_from_index(509);
		GoogleAdController_OnInterstisialsOpen_m3080_MethodInfo_var = il2cpp_codegen_method_info_from_index(510);
		GoogleAdController_OnInterstisialsClosed_m3081_MethodInfo_var = il2cpp_codegen_method_info_from_index(511);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GoogleAdController_t570_StaticFields*)GoogleAdController_t570_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
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
		IntPtr_t L_4 = { (void*)GoogleAdController_OnInterstisialsLoaded_m3079_MethodInfo_var };
		Action_t143 * L_5 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3903(L_5, __this, L_4, /*hidden argument*/NULL);
		Delegate_t738 * L_6 = Delegate_Combine_m3904(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = ((Action_t143 *)Castclass(L_6, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_7 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4;
		IntPtr_t L_8 = { (void*)GoogleAdController_OnInterstisialsOpen_m3080_MethodInfo_var };
		Action_t143 * L_9 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3903(L_9, __this, L_8, /*hidden argument*/NULL);
		Delegate_t738 * L_10 = Delegate_Combine_m3904(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4 = ((Action_t143 *)Castclass(L_10, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_11 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5;
		IntPtr_t L_12 = { (void*)GoogleAdController_OnInterstisialsClosed_m3081_MethodInfo_var };
		Action_t143 * L_13 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3903(L_13, __this, L_12, /*hidden argument*/NULL);
		Delegate_t738 * L_14 = Delegate_Combine_m3904(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5 = ((Action_t143 *)Castclass(L_14, Action_t143_il2cpp_TypeInfo_var));
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::Start()
extern "C" void GoogleAdController_Start_m3077 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_RegisterForEvents_m3082(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateBanner_m3089(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnDestroy()
extern "C" void GoogleAdController_OnDestroy_m3078 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UnregisterForEvents_m3083(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsLoaded()
extern "C" void GoogleAdController_OnInterstisialsLoaded_m3079 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	{
		__this->___interstitialAdLoaded_7 = 1;
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsOpen()
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsOpen_m3080 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t669 * L_0 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_SuppressSounds_m3665(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsClosed()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsClosed_m3081 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___interstitialAdLoaded_7 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_LoadInterstitialAd_m745(NULL /*static, unused*/, /*hidden argument*/NULL);
		SoundController_t669 * L_0 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_UnsuppressSounds_m3666(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m3084_MethodInfo_var;
extern "C" void GoogleAdController_RegisterForEvents_m3082 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GoogleAdController_OnGamePhaseChanged_m3084_MethodInfo_var = il2cpp_codegen_method_info_from_index(512);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m3084_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m3084_MethodInfo_var;
extern "C" void GoogleAdController_UnregisterForEvents_m3083 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		GoogleAdController_OnGamePhaseChanged_m3084_MethodInfo_var = il2cpp_codegen_method_info_from_index(512);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m3084_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GoogleAdController::OnGamePhaseChanged()
extern "C" void GoogleAdController_OnGamePhaseChanged_m3084 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UpdateBanner_m3089(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateInterstialAd_m3085(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UpdateInterstialAd()
extern "C" void GoogleAdController_UpdateInterstialAd_m3085 (GoogleAdController_t570 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m4325(__this, L_1, /*hidden argument*/NULL);
		__this->___pendingInterstitialAd_5 = (Object_t *)NULL;
	}

IL_001e:
	{
		GamePhaseState_t564 * L_2 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3029(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_4 = GoogleAdController_CreatePendingInterstitialAd_m3086(__this, /*hidden argument*/NULL);
		__this->___pendingInterstitialAd_5 = L_4;
		Object_t * L_5 = (__this->___pendingInterstitialAd_5);
		MonoBehaviour_StartCoroutine_m3864(__this, L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Collections.IEnumerator GoogleAdController::CreatePendingInterstitialAd()
extern TypeInfo* U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571_il2cpp_TypeInfo_var;
extern "C" Object_t * GoogleAdController_CreatePendingInterstitialAd_m3086 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * V_0 = {0};
	{
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * L_0 = (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 *)il2cpp_codegen_object_new (U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571_il2cpp_TypeInfo_var);
		U3CCreatePendingInterstitialAdU3Ec__Iterator16__ctor_m3069(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CCreatePendingInterstitialAdU3Ec__Iterator16_t571 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GoogleAdController::TryToShowInterstitialAd()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_TryToShowInterstitialAd_m3087 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = GoogleAdController_ShouldShowInterstitialAd_m3088(__this, /*hidden argument*/NULL);
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
extern "C" bool GoogleAdController_ShouldShowInterstitialAd_m3088 (GoogleAdController_t570 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_instancesFinishedThisSession_m3033(L_0, /*hidden argument*/NULL);
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
extern "C" void GoogleAdController_UpdateBanner_m3089 (GoogleAdController_t570 * __this, const MethodInfo* method)
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
		GamePhaseState_t564 * L_2 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3029(L_2, /*hidden argument*/NULL);
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
extern "C" float GoogleAdController_GetBannerHeight_m3090 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3821(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void HeadMovement__ctor_m3091 (HeadMovement_t573 * __this, const MethodInfo* method)
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
extern "C" void HeadMovement_Start_m3092 (HeadMovement_t573 * __this, const MethodInfo* method)
{
	{
		__this->___phase_8 = 0;
		__this->___currentDeg_7 = (0.0f);
		return;
	}
}
// System.Void HeadMovement::Update()
extern "C" void HeadMovement_Update_m3093 (HeadMovement_t573 * __this, const MethodInfo* method)
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
		bool L_4 = HeadMovement_MoveTowards_m3094(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		__this->___phase_8 = 2;
		float L_5 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_9 = L_5;
	}

IL_0049:
	{
		goto IL_0093;
	}

IL_004e:
	{
		float L_6 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		bool L_10 = HeadMovement_MoveTowards_m3094(__this, (0.0f), L_9, /*hidden argument*/NULL);
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
extern "C" bool HeadMovement_MoveTowards_m3094 (HeadMovement_t573 * __this, float ___targetDeg, float ___speedDeg, const MethodInfo* method)
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
		float L_5 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		float L_11 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Transform_t406 * L_16 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_17 = (__this->___currentDeg_7);
		Quaternion_t802  L_18 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localRotation_m4359(L_16, L_18, /*hidden argument*/NULL);
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void HeadMovement::LookTowards(UnityEngine.Vector3)
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern TypeInfo* ConeOfViewController_t524_il2cpp_TypeInfo_var;
extern "C" void HeadMovement_LookTowards_m3095 (HeadMovement_t573 * __this, Vector3_t538  ___location, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		ConeOfViewController_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ((&___location)->___y_2);
		float L_1 = ((&___location)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_2 = atan2f(L_0, L_1);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = ((float)((float)L_3*(float)(57.29578f)));
		ConeOfViewController_t524 * L_4 = ((ConeOfViewController_t524_StaticFields*)ConeOfViewController_t524_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_4);
		float L_5 = ConeOfViewController_get_actualAngleRange_m2836(L_4, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_5/(float)(2.0f)));
		float L_6 = V_1;
		float L_7 = V_2;
		float L_8 = V_2;
		float L_9 = Mathf_Clamp_m4360(NULL /*static, unused*/, L_6, ((-L_7)), L_8, /*hidden argument*/NULL);
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
extern "C" void IOSSharing__ctor_m3096 (IOSSharing_t574 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSSharing::Start()
extern "C" void IOSSharing_Start_m3097 (IOSSharing_t574 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSSharing::Update()
extern "C" void IOSSharing_Update_m3098 (IOSSharing_t574 * __this, const MethodInfo* method)
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
struct Camera_t548;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t548_m4361(__this, method) (( Camera_t548 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void InputHandler::.ctor()
extern "C" void InputHandler__ctor_m3099 (InputHandler_t575 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m3100 (InputHandler_t575 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisTouchDeviceU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m3101 (InputHandler_t575 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisTouchDeviceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// InputHandler InputHandler::get_instance()
extern TypeInfo* InputHandler_t575_il2cpp_TypeInfo_var;
extern "C" InputHandler_t575 * InputHandler_get_instance_m3102 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t575 * L_0 = ((InputHandler_t575_StaticFields*)InputHandler_t575_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void InputHandler::set_instance(InputHandler)
extern TypeInfo* InputHandler_t575_il2cpp_TypeInfo_var;
extern "C" void InputHandler_set_instance_m3103 (Object_t * __this /* static, unused */, InputHandler_t575 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t575 * L_0 = ___value;
		((InputHandler_t575_StaticFields*)InputHandler_t575_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void InputHandler::Awake()
extern "C" void InputHandler_Awake_m3104 (InputHandler_t575 * __this, const MethodInfo* method)
{
	{
		InputHandler_set_instance_m3103(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m3914(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		InputHandler_set_isTouchDevice_m3101(__this, 1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		InputHandler_set_isTouchDevice_m3101(__this, 0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m3105 (InputHandler_t575 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void InputHandler::Update()
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern "C" void InputHandler_Update_m3106 (InputHandler_t575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t538  V_0 = {0};
	Collider2D_t713 * V_1 = {0};
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3042(L_0, /*hidden argument*/NULL);
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
		TimeController_t675 * L_2 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		int32_t L_3 = TimeController_get_timeState_m3681(L_2, /*hidden argument*/NULL);
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
		Vector3__ctor_m4179((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Collider2D_t713 * L_4 = InputHandler_CheckForWorldClickStart_m3107(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		Collider2D_t713 * L_5 = V_1;
		bool L_6 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_5, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		Collider2D_t713 * L_7 = V_1;
		Vector3_t538  L_8 = V_0;
		InputHandler_HandleClickStart_m3108(__this, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern TypeInfo* Physics2D_t810_il2cpp_TypeInfo_var;
extern "C" Collider2D_t713 * InputHandler_CheckForWorldClickStart_m3107 (InputHandler_t575 * __this, Vector3_t538 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t538  V_0 = {0};
	bool V_1 = false;
	Vector3_t538  V_2 = {0};
	Collider2D_t713 * V_3 = {0};
	{
		bool L_0 = InputHandler_GetWorldClickStarted_m3110(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (Collider2D_t713 *)NULL;
	}

IL_0011:
	{
		Camera_t548 * L_2 = (__this->___uxCamera_3);
		Vector3_t538  L_3 = V_0;
		NullCheck(L_2);
		Vector3_t538  L_4 = Camera_ScreenToWorldPoint_m4187(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t538  L_5 = V_2;
		Vector2_t110  L_6 = Vector2_op_Implicit_m4362(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_7 = Layers_UserInteractionsLayerBitmask_m3119(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t810_il2cpp_TypeInfo_var);
		Collider2D_t713 * L_8 = Physics2D_OverlapPoint_m4363(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		bool L_9 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		return (Collider2D_t713 *)NULL;
	}

IL_003a:
	{
		Vector3_t538 * L_10 = ___worldPoint;
		Camera_t548 * L_11 = (__this->___worldCamera_2);
		Vector3_t538  L_12 = V_0;
		NullCheck(L_11);
		Vector3_t538  L_13 = Camera_ScreenToWorldPoint_m4187(L_11, L_12, /*hidden argument*/NULL);
		*L_10 = L_13;
		Vector3_t538 * L_14 = ___worldPoint;
		Vector2_t110  L_15 = Vector2_op_Implicit_m4362(NULL /*static, unused*/, (*(Vector3_t538 *)L_14), /*hidden argument*/NULL);
		int32_t L_16 = Layers_UserInteractionsLayerBitmask_m3119(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t810_il2cpp_TypeInfo_var);
		Collider2D_t713 * L_17 = Physics2D_OverlapPoint_m4363(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Collider2D_t713 * L_18 = V_3;
		bool L_19 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		Collider2D_t713 * L_20 = V_3;
		return L_20;
	}

IL_006f:
	{
		return (Collider2D_t713 *)NULL;
	}
}
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void InputHandler_HandleClickStart_m3108 (InputHandler_t575 * __this, Collider2D_t713 * ___collider, Vector3_t538  ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	{
		Vector3_t538  L_0 = ___worldPoint;
		Vector2_t110  L_1 = Vector2_op_Implicit_m4362(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Collider2D_t713 * L_2 = ___collider;
		NullCheck(L_2);
		String_t* L_3 = Component_get_tag_m4364(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral1056, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PlayerController_t628 * L_5 = PlayerController_get_instance_m3357(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_6 = V_0;
		NullCheck(L_5);
		PlayerController_HandleDragClickStart_m3370(L_5, L_6, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_002c:
	{
		Collider2D_t713 * L_7 = ___collider;
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_m4364(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m456(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral1057, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		PlayerController_t628 * L_10 = PlayerController_get_instance_m3357(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_11 = V_0;
		NullCheck(L_10);
		PlayerController_HandleSlapClickStart_m3371(L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern const MethodInfo* GameObject_GetComponent_TisCamera_t548_m4361_MethodInfo_var;
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m3109 (InputHandler_t575 * __this, Vector3_t538  ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCamera_t548_m4361_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484161);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Rect_t708  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Camera_t548 * L_0 = (__this->___worldCamera_2);
		bool L_1 = Object_op_Equality_m3926(NULL /*static, unused*/, L_0, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Camera_t548 * L_2 = Camera_get_main_m4152(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___worldCamera_2 = L_2;
		GameObject_t352 * L_3 = GameObject_FindGameObjectWithTag_m4365(NULL /*static, unused*/, (String_t*) &_stringLiteral1048, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		Camera_t548 * L_5 = GameObject_GetComponent_TisCamera_t548_m4361(L_4, /*hidden argument*/GameObject_GetComponent_TisCamera_t548_m4361_MethodInfo_var);
		__this->___uxCamera_3 = L_5;
	}

IL_0033:
	{
		Camera_t548 * L_6 = (__this->___worldCamera_2);
		NullCheck(L_6);
		Rect_t708  L_7 = Camera_get_rect_m4296(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_x_m3827((&V_1), /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_width_m3806(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_8*(float)(((float)L_9))));
		float L_10 = Rect_get_x_m3827((&V_1), /*hidden argument*/NULL);
		float L_11 = Rect_get_width_m4182((&V_1), /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_width_m3806(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)((float)L_10+(float)L_11))*(float)(((float)L_12))));
		float L_13 = Rect_get_y_m3826((&V_1), /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_height_m3821(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_13*(float)(((float)L_14))));
		float L_15 = Rect_get_y_m3826((&V_1), /*hidden argument*/NULL);
		float L_16 = Rect_get_height_m4183((&V_1), /*hidden argument*/NULL);
		int32_t L_17 = Screen_get_height_m3821(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern TypeInfo* Input_t721_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickStarted_m3110 (InputHandler_t575 * __this, Vector3_t538 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t720  V_1 = {0};
	Touch_t720  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m3100(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3834(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		Touch_t720  L_2 = Input_GetTouch_m3835(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3836((&V_1), /*hidden argument*/NULL);
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
		Vector3_t538 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		Touch_t720  L_6 = Input_GetTouch_m3835(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m4366((&V_2), /*hidden argument*/NULL);
		Vector3_t538  L_8 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t538 * L_9 = ___clickPosition;
		Vector3_t538  L_10 = Vector3_get_forward_m4367(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonDown_m4155(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t538 * L_12 = ___clickPosition;
		Vector3_t538  L_13 = Input_get_mousePosition_m4153(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Vector3_t538 * L_15 = ___clickPosition;
		bool L_16 = InputHandler_IsPointInWorldCameraScreenSpace_m3109(__this, (*(Vector3_t538 *)L_15), /*hidden argument*/NULL);
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
extern TypeInfo* Input_t721_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickEnded_m3111 (InputHandler_t575 * __this, Vector3_t538 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t720  V_1 = {0};
	Touch_t720  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m3100(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3834(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		Touch_t720  L_2 = Input_GetTouch_m3835(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3836((&V_1), /*hidden argument*/NULL);
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
		Vector3_t538 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		Touch_t720  L_6 = Input_GetTouch_m3835(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m4366((&V_2), /*hidden argument*/NULL);
		Vector3_t538  L_8 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t538 * L_9 = ___clickPosition;
		Vector3_t538  L_10 = Vector3_get_forward_m4367(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonUp_m4368(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t538 * L_12 = ___clickPosition;
		Vector3_t538  L_13 = Input_get_mousePosition_m4153(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_12 = L_13;
	}

IL_0071:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern TypeInfo* Input_t721_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickPosition_m3112 (InputHandler_t575 * __this, Vector3_t538 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t720  V_1 = {0};
	{
		bool L_0 = InputHandler_get_isTouchDevice_m3100(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3834(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Vector3_t538 * L_3 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		Touch_t720  L_4 = Input_GetTouch_m3835(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector2_t110  L_5 = Touch_get_position_m4366((&V_1), /*hidden argument*/NULL);
		Vector3_t538  L_6 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*L_3 = L_6;
		goto IL_0043;
	}

IL_0038:
	{
		Vector3_t538 * L_7 = ___clickPosition;
		Vector3_t538  L_8 = Vector3_get_forward_m4367(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_7 = L_8;
	}

IL_0043:
	{
		goto IL_0070;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButton_m4369(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		Vector3_t538 * L_11 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t721_il2cpp_TypeInfo_var);
		Vector3_t538  L_12 = Input_get_mousePosition_m4153(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_11 = L_12;
		goto IL_0070;
	}

IL_0065:
	{
		Vector3_t538 * L_13 = ___clickPosition;
		Vector3_t538  L_14 = Vector3_get_forward_m4367(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_13 = L_14;
	}

IL_0070:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// KeepItSquare
#include "AssemblyU2DCSharp_KeepItSquare.h"
#ifndef _MSC_VER
#else
#endif
// KeepItSquare
#include "AssemblyU2DCSharp_KeepItSquareMethodDeclarations.h"



// System.Void KeepItSquare::.ctor()
extern "C" void KeepItSquare__ctor_m3113 (KeepItSquare_t576 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KeepItSquare::Start()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var;
extern "C" void KeepItSquare_Start_m3114 (KeepItSquare_t576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t545 * V_0 = {0};
	Rect_t708  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		RectTransform_t545 * L_0 = Component_GetComponent_TisRectTransform_t545_m4349(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t545_m4349_MethodInfo_var);
		V_0 = L_0;
		RectTransform_t545 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		RectTransform_t545 * L_3 = V_0;
		NullCheck(L_3);
		Rect_t708  L_4 = RectTransform_get_rect_m4321(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Rect_get_height_m4183((&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_width_m4182((&V_1), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = V_2;
		float L_8 = V_3;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_004d;
		}
	}
	{
		RectTransform_t545 * L_9 = V_0;
		float L_10 = V_2;
		float L_11 = V_3;
		Vector2_t110  L_12 = {0};
		Vector2__ctor_m4352(&L_12, ((float)((float)L_10/(float)L_11)), (1.0f), /*hidden argument*/NULL);
		Vector3_t538  L_13 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_m4190(L_9, L_13, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_004d:
	{
		RectTransform_t545 * L_14 = V_0;
		float L_15 = V_3;
		float L_16 = V_2;
		Vector2_t110  L_17 = {0};
		Vector2__ctor_m4352(&L_17, (1.0f), ((float)((float)L_15/(float)L_16)), /*hidden argument*/NULL);
		Vector3_t538  L_18 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_m4190(L_14, L_18, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void KeepItSquare::Update()
extern "C" void KeepItSquare_Update_m3115 (KeepItSquare_t576 * __this, const MethodInfo* method)
{
	{
		return;
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
extern "C" void LaunchCountController__ctor_m3116 (LaunchCountController_t577 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LaunchCountController::Start()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void LaunchCountController_Start_m3117 (LaunchCountController_t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3347(L_0, (String_t*) &_stringLiteral1058, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		PersistentStorage_t624 * L_2 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		PersistentStorage_SetIntValue_m3346(L_2, (String_t*) &_stringLiteral1058, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// Layers
#include "AssemblyU2DCSharp_Layers.h"
#ifndef _MSC_VER
#else
#endif



// System.Void Layers::.ctor()
extern "C" void Layers__ctor_m3118 (Layers_t578 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Layers::UserInteractionsLayerBitmask()
extern "C" int32_t Layers_UserInteractionsLayerBitmask_m3119 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return ((int32_t)8736);
	}
}
// System.Void Layers::Awake()
extern TypeInfo* Physics2D_t810_il2cpp_TypeInfo_var;
extern "C" void Layers_Awake_m3120 (Layers_t578 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t810_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, 8, ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)13), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)14), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)15), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)15), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)13), ((int32_t)14), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)13), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)13), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)14), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)14), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)14), ((int32_t)14), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4370(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
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
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t581_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t582_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t583_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t584_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t585_il2cpp_TypeInfo_var;
extern TypeInfo* Accumulator_t492_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4371_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4372_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4373_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4374_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4375_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4376_MethodInfo_var;
extern "C" void LevelDescription__ctor_m3121 (LevelDescription_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		EnumAccumulator_1_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		EnumAccumulator_1_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		EnumAccumulator_1_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		EnumAccumulator_1_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(532);
		EnumAccumulator_1_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		Accumulator_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(534);
		List_1__ctor_m4371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		EnumAccumulator_1__ctor_m4372_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		EnumAccumulator_1__ctor_m4373_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484164);
		EnumAccumulator_1__ctor_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484165);
		EnumAccumulator_1__ctor_m4375_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		EnumAccumulator_1__ctor_m4376_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484167);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___specialText_0 = L_0;
		List_1_t580 * L_1 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m4371(L_1, /*hidden argument*/List_1__ctor_m4371_MethodInfo_var);
		__this->___explicitMouseDescs_1 = L_1;
		__this->___sprite_2 = (Sprite_t512 *)NULL;
		__this->___previousLevelClearedAchievementID_11 = (String_t*)NULL;
		EnumAccumulator_1_t581 * L_2 = (EnumAccumulator_1_t581 *)il2cpp_codegen_object_new (EnumAccumulator_1_t581_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4372(L_2, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4372_MethodInfo_var);
		__this->___mouseHolesAccumulator_5 = L_2;
		EnumAccumulator_1_t582 * L_3 = (EnumAccumulator_1_t582 *)il2cpp_codegen_object_new (EnumAccumulator_1_t582_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4373(L_3, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4373_MethodInfo_var);
		__this->___boostsAccumulator_6 = L_3;
		EnumAccumulator_1_t583 * L_4 = (EnumAccumulator_1_t583 *)il2cpp_codegen_object_new (EnumAccumulator_1_t583_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4374(L_4, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4374_MethodInfo_var);
		__this->___wigglesAccumulator_7 = L_4;
		EnumAccumulator_1_t584 * L_5 = (EnumAccumulator_1_t584 *)il2cpp_codegen_object_new (EnumAccumulator_1_t584_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4375(L_5, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4375_MethodInfo_var);
		__this->___mouseTypesAccumulator_8 = L_5;
		EnumAccumulator_1_t585 * L_6 = (EnumAccumulator_1_t585 *)il2cpp_codegen_object_new (EnumAccumulator_1_t585_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4376(L_6, 3, /*hidden argument*/EnumAccumulator_1__ctor_m4376_MethodInfo_var);
		__this->___waveTypesAccumulator_9 = L_6;
		Accumulator_t492 * L_7 = (Accumulator_t492 *)il2cpp_codegen_object_new (Accumulator_t492_il2cpp_TypeInfo_var);
		Accumulator__ctor_m2712(L_7, /*hidden argument*/NULL);
		__this->___realAngusAccumulator_12 = L_7;
		return;
	}
}
// System.Void LevelDescription::PropagateAccumulators(LevelDescription)
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4377_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4378_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4379_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4380_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4381_MethodInfo_var;
extern "C" void LevelDescription_PropagateAccumulators_m3122 (LevelDescription_t586 * __this, LevelDescription_t586 * ___previousLd, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_DeriveFrom_m4377_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484168);
		EnumAccumulator_1_DeriveFrom_m4378_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484169);
		EnumAccumulator_1_DeriveFrom_m4379_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484170);
		EnumAccumulator_1_DeriveFrom_m4380_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484171);
		EnumAccumulator_1_DeriveFrom_m4381_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484172);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnumAccumulator_1_t582 * L_0 = (__this->___boostsAccumulator_6);
		LevelDescription_t586 * L_1 = ___previousLd;
		NullCheck(L_1);
		EnumAccumulator_1_t582 * L_2 = (L_1->___boostsAccumulator_6);
		NullCheck(L_0);
		EnumAccumulator_1_DeriveFrom_m4377(L_0, L_2, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4377_MethodInfo_var);
		EnumAccumulator_1_t581 * L_3 = (__this->___mouseHolesAccumulator_5);
		LevelDescription_t586 * L_4 = ___previousLd;
		NullCheck(L_4);
		EnumAccumulator_1_t581 * L_5 = (L_4->___mouseHolesAccumulator_5);
		NullCheck(L_3);
		EnumAccumulator_1_DeriveFrom_m4378(L_3, L_5, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4378_MethodInfo_var);
		EnumAccumulator_1_t583 * L_6 = (__this->___wigglesAccumulator_7);
		LevelDescription_t586 * L_7 = ___previousLd;
		NullCheck(L_7);
		EnumAccumulator_1_t583 * L_8 = (L_7->___wigglesAccumulator_7);
		NullCheck(L_6);
		EnumAccumulator_1_DeriveFrom_m4379(L_6, L_8, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4379_MethodInfo_var);
		EnumAccumulator_1_t584 * L_9 = (__this->___mouseTypesAccumulator_8);
		LevelDescription_t586 * L_10 = ___previousLd;
		NullCheck(L_10);
		EnumAccumulator_1_t584 * L_11 = (L_10->___mouseTypesAccumulator_8);
		NullCheck(L_9);
		EnumAccumulator_1_DeriveFrom_m4380(L_9, L_11, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4380_MethodInfo_var);
		EnumAccumulator_1_t585 * L_12 = (__this->___waveTypesAccumulator_9);
		LevelDescription_t586 * L_13 = ___previousLd;
		NullCheck(L_13);
		EnumAccumulator_1_t585 * L_14 = (L_13->___waveTypesAccumulator_9);
		NullCheck(L_12);
		EnumAccumulator_1_DeriveFrom_m4381(L_12, L_14, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4381_MethodInfo_var);
		Accumulator_t492 * L_15 = (__this->___realAngusAccumulator_12);
		LevelDescription_t586 * L_16 = ___previousLd;
		NullCheck(L_16);
		Accumulator_t492 * L_17 = (L_16->___realAngusAccumulator_12);
		NullCheck(L_15);
		Accumulator_DeriveFrom_m2721(L_15, L_17, /*hidden argument*/NULL);
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
extern "C" void LevelConfig__ctor_m3123 (LevelConfig_t592 * __this, const MethodInfo* method)
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
extern TypeInfo* LevelConfig_t592_il2cpp_TypeInfo_var;
extern "C" LevelConfig_t592 * LevelConfig_get_instance_m3124 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t592 * L_0 = ((LevelConfig_t592_StaticFields*)LevelConfig_t592_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void LevelConfig::set_instance(LevelConfig)
extern TypeInfo* LevelConfig_t592_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_set_instance_m3125 (Object_t * __this /* static, unused */, LevelConfig_t592 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t592 * L_0 = ___value;
		((LevelConfig_t592_StaticFields*)LevelConfig_t592_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Void LevelConfig::Awake()
extern TypeInfo* Dictionary_2_t591_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4382_MethodInfo_var;
extern "C" void LevelConfig_Awake_m3126 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		Dictionary_2__ctor_m4382_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484173);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_set_instance_m3125(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		Dictionary_2_t591 * L_0 = (Dictionary_2_t591 *)il2cpp_codegen_object_new (Dictionary_2_t591_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4382(L_0, /*hidden argument*/Dictionary_2__ctor_m4382_MethodInfo_var);
		__this->___levelDescMap_21 = L_0;
		return;
	}
}
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m3127 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	{
		LevelConfig_LoadSprites_m3128(__this, /*hidden argument*/NULL);
		LevelConfig_MakeQuasiRandomGenerators_m3147(__this, /*hidden argument*/NULL);
		LevelConfig_GeneratePresetLevels_m3135(__this, /*hidden argument*/NULL);
		LevelConfig_GenerateLevelLockInfo_m3129(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::LoadSprites()
extern const MethodInfo* Resources_Load_TisSprite_t512_m4326_MethodInfo_var;
extern "C" void LevelConfig_LoadSprites_m3128 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t512_m4326_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	{
		Sprite_t512 * L_0 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, (String_t*) &_stringLiteral1059, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___newMouseTrapSprite_23 = L_0;
		Sprite_t512 * L_1 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, (String_t*) &_stringLiteral1060, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___angusIntroSprite_24 = L_1;
		return;
	}
}
// System.Void LevelConfig::GenerateLevelLockInfo()
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_GenerateLevelLockInfo_m3129 (LevelConfig_t592 * __this, const MethodInfo* method)
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
		int32_t L_1 = LevelConfig_GetLevelLockInfoForBoost_m3130(__this, L_0, /*hidden argument*/NULL);
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
extern "C" int32_t LevelConfig_GetLevelLockInfoForBoost_m3130 (LevelConfig_t592 * __this, int32_t ___bt, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LevelDescription_t586 * V_2 = {0};
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
		LevelDescription_t586 * L_3 = LevelConfig_GetLevelDescription_m3134(__this, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		LevelDescription_t586 * L_4 = V_2;
		NullCheck(L_4);
		EnumAccumulator_1_t582 * L_5 = (L_4->___boostsAccumulator_6);
		NullCheck(L_5);
		AccumulatorU5BU5D_t807* L_6 = (L_5->___accumulators_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(Accumulator_t492 **)(Accumulator_t492 **)SZArrayLdElema(L_6, L_8)));
		int32_t L_9 = Accumulator_get_newCount_m2713((*(Accumulator_t492 **)(Accumulator_t492 **)SZArrayLdElema(L_6, L_8)), /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_002a:
	{
		goto IL_0004;
	}
}
// System.Int32 LevelConfig::GetLevelLock(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLock_m3131 (LevelConfig_t592 * __this, int32_t ___bType, const MethodInfo* method)
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
extern TypeInfo* ExplicitMouseDesc_t539_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_AddExplicitMouseDesc_m3132 (LevelConfig_t592 * __this, List_1_t580 ** ___retVal, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExplicitMouseDesc_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	ExplicitMouseDesc_t539 * V_0 = {0};
	{
		float L_0 = ___delayToNextMouse;
		bool L_1 = ___isClockwise;
		int32_t L_2 = ___location;
		int32_t L_3 = ___mType;
		int32_t L_4 = ___track;
		int32_t L_5 = ___wType;
		ExplicitMouseDesc_t539 * L_6 = (ExplicitMouseDesc_t539 *)il2cpp_codegen_object_new (ExplicitMouseDesc_t539_il2cpp_TypeInfo_var);
		ExplicitMouseDesc__ctor_m2908(L_6, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t580 ** L_7 = ___retVal;
		ExplicitMouseDesc_t539 * L_8 = V_0;
		NullCheck((*((List_1_t580 **)L_7)));
		VirtActionInvoker1< ExplicitMouseDesc_t539 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(!0) */, (*((List_1_t580 **)L_7)), L_8);
		return;
	}
}
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t586 * LevelConfig_GetCurrentLevelDescription_m3133 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GameLevelState_t560 * L_0 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m3003(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		LevelDescription_t586 * L_3 = LevelConfig_GetLevelDescription_m3134(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t586 * LevelConfig_GetLevelDescription_m3134 (LevelConfig_t592 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	LevelDescription_t586 * V_0 = {0};
	{
		Dictionary_2_t591 * L_0 = (__this->___levelDescMap_21);
		int32_t L_1 = ___gameLevel;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t591 * L_3 = (__this->___levelDescMap_21);
		int32_t L_4 = ___gameLevel;
		NullCheck(L_3);
		LevelDescription_t586 * L_5 = (LevelDescription_t586 *)VirtFuncInvoker1< LevelDescription_t586 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___gameLevel;
		LevelDescription_t586 * L_7 = LevelConfig_GenerateRandomLevelDescription_m3140(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Dictionary_2_t591 * L_8 = (__this->___levelDescMap_21);
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(!0) */, L_8, L_9);
		LevelDescription_t586 * L_10 = V_0;
		int32_t L_11 = ___gameLevel;
		NullCheck(L_10);
		L_10->___gameLevel_10 = L_11;
		Dictionary_2_t591 * L_12 = (__this->___levelDescMap_21);
		int32_t L_13 = ___gameLevel;
		LevelDescription_t586 * L_14 = V_0;
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, LevelDescription_t586 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_12, L_13, L_14);
		LevelDescription_t586 * L_15 = V_0;
		return L_15;
	}
}
// System.Void LevelConfig::GeneratePresetLevels()
extern "C" void LevelConfig_GeneratePresetLevels_m3135 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	LevelDescription_t586 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Dictionary_2_t591 * L_0 = (__this->___levelDescMap_21);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear() */, L_0);
		V_1 = 0;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_1;
		LevelDescription_t586 * L_3 = LevelConfig_MakePresetGameLevelSkeleton_m3139(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t586 * L_4 = V_0;
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
		LevelDescription_t586 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		L_5->___gameLevel_10 = L_6;
		Dictionary_2_t591 * L_7 = (__this->___levelDescMap_21);
		int32_t L_8 = V_1;
		LevelDescription_t586 * L_9 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LevelDescription_t586 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_7, L_8, L_9);
		goto IL_000d;
	}

IL_003d:
	{
		LevelConfig_FillOutPresetGameLevelSkeletons_m3137(__this, /*hidden argument*/NULL);
		LevelConfig_AddPreviousLevelClearedAchievements_m3136(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::AddPreviousLevelClearedAchievements()
extern "C" void LevelConfig_AddPreviousLevelClearedAchievements_m3136 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	LevelDescription_t586 * V_0 = {0};
	{
		LevelDescription_t586 * L_0 = LevelConfig_GetLevelDescription_m3134(__this, 6, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t586 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1061;
		LevelDescription_t586 * L_2 = LevelConfig_GetLevelDescription_m3134(__this, ((int32_t)11), /*hidden argument*/NULL);
		V_0 = L_2;
		LevelDescription_t586 * L_3 = V_0;
		NullCheck(L_3);
		L_3->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1062;
		return;
	}
}
// System.Void LevelConfig::FillOutPresetGameLevelSkeletons()
extern "C" void LevelConfig_FillOutPresetGameLevelSkeletons_m3137 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	LevelDescription_t586 * V_1 = {0};
	LevelDescription_t586 * V_2 = {0};
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t591 * L_1 = (__this->___levelDescMap_21);
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
		Dictionary_2_t591 * L_4 = (__this->___levelDescMap_21);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		LevelDescription_t586 * L_6 = (LevelDescription_t586 *)VirtFuncInvoker1< LevelDescription_t586 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_4, L_5);
		V_1 = L_6;
		V_2 = (LevelDescription_t586 *)NULL;
		Dictionary_2_t591 * L_7 = (__this->___levelDescMap_21);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_7, ((int32_t)((int32_t)L_8-(int32_t)1)));
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t591 * L_10 = (__this->___levelDescMap_21);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		LevelDescription_t586 * L_12 = (LevelDescription_t586 *)VirtFuncInvoker1< LevelDescription_t586 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_10, ((int32_t)((int32_t)L_11-(int32_t)1)));
		V_2 = L_12;
	}

IL_0049:
	{
		LevelDescription_t586 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		LevelDescription_t586 * L_14 = V_1;
		LevelDescription_t586 * L_15 = V_2;
		NullCheck(L_14);
		LevelDescription_PropagateAccumulators_m3122(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0056:
	{
		LevelDescription_t586 * L_16 = V_1;
		NullCheck(L_16);
		List_1_t580 * L_17 = (L_16->___explicitMouseDescs_1);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_17);
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		LevelDescription_t586 * L_19 = V_1;
		LevelDescription_t586 * L_20 = V_1;
		List_1_t580 * L_21 = LevelConfig_GenerateRandomMiceForLevel_m3142(__this, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->___explicitMouseDescs_1 = L_21;
		LevelDescription_t586 * L_22 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m3141(__this, L_22, /*hidden argument*/NULL);
	}

IL_007a:
	{
		LevelDescription_t586 * L_23 = V_1;
		NullCheck(L_23);
		Sprite_t512 * L_24 = (L_23->___sprite_2);
		bool L_25 = Object_op_Equality_m3926(NULL /*static, unused*/, L_24, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0097;
		}
	}
	{
		LevelDescription_t586 * L_26 = V_1;
		Sprite_t512 * L_27 = (__this->___angusIntroSprite_24);
		NullCheck(L_26);
		L_26->___sprite_2 = L_27;
	}

IL_0097:
	{
		goto IL_0002;
	}
}
// System.Void LevelConfig::SetupInitialAccumulators(LevelDescription)
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4383_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4384_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4385_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4386_MethodInfo_var;
extern "C" void LevelConfig_SetupInitialAccumulators_m3138 (LevelConfig_t592 * __this, LevelDescription_t586 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_AddDerived_m4383_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484174);
		EnumAccumulator_1_AddDerived_m4384_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484175);
		EnumAccumulator_1_AddDerived_m4385_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		EnumAccumulator_1_AddDerived_m4386_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelDescription_t586 * L_0 = ___ld;
		NullCheck(L_0);
		EnumAccumulator_1_t581 * L_1 = (L_0->___mouseHolesAccumulator_5);
		int32_t L_2 = TweakableParams_GetInitialTrapsPerHole_m3726(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		EnumAccumulator_1_AddDerived_m4383(L_1, 1, L_2, /*hidden argument*/EnumAccumulator_1_AddDerived_m4383_MethodInfo_var);
		LevelDescription_t586 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t581 * L_4 = (L_3->___mouseHolesAccumulator_5);
		int32_t L_5 = TweakableParams_GetInitialTrapsPerHole_m3726(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		EnumAccumulator_1_AddDerived_m4383(L_4, 3, L_5, /*hidden argument*/EnumAccumulator_1_AddDerived_m4383_MethodInfo_var);
		LevelDescription_t586 * L_6 = ___ld;
		NullCheck(L_6);
		EnumAccumulator_1_t581 * L_7 = (L_6->___mouseHolesAccumulator_5);
		int32_t L_8 = TweakableParams_GetInitialTrapsPerHole_m3726(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		EnumAccumulator_1_AddDerived_m4383(L_7, 0, L_8, /*hidden argument*/EnumAccumulator_1_AddDerived_m4383_MethodInfo_var);
		LevelDescription_t586 * L_9 = ___ld;
		NullCheck(L_9);
		EnumAccumulator_1_t581 * L_10 = (L_9->___mouseHolesAccumulator_5);
		int32_t L_11 = TweakableParams_GetInitialTrapsPerHole_m3726(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		EnumAccumulator_1_AddDerived_m4383(L_10, 2, L_11, /*hidden argument*/EnumAccumulator_1_AddDerived_m4383_MethodInfo_var);
		LevelDescription_t586 * L_12 = ___ld;
		NullCheck(L_12);
		EnumAccumulator_1_t584 * L_13 = (L_12->___mouseTypesAccumulator_8);
		NullCheck(L_13);
		EnumAccumulator_1_AddDerived_m4384(L_13, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4384_MethodInfo_var);
		LevelDescription_t586 * L_14 = ___ld;
		NullCheck(L_14);
		EnumAccumulator_1_t583 * L_15 = (L_14->___wigglesAccumulator_7);
		NullCheck(L_15);
		EnumAccumulator_1_AddDerived_m4385(L_15, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4385_MethodInfo_var);
		LevelDescription_t586 * L_16 = ___ld;
		NullCheck(L_16);
		EnumAccumulator_1_t585 * L_17 = (L_16->___waveTypesAccumulator_9);
		NullCheck(L_17);
		EnumAccumulator_1_AddDerived_m4386(L_17, 0, 3, /*hidden argument*/EnumAccumulator_1_AddDerived_m4386_MethodInfo_var);
		LevelDescription_t586 * L_18 = ___ld;
		NullCheck(L_18);
		EnumAccumulator_1_t585 * L_19 = (L_18->___waveTypesAccumulator_9);
		NullCheck(L_19);
		EnumAccumulator_1_AddDerived_m4386(L_19, 2, 1, /*hidden argument*/EnumAccumulator_1_AddDerived_m4386_MethodInfo_var);
		LevelDescription_t586 * L_20 = ___ld;
		NullCheck(L_20);
		Accumulator_t492 * L_21 = (L_20->___realAngusAccumulator_12);
		NullCheck(L_21);
		Accumulator_AddNew_m2718(L_21, /*hidden argument*/NULL);
		LevelDescription_t586 * L_22 = ___ld;
		NullCheck(L_22);
		Accumulator_t492 * L_23 = (L_22->___realAngusAccumulator_12);
		NullCheck(L_23);
		Accumulator_AddDerived_m2720(L_23, /*hidden argument*/NULL);
		return;
	}
}
// LevelDescription LevelConfig::MakePresetGameLevelSkeleton(System.Int32)
extern TypeInfo* LevelDescription_t586_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern TypeInfo* TipConfig_t513_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4371_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4387_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4388_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4389_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4390_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4391_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4392_MethodInfo_var;
extern "C" LevelDescription_t586 * LevelConfig_MakePresetGameLevelSkeleton_m3139 (LevelConfig_t592 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelDescription_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		TipConfig_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		List_1__ctor_m4371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		EnumAccumulator_1_AddNew_m4387_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484178);
		EnumAccumulator_1_AddNew_m4388_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484179);
		EnumAccumulator_1_AddNew_m4389_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484180);
		EnumAccumulator_1_AddNew_m4390_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484181);
		EnumAccumulator_1_AddNew_m4391_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484182);
		EnumAccumulator_1_AddNew_m4392_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484183);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t586 * V_0 = {0};
	int32_t V_1 = 0;
	{
		LevelDescription_t586 * L_0 = (LevelDescription_t586 *)il2cpp_codegen_object_new (LevelDescription_t586_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m3121(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t586 * L_1 = V_0;
		List_1_t580 * L_2 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m4371(L_2, /*hidden argument*/List_1__ctor_m4371_MethodInfo_var);
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
		LevelDescription_t586 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___specialText_0 = L_7;
		LevelDescription_t586 * L_8 = V_0;
		LevelConfig_SetupInitialAccumulators_m3138(__this, L_8, /*hidden argument*/NULL);
		LevelDescription_t586 * L_9 = V_0;
		NullCheck(L_9);
		List_1_t580 ** L_10 = &(L_9->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_10, (3.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_11 = V_0;
		NullCheck(L_11);
		List_1_t580 ** L_12 = &(L_11->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_12, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_13 = V_0;
		NullCheck(L_13);
		List_1_t580 ** L_14 = &(L_13->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_14, (3.0f), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_15 = V_0;
		NullCheck(L_15);
		List_1_t580 ** L_16 = &(L_15->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_16, (3.0f), 1, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_17 = V_0;
		return L_17;
	}

IL_0089:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ((int32_t)((int32_t)L_18-(int32_t)1));
		V_1 = L_19;
		if (L_19)
		{
			goto IL_014c;
		}
	}
	{
		LevelDescription_t586 * L_20 = V_0;
		NullCheck(L_20);
		L_20->___specialText_0 = (String_t*) &_stringLiteral1063;
		LevelDescription_t586 * L_21 = V_0;
		MouseConfig_t601 * L_22 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_22);
		Sprite_t512 * L_23 = MouseConfig_GetIntroSpriteForMouseType_m3177(L_22, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___sprite_2 = L_23;
		LevelDescription_t586 * L_24 = V_0;
		NullCheck(L_24);
		EnumAccumulator_1_t584 * L_25 = (L_24->___mouseTypesAccumulator_8);
		NullCheck(L_25);
		EnumAccumulator_1_AddNew_m4387(L_25, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4387_MethodInfo_var);
		LevelDescription_t586 * L_26 = V_0;
		NullCheck(L_26);
		Accumulator_t492 * L_27 = (L_26->___realAngusAccumulator_12);
		NullCheck(L_27);
		Accumulator_AddNew_m2718(L_27, /*hidden argument*/NULL);
		LevelDescription_t586 * L_28 = V_0;
		NullCheck(L_28);
		List_1_t580 ** L_29 = &(L_28->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_29, (1.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_30 = V_0;
		NullCheck(L_30);
		List_1_t580 ** L_31 = &(L_30->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_31, (2.1f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_32 = V_0;
		NullCheck(L_32);
		List_1_t580 ** L_33 = &(L_32->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_33, (3.1f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_34 = V_0;
		NullCheck(L_34);
		List_1_t580 ** L_35 = &(L_34->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_35, (1.5f), 0, 2, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_36 = V_0;
		NullCheck(L_36);
		List_1_t580 ** L_37 = &(L_36->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_37, (3.0f), 0, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_38 = V_0;
		NullCheck(L_38);
		List_1_t580 ** L_39 = &(L_38->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_39, (4.0f), 1, 3, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_40 = V_0;
		return L_40;
	}

IL_014c:
	{
		int32_t L_41 = V_1;
		int32_t L_42 = ((int32_t)((int32_t)L_41-(int32_t)1));
		V_1 = L_42;
		if (L_42)
		{
			goto IL_0236;
		}
	}
	{
		LevelDescription_t586 * L_43 = V_0;
		NullCheck(L_43);
		L_43->___specialText_0 = (String_t*) &_stringLiteral1064;
		LevelDescription_t586 * L_44 = V_0;
		Sprite_t512 * L_45 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_44);
		L_44->___sprite_2 = L_45;
		LevelDescription_t586 * L_46 = V_0;
		NullCheck(L_46);
		EnumAccumulator_1_t581 * L_47 = (L_46->___mouseHolesAccumulator_5);
		NullCheck(L_47);
		EnumAccumulator_1_AddNew_m4388(L_47, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_48 = V_0;
		NullCheck(L_48);
		Accumulator_t492 * L_49 = (L_48->___realAngusAccumulator_12);
		NullCheck(L_49);
		Accumulator_AddNew_m2718(L_49, /*hidden argument*/NULL);
		LevelDescription_t586 * L_50 = V_0;
		NullCheck(L_50);
		List_1_t580 ** L_51 = &(L_50->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_51, (2.0f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_52 = V_0;
		NullCheck(L_52);
		List_1_t580 ** L_53 = &(L_52->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_53, (0.1f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_54 = V_0;
		NullCheck(L_54);
		List_1_t580 ** L_55 = &(L_54->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_55, (0.1f), 1, 2, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_56 = V_0;
		NullCheck(L_56);
		List_1_t580 ** L_57 = &(L_56->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_57, (2.0f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_58 = V_0;
		NullCheck(L_58);
		List_1_t580 ** L_59 = &(L_58->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_59, (1.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_60 = V_0;
		NullCheck(L_60);
		List_1_t580 ** L_61 = &(L_60->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_61, (2.3f), 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_62 = V_0;
		NullCheck(L_62);
		List_1_t580 ** L_63 = &(L_62->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_63, (1.5f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_64 = V_0;
		NullCheck(L_64);
		List_1_t580 ** L_65 = &(L_64->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_65, (4.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_66 = V_0;
		return L_66;
	}

IL_0236:
	{
		int32_t L_67 = V_1;
		int32_t L_68 = ((int32_t)((int32_t)L_67-(int32_t)1));
		V_1 = L_68;
		if (L_68)
		{
			goto IL_030e;
		}
	}
	{
		LevelDescription_t586 * L_69 = V_0;
		NullCheck(L_69);
		L_69->___specialText_0 = (String_t*) &_stringLiteral1065;
		LevelDescription_t586 * L_70 = V_0;
		BoostConfig_t496 * L_71 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_71);
		Sprite_t512 * L_72 = BoostConfig_GetIntroImageForType_m2812(L_71, 0, /*hidden argument*/NULL);
		NullCheck(L_70);
		L_70->___sprite_2 = L_72;
		LevelDescription_t586 * L_73 = V_0;
		NullCheck(L_73);
		EnumAccumulator_1_t582 * L_74 = (L_73->___boostsAccumulator_6);
		NullCheck(L_74);
		EnumAccumulator_1_AddNew_m4389(L_74, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4389_MethodInfo_var);
		LevelDescription_t586 * L_75 = V_0;
		TipConfig_t513 * L_76 = (TipConfig_t513 *)il2cpp_codegen_object_new (TipConfig_t513_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3700(L_76, (String_t*) &_stringLiteral1066, (String_t*) &_stringLiteral1067, /*hidden argument*/NULL);
		NullCheck(L_75);
		L_75->___tipConfig_3 = L_76;
		LevelDescription_t586 * L_77 = V_0;
		NullCheck(L_77);
		L_77->___tipPause_4 = (2.0f);
		LevelDescription_t586 * L_78 = V_0;
		NullCheck(L_78);
		List_1_t580 ** L_79 = &(L_78->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_79, (4.0f), 1, 0, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_80 = V_0;
		NullCheck(L_80);
		List_1_t580 ** L_81 = &(L_80->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_81, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_82 = V_0;
		NullCheck(L_82);
		List_1_t580 ** L_83 = &(L_82->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_83, (2.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_84 = V_0;
		NullCheck(L_84);
		List_1_t580 ** L_85 = &(L_84->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_85, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_86 = V_0;
		NullCheck(L_86);
		List_1_t580 ** L_87 = &(L_86->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_87, (3.0f), 0, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_88 = V_0;
		NullCheck(L_88);
		List_1_t580 ** L_89 = &(L_88->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_89, (3.0f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_90 = V_0;
		return L_90;
	}

IL_030e:
	{
		int32_t L_91 = V_1;
		int32_t L_92 = ((int32_t)((int32_t)L_91-(int32_t)1));
		V_1 = L_92;
		if (L_92)
		{
			goto IL_03f8;
		}
	}
	{
		LevelDescription_t586 * L_93 = V_0;
		NullCheck(L_93);
		L_93->___specialText_0 = (String_t*) &_stringLiteral1068;
		LevelDescription_t586 * L_94 = V_0;
		Sprite_t512 * L_95 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_94);
		L_94->___sprite_2 = L_95;
		LevelDescription_t586 * L_96 = V_0;
		NullCheck(L_96);
		EnumAccumulator_1_t581 * L_97 = (L_96->___mouseHolesAccumulator_5);
		NullCheck(L_97);
		EnumAccumulator_1_AddNew_m4388(L_97, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_98 = V_0;
		NullCheck(L_98);
		Accumulator_t492 * L_99 = (L_98->___realAngusAccumulator_12);
		NullCheck(L_99);
		Accumulator_AddNew_m2718(L_99, /*hidden argument*/NULL);
		LevelDescription_t586 * L_100 = V_0;
		NullCheck(L_100);
		List_1_t580 ** L_101 = &(L_100->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_101, (1.0f), 0, 1, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_102 = V_0;
		NullCheck(L_102);
		List_1_t580 ** L_103 = &(L_102->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_103, (2.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_104 = V_0;
		NullCheck(L_104);
		List_1_t580 ** L_105 = &(L_104->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_105, (3.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_106 = V_0;
		NullCheck(L_106);
		List_1_t580 ** L_107 = &(L_106->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_107, (1.0f), 1, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_108 = V_0;
		NullCheck(L_108);
		List_1_t580 ** L_109 = &(L_108->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_109, (2.0f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_110 = V_0;
		NullCheck(L_110);
		List_1_t580 ** L_111 = &(L_110->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_111, (0.1f), 0, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_112 = V_0;
		NullCheck(L_112);
		List_1_t580 ** L_113 = &(L_112->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_113, (2.5f), 1, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_114 = V_0;
		NullCheck(L_114);
		List_1_t580 ** L_115 = &(L_114->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_115, (4.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_116 = V_0;
		return L_116;
	}

IL_03f8:
	{
		int32_t L_117 = V_1;
		int32_t L_118 = ((int32_t)((int32_t)L_117-(int32_t)1));
		V_1 = L_118;
		if (L_118)
		{
			goto IL_0514;
		}
	}
	{
		LevelDescription_t586 * L_119 = V_0;
		NullCheck(L_119);
		L_119->___specialText_0 = (String_t*) &_stringLiteral1069;
		LevelDescription_t586 * L_120 = V_0;
		MouseConfig_t601 * L_121 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_121);
		Sprite_t512 * L_122 = MouseConfig_GetIntroSpriteForMouseType_m3177(L_121, 2, /*hidden argument*/NULL);
		NullCheck(L_120);
		L_120->___sprite_2 = L_122;
		LevelDescription_t586 * L_123 = V_0;
		NullCheck(L_123);
		EnumAccumulator_1_t584 * L_124 = (L_123->___mouseTypesAccumulator_8);
		NullCheck(L_124);
		EnumAccumulator_1_AddNew_m4387(L_124, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4387_MethodInfo_var);
		LevelDescription_t586 * L_125 = V_0;
		NullCheck(L_125);
		EnumAccumulator_1_t584 * L_126 = (L_125->___mouseTypesAccumulator_8);
		NullCheck(L_126);
		EnumAccumulator_1_AddNew_m4387(L_126, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4387_MethodInfo_var);
		LevelDescription_t586 * L_127 = V_0;
		NullCheck(L_127);
		List_1_t580 ** L_128 = &(L_127->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_128, (3.0f), 0, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_129 = V_0;
		NullCheck(L_129);
		List_1_t580 ** L_130 = &(L_129->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_130, (2.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_131 = V_0;
		NullCheck(L_131);
		List_1_t580 ** L_132 = &(L_131->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_132, (2.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_133 = V_0;
		NullCheck(L_133);
		List_1_t580 ** L_134 = &(L_133->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_134, (1.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_135 = V_0;
		NullCheck(L_135);
		List_1_t580 ** L_136 = &(L_135->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_136, (3.0f), 0, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_137 = V_0;
		NullCheck(L_137);
		List_1_t580 ** L_138 = &(L_137->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_138, (2.0f), 1, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_139 = V_0;
		NullCheck(L_139);
		List_1_t580 ** L_140 = &(L_139->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_140, (1.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_141 = V_0;
		NullCheck(L_141);
		List_1_t580 ** L_142 = &(L_141->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_142, (4.0f), 1, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_143 = V_0;
		NullCheck(L_143);
		List_1_t580 ** L_144 = &(L_143->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_144, (2.0f), 0, 2, 2, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_145 = V_0;
		NullCheck(L_145);
		List_1_t580 ** L_146 = &(L_145->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_146, (4.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_147 = V_0;
		return L_147;
	}

IL_0514:
	{
		int32_t L_148 = V_1;
		int32_t L_149 = ((int32_t)((int32_t)L_148-(int32_t)1));
		V_1 = L_149;
		if (L_149)
		{
			goto IL_0603;
		}
	}
	{
		LevelDescription_t586 * L_150 = V_0;
		NullCheck(L_150);
		L_150->___specialText_0 = (String_t*) &_stringLiteral1070;
		LevelDescription_t586 * L_151 = V_0;
		BoostConfig_t496 * L_152 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_152);
		Sprite_t512 * L_153 = BoostConfig_GetIntroImageForType_m2812(L_152, 1, /*hidden argument*/NULL);
		NullCheck(L_151);
		L_151->___sprite_2 = L_153;
		LevelDescription_t586 * L_154 = V_0;
		NullCheck(L_154);
		EnumAccumulator_1_t582 * L_155 = (L_154->___boostsAccumulator_6);
		NullCheck(L_155);
		EnumAccumulator_1_AddNew_m4389(L_155, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4389_MethodInfo_var);
		LevelDescription_t586 * L_156 = V_0;
		NullCheck(L_156);
		Accumulator_t492 * L_157 = (L_156->___realAngusAccumulator_12);
		NullCheck(L_157);
		Accumulator_AddNew_m2718(L_157, /*hidden argument*/NULL);
		LevelDescription_t586 * L_158 = V_0;
		NullCheck(L_158);
		List_1_t580 ** L_159 = &(L_158->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_159, (2.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_160 = V_0;
		NullCheck(L_160);
		List_1_t580 ** L_161 = &(L_160->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_161, (2.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_162 = V_0;
		NullCheck(L_162);
		List_1_t580 ** L_163 = &(L_162->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_163, (1.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_164 = V_0;
		NullCheck(L_164);
		List_1_t580 ** L_165 = &(L_164->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_165, (0.1f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_166 = V_0;
		NullCheck(L_166);
		List_1_t580 ** L_167 = &(L_166->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_167, (3.0f), 0, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_168 = V_0;
		NullCheck(L_168);
		List_1_t580 ** L_169 = &(L_168->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_169, (3.0f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_170 = V_0;
		NullCheck(L_170);
		List_1_t580 ** L_171 = &(L_170->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_171, (0.1f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_172 = V_0;
		NullCheck(L_172);
		List_1_t580 ** L_173 = &(L_172->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_173, (4.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_174 = V_0;
		return L_174;
	}

IL_0603:
	{
		int32_t L_175 = V_1;
		int32_t L_176 = ((int32_t)((int32_t)L_175-(int32_t)1));
		V_1 = L_176;
		if (L_176)
		{
			goto IL_070e;
		}
	}
	{
		LevelDescription_t586 * L_177 = V_0;
		NullCheck(L_177);
		L_177->___specialText_0 = (String_t*) &_stringLiteral1071;
		LevelDescription_t586 * L_178 = V_0;
		Sprite_t512 * L_179 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_178);
		L_178->___sprite_2 = L_179;
		LevelDescription_t586 * L_180 = V_0;
		NullCheck(L_180);
		EnumAccumulator_1_t581 * L_181 = (L_180->___mouseHolesAccumulator_5);
		NullCheck(L_181);
		EnumAccumulator_1_AddNew_m4388(L_181, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_182 = V_0;
		NullCheck(L_182);
		List_1_t580 ** L_183 = &(L_182->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_183, (3.0f), 0, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_184 = V_0;
		NullCheck(L_184);
		List_1_t580 ** L_185 = &(L_184->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_185, (2.0f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_186 = V_0;
		NullCheck(L_186);
		List_1_t580 ** L_187 = &(L_186->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_187, (4.0f), 1, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_188 = V_0;
		NullCheck(L_188);
		List_1_t580 ** L_189 = &(L_188->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_189, (2.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_190 = V_0;
		NullCheck(L_190);
		List_1_t580 ** L_191 = &(L_190->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_191, (1.0f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_192 = V_0;
		NullCheck(L_192);
		List_1_t580 ** L_193 = &(L_192->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_193, (1.0f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_194 = V_0;
		NullCheck(L_194);
		List_1_t580 ** L_195 = &(L_194->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_195, (2.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_196 = V_0;
		NullCheck(L_196);
		List_1_t580 ** L_197 = &(L_196->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_197, (3.0f), 0, 1, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_198 = V_0;
		NullCheck(L_198);
		List_1_t580 ** L_199 = &(L_198->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_199, (2.0f), 0, 2, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_200 = V_0;
		NullCheck(L_200);
		List_1_t580 ** L_201 = &(L_200->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_201, (4.0f), 0, 1, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_202 = V_0;
		return L_202;
	}

IL_070e:
	{
		int32_t L_203 = V_1;
		int32_t L_204 = ((int32_t)((int32_t)L_203-(int32_t)1));
		V_1 = L_204;
		if (L_204)
		{
			goto IL_081e;
		}
	}
	{
		LevelDescription_t586 * L_205 = V_0;
		NullCheck(L_205);
		L_205->___specialText_0 = (String_t*) &_stringLiteral1072;
		LevelDescription_t586 * L_206 = V_0;
		MouseConfig_t601 * L_207 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_207);
		Sprite_t512 * L_208 = MouseConfig_GetIntroSpriteForMouseWiggle_m3178(L_207, 2, /*hidden argument*/NULL);
		NullCheck(L_206);
		L_206->___sprite_2 = L_208;
		LevelDescription_t586 * L_209 = V_0;
		NullCheck(L_209);
		EnumAccumulator_1_t583 * L_210 = (L_209->___wigglesAccumulator_7);
		NullCheck(L_210);
		EnumAccumulator_1_AddNew_m4390(L_210, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4390_MethodInfo_var);
		LevelDescription_t586 * L_211 = V_0;
		NullCheck(L_211);
		List_1_t580 ** L_212 = &(L_211->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_212, (2.0f), 0, 1, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_213 = V_0;
		NullCheck(L_213);
		List_1_t580 ** L_214 = &(L_213->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_214, (2.5f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_215 = V_0;
		NullCheck(L_215);
		List_1_t580 ** L_216 = &(L_215->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_216, (2.0f), 1, 3, 0, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_217 = V_0;
		NullCheck(L_217);
		List_1_t580 ** L_218 = &(L_217->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_218, (3.0f), 0, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_219 = V_0;
		NullCheck(L_219);
		List_1_t580 ** L_220 = &(L_219->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_220, (0.1f), 0, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_221 = V_0;
		NullCheck(L_221);
		List_1_t580 ** L_222 = &(L_221->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_222, (0.5f), 1, 0, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_223 = V_0;
		NullCheck(L_223);
		List_1_t580 ** L_224 = &(L_223->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_224, (2.0f), 0, 2, 2, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_225 = V_0;
		NullCheck(L_225);
		List_1_t580 ** L_226 = &(L_225->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_226, (1.0f), 1, 3, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_227 = V_0;
		NullCheck(L_227);
		List_1_t580 ** L_228 = &(L_227->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_228, (2.0f), 0, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_229 = V_0;
		NullCheck(L_229);
		List_1_t580 ** L_230 = &(L_229->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_230, (0.1f), 1, 0, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_231 = V_0;
		return L_231;
	}

IL_081e:
	{
		int32_t L_232 = V_1;
		int32_t L_233 = ((int32_t)((int32_t)L_232-(int32_t)1));
		V_1 = L_233;
		if (L_233)
		{
			goto IL_08ec;
		}
	}
	{
		LevelDescription_t586 * L_234 = V_0;
		NullCheck(L_234);
		L_234->___specialText_0 = (String_t*) &_stringLiteral1073;
		LevelDescription_t586 * L_235 = V_0;
		BoostConfig_t496 * L_236 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_236);
		Sprite_t512 * L_237 = BoostConfig_GetIntroImageForType_m2812(L_236, 2, /*hidden argument*/NULL);
		NullCheck(L_235);
		L_235->___sprite_2 = L_237;
		LevelDescription_t586 * L_238 = V_0;
		NullCheck(L_238);
		EnumAccumulator_1_t582 * L_239 = (L_238->___boostsAccumulator_6);
		NullCheck(L_239);
		EnumAccumulator_1_AddNew_m4389(L_239, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4389_MethodInfo_var);
		LevelDescription_t586 * L_240 = V_0;
		NullCheck(L_240);
		List_1_t580 ** L_241 = &(L_240->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_241, (0.1f), 0, 0, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_242 = V_0;
		NullCheck(L_242);
		List_1_t580 ** L_243 = &(L_242->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_243, (2.0f), 0, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_244 = V_0;
		NullCheck(L_244);
		List_1_t580 ** L_245 = &(L_244->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_245, (0.5f), 0, 3, 1, 3, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_246 = V_0;
		NullCheck(L_246);
		List_1_t580 ** L_247 = &(L_246->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_247, (2.5f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_248 = V_0;
		NullCheck(L_248);
		List_1_t580 ** L_249 = &(L_248->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_249, (1.8f), 0, 1, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_250 = V_0;
		NullCheck(L_250);
		List_1_t580 ** L_251 = &(L_250->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_251, (1.3f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_252 = V_0;
		NullCheck(L_252);
		List_1_t580 ** L_253 = &(L_252->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_253, (0.4f), 0, 0, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_254 = V_0;
		return L_254;
	}

IL_08ec:
	{
		int32_t L_255 = V_1;
		int32_t L_256 = ((int32_t)((int32_t)L_255-(int32_t)1));
		V_1 = L_256;
		if (L_256)
		{
			goto IL_09f7;
		}
	}
	{
		LevelDescription_t586 * L_257 = V_0;
		NullCheck(L_257);
		L_257->___specialText_0 = (String_t*) &_stringLiteral1074;
		LevelDescription_t586 * L_258 = V_0;
		Sprite_t512 * L_259 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_258);
		L_258->___sprite_2 = L_259;
		LevelDescription_t586 * L_260 = V_0;
		NullCheck(L_260);
		EnumAccumulator_1_t581 * L_261 = (L_260->___mouseHolesAccumulator_5);
		NullCheck(L_261);
		EnumAccumulator_1_AddNew_m4388(L_261, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_262 = V_0;
		NullCheck(L_262);
		List_1_t580 ** L_263 = &(L_262->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_263, (0.4f), 0, 3, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_264 = V_0;
		NullCheck(L_264);
		List_1_t580 ** L_265 = &(L_264->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_265, (0.6f), 0, 0, 3, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_266 = V_0;
		NullCheck(L_266);
		List_1_t580 ** L_267 = &(L_266->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_267, (2.0f), 0, 1, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_268 = V_0;
		NullCheck(L_268);
		List_1_t580 ** L_269 = &(L_268->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_269, (2.2f), 0, 2, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_270 = V_0;
		NullCheck(L_270);
		List_1_t580 ** L_271 = &(L_270->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_271, (2.4f), 0, 3, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_272 = V_0;
		NullCheck(L_272);
		List_1_t580 ** L_273 = &(L_272->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_273, (2.6f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_274 = V_0;
		NullCheck(L_274);
		List_1_t580 ** L_275 = &(L_274->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_275, (3.6f), 0, 1, 1, 3, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_276 = V_0;
		NullCheck(L_276);
		List_1_t580 ** L_277 = &(L_276->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_277, (4.0f), 0, 0, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_278 = V_0;
		NullCheck(L_278);
		List_1_t580 ** L_279 = &(L_278->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_279, (4.8f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_280 = V_0;
		NullCheck(L_280);
		List_1_t580 ** L_281 = &(L_280->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_281, (5.4f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_282 = V_0;
		return L_282;
	}

IL_09f7:
	{
		int32_t L_283 = V_1;
		int32_t L_284 = ((int32_t)((int32_t)L_283-(int32_t)1));
		V_1 = L_284;
		if (L_284)
		{
			goto IL_0b4b;
		}
	}
	{
		LevelDescription_t586 * L_285 = V_0;
		NullCheck(L_285);
		L_285->___specialText_0 = (String_t*) &_stringLiteral1075;
		LevelDescription_t586 * L_286 = V_0;
		MouseConfig_t601 * L_287 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_287);
		Sprite_t512 * L_288 = MouseConfig_GetIntroSpriteForMouseType_m3177(L_287, 3, /*hidden argument*/NULL);
		NullCheck(L_286);
		L_286->___sprite_2 = L_288;
		LevelDescription_t586 * L_289 = V_0;
		NullCheck(L_289);
		EnumAccumulator_1_t584 * L_290 = (L_289->___mouseTypesAccumulator_8);
		NullCheck(L_290);
		EnumAccumulator_1_AddNew_m4387(L_290, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4387_MethodInfo_var);
		LevelDescription_t586 * L_291 = V_0;
		NullCheck(L_291);
		EnumAccumulator_1_t584 * L_292 = (L_291->___mouseTypesAccumulator_8);
		NullCheck(L_292);
		EnumAccumulator_1_AddNew_m4387(L_292, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4387_MethodInfo_var);
		LevelDescription_t586 * L_293 = V_0;
		NullCheck(L_293);
		EnumAccumulator_1_t584 * L_294 = (L_293->___mouseTypesAccumulator_8);
		NullCheck(L_294);
		EnumAccumulator_1_AddNew_m4387(L_294, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4387_MethodInfo_var);
		LevelDescription_t586 * L_295 = V_0;
		NullCheck(L_295);
		List_1_t580 ** L_296 = &(L_295->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_296, (2.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_297 = V_0;
		NullCheck(L_297);
		List_1_t580 ** L_298 = &(L_297->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_298, (2.0f), 0, 3, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_299 = V_0;
		NullCheck(L_299);
		List_1_t580 ** L_300 = &(L_299->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_300, (3.0f), 1, 2, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_301 = V_0;
		NullCheck(L_301);
		List_1_t580 ** L_302 = &(L_301->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_302, (2.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_303 = V_0;
		NullCheck(L_303);
		List_1_t580 ** L_304 = &(L_303->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_304, (1.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_305 = V_0;
		NullCheck(L_305);
		List_1_t580 ** L_306 = &(L_305->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_306, (2.0f), 1, 2, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_307 = V_0;
		NullCheck(L_307);
		List_1_t580 ** L_308 = &(L_307->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_308, (1.0f), 1, 1, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_309 = V_0;
		NullCheck(L_309);
		List_1_t580 ** L_310 = &(L_309->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_310, (2.0f), 0, 0, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_311 = V_0;
		NullCheck(L_311);
		List_1_t580 ** L_312 = &(L_311->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_312, (1.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_313 = V_0;
		NullCheck(L_313);
		List_1_t580 ** L_314 = &(L_313->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_314, (2.0f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_315 = V_0;
		NullCheck(L_315);
		List_1_t580 ** L_316 = &(L_315->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_316, (1.0f), 0, 2, 3, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_317 = V_0;
		NullCheck(L_317);
		List_1_t580 ** L_318 = &(L_317->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_318, (2.0f), 1, 1, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_319 = V_0;
		return L_319;
	}

IL_0b4b:
	{
		int32_t L_320 = V_1;
		int32_t L_321 = ((int32_t)((int32_t)L_320-(int32_t)1));
		V_1 = L_321;
		if (L_321)
		{
			goto IL_0b7f;
		}
	}
	{
		LevelDescription_t586 * L_322 = V_0;
		NullCheck(L_322);
		L_322->___specialText_0 = (String_t*) &_stringLiteral1076;
		LevelDescription_t586 * L_323 = V_0;
		BoostConfig_t496 * L_324 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_324);
		Sprite_t512 * L_325 = BoostConfig_GetIntroImageForType_m2812(L_324, 3, /*hidden argument*/NULL);
		NullCheck(L_323);
		L_323->___sprite_2 = L_325;
		LevelDescription_t586 * L_326 = V_0;
		NullCheck(L_326);
		EnumAccumulator_1_t582 * L_327 = (L_326->___boostsAccumulator_6);
		NullCheck(L_327);
		EnumAccumulator_1_AddNew_m4389(L_327, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4389_MethodInfo_var);
		LevelDescription_t586 * L_328 = V_0;
		return L_328;
	}

IL_0b7f:
	{
		int32_t L_329 = V_1;
		int32_t L_330 = ((int32_t)((int32_t)L_329-(int32_t)1));
		V_1 = L_330;
		if (L_330)
		{
			goto IL_0bc8;
		}
	}
	{
		LevelDescription_t586 * L_331 = V_0;
		NullCheck(L_331);
		L_331->___specialText_0 = (String_t*) &_stringLiteral1077;
		LevelDescription_t586 * L_332 = V_0;
		Sprite_t512 * L_333 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_332);
		L_332->___sprite_2 = L_333;
		LevelDescription_t586 * L_334 = V_0;
		NullCheck(L_334);
		EnumAccumulator_1_t581 * L_335 = (L_334->___mouseHolesAccumulator_5);
		NullCheck(L_335);
		EnumAccumulator_1_AddNew_m4388(L_335, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_336 = V_0;
		NullCheck(L_336);
		EnumAccumulator_1_t585 * L_337 = (L_336->___waveTypesAccumulator_9);
		NullCheck(L_337);
		EnumAccumulator_1_AddNew_m4391(L_337, 0, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4391_MethodInfo_var);
		LevelDescription_t586 * L_338 = V_0;
		NullCheck(L_338);
		EnumAccumulator_1_t585 * L_339 = (L_338->___waveTypesAccumulator_9);
		NullCheck(L_339);
		EnumAccumulator_1_AddNew_m4391(L_339, 2, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4391_MethodInfo_var);
		LevelDescription_t586 * L_340 = V_0;
		return L_340;
	}

IL_0bc8:
	{
		int32_t L_341 = V_1;
		int32_t L_342 = ((int32_t)((int32_t)L_341-(int32_t)1));
		V_1 = L_342;
		if (L_342)
		{
			goto IL_0d5c;
		}
	}
	{
		LevelDescription_t586 * L_343 = V_0;
		NullCheck(L_343);
		L_343->___specialText_0 = (String_t*) &_stringLiteral1078;
		LevelDescription_t586 * L_344 = V_0;
		MouseConfig_t601 * L_345 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_345);
		Sprite_t512 * L_346 = MouseConfig_GetIntroSpriteForMouseWiggle_m3178(L_345, 1, /*hidden argument*/NULL);
		NullCheck(L_344);
		L_344->___sprite_2 = L_346;
		LevelDescription_t586 * L_347 = V_0;
		NullCheck(L_347);
		EnumAccumulator_1_t583 * L_348 = (L_347->___wigglesAccumulator_7);
		NullCheck(L_348);
		EnumAccumulator_1_AddNew_m4390(L_348, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4390_MethodInfo_var);
		LevelDescription_t586 * L_349 = V_0;
		NullCheck(L_349);
		List_1_t580 ** L_350 = &(L_349->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_350, (2.0f), 0, 2, 0, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_351 = V_0;
		NullCheck(L_351);
		List_1_t580 ** L_352 = &(L_351->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_352, (1.0f), 0, 0, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_353 = V_0;
		NullCheck(L_353);
		List_1_t580 ** L_354 = &(L_353->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_354, (2.0f), 1, 2, 0, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_355 = V_0;
		NullCheck(L_355);
		List_1_t580 ** L_356 = &(L_355->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_356, (3.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_357 = V_0;
		NullCheck(L_357);
		List_1_t580 ** L_358 = &(L_357->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_358, (2.0f), 1, 3, 2, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_359 = V_0;
		NullCheck(L_359);
		List_1_t580 ** L_360 = &(L_359->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_360, (1.0f), 1, 2, 2, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_361 = V_0;
		NullCheck(L_361);
		List_1_t580 ** L_362 = &(L_361->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_362, (0.1f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_363 = V_0;
		NullCheck(L_363);
		List_1_t580 ** L_364 = &(L_363->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_364, (0.1f), 0, 0, 1, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_365 = V_0;
		NullCheck(L_365);
		List_1_t580 ** L_366 = &(L_365->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_366, (1.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_367 = V_0;
		NullCheck(L_367);
		List_1_t580 ** L_368 = &(L_367->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_368, (2.0f), 1, 3, 3, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_369 = V_0;
		NullCheck(L_369);
		List_1_t580 ** L_370 = &(L_369->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_370, (1.0f), 0, 2, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_371 = V_0;
		NullCheck(L_371);
		List_1_t580 ** L_372 = &(L_371->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_372, (0.1f), 1, 0, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_373 = V_0;
		NullCheck(L_373);
		List_1_t580 ** L_374 = &(L_373->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_374, (2.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_375 = V_0;
		NullCheck(L_375);
		List_1_t580 ** L_376 = &(L_375->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_376, (2.0f), 0, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_377 = V_0;
		NullCheck(L_377);
		List_1_t580 ** L_378 = &(L_377->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_378, (2.0f), 0, 2, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_379 = V_0;
		NullCheck(L_379);
		List_1_t580 ** L_380 = &(L_379->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_380, (2.0f), 1, 1, 0, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_381 = V_0;
		return L_381;
	}

IL_0d5c:
	{
		int32_t L_382 = V_1;
		int32_t L_383 = ((int32_t)((int32_t)L_382-(int32_t)1));
		V_1 = L_383;
		if (L_383)
		{
			goto IL_0ea2;
		}
	}
	{
		LevelDescription_t586 * L_384 = V_0;
		NullCheck(L_384);
		L_384->___specialText_0 = (String_t*) &_stringLiteral1079;
		LevelDescription_t586 * L_385 = V_0;
		MouseConfig_t601 * L_386 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_386);
		Sprite_t512 * L_387 = MouseConfig_GetIntroSpriteForMouseType_m3177(L_386, 3, /*hidden argument*/NULL);
		NullCheck(L_385);
		L_385->___sprite_2 = L_387;
		LevelDescription_t586 * L_388 = V_0;
		NullCheck(L_388);
		List_1_t580 ** L_389 = &(L_388->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_389, (1.2f), 1, 1, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_390 = V_0;
		NullCheck(L_390);
		List_1_t580 ** L_391 = &(L_390->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_391, (1.4f), 1, 0, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_392 = V_0;
		NullCheck(L_392);
		List_1_t580 ** L_393 = &(L_392->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_393, (1.0f), 0, 3, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_394 = V_0;
		NullCheck(L_394);
		List_1_t580 ** L_395 = &(L_394->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_395, (1.1f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_396 = V_0;
		NullCheck(L_396);
		List_1_t580 ** L_397 = &(L_396->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_397, (1.5f), 1, 1, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_398 = V_0;
		NullCheck(L_398);
		List_1_t580 ** L_399 = &(L_398->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_399, (1.2f), 0, 2, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_400 = V_0;
		NullCheck(L_400);
		List_1_t580 ** L_401 = &(L_400->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_401, (1.3f), 0, 3, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_402 = V_0;
		NullCheck(L_402);
		List_1_t580 ** L_403 = &(L_402->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_403, (2.0f), 1, 0, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_404 = V_0;
		NullCheck(L_404);
		List_1_t580 ** L_405 = &(L_404->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_405, (0.1f), 0, 3, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_406 = V_0;
		NullCheck(L_406);
		List_1_t580 ** L_407 = &(L_406->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_407, (1.1f), 1, 3, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_408 = V_0;
		NullCheck(L_408);
		List_1_t580 ** L_409 = &(L_408->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_409, (0.1f), 0, 2, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_410 = V_0;
		NullCheck(L_410);
		List_1_t580 ** L_411 = &(L_410->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_411, (1.5f), 1, 1, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_412 = V_0;
		NullCheck(L_412);
		List_1_t580 ** L_413 = &(L_412->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_413, (2.2f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_414 = V_0;
		return L_414;
	}

IL_0ea2:
	{
		int32_t L_415 = V_1;
		int32_t L_416 = ((int32_t)((int32_t)L_415-(int32_t)1));
		V_1 = L_416;
		if (L_416)
		{
			goto IL_0ee9;
		}
	}
	{
		LevelDescription_t586 * L_417 = V_0;
		NullCheck(L_417);
		L_417->___specialText_0 = (String_t*) &_stringLiteral1064;
		LevelDescription_t586 * L_418 = V_0;
		Sprite_t512 * L_419 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_418);
		L_418->___sprite_2 = L_419;
		LevelDescription_t586 * L_420 = V_0;
		NullCheck(L_420);
		EnumAccumulator_1_t581 * L_421 = (L_420->___mouseHolesAccumulator_5);
		NullCheck(L_421);
		EnumAccumulator_1_AddNew_m4388(L_421, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_422 = V_0;
		NullCheck(L_422);
		EnumAccumulator_1_t585 * L_423 = (L_422->___waveTypesAccumulator_9);
		NullCheck(L_423);
		EnumAccumulator_1_AddNew_m4392(L_423, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_424 = V_0;
		NullCheck(L_424);
		EnumAccumulator_1_t585 * L_425 = (L_424->___waveTypesAccumulator_9);
		NullCheck(L_425);
		EnumAccumulator_1_AddNew_m4392(L_425, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_426 = V_0;
		return L_426;
	}

IL_0ee9:
	{
		int32_t L_427 = V_1;
		int32_t L_428 = ((int32_t)((int32_t)L_427-(int32_t)1));
		V_1 = L_428;
		if (L_428)
		{
			goto IL_1025;
		}
	}
	{
		LevelDescription_t586 * L_429 = V_0;
		NullCheck(L_429);
		L_429->___specialText_0 = (String_t*) &_stringLiteral1080;
		LevelDescription_t586 * L_430 = V_0;
		MouseConfig_t601 * L_431 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_431);
		Sprite_t512 * L_432 = MouseConfig_GetIntroSpriteForMouseWiggle_m3178(L_431, 3, /*hidden argument*/NULL);
		NullCheck(L_430);
		L_430->___sprite_2 = L_432;
		LevelDescription_t586 * L_433 = V_0;
		NullCheck(L_433);
		EnumAccumulator_1_t583 * L_434 = (L_433->___wigglesAccumulator_7);
		NullCheck(L_434);
		EnumAccumulator_1_AddNew_m4390(L_434, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4390_MethodInfo_var);
		LevelDescription_t586 * L_435 = V_0;
		NullCheck(L_435);
		List_1_t580 ** L_436 = &(L_435->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_436, (1.3f), 1, 1, 1, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_437 = V_0;
		NullCheck(L_437);
		List_1_t580 ** L_438 = &(L_437->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_438, (0.1f), 0, 2, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_439 = V_0;
		NullCheck(L_439);
		List_1_t580 ** L_440 = &(L_439->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_440, (2.0f), 1, 0, 1, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_441 = V_0;
		NullCheck(L_441);
		List_1_t580 ** L_442 = &(L_441->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_442, (0.1f), 0, 3, 3, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_443 = V_0;
		NullCheck(L_443);
		List_1_t580 ** L_444 = &(L_443->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_444, (1.1f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_445 = V_0;
		NullCheck(L_445);
		List_1_t580 ** L_446 = &(L_445->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_446, (1.4f), 1, 0, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_447 = V_0;
		NullCheck(L_447);
		List_1_t580 ** L_448 = &(L_447->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_448, (1.0f), 1, 3, 0, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_449 = V_0;
		NullCheck(L_449);
		List_1_t580 ** L_450 = &(L_449->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_450, (1.1f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_451 = V_0;
		NullCheck(L_451);
		List_1_t580 ** L_452 = &(L_451->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_452, (1.2f), 1, 1, 3, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_453 = V_0;
		NullCheck(L_453);
		List_1_t580 ** L_454 = &(L_453->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_454, (1.5f), 0, 1, 2, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_455 = V_0;
		NullCheck(L_455);
		List_1_t580 ** L_456 = &(L_455->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_456, (1.2f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t586 * L_457 = V_0;
		NullCheck(L_457);
		List_1_t580 ** L_458 = &(L_457->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3132(__this, L_458, (1.5f), 1, 1, 2, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t586 * L_459 = V_0;
		return L_459;
	}

IL_1025:
	{
		int32_t L_460 = V_1;
		int32_t L_461 = ((int32_t)((int32_t)L_460-(int32_t)1));
		V_1 = L_461;
		if (L_461)
		{
			goto IL_1031;
		}
	}
	{
		LevelDescription_t586 * L_462 = V_0;
		return L_462;
	}

IL_1031:
	{
		int32_t L_463 = V_1;
		int32_t L_464 = ((int32_t)((int32_t)L_463-(int32_t)1));
		V_1 = L_464;
		if (L_464)
		{
			goto IL_1060;
		}
	}
	{
		LevelDescription_t586 * L_465 = V_0;
		NullCheck(L_465);
		L_465->___specialText_0 = (String_t*) &_stringLiteral1068;
		LevelDescription_t586 * L_466 = V_0;
		Sprite_t512 * L_467 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_466);
		L_466->___sprite_2 = L_467;
		LevelDescription_t586 * L_468 = V_0;
		NullCheck(L_468);
		EnumAccumulator_1_t581 * L_469 = (L_468->___mouseHolesAccumulator_5);
		NullCheck(L_469);
		EnumAccumulator_1_AddNew_m4388(L_469, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_470 = V_0;
		return L_470;
	}

IL_1060:
	{
		int32_t L_471 = V_1;
		int32_t L_472 = ((int32_t)((int32_t)L_471-(int32_t)1));
		V_1 = L_472;
		if (L_472)
		{
			goto IL_1090;
		}
	}
	{
		LevelDescription_t586 * L_473 = V_0;
		NullCheck(L_473);
		EnumAccumulator_1_t585 * L_474 = (L_473->___waveTypesAccumulator_9);
		NullCheck(L_474);
		EnumAccumulator_1_AddNew_m4392(L_474, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_475 = V_0;
		NullCheck(L_475);
		EnumAccumulator_1_t585 * L_476 = (L_475->___waveTypesAccumulator_9);
		NullCheck(L_476);
		EnumAccumulator_1_AddNew_m4392(L_476, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_477 = V_0;
		NullCheck(L_477);
		EnumAccumulator_1_t585 * L_478 = (L_477->___waveTypesAccumulator_9);
		NullCheck(L_478);
		EnumAccumulator_1_AddNew_m4392(L_478, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_479 = V_0;
		return L_479;
	}

IL_1090:
	{
		int32_t L_480 = V_1;
		int32_t L_481 = ((int32_t)((int32_t)L_480-(int32_t)1));
		V_1 = L_481;
		if (L_481)
		{
			goto IL_109c;
		}
	}
	{
		LevelDescription_t586 * L_482 = V_0;
		return L_482;
	}

IL_109c:
	{
		int32_t L_483 = V_1;
		int32_t L_484 = ((int32_t)((int32_t)L_483-(int32_t)1));
		V_1 = L_484;
		if (L_484)
		{
			goto IL_10cb;
		}
	}
	{
		LevelDescription_t586 * L_485 = V_0;
		NullCheck(L_485);
		L_485->___specialText_0 = (String_t*) &_stringLiteral1081;
		LevelDescription_t586 * L_486 = V_0;
		Sprite_t512 * L_487 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_486);
		L_486->___sprite_2 = L_487;
		LevelDescription_t586 * L_488 = V_0;
		NullCheck(L_488);
		EnumAccumulator_1_t581 * L_489 = (L_488->___mouseHolesAccumulator_5);
		NullCheck(L_489);
		EnumAccumulator_1_AddNew_m4388(L_489, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_490 = V_0;
		return L_490;
	}

IL_10cb:
	{
		int32_t L_491 = V_1;
		int32_t L_492 = ((int32_t)((int32_t)L_491-(int32_t)1));
		V_1 = L_492;
		if (L_492)
		{
			goto IL_10e3;
		}
	}
	{
		LevelDescription_t586 * L_493 = V_0;
		NullCheck(L_493);
		EnumAccumulator_1_t585 * L_494 = (L_493->___waveTypesAccumulator_9);
		NullCheck(L_494);
		EnumAccumulator_1_AddNew_m4392(L_494, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_495 = V_0;
		return L_495;
	}

IL_10e3:
	{
		int32_t L_496 = V_1;
		int32_t L_497 = ((int32_t)((int32_t)L_496-(int32_t)1));
		V_1 = L_497;
		if (L_497)
		{
			goto IL_10ef;
		}
	}
	{
		LevelDescription_t586 * L_498 = V_0;
		return L_498;
	}

IL_10ef:
	{
		int32_t L_499 = V_1;
		int32_t L_500 = ((int32_t)((int32_t)L_499-(int32_t)1));
		V_1 = L_500;
		if (L_500)
		{
			goto IL_111e;
		}
	}
	{
		LevelDescription_t586 * L_501 = V_0;
		NullCheck(L_501);
		L_501->___specialText_0 = (String_t*) &_stringLiteral1082;
		LevelDescription_t586 * L_502 = V_0;
		Sprite_t512 * L_503 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_502);
		L_502->___sprite_2 = L_503;
		LevelDescription_t586 * L_504 = V_0;
		NullCheck(L_504);
		EnumAccumulator_1_t581 * L_505 = (L_504->___mouseHolesAccumulator_5);
		NullCheck(L_505);
		EnumAccumulator_1_AddNew_m4388(L_505, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_506 = V_0;
		return L_506;
	}

IL_111e:
	{
		int32_t L_507 = V_1;
		int32_t L_508 = ((int32_t)((int32_t)L_507-(int32_t)1));
		V_1 = L_508;
		if (L_508)
		{
			goto IL_114e;
		}
	}
	{
		LevelDescription_t586 * L_509 = V_0;
		NullCheck(L_509);
		EnumAccumulator_1_t585 * L_510 = (L_509->___waveTypesAccumulator_9);
		NullCheck(L_510);
		EnumAccumulator_1_AddNew_m4392(L_510, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_511 = V_0;
		NullCheck(L_511);
		EnumAccumulator_1_t585 * L_512 = (L_511->___waveTypesAccumulator_9);
		NullCheck(L_512);
		EnumAccumulator_1_AddNew_m4392(L_512, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_513 = V_0;
		NullCheck(L_513);
		EnumAccumulator_1_t585 * L_514 = (L_513->___waveTypesAccumulator_9);
		NullCheck(L_514);
		EnumAccumulator_1_AddNew_m4392(L_514, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_515 = V_0;
		return L_515;
	}

IL_114e:
	{
		int32_t L_516 = V_1;
		int32_t L_517 = ((int32_t)((int32_t)L_516-(int32_t)1));
		V_1 = L_517;
		if (L_517)
		{
			goto IL_115a;
		}
	}
	{
		LevelDescription_t586 * L_518 = V_0;
		return L_518;
	}

IL_115a:
	{
		int32_t L_519 = V_1;
		int32_t L_520 = ((int32_t)((int32_t)L_519-(int32_t)1));
		V_1 = L_520;
		if (L_520)
		{
			goto IL_1189;
		}
	}
	{
		LevelDescription_t586 * L_521 = V_0;
		NullCheck(L_521);
		L_521->___specialText_0 = (String_t*) &_stringLiteral1083;
		LevelDescription_t586 * L_522 = V_0;
		Sprite_t512 * L_523 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_522);
		L_522->___sprite_2 = L_523;
		LevelDescription_t586 * L_524 = V_0;
		NullCheck(L_524);
		EnumAccumulator_1_t581 * L_525 = (L_524->___mouseHolesAccumulator_5);
		NullCheck(L_525);
		EnumAccumulator_1_AddNew_m4388(L_525, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_526 = V_0;
		return L_526;
	}

IL_1189:
	{
		int32_t L_527 = V_1;
		int32_t L_528 = ((int32_t)((int32_t)L_527-(int32_t)1));
		V_1 = L_528;
		if (L_528)
		{
			goto IL_11a1;
		}
	}
	{
		LevelDescription_t586 * L_529 = V_0;
		NullCheck(L_529);
		EnumAccumulator_1_t585 * L_530 = (L_529->___waveTypesAccumulator_9);
		NullCheck(L_530);
		EnumAccumulator_1_AddNew_m4392(L_530, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_531 = V_0;
		return L_531;
	}

IL_11a1:
	{
		int32_t L_532 = V_1;
		int32_t L_533 = ((int32_t)((int32_t)L_532-(int32_t)1));
		V_1 = L_533;
		if (L_533)
		{
			goto IL_11ad;
		}
	}
	{
		LevelDescription_t586 * L_534 = V_0;
		return L_534;
	}

IL_11ad:
	{
		int32_t L_535 = V_1;
		int32_t L_536 = ((int32_t)((int32_t)L_535-(int32_t)1));
		V_1 = L_536;
		if (L_536)
		{
			goto IL_11dc;
		}
	}
	{
		LevelDescription_t586 * L_537 = V_0;
		NullCheck(L_537);
		L_537->___specialText_0 = (String_t*) &_stringLiteral1084;
		LevelDescription_t586 * L_538 = V_0;
		Sprite_t512 * L_539 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_538);
		L_538->___sprite_2 = L_539;
		LevelDescription_t586 * L_540 = V_0;
		NullCheck(L_540);
		EnumAccumulator_1_t581 * L_541 = (L_540->___mouseHolesAccumulator_5);
		NullCheck(L_541);
		EnumAccumulator_1_AddNew_m4388(L_541, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_542 = V_0;
		return L_542;
	}

IL_11dc:
	{
		int32_t L_543 = V_1;
		int32_t L_544 = ((int32_t)((int32_t)L_543-(int32_t)1));
		V_1 = L_544;
		if (L_544)
		{
			goto IL_120c;
		}
	}
	{
		LevelDescription_t586 * L_545 = V_0;
		NullCheck(L_545);
		EnumAccumulator_1_t585 * L_546 = (L_545->___waveTypesAccumulator_9);
		NullCheck(L_546);
		EnumAccumulator_1_AddNew_m4392(L_546, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_547 = V_0;
		NullCheck(L_547);
		EnumAccumulator_1_t585 * L_548 = (L_547->___waveTypesAccumulator_9);
		NullCheck(L_548);
		EnumAccumulator_1_AddNew_m4392(L_548, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_549 = V_0;
		NullCheck(L_549);
		EnumAccumulator_1_t585 * L_550 = (L_549->___waveTypesAccumulator_9);
		NullCheck(L_550);
		EnumAccumulator_1_AddNew_m4392(L_550, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4392_MethodInfo_var);
		LevelDescription_t586 * L_551 = V_0;
		return L_551;
	}

IL_120c:
	{
		int32_t L_552 = V_1;
		int32_t L_553 = ((int32_t)((int32_t)L_552-(int32_t)1));
		V_1 = L_553;
		if (L_553)
		{
			goto IL_1218;
		}
	}
	{
		LevelDescription_t586 * L_554 = V_0;
		return L_554;
	}

IL_1218:
	{
		int32_t L_555 = V_1;
		int32_t L_556 = ((int32_t)((int32_t)L_555-(int32_t)1));
		V_1 = L_556;
		if (L_556)
		{
			goto IL_1247;
		}
	}
	{
		LevelDescription_t586 * L_557 = V_0;
		NullCheck(L_557);
		L_557->___specialText_0 = (String_t*) &_stringLiteral1085;
		LevelDescription_t586 * L_558 = V_0;
		Sprite_t512 * L_559 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_558);
		L_558->___sprite_2 = L_559;
		LevelDescription_t586 * L_560 = V_0;
		NullCheck(L_560);
		EnumAccumulator_1_t581 * L_561 = (L_560->___mouseHolesAccumulator_5);
		NullCheck(L_561);
		EnumAccumulator_1_AddNew_m4388(L_561, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4388_MethodInfo_var);
		LevelDescription_t586 * L_562 = V_0;
		return L_562;
	}

IL_1247:
	{
		return (LevelDescription_t586 *)NULL;
	}
}
// LevelDescription LevelConfig::GenerateRandomLevelDescription(System.Int32)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* LevelDescription_t586_il2cpp_TypeInfo_var;
extern "C" LevelDescription_t586 * LevelConfig_GenerateRandomLevelDescription_m3140 (LevelConfig_t592 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		LevelDescription_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t586 * V_0 = {0};
	LevelDescription_t586 * V_1 = {0};
	{
		Dictionary_2_t591 * L_0 = (__this->___levelDescMap_21);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t57 * L_2 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_2, (String_t*) &_stringLiteral1086, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		V_0 = (LevelDescription_t586 *)NULL;
		int32_t L_3 = ___gameLevel;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = ___gameLevel;
		LevelDescription_t586 * L_5 = LevelConfig_GetLevelDescription_m3134(__this, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_003e;
	}

IL_0033:
	{
		Exception_t57 * L_6 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_6, (String_t*) &_stringLiteral1087, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003e:
	{
		LevelDescription_t586 * L_7 = (LevelDescription_t586 *)il2cpp_codegen_object_new (LevelDescription_t586_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m3121(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		LevelDescription_t586 * L_8 = V_1;
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		L_8->___gameLevel_10 = L_9;
		LevelDescription_t586 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		LevelDescription_t586 * L_11 = V_1;
		LevelDescription_t586 * L_12 = V_0;
		NullCheck(L_11);
		LevelDescription_PropagateAccumulators_m3122(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0058:
	{
		LevelDescription_t586 * L_13 = V_1;
		LevelDescription_t586 * L_14 = V_1;
		List_1_t580 * L_15 = LevelConfig_GenerateRandomMiceForLevel_m3142(__this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___explicitMouseDescs_1 = L_15;
		LevelDescription_t586 * L_16 = V_1;
		Sprite_t512 * L_17 = (__this->___angusIntroSprite_24);
		NullCheck(L_16);
		L_16->___sprite_2 = L_17;
		LevelDescription_t586 * L_18 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m3141(__this, L_18, /*hidden argument*/NULL);
		LevelDescription_t586 * L_19 = V_1;
		return L_19;
	}
}
// System.Void LevelConfig::GenerateRandomWigglesForLevel(LevelDescription)
extern TypeInfo* QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4394_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var;
extern "C" void LevelConfig_GenerateRandomWigglesForLevel_m3141 (LevelConfig_t592 * __this, LevelDescription_t586 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		EnumAccumulator_1_GetDistribution_m4394_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484184);
		QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484185);
		QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t811 * V_0 = {0};
	QuasiRandomGenerator_1_t589 * V_1 = {0};
	int32_t V_2 = 0;
	ExplicitMouseDesc_t539 * V_3 = {0};
	int32_t V_4 = {0};
	{
		LevelDescription_t586 * L_0 = ___ld;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___gameLevel_10);
		Random_set_seed_m4393(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LevelDescription_t586 * L_2 = ___ld;
		NullCheck(L_2);
		EnumAccumulator_1_t583 * L_3 = (L_2->___wigglesAccumulator_7);
		NullCheck(L_3);
		List_1_t811 * L_4 = EnumAccumulator_1_GetDistribution_m4394(L_3, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4394_MethodInfo_var);
		V_0 = L_4;
		List_1_t811 * L_5 = V_0;
		QuasiRandomGenerator_1_t589 * L_6 = (QuasiRandomGenerator_1_t589 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4395(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0046;
	}

IL_0025:
	{
		LevelDescription_t586 * L_7 = ___ld;
		NullCheck(L_7);
		List_1_t580 * L_8 = (L_7->___explicitMouseDescs_1);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		ExplicitMouseDesc_t539 * L_10 = (ExplicitMouseDesc_t539 *)VirtFuncInvoker1< ExplicitMouseDesc_t539 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_8, L_9);
		V_3 = L_10;
		QuasiRandomGenerator_1_t589 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4396(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
		V_4 = L_12;
		ExplicitMouseDesc_t539 * L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		ExplicitMouseDesc_AddWiggle_m2917(L_13, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_16 = V_2;
		LevelDescription_t586 * L_17 = ___ld;
		NullCheck(L_17);
		List_1_t580 * L_18 = (L_17->___explicitMouseDescs_1);
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
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4371_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4397_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4398_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m4399_MethodInfo_var;
extern "C" List_1_t580 * LevelConfig_GenerateRandomMiceForLevel_m3142 (LevelConfig_t592 * __this, LevelDescription_t586 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		List_1__ctor_m4371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		EnumAccumulator_1_GetDistribution_m4397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484187);
		QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484185);
		EnumAccumulator_1_GetDistribution_m4398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484188);
		QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		List_1_AddRange_m4399_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484189);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	List_1_t811 * V_1 = {0};
	QuasiRandomGenerator_1_t589 * V_2 = {0};
	List_1_t811 * V_3 = {0};
	QuasiRandomGenerator_1_t589 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = {0};
	{
		List_1_t580 * L_0 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m4371(L_0, /*hidden argument*/List_1__ctor_m4371_MethodInfo_var);
		V_0 = L_0;
		LevelDescription_t586 * L_1 = ___ld;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___gameLevel_10);
		Random_set_seed_m4393(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		LevelDescription_t586 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t585 * L_4 = (L_3->___waveTypesAccumulator_9);
		NullCheck(L_4);
		List_1_t811 * L_5 = EnumAccumulator_1_GetDistribution_m4397(L_4, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4397_MethodInfo_var);
		V_1 = L_5;
		List_1_t811 * L_6 = V_1;
		QuasiRandomGenerator_1_t589 * L_7 = (QuasiRandomGenerator_1_t589 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4395(L_7, L_6, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var);
		V_2 = L_7;
		LevelDescription_t586 * L_8 = ___ld;
		NullCheck(L_8);
		EnumAccumulator_1_t584 * L_9 = (L_8->___mouseTypesAccumulator_8);
		NullCheck(L_9);
		List_1_t811 * L_10 = EnumAccumulator_1_GetDistribution_m4398(L_9, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4398_MethodInfo_var);
		V_3 = L_10;
		List_1_t811 * L_11 = V_3;
		QuasiRandomGenerator_1_t589 * L_12 = (QuasiRandomGenerator_1_t589 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4395(L_12, L_11, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var);
		V_4 = L_12;
		V_5 = 0;
		goto IL_005f;
	}

IL_0040:
	{
		QuasiRandomGenerator_1_t589 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = QuasiRandomGenerator_1_GetNextValue_m4396(L_13, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
		V_6 = L_14;
		List_1_t580 * L_15 = V_0;
		int32_t L_16 = V_6;
		QuasiRandomGenerator_1_t589 * L_17 = V_4;
		LevelDescription_t586 * L_18 = ___ld;
		List_1_t580 * L_19 = LevelConfig_GenerateWaveForLevel_m3143(__this, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_AddRange_m4399(L_15, L_19, /*hidden argument*/List_1_AddRange_m4399_MethodInfo_var);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_5;
		LevelDescription_t586 * L_22 = ___ld;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___gameLevel_10);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)L_23/(int32_t)2)))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_t580 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelDescription/WaveType,QuasiRandomGenerator`1<System.Int32>,LevelDescription)
extern "C" List_1_t580 * LevelConfig_GenerateWaveForLevel_m3143 (LevelConfig_t592 * __this, int32_t ___wt, QuasiRandomGenerator_1_t589 * ___mouseTypeGenerator, LevelDescription_t586 * ___ld, const MethodInfo* method)
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
		QuasiRandomGenerator_1_t589 * L_2 = ___mouseTypeGenerator;
		List_1_t580 * L_3 = LevelConfig_GenerateDistributedWave_m3144(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t589 * L_4 = ___mouseTypeGenerator;
		List_1_t580 * L_5 = LevelConfig_GenerateParadeWave_m3145(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0029:
	{
		QuasiRandomGenerator_1_t589 * L_6 = ___mouseTypeGenerator;
		List_1_t580 * L_7 = LevelConfig_GenerateSpoutWave_m3146(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4371_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4400_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var;
extern "C" List_1_t580 * LevelConfig_GenerateDistributedWave_m3144 (LevelConfig_t592 * __this, QuasiRandomGenerator_1_t589 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		QuasiRandomGenerator_1_GetNextValue_m4400_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484190);
		QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484191);
		QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = {0};
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t580 * L_0 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m4371(L_0, /*hidden argument*/List_1__ctor_m4371_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minDistributedMice_8);
		int32_t L_2 = (__this->___maxDistributedMice_9);
		int32_t L_3 = Random_Range_m3910(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0081;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t590 * L_4 = (__this->___distributedPauseGenerator_20);
		NullCheck(L_4);
		float L_5 = QuasiRandomGenerator_1_GetNextValue_m4400(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4400_MethodInfo_var);
		V_3 = L_5;
		int32_t L_6 = Random_Range_m3910(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_4 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t588 * L_7 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4401(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t589 * L_9 = ___mouseTypeGenerator;
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4396(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t589 * L_11 = (__this->___trackGenerator_19);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4396(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
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
		LevelConfig_AddExplicitMouseDesc_m3132(__this, (&V_0), L_16, L_17, L_18, L_19, L_20, 0, /*hidden argument*/NULL);
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
		List_1_t580 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4371_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_RefreshValues_m4402_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var;
extern "C" List_1_t580 * LevelConfig_GenerateParadeWave_m3145 (LevelConfig_t592 * __this, QuasiRandomGenerator_1_t589 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		QuasiRandomGenerator_1_RefreshValues_m4402_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484192);
		QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484191);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = {0};
	{
		List_1_t580 * L_0 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m4371(L_0, /*hidden argument*/List_1__ctor_m4371_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = Random_Range_m3910(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_1 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t588 * L_2 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_2);
		QuasiRandomGenerator_1_RefreshValues_m4402(L_2, /*hidden argument*/QuasiRandomGenerator_1_RefreshValues_m4402_MethodInfo_var);
		int32_t L_3 = (__this->___minParadeMice_5);
		int32_t L_4 = (__this->___maxParadeMice_6);
		int32_t L_5 = Random_Range_m3910(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_008d;
	}

IL_0037:
	{
		float L_6 = (__this->___paradePause_4);
		V_4 = L_6;
		QuasiRandomGenerator_1_t589 * L_7 = ___mouseTypeGenerator;
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4396(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t589 * L_9 = (__this->___trackGenerator_19);
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4396(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t588 * L_11 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4401(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var);
		V_7 = L_12;
		List_1_t580 * L_13 = V_0;
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
		LevelConfig_AddExplicitMouseDesc_m3132(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
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
		List_1_t580 * L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4371_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var;
extern "C" List_1_t580 * LevelConfig_GenerateSpoutWave_m3146 (LevelConfig_t592 * __this, QuasiRandomGenerator_1_t589 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484191);
		QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484186);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t580 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t580 * L_0 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m4371(L_0, /*hidden argument*/List_1__ctor_m4371_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minSpoutMice_15);
		int32_t L_2 = (__this->___maxSpoutMice_16);
		int32_t L_3 = Random_Range_m3910(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		QuasiRandomGenerator_1_t588 * L_4 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_4);
		int32_t L_5 = QuasiRandomGenerator_1_GetNextValue_m4401(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4401_MethodInfo_var);
		V_2 = L_5;
		int32_t L_6 = Random_Range_m3910(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		V_4 = 0;
		goto IL_008f;
	}

IL_0039:
	{
		float L_7 = (__this->___minSpoutPause_12);
		float L_8 = (__this->___maxSpoutPause_13);
		float L_9 = Random_Range_m4340(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		QuasiRandomGenerator_1_t589 * L_10 = ___mouseTypeGenerator;
		NullCheck(L_10);
		int32_t L_11 = QuasiRandomGenerator_1_GetNextValue_m4396(L_10, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
		V_6 = L_11;
		QuasiRandomGenerator_1_t589 * L_12 = (__this->___trackGenerator_19);
		NullCheck(L_12);
		int32_t L_13 = QuasiRandomGenerator_1_GetNextValue_m4396(L_12, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4396_MethodInfo_var);
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
		LevelConfig_AddExplicitMouseDesc_m3132(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
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
		List_1_t580 * L_26 = V_0;
		return L_26;
	}
}
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern TypeInfo* List_1_t812_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t588_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t811_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t590_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4403_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4404_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4405_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4406_MethodInfo_var;
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m3147 (LevelConfig_t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(539);
		QuasiRandomGenerator_1_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		List_1_t811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		QuasiRandomGenerator_1_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		List_1__ctor_m4403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484193);
		QuasiRandomGenerator_1__ctor_m4404_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484194);
		List_1__ctor_m4405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484195);
		QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484185);
		QuasiRandomGenerator_1__ctor_m4406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484196);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t812 * V_0 = {0};
	List_1_t811 * V_1 = {0};
	int32_t V_2 = 0;
	{
		List_1_t812 * L_0 = (List_1_t812 *)il2cpp_codegen_object_new (List_1_t812_il2cpp_TypeInfo_var);
		List_1__ctor_m4403(L_0, /*hidden argument*/List_1__ctor_m4403_MethodInfo_var);
		V_0 = L_0;
		List_1_t812 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_1, 1);
		List_1_t812 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_2, 0);
		List_1_t812 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_3, 3);
		List_1_t812 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_4, 2);
		List_1_t812 * L_5 = V_0;
		QuasiRandomGenerator_1_t588 * L_6 = (QuasiRandomGenerator_1_t588 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t588_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4404(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4404_MethodInfo_var);
		__this->___mouseHoleGenerator_18 = L_6;
		QuasiRandomGenerator_1_t588 * L_7 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_7);
		L_7->___refreshTrigger_2 = 1;
		List_1_t811 * L_8 = (List_1_t811 *)il2cpp_codegen_object_new (List_1_t811_il2cpp_TypeInfo_var);
		List_1__ctor_m4405(L_8, /*hidden argument*/List_1__ctor_m4405_MethodInfo_var);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0052;
	}

IL_0047:
	{
		List_1_t811 * L_9 = V_1;
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
		List_1_t811 * L_13 = V_1;
		QuasiRandomGenerator_1_t589 * L_14 = (QuasiRandomGenerator_1_t589 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t589_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4395(L_14, L_13, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4395_MethodInfo_var);
		__this->___trackGenerator_19 = L_14;
		SingleU5BU5D_t587* L_15 = (__this->___distributedPauseDist_10);
		QuasiRandomGenerator_1_t590 * L_16 = (QuasiRandomGenerator_1_t590 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t590_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4406(L_16, L_15, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4406_MethodInfo_var);
		__this->___distributedPauseGenerator_20 = L_16;
		return;
	}
}
// System.Int32 LevelConfig::LevelForRealAngusUnlocks(System.Int32)
extern "C" int32_t LevelConfig_LevelForRealAngusUnlocks_m3148 (LevelConfig_t592 * __this, int32_t ___numUnlocks, const MethodInfo* method)
{
	LevelDescription_t586 * V_0 = {0};
	int32_t V_1 = 0;
	{
		V_1 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_1;
		V_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t591 * L_1 = (__this->___levelDescMap_21);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_1, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = V_1;
		return L_4;
	}

IL_0019:
	{
		Dictionary_2_t591 * L_5 = (__this->___levelDescMap_21);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		LevelDescription_t586 * L_7 = (LevelDescription_t586 *)VirtFuncInvoker1< LevelDescription_t586 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_5, L_6);
		V_0 = L_7;
		LevelDescription_t586 * L_8 = V_0;
		NullCheck(L_8);
		Accumulator_t492 * L_9 = (L_8->___realAngusAccumulator_12);
		NullCheck(L_9);
		int32_t L_10 = Accumulator_get_derivedCount_m2715(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___numUnlocks;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}

IL_0039:
	{
		goto IL_0002;
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
extern "C" void LevelEndTitlesLayout__ctor_m3149 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::Awake()
extern "C" void LevelEndTitlesLayout_Awake_m3150 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_6 = 0;
		__this->___waveDirty_8 = 0;
		return;
	}
}
// System.Void LevelEndTitlesLayout::Start()
extern "C" void LevelEndTitlesLayout_Start_m3151 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_RegisterForEvents_m3154(__this, /*hidden argument*/NULL);
		__this->___started_9 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnEnable()
extern "C" void LevelEndTitlesLayout_OnEnable_m3152 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_8 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnDestroy()
extern "C" void LevelEndTitlesLayout_OnDestroy_m3153 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_UnregisterForEvents_m3155(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m3158_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_RegisterForEvents_m3154 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		LevelEndTitlesLayout_OnGameLevelChanged_m3158_MethodInfo_var = il2cpp_codegen_method_info_from_index(549);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t560 * L_0 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m3158_MethodInfo_var };
		GameLevelChangedEventHandler_t559 * L_2 = (GameLevelChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2996(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_add_GameLevelChanged_m3001(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_6 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m3158_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_UnregisterForEvents_m3155 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		LevelEndTitlesLayout_OnGameLevelChanged_m3158_MethodInfo_var = il2cpp_codegen_method_info_from_index(549);
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
		GameLevelState_t560 * L_1 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m3158_MethodInfo_var };
		GameLevelChangedEventHandler_t559 * L_3 = (GameLevelChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2996(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m3002(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::Update()
extern "C" void LevelEndTitlesLayout_Update_m3156 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___waveDirty_8);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		LevelEndTitlesLayout_SetWaveViews_m3157(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::SetWaveViews()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LevelEndTitlesLayout_SetWaveViews_m3157 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t586 * V_0 = {0};
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
		Text_t502 * L_1 = (__this->___waveTitleText_2);
		GameLevelState_t560 * L_2 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m3003(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral998, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_6);
		LevelConfig_t592 * L_7 = LevelConfig_get_instance_m3124(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		LevelDescription_t586 * L_8 = LevelConfig_GetCurrentLevelDescription_m3133(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Text_t502 * L_9 = (__this->___waveCountText_3);
		LevelDescription_t586 * L_10 = V_0;
		NullCheck(L_10);
		List_1_t580 * L_11 = (L_10->___explicitMouseDescs_1);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_11);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m409(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral1088, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_15);
		Text_t502 * L_16 = (__this->___waveSpecialText_4);
		LevelDescription_t586 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (L_17->___specialText_0);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		LevelDescription_t586 * L_19 = V_0;
		NullCheck(L_19);
		Sprite_t512 * L_20 = (L_19->___sprite_2);
		bool L_21 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_20, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		Image_t503 * L_22 = (__this->___waveSpecialImage_5);
		NullCheck(L_22);
		GameObject_t352 * L_23 = Component_get_gameObject_m3901(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m4101(L_23, 1, /*hidden argument*/NULL);
		Image_t503 * L_24 = (__this->___waveSpecialImage_5);
		LevelDescription_t586 * L_25 = V_0;
		NullCheck(L_25);
		Sprite_t512 * L_26 = (L_25->___sprite_2);
		NullCheck(L_24);
		Image_set_sprite_m4315(L_24, L_26, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00b0:
	{
		Image_t503 * L_27 = (__this->___waveSpecialImage_5);
		NullCheck(L_27);
		GameObject_t352 * L_28 = Component_get_gameObject_m3901(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_SetActive_m4101(L_28, 0, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnGameLevelChanged()
extern "C" void LevelEndTitlesLayout_OnGameLevelChanged_m3158 (LevelEndTitlesLayout_t593 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_8 = 1;
		return;
	}
}
// MoneyDisplay
#include "AssemblyU2DCSharp_MoneyDisplay.h"
#ifndef _MSC_VER
#else
#endif
// MoneyDisplay
#include "AssemblyU2DCSharp_MoneyDisplayMethodDeclarations.h"

// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandler.h"
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandlerMethodDeclarations.h"
struct Component_t775;
struct DistortForEffect_t537;
// Declaration !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
// !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
#define Component_GetComponent_TisDistortForEffect_t537_m4312(__this, method) (( DistortForEffect_t537 * (*) (Component_t775 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4141_gshared)(__this, method)


// System.Void MoneyDisplay::.ctor()
extern "C" void MoneyDisplay__ctor_m3159 (MoneyDisplay_t594 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyDisplay::Awake()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var;
extern "C" void MoneyDisplay_Awake_m3160 (MoneyDisplay_t594 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	{
		DistortForEffect_t537 * L_0 = Component_GetComponent_TisDistortForEffect_t537_m4312(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var);
		__this->___distortForEffect_5 = L_0;
		return;
	}
}
// System.Void MoneyDisplay::Start()
extern TypeInfo* MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyDisplay_DynamicUpdateTreatsText_m3164_MethodInfo_var;
extern "C" void MoneyDisplay_Start_m3161 (MoneyDisplay_t594 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		MoneyDisplay_DynamicUpdateTreatsText_m3164_MethodInfo_var = il2cpp_codegen_method_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t516 * L_0 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_0;
		PlayerStats_t516 * L_1 = (__this->___playerStats_3);
		IntPtr_t L_2 = { (void*)MoneyDisplay_DynamicUpdateTreatsText_m3164_MethodInfo_var };
		MoneyChangedEventHandler_t630 * L_3 = (MoneyChangedEventHandler_t630 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3380(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_add_MoneyChanged_m3391(L_1, L_3, /*hidden argument*/NULL);
		__this->___registerdForEvents_4 = 1;
		MoneyDisplay_SetTreatsText_m3163(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyDisplay::OnDestroy()
extern TypeInfo* MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyDisplay_DynamicUpdateTreatsText_m3164_MethodInfo_var;
extern "C" void MoneyDisplay_OnDestroy_m3162 (MoneyDisplay_t594 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		MoneyDisplay_DynamicUpdateTreatsText_m3164_MethodInfo_var = il2cpp_codegen_method_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_4);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		PlayerStats_t516 * L_1 = (__this->___playerStats_3);
		IntPtr_t L_2 = { (void*)MoneyDisplay_DynamicUpdateTreatsText_m3164_MethodInfo_var };
		MoneyChangedEventHandler_t630 * L_3 = (MoneyChangedEventHandler_t630 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3380(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_MoneyChanged_m3392(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean MoneyDisplay::SetTreatsText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool MoneyDisplay_SetTreatsText_m3163 (MoneyDisplay_t594 * __this, const MethodInfo* method)
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
		PlayerStats_t516 * L_1 = (__this->___playerStats_3);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_get_money_m3397(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Text_t502 * L_7 = (__this->___moneyText_2);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		bool L_9 = String_op_Inequality_m415(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Text_t502 * L_10 = (__this->___moneyText_2);
		String_t* L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		return 1;
	}

IL_003f:
	{
		return 0;
	}
}
// System.Void MoneyDisplay::DynamicUpdateTreatsText()
extern "C" void MoneyDisplay_DynamicUpdateTreatsText_m3164 (MoneyDisplay_t594 * __this, const MethodInfo* method)
{
	{
		bool L_0 = MoneyDisplay_SetTreatsText_m3163(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		DistortForEffect_t537 * L_1 = (__this->___distortForEffect_5);
		NullCheck(L_1);
		DistortForEffect_DistortWithDelay_m2903(L_1, (1.0f), /*hidden argument*/NULL);
	}

IL_001b:
	{
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

struct Object_t717;
struct GameObject_t352;
struct Object_t717;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m4408_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m4408(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m4408_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t352_m4407(__this /* static, unused */, p0, method) (( GameObject_t352 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Object_Instantiate_TisObject_t_m4408_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t352;
struct FlyingAnimation_t549;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
// !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
#define GameObject_GetComponent_TisFlyingAnimation_t549_m4409(__this, method) (( FlyingAnimation_t549 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void MoneyEarningController::.ctor()
extern "C" void MoneyEarningController__ctor_m3165 (MoneyEarningController_t595 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::Start()
extern "C" void MoneyEarningController_Start_m3166 (MoneyEarningController_t595 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_RegisterForEvents_m3168(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::OnDestroy()
extern "C" void MoneyEarningController_OnDestroy_m3167 (MoneyEarningController_t595 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_UnregisterForEvents_m3169(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m3170_MethodInfo_var;
extern "C" void MoneyEarningController_RegisterForEvents_m3168 (MoneyEarningController_t595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MultiKillEventHandler_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		MoneyEarningController_OnMultiKill_m3170_MethodInfo_var = il2cpp_codegen_method_info_from_index(551);
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
		DeadMouseRelay_t532 * L_1 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m3170_MethodInfo_var };
		MultiKillEventHandler_t529 * L_3 = (MultiKillEventHandler_t529 *)il2cpp_codegen_object_new (MultiKillEventHandler_t529_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2859(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MultiKill_m2868(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t529_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m3170_MethodInfo_var;
extern "C" void MoneyEarningController_UnregisterForEvents_m3169 (MoneyEarningController_t595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		MultiKillEventHandler_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		MoneyEarningController_OnMultiKill_m3170_MethodInfo_var = il2cpp_codegen_method_info_from_index(551);
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
		DeadMouseRelay_t532 * L_1 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m3170_MethodInfo_var };
		MultiKillEventHandler_t529 * L_3 = (MultiKillEventHandler_t529 *)il2cpp_codegen_object_new (MultiKillEventHandler_t529_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2859(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MultiKill_m2869(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MoneyEarningController::OnMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void MoneyEarningController_OnMultiKill_m3170 (MoneyEarningController_t595 * __this, int32_t ___numKilled, Vector3_t538  ___pawPosition, const MethodInfo* method)
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
		PlayerStats_t516 * L_3 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PlayerStats_EarnMoney_m3410(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		Vector3_t538  L_6 = ___pawPosition;
		MoneyEarningController_MakeMoneyEffect_m3171(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::MakeMoneyEffect(System.Int32,UnityEngine.Vector3)
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4407_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t549_m4409_MethodInfo_var;
extern "C" void MoneyEarningController_MakeMoneyEffect_m3171 (MoneyEarningController_t595 * __this, int32_t ___moneyEarned, Vector3_t538  ___pawPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t549_m4409_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t549 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___moneyEffectPrototype_2);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4407(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4407_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		FlyingAnimation_t549 * L_3 = GameObject_GetComponent_TisFlyingAnimation_t549_m4409(L_2, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t549_m4409_MethodInfo_var);
		V_1 = L_3;
		FlyingAnimation_t549 * L_4 = V_1;
		Vector3_t538  L_5 = ___pawPosition;
		GameObject_t352 * L_6 = (__this->___moneyDisplay_3);
		NullCheck(L_4);
		FlyingAnimation_Configure_m2951(L_4, L_5, L_6, /*hidden argument*/NULL);
		FlyingAnimation_t549 * L_7 = V_1;
		NullCheck(L_7);
		FlyingAnimation_Run_m2953(L_7, /*hidden argument*/NULL);
		SFXPlayer_t652 * L_8 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		SFXPlayer_Play_m3547(L_8, ((int32_t)9), /*hidden argument*/NULL);
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
extern "C" void MouseConfig__ctor_m3172 (MouseConfig_t601 * __this, const MethodInfo* method)
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
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_Awake_m3173 (MouseConfig_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26 = __this;
		MouseConfig_LoadMouseDescs_m3174(__this, /*hidden argument*/NULL);
		MouseConfig_LoadMouseWiggleDescs_m3175(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::LoadMouseDescs()
extern TypeInfo* MouseTypeDescU5BU5D_t599_il2cpp_TypeInfo_var;
extern TypeInfo* MouseTypeDesc_t610_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseDescs_m3174 (MouseConfig_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseTypeDescU5BU5D_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(544);
		MouseTypeDesc_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseDescs_24 = ((MouseTypeDescU5BU5D_t599*)SZArrayNew(MouseTypeDescU5BU5D_t599_il2cpp_TypeInfo_var, 4));
		MouseTypeDescU5BU5D_t599* L_0 = (__this->___mouseDescs_24);
		SingleU5BU5D_t587* L_1 = (__this->___speeds_6);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		SingleU5BU5D_t587* L_3 = (__this->___scales_7);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		MouseTypeDesc_t610 * L_5 = (MouseTypeDesc_t610 *)il2cpp_codegen_object_new (MouseTypeDesc_t610_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3271(L_5, (String_t*) &_stringLiteral1089, (String_t*) &_stringLiteral1090, (*(float*)(float*)SZArrayLdElema(L_1, L_2)), (*(float*)(float*)SZArrayLdElema(L_3, L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_5);
		*((MouseTypeDesc_t610 **)(MouseTypeDesc_t610 **)SZArrayLdElema(L_0, 0)) = (MouseTypeDesc_t610 *)L_5;
		MouseTypeDescU5BU5D_t599* L_6 = (__this->___mouseDescs_24);
		SingleU5BU5D_t587* L_7 = (__this->___speeds_6);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		SingleU5BU5D_t587* L_9 = (__this->___scales_7);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		int32_t L_10 = 1;
		MouseTypeDesc_t610 * L_11 = (MouseTypeDesc_t610 *)il2cpp_codegen_object_new (MouseTypeDesc_t610_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3271(L_11, (String_t*) &_stringLiteral1091, (String_t*) &_stringLiteral1092, (*(float*)(float*)SZArrayLdElema(L_7, L_8)), (*(float*)(float*)SZArrayLdElema(L_9, L_10)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_11);
		*((MouseTypeDesc_t610 **)(MouseTypeDesc_t610 **)SZArrayLdElema(L_6, 1)) = (MouseTypeDesc_t610 *)L_11;
		MouseTypeDescU5BU5D_t599* L_12 = (__this->___mouseDescs_24);
		SingleU5BU5D_t587* L_13 = (__this->___speeds_6);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		int32_t L_14 = 2;
		SingleU5BU5D_t587* L_15 = (__this->___scales_7);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		MouseTypeDesc_t610 * L_17 = (MouseTypeDesc_t610 *)il2cpp_codegen_object_new (MouseTypeDesc_t610_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3271(L_17, (String_t*) &_stringLiteral1093, (String_t*) &_stringLiteral1094, (*(float*)(float*)SZArrayLdElema(L_13, L_14)), (*(float*)(float*)SZArrayLdElema(L_15, L_16)), /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, L_17);
		*((MouseTypeDesc_t610 **)(MouseTypeDesc_t610 **)SZArrayLdElema(L_12, 2)) = (MouseTypeDesc_t610 *)L_17;
		MouseTypeDescU5BU5D_t599* L_18 = (__this->___mouseDescs_24);
		SingleU5BU5D_t587* L_19 = (__this->___speeds_6);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		SingleU5BU5D_t587* L_21 = (__this->___scales_7);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		int32_t L_22 = 3;
		MouseTypeDesc_t610 * L_23 = (MouseTypeDesc_t610 *)il2cpp_codegen_object_new (MouseTypeDesc_t610_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3271(L_23, (String_t*) &_stringLiteral1095, (String_t*) &_stringLiteral1096, (*(float*)(float*)SZArrayLdElema(L_19, L_20)), (*(float*)(float*)SZArrayLdElema(L_21, L_22)), /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 3);
		ArrayElementTypeCheck (L_18, L_23);
		*((MouseTypeDesc_t610 **)(MouseTypeDesc_t610 **)SZArrayLdElema(L_18, 3)) = (MouseTypeDesc_t610 *)L_23;
		return;
	}
}
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern TypeInfo* MouseWiggleDescU5BU5D_t600_il2cpp_TypeInfo_var;
extern TypeInfo* MouseWiggleDesc_t611_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseWiggleDescs_m3175 (MouseConfig_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseWiggleDescU5BU5D_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		MouseWiggleDesc_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseWiggleDescs_25 = ((MouseWiggleDescU5BU5D_t600*)SZArrayNew(MouseWiggleDescU5BU5D_t600_il2cpp_TypeInfo_var, 4));
		MouseWiggleDescU5BU5D_t600* L_0 = (__this->___mouseWiggleDescs_25);
		float L_1 = (__this->___minBFWiggleMagnitude_12);
		float L_2 = (__this->___maxBFWiggleMagnitude_13);
		int32_t L_3 = (__this->___minBFWiggleCycles_14);
		int32_t L_4 = (__this->___maxBFWiggleCycles_15);
		MouseWiggleDesc_t611 * L_5 = (MouseWiggleDesc_t611 *)il2cpp_codegen_object_new (MouseWiggleDesc_t611_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3272(L_5, (String_t*) &_stringLiteral1097, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 2);
		ArrayElementTypeCheck (L_0, L_5);
		*((MouseWiggleDesc_t611 **)(MouseWiggleDesc_t611 **)SZArrayLdElema(L_0, 2)) = (MouseWiggleDesc_t611 *)L_5;
		MouseWiggleDescU5BU5D_t600* L_6 = (__this->___mouseWiggleDescs_25);
		float L_7 = (__this->___minSSWiggleMagnitude_16);
		float L_8 = (__this->___maxSSWiggleMagnitude_17);
		int32_t L_9 = (__this->___minSSWiggleCycles_18);
		int32_t L_10 = (__this->___maxSSWiggleCycles_19);
		MouseWiggleDesc_t611 * L_11 = (MouseWiggleDesc_t611 *)il2cpp_codegen_object_new (MouseWiggleDesc_t611_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3272(L_11, (String_t*) &_stringLiteral1098, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_11);
		*((MouseWiggleDesc_t611 **)(MouseWiggleDesc_t611 **)SZArrayLdElema(L_6, 1)) = (MouseWiggleDesc_t611 *)L_11;
		MouseWiggleDescU5BU5D_t600* L_12 = (__this->___mouseWiggleDescs_25);
		float L_13 = (__this->___minRDWiggleMagnitude_20);
		float L_14 = (__this->___maxRDWiggleMagnitude_21);
		int32_t L_15 = (__this->___minRDWiggleCycles_22);
		int32_t L_16 = (__this->___maxRDWiggleCycles_23);
		MouseWiggleDesc_t611 * L_17 = (MouseWiggleDesc_t611 *)il2cpp_codegen_object_new (MouseWiggleDesc_t611_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3272(L_17, (String_t*) &_stringLiteral1099, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_17);
		*((MouseWiggleDesc_t611 **)(MouseWiggleDesc_t611 **)SZArrayLdElema(L_12, 3)) = (MouseWiggleDesc_t611 *)L_17;
		return;
	}
}
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m3176 (MouseConfig_t601 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m3910(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t512 * MouseConfig_GetIntroSpriteForMouseType_m3177 (MouseConfig_t601 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseTypeDescU5BU5D_t599* L_0 = (__this->___mouseDescs_24);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(MouseTypeDesc_t610 **)(MouseTypeDesc_t610 **)SZArrayLdElema(L_0, L_2)));
		Sprite_t512 * L_3 = ((*(MouseTypeDesc_t610 **)(MouseTypeDesc_t610 **)SZArrayLdElema(L_0, L_2))->___introScreenSprite_2);
		return L_3;
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t512 * MouseConfig_GetIntroSpriteForMouseWiggle_m3178 (MouseConfig_t601 * __this, int32_t ___wt, const MethodInfo* method)
{
	MouseWiggleDesc_t611 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		MouseWiggleDesc_t611 * L_1 = MouseConfig_GetWiggleDesc_m3179(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseWiggleDesc_t611 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		MouseWiggleDesc_t611 * L_3 = V_0;
		NullCheck(L_3);
		Sprite_t512 * L_4 = (L_3->___introScreenSprite_0);
		return L_4;
	}

IL_0015:
	{
		return (Sprite_t512 *)NULL;
	}
}
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t611 * MouseConfig_GetWiggleDesc_m3179 (MouseConfig_t601 * __this, int32_t ___wt, const MethodInfo* method)
{
	{
		MouseWiggleDescU5BU5D_t600* L_0 = (__this->___mouseWiggleDescs_25);
		int32_t L_1 = ___wt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseWiggleDesc_t611 **)(MouseWiggleDesc_t611 **)SZArrayLdElema(L_0, L_2));
	}
}
// MouseTypeDesc MouseConfig::GetMouseTypeDesc(MouseConfig/MouseType)
extern "C" MouseTypeDesc_t610 * MouseConfig_GetMouseTypeDesc_m3180 (MouseConfig_t601 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseTypeDescU5BU5D_t599* L_0 = (__this->___mouseDescs_24);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseTypeDesc_t610 **)(MouseTypeDesc_t610 **)SZArrayLdElema(L_0, L_2));
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_Slider.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"
struct GameObject_t352;
struct WorldObjectFollower_t688;
// Declaration !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
// !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
#define GameObject_GetComponent_TisWorldObjectFollower_t688_m4410(__this, method) (( WorldObjectFollower_t688 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)
struct GameObject_t352;
struct Slider_t497;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t497_m4302(__this, method) (( Slider_t497 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)
struct GameObject_t352;
struct TweakableSlider_t603;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
// !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
#define GameObject_GetComponent_TisTweakableSlider_t603_m4411(__this, method) (( TweakableSlider_t603 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void MouseMove::.ctor()
extern "C" void MouseMove__ctor_m3181 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		__this->___minDistanceToManuallyOrient_5 = (0.01f);
		__this->___wiggleCycles_23 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m3182 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m3183 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_26);
		return L_0;
	}
}
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m3184 (MouseMove_t530 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m3185 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdeadU3Ek__BackingField_27);
		return L_0;
	}
}
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m3186 (MouseMove_t530 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdeadU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m3187 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPoisonedU3Ek__BackingField_28);
		return L_0;
	}
}
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m3188 (MouseMove_t530 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPoisonedU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isFartedUpon()
extern "C" bool MouseMove_get_isFartedUpon_m3189 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisFartedUponU3Ek__BackingField_29);
		return L_0;
	}
}
// System.Void MouseMove::set_isFartedUpon(System.Boolean)
extern "C" void MouseMove_set_isFartedUpon_m3190 (MouseMove_t530 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisFartedUponU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m3191 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		MouseMove_set_dead_m3186(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::Start()
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern TypeInfo* MouseMove_t530_il2cpp_TypeInfo_var;
extern "C" void MouseMove_Start_m3192 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		MouseMove_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_RegisterForEvents_m3194(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___startAngleDeg_8);
		__this->___mouseAngleDeg_7 = L_0;
		MouseMove_SetPhase_m3205(__this, 0, /*hidden argument*/NULL);
		MouseConfig_t601 * L_1 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_1);
		float L_2 = (L_1->___startMouseRadius_5);
		__this->___mouseRadius_10 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t530_il2cpp_TypeInfo_var);
		int32_t L_3 = ((MouseMove_t530_StaticFields*)MouseMove_t530_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t530_StaticFields*)MouseMove_t530_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		float L_4 = (__this->___baseSpeedM_14);
		__this->___actualSpeedM_15 = L_4;
		MouseMove_MakeSlider_m3199(__this, /*hidden argument*/NULL);
		MouseMove_SetMouseTransform_m3200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnDestroy()
extern TypeInfo* MouseMove_t530_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnDestroy_m3193 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_UnregisterForEvents_m3195(__this, /*hidden argument*/NULL);
		Slider_t497 * L_0 = (__this->___sliderInstance_19);
		bool L_1 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_0, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Slider_t497 * L_2 = (__this->___sliderInstance_19);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3901(L_2, /*hidden argument*/NULL);
		Object_Destroy_m4045(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t530_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t530_StaticFields*)MouseMove_t530_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t530_StaticFields*)MouseMove_t530_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_4-(int32_t)1));
		return;
	}
}
// System.Void MouseMove::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m3196_MethodInfo_var;
extern "C" void MouseMove_RegisterForEvents_m3194 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseMove_OnGamePhaseChanged_m3196_MethodInfo_var = il2cpp_codegen_method_info_from_index(554);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m3196_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m3196_MethodInfo_var;
extern "C" void MouseMove_UnregisterForEvents_m3195 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseMove_OnGamePhaseChanged_m3196_MethodInfo_var = il2cpp_codegen_method_info_from_index(554);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m3196_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseMove::OnGamePhaseChanged()
extern "C" void MouseMove_OnGamePhaseChanged_m3196 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		GamePhaseState_t564 * L_2 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3029(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		Object_Destroy_m4045(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void MouseMove::OnFartedUpon()
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnFartedUpon_m3197 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___baseSpeedM_14);
		__this->___actualSpeedM_15 = ((float)((float)L_0*(float)(0.3f)));
		Renderer_t602 * L_1 = (__this->___mouseRenderer_3);
		NullCheck(L_1);
		Material_t526 * L_2 = Renderer_get_material_m4146(L_1, /*hidden argument*/NULL);
		MouseConfig_t601 * L_3 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_3);
		Color_t325  L_4 = (L_3->___fartedUponColor_9);
		NullCheck(L_2);
		Material_set_color_m4412(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPoisoned()
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetPoisoned_m3198 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_set_isPoisoned_m3188(__this, 1, /*hidden argument*/NULL);
		Renderer_t602 * L_0 = (__this->___mouseRenderer_3);
		NullCheck(L_0);
		Material_t526 * L_1 = Renderer_get_material_m4146(L_0, /*hidden argument*/NULL);
		MouseConfig_t601 * L_2 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_2);
		Color_t325  L_3 = (L_2->___poisonedColor_8);
		NullCheck(L_1);
		Material_set_color_m4412(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeSlider()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisWorldObjectFollower_t688_m4410_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t497_m4302_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTweakableSlider_t603_m4411_MethodInfo_var;
extern "C" void MouseMove_MakeSlider_m3199 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		GameObject_GetComponent_TisWorldObjectFollower_t688_m4410_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484203);
		GameObject_GetComponent_TisSlider_t497_m4302_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		GameObject_GetComponent_TisTweakableSlider_t603_m4411_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484204);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	WorldObjectFollower_t688 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___trackingStatusBarPrototype_4);
		Vector3_t538  L_1 = {0};
		Vector3__ctor_m4179(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t802  L_2 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_3 = Object_Instantiate_m4306(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		WorldObjectFollower_t688 * L_5 = GameObject_GetComponent_TisWorldObjectFollower_t688_m4410(L_4, /*hidden argument*/GameObject_GetComponent_TisWorldObjectFollower_t688_m4410_MethodInfo_var);
		V_1 = L_5;
		WorldObjectFollower_t688 * L_6 = V_1;
		GameObject_t352 * L_7 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		MouseConfig_t601 * L_8 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_8);
		Vector3_t538  L_9 = (L_8->___progressBarOffset_10);
		NullCheck(L_6);
		WorldObjectFollower_SetObjectToFollow_m3766(L_6, L_7, L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = V_0;
		NullCheck(L_10);
		Slider_t497 * L_11 = GameObject_GetComponent_TisSlider_t497_m4302(L_10, /*hidden argument*/GameObject_GetComponent_TisSlider_t497_m4302_MethodInfo_var);
		__this->___sliderInstance_19 = L_11;
		GameObject_t352 * L_12 = V_0;
		NullCheck(L_12);
		TweakableSlider_t603 * L_13 = GameObject_GetComponent_TisTweakableSlider_t603_m4411(L_12, /*hidden argument*/GameObject_GetComponent_TisTweakableSlider_t603_m4411_MethodInfo_var);
		__this->___tweakableSlider_20 = L_13;
		Slider_t497 * L_14 = (__this->___sliderInstance_19);
		NullCheck(L_14);
		GameObject_t352 * L_15 = Component_get_gameObject_m3901(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m4101(L_15, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseTransform()
extern "C" void MouseMove_SetMouseTransform_m3200 (MouseMove_t530 * __this, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		Transform_t406 * L_0 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t538  L_1 = Transform_get_position_m4186(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseMove_SetMousePosition_m3201(__this, /*hidden argument*/NULL);
		Vector3_t538  L_2 = V_0;
		MouseMove_SetMouseOrientation_m3202(__this, L_2, /*hidden argument*/NULL);
		MouseMove_UpdateSlider_m3204(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMousePosition()
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMousePosition_m3201 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___mouseRadius_10);
		float L_1 = (__this->___mouseAngleDeg_7);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_2 = sinf(((float)((float)(0.0174532924f)*(float)L_1)));
		V_0 = ((float)((float)L_0*(float)L_2));
		float L_3 = (__this->___mouseRadius_10);
		float L_4 = (__this->___mouseAngleDeg_7);
		float L_5 = cosf(((float)((float)(0.0174532924f)*(float)L_4)));
		V_1 = ((float)((float)L_3*(float)L_5));
		Transform_t406 * L_6 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_7 = V_1;
		float L_8 = V_0;
		Vector3_t538  L_9 = {0};
		Vector3__ctor_m4179(&L_9, L_7, L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m4188(L_6, L_9, /*hidden argument*/NULL);
		MouseMove_ApplyWiggle_m3203(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseOrientation(UnityEngine.Vector3)
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseOrientation_m3202 (MouseMove_t530 * __this, Vector3_t538  ___oldPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t538  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t538  V_3 = {0};
	Vector3_t538  V_4 = {0};
	int32_t V_5 = {0};
	{
		int32_t L_0 = (__this->___phase_12);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_00b0;
		}
	}
	{
		Transform_t406 * L_1 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t538  L_2 = Transform_get_position_m4186(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = ((&V_3)->___x_1);
		float L_4 = ((&___oldPosition)->___x_1);
		Transform_t406 * L_5 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t538  L_6 = Transform_get_position_m4186(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = ((&V_4)->___y_2);
		float L_8 = ((&___oldPosition)->___y_2);
		Vector3__ctor_m4179((&V_1), ((float)((float)L_3-(float)L_4)), ((float)((float)L_7-(float)L_8)), (0.0f), /*hidden argument*/NULL);
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
		float L_11 = Vector3_get_magnitude_m4413((&V_1), /*hidden argument*/NULL);
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
		Vector3_t538  L_15 = Vector3_get_right_m4414(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t538  L_16 = V_1;
		float L_17 = Vector3_Angle_m4415(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
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
		float L_24 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = (__this->___phaseStartTime_13);
		MouseConfig_t601 * L_26 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_26);
		float L_27 = (L_26->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Lerp_m4416(NULL /*static, unused*/, (180.0f), L_23, ((float)((float)((float)((float)L_24-(float)L_25))/(float)L_27)), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_0177;
	}

IL_0121:
	{
		float L_29 = (__this->___zeroCenteredAngleAdjustmentWhileRunning_18);
		float L_30 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_31 = (__this->___phaseStartTime_13);
		MouseConfig_t601 * L_32 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_32);
		float L_33 = (L_32->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_34 = Mathf_Lerp_m4416(NULL /*static, unused*/, L_29, (0.0f), ((float)((float)((float)((float)L_30-(float)L_31))/(float)L_33)), /*hidden argument*/NULL);
		V_2 = L_34;
		goto IL_0177;
	}

IL_014e:
	{
		float L_35 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = (__this->___phaseStartTime_13);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
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
		Transform_t406 * L_40 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_41 = V_0;
		Quaternion_t802  L_42 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_rotation_m4294(L_40, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::ApplyWiggle()
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" void MouseMove_ApplyWiggle_m3203 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t538  V_3 = {0};
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
		Vector3__ctor_m4179((&V_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_14 = sinf(L_13);
		Vector3__ctor_m4179((&V_3), ((float)((float)L_12*(float)L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_00a8:
	{
		float L_15 = (__this->___wiggleMagnitude_22);
		float L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_17 = sinf(L_16);
		Vector3__ctor_m4179((&V_3), (0.0f), ((float)((float)L_15*(float)L_17)), (0.0f), /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_24 = cosf(((float)((float)(3.14159274f)+(float)L_23)));
		float L_25 = (__this->___wiggleMagnitude_22);
		float L_26 = (__this->___wiggleMagnitude_22);
		float L_27 = V_2;
		float L_28 = sinf(((-L_27)));
		Vector3__ctor_m4179((&V_3), ((float)((float)((float)((float)L_22*(float)L_24))+(float)L_25)), ((float)((float)L_26*(float)L_28)), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_0128:
	{
		float L_29 = (__this->___mouseAngleDeg_7);
		float L_30 = (__this->___angleAdjustmentWhileRunning_17);
		Vector3_t538  L_31 = {0};
		Vector3__ctor_m4179(&L_31, (0.0f), (0.0f), ((float)((float)L_29+(float)L_30)), /*hidden argument*/NULL);
		Quaternion_t802  L_32 = Quaternion_Euler_m4417(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Vector3_t538  L_33 = V_3;
		Vector3_t538  L_34 = Quaternion_op_Multiply_m4418(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		Transform_t406 * L_35 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Transform_t406 * L_36 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t538  L_37 = Transform_get_position_m4186(L_36, /*hidden argument*/NULL);
		Vector3_t538  L_38 = V_3;
		Vector3_t538  L_39 = Vector3_op_Addition_m4344(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_m4188(L_35, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UpdateSlider()
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern "C" void MouseMove_UpdateSlider_m3204 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		Color_t325  L_9 = Utilities_TrafficLightColorLerp_m3746(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		TweakableSlider_t603 * L_10 = (__this->___tweakableSlider_20);
		NullCheck(L_10);
		Image_t503 * L_11 = (L_10->___fill_2);
		Color_t325  L_12 = V_1;
		NullCheck(L_11);
		Graphic_set_color_m4347(L_11, L_12, /*hidden argument*/NULL);
		Slider_t497 * L_13 = (__this->___sliderInstance_19);
		float L_14 = V_0;
		NullCheck(L_13);
		Slider_set_value_m4311(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPhase(MouseConfig/MovementPhaseType)
extern "C" void MouseMove_SetPhase_m3205 (MouseMove_t530 * __this, int32_t ___phase, const MethodInfo* method)
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
		float L_3 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_13 = L_3;
		return;
	}
}
// System.Void MouseMove::FixedUpdate()
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern "C" void MouseMove_FixedUpdate_m3206 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = {0};
	{
		float L_0 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		MouseMove_SetPhase_m3205(__this, 1, /*hidden argument*/NULL);
		Slider_t497 * L_9 = (__this->___sliderInstance_19);
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3901(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m4101(L_10, 1, /*hidden argument*/NULL);
	}

IL_0078:
	{
		goto IL_017c;
	}

IL_007d:
	{
		float L_11 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t601 * L_12 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_12);
		float L_13 = (L_12->___timeToTurn_2);
		float L_14 = (__this->___phaseStartTime_13);
		if ((!(((float)L_11) >= ((float)((float)((float)L_13+(float)L_14))))))
		{
			goto IL_009f;
		}
	}
	{
		MouseMove_SetPhase_m3205(__this, 2, /*hidden argument*/NULL);
	}

IL_009f:
	{
		goto IL_017c;
	}

IL_00a4:
	{
		float L_15 = (__this->___actualSpeedM_15);
		float L_16 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		MouseMove_SetPhase_m3205(__this, 3, /*hidden argument*/NULL);
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
		MouseMove_SetPhase_m3205(__this, 3, /*hidden argument*/NULL);
	}

IL_0136:
	{
		goto IL_017c;
	}

IL_013b:
	{
		float L_31 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t601 * L_32 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_32);
		float L_33 = (L_32->___timeToTurn_2);
		float L_34 = (__this->___phaseStartTime_13);
		if ((!(((float)L_31) >= ((float)((float)((float)L_33+(float)L_34))))))
		{
			goto IL_015d;
		}
	}
	{
		MouseMove_SetPhase_m3205(__this, 4, /*hidden argument*/NULL);
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
		MouseMove_SetMouseTransform_m3200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnKilled()
extern "C" void MouseMove_OnKilled_m3207 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		MouseMove_MakeDeadMouse_m3208(__this, /*hidden argument*/NULL);
		MouseMove_set_dead_m3186(__this, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		Object_Destroy_m4045(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeDeadMouse()
extern "C" void MouseMove_MakeDeadMouse_m3208 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t652 * L_0 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t652 * L_1 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		SFXTypeU5BU5D_t651* L_2 = (L_1->___deadMouseIds_4);
		NullCheck(L_0);
		SFXPlayer_PlayRandom_m3549(L_0, L_2, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnSafeExit()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var;
extern "C" void MouseMove_OnSafeExit_m3209 (MouseMove_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	DistortForEffect_t537 * V_0 = {0};
	{
		MouseMove_SetPhase_m3205(__this, 5, /*hidden argument*/NULL);
		DistortForEffect_t537 * L_0 = Component_GetComponent_TisDistortForEffect_t537_m4312(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var);
		V_0 = L_0;
		DistortForEffect_t537 * L_1 = V_0;
		NullCheck(L_1);
		DistortForEffect_Distort_m2905(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern TypeInfo* MaterialU5BU5D_t670_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseType_m3210 (MouseMove_t530 * __this, int32_t ___mt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		MaterialU5BU5D_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		s_Il2CppMethodIntialized = true;
	}
	MouseTypeDesc_t610 * V_0 = {0};
	Vector3_t538  V_1 = {0};
	float V_2 = 0.0f;
	MaterialU5BU5D_t670* V_3 = {0};
	float G_B3_0 = 0.0f;
	{
		int32_t L_0 = ___mt;
		MouseMove_set_mouseType_m3184(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t601 * L_1 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		int32_t L_2 = ___mt;
		NullCheck(L_1);
		MouseTypeDesc_t610 * L_3 = MouseConfig_GetMouseTypeDesc_m3180(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseTypeDesc_t610 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = (L_4->___speed_4);
		__this->___baseSpeedM_14 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t538  L_7 = Transform_get_localScale_m4189(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_9 = ((&V_1)->___x_1);
		MouseTypeDesc_t610 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___scale_5);
		float L_12 = ((&V_1)->___y_2);
		MouseTypeDesc_t610 * L_13 = V_0;
		NullCheck(L_13);
		float L_14 = (L_13->___scale_5);
		float L_15 = ((&V_1)->___z_3);
		Vector3_t538  L_16 = {0};
		Vector3__ctor_m4179(&L_16, ((float)((float)L_9*(float)L_11)), ((float)((float)L_12*(float)L_14)), L_15, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m4190(L_8, L_16, /*hidden argument*/NULL);
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
		Vector3_t538  L_19 = Transform_get_localScale_m4189(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Transform_t406 * L_20 = (__this->___artTransform_6);
		float L_21 = ((&V_1)->___x_1);
		float L_22 = ((&V_1)->___y_2);
		float L_23 = V_2;
		float L_24 = ((&V_1)->___z_3);
		Vector3_t538  L_25 = {0};
		Vector3__ctor_m4179(&L_25, L_21, ((float)((float)L_22*(float)L_23)), L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_m4190(L_20, L_25, /*hidden argument*/NULL);
		V_3 = ((MaterialU5BU5D_t670*)SZArrayNew(MaterialU5BU5D_t670_il2cpp_TypeInfo_var, 1));
		MaterialU5BU5D_t670* L_26 = V_3;
		MouseTypeDesc_t610 * L_27 = V_0;
		NullCheck(L_27);
		Material_t526 * L_28 = (L_27->___mouseMaterial_3);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_28);
		*((Material_t526 **)(Material_t526 **)SZArrayLdElema(L_26, 0)) = (Material_t526 *)L_28;
		Renderer_t602 * L_29 = (__this->___mouseRenderer_3);
		MaterialU5BU5D_t670* L_30 = V_3;
		NullCheck(L_29);
		Renderer_set_materials_m4419(L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m3211 (MouseMove_t530 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___phase_12);
		return L_0;
	}
}
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseSinkController/MouseHoleLocation,System.Boolean,System.Int32)
extern TypeInfo* MouseSinkController_t606_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t601_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetupMouse_m3212 (MouseMove_t530 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSinkController_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		MouseConfig_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
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
		IL2CPP_RUNTIME_CLASS_INIT(MouseSinkController_t606_il2cpp_TypeInfo_var);
		float L_3 = ((MouseSinkController_t606_StaticFields*)MouseSinkController_t606_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_10;
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
		MouseConfig_t601 * L_8 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_8);
		float L_9 = (L_8->___maxCirclingRadius_4);
		MouseConfig_t601 * L_10 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_10);
		float L_11 = (L_10->___minCirclingRadius_3);
		float L_12 = V_0;
		V_1 = ((float)((float)((float)((float)L_9-(float)L_11))*(float)L_12));
		MouseConfig_t601 * L_13 = ((MouseConfig_t601_StaticFields*)MouseConfig_t601_il2cpp_TypeInfo_var->static_fields)->___instance_26;
		NullCheck(L_13);
		float L_14 = (L_13->___minCirclingRadius_3);
		float L_15 = V_1;
		__this->___circlingRadius_11 = ((float)((float)L_14+(float)L_15));
		int32_t L_16 = ___mouseType;
		MouseMove_SetMouseType_m3210(__this, L_16, /*hidden argument*/NULL);
		__this->___wiggleType_21 = 0;
		int32_t L_17 = ___mouseType;
		V_2 = ((int32_t)((int32_t)2+(int32_t)L_17));
		DebugConfig_t533 * L_18 = DebugConfig_get_instance_m2878(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = DebugConfig_IsDebugFlagSet_m2882(L_18, 0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(MouseSinkController_t606_il2cpp_TypeInfo_var);
		float L_21 = ((MouseSinkController_t606_StaticFields*)MouseSinkController_t606_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_10;
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
extern "C" void MouseMove_AddWiggle_m3213 (MouseMove_t530 * __this, int32_t ___wiggleType, float ___wiggleMagnitude, int32_t ___wiggleCycles, bool ___wiggleClockwise, const MethodInfo* method)
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
struct Component_t775;
struct SizeCamera_t519;
// Declaration !!0 UnityEngine.Component::GetComponent<SizeCamera>()
// !!0 UnityEngine.Component::GetComponent<SizeCamera>()
#define Component_GetComponent_TisSizeCamera_t519_m4420(__this, method) (( SizeCamera_t519 * (*) (Component_t775 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4141_gshared)(__this, method)
struct Utilities_t687;
struct MouseMove_t530;
struct GameObject_t352;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t687;
struct Object_t;
struct GameObject_t352;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m4422_gshared (Object_t * __this /* static, unused */, GameObject_t352 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m4422(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4422_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421(__this /* static, unused */, p0, method) (( MouseMove_t530 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4422_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t352;
struct MouseTrap_t609;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseTrap>()
// !!0 UnityEngine.GameObject::GetComponent<MouseTrap>()
#define GameObject_GetComponent_TisMouseTrap_t609_m4423(__this, method) (( MouseTrap_t609 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void MouseSinkController::.ctor()
extern "C" void MouseSinkController__ctor_m3214 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	{
		__this->___trapCapacity_5 = 1;
		__this->___trapBasicZ_8 = (-0.1f);
		__this->___distortDelay_9 = (0.9f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::.cctor()
extern TypeInfo* MouseSinkController_t606_il2cpp_TypeInfo_var;
extern "C" void MouseSinkController__cctor_m3215 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSinkController_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseSinkController_t606_StaticFields*)MouseSinkController_t606_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_10 = (90.0f);
		return;
	}
}
// System.Int32 MouseSinkController::get_savedMouseCount()
extern "C" int32_t MouseSinkController_get_savedMouseCount_m3216 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CsavedMouseCountU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void MouseSinkController::set_savedMouseCount(System.Int32)
extern "C" void MouseSinkController_set_savedMouseCount_m3217 (MouseSinkController_t606 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CsavedMouseCountU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Void MouseSinkController::Awake()
extern TypeInfo* List_1_t605_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4424_MethodInfo_var;
extern "C" void MouseSinkController_Awake_m3218 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t605_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(553);
		List_1__ctor_m4424_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484205);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSinkController_set_savedMouseCount_m3217(__this, 0, /*hidden argument*/NULL);
		List_1_t605 * L_0 = (List_1_t605 *)il2cpp_codegen_object_new (List_1_t605_il2cpp_TypeInfo_var);
		List_1__ctor_m4424(L_0, /*hidden argument*/List_1__ctor_m4424_MethodInfo_var);
		__this->___mouseTraps_13 = L_0;
		return;
	}
}
// System.Void MouseSinkController::Start()
extern const MethodInfo* Component_GetComponent_TisSizeCamera_t519_m4420_MethodInfo_var;
extern "C" void MouseSinkController_Start_m3219 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSizeCamera_t519_m4420_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484206);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t548 * L_0 = Camera_get_main_m4152(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SizeCamera_t519 * L_1 = Component_GetComponent_TisSizeCamera_t519_m4420(L_0, /*hidden argument*/Component_GetComponent_TisSizeCamera_t519_m4420_MethodInfo_var);
		__this->___sizeCameraWorld_15 = L_1;
		MouseSinkController_RegisterForEvents_m3221(__this, /*hidden argument*/NULL);
		MouseSinkController_CalculateSpread_m3225(__this, /*hidden argument*/NULL);
		MouseSinkController_ResetTraps_m3226(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::OnDestroy()
extern "C" void MouseSinkController_OnDestroy_m3220 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	{
		MouseSinkController_UnregisterForEvents_m3222(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* CameraConfiguredHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSinkController_OnInstanceChanged_m3224_MethodInfo_var;
extern const MethodInfo* MouseSinkController_OnCameraChanged_m3223_MethodInfo_var;
extern "C" void MouseSinkController_RegisterForEvents_m3221 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		CameraConfiguredHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		MouseSinkController_OnInstanceChanged_m3224_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		MouseSinkController_OnCameraChanged_m3223_MethodInfo_var = il2cpp_codegen_method_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_16);
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
		__this->___registeredForEvents_16 = 1;
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSinkController_OnInstanceChanged_m3224_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_3 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m3025(L_1, L_3, /*hidden argument*/NULL);
		SizeCamera_t519 * L_4 = (__this->___sizeCameraWorld_15);
		IntPtr_t L_5 = { (void*)MouseSinkController_OnCameraChanged_m3223_MethodInfo_var };
		CameraConfiguredHandler_t659 * L_6 = (CameraConfiguredHandler_t659 *)il2cpp_codegen_object_new (CameraConfiguredHandler_t659_il2cpp_TypeInfo_var);
		CameraConfiguredHandler__ctor_m3595(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SizeCamera_add_CameraConfigured_m3600(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* CameraConfiguredHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSinkController_OnInstanceChanged_m3224_MethodInfo_var;
extern const MethodInfo* MouseSinkController_OnCameraChanged_m3223_MethodInfo_var;
extern "C" void MouseSinkController_UnregisterForEvents_m3222 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		CameraConfiguredHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		MouseSinkController_OnInstanceChanged_m3224_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		MouseSinkController_OnCameraChanged_m3223_MethodInfo_var = il2cpp_codegen_method_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_16);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSinkController_OnInstanceChanged_m3224_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_3 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3026(L_1, L_3, /*hidden argument*/NULL);
		SizeCamera_t519 * L_4 = (__this->___sizeCameraWorld_15);
		IntPtr_t L_5 = { (void*)MouseSinkController_OnCameraChanged_m3223_MethodInfo_var };
		CameraConfiguredHandler_t659 * L_6 = (CameraConfiguredHandler_t659 *)il2cpp_codegen_object_new (CameraConfiguredHandler_t659_il2cpp_TypeInfo_var);
		CameraConfiguredHandler__ctor_m3595(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SizeCamera_remove_CameraConfigured_m3601(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void MouseSinkController::OnCameraChanged()
extern "C" void MouseSinkController_OnCameraChanged_m3223 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	{
		MouseSinkController_CalculateSpread_m3225(__this, /*hidden argument*/NULL);
		MouseSinkController_ResetTraps_m3226(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::OnInstanceChanged()
extern "C" void MouseSinkController_OnInstanceChanged_m3224 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	{
		__this->___trapCapacity_5 = 1;
		__this->___trapsSpent_6 = 0;
		MouseSinkController_set_savedMouseCount_m3217(__this, 0, /*hidden argument*/NULL);
		MouseSinkController_ResetTraps_m3226(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::CalculateSpread()
extern "C" void MouseSinkController_CalculateSpread_m3225 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	MouseSinkController_t606 * G_B3_0 = {0};
	MouseSinkController_t606 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	MouseSinkController_t606 * G_B4_1 = {0};
	MouseSinkController_t606 * G_B7_0 = {0};
	MouseSinkController_t606 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	MouseSinkController_t606 * G_B8_1 = {0};
	{
		SizeCamera_t519 * L_0 = (__this->___sizeCameraWorld_15);
		NullCheck(L_0);
		float L_1 = SizeCamera_GetAspectRatio_m3606(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = (__this->___mouseHoleLocation_14);
		G_B2_0 = __this;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B3_0 = __this;
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = (__this->___mouseHoleLocation_14);
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
		G_B4_1->___spreadClockwise_7 = G_B4_0;
		goto IL_0057;
	}

IL_003a:
	{
		int32_t L_5 = (__this->___mouseHoleLocation_14);
		G_B6_0 = __this;
		if (!L_5)
		{
			G_B7_0 = __this;
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = (__this->___mouseHoleLocation_14);
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
		G_B8_1->___spreadClockwise_7 = G_B8_0;
	}

IL_0057:
	{
		return;
	}
}
// System.Void MouseSinkController::ResetTraps()
extern "C" void MouseSinkController_ResetTraps_m3226 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	MouseTrap_t609 * V_0 = {0};
	int32_t V_1 = 0;
	{
		goto IL_0029;
	}

IL_0005:
	{
		List_1_t605 * L_0 = (__this->___mouseTraps_13);
		NullCheck(L_0);
		MouseTrap_t609 * L_1 = (MouseTrap_t609 *)VirtFuncInvoker1< MouseTrap_t609 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_0, 0);
		V_0 = L_1;
		List_1_t605 * L_2 = (__this->___mouseTraps_13);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32) */, L_2, 0);
		MouseTrap_t609 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3901(L_3, /*hidden argument*/NULL);
		Object_Destroy_m4045(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		List_1_t605 * L_5 = (__this->___mouseTraps_13);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_5);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		V_1 = 0;
		goto IL_004a;
	}

IL_0040:
	{
		MouseSinkController_AddTrap_m3228(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = (__this->___trapCapacity_5);
		int32_t L_10 = (__this->___trapsSpent_6);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10)))))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}
}
// System.Void MouseSinkController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421_MethodInfo_var;
extern "C" void MouseSinkController_OnTriggerEnter2D_m3227 (MouseSinkController_t606 * __this, Collider2D_t713 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484209);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t530 * V_0 = {0};
	{
		Collider2D_t713 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4364(L_0, /*hidden argument*/NULL);
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
		Collider2D_t713 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3901(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		MouseMove_t530 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t530 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
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
		MouseMove_t530 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MouseMove_GetMousePhase_m3211(L_8, /*hidden argument*/NULL);
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
		List_1_t605 * L_10 = (__this->___mouseTraps_13);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_10);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		DeadMouseRelay_t532 * L_12 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		MouseMove_t530 * L_13 = V_0;
		NullCheck(L_12);
		DeadMouseRelay_HandleMouseKill_m2876(L_12, L_13, /*hidden argument*/NULL);
		MouseSinkController_RemoveTopmostMouseTrap_m3232(__this, /*hidden argument*/NULL);
		int32_t L_14 = (__this->___trapsSpent_6);
		__this->___trapsSpent_6 = ((int32_t)((int32_t)L_14+(int32_t)1));
		goto IL_008f;
	}

IL_0070:
	{
		int32_t L_15 = MouseSinkController_get_savedMouseCount_m3216(__this, /*hidden argument*/NULL);
		MouseSinkController_set_savedMouseCount_m3217(__this, ((int32_t)((int32_t)L_15+(int32_t)1)), /*hidden argument*/NULL);
		GameController_t557 * L_16 = GameController_get_instance_m2972(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseMove_t530 * L_17 = V_0;
		NullCheck(L_16);
		GameController_OnMouseExit_m2986(L_16, L_17, /*hidden argument*/NULL);
		MouseMove_t530 * L_18 = V_0;
		NullCheck(L_18);
		MouseMove_OnSafeExit_m3209(L_18, /*hidden argument*/NULL);
	}

IL_008f:
	{
		return;
	}
}
// System.Void MouseSinkController::AddTrap()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseTrap_t609_m4423_MethodInfo_var;
extern "C" void MouseSinkController_AddTrap_m3228 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisMouseTrap_t609_m4423_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484210);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t352 * V_1 = {0};
	MouseTrap_t609 * V_2 = {0};
	{
		List_1_t605 * L_0 = (__this->___mouseTraps_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_0);
		V_0 = L_1;
		GameObject_t352 * L_2 = (__this->___mouseTrapPrototype_11);
		Vector3_t538  L_3 = {0};
		Vector3__ctor_m4179(&L_3, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t802  L_4 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_5 = Object_Instantiate_m4306(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((GameObject_t352 *)IsInst(L_5, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_6 = V_1;
		NullCheck(L_6);
		Transform_t406 * L_7 = GameObject_get_transform_m4184(L_6, /*hidden argument*/NULL);
		Transform_t406 * L_8 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m4425(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t352 * L_9 = V_1;
		int32_t L_10 = V_0;
		MouseSinkController_PositionNthMousetrap_m3231(__this, L_9, L_10, /*hidden argument*/NULL);
		GameObject_t352 * L_11 = V_1;
		NullCheck(L_11);
		MouseTrap_t609 * L_12 = GameObject_GetComponent_TisMouseTrap_t609_m4423(L_11, /*hidden argument*/GameObject_GetComponent_TisMouseTrap_t609_m4423_MethodInfo_var);
		V_2 = L_12;
		List_1_t605 * L_13 = (__this->___mouseTraps_13);
		MouseTrap_t609 * L_14 = V_2;
		NullCheck(L_13);
		VirtActionInvoker1< MouseTrap_t609 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseTrap>::Add(!0) */, L_13, L_14);
		return;
	}
}
// UnityEngine.Vector3 MouseSinkController::NthMouseTrapPosition(System.Int32)
extern "C" Vector3_t538  MouseSinkController_NthMouseTrapPosition_m3229 (MouseSinkController_t606 * __this, int32_t ___i, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___i;
		V_0 = ((float)((float)(0.2f)*(float)(((float)L_0))));
		int32_t L_1 = ___i;
		V_1 = ((float)((float)(0.3f)*(float)(((float)L_1))));
		bool L_2 = (__this->___spreadClockwise_7);
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
		float L_4 = (__this->___trapBasicZ_8);
		int32_t L_5 = ___i;
		V_2 = ((float)((float)L_4+(float)((float)((float)(0.01f)*(float)(((float)L_5))))));
		float L_6 = V_0;
		float L_7 = V_1;
		float L_8 = V_2;
		Vector3_t538  L_9 = {0};
		Vector3__ctor_m4179(&L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single MouseSinkController::NthMouseTrapRotation(System.Int32)
extern "C" float MouseSinkController_NthMouseTrapRotation_m3230 (MouseSinkController_t606 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___spreadClockwise_7);
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
extern "C" void MouseSinkController_PositionNthMousetrap_m3231 (MouseSinkController_t606 * __this, GameObject_t352 * ___mouseTrapGameObject, int32_t ___i, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___mouseTrapGameObject;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4184(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		Vector3_t538  L_3 = MouseSinkController_NthMouseTrapPosition_m3229(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m4345(L_1, L_3, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = ___mouseTrapGameObject;
		NullCheck(L_4);
		Transform_t406 * L_5 = GameObject_get_transform_m4184(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = MouseSinkController_NthMouseTrapRotation_m3230(__this, L_6, /*hidden argument*/NULL);
		Quaternion_t802  L_8 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localRotation_m4359(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::RemoveTopmostMouseTrap()
extern "C" void MouseSinkController_RemoveTopmostMouseTrap_m3232 (MouseSinkController_t606 * __this, const MethodInfo* method)
{
	MouseTrap_t609 * V_0 = {0};
	int32_t V_1 = 0;
	Vector3_t538  V_2 = {0};
	float V_3 = 0.0f;
	{
		List_1_t605 * L_0 = (__this->___mouseTraps_13);
		NullCheck(L_0);
		MouseTrap_t609 * L_1 = (MouseTrap_t609 *)VirtFuncInvoker1< MouseTrap_t609 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_0, 0);
		V_0 = L_1;
		List_1_t605 * L_2 = (__this->___mouseTraps_13);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32) */, L_2, 0);
		MouseTrap_t609 * L_3 = V_0;
		NullCheck(L_3);
		MouseTrap_AnimateOut_m3268(L_3, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_004d;
	}

IL_0026:
	{
		int32_t L_4 = V_1;
		Vector3_t538  L_5 = MouseSinkController_NthMouseTrapPosition_m3229(__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_1;
		float L_7 = MouseSinkController_NthMouseTrapRotation_m3230(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t605 * L_8 = (__this->___mouseTraps_13);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		MouseTrap_t609 * L_10 = (MouseTrap_t609 *)VirtFuncInvoker1< MouseTrap_t609 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_8, L_9);
		Vector3_t538  L_11 = V_2;
		float L_12 = V_3;
		NullCheck(L_10);
		MouseTrap_SlideTo_m3269(L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		List_1_t605 * L_15 = (__this->___mouseTraps_13);
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
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var;
extern "C" void MouseSinkController_SetTrapCapacity_m3233 (MouseSinkController_t606 * __this, int32_t ___newTrapCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	DistortForEffect_t537 * V_0 = {0};
	{
		int32_t L_0 = (__this->___trapCapacity_5);
		int32_t L_1 = ___newTrapCapacity;
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
		int32_t L_2 = ___newTrapCapacity;
		__this->___trapCapacity_5 = L_2;
		MouseSinkController_ResetTraps_m3226(__this, /*hidden argument*/NULL);
		GameLevelState_t560 * L_3 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GameLevelState_get_gameLevel_m3003(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		DistortForEffect_t537 * L_5 = Component_GetComponent_TisDistortForEffect_t537_m4312(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var);
		V_0 = L_5;
		DistortForEffect_t537 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		DistortForEffect_t537 * L_8 = V_0;
		float L_9 = (__this->___distortDelay_9);
		NullCheck(L_8);
		DistortForEffect_DistortWithDelay_m2903(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0048:
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
extern "C" void MouseSpawnEventHandler__ctor_m3234 (MouseSpawnEventHandler_t607 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke()
extern "C" void MouseSpawnEventHandler_Invoke_m3235 (MouseSpawnEventHandler_t607 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MouseSpawnEventHandler_Invoke_m3235((MouseSpawnEventHandler_t607 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MouseSpawnEventHandler_t607(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseSpawnFromData/MouseSpawnEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MouseSpawnEventHandler_BeginInvoke_m3236 (MouseSpawnEventHandler_t607 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseSpawnEventHandler_EndInvoke_m3237 (MouseSpawnEventHandler_t607 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct GameObject_t352;
struct MouseMove_t530;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
// !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
#define GameObject_GetComponent_TisMouseMove_t530_m4426(__this, method) (( MouseMove_t530 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m3238 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	{
		__this->___maxRandomDelay_4 = (4.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_add_MouseSpawn_m3239 (MouseSpawnFromData_t556 * __this, MouseSpawnEventHandler_t607 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t607 * L_0 = (__this->___MouseSpawn_9);
		MouseSpawnEventHandler_t607 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_9 = ((MouseSpawnEventHandler_t607 *)Castclass(L_2, MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m3240 (MouseSpawnFromData_t556 * __this, MouseSpawnEventHandler_t607 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t607 * L_0 = (__this->___MouseSpawn_9);
		MouseSpawnEventHandler_t607 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_9 = ((MouseSpawnEventHandler_t607 *)Castclass(L_2, MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m3241 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmiceSpawnedU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m3242 (MouseSpawnFromData_t556 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmiceSpawnedU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void MouseSpawnFromData::Awake()
extern TypeInfo* MouseSpawnFromData_t556_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_Awake_m3243 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseSpawnFromData_t556_StaticFields*)MouseSpawnFromData_t556_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m3244 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_RegisterForEvents_m3246(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m3245 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_UnregisterForEvents_m3247(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m3248_MethodInfo_var;
extern "C" void MouseSpawnFromData_RegisterForEvents_m3246 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseSpawnFromData_OnPhaseChanged_m3248_MethodInfo_var = il2cpp_codegen_method_info_from_index(563);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)MouseSpawnFromData_OnPhaseChanged_m3248_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_2 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m3027(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_8 = 1;
		return;
	}
}
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m3248_MethodInfo_var;
extern "C" void MouseSpawnFromData_UnregisterForEvents_m3247 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		MouseSpawnFromData_OnPhaseChanged_m3248_MethodInfo_var = il2cpp_codegen_method_info_from_index(563);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSpawnFromData_OnPhaseChanged_m3248_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m3248 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3042(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___nextSpawnTime_6 = ((float)((float)L_2+(float)(1.3f)));
		goto IL_002b;
	}

IL_0025:
	{
		MouseSpawnFromData_Clear_m3253(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m3249 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3042(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		float L_2 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		MouseSpawnFromData_MaybeProduceNextMouse_m3250(__this, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m3250 (MouseSpawnFromData_t556 * __this, float ___timeNow, const MethodInfo* method)
{
	ExplicitMouseDesc_t539 * V_0 = {0};
	{
		List_1_t580 * L_0 = (__this->___miceDesc_5);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t580 * L_1 = (__this->___miceDesc_5);
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
		List_1_t580 * L_5 = (__this->___miceDesc_5);
		NullCheck(L_5);
		ExplicitMouseDesc_t539 * L_6 = (ExplicitMouseDesc_t539 *)VirtFuncInvoker1< ExplicitMouseDesc_t539 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_5, 0);
		V_0 = L_6;
		List_1_t580 * L_7 = (__this->___miceDesc_5);
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32) */, L_7, 0);
		ExplicitMouseDesc_t539 * L_8 = V_0;
		MouseSpawnFromData_ProduceMouse_m3251(__this, L_8, /*hidden argument*/NULL);
		float L_9 = ___timeNow;
		ExplicitMouseDesc_t539 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___delayToNextMouse_4);
		__this->___nextSpawnTime_6 = ((float)((float)L_9+(float)L_11));
		return;
	}
}
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseMove_t530_m4426_MethodInfo_var;
extern "C" void MouseSpawnFromData_ProduceMouse_m3251 (MouseSpawnFromData_t556 * __this, ExplicitMouseDesc_t539 * ___emd, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisMouseMove_t530_m4426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484212);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	MouseMove_t530 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___mousePrototype_7);
		Vector3_t538  L_1 = {0};
		Vector3__ctor_m4179(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t802  L_2 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_3 = Object_Instantiate_m4306(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		MouseMove_t530 * L_5 = GameObject_GetComponent_TisMouseMove_t530_m4426(L_4, /*hidden argument*/GameObject_GetComponent_TisMouseMove_t530_m4426_MethodInfo_var);
		V_1 = L_5;
		MouseMove_t530 * L_6 = V_1;
		ExplicitMouseDesc_t539 * L_7 = ___emd;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___mouseType_0);
		ExplicitMouseDesc_t539 * L_9 = ___emd;
		NullCheck(L_9);
		int32_t L_10 = (L_9->___mouseHoleLocation_1);
		ExplicitMouseDesc_t539 * L_11 = ___emd;
		NullCheck(L_11);
		bool L_12 = (L_11->___isClockwise_2);
		ExplicitMouseDesc_t539 * L_13 = ___emd;
		NullCheck(L_13);
		int32_t L_14 = (L_13->___track_3);
		NullCheck(L_6);
		MouseMove_SetupMouse_m3212(L_6, L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		ExplicitMouseDesc_t539 * L_15 = ___emd;
		NullCheck(L_15);
		int32_t L_16 = ExplicitMouseDesc_get_wiggleType_m2909(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		MouseMove_t530 * L_17 = V_1;
		ExplicitMouseDesc_t539 * L_18 = ___emd;
		NullCheck(L_18);
		int32_t L_19 = ExplicitMouseDesc_get_wiggleType_m2909(L_18, /*hidden argument*/NULL);
		ExplicitMouseDesc_t539 * L_20 = ___emd;
		NullCheck(L_20);
		float L_21 = ExplicitMouseDesc_get_wiggleMagnitude_m2911(L_20, /*hidden argument*/NULL);
		ExplicitMouseDesc_t539 * L_22 = ___emd;
		NullCheck(L_22);
		int32_t L_23 = ExplicitMouseDesc_get_wiggleCycles_m2913(L_22, /*hidden argument*/NULL);
		ExplicitMouseDesc_t539 * L_24 = ___emd;
		NullCheck(L_24);
		bool L_25 = ExplicitMouseDesc_get_wiggleClockwise_m2915(L_24, /*hidden argument*/NULL);
		NullCheck(L_17);
		MouseMove_AddWiggle_m3213(L_17, L_19, L_21, L_23, L_25, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_26 = MouseSpawnFromData_get_miceSpawned_m3241(__this, /*hidden argument*/NULL);
		MouseSpawnFromData_set_miceSpawned_m3242(__this, ((int32_t)((int32_t)L_26+(int32_t)1)), /*hidden argument*/NULL);
		MouseSpawnEventHandler_t607 * L_27 = (__this->___MouseSpawn_9);
		if (!L_27)
		{
			goto IL_009c;
		}
	}
	{
		MouseSpawnEventHandler_t607 * L_28 = (__this->___MouseSpawn_9);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(11 /* System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke() */, L_28);
	}

IL_009c:
	{
		return;
	}
}
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m3252 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	{
		List_1_t580 * L_0 = (__this->___miceDesc_5);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_0);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void MouseSpawnFromData::Clear()
extern TypeInfo* List_1_t580_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4371_MethodInfo_var;
extern "C" void MouseSpawnFromData_Clear_m3253 (MouseSpawnFromData_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		List_1__ctor_m4371_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484162);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t580 * L_0 = (List_1_t580 *)il2cpp_codegen_object_new (List_1_t580_il2cpp_TypeInfo_var);
		List_1__ctor_m4371(L_0, /*hidden argument*/List_1__ctor_m4371_MethodInfo_var);
		__this->___miceDesc_5 = L_0;
		MouseSpawnFromData_set_miceSpawned_m3242(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern const MethodInfo* List_1_AddRange_m4399_MethodInfo_var;
extern "C" void MouseSpawnFromData_AddMice_m3254 (MouseSpawnFromData_t556 * __this, List_1_t580 * ___explicitMice, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m4399_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484189);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t580 * L_0 = (__this->___miceDesc_5);
		List_1_t580 * L_1 = ___explicitMice;
		NullCheck(L_0);
		List_1_AddRange_m4399(L_0, L_1, /*hidden argument*/List_1_AddRange_m4399_MethodInfo_var);
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
extern "C" void MouseSpawnTracker__ctor_m3255 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::Start()
extern "C" void MouseSpawnTracker_Start_m3256 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_RegisterForEvents_m3258(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateLevelConfig_m3262(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateSlider_m3263(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::OnDestroy()
extern "C" void MouseSpawnTracker_OnDestroy_m3257 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UnregisterForEvents_m3259(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::RegisterForEvents()
extern TypeInfo* MouseSpawnFromData_t556_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnMouseSpawned_m3261_MethodInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnLevelChanged_m3260_MethodInfo_var;
extern "C" void MouseSpawnTracker_RegisterForEvents_m3258 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		MouseSpawnTracker_OnMouseSpawned_m3261_MethodInfo_var = il2cpp_codegen_method_info_from_index(565);
		MouseSpawnTracker_OnLevelChanged_m3260_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
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
		MouseSpawnFromData_t556 * L_1 = ((MouseSpawnFromData_t556_StaticFields*)MouseSpawnFromData_t556_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MouseSpawnTracker_OnMouseSpawned_m3261_MethodInfo_var };
		MouseSpawnEventHandler_t607 * L_3 = (MouseSpawnEventHandler_t607 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m3234(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_add_MouseSpawn_m3239(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t560 * L_4 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseSpawnTracker_OnLevelChanged_m3260_MethodInfo_var };
		GameLevelChangedEventHandler_t559 * L_6 = (GameLevelChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2996(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_add_GameLevelChanged_m3001(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::UnregisterForEvents()
extern TypeInfo* MouseSpawnFromData_t556_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnMouseSpawned_m3261_MethodInfo_var;
extern const MethodInfo* MouseSpawnTracker_OnLevelChanged_m3260_MethodInfo_var;
extern "C" void MouseSpawnTracker_UnregisterForEvents_m3259 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		MouseSpawnTracker_OnMouseSpawned_m3261_MethodInfo_var = il2cpp_codegen_method_info_from_index(565);
		MouseSpawnTracker_OnLevelChanged_m3260_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
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
		MouseSpawnFromData_t556 * L_1 = ((MouseSpawnFromData_t556_StaticFields*)MouseSpawnFromData_t556_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MouseSpawnTracker_OnMouseSpawned_m3261_MethodInfo_var };
		MouseSpawnEventHandler_t607 * L_3 = (MouseSpawnEventHandler_t607 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t607_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m3234(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_remove_MouseSpawn_m3240(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t560 * L_4 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseSpawnTracker_OnLevelChanged_m3260_MethodInfo_var };
		GameLevelChangedEventHandler_t559 * L_6 = (GameLevelChangedEventHandler_t559 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2996(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_remove_GameLevelChanged_m3002(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void MouseSpawnTracker::OnLevelChanged()
extern "C" void MouseSpawnTracker_OnLevelChanged_m3260 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UpdateLevelConfig_m3262(__this, /*hidden argument*/NULL);
		MouseSpawnTracker_UpdateSlider_m3263(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::OnMouseSpawned()
extern "C" void MouseSpawnTracker_OnMouseSpawned_m3261 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	{
		MouseSpawnTracker_UpdateSlider_m3263(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnTracker::UpdateLevelConfig()
extern "C" void MouseSpawnTracker_UpdateLevelConfig_m3262 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	LevelDescription_t586 * V_1 = {0};
	{
		GameLevelState_t560 * L_0 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m3003(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		LevelConfig_t592 * L_3 = LevelConfig_get_instance_m3124(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		LevelDescription_t586 * L_4 = LevelConfig_GetCurrentLevelDescription_m3133(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		LevelDescription_t586 * L_5 = V_1;
		NullCheck(L_5);
		List_1_t580 * L_6 = (L_5->___explicitMouseDescs_1);
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
extern TypeInfo* MouseSpawnFromData_t556_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnTracker_UpdateSlider_m3263 (MouseSpawnTracker_t608 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		MouseSpawnFromData_t556 * L_0 = ((MouseSpawnFromData_t556_StaticFields*)MouseSpawnFromData_t556_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = MouseSpawnFromData_get_miceSpawned_m3241(L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___miceThisLevel_4);
		V_0 = ((float)((float)(((float)L_1))/(float)(((float)L_2))));
		Slider_t497 * L_3 = (__this->___slider_3);
		float L_4 = V_0;
		NullCheck(L_3);
		Slider_set_value_m4311(L_3, L_4, /*hidden argument*/NULL);
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
#define GameObject_GetComponent_TisAcceleratingSpinner_t491_m4427(__this, method) (( AcceleratingSpinner_t491 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void MouseTrap::.ctor()
extern "C" void MouseTrap__ctor_m3264 (MouseTrap_t609 * __this, const MethodInfo* method)
{
	{
		__this->___timeToSlide_9 = (0.5f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseTrap::Awake()
extern "C" void MouseTrap_Awake_m3265 (MouseTrap_t609 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MouseTrap::Start()
extern "C" void MouseTrap_Start_m3266 (MouseTrap_t609 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MouseTrap::Update()
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" void MouseTrap_Update_m3267 (MouseTrap_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
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
		float L_1 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Lerp_m4416(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t538 * L_9 = &(__this->___originalPosition_6);
		float L_10 = (L_9->___x_1);
		Vector3_t538 * L_11 = &(__this->___targetPosition_8);
		float L_12 = (L_11->___x_1);
		float L_13 = V_0;
		float L_14 = Mathf_Lerp_m4416(NULL /*static, unused*/, L_10, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Vector3_t538 * L_15 = &(__this->___originalPosition_6);
		float L_16 = (L_15->___y_2);
		Vector3_t538 * L_17 = &(__this->___targetPosition_8);
		float L_18 = (L_17->___y_2);
		float L_19 = V_0;
		float L_20 = Mathf_Lerp_m4416(NULL /*static, unused*/, L_16, L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_t538 * L_21 = &(__this->___originalPosition_6);
		float L_22 = (L_21->___z_3);
		Vector3_t538 * L_23 = &(__this->___targetPosition_8);
		float L_24 = (L_23->___z_3);
		float L_25 = V_0;
		float L_26 = Mathf_Lerp_m4416(NULL /*static, unused*/, L_22, L_24, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t406 * L_27 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_28 = V_1;
		Quaternion_t802  L_29 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localRotation_m4359(L_27, L_29, /*hidden argument*/NULL);
		Transform_t406 * L_30 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_31 = V_2;
		float L_32 = V_3;
		float L_33 = V_4;
		Vector3_t538  L_34 = {0};
		Vector3__ctor_m4179(&L_34, L_31, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m4345(L_30, L_34, /*hidden argument*/NULL);
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
extern "C" void MouseTrap_AnimateOut_m3268 (MouseTrap_t609 * __this, const MethodInfo* method)
{
	{
		MouseTrap_DoTrapDestructionFX_m3270(__this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		Object_Destroy_m4045(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseTrap::SlideTo(UnityEngine.Vector3,System.Single)
extern "C" void MouseTrap_SlideTo_m3269 (MouseTrap_t609 * __this, Vector3_t538  ___newPosition, float ___newRotation, const MethodInfo* method)
{
	Quaternion_t802  V_0 = {0};
	Vector3_t538  V_1 = {0};
	{
		Vector3_t538  L_0 = ___newPosition;
		__this->___targetPosition_8 = L_0;
		float L_1 = ___newRotation;
		__this->___targetRotation_7 = L_1;
		__this->___sliding_3 = 1;
		float L_2 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startSlideTime_4 = L_2;
		Transform_t406 * L_3 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t802  L_4 = Transform_get_localRotation_m4428(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t538  L_5 = Quaternion_get_eulerAngles_m4429((&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ((&V_1)->___z_3);
		__this->___originalRotation_5 = L_6;
		Transform_t406 * L_7 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t538  L_8 = Transform_get_localPosition_m4343(L_7, /*hidden argument*/NULL);
		__this->___originalPosition_6 = L_8;
		return;
	}
}
// System.Void MouseTrap::DoTrapDestructionFX()
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4407_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t549_m4409_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAcceleratingSpinner_t491_m4427_MethodInfo_var;
extern "C" void MouseTrap_DoTrapDestructionFX_m3270 (MouseTrap_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484200);
		GameObject_GetComponent_TisFlyingAnimation_t549_m4409_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484201);
		GameObject_GetComponent_TisAcceleratingSpinner_t491_m4427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484215);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t549 * V_1 = {0};
	AcceleratingSpinner_t491 * V_2 = {0};
	Vector3_t538  V_3 = {0};
	Vector3_t538  V_4 = {0};
	{
		SFXPlayer_t652 * L_0 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SFXPlayer_Play_m3547(L_0, 7, /*hidden argument*/NULL);
		GameObject_t352 * L_1 = (__this->___mouseTrapEffectPrototype_2);
		GameObject_t352 * L_2 = Object_Instantiate_TisGameObject_t352_m4407(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4407_MethodInfo_var);
		V_0 = L_2;
		GameObject_t352 * L_3 = V_0;
		NullCheck(L_3);
		FlyingAnimation_t549 * L_4 = GameObject_GetComponent_TisFlyingAnimation_t549_m4409(L_3, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t549_m4409_MethodInfo_var);
		V_1 = L_4;
		FlyingAnimation_t549 * L_5 = V_1;
		Transform_t406 * L_6 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t538  L_7 = Transform_get_position_m4186(L_6, /*hidden argument*/NULL);
		Vector3_t538  L_8 = {0};
		Vector3__ctor_m4179(&L_8, (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		FlyingAnimation_ConfigureWithViewportPos_m2952(L_5, L_7, L_8, /*hidden argument*/NULL);
		FlyingAnimation_t549 * L_9 = V_1;
		NullCheck(L_9);
		FlyingAnimation_Run_m2953(L_9, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = V_0;
		NullCheck(L_10);
		AcceleratingSpinner_t491 * L_11 = GameObject_GetComponent_TisAcceleratingSpinner_t491_m4427(L_10, /*hidden argument*/GameObject_GetComponent_TisAcceleratingSpinner_t491_m4427_MethodInfo_var);
		V_2 = L_11;
		AcceleratingSpinner_t491 * L_12 = V_2;
		Transform_t406 * L_13 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t538  L_14 = Transform_get_eulerAngles_m4430(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = ((&V_3)->___z_3);
		Camera_t548 * L_16 = Camera_get_main_m4152(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_t406 * L_17 = Component_get_transform_m4181(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t538  L_18 = Transform_get_eulerAngles_m4430(L_17, /*hidden argument*/NULL);
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

struct Resources_t804;
struct Material_t526;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
#define Resources_Load_TisMaterial_t526_m4431(__this /* static, unused */, p0, method) (( Material_t526 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4327_gshared)(__this /* static, unused */, p0, method)


// System.Void MouseTypeDesc::.ctor(System.String,System.String,System.Single,System.Single)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t512_m4326_MethodInfo_var;
extern const MethodInfo* Resources_Load_TisMaterial_t526_m4431_MethodInfo_var;
extern "C" void MouseTypeDesc__ctor_m3271 (MouseTypeDesc_t610 * __this, String_t* ___oldImageName, String_t* ___newImageName, float ___speed, float ___scale, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t512_m4326_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		Resources_Load_TisMaterial_t526_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484216);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___newImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1101, L_0, (String_t*) &_stringLiteral1102, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t512 * L_3 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___deadMouseSprite_0 = L_3;
		String_t* L_4 = ___newImageName;
		String_t* L_5 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1101, L_4, (String_t*) &_stringLiteral1103, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t512 * L_7 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___exitingMouseSprite_1 = L_7;
		String_t* L_8 = ___newImageName;
		String_t* L_9 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1104, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = V_0;
		Material_t526 * L_11 = Resources_Load_TisMaterial_t526_m4431(NULL /*static, unused*/, L_10, /*hidden argument*/Resources_Load_TisMaterial_t526_m4431_MethodInfo_var);
		__this->___mouseMaterial_3 = L_11;
		String_t* L_12 = ___newImageName;
		String_t* L_13 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1105, L_12, (String_t*) &_stringLiteral1106, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		Sprite_t512 * L_15 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_14, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
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
extern const MethodInfo* Resources_Load_TisSprite_t512_m4326_MethodInfo_var;
extern "C" void MouseWiggleDesc__ctor_m3272 (MouseWiggleDesc_t611 * __this, String_t* ___introScreenImageName, float ___minMagnitude, float ___maxMagnitude, int32_t ___minCycles, int32_t ___maxCycles, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t512_m4326_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___introScreenImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1107, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t512 * L_3 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
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
extern "C" void MusicButton__ctor_m3273 (MusicButton_t612 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t512_m4326_MethodInfo_var;
extern "C" void MusicButton_Awake_m3274 (MusicButton_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t512_m4326_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1108;
		String_t* L_0 = V_0;
		Sprite_t512 * L_1 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___onSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1109;
		String_t* L_2 = V_0;
		Sprite_t512 * L_3 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		__this->___offSprite_4 = L_3;
		return;
	}
}
// System.Void MusicButton::Start()
extern "C" void MusicButton_Start_m3275 (MusicButton_t612 * __this, const MethodInfo* method)
{
	{
		MusicButton_RegisterForEvents_m3277(__this, /*hidden argument*/NULL);
		MusicButton_UpdateButtonImage_m3280(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::OnDestroy()
extern "C" void MusicButton_OnDestroy_m3276 (MusicButton_t612 * __this, const MethodInfo* method)
{
	{
		MusicButton_UnregisterForEvents_m3278(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::RegisterForEvents()
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3279_MethodInfo_var;
extern "C" void MusicButton_RegisterForEvents_m3277 (MusicButton_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		MusicButton_OnMusicMuteChanged_m3279_MethodInfo_var = il2cpp_codegen_method_info_from_index(569);
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
		SoundController_t669 * L_1 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3279_MethodInfo_var };
		MusicMuteChangedEventHandler_t668 * L_3 = (MusicMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3648(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_MusicMuteChanged_m3655(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UnregisterForEvents()
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3279_MethodInfo_var;
extern "C" void MusicButton_UnregisterForEvents_m3278 (MusicButton_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		MusicButton_OnMusicMuteChanged_m3279_MethodInfo_var = il2cpp_codegen_method_info_from_index(569);
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
		SoundController_t669 * L_1 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3279_MethodInfo_var };
		MusicMuteChangedEventHandler_t668 * L_3 = (MusicMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3648(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_MusicMuteChanged_m3656(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MusicButton::OnMusicMuteChanged()
extern "C" void MusicButton_OnMusicMuteChanged_m3279 (MusicButton_t612 * __this, const MethodInfo* method)
{
	{
		MusicButton_UpdateButtonImage_m3280(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UpdateButtonImage()
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern "C" void MusicButton_UpdateButtonImage_m3280 (MusicButton_t612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t669 * L_0 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3659(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t503 * L_2 = (__this->___buttonImage_5);
		Sprite_t512 * L_3 = (__this->___offSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m4315(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t503 * L_4 = (__this->___buttonImage_5);
		Sprite_t512 * L_5 = (__this->___onSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m4315(L_4, L_5, /*hidden argument*/NULL);
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
extern "C" void U3CPlayMusicU3Ec__Iterator17__ctor_m3281 (U3CPlayMusicU3Ec__Iterator17_t615 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object MusicPlayer/<PlayMusic>c__Iterator17::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayMusicU3Ec__Iterator17_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3282 (U3CPlayMusicU3Ec__Iterator17_t615 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object MusicPlayer/<PlayMusic>c__Iterator17::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayMusicU3Ec__Iterator17_System_Collections_IEnumerator_get_Current_m3283 (U3CPlayMusicU3Ec__Iterator17_t615 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean MusicPlayer/<PlayMusic>c__Iterator17::MoveNext()
extern TypeInfo* WaitForSeconds_t799_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayMusicU3Ec__Iterator17_MoveNext_m3284 (U3CPlayMusicU3Ec__Iterator17_t615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		WaitForSeconds_t799 * L_2 = (WaitForSeconds_t799 *)il2cpp_codegen_object_new (WaitForSeconds_t799_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4284(L_2, (0.5f), /*hidden argument*/NULL);
		__this->___U24current_2 = L_2;
		__this->___U24PC_1 = 1;
		goto IL_0078;
	}

IL_003d:
	{
		MusicPlayer_t614 * L_3 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		L_3->___playCuedMusic_7 = (Object_t *)NULL;
		AudioSource_t613 * L_4 = (__this->___music_0);
		MusicPlayer_t614 * L_5 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_5);
		AudioSource_t613 * L_6 = (L_5->___currentMusic_6);
		bool L_7 = Object_op_Equality_m3926(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		AudioSource_t613 * L_8 = (__this->___music_0);
		NullCheck(L_8);
		AudioSource_Play_m4432(L_8, /*hidden argument*/NULL);
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
extern "C" void U3CPlayMusicU3Ec__Iterator17_Dispose_m3285 (U3CPlayMusicU3Ec__Iterator17_t615 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void MusicPlayer/<PlayMusic>c__Iterator17::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CPlayMusicU3Ec__Iterator17_Reset_m3286 (U3CPlayMusicU3Ec__Iterator17_t615 * __this, const MethodInfo* method)
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

// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandle.h"
// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandleMethodDeclarations.h"


// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m3287 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m3288 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_RegisterForEvents_m3290(__this, /*hidden argument*/NULL);
		MusicPlayer_UpdateAllMusic_m3295(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m3289 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UnregisterForEvents_m3291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3292_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3293_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnPauseChanged_m3294_MethodInfo_var;
extern "C" void MusicPlayer_RegisterForEvents_m3290 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		MusicPlayer_OnGamePhaseChanged_m3292_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
		MusicPlayer_OnMusicMuteChanged_m3293_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
		MusicPlayer_OnPauseChanged_m3294_MethodInfo_var = il2cpp_codegen_method_info_from_index(572);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3292_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t669 * L_4 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3293_MethodInfo_var };
		MusicMuteChangedEventHandler_t668 * L_6 = (MusicMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3648(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_add_MusicMuteChanged_m3655(L_4, L_6, /*hidden argument*/NULL);
		TimeController_t675 * L_7 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)MusicPlayer_OnPauseChanged_m3294_MethodInfo_var };
		TimeStateChangedEventHandler_t674 * L_9 = (TimeStateChangedEventHandler_t674 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3674(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		TimeController_add_TimeStateChanged_m3679(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3292_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3293_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnPauseChanged_m3294_MethodInfo_var;
extern "C" void MusicPlayer_UnregisterForEvents_m3291 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		MusicPlayer_OnGamePhaseChanged_m3292_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
		MusicPlayer_OnMusicMuteChanged_m3293_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
		MusicPlayer_OnPauseChanged_m3294_MethodInfo_var = il2cpp_codegen_method_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3292_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t669 * L_4 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3293_MethodInfo_var };
		MusicMuteChangedEventHandler_t668 * L_6 = (MusicMuteChangedEventHandler_t668 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t668_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3648(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_remove_MusicMuteChanged_m3656(L_4, L_6, /*hidden argument*/NULL);
		TimeController_t675 * L_7 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)MusicPlayer_OnPauseChanged_m3294_MethodInfo_var };
		TimeStateChangedEventHandler_t674 * L_9 = (TimeStateChangedEventHandler_t674 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3674(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		TimeController_remove_TimeStateChanged_m3680(L_7, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m3292 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3295(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m3293 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3295(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnPauseChanged()
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern "C" void MusicPlayer_OnPauseChanged_m3294 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t613 * L_0 = (__this->___currentMusic_6);
		bool L_1 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_0, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		TimeController_t675 * L_2 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		int32_t L_3 = TimeController_get_timeState_m3681(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		AudioSource_t613 * L_4 = (__this->___currentMusic_6);
		NullCheck(L_4);
		AudioSource_Pause_m4433(L_4, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_0031:
	{
		AudioSource_t613 * L_5 = (__this->___currentMusic_6);
		NullCheck(L_5);
		bool L_6 = AudioSource_get_isPlaying_m4434(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		AudioSource_t613 * L_7 = (__this->___currentMusic_6);
		NullCheck(L_7);
		AudioSource_Play_m4432(L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void MusicPlayer::UpdateAllMusic()
extern TypeInfo* SoundController_t669_il2cpp_TypeInfo_var;
extern "C" void MusicPlayer_UpdateAllMusic_m3295 (MusicPlayer_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t613 * V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = (AudioSource_t613 *)NULL;
		SoundController_t669 * L_0 = ((SoundController_t669_StaticFields*)SoundController_t669_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3659(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0061;
		}
	}
	{
		GamePhaseState_t564 * L_2 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3029(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 1)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 2)
		{
			goto IL_0055;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 3)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 4)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0055;
	}

IL_003d:
	{
		AudioSource_t613 * L_5 = (__this->___gameMusic_3);
		V_0 = L_5;
		goto IL_0061;
	}

IL_0049:
	{
		AudioSource_t613 * L_6 = (__this->___realAngusMusic_5);
		V_0 = L_6;
		goto IL_0061;
	}

IL_0055:
	{
		AudioSource_t613 * L_7 = (__this->___menuMusic_4);
		V_0 = L_7;
		goto IL_0061;
	}

IL_0061:
	{
		AudioSource_t613 * L_8 = V_0;
		AudioSource_t613 * L_9 = (__this->___currentMusic_6);
		bool L_10 = Object_op_Equality_m3926(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		AudioSource_t613 * L_11 = (__this->___currentMusic_6);
		bool L_12 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_11, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		AudioSource_t613 * L_13 = (__this->___currentMusic_6);
		NullCheck(L_13);
		bool L_14 = AudioSource_get_isPlaying_m4434(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009f;
		}
	}
	{
		AudioSource_t613 * L_15 = (__this->___currentMusic_6);
		NullCheck(L_15);
		AudioSource_Stop_m4145(L_15, /*hidden argument*/NULL);
	}

IL_009f:
	{
		Object_t * L_16 = (__this->___playCuedMusic_7);
		if (!L_16)
		{
			goto IL_00bd;
		}
	}
	{
		Object_t * L_17 = (__this->___playCuedMusic_7);
		MonoBehaviour_StopCoroutine_m4325(__this, L_17, /*hidden argument*/NULL);
		__this->___playCuedMusic_7 = (Object_t *)NULL;
	}

IL_00bd:
	{
		__this->___currentMusic_6 = (AudioSource_t613 *)NULL;
		AudioSource_t613 * L_18 = V_0;
		bool L_19 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00f0;
		}
	}
	{
		AudioSource_t613 * L_20 = V_0;
		__this->___currentMusic_6 = L_20;
		AudioSource_t613 * L_21 = V_0;
		Object_t * L_22 = MusicPlayer_PlayMusic_m3296(__this, L_21, /*hidden argument*/NULL);
		__this->___playCuedMusic_7 = L_22;
		Object_t * L_23 = (__this->___playCuedMusic_7);
		MonoBehaviour_StartCoroutine_m3864(__this, L_23, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		return;
	}
}
// System.Collections.IEnumerator MusicPlayer::PlayMusic(UnityEngine.AudioSource)
extern TypeInfo* U3CPlayMusicU3Ec__Iterator17_t615_il2cpp_TypeInfo_var;
extern "C" Object_t * MusicPlayer_PlayMusic_m3296 (MusicPlayer_t614 * __this, AudioSource_t613 * ___music, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayMusicU3Ec__Iterator17_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayMusicU3Ec__Iterator17_t615 * V_0 = {0};
	{
		U3CPlayMusicU3Ec__Iterator17_t615 * L_0 = (U3CPlayMusicU3Ec__Iterator17_t615 *)il2cpp_codegen_object_new (U3CPlayMusicU3Ec__Iterator17_t615_il2cpp_TypeInfo_var);
		U3CPlayMusicU3Ec__Iterator17__ctor_m3281(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayMusicU3Ec__Iterator17_t615 * L_1 = V_0;
		AudioSource_t613 * L_2 = ___music;
		NullCheck(L_1);
		L_1->___music_0 = L_2;
		U3CPlayMusicU3Ec__Iterator17_t615 * L_3 = V_0;
		AudioSource_t613 * L_4 = ___music;
		NullCheck(L_3);
		L_3->___U3CU24U3Emusic_3 = L_4;
		U3CPlayMusicU3Ec__Iterator17_t615 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CPlayMusicU3Ec__Iterator17_t615 * L_6 = V_0;
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
extern "C" void ParseAnalyticsController__ctor_m3297 (ParseAnalyticsController_t616 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::Start()
extern "C" void ParseAnalyticsController_Start_m3298 (ParseAnalyticsController_t616 * __this, const MethodInfo* method)
{
	{
		ParseAnalytics_TrackAppOpenedAsync_m4435(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseAnalyticsController_RegisterForEvents_m3300(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnDestroy()
extern "C" void ParseAnalyticsController_OnDestroy_m3299 (ParseAnalyticsController_t616 * __this, const MethodInfo* method)
{
	{
		ParseAnalyticsController_UnregisterForEvents_m3301(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3303_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3302_MethodInfo_var;
extern "C" void ParseAnalyticsController_RegisterForEvents_m3300 (ParseAnalyticsController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ParseAnalyticsController_OnGamePhaseChanged_m3303_MethodInfo_var = il2cpp_codegen_method_info_from_index(573);
		ParseAnalyticsController_OnBoostActive_m3302_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3303_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t496 * L_4 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3302_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_6 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2798(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3303_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3302_MethodInfo_var;
extern "C" void ParseAnalyticsController_UnregisterForEvents_m3301 (ParseAnalyticsController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ParseAnalyticsController_OnGamePhaseChanged_m3303_MethodInfo_var = il2cpp_codegen_method_info_from_index(573);
		ParseAnalyticsController_OnBoostActive_m3302_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3303_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t496 * L_4 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3302_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_6 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2799(L_4, L_6, /*hidden argument*/NULL);
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
extern TypeInfo* BoostType_t508_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3840_MethodInfo_var;
extern "C" void ParseAnalyticsController_OnBoostActive_m3302 (ParseAnalyticsController_t616 * __this, int32_t ___bType, int32_t ___oldType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		BoostType_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		Dictionary_2__ctor_m3840_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
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
		Dictionary_2__ctor_m3840(L_1, /*hidden argument*/Dictionary_2__ctor_m3840_MethodInfo_var);
		V_0 = L_1;
		Dictionary_2_t122 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t564 * L_4 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_instancesFinishedThisSession_m3033(L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m409(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral1110, L_8);
		Dictionary_2_t122 * L_9 = V_0;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t564 * L_11 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = GamePhaseState_get_instancesFinishedEver_m3035(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m409(NULL /*static, unused*/, L_10, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral1111, L_15);
		Dictionary_2_t122 * L_16 = V_0;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t560 * L_18 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = GameLevelState_get_gameLevel_m3003(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_m409(NULL /*static, unused*/, L_17, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_16, (String_t*) &_stringLiteral1112, L_22);
		Dictionary_2_t122 * L_23 = V_0;
		String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_25 = ___bType;
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(BoostType_t508_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral1113, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t516 * L_31 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_32 = ___bType;
		NullCheck(L_31);
		int32_t L_33 = PlayerStats_GetPurchasedBoostCount_m3412(L_31, L_32, /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = String_Concat_m409(NULL /*static, unused*/, L_30, L_35, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1114, L_36);
		Dictionary_2_t122 * L_37 = V_0;
		ParseAnalytics_TrackEventAsync_m4436(NULL /*static, unused*/, (String_t*) &_stringLiteral1115, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnGamePhaseChanged()
extern "C" void ParseAnalyticsController_OnGamePhaseChanged_m3303 (ParseAnalyticsController_t616 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		ParseAnalyticsController_LogGameOverEvent_m3304(__this, /*hidden argument*/NULL);
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
extern const MethodInfo* Dictionary_2__ctor_m3840_MethodInfo_var;
extern "C" void ParseAnalyticsController_LogGameOverEvent_m3304 (ParseAnalyticsController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Dictionary_2__ctor_m3840_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
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
		Dictionary_2__ctor_m3840(L_0, /*hidden argument*/Dictionary_2__ctor_m3840_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t122 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t564 * L_3 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GamePhaseState_get_instancesFinishedThisSession_m3033(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m409(NULL /*static, unused*/, L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral1110, L_7);
		Dictionary_2_t122 * L_8 = V_0;
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t564 * L_10 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = GamePhaseState_get_instancesFinishedEver_m3035(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m409(NULL /*static, unused*/, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral1111, L_14);
		Dictionary_2_t122 * L_15 = V_0;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t516 * L_17 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = PlayerStats_get_gameScore_m3395(L_17, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_m409(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral542, L_21);
		Dictionary_2_t122 * L_22 = V_0;
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t516 * L_24 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = PlayerStats_get_money_m3397(L_24, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_22, (String_t*) &_stringLiteral1116, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t560 * L_31 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = GameLevelState_get_gameLevel_m3003(L_31, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35 = String_Concat_m409(NULL /*static, unused*/, L_30, L_34, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1112, L_35);
		Dictionary_2_t122 * L_36 = V_0;
		PlayerStats_t516 * L_37 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = PlayerStats_GetHighScore_m3416(L_37, /*hidden argument*/NULL);
		PlayerStats_t516 * L_39 = PlayerStats_get_instance_m3399(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40 = PlayerStats_get_gameScore_m3395(L_39, /*hidden argument*/NULL);
		G_B1_0 = (String_t*) &_stringLiteral1117;
		G_B1_1 = L_36;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_40))))
		{
			G_B2_0 = (String_t*) &_stringLiteral1117;
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
		ParseAnalytics_TrackEventAsync_m4436(NULL /*static, unused*/, (String_t*) &_stringLiteral1118, L_41, /*hidden argument*/NULL);
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
extern "C" void PausePlayToggle__ctor_m3305 (PausePlayToggle_t617 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::TogglePausePlay()
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern TypeInfo* PausedOverlay_t618_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_TogglePausePlay_m3306 (PausePlayToggle_t617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		PausedOverlay_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t675 * L_0 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = TimeController_get_timeState_m3681(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		TimeController_t675 * L_2 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		TimeController_SetTimeState_m3684(L_2, 2, /*hidden argument*/NULL);
		PausedOverlay_t618 * L_3 = ((PausedOverlay_t618_StaticFields*)PausedOverlay_t618_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		PausedOverlay_ShowBigPlayButton_m3314(L_3, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_002a:
	{
		TimeController_t675 * L_4 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_4);
		TimeController_SetTimeState_m3684(L_4, 0, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"


// System.Void PausedOverlay::.ctor()
extern "C" void PausedOverlay__ctor_m3307 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Awake()
extern TypeInfo* PausedOverlay_t618_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_Awake_m3308 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PausedOverlay_t618_StaticFields*)PausedOverlay_t618_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		__this->___registeredForEvents_6 = 0;
		Button_t501 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3901(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m4101(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Start()
extern "C" void PausedOverlay_Start_m3309 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_RegisterForEvents_m3310(__this, /*hidden argument*/NULL);
		PausedOverlay_UpdateUX_m3313(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::RegisterForEvents()
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3312_MethodInfo_var;
extern "C" void PausedOverlay_RegisterForEvents_m3310 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		PausedOverlay_OnPauseChanged_m3312_MethodInfo_var = il2cpp_codegen_method_info_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t675 * L_0 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_1 = { (void*)PausedOverlay_OnPauseChanged_m3312_MethodInfo_var };
		TimeStateChangedEventHandler_t674 * L_2 = (TimeStateChangedEventHandler_t674 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3674(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TimeController_add_TimeStateChanged_m3679(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_6 = 1;
		return;
	}
}
// System.Void PausedOverlay::UnregisterForEvents()
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3312_MethodInfo_var;
extern "C" void PausedOverlay_UnregisterForEvents_m3311 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		PausedOverlay_OnPauseChanged_m3312_MethodInfo_var = il2cpp_codegen_method_info_from_index(575);
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
		TimeController_t675 * L_1 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)PausedOverlay_OnPauseChanged_m3312_MethodInfo_var };
		TimeStateChangedEventHandler_t674 * L_3 = (TimeStateChangedEventHandler_t674 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t674_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3674(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimeController_remove_TimeStateChanged_m3680(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PausedOverlay::OnPauseChanged()
extern "C" void PausedOverlay_OnPauseChanged_m3312 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_UpdateUX_m3313(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::UpdateUX()
extern TypeInfo* TimeController_t675_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_UpdateUX_m3313 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t675 * L_0 = ((TimeController_t675_StaticFields*)TimeController_t675_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = TimeController_get_timeState_m3681(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___overlay_3);
		NullCheck(L_2);
		GameObject_SetActive_m4101(L_2, 1, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_0020:
	{
		GameObject_t352 * L_3 = (__this->___overlay_3);
		NullCheck(L_3);
		GameObject_SetActive_m4101(L_3, 0, /*hidden argument*/NULL);
		Button_t501 * L_4 = (__this->___bigPlayButton_4);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3901(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m4101(L_5, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = (__this->___childElement_5);
		bool L_7 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_6, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		GameObject_t352 * L_8 = (__this->___childElement_5);
		NullCheck(L_8);
		Transform_t406 * L_9 = GameObject_get_transform_m4184(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetParent_m4307(L_9, (Transform_t406 *)NULL, 0, /*hidden argument*/NULL);
		__this->___childElement_5 = (GameObject_t352 *)NULL;
	}

IL_0067:
	{
		return;
	}
}
// System.Void PausedOverlay::ShowBigPlayButton()
extern "C" void PausedOverlay_ShowBigPlayButton_m3314 (PausedOverlay_t618 * __this, const MethodInfo* method)
{
	{
		Button_t501 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3901(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m4101(L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::SetChildElement(UnityEngine.GameObject)
extern "C" void PausedOverlay_SetChildElement_m3315 (PausedOverlay_t618 * __this, GameObject_t352 * ___newChildElement, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___newChildElement;
		__this->___childElement_5 = L_0;
		Button_t501 * L_1 = (__this->___bigPlayButton_4);
		NullCheck(L_1);
		GameObject_t352 * L_2 = Component_get_gameObject_m3901(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m4101(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___childElement_5);
		bool L_4 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_3, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GameObject_t352 * L_5 = (__this->___childElement_5);
		NullCheck(L_5);
		Transform_t406 * L_6 = GameObject_get_transform_m4184(L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_7 = (__this->___overlay_3);
		NullCheck(L_7);
		Transform_t406 * L_8 = GameObject_get_transform_m4184(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m4307(L_6, L_8, 0, /*hidden argument*/NULL);
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
extern "C" void PawCollider__ctor_m3316 (PawCollider_t620 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3317 (PawCollider_t620 * __this, Collider2D_t713 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t713 * L_0 = ___other;
		PawCollider_HandleCollision_m3319(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3318 (PawCollider_t620 * __this, Collider2D_t713 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t713 * L_0 = ___other;
		PawCollider_HandleCollision_m3319(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421_MethodInfo_var;
extern "C" void PawCollider_HandleCollision_m3319 (PawCollider_t620 * __this, Collider2D_t713 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484209);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t530 * V_0 = {0};
	{
		Collider2D_t713 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4364(L_0, /*hidden argument*/NULL);
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
		Collider2D_t713 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3901(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		MouseMove_t530 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t530_m4421_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t530 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m3185(L_6, /*hidden argument*/NULL);
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
		DeadMouseRelay_t532 * L_8 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		MouseMove_t530 * L_9 = V_0;
		NullCheck(L_8);
		DeadMouseRelay_HandleMouseKill_m2876(L_8, L_9, /*hidden argument*/NULL);
		PawController_t619 * L_10 = (__this->___pawController_2);
		bool L_11 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		PawController_t619 * L_12 = (__this->___pawController_2);
		NullCheck(L_12);
		PawController_CountKill_m3340(L_12, /*hidden argument*/NULL);
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
struct TimerWidget_t623;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TimerWidget>()
// !!0 UnityEngine.GameObject::GetComponent<TimerWidget>()
#define GameObject_GetComponent_TisTimerWidget_t623_m4437(__this, method) (( TimerWidget_t623 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m3320 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m3321 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_17 = 0;
		return;
	}
}
// System.Void PawController::Start()
extern "C" void PawController_Start_m3322 (PawController_t619 * __this, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		__this->___swipePhase_4 = 0;
		__this->___swipeSpeed_14 = (14.0f);
		__this->___initialPauseLength_15 = (0.5f);
		Transform_t406 * L_0 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Transform_t406 * L_1 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_1);
		Vector3_t538  L_2 = Transform_get_localPosition_m4343(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m4345(L_0, L_2, /*hidden argument*/NULL);
		Transform_t406 * L_3 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_3);
		Vector3_t538  L_4 = Transform_get_localPosition_m4343(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Vector3_get_magnitude_m4413((&V_0), /*hidden argument*/NULL);
		__this->___pawHomeCatTransformMagnitude_20 = L_5;
		CircleCollider2D_t622 * L_6 = (__this->___normalCollider_11);
		NullCheck(L_6);
		CircleCollider2D_set_radius_m4438(L_6, (0.4f), /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_7 = (__this->___bigCollider_12);
		CircleCollider2D_t622 * L_8 = (__this->___normalCollider_11);
		NullCheck(L_8);
		float L_9 = CircleCollider2D_get_radius_m4439(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		CircleCollider2D_set_radius_m4438(L_7, ((float)((float)L_9*(float)(2.0f))), /*hidden argument*/NULL);
		PawController_RegisterForEvents_m3324(__this, /*hidden argument*/NULL);
		PawController_UpdatePawState_m3330(__this, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3332(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m3323 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		PawController_UnregisterForEvents_m3325(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3326_MethodInfo_var;
extern "C" void PawController_RegisterForEvents_m3324 (PawController_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PawController_OnBoostUsageChanged_m3326_MethodInfo_var = il2cpp_codegen_method_info_from_index(576);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)PawController_OnBoostUsageChanged_m3326_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_2 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2798(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_17 = 1;
		return;
	}
}
// System.Void PawController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3326_MethodInfo_var;
extern "C" void PawController_UnregisterForEvents_m3325 (PawController_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PawController_OnBoostUsageChanged_m3326_MethodInfo_var = il2cpp_codegen_method_info_from_index(576);
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
		BoostConfig_t496 * L_1 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PawController_OnBoostUsageChanged_m3326_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_3 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2799(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m3326 (PawController_t619 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
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
		__this->___initialPauseLength_15 = (0.1f);
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
		PawController_UpdatePawState_m3330(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void PawController::Update()
extern "C" void PawController_Update_m3327 (PawController_t619 * __this, const MethodInfo* method)
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
		float L_1 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___timeStartNextSwipe_5);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		__this->___timeStartNextSwipe_5 = (0.0f);
		Vector3_t538  L_3 = (__this->___nextSwipeLocationCat_2);
		__this->___currentSwipeLocationCat_3 = L_3;
		PawController_SetPhase_m3328(__this, 1, /*hidden argument*/NULL);
	}

IL_003e:
	{
		PawController_UpdateTimerWidget_m3338(__this, /*hidden argument*/NULL);
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
		Vector3_t538  L_6 = (__this->___currentSwipeLocationCat_3);
		bool L_7 = PawController_MovePawTowards_m3331(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		PawController_RemoveTimer_m3339(__this, /*hidden argument*/NULL);
		PawController_SetPhase_m3328(__this, 2, /*hidden argument*/NULL);
	}

IL_0080:
	{
		goto IL_00c0;
	}

IL_0085:
	{
		float L_8 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = V_0;
		float L_10 = (__this->___extendedPauseStarted_6);
		if ((!(((float)((float)((float)L_9-(float)L_10))) > ((float)(0.1f)))))
		{
			goto IL_00a4;
		}
	}
	{
		PawController_SetPhase_m3328(__this, 0, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		goto IL_00c0;
	}

IL_00a9:
	{
		Transform_t406 * L_11 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_11);
		Vector3_t538  L_12 = Transform_get_localPosition_m4343(L_11, /*hidden argument*/NULL);
		PawController_MovePawTowards_m3331(__this, L_12, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_00c0:
	{
		return;
	}
}
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern TypeInfo* DeadMouseRelay_t532_il2cpp_TypeInfo_var;
extern "C" void PawController_SetPhase_m3328 (PawController_t619 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
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
		DeadMouseRelay_t532 * L_4 = ((DeadMouseRelay_t532_StaticFields*)DeadMouseRelay_t532_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_5 = (__this->___killsThisSwipe_16);
		Transform_t406 * L_6 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t538  L_7 = Transform_get_position_m4186(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		DeadMouseRelay_HandleMultiKill_m2875(L_4, L_5, L_7, /*hidden argument*/NULL);
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
		float L_9 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___extendedPauseStarted_6 = L_9;
		PawController_PlayRandomSound_m3329(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		PawController_UpdatePawState_m3330(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::PlayRandomSound()
extern "C" void PawController_PlayRandomSound_m3329 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t652 * L_0 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t652 * L_1 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		SFXTypeU5BU5D_t651* L_2 = (L_1->___slapIds_5);
		NullCheck(L_0);
		SFXPlayer_PlayRandom_m3549(L_0, L_2, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m3330 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2802(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_2);
		GameObject_SetActive_m4101(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_3);
		GameObject_SetActive_m4101(L_3, 0, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_4 = (__this->___normalCollider_11);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3901(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m4101(L_5, 0, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_6 = (__this->___bigCollider_12);
		NullCheck(L_6);
		GameObject_t352 * L_7 = Component_get_gameObject_m3901(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m4101(L_7, 1, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___swipePhase_4);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_007f;
		}
	}
	{
		GameObject_t352 * L_9 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_9);
		GameObject_SetActive_m4101(L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_10);
		GameObject_SetActive_m4101(L_10, 0, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_11 = (__this->___bigCollider_12);
		NullCheck(L_11);
		Collider2D_set_isTrigger_m4440(L_11, 1, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_007f:
	{
		GameObject_t352 * L_12 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_12);
		GameObject_SetActive_m4101(L_12, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_13 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_13);
		GameObject_SetActive_m4101(L_13, 1, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_14 = (__this->___bigCollider_12);
		NullCheck(L_14);
		Collider2D_set_isTrigger_m4440(L_14, 0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		goto IL_013b;
	}

IL_00a8:
	{
		GameObject_t352 * L_15 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_15);
		GameObject_SetActive_m4101(L_15, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_16 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_16);
		GameObject_SetActive_m4101(L_16, 0, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_17 = (__this->___bigCollider_12);
		NullCheck(L_17);
		GameObject_t352 * L_18 = Component_get_gameObject_m3901(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m4101(L_18, 0, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_19 = (__this->___normalCollider_11);
		NullCheck(L_19);
		GameObject_t352 * L_20 = Component_get_gameObject_m3901(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_m4101(L_20, 1, /*hidden argument*/NULL);
		int32_t L_21 = (__this->___swipePhase_4);
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_0117;
		}
	}
	{
		GameObject_t352 * L_22 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_22);
		GameObject_SetActive_m4101(L_22, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_23 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_23);
		GameObject_SetActive_m4101(L_23, 0, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_24 = (__this->___normalCollider_11);
		NullCheck(L_24);
		Collider2D_set_isTrigger_m4440(L_24, 1, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0117:
	{
		GameObject_t352 * L_25 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_25);
		GameObject_SetActive_m4101(L_25, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_26 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_26);
		GameObject_SetActive_m4101(L_26, 1, /*hidden argument*/NULL);
		CircleCollider2D_t622 * L_27 = (__this->___normalCollider_11);
		NullCheck(L_27);
		Collider2D_set_isTrigger_m4440(L_27, 0, /*hidden argument*/NULL);
	}

IL_013b:
	{
		return;
	}
}
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m3331 (PawController_t619 * __this, Vector3_t538  ___targetLocationCat, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t538  V_1 = {0};
	Vector3_t538  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t538  V_6 = {0};
	bool V_7 = false;
	Vector3_t538  V_8 = {0};
	{
		(&___targetLocationCat)->___z_3 = (0.0f);
		float L_0 = Vector3_get_magnitude_m4413((&___targetLocationCat), /*hidden argument*/NULL);
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
		Transform_t406 * L_3 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t538  L_4 = Transform_get_localPosition_m4343(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t538  L_5 = ___targetLocationCat;
		Vector3_t538  L_6 = V_1;
		Vector3_t538  L_7 = Vector3_op_Subtraction_m4441(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (__this->___swipeSpeed_14);
		float L_10 = V_3;
		V_4 = ((float)((float)L_9*(float)L_10));
		float L_11 = Vector3_get_magnitude_m4413((&V_2), /*hidden argument*/NULL);
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
		Vector3_t538  L_15 = ___targetLocationCat;
		V_6 = L_15;
		V_7 = 1;
		goto IL_008f;
	}

IL_0071:
	{
		Vector3_t538  L_16 = V_2;
		float L_17 = V_4;
		Vector3_t538  L_18 = Vector3_op_Multiply_m4191(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = V_5;
		Vector3_t538  L_20 = Vector3_op_Division_m4442(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		Vector3_t538  L_21 = V_1;
		Vector3_t538  L_22 = V_8;
		Vector3_t538  L_23 = Vector3_op_Addition_m4344(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		V_7 = 0;
	}

IL_008f:
	{
		Transform_t406 * L_24 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Vector3_t538  L_25 = V_6;
		NullCheck(L_24);
		Transform_set_localPosition_m4345(L_24, L_25, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3332(__this, /*hidden argument*/NULL);
		bool L_26 = V_7;
		return L_26;
	}
}
// System.Void PawController::UpdateArmRotation()
extern TypeInfo* Mathf_t741_il2cpp_TypeInfo_var;
extern "C" void PawController_UpdateArmRotation_m3332 (PawController_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t538  V_0 = {0};
	float V_1 = 0.0f;
	{
		Transform_t406 * L_0 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t538  L_1 = Transform_get_localPosition_m4343(L_0, /*hidden argument*/NULL);
		Transform_t406 * L_2 = (__this->___shoulderJointCatTransform_19);
		NullCheck(L_2);
		Vector3_t538  L_3 = Transform_get_localPosition_m4343(L_2, /*hidden argument*/NULL);
		Vector3_t538  L_4 = Vector3_op_Subtraction_m4441(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		float L_6 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t741_il2cpp_TypeInfo_var);
		float L_7 = atan2f(L_5, L_6);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_9 = V_1;
		Quaternion_t802  L_10 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_9*(float)(57.29578f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_m4359(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m3333 (PawController_t619 * __this, Vector3_t538  ___location, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = ___location;
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
		float L_2 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___initialPauseLength_15);
		__this->___timeStartNextSwipe_5 = ((float)((float)L_2+(float)L_3));
	}

IL_002f:
	{
		return;
	}
}
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m3334 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		PawController_RemoveTimer_m3339(__this, /*hidden argument*/NULL);
		PawController_SetPhase_m3328(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::AddTimer()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTimerWidget_t623_m4437_MethodInfo_var;
extern "C" void PawController_AddTimer_m3335 (PawController_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisTimerWidget_t623_m4437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484225);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		PawController_RemoveTimer_m3339(__this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = (__this->___timerWidgetPrototype_21);
		Vector3_t538  L_1 = {0};
		Vector3__ctor_m4179(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t802  L_2 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_3 = Object_Instantiate_m4306(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		TimerWidget_t623 * L_5 = GameObject_GetComponent_TisTimerWidget_t623_m4437(L_4, /*hidden argument*/GameObject_GetComponent_TisTimerWidget_t623_m4437_MethodInfo_var);
		__this->___timerWidget_22 = L_5;
		TimerWidget_t623 * L_6 = (__this->___timerWidget_22);
		float L_7 = (__this->___initialPauseLength_15);
		Vector3_t538  L_8 = PawController_GetTimerWidgetPosition_m3336(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TimerWidget_Configure_m3693(L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 PawController::GetTimerWidgetPosition()
extern "C" Vector3_t538  PawController_GetTimerWidgetPosition_m3336 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t406 * L_1 = Transform_get_parent_m4443(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t406 * L_2 = Component_get_transform_m4181(L_1, /*hidden argument*/NULL);
		Vector3_t538  L_3 = (__this->___nextSwipeLocationCat_2);
		NullCheck(L_2);
		Vector3_t538  L_4 = Transform_TransformVector_m4444(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean PawController::ShouldHaveTimer()
extern "C" bool PawController_ShouldHaveTimer_m3337 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___timeStartNextSwipe_5);
		return ((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
// System.Void PawController::UpdateTimerWidget()
extern "C" void PawController_UpdateTimerWidget_m3338 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		bool L_0 = PawController_ShouldHaveTimer_m3337(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		TimerWidget_t623 * L_1 = (__this->___timerWidget_22);
		bool L_2 = Object_op_Equality_m3926(NULL /*static, unused*/, L_1, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		PawController_AddTimer_m3335(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		TimerWidget_t623 * L_3 = (__this->___timerWidget_22);
		Vector3_t538  L_4 = PawController_GetTimerWidgetPosition_m3336(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TimerWidget_UpdatePosition_m3694(L_3, L_4, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0038:
	{
		TimerWidget_t623 * L_5 = (__this->___timerWidget_22);
		bool L_6 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_5, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		PawController_RemoveTimer_m3339(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void PawController::RemoveTimer()
extern "C" void PawController_RemoveTimer_m3339 (PawController_t619 * __this, const MethodInfo* method)
{
	{
		TimerWidget_t623 * L_0 = (__this->___timerWidget_22);
		bool L_1 = Object_op_Inequality_m3822(NULL /*static, unused*/, L_0, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		TimerWidget_t623 * L_2 = (__this->___timerWidget_22);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3901(L_2, /*hidden argument*/NULL);
		Object_Destroy_m4045(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___timerWidget_22 = (TimerWidget_t623 *)NULL;
	}

IL_0028:
	{
		return;
	}
}
// System.Void PawController::CountKill()
extern "C" void PawController_CountKill_m3340 (PawController_t619 * __this, const MethodInfo* method)
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
extern "C" void PersistentStorage__ctor_m3341 (PersistentStorage_t624 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::Awake()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_Awake_m3342 (PersistentStorage_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void PersistentStorage::ClearAll()
extern "C" void PersistentStorage_ClearAll_m3343 (PersistentStorage_t624 * __this, const MethodInfo* method)
{
	{
		PlayerPrefs_DeleteAll_m4445(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::SetFloatValue(System.String,System.Single)
extern "C" void PersistentStorage_SetFloatValue_m3344 (PersistentStorage_t624 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		PlayerPrefs_SetFloat_m4446(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single PersistentStorage::GetFloatValue(System.String,System.Single)
extern "C" float PersistentStorage_GetFloatValue_m3345 (PersistentStorage_t624 * __this, String_t* ___name, float ___defaultValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___defaultValue;
		float L_2 = PlayerPrefs_GetFloat_m4447(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern "C" void PersistentStorage_SetIntValue_m3346 (PersistentStorage_t624 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		PlayerPrefs_SetInt_m4448(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern "C" int32_t PersistentStorage_GetIntValue_m3347 (PersistentStorage_t624 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___defaultValue;
		int32_t L_2 = PlayerPrefs_GetInt_m4449(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m3348 (PersistentStorage_t624 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
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
		PlayerPrefs_SetInt_m4448(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern "C" bool PersistentStorage_GetBoolValue_m3349 (PersistentStorage_t624 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method)
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
		int32_t L_3 = PlayerPrefs_GetInt_m4449(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
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
extern "C" void PlayButtonClickSound__ctor_m3350 (PlayButtonClickSound_t625 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayButtonClickSound::Play()
extern "C" void PlayButtonClickSound_Play_m3351 (PlayButtonClickSound_t625 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t652 * L_0 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SFXPlayer_Play_m3547(L_0, 2, /*hidden argument*/NULL);
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
extern "C" void PlayLevelHandler__ctor_m3352 (PlayLevelHandler_t626 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayLevelHandler::Play()
extern "C" void PlayLevelHandler_Play_m3353 (PlayLevelHandler_t626 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_TransitionToPhase_m3048(L_0, 2, /*hidden argument*/NULL);
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

struct GameObject_t352;
struct PawController_t619;
// Declaration !!0 UnityEngine.GameObject::GetComponent<PawController>()
// !!0 UnityEngine.GameObject::GetComponent<PawController>()
#define GameObject_GetComponent_TisPawController_t619_m4450(__this, method) (( PawController_t619 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)
struct GameObject_t352;
struct FartPuff_t541;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
// !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
#define GameObject_GetComponent_TisFartPuff_t541_m4451(__this, method) (( FartPuff_t541 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3354 (PlayerController_t628 * __this, const MethodInfo* method)
{
	{
		__this->___startCatAngle_2 = (45.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController/BodyMovementType PlayerController::get_bodyMovement()
extern "C" int32_t PlayerController_get_bodyMovement_m3355 (PlayerController_t628 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CbodyMovementU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void PlayerController::set_bodyMovement(PlayerController/BodyMovementType)
extern "C" void PlayerController_set_bodyMovement_m3356 (PlayerController_t628 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CbodyMovementU3Ek__BackingField_17 = L_0;
		return;
	}
}
// PlayerController PlayerController::get_instance()
extern TypeInfo* PlayerController_t628_il2cpp_TypeInfo_var;
extern "C" PlayerController_t628 * PlayerController_get_instance_m3357 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t628 * L_0 = ((PlayerController_t628_StaticFields*)PlayerController_t628_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void PlayerController::set_instance(PlayerController)
extern TypeInfo* PlayerController_t628_il2cpp_TypeInfo_var;
extern "C" void PlayerController_set_instance_m3358 (Object_t * __this /* static, unused */, PlayerController_t628 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(562);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t628 * L_0 = ___value;
		((PlayerController_t628_StaticFields*)PlayerController_t628_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void PlayerController::Awake()
extern TypeInfo* TipConfig_t513_il2cpp_TypeInfo_var;
extern "C" void PlayerController_Awake_m3359 (PlayerController_t628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_instance_m3358(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerController_set_bodyMovement_m3356(__this, 0, /*hidden argument*/NULL);
		TipConfig_t513 * L_0 = (TipConfig_t513 *)il2cpp_codegen_object_new (TipConfig_t513_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3700(L_0, (String_t*) &_stringLiteral1119, (String_t*) &_stringLiteral1120, /*hidden argument*/NULL);
		__this->___turningTip_13 = L_0;
		return;
	}
}
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3360 (PlayerController_t628 * __this, const MethodInfo* method)
{
	{
		PlayerController_RegisterForEvents_m3362(__this, /*hidden argument*/NULL);
		PlayerController_Reset_m3366(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3361 (PlayerController_t628 * __this, const MethodInfo* method)
{
	{
		PlayerController_UnregisterForEvents_m3363(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3364_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3365_MethodInfo_var;
extern "C" void PlayerController_RegisterForEvents_m3362 (PlayerController_t628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PlayerController_OnInstanceChanged_m3364_MethodInfo_var = il2cpp_codegen_method_info_from_index(578);
		PlayerController_OnBoostActive_m3365_MethodInfo_var = il2cpp_codegen_method_info_from_index(579);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3364_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_3 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m3025(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t496 * L_4 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3365_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_6 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2798(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3364_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3365_MethodInfo_var;
extern "C" void PlayerController_UnregisterForEvents_m3363 (PlayerController_t628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		BoostActiveEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		PlayerController_OnInstanceChanged_m3364_MethodInfo_var = il2cpp_codegen_method_info_from_index(578);
		PlayerController_OnBoostActive_m3365_MethodInfo_var = il2cpp_codegen_method_info_from_index(579);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3364_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_3 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3026(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t496 * L_4 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3365_MethodInfo_var };
		BoostActiveEventHandler_t509 * L_6 = (BoostActiveEventHandler_t509 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t509_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2787(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2799(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3364 (PlayerController_t628 * __this, const MethodInfo* method)
{
	{
		PlayerController_Reset_m3366(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3365 (PlayerController_t628 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3374(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3366 (PlayerController_t628 * __this, const MethodInfo* method)
{
	{
		PlayerController_set_bodyMovement_m3356(__this, 0, /*hidden argument*/NULL);
		float L_0 = (__this->___startCatAngle_2);
		__this->___currentTurnAngleDegrees_9 = L_0;
		float L_1 = (__this->___currentTurnAngleDegrees_9);
		__this->___targetTurnAngleDegrees_8 = L_1;
		Transform_t406 * L_2 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___currentTurnAngleDegrees_9);
		Quaternion_t802  L_4 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m4294(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3367 (PlayerController_t628 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		PlayerController_MaybeMakeFartPuff_m3373(__this, /*hidden argument*/NULL);
		int32_t L_0 = PlayerController_get_bodyMovement_m3355(__this, /*hidden argument*/NULL);
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
		PlayerController_UpdateDrag_m3369(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_002b:
	{
		PlayerController_UpdateTurn_m3368(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0036:
	{
		return;
	}
}
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3368 (PlayerController_t628 * __this, const MethodInfo* method)
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
		float L_3 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		PlayerController_set_bodyMovement_m3356(__this, 0, /*hidden argument*/NULL);
	}

IL_004d:
	{
		goto IL_008e;
	}

IL_0052:
	{
		float L_7 = (__this->___currentTurnAngleDegrees_9);
		float L_8 = Time_get_deltaTime_m4292(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		PlayerController_set_bodyMovement_m3356(__this, 0, /*hidden argument*/NULL);
	}

IL_008e:
	{
		Transform_t406 * L_12 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_13 = (__this->___currentTurnAngleDegrees_9);
		Quaternion_t802  L_14 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m4294(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UpdateDrag()
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern "C" void PlayerController_UpdateDrag_m3369 (PlayerController_t628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t538  V_0 = {0};
	bool V_1 = false;
	Vector3_t538  V_2 = {0};
	Vector3_t538  V_3 = {0};
	float V_4 = 0.0f;
	{
		InputHandler_t575 * L_0 = InputHandler_get_instance_m3102(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InputHandler_GetWorldClickPosition_m3112(L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		PlayerController_set_bodyMovement_m3356(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_001b:
	{
		Camera_t548 * L_3 = Camera_get_main_m4152(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t538  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t538  L_5 = Camera_ScreenToWorldPoint_m4187(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Vector3_t538  L_7 = V_2;
		NullCheck(L_6);
		Vector3_t538  L_8 = Transform_InverseTransformPoint_m4452(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t538  L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		float L_10 = Utilities_GetZAngle_m3744(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Transform_t406 * L_11 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		float L_12 = V_4;
		float L_13 = (__this->___dragAnchorAngleCat_11);
		Vector3_t538  L_14 = {0};
		Vector3__ctor_m4179(&L_14, (0.0f), (0.0f), ((float)((float)L_12-(float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m4453(L_11, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var;
extern "C" void PlayerController_HandleDragClickStart_m3370 (PlayerController_t628 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484228);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_bodyMovement_m3356(__this, 2, /*hidden argument*/NULL);
		Transform_t406 * L_0 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Vector2_t110  L_1 = ___worldPoint2d;
		Vector3_t538  L_2 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t538  L_3 = Transform_InverseTransformPoint_m4452(L_0, L_2, /*hidden argument*/NULL);
		__this->___dragAnchorCat_10 = L_3;
		Vector3_t538 * L_4 = &(__this->___dragAnchorCat_10);
		L_4->___z_3 = (0.0f);
		Vector3_t538  L_5 = (__this->___dragAnchorCat_10);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		float L_6 = Utilities_GetZAngle_m3744(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___dragAnchorAngleCat_11 = L_6;
		GameObject_t352 * L_7 = (__this->___rightPawGameObject_3);
		NullCheck(L_7);
		PawController_t619 * L_8 = GameObject_GetComponent_TisPawController_t619_m4450(L_7, /*hidden argument*/GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var);
		NullCheck(L_8);
		PawController_CancelSwipe_m3334(L_8, /*hidden argument*/NULL);
		GameObject_t352 * L_9 = (__this->___leftPawGameObject_4);
		NullCheck(L_9);
		PawController_t619 * L_10 = GameObject_GetComponent_TisPawController_t619_m4450(L_9, /*hidden argument*/GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var);
		NullCheck(L_10);
		PawController_CancelSwipe_m3334(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern TypeInfo* TipController_t680_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var;
extern "C" void PlayerController_HandleSlapClickStart_m3371 (PlayerController_t628 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484228);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t538  V_0 = {0};
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	Quaternion_t802  V_3 = {0};
	Vector3_t538  V_4 = {0};
	{
		Vector2_t110  L_0 = ___worldPoint2d;
		GameObject_t352 * L_1 = PlayerController_GetPawToHitWorldLocation_m3375(__this, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		GameObject_t352 * L_2 = V_2;
		bool L_3 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_t352 * L_4 = V_2;
		NullCheck(L_4);
		PawController_t619 * L_5 = GameObject_GetComponent_TisPawController_t619_m4450(L_4, /*hidden argument*/GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var);
		Vector3_t538  L_6 = V_0;
		NullCheck(L_5);
		PawController_Swipe_m3333(L_5, L_6, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0028:
	{
		Transform_t406 * L_7 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t802  L_8 = Transform_get_rotation_m4336(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t538  L_9 = Quaternion_get_eulerAngles_m4429((&V_3), /*hidden argument*/NULL);
		V_4 = L_9;
		float L_10 = ((&V_4)->___z_3);
		__this->___currentTurnAngleDegrees_9 = L_10;
		float L_11 = V_1;
		float L_12 = (__this->___currentTurnAngleDegrees_9);
		__this->___targetTurnAngleDegrees_8 = ((float)((float)L_11+(float)L_12));
		PlayerController_set_bodyMovement_m3356(__this, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_13 = (__this->___rightPawGameObject_3);
		NullCheck(L_13);
		PawController_t619 * L_14 = GameObject_GetComponent_TisPawController_t619_m4450(L_13, /*hidden argument*/GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var);
		NullCheck(L_14);
		PawController_CancelSwipe_m3334(L_14, /*hidden argument*/NULL);
		GameObject_t352 * L_15 = (__this->___leftPawGameObject_4);
		NullCheck(L_15);
		PawController_t619 * L_16 = GameObject_GetComponent_TisPawController_t619_m4450(L_15, /*hidden argument*/GameObject_GetComponent_TisPawController_t619_m4450_MethodInfo_var);
		NullCheck(L_16);
		PawController_CancelSwipe_m3334(L_16, /*hidden argument*/NULL);
		GameLevelState_t560 * L_17 = GameLevelState_get_instance_m3005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = GameLevelState_get_gameLevel_m3003(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		TipController_t680 * L_19 = ((TipController_t680_StaticFields*)TipController_t680_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t513 * L_20 = (__this->___turningTip_13);
		float L_21 = (__this->___turningTipPause_14);
		NullCheck(L_19);
		TipController_EnqueueTip_m3715(L_19, L_20, L_21, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		HeadMovement_t573 * L_22 = (__this->___headMovement_5);
		Vector3_t538  L_23 = V_0;
		NullCheck(L_22);
		HeadMovement_LookTowards_m3095(L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3372 (PlayerController_t628 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		DebugConfig_t533 * L_1 = DebugConfig_get_instance_m2878(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (L_1->___useDebugValues_4);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		PlayerController_set_bodyMovement_m3356(__this, 0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3373 (PlayerController_t628 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t496 * L_0 = BoostConfig_get_instance_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2802(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___lastFartTime_15);
		float L_4 = (__this->___fartPause_16);
		if ((!(((float)L_2) > ((float)((float)((float)L_3+(float)L_4))))))
		{
			goto IL_002d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3374(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PlayerController::MakeFartPuff()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFartPuff_t541_m4451_MethodInfo_var;
extern "C" void PlayerController_MakeFartPuff_m3374 (PlayerController_t628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisFartPuff_t541_m4451_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484229);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FartPuff_t541 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___fartPuffPrototype_6);
		GameObject_t352 * L_1 = (__this->___butthole_7);
		NullCheck(L_1);
		Transform_t406 * L_2 = GameObject_get_transform_m4184(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t538  L_3 = Transform_get_position_m4186(L_2, /*hidden argument*/NULL);
		Quaternion_t802  L_4 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_5 = Object_Instantiate_m4306(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_5, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_6 = V_0;
		NullCheck(L_6);
		FartPuff_t541 * L_7 = GameObject_GetComponent_TisFartPuff_t541_m4451(L_6, /*hidden argument*/GameObject_GetComponent_TisFartPuff_t541_m4451_MethodInfo_var);
		V_1 = L_7;
		FartPuff_t541 * L_8 = V_1;
		Transform_t406 * L_9 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t802  L_10 = Transform_get_rotation_m4336(L_9, /*hidden argument*/NULL);
		Vector3_t538  L_11 = Vector3_get_left_m4454(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t538  L_12 = Quaternion_op_Multiply_m4418(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		FartPuff_SetDirection_m2932(L_8, L_12, /*hidden argument*/NULL);
		float L_13 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastFartTime_15 = L_13;
		return;
	}
}
// UnityEngine.GameObject PlayerController::GetPawToHitWorldLocation(UnityEngine.Vector2,UnityEngine.Vector3&,System.Single&)
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* ConeOfViewController_t524_il2cpp_TypeInfo_var;
extern "C" GameObject_t352 * PlayerController_GetPawToHitWorldLocation_m3375 (PlayerController_t628 * __this, Vector2_t110  ___worldPoint2d, Vector3_t538 * ___swipeLocationCat, float* ___angle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		ConeOfViewController_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t538 * L_0 = ___swipeLocationCat;
		Transform_t406 * L_1 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		Vector2_t110  L_2 = ___worldPoint2d;
		Vector3_t538  L_3 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t538  L_4 = Transform_InverseTransformPoint_m4452(L_1, L_3, /*hidden argument*/NULL);
		*L_0 = L_4;
		float* L_5 = ___angle;
		*((float*)(L_5)) = (float)(0.0f);
		Vector3_t538 * L_6 = ___swipeLocationCat;
		float L_7 = Vector3_get_magnitude_m4413(L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) > ((float)(4.6f)))))
		{
			goto IL_004b;
		}
	}
	{
		Vector3_t538 * L_8 = ___swipeLocationCat;
		Vector3_t538 * L_9 = ___swipeLocationCat;
		Vector3_t538 * L_10 = ___swipeLocationCat;
		float L_11 = Vector3_get_magnitude_m4413(L_10, /*hidden argument*/NULL);
		Vector3_t538  L_12 = Vector3_op_Multiply_m4191(NULL /*static, unused*/, (*(Vector3_t538 *)L_9), ((float)((float)(4.6f)/(float)L_11)), /*hidden argument*/NULL);
		*L_8 = L_12;
	}

IL_004b:
	{
		float* L_13 = ___angle;
		Vector3_t538 * L_14 = ___swipeLocationCat;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		float L_15 = Utilities_GetZAngle_m3744(NULL /*static, unused*/, (*(Vector3_t538 *)L_14), /*hidden argument*/NULL);
		*((float*)(L_13)) = (float)L_15;
		float* L_16 = ___angle;
		if ((!(((float)(*((float*)L_16))) >= ((float)(0.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		float* L_17 = ___angle;
		ConeOfViewController_t524 * L_18 = ((ConeOfViewController_t524_StaticFields*)ConeOfViewController_t524_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_18);
		float L_19 = ConeOfViewController_get_actualAngleRange_m2836(L_18, /*hidden argument*/NULL);
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
		ConeOfViewController_t524 * L_23 = ((ConeOfViewController_t524_StaticFields*)ConeOfViewController_t524_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_23);
		float L_24 = ConeOfViewController_get_actualAngleRange_m2836(L_23, /*hidden argument*/NULL);
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
extern "C" void ScoreChangedEventHandler__ctor_m3376 (ScoreChangedEventHandler_t629 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m3377 (ScoreChangedEventHandler_t629 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreChangedEventHandler_Invoke_m3377((ScoreChangedEventHandler_t629 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t629(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m3378 (ScoreChangedEventHandler_t629 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m3379 (ScoreChangedEventHandler_t629 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerStats/MoneyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MoneyChangedEventHandler__ctor_m3380 (MoneyChangedEventHandler_t630 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/MoneyChangedEventHandler::Invoke()
extern "C" void MoneyChangedEventHandler_Invoke_m3381 (MoneyChangedEventHandler_t630 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MoneyChangedEventHandler_Invoke_m3381((MoneyChangedEventHandler_t630 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MoneyChangedEventHandler_t630(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/MoneyChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MoneyChangedEventHandler_BeginInvoke_m3382 (MoneyChangedEventHandler_t630 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/MoneyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MoneyChangedEventHandler_EndInvoke_m3383 (MoneyChangedEventHandler_t630 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void BoostsChangedEventHandler__ctor_m3384 (BoostsChangedEventHandler_t631 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m3385 (BoostsChangedEventHandler_t631 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostsChangedEventHandler_Invoke_m3385((BoostsChangedEventHandler_t631 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t631(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m3386 (BoostsChangedEventHandler_t631 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m3387 (BoostsChangedEventHandler_t631 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m3388 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t629_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_ScoreChanged_m3389 (PlayerStats_t516 * __this, ScoreChangedEventHandler_t629 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t629 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t629 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t629 *)Castclass(L_2, ScoreChangedEventHandler_t629_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t629_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_ScoreChanged_m3390 (PlayerStats_t516 * __this, ScoreChangedEventHandler_t629 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t629 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t629 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t629 *)Castclass(L_2, ScoreChangedEventHandler_t629_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_MoneyChanged_m3391 (PlayerStats_t516 * __this, MoneyChangedEventHandler_t630 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t630 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t630 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t630 *)Castclass(L_2, MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_MoneyChanged_m3392 (PlayerStats_t516 * __this, MoneyChangedEventHandler_t630 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t630 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t630 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t630 *)Castclass(L_2, MoneyChangedEventHandler_t630_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t631_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_BoostsChanged_m3393 (PlayerStats_t516 * __this, BoostsChangedEventHandler_t631 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t631 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t631 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t631 *)Castclass(L_2, BoostsChangedEventHandler_t631_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t631_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_BoostsChanged_m3394 (PlayerStats_t516 * __this, BoostsChangedEventHandler_t631 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t631 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t631 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t631 *)Castclass(L_2, BoostsChangedEventHandler_t631_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 PlayerStats::get_gameScore()
extern "C" int32_t PlayerStats_get_gameScore_m3395 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameScoreU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void PlayerStats::set_gameScore(System.Int32)
extern "C" void PlayerStats_set_gameScore_m3396 (PlayerStats_t516 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameScoreU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 PlayerStats::get_money()
extern "C" int32_t PlayerStats_get_money_m3397 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmoneyU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void PlayerStats::set_money(System.Int32)
extern "C" void PlayerStats_set_money_m3398 (PlayerStats_t516 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmoneyU3Ek__BackingField_10 = L_0;
		return;
	}
}
// PlayerStats PlayerStats::get_instance()
extern TypeInfo* PlayerStats_t516_il2cpp_TypeInfo_var;
extern "C" PlayerStats_t516 * PlayerStats_get_instance_m3399 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t516 * L_0 = ((PlayerStats_t516_StaticFields*)PlayerStats_t516_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void PlayerStats::set_instance(PlayerStats)
extern TypeInfo* PlayerStats_t516_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_set_instance_m3400 (Object_t * __this /* static, unused */, PlayerStats_t516 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(566);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t516 * L_0 = ___value;
		((PlayerStats_t516_StaticFields*)PlayerStats_t516_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m3401 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	{
		PlayerStats_set_instance_m3400(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerStats_Reset_m3408(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m3402 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	{
		PlayerStats_RegisterForEvents_m3404(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m3403 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	{
		PlayerStats_UnregisterForEvents_m3405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3406_MethodInfo_var;
extern "C" void PlayerStats_RegisterForEvents_m3404 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		PlayerStats_OnInstanceChanged_m3406_MethodInfo_var = il2cpp_codegen_method_info_from_index(582);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3406_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_3 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m3025(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3406_MethodInfo_var;
extern "C" void PlayerStats_UnregisterForEvents_m3405 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		PlayerStats_OnInstanceChanged_m3406_MethodInfo_var = il2cpp_codegen_method_info_from_index(582);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3406_MethodInfo_var };
		GameInstanceChangedEventHandler_t562 * L_3 = (GameInstanceChangedEventHandler_t562 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t562_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3010(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3026(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m3406 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	{
		PlayerStats_Reset_m3408(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m3407 (PlayerStats_t516 * __this, int32_t ___increment, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_gameScore_m3395(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___increment;
		PlayerStats_set_gameScore_m3396(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		ScoreChangedEventHandler_t629 * L_3 = (__this->___ScoreChanged_6);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ScoreChangedEventHandler_t629 * L_4 = (__this->___ScoreChanged_6);
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
extern "C" void PlayerStats_Reset_m3408 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_set_gameScore_m3396(__this, 0, /*hidden argument*/NULL);
		int32_t L_0 = TweakableParams_GetInitialMoney_m3724(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerStats_set_money_m3398(__this, L_0, /*hidden argument*/NULL);
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
		int32_t L_5 = TweakableParams_GetInitialBoosts_m3725(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		MoneyChangedEventHandler_t630 * L_8 = (__this->___MoneyChanged_7);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		MoneyChangedEventHandler_t630 * L_9 = (__this->___MoneyChanged_7);
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_9);
	}

IL_0068:
	{
		ScoreChangedEventHandler_t629 * L_10 = (__this->___ScoreChanged_6);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		ScoreChangedEventHandler_t629 * L_11 = (__this->___ScoreChanged_6);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_11);
	}

IL_007e:
	{
		BoostsChangedEventHandler_t631 * L_12 = (__this->___BoostsChanged_8);
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		BoostsChangedEventHandler_t631 * L_13 = (__this->___BoostsChanged_8);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_13);
	}

IL_0094:
	{
		return;
	}
}
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m3409 (PlayerStats_t516 * __this, int32_t ___price, const MethodInfo* method)
{
	{
		int32_t L_0 = PlayerStats_get_money_m3397(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___price;
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerStats::EarnMoney(System.Int32)
extern "C" void PlayerStats_EarnMoney_m3410 (PlayerStats_t516 * __this, int32_t ___earnedMoney, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_money_m3397(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___earnedMoney;
		PlayerStats_set_money_m3398(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		MoneyChangedEventHandler_t630 * L_3 = (__this->___MoneyChanged_7);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		MoneyChangedEventHandler_t630 * L_4 = (__this->___MoneyChanged_7);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::SpendMoney(System.Int32)
extern "C" void PlayerStats_SpendMoney_m3411 (PlayerStats_t516 * __this, int32_t ___spentMoney, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_money_m3397(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___spentMoney;
		PlayerStats_set_money_m3398(__this, ((int32_t)((int32_t)L_1-(int32_t)L_2)), /*hidden argument*/NULL);
		int32_t L_3 = PlayerStats_get_money_m3397(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		PlayerStats_set_money_m3398(__this, 0, /*hidden argument*/NULL);
	}

IL_0028:
	{
		MoneyChangedEventHandler_t630 * L_4 = (__this->___MoneyChanged_7);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		MoneyChangedEventHandler_t630 * L_5 = (__this->___MoneyChanged_7);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_5);
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m3412 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method)
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
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m3413 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method)
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
extern "C" void PlayerStats_AddBoost_m3414 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method)
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
		BoostsChangedEventHandler_t631 * L_7 = (__this->___BoostsChanged_8);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		BoostsChangedEventHandler_t631 * L_8 = (__this->___BoostsChanged_8);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_8);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m3415 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method)
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
		BoostsChangedEventHandler_t631 * L_9 = (__this->___BoostsChanged_8);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		BoostsChangedEventHandler_t631 * L_10 = (__this->___BoostsChanged_8);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(11 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetHighScore()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" int32_t PlayerStats_GetHighScore_m3416 (PlayerStats_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3347(L_0, (String_t*) &_stringLiteral1121, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerStats::SetHighScore(System.Int32)
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_SetHighScore_m3417 (PlayerStats_t516 * __this, int32_t ___highScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_1 = ___highScore;
		NullCheck(L_0);
		PersistentStorage_SetIntValue_m3346(L_0, (String_t*) &_stringLiteral1121, L_1, /*hidden argument*/NULL);
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
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18__ctor_m3418 (U3CWaitAndShowDialogU3Ec__Iterator18_t633 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object RateMeController/<WaitAndShowDialog>c__Iterator18::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitAndShowDialogU3Ec__Iterator18_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3419 (U3CWaitAndShowDialogU3Ec__Iterator18_t633 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object RateMeController/<WaitAndShowDialog>c__Iterator18::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitAndShowDialogU3Ec__Iterator18_System_Collections_IEnumerator_get_Current_m3420 (U3CWaitAndShowDialogU3Ec__Iterator18_t633 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean RateMeController/<WaitAndShowDialog>c__Iterator18::MoveNext()
extern TypeInfo* WaitForSeconds_t799_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitAndShowDialogU3Ec__Iterator18_MoveNext_m3421 (U3CWaitAndShowDialogU3Ec__Iterator18_t633 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		RateMeController_t632 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___waitToShow_5);
		WaitForSeconds_t799 * L_4 = (WaitForSeconds_t799 *)il2cpp_codegen_object_new (WaitForSeconds_t799_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4284(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0058;
	}

IL_0043:
	{
		RateMeController_t632 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		RateMeController_MaybeShowRateMeDialog_m3431(L_5, /*hidden argument*/NULL);
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
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18_Dispose_m3422 (U3CWaitAndShowDialogU3Ec__Iterator18_t633 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void RateMeController/<WaitAndShowDialog>c__Iterator18::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CWaitAndShowDialogU3Ec__Iterator18_Reset_m3423 (U3CWaitAndShowDialogU3Ec__Iterator18_t633 * __this, const MethodInfo* method)
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
extern "C" void RateMeController__ctor_m3424 (RateMeController_t632 * __this, const MethodInfo* method)
{
	{
		__this->___launchFrequency_2 = 1;
		__this->___minTimeFrequencySec_3 = (60.0000038f);
		__this->___waitToShow_5 = (3.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::Start()
extern "C" void RateMeController_Start_m3425 (RateMeController_t632 * __this, const MethodInfo* method)
{
	{
		RateMeController_RegisterForEvents_m3427(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::OnDestroy()
extern "C" void RateMeController_OnDestroy_m3426 (RateMeController_t632 * __this, const MethodInfo* method)
{
	{
		RateMeController_UnregisterForEvents_m3428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* RateMeController_OnGamePhaseChanged_m3429_MethodInfo_var;
extern "C" void RateMeController_RegisterForEvents_m3427 (RateMeController_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		RateMeController_OnGamePhaseChanged_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(583);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RateMeController_OnGamePhaseChanged_m3429_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* RateMeController_OnGamePhaseChanged_m3429_MethodInfo_var;
extern "C" void RateMeController_UnregisterForEvents_m3428 (RateMeController_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		RateMeController_OnGamePhaseChanged_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(583);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RateMeController_OnGamePhaseChanged_m3429_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void RateMeController::OnGamePhaseChanged()
extern "C" void RateMeController_OnGamePhaseChanged_m3429 (RateMeController_t632 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_2 = RateMeController_WaitAndShowDialog_m3430(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3864(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Collections.IEnumerator RateMeController::WaitAndShowDialog()
extern TypeInfo* U3CWaitAndShowDialogU3Ec__Iterator18_t633_il2cpp_TypeInfo_var;
extern "C" Object_t * RateMeController_WaitAndShowDialog_m3430 (RateMeController_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitAndShowDialogU3Ec__Iterator18_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitAndShowDialogU3Ec__Iterator18_t633 * V_0 = {0};
	{
		U3CWaitAndShowDialogU3Ec__Iterator18_t633 * L_0 = (U3CWaitAndShowDialogU3Ec__Iterator18_t633 *)il2cpp_codegen_object_new (U3CWaitAndShowDialogU3Ec__Iterator18_t633_il2cpp_TypeInfo_var);
		U3CWaitAndShowDialogU3Ec__Iterator18__ctor_m3418(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAndShowDialogU3Ec__Iterator18_t633 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CWaitAndShowDialogU3Ec__Iterator18_t633 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean RateMeController::MaybeShowRateMeDialog()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern "C" bool RateMeController_MaybeShowRateMeDialog_m3431 (RateMeController_t632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	GameObject_t352 * V_5 = {0};
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m3349(L_0, (String_t*) &_stringLiteral1122, 0, /*hidden argument*/NULL);
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
		PersistentStorage_t624 * L_3 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		int32_t L_4 = PersistentStorage_GetIntValue_m3347(L_3, (String_t*) &_stringLiteral1058, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		PersistentStorage_t624 * L_5 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_5);
		int32_t L_6 = PersistentStorage_GetIntValue_m3347(L_5, (String_t*) &_stringLiteral1123, 0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		float L_10 = Utilities_SecondsSinceEpoch_m3755(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_10;
		PersistentStorage_t624 * L_11 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_11);
		float L_12 = PersistentStorage_GetFloatValue_m3345(L_11, (String_t*) &_stringLiteral1124, (0.0f), /*hidden argument*/NULL);
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
		GamePhaseState_t564 * L_16 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = GamePhaseState_get_gamePhase_m3029(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)3)))
		{
			goto IL_008a;
		}
	}
	{
		return 0;
	}

IL_008a:
	{
		GameObject_t352 * L_18 = (__this->___rateMeDialogPrototype_4);
		Vector3_t538  L_19 = {0};
		Vector3__ctor_m4179(&L_19, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t802  L_20 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_21 = Object_Instantiate_m4306(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		V_5 = ((GameObject_t352 *)IsInst(L_21, GameObject_t352_il2cpp_TypeInfo_var));
		DialogController_t535 * L_22 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_23 = V_5;
		NullCheck(L_22);
		DialogController_ShowDialog_m2891(L_22, L_23, /*hidden argument*/NULL);
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
extern "C" void RateMeDialog__ctor_m3432 (RateMeDialog_t634 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::Start()
extern "C" void RateMeDialog_Start_m3433 (RateMeDialog_t634 * __this, const MethodInfo* method)
{
	{
		RateMeDialog_RecordShowTime_m3434(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RecordShowTime()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RecordShowTime_m3434 (RateMeDialog_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3347(L_0, (String_t*) &_stringLiteral1058, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		float L_2 = Utilities_SecondsSinceEpoch_m3755(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		PersistentStorage_t624 * L_3 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PersistentStorage_SetIntValue_m3346(L_3, (String_t*) &_stringLiteral1123, L_4, /*hidden argument*/NULL);
		PersistentStorage_t624 * L_5 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		float L_6 = V_1;
		NullCheck(L_5);
		PersistentStorage_SetFloatValue_m3344(L_5, (String_t*) &_stringLiteral1124, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RateThis()
extern TypeInfo* RatingsHelper_t635_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RateThis_m3435 (RateMeDialog_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t635 * L_0 = ((RatingsHelper_t635_StaticFields*)RatingsHelper_t635_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m3441(L_0, /*hidden argument*/NULL);
		PersistentStorage_t624 * L_1 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3348(L_1, (String_t*) &_stringLiteral1122, 1, /*hidden argument*/NULL);
		DialogController_t535 * L_2 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		DialogController_HideDialog_m2892(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RemindMeLater()
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RemindMeLater_m3436 (RateMeDialog_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t535 * L_0 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m2892(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::NoThanks()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_NoThanks_m3437 (RateMeDialog_t634 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		PersistentStorage_SetBoolValue_m3348(L_0, (String_t*) &_stringLiteral1122, 1, /*hidden argument*/NULL);
		DialogController_t535 * L_1 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_2 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DialogController_HideDialog_m2892(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void RatingsHelper::.ctor()
extern "C" void RatingsHelper__ctor_m3438 (RatingsHelper_t635 * __this, const MethodInfo* method)
{
	{
		__this->___iosAppID_2 = (String_t*) &_stringLiteral1125;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RatingsHelper::Awake()
extern TypeInfo* RatingsHelper_t635_il2cpp_TypeInfo_var;
extern "C" void RatingsHelper_Awake_m3439 (RatingsHelper_t635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RatingsHelper_t635_StaticFields*)RatingsHelper_t635_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.String RatingsHelper::GetStorePageURL()
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RatingsHelper_GetStorePageURL_m3440 (RatingsHelper_t635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Application_get_platform_m3914(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		float L_1 = Utilities_GetIOSVersion_m3754(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1126, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002d:
	{
		String_t* L_5 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1127, L_5, (String_t*) &_stringLiteral1128, /*hidden argument*/NULL);
		return L_6;
	}

IL_0043:
	{
		String_t* L_7 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1129, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void RatingsHelper::ShowRatingsPage()
extern "C" void RatingsHelper_ShowRatingsPage_m3441 (RatingsHelper_t635 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = RatingsHelper_GetStorePageURL_m3440(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		Application_OpenURL_m4105(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// RealAngusButton
#include "AssemblyU2DCSharp_RealAngusButton.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusButton
#include "AssemblyU2DCSharp_RealAngusButtonMethodDeclarations.h"

// RealAngusData/RealAngusDataChangedEventHandler
#include "AssemblyU2DCSharp_RealAngusData_RealAngusDataChangedEventHan.h"
// System.Collections.Generic.List`1<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDesc.h"
// RealAngusData/RealAngusDataChangedEventHandler
#include "AssemblyU2DCSharp_RealAngusData_RealAngusDataChangedEventHanMethodDeclarations.h"
// System.Collections.Generic.List`1<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDescMethodDeclarations.h"


// System.Void RealAngusButton::.ctor()
extern "C" void RealAngusButton__ctor_m3442 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::Start()
extern "C" void RealAngusButton_Start_m3443 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	{
		RealAngusButton_RegisterForEvents_m3446(__this, /*hidden argument*/NULL);
		RealAngusButton_UpdateDisplay_m3449(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::Update()
extern "C" void RealAngusButton_Update_m3444 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RealAngusButton::OnDestroy()
extern "C" void RealAngusButton_OnDestroy_m3445 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	{
		RealAngusButton_UnregisterForEvents_m3447(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusButton_UpdateDisplay_m3449_MethodInfo_var;
extern "C" void RealAngusButton_RegisterForEvents_m3446 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		RealAngusButton_UpdateDisplay_m3449_MethodInfo_var = il2cpp_codegen_method_info_from_index(584);
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
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RealAngusButton_UpdateDisplay_m3449_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3027(L_1, L_3, /*hidden argument*/NULL);
		RealAngusData_t644 * L_4 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_5 = { (void*)RealAngusButton_UpdateDisplay_m3449_MethodInfo_var };
		RealAngusDataChangedEventHandler_t642 * L_6 = (RealAngusDataChangedEventHandler_t642 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3466(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RealAngusData_add_RealAngusDataChanged_m3471(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusButton_UpdateDisplay_m3449_MethodInfo_var;
extern "C" void RealAngusButton_UnregisterForEvents_m3447 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		RealAngusButton_UpdateDisplay_m3449_MethodInfo_var = il2cpp_codegen_method_info_from_index(584);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_3);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		GamePhaseState_t564 * L_1 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RealAngusButton_UpdateDisplay_m3449_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_3 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_1, L_3, /*hidden argument*/NULL);
		RealAngusData_t644 * L_4 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_5 = { (void*)RealAngusButton_UpdateDisplay_m3449_MethodInfo_var };
		RealAngusDataChangedEventHandler_t642 * L_6 = (RealAngusDataChangedEventHandler_t642 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3466(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RealAngusData_remove_RealAngusDataChanged_m3472(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void RealAngusButton::OnEnable()
extern "C" void RealAngusButton_OnEnable_m3448 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	{
		RealAngusButton_UpdateDisplay_m3449(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::UpdateDisplay()
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern "C" void RealAngusButton_UpdateDisplay_m3449 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t643 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RealAngusData_t644 * L_0 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		bool L_1 = Object_op_Equality_m3926(NULL /*static, unused*/, L_0, (Object_t717 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		RealAngusData_t644 * L_2 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_2);
		List_1_t643 * L_3 = RealAngusData_GetRealAngusItemDescs_m3476(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		List_1_t643 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_0059;
	}

IL_002c:
	{
		List_1_t643 * L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		RealAngusItemDesc_t646 * L_7 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_5, L_6);
		NullCheck(L_7);
		bool L_8 = RealAngusItemDesc_get_unlocked_m3510(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		List_1_t643 * L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RealAngusItemDesc_t646 * L_11 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_9, L_10);
		NullCheck(L_11);
		bool L_12 = RealAngusItemDesc_get_viewed_m3512(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0055;
		}
	}
	{
		V_1 = 1;
		goto IL_0065;
	}

IL_0055:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0059:
	{
		int32_t L_14 = V_2;
		List_1_t643 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_002c;
		}
	}

IL_0065:
	{
		GameObject_t352 * L_17 = (__this->___newLabel_2);
		bool L_18 = V_1;
		NullCheck(L_17);
		GameObject_SetActive_m4101(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::ShowRealAngusPage()
extern "C" void RealAngusButton_ShowRealAngusPage_m3450 (RealAngusButton_t636 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_TransitionToPhase_m3048(L_0, 5, /*hidden argument*/NULL);
		return;
	}
}
// RealAngusController
#include "AssemblyU2DCSharp_RealAngusController.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusController
#include "AssemblyU2DCSharp_RealAngusControllerMethodDeclarations.h"

// RealAngusElementButton
#include "AssemblyU2DCSharp_RealAngusElementButton.h"
// System.Collections.Generic.List`1<RealAngusElementButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// RealAngusSelectedButtonParent
#include "AssemblyU2DCSharp_RealAngusSelectedButtonParent.h"
// RealAngusTextWidget
#include "AssemblyU2DCSharp_RealAngusTextWidget.h"
// RealAngusElementButton/ButtonHandler
#include "AssemblyU2DCSharp_RealAngusElementButton_ButtonHandler.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialog.h"
// System.Collections.Generic.List`1<RealAngusElementButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// RealAngusElementButton
#include "AssemblyU2DCSharp_RealAngusElementButtonMethodDeclarations.h"
// RealAngusTextWidget
#include "AssemblyU2DCSharp_RealAngusTextWidgetMethodDeclarations.h"
// RealAngusElementButton/ButtonHandler
#include "AssemblyU2DCSharp_RealAngusElementButton_ButtonHandlerMethodDeclarations.h"
// RealAngusSelectedButtonParent
#include "AssemblyU2DCSharp_RealAngusSelectedButtonParentMethodDeclarations.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"
struct GameObject_t352;
struct RectTransform_t545;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t545_m4304(__this, method) (( RectTransform_t545 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)
struct GameObject_t352;
struct RealAngusElementButton_t639;
// Declaration !!0 UnityEngine.GameObject::GetComponent<RealAngusElementButton>()
// !!0 UnityEngine.GameObject::GetComponent<RealAngusElementButton>()
#define GameObject_GetComponent_TisRealAngusElementButton_t639_m4455(__this, method) (( RealAngusElementButton_t639 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)
struct GameObject_t352;
struct TipDialog_t682;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t682_m4456(__this, method) (( TipDialog_t682 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4174_gshared)(__this, method)


// System.Void RealAngusController::.ctor()
extern "C" void RealAngusController__ctor_m3451 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	{
		__this->___numColumns_7 = 2;
		__this->___buttonRotationDeg_8 = (5.0f);
		__this->___buttonWigglePix_9 = (10.0f);
		__this->___selectedButtonTopMargin_19 = (50.0f);
		__this->___textWidgetOverlap_20 = (10.0f);
		__this->___textToButtonXRatio_28 = (0.9f);
		__this->___textToButtonYRatio_29 = (0.8f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::Awake()
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t545_m4304_MethodInfo_var;
extern "C" void RealAngusController_Awake_m3452 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t545_m4304_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = (__this->___parentScreen_3);
		NullCheck(L_0);
		RectTransform_t545 * L_1 = GameObject_GetComponent_TisRectTransform_t545_m4304(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t545_m4304_MethodInfo_var);
		__this->___parentScreenRectTransform_15 = L_1;
		return;
	}
}
// System.Void RealAngusController::Start()
extern "C" void RealAngusController_Start_m3453 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	{
		RealAngusController_RegisterForEvents_m3455(__this, /*hidden argument*/NULL);
		RealAngusController_CalculateLayoutNumbers_m3459(__this, /*hidden argument*/NULL);
		RealAngusController_LayoutDisplayElements_m3460(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::OnDestroy()
extern "C" void RealAngusController_OnDestroy_m3454 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	{
		RealAngusController_UnregisterForEvents_m3456(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::RegisterForEvents()
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusController_OnRealAngusDataChanged_m3457_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnGamePhaseChanged_m3458_MethodInfo_var;
extern "C" void RealAngusController_RegisterForEvents_m3455 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		RealAngusController_OnRealAngusDataChanged_m3457_MethodInfo_var = il2cpp_codegen_method_info_from_index(585);
		RealAngusController_OnGamePhaseChanged_m3458_MethodInfo_var = il2cpp_codegen_method_info_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_13);
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
		__this->___registeredForEvents_13 = 1;
		RealAngusData_t644 * L_1 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_2 = { (void*)RealAngusController_OnRealAngusDataChanged_m3457_MethodInfo_var };
		RealAngusDataChangedEventHandler_t642 * L_3 = (RealAngusDataChangedEventHandler_t642 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3466(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		RealAngusData_add_RealAngusDataChanged_m3471(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t564 * L_4 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)RealAngusController_OnGamePhaseChanged_m3458_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_6 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GamePhaseChanged_m3027(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::UnregisterForEvents()
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusController_OnRealAngusDataChanged_m3457_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnGamePhaseChanged_m3458_MethodInfo_var;
extern "C" void RealAngusController_UnregisterForEvents_m3456 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		RealAngusController_OnRealAngusDataChanged_m3457_MethodInfo_var = il2cpp_codegen_method_info_from_index(585);
		RealAngusController_OnGamePhaseChanged_m3458_MethodInfo_var = il2cpp_codegen_method_info_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_13);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		RealAngusData_t644 * L_1 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_2 = { (void*)RealAngusController_OnRealAngusDataChanged_m3457_MethodInfo_var };
		RealAngusDataChangedEventHandler_t642 * L_3 = (RealAngusDataChangedEventHandler_t642 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3466(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		RealAngusData_remove_RealAngusDataChanged_m3472(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t564 * L_4 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)RealAngusController_OnGamePhaseChanged_m3458_MethodInfo_var };
		GamePhaseChangedEventHandler_t563 * L_6 = (GamePhaseChangedEventHandler_t563 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t563_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3014(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GamePhaseChanged_m3028(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void RealAngusController::OnRealAngusDataChanged()
extern "C" void RealAngusController_OnRealAngusDataChanged_m3457 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	{
		RealAngusController_LayoutDisplayElements_m3460(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::OnGamePhaseChanged()
extern "C" void RealAngusController_OnGamePhaseChanged_m3458 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	RealAngusElementButton_t639 * V_1 = {0};
	{
		GamePhaseState_t564 * L_0 = GamePhaseState_get_instance_m3037(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3029(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		List_1_t640 * L_2 = (__this->___buttons_23);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t640 * L_3 = (__this->___buttons_23);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusElementButton>::get_Count() */, L_3);
		if (L_4)
		{
			goto IL_002d;
		}
	}

IL_002c:
	{
		return;
	}

IL_002d:
	{
		V_0 = 0;
		goto IL_006a;
	}

IL_0034:
	{
		List_1_t640 * L_5 = (__this->___buttons_23);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RealAngusElementButton_t639 * L_7 = (RealAngusElementButton_t639 *)VirtFuncInvoker1< RealAngusElementButton_t639 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusElementButton>::get_Item(System.Int32) */, L_5, L_6);
		V_1 = L_7;
		RealAngusElementButton_t639 * L_8 = V_1;
		NullCheck(L_8);
		RealAngusElementButton_OnFirstDisplayed_m3499(L_8, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_9 = V_1;
		NullCheck(L_9);
		Transform_t406 * L_10 = Component_get_transform_m4181(L_9, /*hidden argument*/NULL);
		GameObject_t352 * L_11 = (__this->___parentScreen_3);
		NullCheck(L_11);
		Transform_t406 * L_12 = GameObject_get_transform_m4184(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_SetParent_m4307(L_10, L_12, 0, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_13 = V_1;
		NullCheck(L_13);
		RealAngusElementButton_SetSelected_m3500(L_13, 0, 1, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_15 = V_0;
		List_1_t640 * L_16 = (__this->___buttons_23);
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusElementButton>::get_Count() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0034;
		}
	}
	{
		__this->___selectedButton_16 = (RealAngusElementButton_t639 *)NULL;
		RealAngusSelectedButtonParent_t638 * L_18 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_18);
		GameObject_t352 * L_19 = Component_get_gameObject_m3901(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m4101(L_19, 0, /*hidden argument*/NULL);
		RealAngusTextWidget_t637 * L_20 = (__this->___realAngusTextWidget_4);
		NullCheck(L_20);
		Transform_t406 * L_21 = Component_get_transform_m4181(L_20, /*hidden argument*/NULL);
		Vector2_t110  L_22 = {0};
		Vector2__ctor_m4352(&L_22, (0.0f), (-2000.0f), /*hidden argument*/NULL);
		Vector3_t538  L_23 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localPosition_m4345(L_21, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::CalculateLayoutNumbers()
extern "C" void RealAngusController_CalculateLayoutNumbers_m3459 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Rect_t708  V_11 = {0};
	Rect_t708  V_12 = {0};
	{
		RectTransform_t545 * L_0 = (__this->___parentScreenRectTransform_15);
		NullCheck(L_0);
		Rect_t708  L_1 = RectTransform_get_rect_m4321(L_0, /*hidden argument*/NULL);
		V_11 = L_1;
		float L_2 = Rect_get_width_m4182((&V_11), /*hidden argument*/NULL);
		__this->___screenWidth_30 = L_2;
		RectTransform_t545 * L_3 = (__this->___parentScreenRectTransform_15);
		NullCheck(L_3);
		Rect_t708  L_4 = RectTransform_get_rect_m4321(L_3, /*hidden argument*/NULL);
		V_12 = L_4;
		float L_5 = Rect_get_height_m4183((&V_12), /*hidden argument*/NULL);
		__this->___screenHeight_31 = L_5;
		float L_6 = (__this->___screenWidth_30);
		float L_7 = (__this->___buttonPanelSideMargin_12);
		__this->___buttonPanelWidth_21 = ((float)((float)L_6-(float)((float)((float)(2.0f)*(float)L_7))));
		float L_8 = (__this->___screenHeight_31);
		float L_9 = (__this->___buttonPanelTopMargin_10);
		float L_10 = (__this->___buttonPanelBottomMargin_11);
		__this->___buttonPanelHeight_22 = ((float)((float)((float)((float)L_8-(float)L_9))-(float)L_10));
		float L_11 = (__this->___buttonPanelWidth_21);
		V_0 = L_11;
		float L_12 = V_0;
		__this->___selectedButtonScale_18 = ((float)((float)L_12/(float)(300.0f)));
		float L_13 = (__this->___selectedButtonScale_18);
		V_1 = ((float)((float)L_13*(float)(5.0f)));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = ((float)((float)L_14-(float)((float)((float)(2.0f)*(float)L_15))));
		float L_16 = V_2;
		V_3 = ((float)((float)L_16/(float)(1.33333f)));
		float L_17 = V_3;
		float L_18 = V_1;
		V_4 = ((float)((float)L_17+(float)((float)((float)(2.0f)*(float)L_18))));
		float L_19 = V_0;
		float L_20 = (__this->___textToButtonXRatio_28);
		V_5 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = (__this->___textToButtonYRatio_29);
		V_6 = ((float)((float)L_21*(float)L_22));
		float L_23 = (__this->___screenWidth_30);
		V_7 = ((float)((float)L_23/(float)(2.0f)));
		float L_24 = (__this->___screenWidth_30);
		V_9 = ((float)((float)L_24/(float)(2.0f)));
		float L_25 = V_4;
		float L_26 = (__this->___screenHeight_31);
		if ((!(((float)((float)((float)L_25*(float)(2.0f)))) > ((float)L_26))))
		{
			goto IL_0106;
		}
	}
	{
		float L_27 = (__this->___screenHeight_31);
		float L_28 = V_4;
		float L_29 = (__this->___selectedButtonTopMargin_19);
		V_8 = ((float)((float)((float)((float)L_27-(float)((float)((float)L_28/(float)(2.0f)))))-(float)L_29));
		goto IL_011d;
	}

IL_0106:
	{
		float L_30 = (__this->___screenHeight_31);
		float L_31 = V_4;
		V_8 = ((float)((float)((float)((float)L_30/(float)(2.0f)))+(float)((float)((float)L_31/(float)(2.0f)))));
	}

IL_011d:
	{
		float L_32 = V_8;
		float L_33 = V_4;
		float L_34 = V_6;
		float L_35 = (__this->___textWidgetOverlap_20);
		V_10 = ((float)((float)((float)((float)((float)((float)L_32-(float)((float)((float)L_33/(float)(2.0f)))))-(float)((float)((float)L_34/(float)(2.0f)))))+(float)L_35));
		float L_36 = V_7;
		float L_37 = (__this->___screenWidth_30);
		V_7 = ((float)((float)L_36-(float)((float)((float)L_37/(float)(2.0f)))));
		float L_38 = V_8;
		float L_39 = (__this->___screenHeight_31);
		V_8 = ((float)((float)L_38-(float)((float)((float)L_39/(float)(2.0f)))));
		float L_40 = V_9;
		float L_41 = (__this->___screenWidth_30);
		V_9 = ((float)((float)L_40-(float)((float)((float)L_41/(float)(2.0f)))));
		float L_42 = V_10;
		float L_43 = (__this->___screenHeight_31);
		V_10 = ((float)((float)L_42-(float)((float)((float)L_43/(float)(2.0f)))));
		float L_44 = V_7;
		float L_45 = V_8;
		Vector2_t110  L_46 = {0};
		Vector2__ctor_m4352(&L_46, L_44, L_45, /*hidden argument*/NULL);
		__this->___selectedButtonLocation_17 = L_46;
		float L_47 = V_9;
		float L_48 = V_10;
		Vector2_t110  L_49 = {0};
		Vector2__ctor_m4352(&L_49, L_47, L_48, /*hidden argument*/NULL);
		__this->___textWidgetLocation_26 = L_49;
		float L_50 = V_9;
		float L_51 = (__this->___screenHeight_31);
		float L_52 = V_6;
		Vector2_t110  L_53 = {0};
		Vector2__ctor_m4352(&L_53, L_50, ((float)((float)((float)((float)((-L_51))/(float)(2.0f)))-(float)L_52)), /*hidden argument*/NULL);
		__this->___textWidgetOffscreenLocation_27 = L_53;
		RealAngusTextWidget_t637 * L_54 = (__this->___realAngusTextWidget_4);
		float L_55 = V_5;
		float L_56 = V_6;
		Vector2_t110  L_57 = (__this->___textWidgetLocation_26);
		Vector2_t110  L_58 = (__this->___textWidgetOffscreenLocation_27);
		NullCheck(L_54);
		RealAngusTextWidget_ConfigureLayout_m3528(L_54, L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::LayoutDisplayElements()
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t640_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* ButtonHandler_t645_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4457_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRealAngusElementButton_t639_m4455_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnButtonClicked_m3461_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnSelectionTransitionCompleted_m3464_MethodInfo_var;
extern "C" void RealAngusController_LayoutDisplayElements_m3460 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		List_1_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		ButtonHandler_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		List_1__ctor_m4457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484235);
		GameObject_GetComponent_TisRealAngusElementButton_t639_m4455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484236);
		RealAngusController_OnButtonClicked_m3461_MethodInfo_var = il2cpp_codegen_method_info_from_index(589);
		RealAngusController_OnSelectionTransitionCompleted_m3464_MethodInfo_var = il2cpp_codegen_method_info_from_index(590);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t643 * V_0 = {0};
	int32_t V_1 = 0;
	RealAngusItemDesc_t646 * V_2 = {0};
	GameObject_t352 * V_3 = {0};
	RealAngusElementButton_t639 * V_4 = {0};
	{
		List_1_t640 * L_0 = (__this->___buttons_23);
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
		RealAngusData_t644 * L_1 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_1);
		List_1_t643 * L_2 = RealAngusData_GetRealAngusItemDescs_m3476(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t643 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		List_1_t643 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_4);
		if (L_5)
		{
			goto IL_0029;
		}
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		List_1_t643 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_6);
		int32_t L_8 = (__this->___numColumns_7);
		__this->___numRows_14 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)1))/(int32_t)L_8))));
		List_1_t640 * L_9 = (List_1_t640 *)il2cpp_codegen_object_new (List_1_t640_il2cpp_TypeInfo_var);
		List_1__ctor_m4457(L_9, /*hidden argument*/List_1__ctor_m4457_MethodInfo_var);
		__this->___buttons_23 = L_9;
		float L_10 = (__this->___buttonPanelWidth_21);
		int32_t L_11 = (__this->___numColumns_7);
		__this->___columnWidth_24 = ((float)((float)L_10/(float)(((float)L_11))));
		float L_12 = (__this->___buttonPanelHeight_22);
		int32_t L_13 = (__this->___numRows_14);
		__this->___rowHeight_25 = ((float)((float)L_12/(float)(((float)L_13))));
		Random_set_seed_m4393(NULL /*static, unused*/, ((int32_t)141234), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_014d;
	}

IL_0084:
	{
		List_1_t643 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RealAngusItemDesc_t646 * L_16 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_14, L_15);
		V_2 = L_16;
		GameObject_t352 * L_17 = (__this->___realAngusElementButtonPrototype_2);
		Vector3_t538  L_18 = {0};
		Vector3__ctor_m4179(&L_18, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t802  L_19 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_20 = Object_Instantiate_m4306(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_3 = ((GameObject_t352 *)IsInst(L_20, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_21 = V_3;
		NullCheck(L_21);
		RealAngusElementButton_t639 * L_22 = GameObject_GetComponent_TisRealAngusElementButton_t639_m4455(L_21, /*hidden argument*/GameObject_GetComponent_TisRealAngusElementButton_t639_m4455_MethodInfo_var);
		V_4 = L_22;
		List_1_t640 * L_23 = (__this->___buttons_23);
		RealAngusElementButton_t639 * L_24 = V_4;
		NullCheck(L_23);
		VirtActionInvoker1< RealAngusElementButton_t639 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusElementButton>::Add(!0) */, L_23, L_24);
		RealAngusElementButton_t639 * L_25 = V_4;
		NullCheck(L_25);
		Transform_t406 * L_26 = Component_get_transform_m4181(L_25, /*hidden argument*/NULL);
		GameObject_t352 * L_27 = (__this->___parentScreen_3);
		NullCheck(L_27);
		Transform_t406 * L_28 = GameObject_get_transform_m4184(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_SetParent_m4307(L_26, L_28, 0, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_29 = V_4;
		int32_t L_30 = V_1;
		Vector2_t110  L_31 = RealAngusController_GetNthPosition_m3465(__this, L_30, /*hidden argument*/NULL);
		float L_32 = (__this->___buttonRotationDeg_8);
		float L_33 = (__this->___buttonRotationDeg_8);
		float L_34 = Random_Range_m4340(NULL /*static, unused*/, ((-L_32)), L_33, /*hidden argument*/NULL);
		NullCheck(L_29);
		RealAngusElementButton_SetHomeTransform_m3502(L_29, L_31, L_34, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_35 = V_4;
		Vector2_t110  L_36 = (__this->___selectedButtonLocation_17);
		float L_37 = (__this->___selectedButtonScale_18);
		NullCheck(L_35);
		RealAngusElementButton_SetSelectedTransform_m3501(L_35, L_36, (0.0f), L_37, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_38 = V_4;
		RealAngusItemDesc_t646 * L_39 = V_2;
		NullCheck(L_38);
		RealAngusElementButton_Configure_m3496(L_38, L_39, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_40 = V_4;
		IntPtr_t L_41 = { (void*)RealAngusController_OnButtonClicked_m3461_MethodInfo_var };
		ButtonHandler_t645 * L_42 = (ButtonHandler_t645 *)il2cpp_codegen_object_new (ButtonHandler_t645_il2cpp_TypeInfo_var);
		ButtonHandler__ctor_m3481(L_42, __this, L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		RealAngusElementButton_SetClickHandler_m3494(L_40, L_42, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_43 = V_4;
		IntPtr_t L_44 = { (void*)RealAngusController_OnSelectionTransitionCompleted_m3464_MethodInfo_var };
		ButtonHandler_t645 * L_45 = (ButtonHandler_t645 *)il2cpp_codegen_object_new (ButtonHandler_t645_il2cpp_TypeInfo_var);
		ButtonHandler__ctor_m3481(L_45, __this, L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		RealAngusElementButton_SetTransitionCompleteHandler_m3495(L_43, L_45, /*hidden argument*/NULL);
		int32_t L_46 = V_1;
		V_1 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_014d:
	{
		int32_t L_47 = V_1;
		List_1_t643 * L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_48);
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_0084;
		}
	}
	{
		return;
	}
}
// System.Void RealAngusController::OnButtonClicked(RealAngusElementButton)
extern "C" void RealAngusController_OnButtonClicked_m3461 (RealAngusController_t641 * __this, RealAngusElementButton_t639 * ___button, const MethodInfo* method)
{
	{
		RealAngusElementButton_t639 * L_0 = (__this->___selectedButton_16);
		bool L_1 = Object_op_Implicit_m4244(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		RealAngusElementButton_t639 * L_2 = (__this->___selectedButton_16);
		NullCheck(L_2);
		RealAngusElementButton_SetSelected_m3500(L_2, 0, 0, /*hidden argument*/NULL);
		__this->___selectedButton_16 = (RealAngusElementButton_t639 *)NULL;
		RealAngusSelectedButtonParent_t638 * L_3 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_3);
		RealAngusSelectedButtonParent_StartVisibilityTransition_m3523(L_3, 0, /*hidden argument*/NULL);
		RealAngusTextWidget_t637 * L_4 = (__this->___realAngusTextWidget_4);
		NullCheck(L_4);
		RealAngusTextWidget_TransitionOut_m3530(L_4, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0040:
	{
		RealAngusElementButton_t639 * L_5 = ___button;
		NullCheck(L_5);
		RealAngusItemDesc_t646 * L_6 = RealAngusElementButton_get_raid_m3486(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = RealAngusItemDesc_get_unlocked_m3510(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		RealAngusElementButton_t639 * L_8 = ___button;
		RealAngusController_SelectButton_m3463(__this, L_8, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_005c:
	{
		RealAngusController_CueToPlayMore_m3462(__this, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void RealAngusController::CueToPlayMore()
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t535_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t682_m4456_MethodInfo_var;
extern "C" void RealAngusController_CueToPlayMore_m3462 (RealAngusController_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		DialogController_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		GameObject_GetComponent_TisTipDialog_t682_m4456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484239);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	GameObject_t352 * V_3 = {0};
	TipDialog_t682 * V_4 = {0};
	{
		RealAngusData_t644 * L_0 = ((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		int32_t L_1 = RealAngusData_CountUnlockedItemDescs_m3477(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelConfig_t592 * L_2 = LevelConfig_get_instance_m3124(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = LevelConfig_LevelForRealAngusUnlocks_m3148(L_2, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m4018(NULL /*static, unused*/, (String_t*) &_stringLiteral1130, L_7, (String_t*) &_stringLiteral1131, /*hidden argument*/NULL);
		V_2 = L_8;
		GameObject_t352 * L_9 = (__this->___tipDialogPrototype_6);
		Vector3_t538  L_10 = {0};
		Vector3__ctor_m4179(&L_10, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t802  L_11 = Quaternion_get_identity_m4305(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t717 * L_12 = Object_Instantiate_m4306(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_3 = ((GameObject_t352 *)IsInst(L_12, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_13 = V_3;
		NullCheck(L_13);
		TipDialog_t682 * L_14 = GameObject_GetComponent_TisTipDialog_t682_m4456(L_13, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t682_m4456_MethodInfo_var);
		V_4 = L_14;
		TipDialog_t682 * L_15 = V_4;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		TipDialog_ConfigureDialog_m3721(L_15, L_16, /*hidden argument*/NULL);
		DialogController_t535 * L_17 = ((DialogController_t535_StaticFields*)DialogController_t535_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_18 = V_3;
		NullCheck(L_17);
		DialogController_ShowDialog_m2891(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::SelectButton(RealAngusElementButton)
extern "C" void RealAngusController_SelectButton_m3463 (RealAngusController_t641 * __this, RealAngusElementButton_t639 * ___button, const MethodInfo* method)
{
	{
		RealAngusElementButton_t639 * L_0 = ___button;
		__this->___selectedButton_16 = L_0;
		RealAngusElementButton_t639 * L_1 = (__this->___selectedButton_16);
		NullCheck(L_1);
		RealAngusElementButton_SetSelected_m3500(L_1, 1, 0, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_t638 * L_2 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_2);
		RealAngusSelectedButtonParent_StartVisibilityTransition_m3523(L_2, 1, /*hidden argument*/NULL);
		RealAngusTextWidget_t637 * L_3 = (__this->___realAngusTextWidget_4);
		RealAngusElementButton_t639 * L_4 = (__this->___selectedButton_16);
		NullCheck(L_4);
		RealAngusItemDesc_t646 * L_5 = RealAngusElementButton_get_raid_m3486(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		RealAngusTextWidget_TransitionIn_m3529(L_3, L_5, /*hidden argument*/NULL);
		RealAngusElementButton_t639 * L_6 = (__this->___selectedButton_16);
		NullCheck(L_6);
		Transform_t406 * L_7 = Component_get_transform_m4181(L_6, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_t638 * L_8 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_8);
		Transform_t406 * L_9 = Component_get_transform_m4181(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m4307(L_7, L_9, 0, /*hidden argument*/NULL);
		SFXPlayer_t652 * L_10 = SFXPlayer_get_instance_m3542(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		SFXPlayer_Play_m3547(L_10, 8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::OnSelectionTransitionCompleted(RealAngusElementButton)
extern "C" void RealAngusController_OnSelectionTransitionCompleted_m3464 (RealAngusController_t641 * __this, RealAngusElementButton_t639 * ___button, const MethodInfo* method)
{
	{
		RealAngusElementButton_t639 * L_0 = ___button;
		NullCheck(L_0);
		bool L_1 = RealAngusElementButton_get_selected_m3488(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		RealAngusElementButton_t639 * L_2 = ___button;
		NullCheck(L_2);
		Transform_t406 * L_3 = Component_get_transform_m4181(L_2, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = (__this->___parentScreen_3);
		NullCheck(L_4);
		Transform_t406 * L_5 = GameObject_get_transform_m4184(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m4307(L_3, L_5, 0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// UnityEngine.Vector2 RealAngusController::GetNthPosition(System.Int32)
extern "C" Vector2_t110  RealAngusController_GetNthPosition_m3465 (RealAngusController_t641 * __this, int32_t ___n, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___n;
		int32_t L_1 = (__this->___numColumns_7);
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)L_1));
		int32_t L_2 = ___n;
		int32_t L_3 = (__this->___numColumns_7);
		V_1 = ((int32_t)((int32_t)L_2%(int32_t)L_3));
		int32_t L_4 = V_1;
		float L_5 = (__this->___columnWidth_24);
		V_2 = ((float)((float)((float)((float)(((float)L_4))+(float)(0.5f)))*(float)L_5));
		int32_t L_6 = V_0;
		float L_7 = (__this->___rowHeight_25);
		V_3 = ((float)((float)((float)((float)(((float)L_6))+(float)(0.5f)))*(float)L_7));
		float L_8 = (__this->___buttonPanelHeight_22);
		float L_9 = V_3;
		V_3 = ((float)((float)L_8-(float)L_9));
		float L_10 = V_2;
		float L_11 = (__this->___buttonPanelSideMargin_12);
		V_2 = ((float)((float)L_10+(float)L_11));
		float L_12 = V_3;
		float L_13 = (__this->___buttonPanelBottomMargin_11);
		V_3 = ((float)((float)L_12+(float)L_13));
		float L_14 = V_2;
		float L_15 = (__this->___screenWidth_30);
		V_2 = ((float)((float)L_14-(float)((float)((float)L_15/(float)(2.0f)))));
		float L_16 = V_3;
		float L_17 = (__this->___screenHeight_31);
		V_3 = ((float)((float)L_16-(float)((float)((float)L_17/(float)(2.0f)))));
		float L_18 = V_2;
		float L_19 = (__this->___buttonWigglePix_9);
		float L_20 = (__this->___buttonWigglePix_9);
		float L_21 = Random_Range_m4340(NULL /*static, unused*/, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_18+(float)L_21));
		float L_22 = V_3;
		float L_23 = (__this->___buttonWigglePix_9);
		float L_24 = (__this->___buttonWigglePix_9);
		float L_25 = Random_Range_m4340(NULL /*static, unused*/, ((-L_23)), L_24, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_22+(float)L_25));
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t110  L_28 = {0};
		Vector2__ctor_m4352(&L_28, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void RealAngusData/RealAngusDataChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RealAngusDataChangedEventHandler__ctor_m3466 (RealAngusDataChangedEventHandler_t642 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void RealAngusData/RealAngusDataChangedEventHandler::Invoke()
extern "C" void RealAngusDataChangedEventHandler_Invoke_m3467 (RealAngusDataChangedEventHandler_t642 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RealAngusDataChangedEventHandler_Invoke_m3467((RealAngusDataChangedEventHandler_t642 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_RealAngusDataChangedEventHandler_t642(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult RealAngusData/RealAngusDataChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * RealAngusDataChangedEventHandler_BeginInvoke_m3468 (RealAngusDataChangedEventHandler_t642 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void RealAngusData/RealAngusDataChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RealAngusDataChangedEventHandler_EndInvoke_m3469 (RealAngusDataChangedEventHandler_t642 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct Utilities_t687;
struct List_1_t643;
struct Utilities_t687;
struct List_1_t698;
// Declaration System.Void Utilities::ShuffleList<System.Object>(System.Collections.Generic.List`1<!!0>&)
// System.Void Utilities::ShuffleList<System.Object>(System.Collections.Generic.List`1<!!0>&)
extern "C" void Utilities_ShuffleList_TisObject_t_m4459_gshared (Object_t * __this /* static, unused */, List_1_t698 ** p0, const MethodInfo* method);
#define Utilities_ShuffleList_TisObject_t_m4459(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, List_1_t698 **, const MethodInfo*))Utilities_ShuffleList_TisObject_t_m4459_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Void Utilities::ShuffleList<RealAngusItemDesc>(System.Collections.Generic.List`1<!!0>&)
// System.Void Utilities::ShuffleList<RealAngusItemDesc>(System.Collections.Generic.List`1<!!0>&)
#define Utilities_ShuffleList_TisRealAngusItemDesc_t646_m4458(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, List_1_t643 **, const MethodInfo*))Utilities_ShuffleList_TisObject_t_m4459_gshared)(__this /* static, unused */, p0, method)


// System.Void RealAngusData::.ctor()
extern "C" void RealAngusData__ctor_m3470 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusData::add_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern TypeInfo* RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var;
extern "C" void RealAngusData_add_RealAngusDataChanged_m3471 (RealAngusData_t644 * __this, RealAngusDataChangedEventHandler_t642 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusDataChangedEventHandler_t642 * L_0 = (__this->___RealAngusDataChanged_5);
		RealAngusDataChangedEventHandler_t642 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Combine_m3904(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___RealAngusDataChanged_5 = ((RealAngusDataChangedEventHandler_t642 *)Castclass(L_2, RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void RealAngusData::remove_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern TypeInfo* RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var;
extern "C" void RealAngusData_remove_RealAngusDataChanged_m3472 (RealAngusData_t644 * __this, RealAngusDataChangedEventHandler_t642 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusDataChangedEventHandler_t642 * L_0 = (__this->___RealAngusDataChanged_5);
		RealAngusDataChangedEventHandler_t642 * L_1 = ___value;
		Delegate_t738 * L_2 = Delegate_Remove_m3912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___RealAngusDataChanged_5 = ((RealAngusDataChangedEventHandler_t642 *)Castclass(L_2, RealAngusDataChangedEventHandler_t642_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void RealAngusData::Awake()
extern TypeInfo* RealAngusData_t644_il2cpp_TypeInfo_var;
extern "C" void RealAngusData_Awake_m3473 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RealAngusData_t644_StaticFields*)RealAngusData_t644_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.Void RealAngusData::Start()
extern "C" void RealAngusData_Start_m3474 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	{
		RealAngusData_MakeRealAngusItemDescs_m3479(__this, /*hidden argument*/NULL);
		RealAngusData_MakeSemiRandomOrdering_m3478(__this, /*hidden argument*/NULL);
		RealAngusDataChangedEventHandler_t642 * L_0 = (__this->___RealAngusDataChanged_5);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RealAngusDataChangedEventHandler_t642 * L_1 = (__this->___RealAngusDataChanged_5);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void RealAngusData/RealAngusDataChangedEventHandler::Invoke() */, L_1);
	}

IL_0022:
	{
		return;
	}
}
// System.Void RealAngusData::Update()
extern "C" void RealAngusData_Update_m3475 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::GetRealAngusItemDescs()
extern "C" List_1_t643 * RealAngusData_GetRealAngusItemDescs_m3476 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	{
		List_1_t643 * L_0 = (__this->___realAngusItemDescs_2);
		return L_0;
	}
}
// System.Int32 RealAngusData::CountUnlockedItemDescs()
extern "C" int32_t RealAngusData_CountUnlockedItemDescs_m3477 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0027;
	}

IL_0009:
	{
		List_1_t643 * L_0 = (__this->___realAngusItemDescs_2);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RealAngusItemDesc_t646 * L_2 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		bool L_3 = RealAngusItemDesc_get_unlocked_m3510(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		List_1_t643 * L_7 = (__this->___realAngusItemDescs_2);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_7);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void RealAngusData::MakeSemiRandomOrdering()
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t643_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4460_MethodInfo_var;
extern const MethodInfo* Utilities_ShuffleList_TisRealAngusItemDesc_t646_m4458_MethodInfo_var;
extern "C" void RealAngusData_MakeSemiRandomOrdering_m3478 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		List_1_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(574);
		List_1__ctor_m4460_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484240);
		Utilities_ShuffleList_TisRealAngusItemDesc_t646_m4458_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484241);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		float L_0 = Utilities_SecondsSinceEpoch_m3755(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)(((int32_t)L_0))%(int32_t)((int32_t)100000)));
		PersistentStorage_t624 * L_1 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = PersistentStorage_GetIntValue_m3347(L_1, (String_t*) &_stringLiteral1132, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0035;
		}
	}
	{
		PersistentStorage_t624 * L_6 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		PersistentStorage_SetIntValue_m3346(L_6, (String_t*) &_stringLiteral1132, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		List_1_t643 * L_8 = (List_1_t643 *)il2cpp_codegen_object_new (List_1_t643_il2cpp_TypeInfo_var);
		List_1__ctor_m4460(L_8, /*hidden argument*/List_1__ctor_m4460_MethodInfo_var);
		__this->___semiRandomItemDescs_4 = L_8;
		V_2 = 1;
		goto IL_0073;
	}

IL_0047:
	{
		List_1_t643 * L_9 = (__this->___semiRandomItemDescs_4);
		List_1_t643 * L_10 = (__this->___realAngusItemDescs_2);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		RealAngusItemDesc_t646 * L_12 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_10, L_11);
		NullCheck(L_9);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_9, L_12);
		int32_t L_13 = V_1;
		Random_set_seed_m4393(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		List_1_t643 ** L_14 = &(__this->___semiRandomItemDescs_4);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		Utilities_ShuffleList_TisRealAngusItemDesc_t646_m4458(NULL /*static, unused*/, L_14, /*hidden argument*/Utilities_ShuffleList_TisRealAngusItemDesc_t646_m4458_MethodInfo_var);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_16 = V_2;
		List_1_t643 * L_17 = (__this->___realAngusItemDescs_2);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)L_18-(int32_t)1)))))
		{
			goto IL_0047;
		}
	}
	{
		List_1_t643 * L_19 = (__this->___semiRandomItemDescs_4);
		List_1_t643 * L_20 = (__this->___realAngusItemDescs_2);
		List_1_t643 * L_21 = (__this->___realAngusItemDescs_2);
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_21);
		NullCheck(L_20);
		RealAngusItemDesc_t646 * L_23 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_20, ((int32_t)((int32_t)L_22-(int32_t)1)));
		NullCheck(L_19);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_19, L_23);
		List_1_t643 * L_24 = (__this->___semiRandomItemDescs_4);
		List_1_t643 * L_25 = (__this->___realAngusItemDescs_2);
		NullCheck(L_25);
		RealAngusItemDesc_t646 * L_26 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_25, 0);
		NullCheck(L_24);
		VirtActionInvoker2< int32_t, RealAngusItemDesc_t646 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Insert(System.Int32,!0) */, L_24, 0, L_26);
		return;
	}
}
// System.Void RealAngusData::MakeRealAngusItemDescs()
extern TypeInfo* List_1_t643_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusItemDesc_t646_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4460_MethodInfo_var;
extern "C" void RealAngusData_MakeRealAngusItemDescs_m3479 (RealAngusData_t644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(574);
		RealAngusItemDesc_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		List_1__ctor_m4460_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484240);
		s_Il2CppMethodIntialized = true;
	}
	RealAngusItemDesc_t646 * V_0 = {0};
	{
		List_1_t643 * L_0 = (List_1_t643 *)il2cpp_codegen_object_new (List_1_t643_il2cpp_TypeInfo_var);
		List_1__ctor_m4460(L_0, /*hidden argument*/List_1__ctor_m4460_MethodInfo_var);
		__this->___realAngusItemDescs_2 = L_0;
		RealAngusItemDesc_t646 * L_1 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_1, (String_t*) &_stringLiteral1133, (String_t*) &_stringLiteral1134, (String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t643 * L_2 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_2, L_3);
		RealAngusItemDesc_t646 * L_4 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_4, (String_t*) &_stringLiteral1136, (String_t*) &_stringLiteral1137, (String_t*) &_stringLiteral1138, /*hidden argument*/NULL);
		V_0 = L_4;
		List_1_t643 * L_5 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_5, L_6);
		RealAngusItemDesc_t646 * L_7 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_7, (String_t*) &_stringLiteral1139, (String_t*) &_stringLiteral1140, (String_t*) &_stringLiteral1139, /*hidden argument*/NULL);
		V_0 = L_7;
		List_1_t643 * L_8 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_9 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_8, L_9);
		RealAngusItemDesc_t646 * L_10 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_10, (String_t*) &_stringLiteral1141, (String_t*) &_stringLiteral1142, (String_t*) &_stringLiteral1141, /*hidden argument*/NULL);
		V_0 = L_10;
		List_1_t643 * L_11 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_11, L_12);
		RealAngusItemDesc_t646 * L_13 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_13, (String_t*) &_stringLiteral1143, (String_t*) &_stringLiteral1144, (String_t*) &_stringLiteral1145, /*hidden argument*/NULL);
		V_0 = L_13;
		List_1_t643 * L_14 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_15 = V_0;
		NullCheck(L_14);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_14, L_15);
		RealAngusItemDesc_t646 * L_16 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_16, (String_t*) &_stringLiteral1141, (String_t*) &_stringLiteral1146, (String_t*) &_stringLiteral1147, /*hidden argument*/NULL);
		V_0 = L_16;
		List_1_t643 * L_17 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_18 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_17, L_18);
		RealAngusItemDesc_t646 * L_19 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_19, (String_t*) &_stringLiteral1141, (String_t*) &_stringLiteral1146, (String_t*) &_stringLiteral1148, /*hidden argument*/NULL);
		V_0 = L_19;
		List_1_t643 * L_20 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_20, L_21);
		RealAngusItemDesc_t646 * L_22 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_22, (String_t*) &_stringLiteral1141, (String_t*) &_stringLiteral1146, (String_t*) &_stringLiteral1149, /*hidden argument*/NULL);
		V_0 = L_22;
		List_1_t643 * L_23 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_23, L_24);
		RealAngusItemDesc_t646 * L_25 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_25, (String_t*) &_stringLiteral1141, (String_t*) &_stringLiteral1146, (String_t*) &_stringLiteral1150, /*hidden argument*/NULL);
		V_0 = L_25;
		List_1_t643 * L_26 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_27 = V_0;
		NullCheck(L_26);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_26, L_27);
		RealAngusItemDesc_t646 * L_28 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_28, (String_t*) &_stringLiteral1141, (String_t*) &_stringLiteral1146, (String_t*) &_stringLiteral1151, /*hidden argument*/NULL);
		V_0 = L_28;
		List_1_t643 * L_29 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_30 = V_0;
		NullCheck(L_29);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_29, L_30);
		RealAngusItemDesc_t646 * L_31 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_31, (String_t*) &_stringLiteral1141, (String_t*) &_stringLiteral1146, (String_t*) &_stringLiteral1152, /*hidden argument*/NULL);
		V_0 = L_31;
		List_1_t643 * L_32 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_33 = V_0;
		NullCheck(L_32);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_32, L_33);
		RealAngusItemDesc_t646 * L_34 = (RealAngusItemDesc_t646 *)il2cpp_codegen_object_new (RealAngusItemDesc_t646_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3503(L_34, (String_t*) &_stringLiteral1153, (String_t*) &_stringLiteral1154, (String_t*) &_stringLiteral1155, /*hidden argument*/NULL);
		V_0 = L_34;
		List_1_t643 * L_35 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t646 * L_36 = V_0;
		NullCheck(L_35);
		VirtActionInvoker1< RealAngusItemDesc_t646 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_35, L_36);
		return;
	}
}
// System.Void RealAngusData::UnlockNItems(System.Int32)
extern "C" void RealAngusData_UnlockNItems_m3480 (RealAngusData_t644 * __this, int32_t ___n, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0036;
	}

IL_0009:
	{
		List_1_t643 * L_0 = (__this->___semiRandomItemDescs_4);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RealAngusItemDesc_t646 * L_2 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		bool L_3 = RealAngusItemDesc_get_unlocked_m3510(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		V_0 = 1;
	}

IL_0021:
	{
		List_1_t643 * L_4 = (__this->___semiRandomItemDescs_4);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RealAngusItemDesc_t646 * L_6 = (RealAngusItemDesc_t646 *)VirtFuncInvoker1< RealAngusItemDesc_t646 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_6);
		RealAngusItemDesc_Unlock_m3516(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___n;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0009;
		}
	}
	{
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		RealAngusDataChangedEventHandler_t642 * L_11 = (__this->___RealAngusDataChanged_5);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RealAngusDataChangedEventHandler_t642 * L_12 = (__this->___RealAngusDataChanged_5);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(11 /* System.Void RealAngusData/RealAngusDataChangedEventHandler::Invoke() */, L_12);
	}

IL_0059:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void RealAngusElementButton/ButtonHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ButtonHandler__ctor_m3481 (ButtonHandler_t645 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void RealAngusElementButton/ButtonHandler::Invoke(RealAngusElementButton)
extern "C" void ButtonHandler_Invoke_m3482 (ButtonHandler_t645 * __this, RealAngusElementButton_t639 * ___button, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ButtonHandler_Invoke_m3482((ButtonHandler_t645 *)__this->___prev_9,___button, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RealAngusElementButton_t639 * ___button, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___button,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RealAngusElementButton_t639 * ___button, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___button,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___button,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ButtonHandler_t645(Il2CppObject* delegate, RealAngusElementButton_t639 * ___button)
{
	// Marshaling of parameter '___button' to native representation
	RealAngusElementButton_t639 * ____button_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'RealAngusElementButton'."));
}
// System.IAsyncResult RealAngusElementButton/ButtonHandler::BeginInvoke(RealAngusElementButton,System.AsyncCallback,System.Object)
extern "C" Object_t * ButtonHandler_BeginInvoke_m3483 (ButtonHandler_t645 * __this, RealAngusElementButton_t639 * ___button, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void RealAngusElementButton/ButtonHandler::EndInvoke(System.IAsyncResult)
extern "C" void ButtonHandler_EndInvoke_m3484 (ButtonHandler_t645 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void RealAngusElementButton::.ctor()
extern "C" void RealAngusElementButton__ctor_m3485 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		__this->___pauseBeforePulsing_6 = (0.5f);
		__this->___transitioning_8 = 1;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// RealAngusItemDesc RealAngusElementButton::get_raid()
extern "C" RealAngusItemDesc_t646 * RealAngusElementButton_get_raid_m3486 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t646 * L_0 = (__this->___U3CraidU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void RealAngusElementButton::set_raid(RealAngusItemDesc)
extern "C" void RealAngusElementButton_set_raid_m3487 (RealAngusElementButton_t639 * __this, RealAngusItemDesc_t646 * ___value, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t646 * L_0 = ___value;
		__this->___U3CraidU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Boolean RealAngusElementButton::get_selected()
extern "C" bool RealAngusElementButton_get_selected_m3488 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CselectedU3Ek__BackingField_18);
		return L_0;
	}
}
// System.Void RealAngusElementButton::set_selected(System.Boolean)
extern "C" void RealAngusElementButton_set_selected_m3489 (RealAngusElementButton_t639 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CselectedU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void RealAngusElementButton::Awake()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var;
extern "C" void RealAngusElementButton_Awake_m3490 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	{
		DistortForEffect_t537 * L_0 = Component_GetComponent_TisDistortForEffect_t537_m4312(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t537_m4312_MethodInfo_var);
		__this->___distortForEffect_9 = L_0;
		return;
	}
}
// System.Void RealAngusElementButton::Start()
extern "C" void RealAngusElementButton_Start_m3491 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RealAngusElementButton::Update()
extern "C" void RealAngusElementButton_Update_m3492 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___transitioning_8);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RealAngusElementButton_UpdateSelectionState_m3493(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void RealAngusElementButton::UpdateSelectionState()
extern TypeInfo* Utilities_t687_il2cpp_TypeInfo_var;
extern "C" void RealAngusElementButton_UpdateSelectionState_m3493 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___startTransitionTime_7);
		V_0 = ((float)((float)((float)((float)L_0-(float)L_1))/(float)(0.4f)));
		bool L_2 = RealAngusElementButton_get_selected_m3488(__this, /*hidden argument*/NULL);
		float L_3 = V_0;
		Vector2_t110  L_4 = (__this->___homePosition_12);
		float L_5 = (__this->___homeRotation_13);
		Vector2_t110  L_6 = (__this->___selectedPosition_14);
		float L_7 = (__this->___selectedRotation_15);
		float L_8 = (__this->___selectedScale_16);
		Transform_t406 * L_9 = Component_get_transform_m4181(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t687_il2cpp_TypeInfo_var);
		Utilities_LerpTransformInOut_m3762(NULL /*static, unused*/, L_2, L_3, L_4, L_5, (1.0f), L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		float L_10 = V_0;
		if ((!(((float)L_10) >= ((float)(1.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		__this->___transitioning_8 = 0;
		ButtonHandler_t645 * L_11 = (__this->___OnTransitionComplete_11);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		ButtonHandler_t645 * L_12 = (__this->___OnTransitionComplete_11);
		NullCheck(L_12);
		VirtActionInvoker1< RealAngusElementButton_t639 * >::Invoke(11 /* System.Void RealAngusElementButton/ButtonHandler::Invoke(RealAngusElementButton) */, L_12, __this);
	}

IL_0071:
	{
		return;
	}
}
// System.Void RealAngusElementButton::SetClickHandler(RealAngusElementButton/ButtonHandler)
extern "C" void RealAngusElementButton_SetClickHandler_m3494 (RealAngusElementButton_t639 * __this, ButtonHandler_t645 * ___handler, const MethodInfo* method)
{
	{
		ButtonHandler_t645 * L_0 = ___handler;
		__this->___OnButtonClicked_10 = L_0;
		return;
	}
}
// System.Void RealAngusElementButton::SetTransitionCompleteHandler(RealAngusElementButton/ButtonHandler)
extern "C" void RealAngusElementButton_SetTransitionCompleteHandler_m3495 (RealAngusElementButton_t639 * __this, ButtonHandler_t645 * ___handler, const MethodInfo* method)
{
	{
		ButtonHandler_t645 * L_0 = ___handler;
		__this->___OnTransitionComplete_11 = L_0;
		return;
	}
}
// System.Void RealAngusElementButton::Configure(RealAngusItemDesc)
extern "C" void RealAngusElementButton_Configure_m3496 (RealAngusElementButton_t639 * __this, RealAngusItemDesc_t646 * ___raid, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		RealAngusItemDesc_t646 * L_0 = ___raid;
		RealAngusElementButton_set_raid_m3487(__this, L_0, /*hidden argument*/NULL);
		Image_t503 * L_1 = (__this->___photoImage_2);
		RealAngusItemDesc_t646 * L_2 = ___raid;
		NullCheck(L_2);
		Sprite_t512 * L_3 = RealAngusItemDesc_get_pictureSprite_m3504(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_set_sprite_m4315(L_1, L_3, /*hidden argument*/NULL);
		V_0 = (300.0f);
		float L_4 = V_0;
		V_1 = ((float)((float)L_4-(float)(10.0f)));
		float L_5 = V_1;
		V_2 = ((float)((float)L_5/(float)(1.33333f)));
		float L_6 = V_2;
		V_3 = ((float)((float)L_6+(float)(10.0f)));
		Image_t503 * L_7 = (__this->___frameImage_3);
		NullCheck(L_7);
		RectTransform_t545 * L_8 = Graphic_get_rectTransform_m4461(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		float L_10 = V_3;
		Vector2_t110  L_11 = {0};
		Vector2__ctor_m4352(&L_11, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		RectTransform_set_sizeDelta_m4354(L_8, L_11, /*hidden argument*/NULL);
		Image_t503 * L_12 = (__this->___shadowImage_4);
		NullCheck(L_12);
		RectTransform_t545 * L_13 = Graphic_get_rectTransform_m4461(L_12, /*hidden argument*/NULL);
		float L_14 = V_0;
		float L_15 = V_3;
		Vector2_t110  L_16 = {0};
		Vector2__ctor_m4352(&L_16, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_sizeDelta_m4354(L_13, L_16, /*hidden argument*/NULL);
		Image_t503 * L_17 = (__this->___photoImage_2);
		NullCheck(L_17);
		RectTransform_t545 * L_18 = Graphic_get_rectTransform_m4461(L_17, /*hidden argument*/NULL);
		float L_19 = V_1;
		float L_20 = V_2;
		Vector2_t110  L_21 = {0};
		Vector2__ctor_m4352(&L_21, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_set_sizeDelta_m4354(L_18, L_21, /*hidden argument*/NULL);
		RealAngusElementButton_UpdateState_m3497(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusElementButton::UpdateState()
extern "C" void RealAngusElementButton_UpdateState_m3497 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t646 * L_0 = RealAngusElementButton_get_raid_m3486(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = RealAngusItemDesc_get_unlocked_m3510(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Image_t503 * L_2 = (__this->___lockImage_5);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3901(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m4101(L_3, 0, /*hidden argument*/NULL);
		goto IL_0037;
	}

IL_0026:
	{
		Image_t503 * L_4 = (__this->___lockImage_5);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3901(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m4101(L_5, 1, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void RealAngusElementButton::ViewImage()
extern "C" void RealAngusElementButton_ViewImage_m3498 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t646 * L_0 = RealAngusElementButton_get_raid_m3486(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RealAngusItemDesc_SetViewed_m3517(L_0, 1, /*hidden argument*/NULL);
		RealAngusElementButton_UpdateState_m3497(__this, /*hidden argument*/NULL);
		ButtonHandler_t645 * L_1 = (__this->___OnButtonClicked_10);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ButtonHandler_t645 * L_2 = (__this->___OnButtonClicked_10);
		NullCheck(L_2);
		VirtActionInvoker1< RealAngusElementButton_t639 * >::Invoke(11 /* System.Void RealAngusElementButton/ButtonHandler::Invoke(RealAngusElementButton) */, L_2, __this);
	}

IL_0029:
	{
		return;
	}
}
// System.Void RealAngusElementButton::OnFirstDisplayed()
extern "C" void RealAngusElementButton_OnFirstDisplayed_m3499 (RealAngusElementButton_t639 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t646 * L_0 = RealAngusElementButton_get_raid_m3486(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = RealAngusItemDesc_get_unlocked_m3510(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		RealAngusItemDesc_t646 * L_2 = RealAngusElementButton_get_raid_m3486(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = RealAngusItemDesc_get_viewed_m3512(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		DistortForEffect_t537 * L_4 = (__this->___distortForEffect_9);
		float L_5 = (__this->___pauseBeforePulsing_6);
		NullCheck(L_4);
		DistortForEffect_DistortWithDelay_m2903(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		RealAngusElementButton_UpdateState_m3497(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusElementButton::SetSelected(System.Boolean,System.Boolean)
extern "C" void RealAngusElementButton_SetSelected_m3500 (RealAngusElementButton_t639 * __this, bool ___selected, bool ___skipTransition, const MethodInfo* method)
{
	{
		bool L_0 = ___selected;
		bool L_1 = RealAngusElementButton_get_selected_m3488(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0041;
		}
	}
	{
		bool L_2 = ___selected;
		RealAngusElementButton_set_selected_m3489(__this, L_2, /*hidden argument*/NULL);
		bool L_3 = ___skipTransition;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		__this->___startTransitionTime_7 = (0.0f);
		RealAngusElementButton_UpdateSelectionState_m3493(__this, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_002f:
	{
		float L_4 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTransitionTime_7 = L_4;
		__this->___transitioning_8 = 1;
	}

IL_0041:
	{
		return;
	}
}
// System.Void RealAngusElementButton::SetSelectedTransform(UnityEngine.Vector2,System.Single,System.Single)
extern "C" void RealAngusElementButton_SetSelectedTransform_m3501 (RealAngusElementButton_t639 * __this, Vector2_t110  ___position, float ___rotation, float ___scale, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = ___position;
		__this->___selectedPosition_14 = L_0;
		float L_1 = ___rotation;
		__this->___selectedRotation_15 = L_1;
		float L_2 = ___scale;
		__this->___selectedScale_16 = L_2;
		return;
	}
}
// System.Void RealAngusElementButton::SetHomeTransform(UnityEngine.Vector2,System.Single)
extern "C" void RealAngusElementButton_SetHomeTransform_m3502 (RealAngusElementButton_t639 * __this, Vector2_t110  ___position, float ___rotation, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = ___position;
		__this->___homePosition_12 = L_0;
		float L_1 = ___rotation;
		__this->___homeRotation_13 = L_1;
		GameObject_t352 * L_2 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4184(L_2, /*hidden argument*/NULL);
		Vector2_t110  L_4 = ___position;
		Vector3_t538  L_5 = Vector2_op_Implicit_m4353(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_m4345(L_3, L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t406 * L_7 = GameObject_get_transform_m4184(L_6, /*hidden argument*/NULL);
		float L_8 = ___rotation;
		Quaternion_t802  L_9 = Quaternion_Euler_m4293(NULL /*static, unused*/, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localRotation_m4359(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void RealAngusItemDesc::.ctor(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t512_m4326_MethodInfo_var;
extern "C" void RealAngusItemDesc__ctor_m3503 (RealAngusItemDesc_t646 * __this, String_t* ___pictureName, String_t* ___text, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Resources_Load_TisSprite_t512_m4326_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___pictureName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1156, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t512 * L_3 = Resources_Load_TisSprite_t512_m4326(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t512_m4326_MethodInfo_var);
		RealAngusItemDesc_set_pictureSprite_m3505(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___text;
		RealAngusItemDesc_set_text_m3507(__this, L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___tag;
		RealAngusItemDesc_set_tag_m3509(__this, L_5, /*hidden argument*/NULL);
		PersistentStorage_t624 * L_6 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_7 = RealAngusItemDesc_UnlockedTag_m3515(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = PersistentStorage_GetBoolValue_m3349(L_6, L_7, 0, /*hidden argument*/NULL);
		RealAngusItemDesc_set_unlocked_m3511(__this, L_8, /*hidden argument*/NULL);
		PersistentStorage_t624 * L_9 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_10 = RealAngusItemDesc_ViewedTag_m3514(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_11 = PersistentStorage_GetBoolValue_m3349(L_9, L_10, 0, /*hidden argument*/NULL);
		RealAngusItemDesc_set_viewed_m3513(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Sprite RealAngusItemDesc::get_pictureSprite()
extern "C" Sprite_t512 * RealAngusItemDesc_get_pictureSprite_m3504 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	{
		Sprite_t512 * L_0 = (__this->___U3CpictureSpriteU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_pictureSprite(UnityEngine.Sprite)
extern "C" void RealAngusItemDesc_set_pictureSprite_m3505 (RealAngusItemDesc_t646 * __this, Sprite_t512 * ___value, const MethodInfo* method)
{
	{
		Sprite_t512 * L_0 = ___value;
		__this->___U3CpictureSpriteU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String RealAngusItemDesc::get_text()
extern "C" String_t* RealAngusItemDesc_get_text_m3506 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CtextU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_text(System.String)
extern "C" void RealAngusItemDesc_set_text_m3507 (RealAngusItemDesc_t646 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CtextU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String RealAngusItemDesc::get_tag()
extern "C" String_t* RealAngusItemDesc_get_tag_m3508 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CtagU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_tag(System.String)
extern "C" void RealAngusItemDesc_set_tag_m3509 (RealAngusItemDesc_t646 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CtagU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean RealAngusItemDesc::get_unlocked()
extern "C" bool RealAngusItemDesc_get_unlocked_m3510 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CunlockedU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_unlocked(System.Boolean)
extern "C" void RealAngusItemDesc_set_unlocked_m3511 (RealAngusItemDesc_t646 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CunlockedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean RealAngusItemDesc::get_viewed()
extern "C" bool RealAngusItemDesc_get_viewed_m3512 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CviewedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_viewed(System.Boolean)
extern "C" void RealAngusItemDesc_set_viewed_m3513 (RealAngusItemDesc_t646 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CviewedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String RealAngusItemDesc::ViewedTag()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RealAngusItemDesc_ViewedTag_m3514 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = RealAngusItemDesc_get_tag_m3508(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1157, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String RealAngusItemDesc::UnlockedTag()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RealAngusItemDesc_UnlockedTag_m3515 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = RealAngusItemDesc_get_tag_m3508(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1158, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void RealAngusItemDesc::Unlock()
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void RealAngusItemDesc_Unlock_m3516 (RealAngusItemDesc_t646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusItemDesc_set_unlocked_m3511(__this, 1, /*hidden argument*/NULL);
		PersistentStorage_t624 * L_0 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_1 = RealAngusItemDesc_UnlockedTag_m3515(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PersistentStorage_SetBoolValue_m3348(L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusItemDesc::SetViewed(System.Boolean)
extern TypeInfo* PersistentStorage_t624_il2cpp_TypeInfo_var;
extern "C" void RealAngusItemDesc_SetViewed_m3517 (RealAngusItemDesc_t646 * __this, bool ___viewed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___viewed;
		RealAngusItemDesc_set_viewed_m3513(__this, L_0, /*hidden argument*/NULL);
		PersistentStorage_t624 * L_1 = ((PersistentStorage_t624_StaticFields*)PersistentStorage_t624_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_2 = RealAngusItemDesc_ViewedTag_m3514(__this, /*hidden argument*/NULL);
		bool L_3 = ___viewed;
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3348(L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Component_t775;
struct Image_t503;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t503_m4462(__this, method) (( Image_t503 * (*) (Component_t775 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4141_gshared)(__this, method)


// System.Void RealAngusSelectedButtonParent::.ctor()
extern "C" void RealAngusSelectedButtonParent__ctor_m3518 (RealAngusSelectedButtonParent_t638 * __this, const MethodInfo* method)
{
	{
		__this->___selectedBackgroundAlpha_6 = (0.4f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Awake()
extern const MethodInfo* Component_GetComponent_TisImage_t503_m4462_MethodInfo_var;
extern "C" void RealAngusSelectedButtonParent_Awake_m3519 (RealAngusSelectedButtonParent_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisImage_t503_m4462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484242);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t503 * L_0 = Component_GetComponent_TisImage_t503_m4462(__this, /*hidden argument*/Component_GetComponent_TisImage_t503_m4462_MethodInfo_var);
		__this->___image_5 = L_0;
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Start()
extern "C" void RealAngusSelectedButtonParent_Start_m3520 (RealAngusSelectedButtonParent_t638 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Update()
extern "C" void RealAngusSelectedButtonParent_Update_m3521 (RealAngusSelectedButtonParent_t638 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___transitioning_3);
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
		RealAngusSelectedButtonParent_UpdateSelectionState_m3522(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::UpdateSelectionState()
extern "C" void RealAngusSelectedButtonParent_UpdateSelectionState_m3522 (RealAngusSelectedButtonParent_t638 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___startTransitionTime_2);
		V_0 = ((float)((float)((float)((float)L_0-(float)L_1))/(float)(0.5f)));
		float L_2 = V_0;
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		__this->___transitioning_3 = 0;
		bool L_3 = (__this->___visible_4);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4101(L_4, 0, /*hidden argument*/NULL);
	}

IL_003c:
	{
		goto IL_00a5;
	}

IL_0041:
	{
		bool L_5 = (__this->___visible_4);
		if (!L_5)
		{
			goto IL_0078;
		}
	}
	{
		Image_t503 * L_6 = (__this->___image_5);
		float L_7 = (__this->___selectedBackgroundAlpha_6);
		float L_8 = V_0;
		Color_t325  L_9 = {0};
		Color__ctor_m4463(&L_9, (0.0f), (0.0f), (0.0f), ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_6);
		Graphic_set_color_m4347(L_6, L_9, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0078:
	{
		Image_t503 * L_10 = (__this->___image_5);
		float L_11 = (__this->___selectedBackgroundAlpha_6);
		float L_12 = V_0;
		Color_t325  L_13 = {0};
		Color__ctor_m4463(&L_13, (0.0f), (0.0f), (0.0f), ((float)((float)L_11*(float)((float)((float)(1.0f)-(float)L_12)))), /*hidden argument*/NULL);
		NullCheck(L_10);
		Graphic_set_color_m4347(L_10, L_13, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::StartVisibilityTransition(System.Boolean)
extern "C" void RealAngusSelectedButtonParent_StartVisibilityTransition_m3523 (RealAngusSelectedButtonParent_t638 * __this, bool ___visible, const MethodInfo* method)
{
	{
		bool L_0 = ___visible;
		__this->___visible_4 = L_0;
		__this->___transitioning_3 = 1;
		float L_1 = Time_get_time_m4286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTransitionTime_2 = L_1;
		bool L_2 = ___visible;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t352 * L_3 = Component_get_gameObject_m3901(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m4101(L_3, 1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
