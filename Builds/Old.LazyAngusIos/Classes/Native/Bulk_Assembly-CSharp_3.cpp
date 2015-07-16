#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// OnMouseEntersHole
#include "AssemblyU2DCSharp_OnMouseEntersHole.h"
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
// OnMouseEntersHole
#include "AssemblyU2DCSharp_OnMouseEntersHoleMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMove.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
// MouseHole
#include "AssemblyU2DCSharp_MouseHole.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMoveMethodDeclarations.h"
// MouseHole
#include "AssemblyU2DCSharp_MouseHoleMethodDeclarations.h"
struct Utilities_t524;
struct MouseMove_t473;
struct GameObject_t284;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t524;
struct Object_t;
struct GameObject_t284;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m3017_gshared (Object_t * __this /* static, unused */, GameObject_t284 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m3017(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t284 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m3017_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016(__this /* static, unused */, p0, method) (( MouseMove_t473 * (*) (Object_t * /* static, unused */, GameObject_t284 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m3017_gshared)(__this /* static, unused */, p0, method)

// System.Array
#include "mscorlib_System_Array.h"

// System.Void OnMouseEntersHole::.ctor()
extern "C" void OnMouseEntersHole__ctor_m2247 (OnMouseEntersHole_t480 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnMouseEntersHole::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016_MethodInfo_var;
extern "C" void OnMouseEntersHole_OnTriggerEnter2D_m2248 (OnMouseEntersHole_t480 * __this, Collider2D_t484 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484011);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t473 * V_0 = {0};
	{
		Collider2D_t484 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m3018(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral764, /*hidden argument*/NULL);
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
		Collider2D_t484 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t284 * L_4 = Component_get_gameObject_m2661(L_3, /*hidden argument*/NULL);
		MouseMove_t473 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t473 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m2931(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
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
		MouseMove_t473 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MouseMove_GetMousePhase_m2190(L_8, /*hidden argument*/NULL);
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
		MouseMove_t473 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = MouseMove_get_isPoisoned_m2167(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		MouseHole_t439 * L_12 = (__this->___mouseHole_2);
		NullCheck(L_12);
		MouseHole_ClearNMice_m2154(L_12, 1, /*hidden argument*/NULL);
		MouseMove_t473 * L_13 = V_0;
		NullCheck(L_13);
		MouseMove_OnKilled_m2187(L_13, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_005d:
	{
		MouseHole_t439 * L_14 = (__this->___mouseHole_2);
		MouseMove_t473 * L_15 = V_0;
		NullCheck(L_14);
		MouseHole_SaveMouse_m2156(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0069:
	{
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

// TimeController
#include "AssemblyU2DCSharp_TimeController.h"
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandler.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandlerMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"


// System.Void PausePlayToggle::.ctor()
extern "C" void PausePlayToggle__ctor_m2249 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::Awake()
extern "C" void PausePlayToggle_Awake_m2250 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	{
		__this->___registeredForEvents_5 = 0;
		return;
	}
}
// System.Void PausePlayToggle::Start()
extern "C" void PausePlayToggle_Start_m2251 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	{
		PausePlayToggle_RegisterForEvents_m2253(__this, /*hidden argument*/NULL);
		PausePlayToggle_UpdateUX_m2256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::OnDestroy()
extern "C" void PausePlayToggle_OnDestroy_m2252 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	{
		PausePlayToggle_UnregisterForEvents_m2254(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::RegisterForEvents()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PausePlayToggle_OnPauseChanged_m2255_MethodInfo_var;
extern "C" void PausePlayToggle_RegisterForEvents_m2253 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		PauseChangedEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		PausePlayToggle_OnPauseChanged_m2255_MethodInfo_var = il2cpp_codegen_method_info_from_index(431);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t510 * L_0 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_1 = { (void*)PausePlayToggle_OnPauseChanged_m2255_MethodInfo_var };
		PauseChangedEventHandler_t509 * L_2 = (PauseChangedEventHandler_t509 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t509_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m2443(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TimeController_add_PauseChanged_m2448(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_5 = 1;
		return;
	}
}
// System.Void PausePlayToggle::UnregisterForEvents()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PausePlayToggle_OnPauseChanged_m2255_MethodInfo_var;
extern "C" void PausePlayToggle_UnregisterForEvents_m2254 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		PauseChangedEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		PausePlayToggle_OnPauseChanged_m2255_MethodInfo_var = il2cpp_codegen_method_info_from_index(431);
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
		TimeController_t510 * L_1 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)PausePlayToggle_OnPauseChanged_m2255_MethodInfo_var };
		PauseChangedEventHandler_t509 * L_3 = (PauseChangedEventHandler_t509 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t509_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m2443(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimeController_remove_PauseChanged_m2449(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PausePlayToggle::OnPauseChanged()
extern "C" void PausePlayToggle_OnPauseChanged_m2255 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	{
		PausePlayToggle_UpdateUX_m2256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::UpdateUX()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_UpdateUX_m2256 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t510 * L_0 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m2450(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t458 * L_2 = (__this->___pausePlayButtonImage_2);
		Sprite_t393 * L_3 = (__this->___playSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m2984(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t458 * L_4 = (__this->___pausePlayButtonImage_2);
		Sprite_t393 * L_5 = (__this->___pauseSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m2984(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void PausePlayToggle::TogglePausePlay()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_TogglePausePlay_m2257 (PausePlayToggle_t481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t510 * L_0 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m2450(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TimeController_t510 * L_2 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		TimeController_UnPauseTime_m2454(L_2, /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001e:
	{
		TimeController_t510 * L_3 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_PauseTime_m2453(L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// PausedOverlay
#include "AssemblyU2DCSharp_PausedOverlay.h"
#ifndef _MSC_VER
#else
#endif
// PausedOverlay
#include "AssemblyU2DCSharp_PausedOverlayMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void PausedOverlay::.ctor()
extern "C" void PausedOverlay__ctor_m2258 (PausedOverlay_t482 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Awake()
extern TypeInfo* PausedOverlay_t482_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_Awake_m2259 (PausedOverlay_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PausedOverlay_t482_StaticFields*)PausedOverlay_t482_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		__this->___registeredForEvents_4 = 0;
		return;
	}
}
// System.Void PausedOverlay::Start()
extern "C" void PausedOverlay_Start_m2260 (PausedOverlay_t482 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_RegisterForEvents_m2261(__this, /*hidden argument*/NULL);
		PausedOverlay_UpdateUX_m2264(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::RegisterForEvents()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m2263_MethodInfo_var;
extern "C" void PausedOverlay_RegisterForEvents_m2261 (PausedOverlay_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		PauseChangedEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		PausedOverlay_OnPauseChanged_m2263_MethodInfo_var = il2cpp_codegen_method_info_from_index(432);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t510 * L_0 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_1 = { (void*)PausedOverlay_OnPauseChanged_m2263_MethodInfo_var };
		PauseChangedEventHandler_t509 * L_2 = (PauseChangedEventHandler_t509 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t509_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m2443(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TimeController_add_PauseChanged_m2448(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_4 = 1;
		return;
	}
}
// System.Void PausedOverlay::UnregisterForEvents()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern TypeInfo* PauseChangedEventHandler_t509_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m2263_MethodInfo_var;
extern "C" void PausedOverlay_UnregisterForEvents_m2262 (PausedOverlay_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		PauseChangedEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		PausedOverlay_OnPauseChanged_m2263_MethodInfo_var = il2cpp_codegen_method_info_from_index(432);
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
		TimeController_t510 * L_1 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)PausedOverlay_OnPauseChanged_m2263_MethodInfo_var };
		PauseChangedEventHandler_t509 * L_3 = (PauseChangedEventHandler_t509 *)il2cpp_codegen_object_new (PauseChangedEventHandler_t509_il2cpp_TypeInfo_var);
		PauseChangedEventHandler__ctor_m2443(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimeController_remove_PauseChanged_m2449(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PausedOverlay::OnPauseChanged()
extern "C" void PausedOverlay_OnPauseChanged_m2263 (PausedOverlay_t482 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_UpdateUX_m2264(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::UpdateUX()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_UpdateUX_m2264 (PausedOverlay_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t510 * L_0 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m2450(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t284 * L_2 = (__this->___overlay_2);
		NullCheck(L_2);
		GameObject_SetActive_m2799(L_2, 1, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0020:
	{
		GameObject_t284 * L_3 = (__this->___overlay_2);
		NullCheck(L_3);
		GameObject_SetActive_m2799(L_3, 0, /*hidden argument*/NULL);
	}

IL_002c:
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

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// GameController
#include "AssemblyU2DCSharp_GameController.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandler.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandlerMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"


// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m2265 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m2266 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_14 = 0;
		return;
	}
}
// System.Void PawController::Start()
extern "C" void PawController_Start_m2267 (PawController_t409 * __this, const MethodInfo* method)
{
	Vector3_t413  V_0 = {0};
	Vector3_t413  V_1 = {0};
	{
		GameController_t424 * L_0 = GameController_get_instance_m1965(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___gameController_13 = L_0;
		BoostConfig_t373 * L_1 = BoostConfig_get_instance_m1846(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_15 = L_1;
		__this->___swipePhase_3 = 0;
		__this->___swipeSpeed_11 = (7.0f);
		Transform_t323 * L_2 = (__this->___pawHomeCatTransform_16);
		NullCheck(L_2);
		Vector3_t413  L_3 = Transform_get_position_m2872(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		(&V_0)->___z_3 = (0.0f);
		Transform_t323 * L_4 = (__this->___pawHomeCatTransform_16);
		Vector3_t413  L_5 = V_0;
		NullCheck(L_4);
		Transform_set_position_m2874(L_4, L_5, /*hidden argument*/NULL);
		Transform_t323 * L_6 = (__this->___pawHomeCatTransform_16);
		NullCheck(L_6);
		Vector3_t413  L_7 = Transform_get_position_m2872(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Vector3_get_magnitude_m3093((&V_1), /*hidden argument*/NULL);
		__this->___pawHomeCatTransformMagnitude_18 = L_8;
		Transform_t323 * L_9 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		Transform_t323 * L_10 = (__this->___pawHomeCatTransform_16);
		NullCheck(L_10);
		Vector3_t413  L_11 = Transform_get_localPosition_m3023(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m3025(L_9, L_11, /*hidden argument*/NULL);
		PawController_RegisterForEvents_m2269(__this, /*hidden argument*/NULL);
		PawController_UpdatePawState_m2275(__this, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m2277(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m2268 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		PawController_UnregisterForEvents_m2270(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t388_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m2271_MethodInfo_var;
extern "C" void PawController_RegisterForEvents_m2269 (PawController_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		PawController_OnBoostUsageChanged_m2271_MethodInfo_var = il2cpp_codegen_method_info_from_index(433);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_15);
		IntPtr_t L_1 = { (void*)PawController_OnBoostUsageChanged_m2271_MethodInfo_var };
		BoostActiveEventHandler_t388 * L_2 = (BoostActiveEventHandler_t388 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t388_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1833(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m1844(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_14 = 1;
		return;
	}
}
// System.Void PawController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t388_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m2271_MethodInfo_var;
extern "C" void PawController_UnregisterForEvents_m2270 (PawController_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		PawController_OnBoostUsageChanged_m2271_MethodInfo_var = il2cpp_codegen_method_info_from_index(433);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_14);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		BoostConfig_t373 * L_1 = (__this->___boostConfig_15);
		IntPtr_t L_2 = { (void*)PawController_OnBoostUsageChanged_m2271_MethodInfo_var };
		BoostActiveEventHandler_t388 * L_3 = (BoostActiveEventHandler_t388 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t388_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1833(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m1845(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m2271 (PawController_t409 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
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
		PawController_UpdatePawState_m2275(__this, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void PawController::Update()
extern "C" void PawController_Update_m2272 (PawController_t409 * __this, const MethodInfo* method)
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
		float L_2 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = (__this->___pauseStarted_4);
		if ((!(((float)((float)((float)L_3-(float)L_4))) > ((float)(0.1f)))))
		{
			goto IL_0043;
		}
	}
	{
		PawController_SetPhase_m2273(__this, 2, /*hidden argument*/NULL);
	}

IL_0043:
	{
		goto IL_00ab;
	}

IL_0048:
	{
		Vector3_t413  L_5 = (__this->___swipeLocationCat_2);
		bool L_6 = PawController_MovePawTowards_m2276(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		PawController_SetPhase_m2273(__this, 3, /*hidden argument*/NULL);
	}

IL_0060:
	{
		goto IL_00ab;
	}

IL_0065:
	{
		float L_7 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = V_1;
		float L_9 = (__this->___pauseStarted_4);
		if ((!(((float)((float)((float)L_8-(float)L_9))) > ((float)(0.1f)))))
		{
			goto IL_0084;
		}
	}
	{
		PawController_SetPhase_m2273(__this, 4, /*hidden argument*/NULL);
	}

IL_0084:
	{
		goto IL_00ab;
	}

IL_0089:
	{
		Transform_t323 * L_10 = (__this->___pawHomeCatTransform_16);
		NullCheck(L_10);
		Vector3_t413  L_11 = Transform_get_localPosition_m3023(L_10, /*hidden argument*/NULL);
		bool L_12 = PawController_MovePawTowards_m2276(__this, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a6;
		}
	}
	{
		PawController_SetPhase_m2273(__this, 0, /*hidden argument*/NULL);
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
extern "C" void PawController_SetPhase_m2273 (PawController_t409 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___swipePhase_3);
		V_0 = L_0;
		int32_t L_1 = ___newPhase;
		__this->___swipePhase_3 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		GameController_t424 * L_3 = (__this->___gameController_13);
		int32_t L_4 = (__this->___killsThisSwipe_12);
		NullCheck(L_3);
		GameController_LogKillsPerSwipe_m1983(L_3, L_4, /*hidden argument*/NULL);
		__this->___killsThisSwipe_12 = 0;
	}

IL_002d:
	{
		int32_t L_5 = ___newPhase;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = ___newPhase;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		float L_7 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pauseStarted_4 = L_7;
	}

IL_0046:
	{
		int32_t L_8 = ___newPhase;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0053;
		}
	}
	{
		PawController_PlayRandomSound_m2274(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		PawController_UpdatePawState_m2275(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::PlayRandomSound()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern "C" void PawController_PlayRandomSound_m2274 (PawController_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		AudioSourceU5BU5D_t405* L_0 = (__this->___audioSources_19);
		NullCheck(L_0);
		int32_t L_1 = Random_Range_m3008(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		SoundController_t508 * L_2 = ((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_2);
		bool L_3 = SoundController_get_sfxMuted_m2431(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		AudioSourceU5BU5D_t405* L_4 = (__this->___audioSources_19);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(AudioSource_t392 **)(AudioSource_t392 **)SZArrayLdElema(L_4, L_6)));
		AudioSource_Play_m2996((*(AudioSource_t392 **)(AudioSource_t392 **)SZArrayLdElema(L_4, L_6)), /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m2275 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = (__this->___boostConfig_15);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m1848(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_009d;
		}
	}
	{
		GameObject_t284 * L_2 = (__this->___dangerPawSpriteGameObject_6);
		NullCheck(L_2);
		GameObject_SetActive_m2799(L_2, 0, /*hidden argument*/NULL);
		Collider2D_t484 * L_3 = (__this->___normalCollider_9);
		NullCheck(L_3);
		GameObject_t284 * L_4 = Component_get_gameObject_m2661(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m2799(L_4, 0, /*hidden argument*/NULL);
		Collider2D_t484 * L_5 = (__this->___bigCollider_10);
		NullCheck(L_5);
		GameObject_t284 * L_6 = Component_get_gameObject_m2661(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m2799(L_6, 1, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___swipePhase_3);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0074;
		}
	}
	{
		GameObject_t284 * L_8 = (__this->___bigDangerPawSpriteGameObject_8);
		NullCheck(L_8);
		GameObject_SetActive_m2799(L_8, 1, /*hidden argument*/NULL);
		GameObject_t284 * L_9 = (__this->___bigPawSpriteGameObject_7);
		NullCheck(L_9);
		GameObject_SetActive_m2799(L_9, 0, /*hidden argument*/NULL);
		Collider2D_t484 * L_10 = (__this->___bigCollider_10);
		NullCheck(L_10);
		Collider2D_set_isTrigger_m3102(L_10, 1, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0074:
	{
		GameObject_t284 * L_11 = (__this->___bigDangerPawSpriteGameObject_8);
		NullCheck(L_11);
		GameObject_SetActive_m2799(L_11, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_12 = (__this->___bigPawSpriteGameObject_7);
		NullCheck(L_12);
		GameObject_SetActive_m2799(L_12, 1, /*hidden argument*/NULL);
		Collider2D_t484 * L_13 = (__this->___bigCollider_10);
		NullCheck(L_13);
		Collider2D_set_isTrigger_m3102(L_13, 0, /*hidden argument*/NULL);
	}

IL_0098:
	{
		goto IL_0118;
	}

IL_009d:
	{
		GameObject_t284 * L_14 = (__this->___bigDangerPawSpriteGameObject_8);
		NullCheck(L_14);
		GameObject_SetActive_m2799(L_14, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_15 = (__this->___bigPawSpriteGameObject_7);
		NullCheck(L_15);
		GameObject_SetActive_m2799(L_15, 0, /*hidden argument*/NULL);
		Collider2D_t484 * L_16 = (__this->___bigCollider_10);
		NullCheck(L_16);
		GameObject_t284 * L_17 = Component_get_gameObject_m2661(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_m2799(L_17, 0, /*hidden argument*/NULL);
		Collider2D_t484 * L_18 = (__this->___normalCollider_9);
		NullCheck(L_18);
		GameObject_t284 * L_19 = Component_get_gameObject_m2661(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m2799(L_19, 1, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___swipePhase_3);
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_0100;
		}
	}
	{
		GameObject_t284 * L_21 = (__this->___dangerPawSpriteGameObject_6);
		NullCheck(L_21);
		GameObject_SetActive_m2799(L_21, 1, /*hidden argument*/NULL);
		Collider2D_t484 * L_22 = (__this->___normalCollider_9);
		NullCheck(L_22);
		Collider2D_set_isTrigger_m3102(L_22, 1, /*hidden argument*/NULL);
		goto IL_0118;
	}

IL_0100:
	{
		GameObject_t284 * L_23 = (__this->___dangerPawSpriteGameObject_6);
		NullCheck(L_23);
		GameObject_SetActive_m2799(L_23, 0, /*hidden argument*/NULL);
		Collider2D_t484 * L_24 = (__this->___normalCollider_9);
		NullCheck(L_24);
		Collider2D_set_isTrigger_m3102(L_24, 0, /*hidden argument*/NULL);
	}

IL_0118:
	{
		return;
	}
}
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern "C" bool PawController_MovePawTowards_m2276 (PawController_t409 * __this, Vector3_t413  ___targetLocationCat, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t413  V_2 = {0};
	Vector3_t413  V_3 = {0};
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t413  V_7 = {0};
	bool V_8 = false;
	Vector3_t413  V_9 = {0};
	{
		V_0 = 5;
		TimeController_t510 * L_0 = ((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m2450(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_2*(int32_t)L_3));
	}

IL_0015:
	{
		(&___targetLocationCat)->___z_3 = (0.0f);
		float L_4 = Vector3_get_magnitude_m3093((&___targetLocationCat), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = V_1;
		float L_6 = (__this->___pawHomeCatTransformMagnitude_18);
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		Transform_t323 * L_7 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t413  L_8 = Transform_get_localPosition_m3023(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t413  L_9 = ___targetLocationCat;
		Vector3_t413  L_10 = V_2;
		Vector3_t413  L_11 = Vector3_op_Subtraction_m3103(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		float L_12 = Time_get_deltaTime_m3021(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = (__this->___swipeSpeed_11);
		float L_14 = V_4;
		V_5 = ((float)((float)L_13*(float)L_14));
		float L_15 = Vector3_get_magnitude_m3093((&V_3), /*hidden argument*/NULL);
		V_6 = L_15;
		float L_16 = V_6;
		float L_17 = V_5;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_007a;
		}
	}
	{
		Vector3_t413  L_18 = ___targetLocationCat;
		V_7 = L_18;
		V_8 = 1;
		goto IL_0098;
	}

IL_007a:
	{
		Vector3_t413  L_19 = V_3;
		float L_20 = V_5;
		Vector3_t413  L_21 = Vector3_op_Multiply_m2877(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_6;
		Vector3_t413  L_23 = Vector3_op_Division_m3104(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_9 = L_23;
		Vector3_t413  L_24 = V_2;
		Vector3_t413  L_25 = V_9;
		Vector3_t413  L_26 = Vector3_op_Addition_m3024(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		V_8 = 0;
	}

IL_0098:
	{
		Transform_t323 * L_27 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		Vector3_t413  L_28 = V_7;
		NullCheck(L_27);
		Transform_set_localPosition_m3025(L_27, L_28, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m2277(__this, /*hidden argument*/NULL);
		bool L_29 = V_8;
		return L_29;
	}
}
// System.Void PawController::UpdateArmRotation()
extern TypeInfo* Mathf_t629_il2cpp_TypeInfo_var;
extern "C" void PawController_UpdateArmRotation_m2277 (PawController_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(354);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t413  V_0 = {0};
	float V_1 = 0.0f;
	{
		Transform_t323 * L_0 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t413  L_1 = Transform_get_localPosition_m3023(L_0, /*hidden argument*/NULL);
		Transform_t323 * L_2 = (__this->___shoulderJointCatTransform_17);
		NullCheck(L_2);
		Vector3_t413  L_3 = Transform_get_localPosition_m3023(L_2, /*hidden argument*/NULL);
		Vector3_t413  L_4 = Vector3_op_Subtraction_m3103(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		float L_6 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t629_il2cpp_TypeInfo_var);
		float L_7 = atan2f(L_5, L_6);
		V_1 = L_7;
		Transform_t323 * L_8 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		float L_9 = V_1;
		Quaternion_t622  L_10 = Quaternion_Euler_m3026(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_9*(float)(57.29578f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_m3034(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m2278 (PawController_t409 * __this, Vector3_t413  ___location, const MethodInfo* method)
{
	{
		Vector3_t413  L_0 = ___location;
		__this->___swipeLocationCat_2 = L_0;
		float L_1 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pauseStarted_4 = L_1;
		PawController_SetPhase_m2273(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m2279 (PawController_t409 * __this, const MethodInfo* method)
{
	{
		PawController_SetPhase_m2273(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::CountKill(MouseMove)
extern "C" void PawController_CountKill_m2280 (PawController_t409 * __this, MouseMove_t473 * ___mouseMove, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___killsThisSwipe_12);
		__this->___killsThisSwipe_12 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
#ifndef _MSC_VER
#else
#endif
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"

// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONMethodDeclarations.h"


// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m2281 (PersistentStorage_t485 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::.cctor()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage__cctor_m2282 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3 = (String_t*) &_stringLiteral848;
		return;
	}
}
// System.String PersistentStorage::FullPathFromPartialPath(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PersistentStorage_FullPathFromPartialPath_m2283 (PersistentStorage_t485 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m3105(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m222(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral334, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::Awake()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_Awake_m2284 (PersistentStorage_t485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		PersistentStorage_LoadValueStore_m2292(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String PersistentStorage::ReadFileAsText(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PersistentStorage_ReadFileAsText_m2285 (PersistentStorage_t485 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___path;
		String_t* L_1 = PersistentStorage_FullPathFromPartialPath_m2283(__this, L_0, /*hidden argument*/NULL);
		___path = L_1;
		String_t* L_2 = ___path;
		bool L_3 = File_Exists_m3106(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
		String_t* L_6 = File_ReadAllText_m3107(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void PersistentStorage::WriteTextToFile(System.String,System.String)
extern "C" void PersistentStorage_WriteTextToFile_m2286 (PersistentStorage_t485 * __this, String_t* ___path, String_t* ___text, const MethodInfo* method)
{
	{
		String_t* L_0 = ___path;
		String_t* L_1 = PersistentStorage_FullPathFromPartialPath_m2283(__this, L_0, /*hidden argument*/NULL);
		___path = L_1;
		String_t* L_2 = ___path;
		String_t* L_3 = ___text;
		File_WriteAllText_m3108(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_SetIntValue_m2287 (PersistentStorage_t485 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		JSONNode_t2 * L_0 = (__this->___storedValues_4);
		String_t* L_1 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_3 = ___value;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m175(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		JSONNode_t2 * L_7 = JSONNode_op_Implicit_m61(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, JSONNode_t2 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_0, L_1, L_7);
		PersistentStorage_SaveValueStore_m2291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" int32_t PersistentStorage_GetIntValue_m2288 (PersistentStorage_t485 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t2 * L_0 = (__this->___storedValues_4);
		bool L_1 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
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
		JSONNode_t2 * L_3 = (__this->___storedValues_4);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		JSONNode_t2 * L_5 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_3, L_4);
		String_t* L_6 = JSONNode_op_Implicit_m62(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_10 = Convert_ToInt32_m2660(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m2289 (PersistentStorage_t485 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	PersistentStorage_t485 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	PersistentStorage_t485 * G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	PersistentStorage_t485 * G_B3_2 = {0};
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
		PersistentStorage_SetIntValue_m2287(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" bool PersistentStorage_GetBoolValue_m2290 (PersistentStorage_t485 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t2 * L_0 = (__this->___storedValues_4);
		bool L_1 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
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
		JSONNode_t2 * L_3 = (__this->___storedValues_4);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		JSONNode_t2 * L_5 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_3, L_4);
		String_t* L_6 = JSONNode_op_Implicit_m62(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_10 = Convert_ToInt32_m2660(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_10) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PersistentStorage::SaveValueStore()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_SaveValueStore_m2291 (PersistentStorage_t485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		JSONNode_t2 * L_0 = (__this->___storedValues_4);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_0);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		String_t* L_2 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3;
		String_t* L_3 = V_0;
		PersistentStorage_WriteTextToFile_m2286(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::LoadValueStore()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_LoadValueStore_m2292 (PersistentStorage_t485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___valueStoreFilePath_3;
		String_t* L_1 = PersistentStorage_ReadFileAsText_m2285(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		JSONNode_t2 * L_3 = JSON_Parse_m159(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___storedValues_4 = L_3;
		JSONNode_t2 * L_4 = (__this->___storedValues_4);
		bool L_5 = JSONNode_op_Equality_m63(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		JSONNode_t2 * L_6 = JSON_Parse_m159(NULL /*static, unused*/, (String_t*) &_stringLiteral71, /*hidden argument*/NULL);
		__this->___storedValues_4 = L_6;
	}

IL_0039:
	{
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

// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharing.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharing.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"
// FacebookSharing
#include "AssemblyU2DCSharp_FacebookSharingMethodDeclarations.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharingMethodDeclarations.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"


// System.Void PlayLevelHandler::.ctor()
extern "C" void PlayLevelHandler__ctor_m2293 (PlayLevelHandler_t486 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayLevelHandler::Start()
extern "C" void PlayLevelHandler_Start_m2294 (PlayLevelHandler_t486 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayLevelHandler::Play()
extern TypeInfo* FacebookSharing_t415_il2cpp_TypeInfo_var;
extern TypeInfo* TwitterSharing_t521_il2cpp_TypeInfo_var;
extern "C" void PlayLevelHandler_Play_m2295 (PlayLevelHandler_t486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		TwitterSharing_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t407 * L_0 = DebugConfig_get_instance_m1898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___debugFBShare_2);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		FacebookSharing_t415 * L_2 = ((FacebookSharing_t415_StaticFields*)FacebookSharing_t415_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_2);
		FacebookSharing_ShareScore_m1936(L_2, ((int32_t)24), /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		DebugConfig_t407 * L_3 = DebugConfig_get_instance_m1898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (L_3->___debugTwitterShare_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		TwitterSharing_t521 * L_5 = ((TwitterSharing_t521_StaticFields*)TwitterSharing_t521_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		TwitterSharing_ShareScore_m2505(L_5, ((int32_t)25), /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		GamePhaseState_t430 * L_6 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GamePhaseState_TransitionToPhase_m2031(L_6, 2, /*hidden argument*/NULL);
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



// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
#ifndef _MSC_VER
#else
#endif
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"

// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHan.h"
// InputHandler
#include "AssemblyU2DCSharp_InputHandler.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRenderer.h"
// TipController
#include "AssemblyU2DCSharp_TipController.h"
// HeadMovement
#include "AssemblyU2DCSharp_HeadMovement.h"
// FartPuff
#include "AssemblyU2DCSharp_FartPuff.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHanMethodDeclarations.h"
// InputHandler
#include "AssemblyU2DCSharp_InputHandlerMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRendererMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"
// HeadMovement
#include "AssemblyU2DCSharp_HeadMovementMethodDeclarations.h"
// FartPuff
#include "AssemblyU2DCSharp_FartPuffMethodDeclarations.h"
struct GameObject_t284;
struct PawController_t409;
struct GameObject_t284;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2860_gshared (GameObject_t284 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2860(__this, method) (( Object_t * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<PawController>()
// !!0 UnityEngine.GameObject::GetComponent<PawController>()
#define GameObject_GetComponent_TisPawController_t409_m3109(__this, method) (( PawController_t409 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)
struct GameObject_t284;
struct FartPuff_t416;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
// !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
#define GameObject_GetComponent_TisFartPuff_t416_m3110(__this, method) (( FartPuff_t416 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m2296 (PlayerController_t488 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController PlayerController::get_instance()
extern TypeInfo* PlayerController_t488_il2cpp_TypeInfo_var;
extern "C" PlayerController_t488 * PlayerController_get_instance_m2297 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t488 * L_0 = ((PlayerController_t488_StaticFields*)PlayerController_t488_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void PlayerController::set_instance(PlayerController)
extern TypeInfo* PlayerController_t488_il2cpp_TypeInfo_var;
extern "C" void PlayerController_set_instance_m2298 (Object_t * __this /* static, unused */, PlayerController_t488 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t488 * L_0 = ___value;
		((PlayerController_t488_StaticFields*)PlayerController_t488_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void PlayerController::Awake()
extern TypeInfo* TipConfig_t394_il2cpp_TypeInfo_var;
extern "C" void PlayerController_Awake_m2299 (PlayerController_t488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_instance_m2298(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		TipConfig_t394 * L_0 = (TipConfig_t394 *)il2cpp_codegen_object_new (TipConfig_t394_il2cpp_TypeInfo_var);
		TipConfig__ctor_m2459(L_0, (String_t*) &_stringLiteral849, (String_t*) &_stringLiteral850, /*hidden argument*/NULL);
		__this->___turningTip_15 = L_0;
		return;
	}
}
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m2300 (PlayerController_t488 * __this, const MethodInfo* method)
{
	{
		PlayerController_RegisterForEvents_m2302(__this, /*hidden argument*/NULL);
		PlayerController_Reset_m2306(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m2301 (PlayerController_t488 * __this, const MethodInfo* method)
{
	{
		PlayerController_UnregisterForEvents_m2303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t388_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m2304_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m2305_MethodInfo_var;
extern "C" void PlayerController_RegisterForEvents_m2302 (PlayerController_t488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		BoostActiveEventHandler_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		PlayerController_OnInstanceChanged_m2304_MethodInfo_var = il2cpp_codegen_method_info_from_index(434);
		PlayerController_OnBoostActive_m2305_MethodInfo_var = il2cpp_codegen_method_info_from_index(435);
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
		GamePhaseState_t430 * L_1 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m2304_MethodInfo_var };
		GameInstanceChangedEventHandler_t428 * L_3 = (GameInstanceChangedEventHandler_t428 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m1999(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2014(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t373 * L_4 = BoostConfig_get_instance_m1846(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m2305_MethodInfo_var };
		BoostActiveEventHandler_t388 * L_6 = (BoostActiveEventHandler_t388 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t388_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1833(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m1844(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t388_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m2304_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m2305_MethodInfo_var;
extern "C" void PlayerController_UnregisterForEvents_m2303 (PlayerController_t488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		BoostActiveEventHandler_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		PlayerController_OnInstanceChanged_m2304_MethodInfo_var = il2cpp_codegen_method_info_from_index(434);
		PlayerController_OnBoostActive_m2305_MethodInfo_var = il2cpp_codegen_method_info_from_index(435);
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
		GamePhaseState_t430 * L_1 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m2304_MethodInfo_var };
		GameInstanceChangedEventHandler_t428 * L_3 = (GameInstanceChangedEventHandler_t428 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m1999(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m2015(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t373 * L_4 = BoostConfig_get_instance_m1846(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m2305_MethodInfo_var };
		BoostActiveEventHandler_t388 * L_6 = (BoostActiveEventHandler_t388 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t388_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m1833(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m1845(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m2304 (PlayerController_t488 * __this, const MethodInfo* method)
{
	{
		PlayerController_Reset_m2306(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m2305 (PlayerController_t488 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		PlayerController_MakeFartPuff_m2314(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m2306 (PlayerController_t488 * __this, const MethodInfo* method)
{
	{
		__this->___bodyMovement_9 = 0;
		__this->___currentTurnAngleDegrees_11 = (45.0f);
		float L_0 = (__this->___currentTurnAngleDegrees_11);
		__this->___targetTurnAngleDegrees_10 = L_0;
		Transform_t323 * L_1 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		float L_2 = (__this->___currentTurnAngleDegrees_11);
		Quaternion_t622  L_3 = Quaternion_Euler_m3026(NULL /*static, unused*/, (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m2978(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m2307 (PlayerController_t488 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		PlayerController_MaybeMakeFartPuff_m2313(__this, /*hidden argument*/NULL);
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
		PlayerController_UpdateDrag_m2309(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_002b:
	{
		PlayerController_UpdateTurn_m2308(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0036:
	{
		return;
	}
}
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m2308 (PlayerController_t488 * __this, const MethodInfo* method)
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
		float L_3 = Time_get_deltaTime_m3021(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		float L_8 = Time_get_deltaTime_m3021(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Transform_t323 * L_12 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		float L_13 = (__this->___currentTurnAngleDegrees_11);
		Quaternion_t622  L_14 = Quaternion_Euler_m3026(NULL /*static, unused*/, (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m2978(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UpdateDrag()
extern TypeInfo* InputHandler_t442_il2cpp_TypeInfo_var;
extern "C" void PlayerController_UpdateDrag_m2309 (PlayerController_t488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t413  V_0 = {0};
	bool V_1 = false;
	Vector3_t413  V_2 = {0};
	Vector3_t413  V_3 = {0};
	float V_4 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputHandler_t442_il2cpp_TypeInfo_var);
		InputHandler_t442 * L_0 = InputHandler_get_instance_m2073(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InputHandler_GetWorldClickPosition_m2083(L_0, (&V_0), /*hidden argument*/NULL);
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
		Camera_t441 * L_3 = Camera_get_main_m2837(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t413  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t413  L_5 = Camera_ScreenToWorldPoint_m2873(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_t323 * L_6 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		Vector3_t413  L_7 = V_2;
		NullCheck(L_6);
		Vector3_t413  L_8 = Transform_InverseTransformPoint_m3111(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t413  L_9 = V_3;
		float L_10 = Utilities_GetZAngle_m2518(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Transform_t323 * L_11 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		float L_12 = V_4;
		float L_13 = (__this->___dragAnchorAngleCat_13);
		Vector3_t413  L_14 = {0};
		Vector3__ctor_m2865(&L_14, (0.0f), (0.0f), ((float)((float)L_12-(float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m3112(L_11, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern const MethodInfo* GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var;
extern "C" void PlayerController_HandleDragClickStart_m2310 (PlayerController_t488 * __this, Vector2_t68  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___bodyMovement_9 = 2;
		Transform_t323 * L_0 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		Vector2_t68  L_1 = ___worldPoint2d;
		Vector3_t413  L_2 = Vector2_op_Implicit_m3046(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t413  L_3 = Transform_InverseTransformPoint_m3111(L_0, L_2, /*hidden argument*/NULL);
		__this->___dragAnchorCat_12 = L_3;
		Vector3_t413 * L_4 = &(__this->___dragAnchorCat_12);
		L_4->___z_3 = (0.0f);
		Vector3_t413  L_5 = (__this->___dragAnchorCat_12);
		float L_6 = Utilities_GetZAngle_m2518(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___dragAnchorAngleCat_13 = L_6;
		GameObject_t284 * L_7 = (__this->___rightPawGameObject_3);
		NullCheck(L_7);
		PawController_t409 * L_8 = GameObject_GetComponent_TisPawController_t409_m3109(L_7, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var);
		NullCheck(L_8);
		PawController_CancelSwipe_m2279(L_8, /*hidden argument*/NULL);
		GameObject_t284 * L_9 = (__this->___leftPawGameObject_4);
		NullCheck(L_9);
		PawController_t409 * L_10 = GameObject_GetComponent_TisPawController_t409_m3109(L_9, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var);
		NullCheck(L_10);
		PawController_CancelSwipe_m2279(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern TypeInfo* TipController_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var;
extern "C" void PlayerController_HandleSlapClickStart_m2311 (PlayerController_t488 * __this, Vector2_t68  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t413  V_0 = {0};
	float V_1 = 0.0f;
	GameObject_t284 * V_2 = {0};
	Quaternion_t622  V_3 = {0};
	Vector3_t413  V_4 = {0};
	{
		Transform_t323 * L_0 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		Vector2_t68  L_1 = ___worldPoint2d;
		Vector3_t413  L_2 = Vector2_op_Implicit_m3046(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t413  L_3 = Transform_InverseTransformPoint_m3111(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector3_get_magnitude_m3093((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(4.1f)))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		Vector3_t413  L_5 = V_0;
		float L_6 = Utilities_GetZAngle_m2518(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = (GameObject_t284 *)NULL;
		float L_7 = V_1;
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		float L_8 = V_1;
		ConeOfViewRenderer_t402 * L_9 = (__this->___coneOfView_5);
		NullCheck(L_9);
		float L_10 = ConeOfViewRenderer_get_actualAngleRange_m1878(L_9, /*hidden argument*/NULL);
		if ((!(((float)L_8) <= ((float)((float)((float)L_10/(float)(2.0f)))))))
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t284 * L_11 = (__this->___leftPawGameObject_4);
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
		ConeOfViewRenderer_t402 * L_14 = (__this->___coneOfView_5);
		NullCheck(L_14);
		float L_15 = ConeOfViewRenderer_get_actualAngleRange_m1878(L_14, /*hidden argument*/NULL);
		if ((!(((float)L_13) >= ((float)((float)((float)((-L_15))/(float)(2.0f)))))))
		{
			goto IL_0085;
		}
	}
	{
		GameObject_t284 * L_16 = (__this->___rightPawGameObject_3);
		V_2 = L_16;
	}

IL_0085:
	{
		GameObject_t284 * L_17 = V_2;
		bool L_18 = Object_op_Implicit_m2931(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_t284 * L_19 = V_2;
		NullCheck(L_19);
		PawController_t409 * L_20 = GameObject_GetComponent_TisPawController_t409_m3109(L_19, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var);
		Vector3_t413  L_21 = V_0;
		NullCheck(L_20);
		PawController_Swipe_m2278(L_20, L_21, /*hidden argument*/NULL);
		goto IL_010e;
	}

IL_00a1:
	{
		Transform_t323 * L_22 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Quaternion_t622  L_23 = Transform_get_rotation_m3011(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		Vector3_t413  L_24 = Quaternion_get_eulerAngles_m3113((&V_3), /*hidden argument*/NULL);
		V_4 = L_24;
		float L_25 = ((&V_4)->___z_3);
		__this->___currentTurnAngleDegrees_11 = L_25;
		float L_26 = V_1;
		float L_27 = (__this->___currentTurnAngleDegrees_11);
		__this->___targetTurnAngleDegrees_10 = ((float)((float)L_26+(float)L_27));
		__this->___bodyMovement_9 = 1;
		GameObject_t284 * L_28 = (__this->___rightPawGameObject_3);
		NullCheck(L_28);
		PawController_t409 * L_29 = GameObject_GetComponent_TisPawController_t409_m3109(L_28, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var);
		NullCheck(L_29);
		PawController_CancelSwipe_m2279(L_29, /*hidden argument*/NULL);
		GameObject_t284 * L_30 = (__this->___leftPawGameObject_4);
		NullCheck(L_30);
		PawController_t409 * L_31 = GameObject_GetComponent_TisPawController_t409_m3109(L_30, /*hidden argument*/GameObject_GetComponent_TisPawController_t409_m3109_MethodInfo_var);
		NullCheck(L_31);
		PawController_CancelSwipe_m2279(L_31, /*hidden argument*/NULL);
		TipController_t512 * L_32 = ((TipController_t512_StaticFields*)TipController_t512_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t394 * L_33 = (__this->___turningTip_15);
		float L_34 = (__this->___turningTipPause_16);
		NullCheck(L_32);
		TipController_EnqueueTip_m2474(L_32, L_33, L_34, /*hidden argument*/NULL);
	}

IL_010e:
	{
		HeadMovement_t436 * L_35 = (__this->___headMovement_6);
		Vector3_t413  L_36 = V_0;
		NullCheck(L_35);
		HeadMovement_LookTowards_m2048(L_35, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m2312 (PlayerController_t488 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		DebugConfig_t407 * L_1 = DebugConfig_get_instance_m1898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = DebugConfig_get_useDebugValues_m1896(L_1, /*hidden argument*/NULL);
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
extern "C" void PlayerController_MaybeMakeFartPuff_m2313 (PlayerController_t488 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1846(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m1848(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___lastFartTime_17);
		float L_4 = (__this->___fartPause_18);
		if ((!(((float)L_2) > ((float)((float)((float)L_3+(float)L_4))))))
		{
			goto IL_002d;
		}
	}
	{
		PlayerController_MakeFartPuff_m2314(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PlayerController::MakeFartPuff()
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFartPuff_t416_m3110_MethodInfo_var;
extern "C" void PlayerController_MakeFartPuff_m2314 (PlayerController_t488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisFartPuff_t416_m3110_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484085);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	FartPuff_t416 * V_1 = {0};
	{
		GameObject_t284 * L_0 = (__this->___fartPuffPrototype_7);
		GameObject_t284 * L_1 = (__this->___butthole_8);
		NullCheck(L_1);
		Transform_t323 * L_2 = GameObject_get_transform_m2870(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t413  L_3 = Transform_get_position_m2872(L_2, /*hidden argument*/NULL);
		Quaternion_t622  L_4 = Quaternion_get_identity_m2972(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t549 * L_5 = Object_Instantiate_m2973(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t284 *)IsInst(L_5, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_6 = V_0;
		NullCheck(L_6);
		FartPuff_t416 * L_7 = GameObject_GetComponent_TisFartPuff_t416_m3110(L_6, /*hidden argument*/GameObject_GetComponent_TisFartPuff_t416_m3110_MethodInfo_var);
		V_1 = L_7;
		FartPuff_t416 * L_8 = V_1;
		Transform_t323 * L_9 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t622  L_10 = Transform_get_rotation_m3011(L_9, /*hidden argument*/NULL);
		Vector3_t413  L_11 = Vector3_get_left_m3114(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t413  L_12 = Quaternion_op_Multiply_m3098(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		FartPuff_SetDirection_m1946(L_8, L_12, /*hidden argument*/NULL);
		float L_13 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
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

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void PlayerStats/ScoreChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ScoreChangedEventHandler__ctor_m2315 (ScoreChangedEventHandler_t489 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m2316 (ScoreChangedEventHandler_t489 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreChangedEventHandler_Invoke_m2316((ScoreChangedEventHandler_t489 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t489(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m2317 (ScoreChangedEventHandler_t489 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m2318 (ScoreChangedEventHandler_t489 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandlerMethodDeclarations.h"



// System.Void PlayerStats/TreatsChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TreatsChangedEventHandler__ctor_m2319 (TreatsChangedEventHandler_t490 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/TreatsChangedEventHandler::Invoke()
extern "C" void TreatsChangedEventHandler_Invoke_m2320 (TreatsChangedEventHandler_t490 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TreatsChangedEventHandler_Invoke_m2320((TreatsChangedEventHandler_t490 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_TreatsChangedEventHandler_t490(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/TreatsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TreatsChangedEventHandler_BeginInvoke_m2321 (TreatsChangedEventHandler_t490 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/TreatsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TreatsChangedEventHandler_EndInvoke_m2322 (TreatsChangedEventHandler_t490 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void BoostsChangedEventHandler__ctor_m2323 (BoostsChangedEventHandler_t491 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m2324 (BoostsChangedEventHandler_t491 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostsChangedEventHandler_Invoke_m2324((BoostsChangedEventHandler_t491 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t491(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m2325 (BoostsChangedEventHandler_t491 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m2326 (BoostsChangedEventHandler_t491 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
#ifndef _MSC_VER
#else
#endif
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
#include "mscorlib_ArrayTypes.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"


// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m2327 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_ScoreChanged_m2328 (PlayerStats_t396 * __this, ScoreChangedEventHandler_t489 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t489 * L_0 = (__this->___ScoreChanged_8);
		ScoreChangedEventHandler_t489 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Combine_m2696(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_8 = ((ScoreChangedEventHandler_t489 *)Castclass(L_2, ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_ScoreChanged_m2329 (PlayerStats_t396 * __this, ScoreChangedEventHandler_t489 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t489 * L_0 = (__this->___ScoreChanged_8);
		ScoreChangedEventHandler_t489 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Remove_m2697(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_8 = ((ScoreChangedEventHandler_t489 *)Castclass(L_2, ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern TypeInfo* TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_TreatsChanged_m2330 (PlayerStats_t396 * __this, TreatsChangedEventHandler_t490 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		TreatsChangedEventHandler_t490 * L_0 = (__this->___TreatsChanged_9);
		TreatsChangedEventHandler_t490 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Combine_m2696(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TreatsChanged_9 = ((TreatsChangedEventHandler_t490 *)Castclass(L_2, TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern TypeInfo* TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_TreatsChanged_m2331 (PlayerStats_t396 * __this, TreatsChangedEventHandler_t490 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		s_Il2CppMethodIntialized = true;
	}
	{
		TreatsChangedEventHandler_t490 * L_0 = (__this->___TreatsChanged_9);
		TreatsChangedEventHandler_t490 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Remove_m2697(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TreatsChanged_9 = ((TreatsChangedEventHandler_t490 *)Castclass(L_2, TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t491_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_BoostsChanged_m2332 (PlayerStats_t396 * __this, BoostsChangedEventHandler_t491 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(331);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t491 * L_0 = (__this->___BoostsChanged_10);
		BoostsChangedEventHandler_t491 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Combine_m2696(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_10 = ((BoostsChangedEventHandler_t491 *)Castclass(L_2, BoostsChangedEventHandler_t491_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t491_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_BoostsChanged_m2333 (PlayerStats_t396 * __this, BoostsChangedEventHandler_t491 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t491_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(331);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t491 * L_0 = (__this->___BoostsChanged_10);
		BoostsChangedEventHandler_t491 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Remove_m2697(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_10 = ((BoostsChangedEventHandler_t491 *)Castclass(L_2, BoostsChangedEventHandler_t491_il2cpp_TypeInfo_var));
		return;
	}
}
// PlayerStats PlayerStats::get_instance()
extern TypeInfo* PlayerStats_t396_il2cpp_TypeInfo_var;
extern "C" PlayerStats_t396 * PlayerStats_get_instance_m2334 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t396 * L_0 = ((PlayerStats_t396_StaticFields*)PlayerStats_t396_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void PlayerStats::set_instance(PlayerStats)
extern TypeInfo* PlayerStats_t396_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_set_instance_m2335 (Object_t * __this /* static, unused */, PlayerStats_t396 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t396 * L_0 = ___value;
		((PlayerStats_t396_StaticFields*)PlayerStats_t396_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m2336 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	{
		PlayerStats_set_instance_m2335(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerStats_Reset_m2343(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m2337 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	{
		PlayerStats_RegisterForEvents_m2339(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m2338 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	{
		PlayerStats_UnregisterForEvents_m2340(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m2341_MethodInfo_var;
extern "C" void PlayerStats_RegisterForEvents_m2339 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		PlayerStats_OnInstanceChanged_m2341_MethodInfo_var = il2cpp_codegen_method_info_from_index(438);
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
		GamePhaseState_t430 * L_1 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m2341_MethodInfo_var };
		GameInstanceChangedEventHandler_t428 * L_3 = (GameInstanceChangedEventHandler_t428 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m1999(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m2014(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m2341_MethodInfo_var;
extern "C" void PlayerStats_UnregisterForEvents_m2340 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		PlayerStats_OnInstanceChanged_m2341_MethodInfo_var = il2cpp_codegen_method_info_from_index(438);
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
		GamePhaseState_t430 * L_1 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m2341_MethodInfo_var };
		GameInstanceChangedEventHandler_t428 * L_3 = (GameInstanceChangedEventHandler_t428 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t428_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m1999(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m2015(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m2341 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	{
		PlayerStats_Reset_m2343(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m2342 (PlayerStats_t396 * __this, int32_t ___increment, const MethodInfo* method)
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
		int32_t L_1 = (__this->___gameScore_3);
		int32_t L_2 = ___increment;
		__this->___gameScore_3 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		ScoreChangedEventHandler_t489 * L_3 = (__this->___ScoreChanged_8);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ScoreChangedEventHandler_t489 * L_4 = (__this->___ScoreChanged_8);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::Reset()
extern TypeInfo* Int32U5BU5D_t456_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_Reset_m2343 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___gameScore_3 = 0;
		int32_t L_0 = TweakableParams_GetInitialMoney_m2499(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___treatCount_4 = L_0;
		__this->___purchasedBoostCount_6 = ((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, 5));
		__this->___availableBoostCount_5 = ((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_004b;
	}

IL_0031:
	{
		Int32U5BU5D_t456* L_1 = (__this->___purchasedBoostCount_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)0;
		Int32U5BU5D_t456* L_3 = (__this->___availableBoostCount_5);
		int32_t L_4 = V_0;
		int32_t L_5 = TweakableParams_GetInitialBoosts_m2500(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		TreatsChangedEventHandler_t490 * L_8 = (__this->___TreatsChanged_9);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		TreatsChangedEventHandler_t490 * L_9 = (__this->___TreatsChanged_9);
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_9);
	}

IL_0068:
	{
		ScoreChangedEventHandler_t489 * L_10 = (__this->___ScoreChanged_8);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		ScoreChangedEventHandler_t489 * L_11 = (__this->___ScoreChanged_8);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_11);
	}

IL_007e:
	{
		BoostsChangedEventHandler_t491 * L_12 = (__this->___BoostsChanged_10);
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		BoostsChangedEventHandler_t491 * L_13 = (__this->___BoostsChanged_10);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_13);
	}

IL_0094:
	{
		return;
	}
}
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m2344 (PlayerStats_t396 * __this, int32_t ___price, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___treatCount_4);
		int32_t L_1 = ___price;
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerStats::EarnTreats(System.Int32)
extern "C" void PlayerStats_EarnTreats_m2345 (PlayerStats_t396 * __this, int32_t ___earnedTreats, const MethodInfo* method)
{
	{
		int32_t L_0 = ___earnedTreats;
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
		int32_t L_1 = (__this->___treatCount_4);
		int32_t L_2 = ___earnedTreats;
		__this->___treatCount_4 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		TreatsChangedEventHandler_t490 * L_3 = (__this->___TreatsChanged_9);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		TreatsChangedEventHandler_t490 * L_4 = (__this->___TreatsChanged_9);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::SpendTreats(System.Int32)
extern "C" void PlayerStats_SpendTreats_m2346 (PlayerStats_t396 * __this, int32_t ___spentTreats, const MethodInfo* method)
{
	{
		int32_t L_0 = ___spentTreats;
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
		int32_t L_1 = (__this->___treatCount_4);
		int32_t L_2 = ___spentTreats;
		__this->___treatCount_4 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		int32_t L_3 = (__this->___treatCount_4);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		__this->___treatCount_4 = 0;
	}

IL_0028:
	{
		TreatsChangedEventHandler_t490 * L_4 = (__this->___TreatsChanged_9);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		TreatsChangedEventHandler_t490 * L_5 = (__this->___TreatsChanged_9);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_5);
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetScore()
extern "C" int32_t PlayerStats_GetScore_m2347 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gameScore_3);
		return L_0;
	}
}
// System.Int32 PlayerStats::GetTreats()
extern "C" int32_t PlayerStats_GetTreats_m2348 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___treatCount_4);
		return L_0;
	}
}
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m2349 (PlayerStats_t396 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t456* L_1 = (__this->___purchasedBoostCount_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m2350 (PlayerStats_t396 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t456* L_1 = (__this->___availableBoostCount_5);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m2351 (PlayerStats_t396 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t456* L_1 = (__this->___purchasedBoostCount_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t* L_3 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2));
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_3))+(int32_t)1));
		Int32U5BU5D_t456* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t* L_6 = ((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5));
		*((int32_t*)(L_6)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		BoostsChangedEventHandler_t491 * L_7 = (__this->___BoostsChanged_10);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		BoostsChangedEventHandler_t491 * L_8 = (__this->___BoostsChanged_10);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_8);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m2352 (PlayerStats_t396 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t456* L_1 = (__this->___availableBoostCount_5);
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
		Int32U5BU5D_t456* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		return;
	}

IL_001a:
	{
		Int32U5BU5D_t456* L_6 = (__this->___availableBoostCount_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t* L_8 = ((int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7));
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))-(int32_t)1));
		BoostsChangedEventHandler_t491 * L_9 = (__this->___BoostsChanged_10);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		BoostsChangedEventHandler_t491 * L_10 = (__this->___BoostsChanged_10);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetHighScore()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" int32_t PlayerStats_GetHighScore_m2353 (PlayerStats_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		PersistentStorage_t485 * L_0 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m2288(L_0, (String_t*) &_stringLiteral851, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerStats::SetHighScore(System.Int32)
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_SetHighScore_m2354 (PlayerStats_t396 * __this, int32_t ___highScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		PersistentStorage_t485 * L_0 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_1 = ___highScore;
		NullCheck(L_0);
		PersistentStorage_SetIntValue_m2287(L_0, (String_t*) &_stringLiteral851, L_1, /*hidden argument*/NULL);
		return;
	}
}
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelper.h"
#ifndef _MSC_VER
#else
#endif
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelperMethodDeclarations.h"



// System.Void RatingsHelper::.ctor()
extern "C" void RatingsHelper__ctor_m2355 (RatingsHelper_t492 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RatingsHelper::Awake()
extern TypeInfo* RatingsHelper_t492_il2cpp_TypeInfo_var;
extern "C" void RatingsHelper_Awake_m2356 (RatingsHelper_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RatingsHelper_t492_StaticFields*)RatingsHelper_t492_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void RatingsHelper::ShowRatings()
extern "C" void RatingsHelper_ShowRatings_m2357 (RatingsHelper_t492 * __this, const MethodInfo* method)
{
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



// System.Void RestartGameHandler::.ctor()
extern "C" void RestartGameHandler__ctor_m2358 (RestartGameHandler_t493 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::RestartGame()
extern "C" void RestartGameHandler_RestartGame_m2359 (RestartGameHandler_t493 * __this, const MethodInfo* method)
{
	{
		GameController_t424 * L_0 = GameController_get_instance_m1965(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameController_RestartGame_m1973(L_0, /*hidden argument*/NULL);
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
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandlMethodDeclarations.h"
struct Resources_t625;
struct Sprite_t393;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t625;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m2999_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m2999(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m2999_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t393_m2998(__this /* static, unused */, p0, method) (( Sprite_t393 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m2999_gshared)(__this /* static, unused */, p0, method)


// System.Void SFXButton::.ctor()
extern "C" void SFXButton__ctor_m2360 (SFXButton_t494 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t393_m2998_MethodInfo_var;
extern "C" void SFXButton_Awake_m2361 (SFXButton_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t393_m2998_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484004);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral852;
		String_t* L_0 = V_0;
		Sprite_t393 * L_1 = Resources_Load_TisSprite_t393_m2998(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t393_m2998_MethodInfo_var);
		__this->___soundOnSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral853;
		String_t* L_2 = V_0;
		Sprite_t393 * L_3 = Resources_Load_TisSprite_t393_m2998(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t393_m2998_MethodInfo_var);
		__this->___soundOffSprite_4 = L_3;
		return;
	}
}
// System.Void SFXButton::Start()
extern "C" void SFXButton_Start_m2362 (SFXButton_t494 * __this, const MethodInfo* method)
{
	{
		SFXButton_RegisterForEvents_m2364(__this, /*hidden argument*/NULL);
		SFXButton_UpdateButtonImage_m2367(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::OnDestroy()
extern "C" void SFXButton_OnDestroy_m2363 (SFXButton_t494 * __this, const MethodInfo* method)
{
	{
		SFXButton_UnregisterForEvents_m2365(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::RegisterForEvents()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m2366_MethodInfo_var;
extern "C" void SFXButton_RegisterForEvents_m2364 (SFXButton_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		SFXButton_OnSoundMuteChanged_m2366_MethodInfo_var = il2cpp_codegen_method_info_from_index(439);
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
		SoundController_t508 * L_1 = ((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m2366_MethodInfo_var };
		SoundMuteChangedEventHandler_t506 * L_3 = (SoundMuteChangedEventHandler_t506 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2418(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m2427(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UnregisterForEvents()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m2366_MethodInfo_var;
extern "C" void SFXButton_UnregisterForEvents_m2365 (SFXButton_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		SFXButton_OnSoundMuteChanged_m2366_MethodInfo_var = il2cpp_codegen_method_info_from_index(439);
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
		SoundController_t508 * L_1 = ((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m2366_MethodInfo_var };
		SoundMuteChangedEventHandler_t506 * L_3 = (SoundMuteChangedEventHandler_t506 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2418(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m2428(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXButton::OnSoundMuteChanged()
extern "C" void SFXButton_OnSoundMuteChanged_m2366 (SFXButton_t494 * __this, const MethodInfo* method)
{
	{
		SFXButton_UpdateButtonImage_m2367(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UpdateButtonImage()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern "C" void SFXButton_UpdateButtonImage_m2367 (SFXButton_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t508 * L_0 = ((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m2431(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t458 * L_2 = (__this->___buttonImage_5);
		Sprite_t393 * L_3 = (__this->___soundOffSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m2984(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t458 * L_4 = (__this->___buttonImage_5);
		Sprite_t393 * L_5 = (__this->___soundOnSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m2984(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0036:
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
extern "C" void SFXSilencer__ctor_m2368 (SFXSilencer_t495 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::Start()
extern "C" void SFXSilencer_Start_m2369 (SFXSilencer_t495 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_RegisterForEvents_m2371(__this, /*hidden argument*/NULL);
		SFXSilencer_UpdateSoundsActive_m2374(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::OnDestroy()
extern "C" void SFXSilencer_OnDestroy_m2370 (SFXSilencer_t495 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UnregisterForEvents_m2372(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::RegisterForEvents()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m2373_MethodInfo_var;
extern "C" void SFXSilencer_RegisterForEvents_m2371 (SFXSilencer_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		SFXSilencer_OnSoundMuteChanged_m2373_MethodInfo_var = il2cpp_codegen_method_info_from_index(440);
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
		SoundController_t508 * L_1 = ((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m2373_MethodInfo_var };
		SoundMuteChangedEventHandler_t506 * L_3 = (SoundMuteChangedEventHandler_t506 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2418(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m2427(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UnregisterForEvents()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m2373_MethodInfo_var;
extern "C" void SFXSilencer_UnregisterForEvents_m2372 (SFXSilencer_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		SFXSilencer_OnSoundMuteChanged_m2373_MethodInfo_var = il2cpp_codegen_method_info_from_index(440);
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
		SoundController_t508 * L_1 = ((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m2373_MethodInfo_var };
		SoundMuteChangedEventHandler_t506 * L_3 = (SoundMuteChangedEventHandler_t506 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2418(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m2428(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXSilencer::OnSoundMuteChanged()
extern "C" void SFXSilencer_OnSoundMuteChanged_m2373 (SFXSilencer_t495 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UpdateSoundsActive_m2374(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UpdateSoundsActive()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern "C" void SFXSilencer_UpdateSoundsActive_m2374 (SFXSilencer_t495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t284 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		Transform_t323 * L_0 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_t323 * L_2 = Transform_GetChild_m3115(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_t284 * L_3 = Component_get_gameObject_m2661(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t284 * L_4 = V_1;
		SoundController_t508 * L_5 = ((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		bool L_6 = SoundController_get_sfxMuted_m2431(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m2799(L_4, ((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		Transform_t323 * L_9 = Component_get_transform_m2867(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m3116(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
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

// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputFieldMethodDeclarations.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void SecretUI::.ctor()
extern "C" void SecretUI__ctor_m2375 (SecretUI_t498 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Awake()
extern TypeInfo* SecretUI_t498_il2cpp_TypeInfo_var;
extern "C" void SecretUI_Awake_m2376 (SecretUI_t498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SecretUI_t498_StaticFields*)SecretUI_t498_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		return;
	}
}
// System.Void SecretUI::Start()
extern "C" void SecretUI_Start_m2377 (SecretUI_t498 * __this, const MethodInfo* method)
{
	{
		__this->___uiIsVisible_4 = 0;
		SecretUI_UpdateVisibility_m2378(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::UpdateVisibility()
extern "C" void SecretUI_UpdateVisibility_m2378 (SecretUI_t498 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___uiIsVisible_4);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CanvasGroup_t497 * L_1 = (__this->___canvasGroup_3);
		NullCheck(L_1);
		CanvasGroup_set_alpha_m3117(L_1, (1.0f), /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		CanvasGroup_t497 * L_2 = (__this->___canvasGroup_3);
		NullCheck(L_2);
		CanvasGroup_set_alpha_m3117(L_2, (0.0f), /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void SecretUI::Update()
extern "C" void SecretUI_Update_m2379 (SecretUI_t498 * __this, const MethodInfo* method)
{
	{
		InputField_t496 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		bool L_1 = InputField_get_isFocused_m3118(L_0, /*hidden argument*/NULL);
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
		SecretUI_MaybeApplySuggestedLevel_m2380(__this, /*hidden argument*/NULL);
		SecretUI_UpdateVisibility_m2378(__this, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0033:
	{
		InputField_t496 * L_3 = (__this->___inputField_2);
		NullCheck(L_3);
		bool L_4 = InputField_get_isFocused_m3118(L_3, /*hidden argument*/NULL);
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
		SecretUI_UpdateVisibility_m2378(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void SecretUI::MaybeApplySuggestedLevel()
extern TypeInfo* SecretUI_t498_il2cpp_TypeInfo_var;
extern "C" void SecretUI_MaybeApplySuggestedLevel_m2380 (SecretUI_t498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = SecretUI_GetSuggestedLevel_m2381(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		GameLevelState_t426 * L_2 = GameLevelState_get_instance_m1994(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameLevelState_SetGameLevel_m1998(L_2, L_3, /*hidden argument*/NULL);
		SecretUI_t498 * L_4 = ((SecretUI_t498_StaticFields*)SecretUI_t498_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_4);
		SecretUI_ClearSuggestedLevel_m2382(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Int32 SecretUI::GetSuggestedLevel()
extern "C" int32_t SecretUI_GetSuggestedLevel_m2381 (SecretUI_t498 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		InputField_t496 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m3119(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = Int32_TryParse_m163(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
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
extern "C" void SecretUI_ClearSuggestedLevel_m2382 (SecretUI_t498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t496 * L_0 = (__this->___inputField_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_0);
		InputField_set_text_m3120(L_0, L_1, /*hidden argument*/NULL);
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

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
struct Component_t599;
struct Camera_t441;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t599;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2826_gshared (Component_t599 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2826(__this, method) (( Object_t * (*) (Component_t599 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2826_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t441_m2962(__this, method) (( Camera_t441 * (*) (Component_t599 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2826_gshared)(__this, method)


// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m2383 (SizeCamera_t499 * __this, const MethodInfo* method)
{
	{
		__this->___minWorldAspectRatio_2 = (1.33333337f);
		__this->___targetWorldHalfHeight_3 = (5.0f);
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t441_m2962_MethodInfo_var;
extern "C" void SizeCamera_Start_m2384 (SizeCamera_t499 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t441_m2962_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483985);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Camera_t441 * V_4 = {0};
	Rect_t544  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m2571(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___screenPixelsTopToIgnore_4);
		float L_2 = (__this->___screenPixelsBottomToIgnore_5);
		V_0 = ((float)((float)(((float)L_0))-(float)((float)((float)L_1+(float)L_2))));
		int32_t L_3 = Screen_get_width_m2555(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Camera_t441 * L_14 = Component_GetComponent_TisCamera_t441_m2962(__this, /*hidden argument*/Component_GetComponent_TisCamera_t441_m2962_MethodInfo_var);
		V_4 = L_14;
		Camera_t441 * L_15 = V_4;
		float L_16 = V_2;
		NullCheck(L_15);
		Camera_set_orthographicSize_m3121(L_15, L_16, /*hidden argument*/NULL);
		Camera_t441 * L_17 = V_4;
		NullCheck(L_17);
		Rect_t544  L_18 = Camera_get_rect_m2963(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		float L_19 = (__this->___screenPixelsBottomToIgnore_5);
		int32_t L_20 = Screen_get_height_m2571(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_19/(float)(((float)L_20))));
		float L_21 = V_0;
		int32_t L_22 = Screen_get_height_m2571(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_21/(float)(((float)L_22))));
		Rect_set_width_m2964((&V_5), (1.0f), /*hidden argument*/NULL);
		float L_23 = V_7;
		Rect_set_height_m2965((&V_5), L_23, /*hidden argument*/NULL);
		Rect_set_x_m2966((&V_5), (0.0f), /*hidden argument*/NULL);
		float L_24 = V_6;
		Rect_set_y_m2967((&V_5), L_24, /*hidden argument*/NULL);
		Camera_t441 * L_25 = V_4;
		Rect_t544  L_26 = V_5;
		NullCheck(L_25);
		Camera_set_rect_m2968(L_25, L_26, /*hidden argument*/NULL);
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
extern "C" void SlowByCollision__ctor_m2385 (SlowByCollision_t500 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m2386 (SlowByCollision_t500 * __this, Collider2D_t484 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t484 * L_0 = ___other;
		SlowByCollision_HandleCollision_m2388(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m2387 (SlowByCollision_t500 * __this, Collider2D_t484 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t484 * L_0 = ___other;
		SlowByCollision_HandleCollision_m2388(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016_MethodInfo_var;
extern "C" void SlowByCollision_HandleCollision_m2388 (SlowByCollision_t500 * __this, Collider2D_t484 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484011);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t473 * V_0 = {0};
	{
		Collider2D_t484 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m3018(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral764, /*hidden argument*/NULL);
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
		Collider2D_t484 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t284 * L_4 = Component_get_gameObject_m2661(L_3, /*hidden argument*/NULL);
		MouseMove_t473 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t473_m3016_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t473 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m2165(L_6, /*hidden argument*/NULL);
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
		MouseMove_t473 * L_8 = V_0;
		NullCheck(L_8);
		MouseMove_OnFartedUpon_m2177(L_8, /*hidden argument*/NULL);
		return;
	}
}
// SocialHelper/<DebugScoreAndAchievement>c__Iterator14
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<DebugScoreAndAchievement>c__Iterator14
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator14::.ctor()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator14__ctor_m2389 (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator14::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator14_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2390 (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator14::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator14_System_Collections_IEnumerator_get_Current_m2391 (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean SocialHelper/<DebugScoreAndAchievement>c__Iterator14::MoveNext()
extern TypeInfo* WaitForSeconds_t623_il2cpp_TypeInfo_var;
extern "C" bool U3CDebugScoreAndAchievementU3Ec__Iterator14_MoveNext_m2392 (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
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
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral858, /*hidden argument*/NULL);
		WaitForSeconds_t623 * L_2 = (WaitForSeconds_t623 *)il2cpp_codegen_object_new (WaitForSeconds_t623_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2981(L_2, (2.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0065;
	}

IL_0047:
	{
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral859, /*hidden argument*/NULL);
		SocialHelper_CustomReportAchievement_m2400(NULL /*static, unused*/, (String_t*) &_stringLiteral860, /*hidden argument*/NULL);
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
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator14::Dispose()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator14_Dispose_m2393 (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator14::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator14_Reset_m2394 (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * __this, const MethodInfo* method)
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
// SocialHelper/<Authenticate>c__AnonStorey17
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStor.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<Authenticate>c__AnonStorey17
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStorMethodDeclarations.h"

// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"


// System.Void SocialHelper/<Authenticate>c__AnonStorey17::.ctor()
extern "C" void U3CAuthenticateU3Ec__AnonStorey17__ctor_m2395 (U3CAuthenticateU3Ec__AnonStorey17_t502 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<Authenticate>c__AnonStorey17::<>m__26(System.Boolean)
extern TypeInfo* GameCenterPlatform_t638_il2cpp_TypeInfo_var;
extern "C" void U3CAuthenticateU3Ec__AnonStorey17_U3CU3Em__26_m2396 (U3CAuthenticateU3Ec__AnonStorey17_t502 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
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
		int32_t L_1 = Application_get_platform_m2809(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t638_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m3122(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Action_1_t209 * L_2 = (__this->___handler_0);
		bool L_3 = ___success;
		NullCheck(L_2);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_2, L_3);
		return;
	}
}
// SocialHelper/<RecordAchievement>c__AnonStorey18
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<RecordAchievement>c__AnonStorey18
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__AnoMethodDeclarations.h"



// System.Void SocialHelper/<RecordAchievement>c__AnonStorey18::.ctor()
extern "C" void U3CRecordAchievementU3Ec__AnonStorey18__ctor_m2397 (U3CRecordAchievementU3Ec__AnonStorey18_t503 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<RecordAchievement>c__AnonStorey18::<>m__28(System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" void U3CRecordAchievementU3Ec__AnonStorey18_U3CU3Em__28_m2398 (U3CRecordAchievementU3Ec__AnonStorey18_t503 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___achievementID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral861, L_0, /*hidden argument*/NULL);
		Debug_Log_m2590(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = ___success;
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral862, L_4, /*hidden argument*/NULL);
		Debug_Log_m2590(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
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
extern "C" void SocialHelper__ctor_m2399 (SocialHelper_t504 * __this, const MethodInfo* method)
{
	{
		__this->___leaderboardID_2 = (String_t*) &_stringLiteral854;
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" {int32_t DEFAULT_CALL CustomReportAchievement(char*);}
extern "C" bool SocialHelper_CustomReportAchievement_m2400 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method)
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
extern "C" bool SocialHelper_CustomClearAchivements_m2401 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern TypeInfo* SocialHelper_t504_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_Awake_m2402 (SocialHelper_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SocialHelper_t504_StaticFields*)SocialHelper_t504_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		int32_t L_0 = Application_get_platform_m2809(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern TypeInfo* U3CAuthenticateU3Ec__AnonStorey17_t502_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t209_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t635_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAuthenticateU3Ec__AnonStorey17_U3CU3Em__26_m2396_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2704_MethodInfo_var;
extern "C" void SocialHelper_Authenticate_m2403 (SocialHelper_t504 * __this, Action_1_t209 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAuthenticateU3Ec__AnonStorey17_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		Action_1_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		ILocalUser_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		U3CAuthenticateU3Ec__AnonStorey17_U3CU3Em__26_m2396_MethodInfo_var = il2cpp_codegen_method_info_from_index(441);
		Action_1__ctor_m2704_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		s_Il2CppMethodIntialized = true;
	}
	U3CAuthenticateU3Ec__AnonStorey17_t502 * V_0 = {0};
	{
		U3CAuthenticateU3Ec__AnonStorey17_t502 * L_0 = (U3CAuthenticateU3Ec__AnonStorey17_t502 *)il2cpp_codegen_object_new (U3CAuthenticateU3Ec__AnonStorey17_t502_il2cpp_TypeInfo_var);
		U3CAuthenticateU3Ec__AnonStorey17__ctor_m2395(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAuthenticateU3Ec__AnonStorey17_t502 * L_1 = V_0;
		Action_1_t209 * L_2 = ___handler;
		NullCheck(L_1);
		L_1->___handler_0 = L_2;
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m3032(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CAuthenticateU3Ec__AnonStorey17_t502 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)U3CAuthenticateU3Ec__AnonStorey17_U3CU3Em__26_m2396_MethodInfo_var };
		Action_1_t209 * L_7 = (Action_1_t209 *)il2cpp_codegen_object_new (Action_1_t209_il2cpp_TypeInfo_var);
		Action_1__ctor_m2704(L_7, L_5, L_6, /*hidden argument*/Action_1__ctor_m2704_MethodInfo_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t209 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t635_il2cpp_TypeInfo_var, L_4, L_7);
		goto IL_003f;
	}

IL_0033:
	{
		U3CAuthenticateU3Ec__AnonStorey17_t502 * L_8 = V_0;
		NullCheck(L_8);
		Action_1_t209 * L_9 = (L_8->___handler_0);
		NullCheck(L_9);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Action`1<System.Boolean>::Invoke(!0) */, L_9, 0);
	}

IL_003f:
	{
		return;
	}
}
// System.Collections.IEnumerator SocialHelper::DebugScoreAndAchievement()
extern TypeInfo* U3CDebugScoreAndAchievementU3Ec__Iterator14_t501_il2cpp_TypeInfo_var;
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m2404 (SocialHelper_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator14_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		s_Il2CppMethodIntialized = true;
	}
	U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * V_0 = {0};
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * L_0 = (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 *)il2cpp_codegen_object_new (U3CDebugScoreAndAchievementU3Ec__Iterator14_t501_il2cpp_TypeInfo_var);
		U3CDebugScoreAndAchievementU3Ec__Iterator14__ctor_m2389(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDebugScoreAndAchievementU3Ec__Iterator14_t501 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m2405 (SocialHelper_t504 * __this, const MethodInfo* method)
{
	{
		SocialHelper_CustomClearAchivements_m2401(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ReportScore(System.Int32)
extern TypeInfo* ILocalUser_t635_il2cpp_TypeInfo_var;
extern TypeInfo* SocialHelper_t504_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t209_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CReportScoreU3Em__27_m2411_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2704_MethodInfo_var;
extern "C" void SocialHelper_ReportScore_m2406 (SocialHelper_t504 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		SocialHelper_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		Action_1_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		SocialHelper_U3CReportScoreU3Em__27_m2411_MethodInfo_var = il2cpp_codegen_method_info_from_index(442);
		Action_1__ctor_m2704_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B4_0 = {0};
	int64_t G_B4_1 = 0;
	String_t* G_B3_0 = {0};
	int64_t G_B3_1 = 0;
	{
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral855, /*hidden argument*/NULL);
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		Object_t * L_1 = Social_get_localUser_m3032(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t635_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_3 = ___score;
		String_t* L_4 = (__this->___leaderboardID_2);
		Action_1_t209 * L_5 = ((SocialHelper_t504_StaticFields*)SocialHelper_t504_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
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
		IntPtr_t L_6 = { (void*)SocialHelper_U3CReportScoreU3Em__27_m2411_MethodInfo_var };
		Action_1_t209 * L_7 = (Action_1_t209 *)il2cpp_codegen_object_new (Action_1_t209_il2cpp_TypeInfo_var);
		Action_1__ctor_m2704(L_7, NULL, L_6, /*hidden argument*/Action_1__ctor_m2704_MethodInfo_var);
		((SocialHelper_t504_StaticFields*)SocialHelper_t504_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_7;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		Action_1_t209 * L_8 = ((SocialHelper_t504_StaticFields*)SocialHelper_t504_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		Social_ReportScore_m3123(NULL /*static, unused*/, G_B4_1, G_B4_0, L_8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void SocialHelper::RecordAchievement(System.String)
extern TypeInfo* U3CRecordAchievementU3Ec__AnonStorey18_t503_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t635_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t209_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRecordAchievementU3Ec__AnonStorey18_U3CU3Em__28_m2398_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2704_MethodInfo_var;
extern "C" void SocialHelper_RecordAchievement_m2407 (SocialHelper_t504 * __this, String_t* ___achievementID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRecordAchievementU3Ec__AnonStorey18_t503_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		ILocalUser_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Action_1_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		U3CRecordAchievementU3Ec__AnonStorey18_U3CU3Em__28_m2398_MethodInfo_var = il2cpp_codegen_method_info_from_index(443);
		Action_1__ctor_m2704_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		s_Il2CppMethodIntialized = true;
	}
	U3CRecordAchievementU3Ec__AnonStorey18_t503 * V_0 = {0};
	{
		U3CRecordAchievementU3Ec__AnonStorey18_t503 * L_0 = (U3CRecordAchievementU3Ec__AnonStorey18_t503 *)il2cpp_codegen_object_new (U3CRecordAchievementU3Ec__AnonStorey18_t503_il2cpp_TypeInfo_var);
		U3CRecordAchievementU3Ec__AnonStorey18__ctor_m2397(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRecordAchievementU3Ec__AnonStorey18_t503 * L_1 = V_0;
		String_t* L_2 = ___achievementID;
		NullCheck(L_1);
		L_1->___achievementID_0 = L_2;
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral856, /*hidden argument*/NULL);
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m3032(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t635_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = Application_get_platform_m2809(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		U3CRecordAchievementU3Ec__AnonStorey18_t503 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___achievementID_0);
		SocialHelper_CustomReportAchievement_m2400(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_004d:
	{
		U3CRecordAchievementU3Ec__AnonStorey18_t503 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___achievementID_0);
		U3CRecordAchievementU3Ec__AnonStorey18_t503 * L_11 = V_0;
		IntPtr_t L_12 = { (void*)U3CRecordAchievementU3Ec__AnonStorey18_U3CU3Em__28_m2398_MethodInfo_var };
		Action_1_t209 * L_13 = (Action_1_t209 *)il2cpp_codegen_object_new (Action_1_t209_il2cpp_TypeInfo_var);
		Action_1__ctor_m2704(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m2704_MethodInfo_var);
		Social_ReportProgress_m3124(NULL /*static, unused*/, L_10, (100.0), L_13, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m2408 (SocialHelper_t504 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		return L_0;
	}
}
// System.Void SocialHelper::ShowLeaderBoard()
extern TypeInfo* Action_1_t209_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowLeaderBoardU3Em__29_m2412_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2704_MethodInfo_var;
extern "C" void SocialHelper_ShowLeaderBoard_m2409 (SocialHelper_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		SocialHelper_U3CShowLeaderBoardU3Em__29_m2412_MethodInfo_var = il2cpp_codegen_method_info_from_index(444);
		Action_1__ctor_m2704_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
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
		IntPtr_t L_1 = { (void*)SocialHelper_U3CShowLeaderBoardU3Em__29_m2412_MethodInfo_var };
		Action_1_t209 * L_2 = (Action_1_t209 *)il2cpp_codegen_object_new (Action_1_t209_il2cpp_TypeInfo_var);
		Action_1__ctor_m2704(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2704_MethodInfo_var);
		SocialHelper_Authenticate_m2403(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ShowAchievements()
extern TypeInfo* SocialHelper_t504_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t209_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowAchievementsU3Em__2A_m2413_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2704_MethodInfo_var;
extern "C" void SocialHelper_ShowAchievements_m2410 (SocialHelper_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		Action_1_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		SocialHelper_U3CShowAchievementsU3Em__2A_m2413_MethodInfo_var = il2cpp_codegen_method_info_from_index(445);
		Action_1__ctor_m2704_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t504 * G_B4_0 = {0};
	SocialHelper_t504 * G_B3_0 = {0};
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
		Action_1_t209 * L_1 = ((SocialHelper_t504_StaticFields*)SocialHelper_t504_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B3_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		IntPtr_t L_2 = { (void*)SocialHelper_U3CShowAchievementsU3Em__2A_m2413_MethodInfo_var };
		Action_1_t209 * L_3 = (Action_1_t209 *)il2cpp_codegen_object_new (Action_1_t209_il2cpp_TypeInfo_var);
		Action_1__ctor_m2704(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m2704_MethodInfo_var);
		((SocialHelper_t504_StaticFields*)SocialHelper_t504_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_3;
		G_B4_0 = G_B3_0;
	}

IL_0025:
	{
		Action_1_t209 * L_4 = ((SocialHelper_t504_StaticFields*)SocialHelper_t504_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B4_0);
		SocialHelper_Authenticate_m2403(G_B4_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ReportScore>m__27(System.Boolean)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CReportScoreU3Em__27_m2411 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___success;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral857, L_2, /*hidden argument*/NULL);
		Debug_Log_m2590(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ShowLeaderBoard>m__29(System.Boolean)
extern TypeInfo* GameCenterPlatform_t638_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__29_m2412 (SocialHelper_t504 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(427);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m2809(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = (__this->___leaderboardID_2);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t638_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowLeaderboardUI_m3125(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void SocialHelper::<ShowAchievements>m__2A(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__2A_m2413 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	{
		Social_ShowAchievementsUI_m3126(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void SocialMediaButtons__ctor_m2414 (SocialMediaButtons_t505 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::Start()
extern TypeInfo* SocialMediaButtons_t505_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t420_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialMediaButtons_U3CStartU3Em__2B_m2416_MethodInfo_var;
extern const MethodInfo* SocialMediaButtons_U3CStartU3Em__2C_m2417_MethodInfo_var;
extern "C" void SocialMediaButtons_Start_m2415 (SocialMediaButtons_t505 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialMediaButtons_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(431);
		UnityAction_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		SocialMediaButtons_U3CStartU3Em__2B_m2416_MethodInfo_var = il2cpp_codegen_method_info_from_index(446);
		SocialMediaButtons_U3CStartU3Em__2C_m2417_MethodInfo_var = il2cpp_codegen_method_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	ButtonClickedEvent_t632 * G_B2_0 = {0};
	ButtonClickedEvent_t632 * G_B1_0 = {0};
	ButtonClickedEvent_t632 * G_B4_0 = {0};
	ButtonClickedEvent_t632 * G_B3_0 = {0};
	{
		Button_t380 * L_0 = (__this->___fbButton_2);
		NullCheck(L_0);
		ButtonClickedEvent_t632 * L_1 = Button_get_onClick_m3027(L_0, /*hidden argument*/NULL);
		UnityAction_t420 * L_2 = ((SocialMediaButtons_t505_StaticFields*)SocialMediaButtons_t505_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_4;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0023;
		}
	}
	{
		IntPtr_t L_3 = { (void*)SocialMediaButtons_U3CStartU3Em__2B_m2416_MethodInfo_var };
		UnityAction_t420 * L_4 = (UnityAction_t420 *)il2cpp_codegen_object_new (UnityAction_t420_il2cpp_TypeInfo_var);
		UnityAction__ctor_m3028(L_4, NULL, L_3, /*hidden argument*/NULL);
		((SocialMediaButtons_t505_StaticFields*)SocialMediaButtons_t505_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_4 = L_4;
		G_B2_0 = G_B1_0;
	}

IL_0023:
	{
		UnityAction_t420 * L_5 = ((SocialMediaButtons_t505_StaticFields*)SocialMediaButtons_t505_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_4;
		NullCheck(G_B2_0);
		UnityEvent_AddListener_m3029(G_B2_0, L_5, /*hidden argument*/NULL);
		Button_t380 * L_6 = (__this->___twitterButton_3);
		NullCheck(L_6);
		ButtonClickedEvent_t632 * L_7 = Button_get_onClick_m3027(L_6, /*hidden argument*/NULL);
		UnityAction_t420 * L_8 = ((SocialMediaButtons_t505_StaticFields*)SocialMediaButtons_t505_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		G_B3_0 = L_7;
		if (L_8)
		{
			G_B4_0 = L_7;
			goto IL_0050;
		}
	}
	{
		IntPtr_t L_9 = { (void*)SocialMediaButtons_U3CStartU3Em__2C_m2417_MethodInfo_var };
		UnityAction_t420 * L_10 = (UnityAction_t420 *)il2cpp_codegen_object_new (UnityAction_t420_il2cpp_TypeInfo_var);
		UnityAction__ctor_m3028(L_10, NULL, L_9, /*hidden argument*/NULL);
		((SocialMediaButtons_t505_StaticFields*)SocialMediaButtons_t505_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_10;
		G_B4_0 = G_B3_0;
	}

IL_0050:
	{
		UnityAction_t420 * L_11 = ((SocialMediaButtons_t505_StaticFields*)SocialMediaButtons_t505_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		NullCheck(G_B4_0);
		UnityEvent_AddListener_m3029(G_B4_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::<Start>m__2B()
extern TypeInfo* FacebookSharing_t415_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_U3CStartU3Em__2B_m2416 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t396 * L_0 = PlayerStats_get_instance_m2334(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetScore_m2347(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		FacebookSharing_t415 * L_2 = ((FacebookSharing_t415_StaticFields*)FacebookSharing_t415_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		FacebookSharing_ShareScore_m1936(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::<Start>m__2C()
extern TypeInfo* TwitterSharing_t521_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_U3CStartU3Em__2C_m2417 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t396 * L_0 = PlayerStats_get_instance_m2334(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetScore_m2347(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TwitterSharing_t521 * L_2 = ((TwitterSharing_t521_StaticFields*)TwitterSharing_t521_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		TwitterSharing_ShareScore_m2505(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m2418 (SoundMuteChangedEventHandler_t506 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m2419 (SoundMuteChangedEventHandler_t506 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SoundMuteChangedEventHandler_Invoke_m2419((SoundMuteChangedEventHandler_t506 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t506(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m2420 (SoundMuteChangedEventHandler_t506 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m2421 (SoundMuteChangedEventHandler_t506 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void MusicMuteChangedEventHandler__ctor_m2422 (MusicMuteChangedEventHandler_t507 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/MusicMuteChangedEventHandler::Invoke()
extern "C" void MusicMuteChangedEventHandler_Invoke_m2423 (MusicMuteChangedEventHandler_t507 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MusicMuteChangedEventHandler_Invoke_m2423((MusicMuteChangedEventHandler_t507 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MusicMuteChangedEventHandler_t507(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/MusicMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MusicMuteChangedEventHandler_BeginInvoke_m2424 (MusicMuteChangedEventHandler_t507 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/MusicMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MusicMuteChangedEventHandler_EndInvoke_m2425 (MusicMuteChangedEventHandler_t507 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m2426 (SoundController_t508 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_SoundMuteChanged_m2427 (SoundController_t508 * __this, SoundMuteChangedEventHandler_t506 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t506 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t506 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Combine_m2696(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t506 *)Castclass(L_2, SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_SoundMuteChanged_m2428 (SoundController_t508 * __this, SoundMuteChangedEventHandler_t506 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(425);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t506 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t506 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Remove_m2697(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t506 *)Castclass(L_2, SoundMuteChangedEventHandler_t506_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t507_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_MusicMuteChanged_m2429 (SoundController_t508 * __this, MusicMuteChangedEventHandler_t507 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t507 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t507 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Combine_m2696(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t507 *)Castclass(L_2, MusicMuteChangedEventHandler_t507_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t507_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_MusicMuteChanged_m2430 (SoundController_t508 * __this, MusicMuteChangedEventHandler_t507 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t507 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t507 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Remove_m2697(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t507 *)Castclass(L_2, MusicMuteChangedEventHandler_t507_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m2431 (SoundController_t508 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsfxMutedU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m2432 (SoundController_t508 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsfxMutedU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m2433 (SoundController_t508 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmusicMutedU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m2434 (SoundController_t508 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmusicMutedU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void SoundController::Awake()
extern TypeInfo* SoundController_t508_il2cpp_TypeInfo_var;
extern "C" void SoundController_Awake_m2435 (SoundController_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SoundController_t508_StaticFields*)SoundController_t508_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void SoundController::Start()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void SoundController_Start_m2436 (SoundController_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		PersistentStorage_t485 * L_0 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m2290(L_0, (String_t*) &_stringLiteral863, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m2432(__this, L_1, /*hidden argument*/NULL);
		PersistentStorage_t485 * L_2 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = PersistentStorage_GetBoolValue_m2290(L_2, (String_t*) &_stringLiteral864, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m2434(__this, L_3, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t506 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		SoundMuteChangedEventHandler_t506 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(10 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0042:
	{
		MusicMuteChangedEventHandler_t507 * L_6 = (__this->___MusicMuteChanged_6);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		MusicMuteChangedEventHandler_t507 * L_7 = (__this->___MusicMuteChanged_6);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(10 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_7);
	}

IL_0058:
	{
		return;
	}
}
// System.Void SoundController::ToggleSoundsMuted()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleSoundsMuted_m2437 (SoundController_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_sfxMuted_m2431(__this, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m2432(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		PersistentStorage_t485 * L_1 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_sfxMuted_m2431(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m2289(L_1, (String_t*) &_stringLiteral863, L_2, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t506 * L_3 = (__this->___SoundMuteChanged_5);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		SoundMuteChangedEventHandler_t506 * L_4 = (__this->___SoundMuteChanged_5);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::ToggleMusicMuted()
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleMusicMuted_m2438 (SoundController_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m2433(__this, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m2434(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		PersistentStorage_t485 * L_1 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_musicMuted_m2433(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m2289(L_1, (String_t*) &_stringLiteral864, L_2, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t507 * L_3 = (__this->___MusicMuteChanged_6);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MusicMuteChangedEventHandler_t507 * L_4 = (__this->___MusicMuteChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
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
extern "C" void ThrobForEffect__ctor_m2439 (ThrobForEffect_t470 * __this, const MethodInfo* method)
{
	{
		__this->___throbPeriod_4 = (0.3f);
		__this->___throbScale_5 = (1.0f);
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThrobForEffect::Start()
extern "C" void ThrobForEffect_Start_m2440 (ThrobForEffect_t470 * __this, const MethodInfo* method)
{
	{
		__this->___throbbing_2 = 0;
		Transform_t323 * L_0 = (__this->___thingToScale_6);
		NullCheck(L_0);
		Vector3_t413  L_1 = Transform_get_localScale_m2875(L_0, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_1;
		return;
	}
}
// System.Void ThrobForEffect::SetThrobbing(System.Boolean)
extern "C" void ThrobForEffect_SetThrobbing_m2441 (ThrobForEffect_t470 * __this, bool ___throbbing, const MethodInfo* method)
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
		float L_3 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startThrobTime_3 = L_3;
		goto IL_0042;
	}

IL_002a:
	{
		__this->___throbbing_2 = 0;
		Transform_t323 * L_4 = (__this->___thingToScale_6);
		Vector3_t413  L_5 = (__this->___originalScale_7);
		NullCheck(L_4);
		Transform_set_localScale_m2876(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ThrobForEffect::Update()
extern TypeInfo* Mathf_t629_il2cpp_TypeInfo_var;
extern "C" void ThrobForEffect_Update_m2442 (ThrobForEffect_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(354);
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
		float L_1 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startThrobTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___throbPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t629_il2cpp_TypeInfo_var);
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
		Transform_t323 * L_10 = (__this->___thingToScale_6);
		float L_11 = V_3;
		Vector3_t413 * L_12 = &(__this->___originalScale_7);
		float L_13 = (L_12->___x_1);
		float L_14 = V_3;
		Vector3_t413 * L_15 = &(__this->___originalScale_7);
		float L_16 = (L_15->___y_2);
		float L_17 = V_3;
		Vector3_t413 * L_18 = &(__this->___originalScale_7);
		float L_19 = (L_18->___z_3);
		Vector3_t413  L_20 = {0};
		Vector3__ctor_m2865(&L_20, ((float)((float)L_11*(float)L_13)), ((float)((float)L_14*(float)L_16)), ((float)((float)L_17*(float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m2876(L_10, L_20, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimeController/PauseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PauseChangedEventHandler__ctor_m2443 (PauseChangedEventHandler_t509 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void TimeController/PauseChangedEventHandler::Invoke()
extern "C" void PauseChangedEventHandler_Invoke_m2444 (PauseChangedEventHandler_t509 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PauseChangedEventHandler_Invoke_m2444((PauseChangedEventHandler_t509 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_PauseChangedEventHandler_t509(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult TimeController/PauseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * PauseChangedEventHandler_BeginInvoke_m2445 (PauseChangedEventHandler_t509 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void TimeController/PauseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PauseChangedEventHandler_EndInvoke_m2446 (PauseChangedEventHandler_t509 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimeController::.ctor()
extern "C" void TimeController__ctor_m2447 (TimeController_t510 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t509_il2cpp_TypeInfo_var;
extern "C" void TimeController_add_PauseChanged_m2448 (TimeController_t510 * __this, PauseChangedEventHandler_t509 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t509 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t509 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Combine_m2696(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t509 *)Castclass(L_2, PauseChangedEventHandler_t509_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t509_il2cpp_TypeInfo_var;
extern "C" void TimeController_remove_PauseChanged_m2449 (TimeController_t510 * __this, PauseChangedEventHandler_t509 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t509 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t509 * L_1 = ___value;
		Delegate_t583 * L_2 = Delegate_Remove_m2697(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t509 *)Castclass(L_2, PauseChangedEventHandler_t509_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m2450 (TimeController_t510 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CpausedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m2451 (TimeController_t510 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CpausedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TimeController::Awake()
extern TypeInfo* TimeController_t510_il2cpp_TypeInfo_var;
extern "C" void TimeController_Awake_m2452 (TimeController_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t510_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimeController_t510_StaticFields*)TimeController_t510_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m2453 (TimeController_t510 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m2450(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m2451(__this, 1, /*hidden argument*/NULL);
		Time_set_timeScale_m2804(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t509 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t509 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
	{
		return;
	}
}
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m2454 (TimeController_t510 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m2450(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m2451(__this, 0, /*hidden argument*/NULL);
		Time_set_timeScale_m2804(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t509 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t509 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
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
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
struct Component_t599;
struct SpriteRenderer_t471;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t471_m3007(__this, method) (( SpriteRenderer_t471 * (*) (Component_t599 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2826_gshared)(__this, method)


// System.Void TimedFader::.ctor()
extern "C" void TimedFader__ctor_m2455 (TimedFader_t511 * __this, const MethodInfo* method)
{
	{
		__this->___staticLifespan_2 = (0.5f);
		__this->___fadingLifespan_3 = (1.0f);
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedFader::Awake()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t471_m3007_MethodInfo_var;
extern "C" void TimedFader_Awake_m2456 (TimedFader_t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t471_m3007_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484009);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_5 = L_0;
		SpriteRenderer_t471 * L_1 = Component_GetComponent_TisSpriteRenderer_t471_m3007(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t471_m3007_MethodInfo_var);
		__this->___spriteRenderer_4 = L_1;
		return;
	}
}
// System.Void TimedFader::Update()
extern "C" void TimedFader_Update_m2457 (TimedFader_t511 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = Time_get_time_m2995(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		SpriteRenderer_t471 * L_9 = (__this->___spriteRenderer_4);
		float L_10 = V_2;
		Color_t257  L_11 = {0};
		Color__ctor_m3127(&L_11, (1.0f), (1.0f), (1.0f), ((float)((float)(1.0f)-(float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_9);
		SpriteRenderer_set_color_m3092(L_9, L_11, /*hidden argument*/NULL);
		float L_12 = V_2;
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		GameObject_t284 * L_13 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		Object_Destroy_m2743(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
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
extern "C" void TipConfig__ctor_m2458 (TipConfig_t394 * __this, String_t* ___tipID, String_t* ___tipText, Vector2_t68  ___tipPosition, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		Vector2_t68  L_2 = ___tipPosition;
		__this->___tipPosition_2 = L_2;
		return;
	}
}
// System.Void TipConfig::.ctor(System.String,System.String)
extern "C" void TipConfig__ctor_m2459 (TipConfig_t394 * __this, String_t* ___tipID, String_t* ___tipText, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		Vector2_t68  L_2 = {0};
		Vector2__ctor_m3128(&L_2, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___tipPosition_2 = L_2;
		return;
	}
}
// TipController/<PlayTipWithPause>c__Iterator15
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__Ite.h"
#ifndef _MSC_VER
#else
#endif
// TipController/<PlayTipWithPause>c__Iterator15
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__IteMethodDeclarations.h"



// System.Void TipController/<PlayTipWithPause>c__Iterator15::.ctor()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator15__ctor_m2460 (U3CPlayTipWithPauseU3Ec__Iterator15_t513 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2461 (U3CPlayTipWithPauseU3Ec__Iterator15_t513 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m2462 (U3CPlayTipWithPauseU3Ec__Iterator15_t513 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean TipController/<PlayTipWithPause>c__Iterator15::MoveNext()
extern TypeInfo* WaitForSeconds_t623_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayTipWithPauseU3Ec__Iterator15_MoveNext_m2463 (U3CPlayTipWithPauseU3Ec__Iterator15_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
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
		WaitForSeconds_t623 * L_3 = (WaitForSeconds_t623 *)il2cpp_codegen_object_new (WaitForSeconds_t623_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2981(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_3 = L_3;
		__this->___U24PC_2 = 1;
		goto IL_0065;
	}

IL_003e:
	{
		TipController_t512 * L_4 = (__this->___U3CU3Ef__this_6);
		TipConfig_t394 * L_5 = (__this->___tipConfig_1);
		NullCheck(L_4);
		TipController_MaybeShowTip_m2477(L_4, L_5, /*hidden argument*/NULL);
		TipController_t512 * L_6 = (__this->___U3CU3Ef__this_6);
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
// System.Void TipController/<PlayTipWithPause>c__Iterator15::Dispose()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator15_Dispose_m2464 (U3CPlayTipWithPauseU3Ec__Iterator15_t513 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void TipController/<PlayTipWithPause>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator15_Reset_m2465 (U3CPlayTipWithPauseU3Ec__Iterator15_t513 * __this, const MethodInfo* method)
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

// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialog.h"
// DialogController
#include "AssemblyU2DCSharp_DialogController.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"
struct GameObject_t284;
struct TipDialog_t514;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t514_m3129(__this, method) (( TipDialog_t514 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)


// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m2466 (TipController_t512 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::Awake()
extern TypeInfo* TipController_t512_il2cpp_TypeInfo_var;
extern "C" void TipController_Awake_m2467 (TipController_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TipController_t512_StaticFields*)TipController_t512_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_2 = 0;
		return;
	}
}
// System.Void TipController::Start()
extern "C" void TipController_Start_m2468 (TipController_t512 * __this, const MethodInfo* method)
{
	{
		TipController_RegisterForEvents_m2470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m2469 (TipController_t512 * __this, const MethodInfo* method)
{
	{
		TipController_UnregisterForEvents_m2471(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t429_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m2472_MethodInfo_var;
extern "C" void TipController_RegisterForEvents_m2470 (TipController_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(332);
		TipController_OnPhaseChanged_m2472_MethodInfo_var = il2cpp_codegen_method_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t430 * L_0 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)TipController_OnPhaseChanged_m2472_MethodInfo_var };
		GamePhaseChangedEventHandler_t429 * L_2 = (GamePhaseChangedEventHandler_t429 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t429_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2003(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m2016(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_2 = 1;
		return;
	}
}
// System.Void TipController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t429_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m2472_MethodInfo_var;
extern "C" void TipController_UnregisterForEvents_m2471 (TipController_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(332);
		TipController_OnPhaseChanged_m2472_MethodInfo_var = il2cpp_codegen_method_info_from_index(448);
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
		GamePhaseState_t430 * L_1 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TipController_OnPhaseChanged_m2472_MethodInfo_var };
		GamePhaseChangedEventHandler_t429 * L_3 = (GamePhaseChangedEventHandler_t429 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t429_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2003(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2017(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m2472 (TipController_t512 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t430 * L_0 = GamePhaseState_get_instance_m2020(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m2025(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TipController_EnqueueTipForLevel_m2473(__this, /*hidden argument*/NULL);
		goto IL_0020;
	}

IL_001a:
	{
		TipController_ClearEnqueuedTips_m2476(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m2473 (TipController_t512 * __this, const MethodInfo* method)
{
	LevelDescription_t450 * V_0 = {0};
	{
		LevelConfig_t457 * L_0 = LevelConfig_get_instance_m2086(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t450 * L_1 = LevelConfig_GetCurrentLevelDescription_m2094(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t450 * L_2 = V_0;
		NullCheck(L_2);
		TipConfig_t394 * L_3 = (L_2->___tipConfig_3);
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
		LevelDescription_t450 * L_4 = V_0;
		NullCheck(L_4);
		TipConfig_t394 * L_5 = (L_4->___tipConfig_3);
		LevelDescription_t450 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = (L_6->___tipPause_4);
		TipController_EnqueueTip_m2474(__this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m2474 (TipController_t512 * __this, TipConfig_t394 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	{
		TipConfig_t394 * L_0 = ___tipConfig;
		float L_1 = ___tipPause;
		Object_t * L_2 = TipController_PlayTipWithPause_m2475(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = L_2;
		Object_t * L_3 = (__this->___enqueuedTip_4);
		MonoBehaviour_StartCoroutine_m2615(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern TypeInfo* U3CPlayTipWithPauseU3Ec__Iterator15_t513_il2cpp_TypeInfo_var;
extern "C" Object_t * TipController_PlayTipWithPause_m2475 (TipController_t512 * __this, TipConfig_t394 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayTipWithPauseU3Ec__Iterator15_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayTipWithPauseU3Ec__Iterator15_t513 * V_0 = {0};
	{
		U3CPlayTipWithPauseU3Ec__Iterator15_t513 * L_0 = (U3CPlayTipWithPauseU3Ec__Iterator15_t513 *)il2cpp_codegen_object_new (U3CPlayTipWithPauseU3Ec__Iterator15_t513_il2cpp_TypeInfo_var);
		U3CPlayTipWithPauseU3Ec__Iterator15__ctor_m2460(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayTipWithPauseU3Ec__Iterator15_t513 * L_1 = V_0;
		float L_2 = ___tipPause;
		NullCheck(L_1);
		L_1->___tipPause_0 = L_2;
		U3CPlayTipWithPauseU3Ec__Iterator15_t513 * L_3 = V_0;
		TipConfig_t394 * L_4 = ___tipConfig;
		NullCheck(L_3);
		L_3->___tipConfig_1 = L_4;
		U3CPlayTipWithPauseU3Ec__Iterator15_t513 * L_5 = V_0;
		float L_6 = ___tipPause;
		NullCheck(L_5);
		L_5->___U3CU24U3EtipPause_4 = L_6;
		U3CPlayTipWithPauseU3Ec__Iterator15_t513 * L_7 = V_0;
		TipConfig_t394 * L_8 = ___tipConfig;
		NullCheck(L_7);
		L_7->___U3CU24U3EtipConfig_5 = L_8;
		U3CPlayTipWithPauseU3Ec__Iterator15_t513 * L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3Ef__this_6 = __this;
		U3CPlayTipWithPauseU3Ec__Iterator15_t513 * L_10 = V_0;
		return L_10;
	}
}
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m2476 (TipController_t512 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m2997(__this, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = (Object_t *)NULL;
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern TypeInfo* PersistentStorage_t485_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t411_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t514_m3129_MethodInfo_var;
extern "C" bool TipController_MaybeShowTip_m2477 (TipController_t512 * __this, TipConfig_t394 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DialogController_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(362);
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisTipDialog_t514_m3129_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GameObject_t284 * V_1 = {0};
	TipDialog_t514 * V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		PersistentStorage_t485 * L_0 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t394 * L_1 = ___tipConfig;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral865, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = PersistentStorage_GetBoolValue_m2290(L_0, L_3, 0, /*hidden argument*/NULL);
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
		DialogController_t411 * L_6 = ((DialogController_t411_StaticFields*)DialogController_t411_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_6);
		bool L_7 = DialogController_IsDialogShowing_m1916(L_6, /*hidden argument*/NULL);
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
		GameObject_t284 * L_8 = (__this->___tipDialogPrototype_3);
		Vector3_t413  L_9 = {0};
		Vector3__ctor_m2865(&L_9, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t622  L_10 = Quaternion_get_identity_m2972(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t549 * L_11 = Object_Instantiate_m2973(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = ((GameObject_t284 *)IsInst(L_11, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_12 = V_1;
		NullCheck(L_12);
		Transform_t323 * L_13 = GameObject_get_transform_m2870(L_12, /*hidden argument*/NULL);
		Vector3_t413  L_14 = {0};
		Vector3__ctor_m2865(&L_14, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_m2876(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t284 * L_15 = V_1;
		NullCheck(L_15);
		TipDialog_t514 * L_16 = GameObject_GetComponent_TisTipDialog_t514_m3129(L_15, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t514_m3129_MethodInfo_var);
		V_2 = L_16;
		TipDialog_t514 * L_17 = V_2;
		TipConfig_t394 * L_18 = ___tipConfig;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___tipText_1);
		TipConfig_t394 * L_20 = ___tipConfig;
		NullCheck(L_20);
		Vector2_t68  L_21 = (L_20->___tipPosition_2);
		NullCheck(L_17);
		TipDialog_ConfigureDialog_m2480(L_17, L_19, L_21, /*hidden argument*/NULL);
		DialogController_t411 * L_22 = ((DialogController_t411_StaticFields*)DialogController_t411_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t284 * L_23 = V_1;
		NullCheck(L_22);
		DialogController_ShowDialog_m1913(L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t485_il2cpp_TypeInfo_var);
		PersistentStorage_t485 * L_24 = ((PersistentStorage_t485_StaticFields*)PersistentStorage_t485_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t394 * L_25 = ___tipConfig;
		NullCheck(L_25);
		String_t* L_26 = (L_25->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral865, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		PersistentStorage_SetBoolValue_m2289(L_24, L_27, 1, /*hidden argument*/NULL);
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
struct Component_t599;
struct RectTransform_t525;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t525_m3037(__this, method) (( RectTransform_t525 * (*) (Component_t599 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2826_gshared)(__this, method)


// System.Void TipDialog::.ctor()
extern "C" void TipDialog__ctor_m2478 (TipDialog_t514 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::CloseDialog()
extern TypeInfo* DialogController_t411_il2cpp_TypeInfo_var;
extern "C" void TipDialog_CloseDialog_m2479 (TipDialog_t514 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(362);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t411 * L_0 = ((DialogController_t411_StaticFields*)DialogController_t411_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t284 * L_1 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m1914(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::ConfigureDialog(System.String,UnityEngine.Vector2)
extern const MethodInfo* Component_GetComponent_TisRectTransform_t525_m3037_MethodInfo_var;
extern "C" void TipDialog_ConfigureDialog_m2480 (TipDialog_t514 * __this, String_t* ___message, Vector2_t68  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t525_m3037_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484028);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t525 * V_0 = {0};
	{
		Text_t381 * L_0 = (__this->___dialogText_2);
		String_t* L_1 = ___message;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		RectTransform_t525 * L_2 = Component_GetComponent_TisRectTransform_t525_m3037(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t525_m3037_MethodInfo_var);
		V_0 = L_2;
		RectTransform_t525 * L_3 = V_0;
		Vector2_t68  L_4 = ___position;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m3130(L_3, L_4, /*hidden argument*/NULL);
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

// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandle.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandleMethodDeclarations.h"
struct GameObject_t284;
struct Text_t381;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t381_m3131(__this, method) (( Text_t381 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)


// System.Void TrackLevel::.ctor()
extern "C" void TrackLevel__ctor_m2481 (TrackLevel_t515 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::Start()
extern TypeInfo* GameLevelChangedEventHandler_t425_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m2484_MethodInfo_var;
extern "C" void TrackLevel_Start_m2482 (TrackLevel_t515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		TrackLevel_SetGameLevelText_m2484_MethodInfo_var = il2cpp_codegen_method_info_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t381 * L_1 = GameObject_GetComponent_TisText_t381_m3131(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var);
		__this->___levelText_2 = L_1;
		GameLevelState_t426 * L_2 = GameLevelState_get_instance_m1994(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)TrackLevel_SetGameLevelText_m2484_MethodInfo_var };
		GameLevelChangedEventHandler_t425 * L_4 = (GameLevelChangedEventHandler_t425 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t425_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1985(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameLevelState_add_GameLevelChanged_m1990(L_2, L_4, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		TrackLevel_SetGameLevelText_m2484(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::OnDestroy()
extern TypeInfo* GameLevelChangedEventHandler_t425_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m2484_MethodInfo_var;
extern "C" void TrackLevel_OnDestroy_m2483 (TrackLevel_t515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		TrackLevel_SetGameLevelText_m2484_MethodInfo_var = il2cpp_codegen_method_info_from_index(451);
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
		GameLevelState_t426 * L_1 = GameLevelState_get_instance_m1994(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TrackLevel_SetGameLevelText_m2484_MethodInfo_var };
		GameLevelChangedEventHandler_t425 * L_3 = (GameLevelChangedEventHandler_t425 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t425_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1985(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m1991(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TrackLevel::SetGameLevelText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackLevel_SetGameLevelText_m2484 (TrackLevel_t515 * __this, const MethodInfo* method)
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
		GameLevelState_t426 * L_1 = GameLevelState_get_instance_m1994(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m1992(L_1, /*hidden argument*/NULL);
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

// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct GameObject_t284;
struct DistortForEffect_t412;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t412_m3036(__this, method) (( DistortForEffect_t412 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)


// System.Void TrackScore::.ctor()
extern "C" void TrackScore__ctor_m2485 (TrackScore_t516 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::Start()
extern TypeInfo* ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t412_m3036_MethodInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m2489_MethodInfo_var;
extern "C" void TrackScore_Start_m2486 (TrackScore_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		GameObject_GetComponent_TisDistortForEffect_t412_m3036_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484025);
		TrackScore_DynamicUpdateScoreText_m2489_MethodInfo_var = il2cpp_codegen_method_info_from_index(452);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t396 * L_0 = PlayerStats_get_instance_m2334(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t381 * L_2 = GameObject_GetComponent_TisText_t381_m3131(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var);
		__this->___scoreText_2 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t412 * L_4 = GameObject_GetComponent_TisDistortForEffect_t412_m3036(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t412_m3036_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t396 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackScore_DynamicUpdateScoreText_m2489_MethodInfo_var };
		ScoreChangedEventHandler_t489 * L_7 = (ScoreChangedEventHandler_t489 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m2315(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_ScoreChanged_m2328(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackScore_SetScoreText_m2488(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::OnDestroy()
extern TypeInfo* ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m2489_MethodInfo_var;
extern "C" void TrackScore_OnDestroy_m2487 (TrackScore_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		TrackScore_DynamicUpdateScoreText_m2489_MethodInfo_var = il2cpp_codegen_method_info_from_index(452);
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
		PlayerStats_t396 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackScore_DynamicUpdateScoreText_m2489_MethodInfo_var };
		ScoreChangedEventHandler_t489 * L_3 = (ScoreChangedEventHandler_t489 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t489_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m2315(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_ScoreChanged_m2329(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackScore::SetScoreText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackScore_SetScoreText_m2488 (TrackScore_t516 * __this, const MethodInfo* method)
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
		PlayerStats_t396 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_GetScore_m2347(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral866, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackScore::DynamicUpdateScoreText()
extern "C" void TrackScore_DynamicUpdateScoreText_m2489 (TrackScore_t516 * __this, const MethodInfo* method)
{
	{
		TrackScore_SetScoreText_m2488(__this, /*hidden argument*/NULL);
		DistortForEffect_t412 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_Distort_m1919(L_0, /*hidden argument*/NULL);
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
extern "C" void TrackTreats__ctor_m2490 (TrackTreats_t517 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::Start()
extern TypeInfo* TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t412_m3036_MethodInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m2494_MethodInfo_var;
extern "C" void TrackTreats_Start_m2491 (TrackTreats_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		GameObject_GetComponent_TisDistortForEffect_t412_m3036_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484025);
		TrackTreats_DynamicUpdateTreatsText_m2494_MethodInfo_var = il2cpp_codegen_method_info_from_index(453);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t396 * L_0 = PlayerStats_get_instance_m2334(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t381 * L_2 = GameObject_GetComponent_TisText_t381_m3131(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t381_m3131_MethodInfo_var);
		__this->___treatsText_2 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t412 * L_4 = GameObject_GetComponent_TisDistortForEffect_t412_m3036(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t412_m3036_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t396 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackTreats_DynamicUpdateTreatsText_m2494_MethodInfo_var };
		TreatsChangedEventHandler_t490 * L_7 = (TreatsChangedEventHandler_t490 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2319(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_TreatsChanged_m2330(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackTreats_SetTreatsText_m2493(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::OnDestroy()
extern TypeInfo* TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m2494_MethodInfo_var;
extern "C" void TrackTreats_OnDestroy_m2492 (TrackTreats_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		TrackTreats_DynamicUpdateTreatsText_m2494_MethodInfo_var = il2cpp_codegen_method_info_from_index(453);
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
		PlayerStats_t396 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackTreats_DynamicUpdateTreatsText_m2494_MethodInfo_var };
		TreatsChangedEventHandler_t490 * L_3 = (TreatsChangedEventHandler_t490 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t490_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2319(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_TreatsChanged_m2331(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackTreats::SetTreatsText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackTreats_SetTreatsText_m2493 (TrackTreats_t517 * __this, const MethodInfo* method)
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
		PlayerStats_t396 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_GetTreats_m2348(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral867, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackTreats::DynamicUpdateTreatsText()
extern "C" void TrackTreats_DynamicUpdateTreatsText_m2494 (TrackTreats_t517 * __this, const MethodInfo* method)
{
	{
		TrackTreats_SetTreatsText_m2493(__this, /*hidden argument*/NULL);
		DistortForEffect_t412 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_Distort_m1919(L_0, /*hidden argument*/NULL);
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
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
struct Component_t599;
struct Animator_t518;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t518_m3132(__this, method) (( Animator_t518 * (*) (Component_t599 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2826_gshared)(__this, method)


// System.Void TutsPlayerController::.ctor()
extern "C" void TutsPlayerController__ctor_m2495 (TutsPlayerController_t519 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutsPlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t518_m3132_MethodInfo_var;
extern "C" void TutsPlayerController_Start_m2496 (TutsPlayerController_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t518_m3132_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484102);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t518 * L_0 = Component_GetComponent_TisAnimator_t518_m3132(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t518_m3132_MethodInfo_var);
		__this->___animator_2 = L_0;
		return;
	}
}
// System.Void TutsPlayerController::Update()
extern TypeInfo* Input_t553_il2cpp_TypeInfo_var;
extern "C" void TutsPlayerController_Update_m2497 (TutsPlayerController_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t553_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m3133(NULL /*static, unused*/, (String_t*) &_stringLiteral868, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m3133(NULL /*static, unused*/, (String_t*) &_stringLiteral869, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		Animator_t518 * L_3 = (__this->___animator_2);
		NullCheck(L_3);
		Animator_SetInteger_m3134(L_3, (String_t*) &_stringLiteral870, 2, /*hidden argument*/NULL);
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
		Animator_t518 * L_5 = (__this->___animator_2);
		NullCheck(L_5);
		Animator_SetInteger_m3134(L_5, (String_t*) &_stringLiteral870, 0, /*hidden argument*/NULL);
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
		Animator_t518 * L_7 = (__this->___animator_2);
		NullCheck(L_7);
		Animator_SetInteger_m3134(L_7, (String_t*) &_stringLiteral870, 1, /*hidden argument*/NULL);
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
		Animator_t518 * L_9 = (__this->___animator_2);
		NullCheck(L_9);
		Animator_SetInteger_m3134(L_9, (String_t*) &_stringLiteral870, 3, /*hidden argument*/NULL);
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
extern "C" void TweakableParams__ctor_m2498 (TweakableParams_t520 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TweakableParams::GetInitialMoney()
extern "C" int32_t TweakableParams_GetInitialMoney_m2499 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t407 * L_0 = DebugConfig_get_instance_m1898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_get_useDebugValues_m1896(L_0, /*hidden argument*/NULL);
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
extern "C" int32_t TweakableParams_GetInitialBoosts_m2500 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t407 * L_0 = DebugConfig_get_instance_m1898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_get_useDebugValues_m1896(L_0, /*hidden argument*/NULL);
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
extern "C" int32_t TweakableParams_GetInitialMicePerHole_m2501 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t407 * L_0 = DebugConfig_get_instance_m1898(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_get_useDebugValues_m1896(L_0, /*hidden argument*/NULL);
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
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
#ifndef _MSC_VER
#else
#endif
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSliderMethodDeclarations.h"



// System.Void TweakableSlider::.ctor()
extern "C" void TweakableSlider__ctor_m2502 (TweakableSlider_t472 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
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
extern "C" void TwitterSharing__ctor_m2503 (TwitterSharing_t521 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::Awake()
extern TypeInfo* TwitterSharing_t521_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_Awake_m2504 (TwitterSharing_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TwitterSharing_t521_StaticFields*)TwitterSharing_t521_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t296_il2cpp_TypeInfo_var);
		SPTwitter_t296 * L_0 = SPTwitter_get_instance_m1274(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void SPTwitter::Init() */, L_0);
		return;
	}
}
// System.Void TwitterSharing::ShareScore(System.Int32)
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScore_m2505 (TwitterSharing_t521 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral871, /*hidden argument*/NULL);
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
		TwitterSharing_ShareScoreInternal_m2507(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0025:
	{
		int32_t L_3 = ___score;
		TwitterSharing_ShareScoreThroughURLs_m2506(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreThroughURLs_m2506 (TwitterSharing_t521 * __this, int32_t ___score, const MethodInfo* method)
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
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral872, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		String_t* L_1 = Utilities_GetShareMessageForScore_m2522(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t45* L_2 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral873);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral873;
		StringU5BU5D_t45* L_3 = L_2;
		String_t* L_4 = V_0;
		String_t* L_5 = WWW_EscapeURL_m3020(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)L_5;
		StringU5BU5D_t45* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral874);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral874;
		StringU5BU5D_t45* L_7 = L_6;
		String_t* L_8 = WWW_EscapeURL_m3020(NULL /*static, unused*/, (String_t*) &_stringLiteral768, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t45* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral875);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral875;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m217(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_m174(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral876, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14 = WWW_EscapeURL_m3020(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral877, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		String_t* L_17 = V_1;
		Object_t * L_18 = Utilities_LaunchAppOrWeb_m2526(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2615(__this, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreInternal_m2507 (TwitterSharing_t521 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral878, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		String_t* L_1 = Utilities_GetShareMessageForScore_m2522(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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

// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"
struct GameObject_t284;
struct BoostButton_t378;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t378_m2988(__this, method) (( BoostButton_t378 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)


// System.Void UseBoost::.ctor()
extern "C" void UseBoost__ctor_m2508 (UseBoost_t522 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UseBoost::Start()
extern "C" void UseBoost_Start_m2509 (UseBoost_t522 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t373 * L_0 = BoostConfig_get_instance_m1846(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t396 * L_1 = PlayerStats_get_instance_m2334(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void UseBoost::Use()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t378_m2988_MethodInfo_var;
extern "C" void UseBoost_Use_m2510 (UseBoost_t522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t378_m2988_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483999);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t378 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t378 * L_1 = GameObject_GetComponent_TisBoostButton_t378_m2988(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t378_m2988_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t378 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m1815(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PlayerStats_t396 * L_4 = (__this->___playerStats_3);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = PlayerStats_GetAvailableBoostCount_m2350(L_4, L_5, /*hidden argument*/NULL);
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
		PlayerStats_t396 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		PlayerStats_RemoveBoost_m2352(L_7, L_8, /*hidden argument*/NULL);
		BoostConfig_t373 * L_9 = (__this->___boostConfig_2);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		BoostConfig_ExecuteBoost_m1863(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// Utilities/<LaunchAppOrWeb>c__Iterator16
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1.h"
#ifndef _MSC_VER
#else
#endif
// Utilities/<LaunchAppOrWeb>c__Iterator16
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1MethodDeclarations.h"



// System.Void Utilities/<LaunchAppOrWeb>c__Iterator16::.ctor()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator16__ctor_m2511 (U3CLaunchAppOrWebU3Ec__Iterator16_t523 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator16::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator16_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2512 (U3CLaunchAppOrWebU3Ec__Iterator16_t523 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator16::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator16_System_Collections_IEnumerator_get_Current_m2513 (U3CLaunchAppOrWebU3Ec__Iterator16_t523 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean Utilities/<LaunchAppOrWeb>c__Iterator16::MoveNext()
extern TypeInfo* WaitForSeconds_t623_il2cpp_TypeInfo_var;
extern "C" bool U3CLaunchAppOrWebU3Ec__Iterator16_MoveNext_m2514 (U3CLaunchAppOrWebU3Ec__Iterator16_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
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
		int32_t L_2 = Application_get_platform_m2809(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_3 = (__this->___appURL_0);
		String_t* L_4 = (__this->___webURL_1);
		Utilities_LaunchAppOrWebOnIOS_m2525(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		WaitForSeconds_t623 * L_5 = (WaitForSeconds_t623 *)il2cpp_codegen_object_new (WaitForSeconds_t623_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2981(L_5, (0.001f), /*hidden argument*/NULL);
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
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator16::Dispose()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator16_Dispose_m2515 (U3CLaunchAppOrWebU3Ec__Iterator16_t523 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator16::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator16_Reset_m2516 (U3CLaunchAppOrWebU3Ec__Iterator16_t523 * __this, const MethodInfo* method)
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

struct GameObject_t284;
struct RectTransform_t525;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t525_m2971(__this, method) (( RectTransform_t525 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)


// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m2517 (Utilities_t524 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m2518 (Object_t * __this /* static, unused */, Vector3_t413  ___vector, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		(&___vector)->___z_3 = (0.0f);
		Vector3_t413  L_0 = Vector3_get_right_m3094(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t413  L_1 = ___vector;
		float L_2 = Vector3_Angle_m3095(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" GameObject_t284 * Utilities_FindChildWithTag_m2519 (Object_t * __this /* static, unused */, GameObject_t284 * ___gameObject, String_t* ___tag, const MethodInfo* method)
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
		Transform_t323 * L_1 = GameObject_get_transform_m2870(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t323 * L_3 = Transform_GetChild_m3115(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t323 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_t284 * L_5 = Component_get_gameObject_m2661(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m3135(L_5, /*hidden argument*/NULL);
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
		GameObject_t284 * L_10 = Component_get_gameObject_m2661(L_9, /*hidden argument*/NULL);
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
		Transform_t323 * L_14 = GameObject_get_transform_m2870(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m3116(L_14, /*hidden argument*/NULL);
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
extern TypeInfo* Mathf_t629_il2cpp_TypeInfo_var;
extern "C" Color_t257  Utilities_TrafficLightColorLerp_m2520 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(354);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___fractionFinished;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t629_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m3035(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___fractionFinished = L_1;
		float L_2 = ___fractionFinished;
		if ((!(((float)L_2) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		Color_t257  L_3 = Color_get_green_m3136(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t257  L_4 = Color_get_yellow_m3137(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___fractionFinished;
		Color_t257  L_6 = Color_Lerp_m3138(NULL /*static, unused*/, L_3, L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		Color_t257  L_7 = Color_get_yellow_m3137(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t257  L_8 = Color_get_red_m3139(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___fractionFinished;
		Color_t257  L_10 = Color_Lerp_m3138(NULL /*static, unused*/, L_7, L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m2521 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t396 * L_0 = PlayerStats_get_instance_m2334(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m2353(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*) &_stringLiteral792;
	}

IL_0018:
	{
		return (String_t*) &_stringLiteral879;
	}
}
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_GetShareMessageForScore_m2522 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
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
		PlayerStats_t396 * L_0 = PlayerStats_get_instance_m2334(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m2353(L_0, /*hidden argument*/NULL);
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
		String_t* L_7 = String_Concat_m2716(NULL /*static, unused*/, (String_t*) &_stringLiteral880, L_6, (String_t*) &_stringLiteral881, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___score;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2716(NULL /*static, unused*/, (String_t*) &_stringLiteral882, L_10, (String_t*) &_stringLiteral881, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" {int32_t DEFAULT_CALL CanLaunchURL(char*);}
extern "C" bool Utilities_CanLaunchURL_m2523 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
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
extern "C" bool Utilities_AppCanLaunchURL_m2524 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m2809(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = Utilities_CanLaunchURL_m2523(NULL /*static, unused*/, (String_t*) &_stringLiteral768, /*hidden argument*/NULL);
		return L_1;
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m2525 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appURL;
		bool L_1 = Utilities_CanLaunchURL_m2523(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral883, /*hidden argument*/NULL);
		String_t* L_2 = ___appURL;
		Application_OpenURL_m2803(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		Debug_Log_m2590(NULL /*static, unused*/, (String_t*) &_stringLiteral884, /*hidden argument*/NULL);
		String_t* L_3 = ___webURL;
		Application_OpenURL_m2803(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern TypeInfo* U3CLaunchAppOrWebU3Ec__Iterator16_t523_il2cpp_TypeInfo_var;
extern "C" Object_t * Utilities_LaunchAppOrWeb_m2526 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CLaunchAppOrWebU3Ec__Iterator16_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	U3CLaunchAppOrWebU3Ec__Iterator16_t523 * V_0 = {0};
	{
		U3CLaunchAppOrWebU3Ec__Iterator16_t523 * L_0 = (U3CLaunchAppOrWebU3Ec__Iterator16_t523 *)il2cpp_codegen_object_new (U3CLaunchAppOrWebU3Ec__Iterator16_t523_il2cpp_TypeInfo_var);
		U3CLaunchAppOrWebU3Ec__Iterator16__ctor_m2511(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLaunchAppOrWebU3Ec__Iterator16_t523 * L_1 = V_0;
		String_t* L_2 = ___appURL;
		NullCheck(L_1);
		L_1->___appURL_0 = L_2;
		U3CLaunchAppOrWebU3Ec__Iterator16_t523 * L_3 = V_0;
		String_t* L_4 = ___webURL;
		NullCheck(L_3);
		L_3->___webURL_1 = L_4;
		U3CLaunchAppOrWebU3Ec__Iterator16_t523 * L_5 = V_0;
		String_t* L_6 = ___appURL;
		NullCheck(L_5);
		L_5->___U3CU24U3EappURL_4 = L_6;
		U3CLaunchAppOrWebU3Ec__Iterator16_t523 * L_7 = V_0;
		String_t* L_8 = ___webURL;
		NullCheck(L_7);
		L_7->___U3CU24U3EwebURL_5 = L_8;
		U3CLaunchAppOrWebU3Ec__Iterator16_t523 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t525_m2971_MethodInfo_var;
extern "C" void Utilities_SpaceHorizontally_m2527 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t383* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t525_m2971_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483989);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t284 * V_2 = {0};
	GameObjectU5BU5D_t383* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t284 * V_10 = {0};
	GameObjectU5BU5D_t383* V_11 = {0};
	int32_t V_12 = 0;
	RectTransform_t525 * V_13 = {0};
	float V_14 = 0.0f;
	Vector2_t68  V_15 = {0};
	Rect_t544  V_16 = {0};
	Rect_t544  V_17 = {0};
	{
		float L_0 = ___containingWidth;
		V_0 = L_0;
		V_1 = (0.0f);
		GameObjectU5BU5D_t383* L_1 = ___objects;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		GameObjectU5BU5D_t383* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_2, L_4));
		float L_5 = V_1;
		GameObject_t284 * L_6 = V_2;
		NullCheck(L_6);
		RectTransform_t525 * L_7 = GameObject_GetComponent_TisRectTransform_t525_m2971(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t525_m2971_MethodInfo_var);
		NullCheck(L_7);
		Rect_t544  L_8 = RectTransform_get_rect_m3039(L_7, /*hidden argument*/NULL);
		V_16 = L_8;
		float L_9 = Rect_get_width_m2868((&V_16), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5+(float)L_9));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_4;
		GameObjectU5BU5D_t383* L_12 = V_3;
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
		GameObjectU5BU5D_t383* L_16 = ___objects;
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
		GameObjectU5BU5D_t383* L_20 = ___objects;
		V_11 = L_20;
		V_12 = 0;
		goto IL_00d7;
	}

IL_0079:
	{
		GameObjectU5BU5D_t383* L_21 = V_11;
		int32_t L_22 = V_12;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_10 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_21, L_23));
		GameObject_t284 * L_24 = V_10;
		NullCheck(L_24);
		RectTransform_t525 * L_25 = GameObject_GetComponent_TisRectTransform_t525_m2971(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t525_m2971_MethodInfo_var);
		V_13 = L_25;
		RectTransform_t525 * L_26 = V_13;
		NullCheck(L_26);
		Rect_t544  L_27 = RectTransform_get_rect_m3039(L_26, /*hidden argument*/NULL);
		V_17 = L_27;
		float L_28 = Rect_get_width_m2868((&V_17), /*hidden argument*/NULL);
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
		Vector2__ctor_m3128((&V_15), L_33, ((float)((float)L_34+(float)L_35)), /*hidden argument*/NULL);
		float L_36 = V_9;
		V_9 = ((-L_36));
		RectTransform_t525 * L_37 = V_13;
		Vector2_t68  L_38 = V_15;
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_m3130(L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_7;
		float L_40 = V_14;
		V_7 = ((float)((float)L_39+(float)L_40));
		int32_t L_41 = V_12;
		V_12 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_42 = V_12;
		GameObjectU5BU5D_t383* L_43 = V_11;
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
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
struct GameObject_t284;
struct Canvas_t375;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t375_m3140(__this, method) (( Canvas_t375 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2860_gshared)(__this, method)


// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m2528 (WorldObjectFollower_t526 * __this, const MethodInfo* method)
{
	{
		Vector3_t413  L_0 = {0};
		Vector3__ctor_m2865(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_10 = L_0;
		MonoBehaviour__ctor_m2556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldObjectFollower::Start()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t375_m3140_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t525_m2971_MethodInfo_var;
extern "C" void WorldObjectFollower_Start_m2529 (WorldObjectFollower_t526 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t375_m3140_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484103);
		GameObject_GetComponent_TisRectTransform_t525_m2971_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483989);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	Rect_t544  V_1 = {0};
	{
		GameObject_t284 * L_0 = GameObject_FindWithTag_m3141(NULL /*static, unused*/, (String_t*) &_stringLiteral885, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t323 * L_2 = GameObject_get_transform_m2870(L_1, /*hidden argument*/NULL);
		GameObject_t284 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t323 * L_4 = GameObject_get_transform_m2870(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_m2974(L_2, L_4, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_5 = V_0;
		NullCheck(L_5);
		Canvas_t375 * L_6 = GameObject_GetComponent_TisCanvas_t375_m3140(L_5, /*hidden argument*/GameObject_GetComponent_TisCanvas_t375_m3140_MethodInfo_var);
		__this->___worldCanvas_4 = L_6;
		Canvas_t375 * L_7 = (__this->___worldCanvas_4);
		NullCheck(L_7);
		Camera_t441 * L_8 = Canvas_get_worldCamera_m3142(L_7, /*hidden argument*/NULL);
		__this->___worldCamera_5 = L_8;
		Canvas_t375 * L_9 = (__this->___worldCanvas_4);
		NullCheck(L_9);
		Rect_t544  L_10 = Canvas_get_pixelRect_m2990(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = Rect_get_width_m2868((&V_1), /*hidden argument*/NULL);
		Canvas_t375 * L_12 = (__this->___worldCanvas_4);
		NullCheck(L_12);
		float L_13 = Canvas_get_scaleFactor_m2991(L_12, /*hidden argument*/NULL);
		__this->___canvasWidth_6 = ((float)((float)L_11/(float)L_13));
		float L_14 = Rect_get_height_m2869((&V_1), /*hidden argument*/NULL);
		Canvas_t375 * L_15 = (__this->___worldCanvas_4);
		NullCheck(L_15);
		float L_16 = Canvas_get_scaleFactor_m2991(L_15, /*hidden argument*/NULL);
		__this->___canvasHeight_7 = ((float)((float)L_14/(float)L_16));
		GameObject_t284 * L_17 = Component_get_gameObject_m2661(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_t525 * L_18 = GameObject_GetComponent_TisRectTransform_t525_m2971(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t525_m2971_MethodInfo_var);
		__this->___myRectTransform_3 = L_18;
		return;
	}
}
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m2530 (WorldObjectFollower_t526 * __this, const MethodInfo* method)
{
	{
		RectTransform_t525 * L_0 = (__this->___myRectTransform_3);
		bool L_1 = Object_op_Implicit_m2931(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		WorldObjectFollower_ResetPosition_m2532(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m2531 (WorldObjectFollower_t526 * __this, GameObject_t284 * ___go, Vector3_t413  ___offset, bool ___followeeMoves, const MethodInfo* method)
{
	{
		GameObject_t284 * L_0 = ___go;
		__this->___objectToFollow_2 = L_0;
		Vector3_t413  L_1 = ___offset;
		__this->___offset_10 = L_1;
		bool L_2 = ___followeeMoves;
		__this->___followeeMoves_8 = L_2;
		__this->___positionDirty_9 = 1;
		return;
	}
}
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m2532 (WorldObjectFollower_t526 * __this, const MethodInfo* method)
{
	Vector3_t413  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Camera_t441 * L_0 = (__this->___worldCamera_5);
		GameObject_t284 * L_1 = (__this->___objectToFollow_2);
		NullCheck(L_1);
		Transform_t323 * L_2 = GameObject_get_transform_m2870(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t413  L_3 = Transform_get_position_m2872(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t413  L_4 = Camera_WorldToViewportPoint_m3143(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___x_1);
		float L_6 = (__this->___canvasWidth_6);
		V_1 = ((float)((float)((float)((float)L_5-(float)(0.5f)))*(float)L_6));
		float L_7 = ((&V_0)->___y_2);
		float L_8 = (__this->___canvasHeight_7);
		V_2 = ((float)((float)((float)((float)L_7-(float)(0.5f)))*(float)L_8));
		RectTransform_t525 * L_9 = (__this->___myRectTransform_3);
		float L_10 = V_1;
		float L_11 = V_2;
		Vector3_t413  L_12 = {0};
		Vector3__ctor_m2865(&L_12, L_10, L_11, (0.0f), /*hidden argument*/NULL);
		Vector3_t413  L_13 = (__this->___offset_10);
		Vector3_t413  L_14 = Vector3_op_Addition_m3024(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m3025(L_9, L_14, /*hidden argument*/NULL);
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
extern "C" void EventHandlerFunction__ctor_m2533 (EventHandlerFunction_t527 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m2534 (EventHandlerFunction_t527 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandlerFunction_Invoke_m2534((EventHandlerFunction_t527 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t527(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m2535 (EventHandlerFunction_t527 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m2536 (EventHandlerFunction_t527 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void DataEventHandlerFunction__ctor_m2537 (DataEventHandlerFunction_t528 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m2538 (DataEventHandlerFunction_t528 * __this, CEvent_t91 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DataEventHandlerFunction_Invoke_m2538((DataEventHandlerFunction_t528 *)__this->___prev_9,___e, method);
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
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t528(Il2CppObject* delegate, CEvent_t91 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	CEvent_t91 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnionAssets.FLE.CEvent'."));
}
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m2539 (DataEventHandlerFunction_t528 * __this, CEvent_t91 * ___e, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m2540 (DataEventHandlerFunction_t528 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void InitDelegate__ctor_m2541 (InitDelegate_t336 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m2542 (InitDelegate_t336 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		InitDelegate_Invoke_m2542((InitDelegate_t336 *)__this->___prev_9, method);
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
extern "C" Object_t * InitDelegate_BeginInvoke_m2543 (InitDelegate_t336 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m2544 (InitDelegate_t336 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void FacebookDelegate__ctor_m2545 (FacebookDelegate_t350 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m2546 (FacebookDelegate_t350 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FacebookDelegate_Invoke_m2546((FacebookDelegate_t350 *)__this->___prev_9,___result, method);
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
extern "C" Object_t * FacebookDelegate_BeginInvoke_m2547 (FacebookDelegate_t350 * __this, FBResult_t213 * ___result, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m2548 (FacebookDelegate_t350 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void HideUnityDelegate__ctor_m2549 (HideUnityDelegate_t337 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C" void HideUnityDelegate_Invoke_m2550 (HideUnityDelegate_t337 * __this, bool ___isUnityShown, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HideUnityDelegate_Invoke_m2550((HideUnityDelegate_t337 *)__this->___prev_9,___isUnityShown, method);
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
extern "C" Object_t * HideUnityDelegate_BeginInvoke_m2551 (HideUnityDelegate_t337 * __this, bool ___isUnityShown, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
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
extern "C" void HideUnityDelegate_EndInvoke_m2552 (HideUnityDelegate_t337 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
