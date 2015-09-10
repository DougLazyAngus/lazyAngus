#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// BuyBoost
#include "AssemblyU2DCSharp_BuyBoost.h"
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
// BuyBoost
#include "AssemblyU2DCSharp_BuyBoostMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
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
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
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
struct BoostButton_t496;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m4245_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m4245(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t496_m4380(__this, method) (( BoostButton_t496 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)

// System.Array
#include "mscorlib_System_Array.h"

// System.Void BuyBoost::.ctor()
extern "C" void BuyBoost__ctor_m2808 (BuyBoost_t510 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyBoost::Start()
extern "C" void BuyBoost_Start_m2809 (BuyBoost_t510 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t493 * L_0 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t509 * L_1 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t496_m4380_MethodInfo_var;
extern "C" void BuyBoost_BuyAndUse_m2810 (BuyBoost_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t496_m4380_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484125);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t496 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t496 * L_1 = GameObject_GetComponent_TisBoostButton_t496_m4380(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t496_m4380_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t496 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2746(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BoostConfig_t493 * L_4 = (__this->___boostConfig_2);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = BoostConfig_GetCurrentPriceForBoost_m2797(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		PlayerStats_t509 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = PlayerStats_CanAfford_m3713(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		PlayerStats_t509 * L_10 = (__this->___playerStats_3);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		PlayerStats_AddBoost_m3718(L_10, L_11, /*hidden argument*/NULL);
		PlayerStats_t509 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		PlayerStats_SpendMoney_m3715(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t509 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		PlayerStats_RemoveBoost_m3719(L_14, L_15, /*hidden argument*/NULL);
		BoostConfig_t493 * L_16 = (__this->___boostConfig_2);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		BoostConfig_ExecuteBoost_m2800(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0061:
	{
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

// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void CatBodyHitDetection::.ctor()
extern "C" void CatBodyHitDetection__ctor_m2811 (CatBodyHitDetection_t511 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CatBodyHitDetection::OnMouseDown()
extern "C" void CatBodyHitDetection_OnMouseDown_m2812 (CatBodyHitDetection_t511 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1019, /*hidden argument*/NULL);
		return;
	}
}
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRenderer.h"
#ifndef _MSC_VER
#else
#endif
// ConeOfViewRenderer
#include "AssemblyU2DCSharp_ConeOfViewRendererMethodDeclarations.h"

// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilter.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilterMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
struct GameObject_t352;
struct MeshRenderer_t815;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m4073_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m4073(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4073_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t815_m4388(__this, method) (( MeshRenderer_t815 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4073_gshared)(__this, method)
struct GameObject_t352;
struct MeshFilter_t816;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
#define GameObject_AddComponent_TisMeshFilter_t816_m4389(__this, method) (( MeshFilter_t816 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4073_gshared)(__this, method)
struct GameObject_t352;
struct MeshRenderer_t815;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t815_m4390(__this, method) (( MeshRenderer_t815 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m2813 (ConeOfViewRenderer_t514 * __this, const MethodInfo* method)
{
	{
		__this->___numTriangles_4 = ((int32_t)20);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::Start()
extern "C" void ConeOfViewRenderer_Start_m2814 (ConeOfViewRenderer_t514 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_EnsureInitialized_m2815(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::EnsureInitialized()
extern TypeInfo* Mesh_t512_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshRenderer_t815_m4388_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshFilter_t816_m4389_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t815_m4390_MethodInfo_var;
extern "C" void ConeOfViewRenderer_EnsureInitialized_m2815 (ConeOfViewRenderer_t514 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		GameObject_AddComponent_TisMeshRenderer_t815_m4388_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484131);
		GameObject_AddComponent_TisMeshFilter_t816_m4389_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484132);
		GameObject_GetComponent_TisMeshRenderer_t815_m4390_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484133);
		s_Il2CppMethodIntialized = true;
	}
	MeshRenderer_t815 * V_0 = {0};
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
		Mesh_t512 * L_1 = (Mesh_t512 *)il2cpp_codegen_object_new (Mesh_t512_il2cpp_TypeInfo_var);
		Mesh__ctor_m4391(L_1, /*hidden argument*/NULL);
		__this->___viewMesh_2 = L_1;
		GameObject_t352 * L_2 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_AddComponent_TisMeshRenderer_t815_m4388(L_2, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t815_m4388_MethodInfo_var);
		GameObject_t352 * L_3 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		MeshFilter_t816 * L_4 = GameObject_AddComponent_TisMeshFilter_t816_m4389(L_3, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t816_m4389_MethodInfo_var);
		Mesh_t512 * L_5 = (__this->___viewMesh_2);
		NullCheck(L_4);
		MeshFilter_set_mesh_m4392(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		MeshRenderer_t815 * L_7 = GameObject_GetComponent_TisMeshRenderer_t815_m4390(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t815_m4390_MethodInfo_var);
		V_0 = L_7;
		MeshRenderer_t815 * L_8 = V_0;
		Material_t513 * L_9 = (__this->___viewMaterial_3);
		NullCheck(L_8);
		Renderer_set_material_m4219(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::CreateMeshForAngleRange(System.Single,System.Single)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewRenderer_CreateMeshForAngleRange_m2816 (ConeOfViewRenderer_t514 * __this, float ___minAngle, float ___maxAngle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConeOfViewRenderer_EnsureInitialized_m2815(__this, /*hidden argument*/NULL);
		Mesh_t512 ** L_0 = &(__this->___viewMesh_2);
		float L_1 = ___minAngle;
		float L_2 = ___maxAngle;
		int32_t L_3 = (__this->___numTriangles_4);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		Utilities_MakeFanWithAngleRange_m3839(NULL /*static, unused*/, L_0, L_1, L_2, (4.6f), L_3, /*hidden argument*/NULL);
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
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
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
struct Component_t786;
struct SpriteRenderer_t594;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t786;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m4212_gshared (Component_t786 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m4212(__this, method) (( Object_t * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t594_m4393(__this, method) (( SpriteRenderer_t594 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void DeadMouse::.ctor()
extern "C" void DeadMouse__ctor_m2817 (DeadMouse_t515 * __this, const MethodInfo* method)
{
	{
		__this->___extraScale_3 = (0.32f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MouseType DeadMouse::get_mouseType()
extern "C" int32_t DeadMouse_get_mouseType_m2818 (DeadMouse_t515 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void DeadMouse::set_mouseType(MouseConfig/MouseType)
extern "C" void DeadMouse_set_mouseType_m2819 (DeadMouse_t515 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void DeadMouse::Start()
extern "C" void DeadMouse_Start_m2820 (DeadMouse_t515 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouse::Configure(MouseMove)
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t594_m4393_MethodInfo_var;
extern "C" void DeadMouse_Configure_m2821 (DeadMouse_t515 * __this, MouseMove_t517 * ___parentMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		Component_GetComponent_TisSpriteRenderer_t594_m4393_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	MouseTypeDesc_t655 * V_0 = {0};
	SpriteRenderer_t594 * V_1 = {0};
	Vector3_t523  V_2 = {0};
	{
		MouseMove_t517 * L_0 = ___parentMouse;
		NullCheck(L_0);
		int32_t L_1 = MouseMove_get_mouseType_m2937(L_0, /*hidden argument*/NULL);
		DeadMouse_set_mouseType_m2819(__this, L_1, /*hidden argument*/NULL);
		MouseConfig_t544 * L_2 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		MouseMove_t517 * L_3 = ___parentMouse;
		NullCheck(L_3);
		int32_t L_4 = MouseMove_get_mouseType_m2937(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MouseTypeDesc_t655 * L_5 = MouseConfig_GetMouseTypeDesc_m2925(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		SpriteRenderer_t594 * L_6 = Component_GetComponent_TisSpriteRenderer_t594_m4393(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t594_m4393_MethodInfo_var);
		V_1 = L_6;
		SpriteRenderer_t594 * L_7 = V_1;
		MouseTypeDesc_t655 * L_8 = V_0;
		NullCheck(L_8);
		Sprite_t521 * L_9 = (L_8->___deadMouseSprite_0);
		NullCheck(L_7);
		SpriteRenderer_set_sprite_m4394(L_7, L_9, /*hidden argument*/NULL);
		MouseMove_t517 * L_10 = ___parentMouse;
		NullCheck(L_10);
		GameObject_t352 * L_11 = Component_get_gameObject_m3972(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t406 * L_12 = GameObject_get_transform_m4255(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t523  L_13 = Transform_get_position_m4257(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (__this->___zIndex_2);
		(&V_2)->___z_3 = L_14;
		Transform_t406 * L_15 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Vector3_t523  L_16 = V_2;
		NullCheck(L_15);
		Transform_set_position_m4259(L_15, L_16, /*hidden argument*/NULL);
		Transform_t406 * L_17 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		MouseMove_t517 * L_18 = ___parentMouse;
		NullCheck(L_18);
		GameObject_t352 * L_19 = Component_get_gameObject_m3972(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_t406 * L_20 = GameObject_get_transform_m4255(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Quaternion_t813  L_21 = Transform_get_rotation_m4395(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_rotation_m4372(L_17, L_21, /*hidden argument*/NULL);
		Transform_t406 * L_22 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		MouseTypeDesc_t655 * L_23 = V_0;
		NullCheck(L_23);
		float L_24 = (L_23->___scale_5);
		float L_25 = (__this->___extraScale_3);
		MouseTypeDesc_t655 * L_26 = V_0;
		NullCheck(L_26);
		float L_27 = (L_26->___scale_5);
		float L_28 = (__this->___extraScale_3);
		Vector3_t523  L_29 = {0};
		Vector3__ctor_m4250(&L_29, ((float)((float)L_24*(float)L_25)), ((float)((float)L_27*(float)L_28)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m4261(L_22, L_29, /*hidden argument*/NULL);
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

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void DeadMouseRelay/MultiKillEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MultiKillEventHandler__ctor_m2822 (MultiKillEventHandler_t516 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DeadMouseRelay/MultiKillEventHandler::Invoke(System.Int32,UnityEngine.Vector3)
extern "C" void MultiKillEventHandler_Invoke_m2823 (MultiKillEventHandler_t516 * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MultiKillEventHandler_Invoke_m2823((MultiKillEventHandler_t516 *)__this->___prev_9,___numKilled, ___pawPosition, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___numKilled, ___pawPosition,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___numKilled, ___pawPosition,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MultiKillEventHandler_t516(Il2CppObject* delegate, int32_t ___numKilled, Vector3_t523  ___pawPosition)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t, Vector3_t523 );
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
extern TypeInfo* Vector3_t523_il2cpp_TypeInfo_var;
extern "C" Object_t * MultiKillEventHandler_BeginInvoke_m2824 (MultiKillEventHandler_t516 * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Vector3_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___numKilled);
	__d_args[1] = Box(Vector3_t523_il2cpp_TypeInfo_var, &___pawPosition);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DeadMouseRelay/MultiKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MultiKillEventHandler_EndInvoke_m2825 (MultiKillEventHandler_t516 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void MouseKillEventHandler__ctor_m2826 (MouseKillEventHandler_t518 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DeadMouseRelay/MouseKillEventHandler::Invoke(MouseMove)
extern "C" void MouseKillEventHandler_Invoke_m2827 (MouseKillEventHandler_t518 * __this, MouseMove_t517 * ___mouseMove, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MouseKillEventHandler_Invoke_m2827((MouseKillEventHandler_t518 *)__this->___prev_9,___mouseMove, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MouseMove_t517 * ___mouseMove, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MouseMove_t517 * ___mouseMove, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___mouseMove,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_MouseKillEventHandler_t518(Il2CppObject* delegate, MouseMove_t517 * ___mouseMove)
{
	// Marshaling of parameter '___mouseMove' to native representation
	MouseMove_t517 * ____mouseMove_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'MouseMove'."));
}
// System.IAsyncResult DeadMouseRelay/MouseKillEventHandler::BeginInvoke(MouseMove,System.AsyncCallback,System.Object)
extern "C" Object_t * MouseKillEventHandler_BeginInvoke_m2828 (MouseKillEventHandler_t518 * __this, MouseMove_t517 * ___mouseMove, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___mouseMove;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DeadMouseRelay/MouseKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseKillEventHandler_EndInvoke_m2829 (MouseKillEventHandler_t518 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void DeadMouseRelay__ctor_m2830 (DeadMouseRelay_t519 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadMouseRelay::add_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern TypeInfo* MultiKillEventHandler_t516_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_add_MultiKill_m2831 (DeadMouseRelay_t519 * __this, MultiKillEventHandler_t516 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MultiKillEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		s_Il2CppMethodIntialized = true;
	}
	{
		MultiKillEventHandler_t516 * L_0 = (__this->___MultiKill_3);
		MultiKillEventHandler_t516 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MultiKill_3 = ((MultiKillEventHandler_t516 *)Castclass(L_2, MultiKillEventHandler_t516_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::remove_MultiKill(DeadMouseRelay/MultiKillEventHandler)
extern TypeInfo* MultiKillEventHandler_t516_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_remove_MultiKill_m2832 (DeadMouseRelay_t519 * __this, MultiKillEventHandler_t516 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MultiKillEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		s_Il2CppMethodIntialized = true;
	}
	{
		MultiKillEventHandler_t516 * L_0 = (__this->___MultiKill_3);
		MultiKillEventHandler_t516 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MultiKill_3 = ((MultiKillEventHandler_t516 *)Castclass(L_2, MultiKillEventHandler_t516_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::add_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern TypeInfo* MouseKillEventHandler_t518_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_add_MouseKill_m2833 (DeadMouseRelay_t519 * __this, MouseKillEventHandler_t518 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseKillEventHandler_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseKillEventHandler_t518 * L_0 = (__this->___MouseKill_4);
		MouseKillEventHandler_t518 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseKill_4 = ((MouseKillEventHandler_t518 *)Castclass(L_2, MouseKillEventHandler_t518_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::remove_MouseKill(DeadMouseRelay/MouseKillEventHandler)
extern TypeInfo* MouseKillEventHandler_t518_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_remove_MouseKill_m2834 (DeadMouseRelay_t519 * __this, MouseKillEventHandler_t518 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseKillEventHandler_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseKillEventHandler_t518 * L_0 = (__this->___MouseKill_4);
		MouseKillEventHandler_t518 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseKill_4 = ((MouseKillEventHandler_t518 *)Castclass(L_2, MouseKillEventHandler_t518_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DeadMouseRelay::Awake()
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern "C" void DeadMouseRelay_Awake_m2835 (DeadMouseRelay_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void DeadMouseRelay::Start()
extern "C" void DeadMouseRelay_Start_m2836 (DeadMouseRelay_t519 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouseRelay::Update()
extern "C" void DeadMouseRelay_Update_m2837 (DeadMouseRelay_t519 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouseRelay::HandleMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void DeadMouseRelay_HandleMultiKill_m2838 (DeadMouseRelay_t519 * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, const MethodInfo* method)
{
	{
		MultiKillEventHandler_t516 * L_0 = (__this->___MultiKill_3);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		MultiKillEventHandler_t516 * L_1 = (__this->___MultiKill_3);
		int32_t L_2 = ___numKilled;
		Vector3_t523  L_3 = ___pawPosition;
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, Vector3_t523  >::Invoke(12 /* System.Void DeadMouseRelay/MultiKillEventHandler::Invoke(System.Int32,UnityEngine.Vector3) */, L_1, L_2, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void DeadMouseRelay::HandleMouseKill(MouseMove)
extern "C" void DeadMouseRelay_HandleMouseKill_m2839 (DeadMouseRelay_t519 * __this, MouseMove_t517 * ___mouseMove, const MethodInfo* method)
{
	{
		MouseKillEventHandler_t518 * L_0 = (__this->___MouseKill_4);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		MouseKillEventHandler_t518 * L_1 = (__this->___MouseKill_4);
		MouseMove_t517 * L_2 = ___mouseMove;
		NullCheck(L_1);
		VirtActionInvoker1< MouseMove_t517 * >::Invoke(12 /* System.Void DeadMouseRelay/MouseKillEventHandler::Invoke(MouseMove) */, L_1, L_2);
	}

IL_0017:
	{
		MouseMove_t517 * L_3 = ___mouseMove;
		NullCheck(L_3);
		MouseMove_OnKilled_m2961(L_3, /*hidden argument*/NULL);
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
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegateMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m2840 (FacebookSharing_t520 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::Awake()
extern TypeInfo* FacebookSharing_t520_il2cpp_TypeInfo_var;
extern TypeInfo* InitDelegate_t419_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnInitComplete_m2842_MethodInfo_var;
extern "C" void FacebookSharing_Awake_m2841 (FacebookSharing_t520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t520_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		InitDelegate_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookSharing_OnInitComplete_m2842_MethodInfo_var = il2cpp_codegen_method_info_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	{
		((FacebookSharing_t520_StaticFields*)FacebookSharing_t520_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		IntPtr_t L_0 = { (void*)FacebookSharing_OnInitComplete_m2842_MethodInfo_var };
		InitDelegate_t419 * L_1 = (InitDelegate_t419 *)il2cpp_codegen_object_new (InitDelegate_t419_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m3863(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Init_m2260(NULL /*static, unused*/, L_1, (HideUnityDelegate_t420 *)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnInitComplete()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnInitComplete_m2842 (FacebookSharing_t520 * __this, const MethodInfo* method)
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
		bool L_0 = FB_get_IsLoggedIn_m2258(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void FacebookSharing_OnHideUnity_m2843 (FacebookSharing_t520 * __this, bool ___isGameShown, const MethodInfo* method)
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
extern "C" void FacebookSharing_ShareScore_m2844 (FacebookSharing_t520 * __this, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
{
	{
		int32_t L_0 = ___score;
		FacebookSharing_ShareScoreThroughLibraries_m2845(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_LoginCallback_m2847_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2845 (FacebookSharing_t520 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FacebookSharing_LoginCallback_m2847_MethodInfo_var = il2cpp_codegen_method_info_from_index(488);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1020, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m2258(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = ___score;
		__this->___scoreToShare_6 = L_1;
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1021, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FacebookSharing_LoginCallback_m2847_MethodInfo_var };
		FacebookDelegate_t433 * L_3 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3867(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Login_m2263(NULL /*static, unused*/, (String_t*) &_stringLiteral148, L_3, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0040:
	{
		int32_t L_4 = ___score;
		FacebookSharing_ShareScoreInternal_m2848(__this, L_4, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2846 (FacebookSharing_t520 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
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
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1022);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1022;
		StringU5BU5D_t75* L_1 = L_0;
		String_t* L_2 = WWW_EscapeURL_m4396(NULL /*static, unused*/, (String_t*) &_stringLiteral1023, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t75* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1024);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral1024;
		StringU5BU5D_t75* L_4 = L_3;
		String_t* L_5 = WWW_EscapeURL_m4396(NULL /*static, unused*/, (String_t*) &_stringLiteral1025, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1026);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 4)) = (String_t*)(String_t*) &_stringLiteral1026;
		StringU5BU5D_t75* L_7 = L_6;
		int32_t L_8 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		String_t* L_9 = Utilities_GetShareTitleForScore_m3828(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		String_t* L_10 = WWW_EscapeURL_m4396(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 5)) = (String_t*)L_10;
		StringU5BU5D_t75* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral1027);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 6)) = (String_t*)(String_t*) &_stringLiteral1027;
		StringU5BU5D_t75* L_12 = L_11;
		int32_t L_13 = ___score;
		String_t* L_14 = Utilities_GetShareMessageForScore_m3829(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = WWW_EscapeURL_m4396(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 7)) = (String_t*)L_15;
		StringU5BU5D_t75* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral1028);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 8)) = (String_t*)(String_t*) &_stringLiteral1028;
		StringU5BU5D_t75* L_17 = L_16;
		String_t* L_18 = WWW_EscapeURL_m4396(NULL /*static, unused*/, (String_t*) &_stringLiteral1029, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, ((int32_t)9))) = (String_t*)L_18;
		StringU5BU5D_t75* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)10));
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral1030);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral1030;
		StringU5BU5D_t75* L_20 = L_19;
		String_t* L_21 = WWW_EscapeURL_m4396(NULL /*static, unused*/, (String_t*) &_stringLiteral1031, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)11));
		ArrayElementTypeCheck (L_20, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, ((int32_t)11))) = (String_t*)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m450(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23 = V_0;
		String_t* L_24 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1032, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = ___score;
		String_t* L_26 = Utilities_GetShareMessageForScore_m3829(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		String_t* L_27 = WWW_EscapeURL_m4396(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		String_t* L_28 = WWW_EscapeURL_m4396(NULL /*static, unused*/, (String_t*) &_stringLiteral1029, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral1033, L_27, (String_t*) &_stringLiteral1028, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		String_t* L_30 = V_0;
		String_t* L_31 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1034, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_1;
		String_t* L_33 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1035, L_32, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		String_t* L_34 = V_2;
		String_t* L_35 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1036, L_34, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		String_t* L_36 = V_2;
		String_t* L_37 = V_1;
		Object_t * L_38 = Utilities_LaunchAppOrWeb_m3833(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3935(__this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::LoginCallback(FBResult)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_LoginCallback_m2847 (FacebookSharing_t520 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1037, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m2258(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = (__this->___scoreToShare_6);
		FacebookSharing_ShareScoreInternal_m2848(__this, L_1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnFeedFinished_m2849_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreInternal_m2848 (FacebookSharing_t520 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FacebookSharing_OnFeedFinished_m2849_MethodInfo_var = il2cpp_codegen_method_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1038, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareTitleForScore_m3828(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___score;
		String_t* L_3 = Utilities_GetShareMessageForScore_m3829(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1039, L_4, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1040, L_6, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1041, /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		IntPtr_t L_10 = { (void*)FacebookSharing_OnFeedFinished_m2849_MethodInfo_var };
		FacebookDelegate_t433 * L_11 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3867(L_11, __this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Feed_m2268(NULL /*static, unused*/, (String_t*)NULL, (String_t*) &_stringLiteral1023, (String_t*) &_stringLiteral1025, L_8, L_9, (String_t*) &_stringLiteral1029, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (Dictionary_2_t116 *)NULL, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2849 (FacebookSharing_t520 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1042, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1043, /*hidden argument*/NULL);
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

// TimeController
#include "AssemblyU2DCSharp_TimeController.h"
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeState.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// TimeController
#include "AssemblyU2DCSharp_TimeControllerMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"


// System.Void FartPuff::.ctor()
extern "C" void FartPuff__ctor_m2850 (FartPuff_t522 * __this, const MethodInfo* method)
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
extern "C" void FartPuff_Awake_m2851 (FartPuff_t522 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___initialScale_10);
		__this->___scale_9 = L_0;
		float L_1 = Random_Range_m4397(NULL /*static, unused*/, (0.0f), (360.0f), /*hidden argument*/NULL);
		__this->___rotationDeg_8 = L_1;
		float L_2 = (__this->___minRotateDegVeclocity_6);
		float L_3 = (__this->___maxRotateDegVeclocity_5);
		float L_4 = Random_Range_m4397(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___rotateDegVelocity_7 = L_4;
		int32_t L_5 = Random_Range_m3981(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
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
extern "C" void FartPuff_Start_m2852 (FartPuff_t522 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FartPuff::Update()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern "C" void FartPuff_Update_m2853 (FartPuff_t522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t523  V_1 = {0};
	{
		TimeController_t650 * L_0 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = TimeController_get_timeState_m3531(L_0, /*hidden argument*/NULL);
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
		float L_2 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = (__this->___velocity_3);
		Vector3_t523  L_5 = (__this->___direction_2);
		Vector3_t523  L_6 = Vector3_op_Multiply_m4399(NULL /*static, unused*/, ((float)((float)L_3*(float)L_4)), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t406 * L_7 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Transform_t406 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t523  L_9 = Transform_get_localPosition_m4400(L_8, /*hidden argument*/NULL);
		Vector3_t523  L_10 = V_1;
		Vector3_t523  L_11 = Vector3_op_Addition_m4401(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localPosition_m4402(L_8, L_11, /*hidden argument*/NULL);
		float L_12 = (__this->___scale_9);
		float L_13 = V_0;
		float L_14 = (__this->___scaleVelocity_4);
		__this->___scale_9 = ((float)((float)L_12+(float)((float)((float)L_13*(float)L_14))));
		Transform_t406 * L_15 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_16 = (__this->___scale_9);
		float L_17 = (__this->___scale_9);
		Vector3_t523  L_18 = {0};
		Vector3__ctor_m4250(&L_18, L_16, L_17, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m4261(L_15, L_18, /*hidden argument*/NULL);
		float L_19 = (__this->___rotationDeg_8);
		float L_20 = V_0;
		float L_21 = (__this->___rotateDegVelocity_7);
		__this->___rotationDeg_8 = ((float)((float)L_19+(float)((float)((float)L_20*(float)L_21))));
		Transform_t406 * L_22 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_23 = (__this->___rotationDeg_8);
		Quaternion_t813  L_24 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m4372(L_22, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FartPuff::SetDirection(UnityEngine.Vector3)
extern "C" void FartPuff_SetDirection_m2854 (FartPuff_t522 * __this, Vector3_t523  ___direction, const MethodInfo* method)
{
	{
		Vector3_t523  L_0 = ___direction;
		__this->___direction_2 = L_0;
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
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// GameUI
#include "AssemblyU2DCSharp_GameUIMethodDeclarations.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"


// System.Void FinalScoreUI::.ctor()
extern "C" void FinalScoreUI__ctor_m2855 (FinalScoreUI_t524 * __this, const MethodInfo* method)
{
	{
		Color_t325  L_0 = {0};
		Color__ctor_m4404(&L_0, (0.0f), (0.75f), (0.875f), /*hidden argument*/NULL);
		__this->___labelColor_5 = L_0;
		GameUI__ctor_m2873(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::Awake()
extern "C" void FinalScoreUI_Awake_m2856 (FinalScoreUI_t524 * __this, const MethodInfo* method)
{
	{
		__this->___started_6 = 0;
		Text_t498 * L_0 = (__this->___finalScoreLabel_4);
		Color_t325  L_1 = (__this->___labelColor_5);
		NullCheck(L_0);
		Graphic_set_color_m4379(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::Start()
extern "C" void FinalScoreUI_Start_m2857 (FinalScoreUI_t524 * __this, const MethodInfo* method)
{
	{
		__this->___started_6 = 1;
		FinalScoreUI_UpdateView_m2859(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::OnEnable()
extern "C" void FinalScoreUI_OnEnable_m2858 (FinalScoreUI_t524 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___started_6);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		FinalScoreUI_UpdateView_m2859(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void FinalScoreUI::UpdateView()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void FinalScoreUI_UpdateView_m2859 (FinalScoreUI_t524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
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
		PlayerStats_t509 * L_2 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_GetHighScore_m3720(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayerStats_t509 * L_4 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = PlayerStats_get_gameScore_m3699(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0039;
		}
	}
	{
		PlayerStats_t509 * L_8 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		PlayerStats_SetHighScore_m3721(L_8, L_9, /*hidden argument*/NULL);
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
		Text_t498 * L_11 = (__this->___personalBestText_2);
		NullCheck(L_11);
		GameObject_t352 * L_12 = Component_get_gameObject_m3972(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m4172(L_12, 0, /*hidden argument*/NULL);
		goto IL_009f;
	}

IL_0055:
	{
		Text_t498 * L_13 = (__this->___personalBestText_2);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3972(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m4172(L_14, 1, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_008d;
		}
	}
	{
		Text_t498 * L_17 = (__this->___personalBestText_2);
		Color_t325  L_18 = (__this->___labelColor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		String_t* L_19 = Utilities_AddTextColor_m3840(NULL /*static, unused*/, (String_t*) &_stringLiteral1044, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		goto IL_009f;
	}

IL_008d:
	{
		Text_t498 * L_20 = (__this->___personalBestText_2);
		int32_t L_21 = V_0;
		String_t* L_22 = FinalScoreUI_MakeBestScoreText_m2860(__this, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
	}

IL_009f:
	{
		Text_t498 * L_23 = (__this->___finalScoreText_3);
		int32_t L_24 = V_1;
		String_t* L_25 = FinalScoreUI_MakeFinalScoreText_m2861(__this, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
		return;
	}
}
// System.String FinalScoreUI::MakeBestScoreText(System.Int32)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FinalScoreUI_MakeBestScoreText_m2860 (FinalScoreUI_t524 * __this, int32_t ___personalBest, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1045;
		String_t* L_0 = V_0;
		Color_t325  L_1 = (__this->___labelColor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		String_t* L_2 = Utilities_AddTextColor_m3840(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		int32_t L_4 = ___personalBest;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m4089(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral944, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String FinalScoreUI::MakeFinalScoreText(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* FinalScoreUI_MakeFinalScoreText_m2861 (FinalScoreUI_t524 * __this, int32_t ___finalScore, const MethodInfo* method)
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
// GameCenterButtons
#include "AssemblyU2DCSharp_GameCenterButtons.h"
#ifndef _MSC_VER
#else
#endif
// GameCenterButtons
#include "AssemblyU2DCSharp_GameCenterButtonsMethodDeclarations.h"

// SocialHelper
#include "AssemblyU2DCSharp_SocialHelper.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelper.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"
// RatingsHelper
#include "AssemblyU2DCSharp_RatingsHelperMethodDeclarations.h"


// System.Void GameCenterButtons::.ctor()
extern "C" void GameCenterButtons__ctor_m2862 (GameCenterButtons_t527 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::Awake()
extern "C" void GameCenterButtons_Awake_m2863 (GameCenterButtons_t527 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1046, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::Start()
extern "C" void GameCenterButtons_Start_m2864 (GameCenterButtons_t527 * __this, const MethodInfo* method)
{
	{
		GameCenterButtons_UpdateButtonAvailability_m2865(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::UpdateButtonAvailability()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_UpdateButtonAvailability_m2865 (GameCenterButtons_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t592 * L_0 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		bool L_1 = SocialHelper_IsEnabled_m3193(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		DebugConfig_t658 * L_2 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = DebugConfig_IsDebugFlagSet_m3594(L_2, 1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}

IL_001f:
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4172(L_4, 1, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0030:
	{
		GameObject_t352 * L_5 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m4172(L_5, 0, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void GameCenterButtons::ShowLeaderboard()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_ShowLeaderboard_m2866 (GameCenterButtons_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t592 * L_0 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowLeaderBoard_m3194(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::ShowRateMe()
extern TypeInfo* RatingsHelper_t566_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_ShowRateMe_m2867 (GameCenterButtons_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t566 * L_0 = ((RatingsHelper_t566_StaticFields*)RatingsHelper_t566_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m3059(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::ShowAchievements()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_ShowAchievements_m2868 (GameCenterButtons_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t592 * L_0 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowAchievements_m3195(L_0, /*hidden argument*/NULL);
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

// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandle.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandleMethodDeclarations.h"
struct GameObject_t352;
struct Text_t498;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t498_m4405(__this, method) (( Text_t498 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void GameLevelDisplay::.ctor()
extern "C" void GameLevelDisplay__ctor_m2869 (GameLevelDisplay_t528 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelDisplay::Start()
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t498_m4405_MethodInfo_var;
extern const MethodInfo* GameLevelDisplay_SetGameLevelText_m2872_MethodInfo_var;
extern "C" void GameLevelDisplay_Start_m2870 (GameLevelDisplay_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		GameObject_GetComponent_TisText_t498_m4405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484138);
		GameLevelDisplay_SetGameLevelText_m2872_MethodInfo_var = il2cpp_codegen_method_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t498 * L_1 = GameObject_GetComponent_TisText_t498_m4405(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t498_m4405_MethodInfo_var);
		__this->___levelText_2 = L_1;
		GameLevelState_t660 * L_2 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)GameLevelDisplay_SetGameLevelText_m2872_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_4 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameLevelState_add_GameLevelChanged_m3602(L_2, L_4, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		GameLevelDisplay_SetGameLevelText_m2872(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelDisplay::OnDestroy()
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* GameLevelDisplay_SetGameLevelText_m2872_MethodInfo_var;
extern "C" void GameLevelDisplay_OnDestroy_m2871 (GameLevelDisplay_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		GameLevelDisplay_SetGameLevelText_m2872_MethodInfo_var = il2cpp_codegen_method_info_from_index(491);
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
		GameLevelState_t660 * L_1 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameLevelDisplay_SetGameLevelText_m2872_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_3 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m3603(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameLevelDisplay::SetGameLevelText()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameLevelDisplay_SetGameLevelText_m2872 (GameLevelDisplay_t528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t498 * L_0 = (__this->___levelText_2);
		GameLevelState_t660 * L_1 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m3604(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral998, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// GameUI
#include "AssemblyU2DCSharp_GameUI.h"
#ifndef _MSC_VER
#else
#endif



// System.Void GameUI::.ctor()
extern "C" void GameUI__ctor_m2873 (GameUI_t525 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::SetUIActive(System.Boolean)
extern "C" void GameUI_SetUIActive_m2874 (GameUI_t525 * __this, bool ___uiActive, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		bool L_1 = ___uiActive;
		NullCheck(L_0);
		GameObject_SetActive_m4172(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::ConfirmLayoutComplete()
extern "C" void GameUI_ConfirmLayoutComplete_m2875 (GameUI_t525 * __this, const MethodInfo* method)
{
	{
		return;
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

// ConeOfViewController
#include "AssemblyU2DCSharp_ConeOfViewController.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// ConeOfViewController
#include "AssemblyU2DCSharp_ConeOfViewControllerMethodDeclarations.h"


// System.Void HeadMovement::.ctor()
extern "C" void HeadMovement__ctor_m2876 (HeadMovement_t530 * __this, const MethodInfo* method)
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
extern "C" void HeadMovement_Start_m2877 (HeadMovement_t530 * __this, const MethodInfo* method)
{
	{
		__this->___phase_8 = 0;
		__this->___currentDeg_7 = (0.0f);
		return;
	}
}
// System.Void HeadMovement::Update()
extern "C" void HeadMovement_Update_m2878 (HeadMovement_t530 * __this, const MethodInfo* method)
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
		bool L_4 = HeadMovement_MoveTowards_m2879(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		__this->___phase_8 = 2;
		float L_5 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_9 = L_5;
	}

IL_0049:
	{
		goto IL_0093;
	}

IL_004e:
	{
		float L_6 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		bool L_10 = HeadMovement_MoveTowards_m2879(__this, (0.0f), L_9, /*hidden argument*/NULL);
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
extern "C" bool HeadMovement_MoveTowards_m2879 (HeadMovement_t530 * __this, float ___targetDeg, float ___speedDeg, const MethodInfo* method)
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
		float L_5 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		float L_11 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Transform_t406 * L_16 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_17 = (__this->___currentDeg_7);
		Quaternion_t813  L_18 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localRotation_m4406(L_16, L_18, /*hidden argument*/NULL);
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void HeadMovement::LookTowards(UnityEngine.Vector3)
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern TypeInfo* ConeOfViewController_t609_il2cpp_TypeInfo_var;
extern "C" void HeadMovement_LookTowards_m2880 (HeadMovement_t530 * __this, Vector3_t523  ___location, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		ConeOfViewController_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ((&___location)->___y_2);
		float L_1 = ((&___location)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_2 = atan2f(L_0, L_1);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = ((float)((float)L_3*(float)(57.29578f)));
		ConeOfViewController_t609 * L_4 = ((ConeOfViewController_t609_StaticFields*)ConeOfViewController_t609_il2cpp_TypeInfo_var->static_fields)->___instance_6;
		NullCheck(L_4);
		float L_5 = ConeOfViewController_get_actualAngleRange_m3264(L_4, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_5/(float)(2.0f)));
		float L_6 = V_1;
		float L_7 = V_2;
		float L_8 = V_2;
		float L_9 = Mathf_Clamp_m4407(NULL /*static, unused*/, L_6, ((-L_7)), L_8, /*hidden argument*/NULL);
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
extern "C" void IOSSharing__ctor_m2881 (IOSSharing_t531 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSSharing::Start()
extern "C" void IOSSharing_Start_m2882 (IOSSharing_t531 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IOSSharing::Update()
extern "C" void IOSSharing_Update_m2883 (IOSSharing_t531 * __this, const MethodInfo* method)
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
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// Layers
#include "AssemblyU2DCSharp_LayersMethodDeclarations.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct GameObject_t352;
struct Camera_t532;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t532_m4408(__this, method) (( Camera_t532 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void InputHandler::.ctor()
extern "C" void InputHandler__ctor_m2884 (InputHandler_t533 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m2885 (InputHandler_t533 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisTouchDeviceU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m2886 (InputHandler_t533 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisTouchDeviceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// InputHandler InputHandler::get_instance()
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern "C" InputHandler_t533 * InputHandler_get_instance_m2887 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t533 * L_0 = ((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void InputHandler::set_instance(InputHandler)
extern TypeInfo* InputHandler_t533_il2cpp_TypeInfo_var;
extern "C" void InputHandler_set_instance_m2888 (Object_t * __this /* static, unused */, InputHandler_t533 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputHandler_t533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputHandler_t533 * L_0 = ___value;
		((InputHandler_t533_StaticFields*)InputHandler_t533_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void InputHandler::Awake()
extern "C" void InputHandler_Awake_m2889 (InputHandler_t533 * __this, const MethodInfo* method)
{
	{
		InputHandler_set_instance_m2888(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		InputHandler_set_isTouchDevice_m2886(__this, 1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		InputHandler_set_isTouchDevice_m2886(__this, 0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m2890 (InputHandler_t533 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void InputHandler::Update()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern "C" void InputHandler_Update_m2891 (InputHandler_t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t523  V_0 = {0};
	Collider2D_t724 * V_1 = {0};
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3645(L_0, /*hidden argument*/NULL);
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
		TimeController_t650 * L_2 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		int32_t L_3 = TimeController_get_timeState_m3531(L_2, /*hidden argument*/NULL);
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
		Vector3__ctor_m4250((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Collider2D_t724 * L_4 = InputHandler_CheckForWorldClickStart_m2892(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		Collider2D_t724 * L_5 = V_1;
		bool L_6 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_5, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		Collider2D_t724 * L_7 = V_1;
		Vector3_t523  L_8 = V_0;
		InputHandler_HandleClickStart_m2893(__this, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern TypeInfo* Physics2D_t817_il2cpp_TypeInfo_var;
extern "C" Collider2D_t724 * InputHandler_CheckForWorldClickStart_m2892 (InputHandler_t533 * __this, Vector3_t523 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t523  V_0 = {0};
	bool V_1 = false;
	Vector3_t523  V_2 = {0};
	Collider2D_t724 * V_3 = {0};
	{
		bool L_0 = InputHandler_GetWorldClickStarted_m2895(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (Collider2D_t724 *)NULL;
	}

IL_0011:
	{
		Camera_t532 * L_2 = (__this->___uxCamera_3);
		Vector3_t523  L_3 = V_0;
		NullCheck(L_2);
		Vector3_t523  L_4 = Camera_ScreenToWorldPoint_m4258(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t523  L_5 = V_2;
		Vector2_t110  L_6 = Vector2_op_Implicit_m4409(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_7 = Layers_UserInteractionsLayerBitmask_m2899(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t817_il2cpp_TypeInfo_var);
		Collider2D_t724 * L_8 = Physics2D_OverlapPoint_m4410(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		bool L_9 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		return (Collider2D_t724 *)NULL;
	}

IL_003a:
	{
		Vector3_t523 * L_10 = ___worldPoint;
		Camera_t532 * L_11 = (__this->___worldCamera_2);
		Vector3_t523  L_12 = V_0;
		NullCheck(L_11);
		Vector3_t523  L_13 = Camera_ScreenToWorldPoint_m4258(L_11, L_12, /*hidden argument*/NULL);
		*L_10 = L_13;
		Vector3_t523 * L_14 = ___worldPoint;
		Vector2_t110  L_15 = Vector2_op_Implicit_m4409(NULL /*static, unused*/, (*(Vector3_t523 *)L_14), /*hidden argument*/NULL);
		int32_t L_16 = Layers_UserInteractionsLayerBitmask_m2899(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t817_il2cpp_TypeInfo_var);
		Collider2D_t724 * L_17 = Physics2D_OverlapPoint_m4410(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Collider2D_t724 * L_18 = V_3;
		bool L_19 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		Collider2D_t724 * L_20 = V_3;
		return L_20;
	}

IL_006f:
	{
		return (Collider2D_t724 *)NULL;
	}
}
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void InputHandler_HandleClickStart_m2893 (InputHandler_t533 * __this, Collider2D_t724 * ___collider, Vector3_t523  ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	{
		Vector3_t523  L_0 = ___worldPoint;
		Vector2_t110  L_1 = Vector2_op_Implicit_m4409(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Collider2D_t724 * L_2 = ___collider;
		NullCheck(L_2);
		String_t* L_3 = Component_get_tag_m4411(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral1047, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PlayerController_t637 * L_5 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_6 = V_0;
		NullCheck(L_5);
		PlayerController_HandleDragClickStart_m3453(L_5, L_6, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_002c:
	{
		Collider2D_t724 * L_7 = ___collider;
		NullCheck(L_7);
		String_t* L_8 = Component_get_tag_m4411(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m456(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral1048, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		PlayerController_t637 * L_10 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110  L_11 = V_0;
		NullCheck(L_10);
		PlayerController_HandleSlapClickStart_m3454(L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern const MethodInfo* GameObject_GetComponent_TisCamera_t532_m4408_MethodInfo_var;
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m2894 (InputHandler_t533 * __this, Vector3_t523  ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCamera_t532_m4408_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484140);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Rect_t719  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Camera_t532 * L_0 = (__this->___worldCamera_2);
		bool L_1 = Object_op_Equality_m3997(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Camera_t532 * L_2 = Camera_get_main_m4223(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___worldCamera_2 = L_2;
		GameObject_t352 * L_3 = GameObject_FindGameObjectWithTag_m4412(NULL /*static, unused*/, (String_t*) &_stringLiteral1049, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		Camera_t532 * L_5 = GameObject_GetComponent_TisCamera_t532_m4408(L_4, /*hidden argument*/GameObject_GetComponent_TisCamera_t532_m4408_MethodInfo_var);
		__this->___uxCamera_3 = L_5;
	}

IL_0033:
	{
		Camera_t532 * L_6 = (__this->___worldCamera_2);
		NullCheck(L_6);
		Rect_t719  L_7 = Camera_get_rect_m4413(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_x_m3898((&V_1), /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_width_m3877(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_8*(float)(((float)L_9))));
		float L_10 = Rect_get_x_m3898((&V_1), /*hidden argument*/NULL);
		float L_11 = Rect_get_width_m4253((&V_1), /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_width_m3877(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)((float)L_10+(float)L_11))*(float)(((float)L_12))));
		float L_13 = Rect_get_y_m3897((&V_1), /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_13*(float)(((float)L_14))));
		float L_15 = Rect_get_y_m3897((&V_1), /*hidden argument*/NULL);
		float L_16 = Rect_get_height_m4254((&V_1), /*hidden argument*/NULL);
		int32_t L_17 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern TypeInfo* Input_t732_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickStarted_m2895 (InputHandler_t533 * __this, Vector3_t523 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t731  V_1 = {0};
	Touch_t731  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m2885(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3905(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		Touch_t731  L_2 = Input_GetTouch_m3906(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3907((&V_1), /*hidden argument*/NULL);
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
		Vector3_t523 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		Touch_t731  L_6 = Input_GetTouch_m3906(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m4414((&V_2), /*hidden argument*/NULL);
		Vector3_t523  L_8 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t523 * L_9 = ___clickPosition;
		Vector3_t523  L_10 = Vector3_get_forward_m4416(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonDown_m4226(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t523 * L_12 = ___clickPosition;
		Vector3_t523  L_13 = Input_get_mousePosition_m4224(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Vector3_t523 * L_15 = ___clickPosition;
		bool L_16 = InputHandler_IsPointInWorldCameraScreenSpace_m2894(__this, (*(Vector3_t523 *)L_15), /*hidden argument*/NULL);
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
extern TypeInfo* Input_t732_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickEnded_m2896 (InputHandler_t533 * __this, Vector3_t523 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t731  V_1 = {0};
	Touch_t731  V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		bool L_0 = InputHandler_get_isTouchDevice_m2885(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3905(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		Touch_t731  L_2 = Input_GetTouch_m3906(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Touch_get_phase_m3907((&V_1), /*hidden argument*/NULL);
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
		Vector3_t523 * L_5 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		Touch_t731  L_6 = Input_GetTouch_m3906(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_t110  L_7 = Touch_get_position_m4414((&V_2), /*hidden argument*/NULL);
		Vector3_t523  L_8 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*L_5 = L_8;
		goto IL_005a;
	}

IL_004f:
	{
		Vector3_t523 * L_9 = ___clickPosition;
		Vector3_t523  L_10 = Vector3_get_forward_m4416(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_9 = L_10;
	}

IL_005a:
	{
		goto IL_0071;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonUp_m4417(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		Vector3_t523 * L_12 = ___clickPosition;
		Vector3_t523  L_13 = Input_get_mousePosition_m4224(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_12 = L_13;
	}

IL_0071:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern TypeInfo* Input_t732_il2cpp_TypeInfo_var;
extern "C" bool InputHandler_GetWorldClickPosition_m2897 (InputHandler_t533 * __this, Vector3_t523 * ___clickPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Touch_t731  V_1 = {0};
	{
		bool L_0 = InputHandler_get_isTouchDevice_m2885(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3905(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Vector3_t523 * L_3 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		Touch_t731  L_4 = Input_GetTouch_m3906(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector2_t110  L_5 = Touch_get_position_m4414((&V_1), /*hidden argument*/NULL);
		Vector3_t523  L_6 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*L_3 = L_6;
		goto IL_0043;
	}

IL_0038:
	{
		Vector3_t523 * L_7 = ___clickPosition;
		Vector3_t523  L_8 = Vector3_get_forward_m4416(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_7 = L_8;
	}

IL_0043:
	{
		goto IL_0070;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButton_m4418(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		Vector3_t523 * L_11 = ___clickPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t732_il2cpp_TypeInfo_var);
		Vector3_t523  L_12 = Input_get_mousePosition_m4224(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_11 = L_12;
		goto IL_0070;
	}

IL_0065:
	{
		Vector3_t523 * L_13 = ___clickPosition;
		Vector3_t523  L_14 = Vector3_get_forward_m4416(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_13 = L_14;
	}

IL_0070:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// Layers
#include "AssemblyU2DCSharp_Layers.h"
#ifndef _MSC_VER
#else
#endif



// System.Void Layers::.ctor()
extern "C" void Layers__ctor_m2898 (Layers_t534 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Layers::UserInteractionsLayerBitmask()
extern "C" int32_t Layers_UserInteractionsLayerBitmask_m2899 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return ((int32_t)8736);
	}
}
// System.Void Layers::Awake()
extern TypeInfo* Physics2D_t817_il2cpp_TypeInfo_var;
extern "C" void Layers_Awake_m2900 (Layers_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t817_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, 8, ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)13), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)14), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)15), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)15), ((int32_t)9), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)13), ((int32_t)14), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)13), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)13), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)14), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)14), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)14), ((int32_t)14), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
		Physics2D_IgnoreLayerCollision_m4419(NULL /*static, unused*/, ((int32_t)15), ((int32_t)15), 1, /*hidden argument*/NULL);
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

// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_20.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"


// System.Void LevelEndTitlesLayout::.ctor()
extern "C" void LevelEndTitlesLayout__ctor_m2901 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::Awake()
extern "C" void LevelEndTitlesLayout_Awake_m2902 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_6 = 0;
		__this->___waveDirty_8 = 0;
		return;
	}
}
// System.Void LevelEndTitlesLayout::Start()
extern "C" void LevelEndTitlesLayout_Start_m2903 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_RegisterForEvents_m2906(__this, /*hidden argument*/NULL);
		__this->___started_9 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnEnable()
extern "C" void LevelEndTitlesLayout_OnEnable_m2904 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	{
		__this->___waveDirty_8 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnDestroy()
extern "C" void LevelEndTitlesLayout_OnDestroy_m2905 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	{
		LevelEndTitlesLayout_UnregisterForEvents_m2907(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelEndTitlesLayout::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m2910_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_RegisterForEvents_m2906 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		LevelEndTitlesLayout_OnGameLevelChanged_m2910_MethodInfo_var = il2cpp_codegen_method_info_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t660 * L_0 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m2910_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_2 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_add_GameLevelChanged_m3602(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_6 = 1;
		return;
	}
}
// System.Void LevelEndTitlesLayout::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* LevelEndTitlesLayout_OnGameLevelChanged_m2910_MethodInfo_var;
extern "C" void LevelEndTitlesLayout_UnregisterForEvents_m2907 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		LevelEndTitlesLayout_OnGameLevelChanged_m2910_MethodInfo_var = il2cpp_codegen_method_info_from_index(493);
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
		GameLevelState_t660 * L_1 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)LevelEndTitlesLayout_OnGameLevelChanged_m2910_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_3 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m3603(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::Update()
extern "C" void LevelEndTitlesLayout_Update_m2908 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___waveDirty_8);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		LevelEndTitlesLayout_SetWaveViews_m2909(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::SetWaveViews()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LevelEndTitlesLayout_SetWaveViews_m2909 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t673 * V_0 = {0};
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
		Text_t498 * L_1 = (__this->___waveTitleText_2);
		GameLevelState_t660 * L_2 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m3604(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral998, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_6);
		LevelConfig_t678 * L_7 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		LevelDescription_t673 * L_8 = LevelConfig_GetCurrentLevelDescription_m3664(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Text_t498 * L_9 = (__this->___waveCountText_3);
		LevelDescription_t673 * L_10 = V_0;
		NullCheck(L_10);
		List_1_t550 * L_11 = (L_10->___explicitMouseDescs_1);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_11);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m409(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral1050, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_15);
		Text_t498 * L_16 = (__this->___waveSpecialText_4);
		LevelDescription_t673 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (L_17->___specialText_0);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		LevelDescription_t673 * L_19 = V_0;
		NullCheck(L_19);
		Sprite_t521 * L_20 = (L_19->___sprite_2);
		bool L_21 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_20, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		Image_t499 * L_22 = (__this->___waveSpecialImage_5);
		NullCheck(L_22);
		GameObject_t352 * L_23 = Component_get_gameObject_m3972(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m4172(L_23, 1, /*hidden argument*/NULL);
		Image_t499 * L_24 = (__this->___waveSpecialImage_5);
		LevelDescription_t673 * L_25 = V_0;
		NullCheck(L_25);
		Sprite_t521 * L_26 = (L_25->___sprite_2);
		NullCheck(L_24);
		Image_set_sprite_m4377(L_24, L_26, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00b0:
	{
		Image_t499 * L_27 = (__this->___waveSpecialImage_5);
		NullCheck(L_27);
		GameObject_t352 * L_28 = Component_get_gameObject_m3972(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_SetActive_m4172(L_28, 0, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void LevelEndTitlesLayout::OnGameLevelChanged()
extern "C" void LevelEndTitlesLayout_OnGameLevelChanged_m2910 (LevelEndTitlesLayout_t536 * __this, const MethodInfo* method)
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

// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandler.h"
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandlerMethodDeclarations.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct Component_t786;
struct DistortForEffect_t535;
// Declaration !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
// !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
#define Component_GetComponent_TisDistortForEffect_t535_m4374(__this, method) (( DistortForEffect_t535 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void MoneyDisplay::.ctor()
extern "C" void MoneyDisplay__ctor_m2911 (MoneyDisplay_t537 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyDisplay::Awake()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var;
extern "C" void MoneyDisplay_Awake_m2912 (MoneyDisplay_t537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	{
		DistortForEffect_t535 * L_0 = Component_GetComponent_TisDistortForEffect_t535_m4374(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var);
		__this->___distortForEffect_5 = L_0;
		return;
	}
}
// System.Void MoneyDisplay::Start()
extern TypeInfo* MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyDisplay_DynamicUpdateTreatsText_m2916_MethodInfo_var;
extern "C" void MoneyDisplay_Start_m2913 (MoneyDisplay_t537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		MoneyDisplay_DynamicUpdateTreatsText_m2916_MethodInfo_var = il2cpp_codegen_method_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_0;
		PlayerStats_t509 * L_1 = (__this->___playerStats_3);
		IntPtr_t L_2 = { (void*)MoneyDisplay_DynamicUpdateTreatsText_m2916_MethodInfo_var };
		MoneyChangedEventHandler_t680 * L_3 = (MoneyChangedEventHandler_t680 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3684(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_add_MoneyChanged_m3695(L_1, L_3, /*hidden argument*/NULL);
		__this->___registerdForEvents_4 = 1;
		MoneyDisplay_SetTreatsText_m2915(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyDisplay::OnDestroy()
extern TypeInfo* MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyDisplay_DynamicUpdateTreatsText_m2916_MethodInfo_var;
extern "C" void MoneyDisplay_OnDestroy_m2914 (MoneyDisplay_t537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		MoneyDisplay_DynamicUpdateTreatsText_m2916_MethodInfo_var = il2cpp_codegen_method_info_from_index(494);
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
		PlayerStats_t509 * L_1 = (__this->___playerStats_3);
		IntPtr_t L_2 = { (void*)MoneyDisplay_DynamicUpdateTreatsText_m2916_MethodInfo_var };
		MoneyChangedEventHandler_t680 * L_3 = (MoneyChangedEventHandler_t680 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3684(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_MoneyChanged_m3696(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean MoneyDisplay::SetTreatsText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool MoneyDisplay_SetTreatsText_m2915 (MoneyDisplay_t537 * __this, const MethodInfo* method)
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
		PlayerStats_t509 * L_1 = (__this->___playerStats_3);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_get_money_m3701(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Text_t498 * L_7 = (__this->___moneyText_2);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		bool L_9 = String_op_Inequality_m415(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Text_t498 * L_10 = (__this->___moneyText_2);
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
extern "C" void MoneyDisplay_DynamicUpdateTreatsText_m2916 (MoneyDisplay_t537 * __this, const MethodInfo* method)
{
	{
		bool L_0 = MoneyDisplay_SetTreatsText_m2915(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		DistortForEffect_t535 * L_1 = (__this->___distortForEffect_5);
		NullCheck(L_1);
		DistortForEffect_DistortWithDelay_m3774(L_1, (1.0f), /*hidden argument*/NULL);
	}

IL_001b:
	{
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



// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
#ifndef _MSC_VER
#else
#endif
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

#include "Assembly-CSharp_ArrayTypes.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDesc.h"
// MouseTypeDesc
#include "AssemblyU2DCSharp_MouseTypeDescMethodDeclarations.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDescMethodDeclarations.h"


// System.Void MouseConfig::.ctor()
extern "C" void MouseConfig__ctor_m2917 (MouseConfig_t544 * __this, const MethodInfo* method)
{
	{
		__this->___timeToTurn_2 = (0.2f);
		__this->___minCirclingRadius_3 = (3.3f);
		__this->___maxCirclingRadius_4 = (3.9f);
		__this->___startMouseRadius_5 = (5.5f);
		__this->___minBFWiggleMagnitude_11 = (0.15f);
		__this->___maxBFWiggleMagnitude_12 = (0.55f);
		__this->___minBFWiggleCycles_13 = ((int32_t)10);
		__this->___maxBFWiggleCycles_14 = ((int32_t)14);
		__this->___minSSWiggleMagnitude_15 = (0.15f);
		__this->___maxSSWiggleMagnitude_16 = (0.55f);
		__this->___minSSWiggleCycles_17 = ((int32_t)15);
		__this->___maxSSWiggleCycles_18 = ((int32_t)20);
		__this->___minRDWiggleMagnitude_19 = (0.15f);
		__this->___maxRDWiggleMagnitude_20 = (0.55f);
		__this->___minRDWiggleCycles_21 = ((int32_t)9);
		__this->___maxRDWiggleCycles_22 = ((int32_t)14);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::Awake()
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_Awake_m2918 (MouseConfig_t544 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25 = __this;
		MouseConfig_LoadMouseDescs_m2919(__this, /*hidden argument*/NULL);
		MouseConfig_LoadMouseWiggleDescs_m2920(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseConfig::LoadMouseDescs()
extern TypeInfo* MouseTypeDescU5BU5D_t542_il2cpp_TypeInfo_var;
extern TypeInfo* MouseTypeDesc_t655_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseDescs_m2919 (MouseConfig_t544 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseTypeDescU5BU5D_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		MouseTypeDesc_t655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseDescs_23 = ((MouseTypeDescU5BU5D_t542*)SZArrayNew(MouseTypeDescU5BU5D_t542_il2cpp_TypeInfo_var, 4));
		MouseTypeDescU5BU5D_t542* L_0 = (__this->___mouseDescs_23);
		SingleU5BU5D_t541* L_1 = (__this->___speeds_6);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		SingleU5BU5D_t541* L_3 = (__this->___scales_7);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		MouseTypeDesc_t655 * L_5 = (MouseTypeDesc_t655 *)il2cpp_codegen_object_new (MouseTypeDesc_t655_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3568(L_5, (String_t*) &_stringLiteral1051, (String_t*) &_stringLiteral1052, (*(float*)(float*)SZArrayLdElema(L_1, L_2)), (*(float*)(float*)SZArrayLdElema(L_3, L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_5);
		*((MouseTypeDesc_t655 **)(MouseTypeDesc_t655 **)SZArrayLdElema(L_0, 0)) = (MouseTypeDesc_t655 *)L_5;
		MouseTypeDescU5BU5D_t542* L_6 = (__this->___mouseDescs_23);
		SingleU5BU5D_t541* L_7 = (__this->___speeds_6);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		SingleU5BU5D_t541* L_9 = (__this->___scales_7);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		int32_t L_10 = 1;
		MouseTypeDesc_t655 * L_11 = (MouseTypeDesc_t655 *)il2cpp_codegen_object_new (MouseTypeDesc_t655_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3568(L_11, (String_t*) &_stringLiteral1053, (String_t*) &_stringLiteral1054, (*(float*)(float*)SZArrayLdElema(L_7, L_8)), (*(float*)(float*)SZArrayLdElema(L_9, L_10)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_11);
		*((MouseTypeDesc_t655 **)(MouseTypeDesc_t655 **)SZArrayLdElema(L_6, 1)) = (MouseTypeDesc_t655 *)L_11;
		MouseTypeDescU5BU5D_t542* L_12 = (__this->___mouseDescs_23);
		SingleU5BU5D_t541* L_13 = (__this->___speeds_6);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		int32_t L_14 = 2;
		SingleU5BU5D_t541* L_15 = (__this->___scales_7);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		MouseTypeDesc_t655 * L_17 = (MouseTypeDesc_t655 *)il2cpp_codegen_object_new (MouseTypeDesc_t655_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3568(L_17, (String_t*) &_stringLiteral1055, (String_t*) &_stringLiteral1056, (*(float*)(float*)SZArrayLdElema(L_13, L_14)), (*(float*)(float*)SZArrayLdElema(L_15, L_16)), /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, L_17);
		*((MouseTypeDesc_t655 **)(MouseTypeDesc_t655 **)SZArrayLdElema(L_12, 2)) = (MouseTypeDesc_t655 *)L_17;
		MouseTypeDescU5BU5D_t542* L_18 = (__this->___mouseDescs_23);
		SingleU5BU5D_t541* L_19 = (__this->___speeds_6);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		SingleU5BU5D_t541* L_21 = (__this->___scales_7);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		int32_t L_22 = 3;
		MouseTypeDesc_t655 * L_23 = (MouseTypeDesc_t655 *)il2cpp_codegen_object_new (MouseTypeDesc_t655_il2cpp_TypeInfo_var);
		MouseTypeDesc__ctor_m3568(L_23, (String_t*) &_stringLiteral1057, (String_t*) &_stringLiteral1058, (*(float*)(float*)SZArrayLdElema(L_19, L_20)), (*(float*)(float*)SZArrayLdElema(L_21, L_22)), /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 3);
		ArrayElementTypeCheck (L_18, L_23);
		*((MouseTypeDesc_t655 **)(MouseTypeDesc_t655 **)SZArrayLdElema(L_18, 3)) = (MouseTypeDesc_t655 *)L_23;
		return;
	}
}
// System.Void MouseConfig::LoadMouseWiggleDescs()
extern TypeInfo* MouseWiggleDescU5BU5D_t543_il2cpp_TypeInfo_var;
extern TypeInfo* MouseWiggleDesc_t656_il2cpp_TypeInfo_var;
extern "C" void MouseConfig_LoadMouseWiggleDescs_m2920 (MouseConfig_t544 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseWiggleDescU5BU5D_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		MouseWiggleDesc_t656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mouseWiggleDescs_24 = ((MouseWiggleDescU5BU5D_t543*)SZArrayNew(MouseWiggleDescU5BU5D_t543_il2cpp_TypeInfo_var, 4));
		MouseWiggleDescU5BU5D_t543* L_0 = (__this->___mouseWiggleDescs_24);
		float L_1 = (__this->___minBFWiggleMagnitude_11);
		float L_2 = (__this->___maxBFWiggleMagnitude_12);
		int32_t L_3 = (__this->___minBFWiggleCycles_13);
		int32_t L_4 = (__this->___maxBFWiggleCycles_14);
		MouseWiggleDesc_t656 * L_5 = (MouseWiggleDesc_t656 *)il2cpp_codegen_object_new (MouseWiggleDesc_t656_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3569(L_5, (String_t*) &_stringLiteral1059, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 2);
		ArrayElementTypeCheck (L_0, L_5);
		*((MouseWiggleDesc_t656 **)(MouseWiggleDesc_t656 **)SZArrayLdElema(L_0, 2)) = (MouseWiggleDesc_t656 *)L_5;
		MouseWiggleDescU5BU5D_t543* L_6 = (__this->___mouseWiggleDescs_24);
		float L_7 = (__this->___minSSWiggleMagnitude_15);
		float L_8 = (__this->___maxSSWiggleMagnitude_16);
		int32_t L_9 = (__this->___minSSWiggleCycles_17);
		int32_t L_10 = (__this->___maxSSWiggleCycles_18);
		MouseWiggleDesc_t656 * L_11 = (MouseWiggleDesc_t656 *)il2cpp_codegen_object_new (MouseWiggleDesc_t656_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3569(L_11, (String_t*) &_stringLiteral1060, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_11);
		*((MouseWiggleDesc_t656 **)(MouseWiggleDesc_t656 **)SZArrayLdElema(L_6, 1)) = (MouseWiggleDesc_t656 *)L_11;
		MouseWiggleDescU5BU5D_t543* L_12 = (__this->___mouseWiggleDescs_24);
		float L_13 = (__this->___minRDWiggleMagnitude_19);
		float L_14 = (__this->___maxRDWiggleMagnitude_20);
		int32_t L_15 = (__this->___minRDWiggleCycles_21);
		int32_t L_16 = (__this->___maxRDWiggleCycles_22);
		MouseWiggleDesc_t656 * L_17 = (MouseWiggleDesc_t656 *)il2cpp_codegen_object_new (MouseWiggleDesc_t656_il2cpp_TypeInfo_var);
		MouseWiggleDesc__ctor_m3569(L_17, (String_t*) &_stringLiteral1061, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_17);
		*((MouseWiggleDesc_t656 **)(MouseWiggleDesc_t656 **)SZArrayLdElema(L_12, 3)) = (MouseWiggleDesc_t656 *)L_17;
		return;
	}
}
// MouseConfig/MouseType MouseConfig::GetRandomMouseType()
extern "C" int32_t MouseConfig_GetRandomMouseType_m2921 (MouseConfig_t544 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m3981(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseType(MouseConfig/MouseType)
extern "C" Sprite_t521 * MouseConfig_GetIntroSpriteForMouseType_m2922 (MouseConfig_t544 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseTypeDescU5BU5D_t542* L_0 = (__this->___mouseDescs_23);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(MouseTypeDesc_t655 **)(MouseTypeDesc_t655 **)SZArrayLdElema(L_0, L_2)));
		Sprite_t521 * L_3 = ((*(MouseTypeDesc_t655 **)(MouseTypeDesc_t655 **)SZArrayLdElema(L_0, L_2))->___introScreenSprite_2);
		return L_3;
	}
}
// UnityEngine.Sprite MouseConfig::GetIntroSpriteForMouseWiggle(MouseConfig/MouseWiggleType)
extern "C" Sprite_t521 * MouseConfig_GetIntroSpriteForMouseWiggle_m2923 (MouseConfig_t544 * __this, int32_t ___wt, const MethodInfo* method)
{
	MouseWiggleDesc_t656 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		MouseWiggleDesc_t656 * L_1 = MouseConfig_GetWiggleDesc_m2924(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseWiggleDesc_t656 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		MouseWiggleDesc_t656 * L_3 = V_0;
		NullCheck(L_3);
		Sprite_t521 * L_4 = (L_3->___introScreenSprite_0);
		return L_4;
	}

IL_0015:
	{
		return (Sprite_t521 *)NULL;
	}
}
// MouseWiggleDesc MouseConfig::GetWiggleDesc(MouseConfig/MouseWiggleType)
extern "C" MouseWiggleDesc_t656 * MouseConfig_GetWiggleDesc_m2924 (MouseConfig_t544 * __this, int32_t ___wt, const MethodInfo* method)
{
	{
		MouseWiggleDescU5BU5D_t543* L_0 = (__this->___mouseWiggleDescs_24);
		int32_t L_1 = ___wt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseWiggleDesc_t656 **)(MouseWiggleDesc_t656 **)SZArrayLdElema(L_0, L_2));
	}
}
// MouseTypeDesc MouseConfig::GetMouseTypeDesc(MouseConfig/MouseType)
extern "C" MouseTypeDesc_t655 * MouseConfig_GetMouseTypeDesc_m2925 (MouseConfig_t544 * __this, int32_t ___mt, const MethodInfo* method)
{
	{
		MouseTypeDescU5BU5D_t542* L_0 = (__this->___mouseDescs_23);
		int32_t L_1 = ___mt;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(MouseTypeDesc_t655 **)(MouseTypeDesc_t655 **)SZArrayLdElema(L_0, L_2));
	}
}
// MouseCountDisplay
#include "AssemblyU2DCSharp_MouseCountDisplay.h"
#ifndef _MSC_VER
#else
#endif
// MouseCountDisplay
#include "AssemblyU2DCSharp_MouseCountDisplayMethodDeclarations.h"

// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromData.h"
// MouseSpawnFromData/MouseSpawnEventHandler
#include "AssemblyU2DCSharp_MouseSpawnFromData_MouseSpawnEventHandler.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_Slider.h"
// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromDataMethodDeclarations.h"
// MouseSpawnFromData/MouseSpawnEventHandler
#include "AssemblyU2DCSharp_MouseSpawnFromData_MouseSpawnEventHandlerMethodDeclarations.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"


// System.Void MouseCountDisplay::.ctor()
extern "C" void MouseCountDisplay__ctor_m2926 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseCountDisplay::Start()
extern "C" void MouseCountDisplay_Start_m2927 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	{
		MouseCountDisplay_RegisterForEvents_m2929(__this, /*hidden argument*/NULL);
		MouseCountDisplay_UpdateLevelConfig_m2933(__this, /*hidden argument*/NULL);
		MouseCountDisplay_UpdateSlider_m2934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseCountDisplay::OnDestroy()
extern "C" void MouseCountDisplay_OnDestroy_m2928 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	{
		MouseCountDisplay_UnregisterForEvents_m2930(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseCountDisplay::RegisterForEvents()
extern TypeInfo* MouseSpawnFromData_t549_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseCountDisplay_OnMouseSpawned_m2932_MethodInfo_var;
extern const MethodInfo* MouseCountDisplay_OnLevelChanged_m2931_MethodInfo_var;
extern "C" void MouseCountDisplay_RegisterForEvents_m2929 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		MouseCountDisplay_OnMouseSpawned_m2932_MethodInfo_var = il2cpp_codegen_method_info_from_index(495);
		MouseCountDisplay_OnLevelChanged_m2931_MethodInfo_var = il2cpp_codegen_method_info_from_index(496);
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
		MouseSpawnFromData_t549 * L_1 = ((MouseSpawnFromData_t549_StaticFields*)MouseSpawnFromData_t549_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MouseCountDisplay_OnMouseSpawned_m2932_MethodInfo_var };
		MouseSpawnEventHandler_t548 * L_3 = (MouseSpawnEventHandler_t548 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m2968(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_add_MouseSpawn_m2973(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t660 * L_4 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseCountDisplay_OnLevelChanged_m2931_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_6 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_add_GameLevelChanged_m3602(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseCountDisplay::UnregisterForEvents()
extern TypeInfo* MouseSpawnFromData_t549_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseCountDisplay_OnMouseSpawned_m2932_MethodInfo_var;
extern const MethodInfo* MouseCountDisplay_OnLevelChanged_m2931_MethodInfo_var;
extern "C" void MouseCountDisplay_UnregisterForEvents_m2930 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		MouseCountDisplay_OnMouseSpawned_m2932_MethodInfo_var = il2cpp_codegen_method_info_from_index(495);
		MouseCountDisplay_OnLevelChanged_m2931_MethodInfo_var = il2cpp_codegen_method_info_from_index(496);
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
		MouseSpawnFromData_t549 * L_1 = ((MouseSpawnFromData_t549_StaticFields*)MouseSpawnFromData_t549_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MouseCountDisplay_OnMouseSpawned_m2932_MethodInfo_var };
		MouseSpawnEventHandler_t548 * L_3 = (MouseSpawnEventHandler_t548 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m2968(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_remove_MouseSpawn_m2974(L_1, L_3, /*hidden argument*/NULL);
		GameLevelState_t660 * L_4 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)MouseCountDisplay_OnLevelChanged_m2931_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_6 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameLevelState_remove_GameLevelChanged_m3603(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void MouseCountDisplay::OnLevelChanged()
extern "C" void MouseCountDisplay_OnLevelChanged_m2931 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	{
		MouseCountDisplay_UpdateLevelConfig_m2933(__this, /*hidden argument*/NULL);
		MouseCountDisplay_UpdateSlider_m2934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseCountDisplay::OnMouseSpawned()
extern "C" void MouseCountDisplay_OnMouseSpawned_m2932 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	{
		MouseCountDisplay_UpdateSlider_m2934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseCountDisplay::UpdateLevelConfig()
extern "C" void MouseCountDisplay_UpdateLevelConfig_m2933 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	LevelDescription_t673 * V_1 = {0};
	{
		GameLevelState_t660 * L_0 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m3604(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		LevelConfig_t678 * L_3 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		LevelDescription_t673 * L_4 = LevelConfig_GetCurrentLevelDescription_m3664(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		LevelDescription_t673 * L_5 = V_1;
		NullCheck(L_5);
		List_1_t550 * L_6 = (L_5->___explicitMouseDescs_1);
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
// System.Void MouseCountDisplay::UpdateSlider()
extern TypeInfo* MouseSpawnFromData_t549_il2cpp_TypeInfo_var;
extern "C" void MouseCountDisplay_UpdateSlider_m2934 (MouseCountDisplay_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		MouseSpawnFromData_t549 * L_0 = ((MouseSpawnFromData_t549_StaticFields*)MouseSpawnFromData_t549_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = MouseSpawnFromData_get_miceSpawned_m2975(L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___miceThisLevel_4);
		V_0 = ((float)((float)(((float)L_1))/(float)(((float)L_2))));
		Slider_t494 * L_3 = (__this->___slider_3);
		float L_4 = V_0;
		NullCheck(L_3);
		Slider_set_value_m4373(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollower.h"
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSlider.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayer.h"
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"
#include "UnityEngine_ArrayTypes.h"
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocation.h"
// MouseSinkController
#include "AssemblyU2DCSharp_MouseSinkController.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// WorldObjectFollower
#include "AssemblyU2DCSharp_WorldObjectFollowerMethodDeclarations.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayerMethodDeclarations.h"
// MouseSinkController
#include "AssemblyU2DCSharp_MouseSinkControllerMethodDeclarations.h"
struct GameObject_t352;
struct WorldObjectFollower_t699;
// Declaration !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
// !!0 UnityEngine.GameObject::GetComponent<WorldObjectFollower>()
#define GameObject_GetComponent_TisWorldObjectFollower_t699_m4420(__this, method) (( WorldObjectFollower_t699 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
struct GameObject_t352;
struct Slider_t494;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t494_m4363(__this, method) (( Slider_t494 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
struct GameObject_t352;
struct TweakableSlider_t547;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
// !!0 UnityEngine.GameObject::GetComponent<TweakableSlider>()
#define GameObject_GetComponent_TisTweakableSlider_t547_m4421(__this, method) (( TweakableSlider_t547 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void MouseMove::.ctor()
extern "C" void MouseMove__ctor_m2935 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		__this->___minDistanceToManuallyOrient_5 = (0.01f);
		__this->___wiggleCycles_23 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m2936 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m2937 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmouseTypeU3Ek__BackingField_26);
		return L_0;
	}
}
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m2938 (MouseMove_t517 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmouseTypeU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m2939 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdeadU3Ek__BackingField_27);
		return L_0;
	}
}
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m2940 (MouseMove_t517 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdeadU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m2941 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPoisonedU3Ek__BackingField_28);
		return L_0;
	}
}
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m2942 (MouseMove_t517 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPoisonedU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Boolean MouseMove::get_isFartedUpon()
extern "C" bool MouseMove_get_isFartedUpon_m2943 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisFartedUponU3Ek__BackingField_29);
		return L_0;
	}
}
// System.Void MouseMove::set_isFartedUpon(System.Boolean)
extern "C" void MouseMove_set_isFartedUpon_m2944 (MouseMove_t517 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisFartedUponU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m2945 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		MouseMove_set_dead_m2940(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::Start()
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern TypeInfo* MouseMove_t517_il2cpp_TypeInfo_var;
extern "C" void MouseMove_Start_m2946 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		MouseMove_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_RegisterForEvents_m2948(__this, /*hidden argument*/NULL);
		float L_0 = (__this->___startAngleDeg_8);
		__this->___mouseAngleDeg_7 = L_0;
		MouseMove_SetPhase_m2959(__this, 0, /*hidden argument*/NULL);
		MouseConfig_t544 * L_1 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_1);
		float L_2 = (L_1->___startMouseRadius_5);
		__this->___mouseRadius_10 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t517_il2cpp_TypeInfo_var);
		int32_t L_3 = ((MouseMove_t517_StaticFields*)MouseMove_t517_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t517_StaticFields*)MouseMove_t517_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		float L_4 = (__this->___baseSpeedM_14);
		__this->___actualSpeedM_15 = L_4;
		MouseMove_MakeSlider_m2953(__this, /*hidden argument*/NULL);
		MouseMove_SetMouseTransform_m2954(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnDestroy()
extern TypeInfo* MouseMove_t517_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnDestroy_m2947 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_UnregisterForEvents_m2949(__this, /*hidden argument*/NULL);
		Slider_t494 * L_0 = (__this->___sliderInstance_19);
		bool L_1 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Slider_t494 * L_2 = (__this->___sliderInstance_19);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3972(L_2, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t517_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t517_StaticFields*)MouseMove_t517_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		((MouseMove_t517_StaticFields*)MouseMove_t517_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2 = ((int32_t)((int32_t)L_4-(int32_t)1));
		return;
	}
}
// System.Void MouseMove::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m2950_MethodInfo_var;
extern "C" void MouseMove_RegisterForEvents_m2948 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		MouseMove_OnGamePhaseChanged_m2950_MethodInfo_var = il2cpp_codegen_method_info_from_index(497);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m2950_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseMove_OnGamePhaseChanged_m2950_MethodInfo_var;
extern "C" void MouseMove_UnregisterForEvents_m2949 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		MouseMove_OnGamePhaseChanged_m2950_MethodInfo_var = il2cpp_codegen_method_info_from_index(497);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseMove_OnGamePhaseChanged_m2950_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseMove::OnGamePhaseChanged()
extern "C" void MouseMove_OnGamePhaseChanged_m2950 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3630(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void MouseMove::OnFartedUpon()
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern "C" void MouseMove_OnFartedUpon_m2951 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___baseSpeedM_14);
		__this->___actualSpeedM_15 = ((float)((float)L_0*(float)(0.3f)));
		Renderer_t546 * L_1 = (__this->___mouseRenderer_3);
		NullCheck(L_1);
		Material_t513 * L_2 = Renderer_get_material_m4217(L_1, /*hidden argument*/NULL);
		MouseConfig_t544 * L_3 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_3);
		Color_t325  L_4 = (L_3->___fartedUponColor_9);
		NullCheck(L_2);
		Material_set_color_m4422(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPoisoned()
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetPoisoned_m2952 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseMove_set_isPoisoned_m2942(__this, 1, /*hidden argument*/NULL);
		Renderer_t546 * L_0 = (__this->___mouseRenderer_3);
		NullCheck(L_0);
		Material_t513 * L_1 = Renderer_get_material_m4217(L_0, /*hidden argument*/NULL);
		MouseConfig_t544 * L_2 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_2);
		Color_t325  L_3 = (L_2->___poisonedColor_8);
		NullCheck(L_1);
		Material_set_color_m4422(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeSlider()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisWorldObjectFollower_t699_m4420_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t494_m4363_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTweakableSlider_t547_m4421_MethodInfo_var;
extern "C" void MouseMove_MakeSlider_m2953 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		GameObject_GetComponent_TisWorldObjectFollower_t699_m4420_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484146);
		GameObject_GetComponent_TisSlider_t494_m4363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484114);
		GameObject_GetComponent_TisTweakableSlider_t547_m4421_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484147);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	WorldObjectFollower_t699 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___trackingStatusBarPrototype_4);
		Vector3_t523  L_1 = {0};
		Vector3__ctor_m4250(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t813  L_2 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_3 = Object_Instantiate_m4367(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		WorldObjectFollower_t699 * L_5 = GameObject_GetComponent_TisWorldObjectFollower_t699_m4420(L_4, /*hidden argument*/GameObject_GetComponent_TisWorldObjectFollower_t699_m4420_MethodInfo_var);
		V_1 = L_5;
		WorldObjectFollower_t699 * L_6 = V_1;
		GameObject_t352 * L_7 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		MouseConfig_t544 * L_8 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_8);
		Vector3_t523  L_9 = (L_8->___progressBarOffset_10);
		NullCheck(L_6);
		WorldObjectFollower_SetObjectToFollow_m3846(L_6, L_7, L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = V_0;
		NullCheck(L_10);
		Slider_t494 * L_11 = GameObject_GetComponent_TisSlider_t494_m4363(L_10, /*hidden argument*/GameObject_GetComponent_TisSlider_t494_m4363_MethodInfo_var);
		__this->___sliderInstance_19 = L_11;
		GameObject_t352 * L_12 = V_0;
		NullCheck(L_12);
		TweakableSlider_t547 * L_13 = GameObject_GetComponent_TisTweakableSlider_t547_m4421(L_12, /*hidden argument*/GameObject_GetComponent_TisTweakableSlider_t547_m4421_MethodInfo_var);
		__this->___tweakableSlider_20 = L_13;
		Slider_t494 * L_14 = (__this->___sliderInstance_19);
		NullCheck(L_14);
		GameObject_t352 * L_15 = Component_get_gameObject_m3972(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m4172(L_15, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseTransform()
extern "C" void MouseMove_SetMouseTransform_m2954 (MouseMove_t517 * __this, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	{
		Transform_t406 * L_0 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t523  L_1 = Transform_get_position_m4257(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MouseMove_SetMousePosition_m2955(__this, /*hidden argument*/NULL);
		Vector3_t523  L_2 = V_0;
		MouseMove_SetMouseOrientation_m2956(__this, L_2, /*hidden argument*/NULL);
		MouseMove_UpdateSlider_m2958(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMousePosition()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMousePosition_m2955 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___mouseRadius_10);
		float L_1 = (__this->___mouseAngleDeg_7);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_2 = sinf(((float)((float)(0.0174532924f)*(float)L_1)));
		V_0 = ((float)((float)L_0*(float)L_2));
		float L_3 = (__this->___mouseRadius_10);
		float L_4 = (__this->___mouseAngleDeg_7);
		float L_5 = cosf(((float)((float)(0.0174532924f)*(float)L_4)));
		V_1 = ((float)((float)L_3*(float)L_5));
		Transform_t406 * L_6 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_7 = V_1;
		float L_8 = V_0;
		Vector3_t523  L_9 = {0};
		Vector3__ctor_m4250(&L_9, L_7, L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m4259(L_6, L_9, /*hidden argument*/NULL);
		MouseMove_ApplyWiggle_m2957(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseOrientation(UnityEngine.Vector3)
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseOrientation_m2956 (MouseMove_t517 * __this, Vector3_t523  ___oldPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t523  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t523  V_3 = {0};
	Vector3_t523  V_4 = {0};
	int32_t V_5 = {0};
	{
		int32_t L_0 = (__this->___phase_12);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_00b0;
		}
	}
	{
		Transform_t406 * L_1 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t523  L_2 = Transform_get_position_m4257(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = ((&V_3)->___x_1);
		float L_4 = ((&___oldPosition)->___x_1);
		Transform_t406 * L_5 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t523  L_6 = Transform_get_position_m4257(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = ((&V_4)->___y_2);
		float L_8 = ((&___oldPosition)->___y_2);
		Vector3__ctor_m4250((&V_1), ((float)((float)L_3-(float)L_4)), ((float)((float)L_7-(float)L_8)), (0.0f), /*hidden argument*/NULL);
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
		float L_11 = Vector3_get_magnitude_m4423((&V_1), /*hidden argument*/NULL);
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
		Vector3_t523  L_15 = Vector3_get_right_m4424(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t523  L_16 = V_1;
		float L_17 = Vector3_Angle_m4425(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
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
		float L_24 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = (__this->___phaseStartTime_13);
		MouseConfig_t544 * L_26 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_26);
		float L_27 = (L_26->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Lerp_m4426(NULL /*static, unused*/, (180.0f), L_23, ((float)((float)((float)((float)L_24-(float)L_25))/(float)L_27)), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_0177;
	}

IL_0121:
	{
		float L_29 = (__this->___zeroCenteredAngleAdjustmentWhileRunning_18);
		float L_30 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_31 = (__this->___phaseStartTime_13);
		MouseConfig_t544 * L_32 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_32);
		float L_33 = (L_32->___timeToTurn_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_34 = Mathf_Lerp_m4426(NULL /*static, unused*/, L_29, (0.0f), ((float)((float)((float)((float)L_30-(float)L_31))/(float)L_33)), /*hidden argument*/NULL);
		V_2 = L_34;
		goto IL_0177;
	}

IL_014e:
	{
		float L_35 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = (__this->___phaseStartTime_13);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
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
		Transform_t406 * L_40 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_41 = V_0;
		Quaternion_t813  L_42 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_rotation_m4372(L_40, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::ApplyWiggle()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void MouseMove_ApplyWiggle_m2957 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t523  V_3 = {0};
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
		Vector3__ctor_m4250((&V_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_14 = sinf(L_13);
		Vector3__ctor_m4250((&V_3), ((float)((float)L_12*(float)L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_00a8:
	{
		float L_15 = (__this->___wiggleMagnitude_22);
		float L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_17 = sinf(L_16);
		Vector3__ctor_m4250((&V_3), (0.0f), ((float)((float)L_15*(float)L_17)), (0.0f), /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_24 = cosf(((float)((float)(3.14159274f)+(float)L_23)));
		float L_25 = (__this->___wiggleMagnitude_22);
		float L_26 = (__this->___wiggleMagnitude_22);
		float L_27 = V_2;
		float L_28 = sinf(((-L_27)));
		Vector3__ctor_m4250((&V_3), ((float)((float)((float)((float)L_22*(float)L_24))+(float)L_25)), ((float)((float)L_26*(float)L_28)), (0.0f), /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_0128:
	{
		float L_29 = (__this->___mouseAngleDeg_7);
		float L_30 = (__this->___angleAdjustmentWhileRunning_17);
		Vector3_t523  L_31 = {0};
		Vector3__ctor_m4250(&L_31, (0.0f), (0.0f), ((float)((float)L_29+(float)L_30)), /*hidden argument*/NULL);
		Quaternion_t813  L_32 = Quaternion_Euler_m4427(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Vector3_t523  L_33 = V_3;
		Vector3_t523  L_34 = Quaternion_op_Multiply_m4428(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		Transform_t406 * L_35 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Transform_t406 * L_36 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t523  L_37 = Transform_get_position_m4257(L_36, /*hidden argument*/NULL);
		Vector3_t523  L_38 = V_3;
		Vector3_t523  L_39 = Vector3_op_Addition_m4401(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_m4259(L_35, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::UpdateSlider()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void MouseMove_UpdateSlider_m2958 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		Color_t325  L_9 = Utilities_TrafficLightColorLerp_m3827(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		TweakableSlider_t547 * L_10 = (__this->___tweakableSlider_20);
		NullCheck(L_10);
		Image_t499 * L_11 = (L_10->___fill_2);
		Color_t325  L_12 = V_1;
		NullCheck(L_11);
		Graphic_set_color_m4379(L_11, L_12, /*hidden argument*/NULL);
		Slider_t494 * L_13 = (__this->___sliderInstance_19);
		float L_14 = V_0;
		NullCheck(L_13);
		Slider_set_value_m4373(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetPhase(MouseConfig/MovementPhaseType)
extern "C" void MouseMove_SetPhase_m2959 (MouseMove_t517 * __this, int32_t ___phase, const MethodInfo* method)
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
		float L_3 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_13 = L_3;
		return;
	}
}
// System.Void MouseMove::FixedUpdate()
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern "C" void MouseMove_FixedUpdate_m2960 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = {0};
	{
		float L_0 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		MouseMove_SetPhase_m2959(__this, 1, /*hidden argument*/NULL);
		Slider_t494 * L_9 = (__this->___sliderInstance_19);
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3972(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m4172(L_10, 1, /*hidden argument*/NULL);
	}

IL_0078:
	{
		goto IL_017c;
	}

IL_007d:
	{
		float L_11 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t544 * L_12 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_12);
		float L_13 = (L_12->___timeToTurn_2);
		float L_14 = (__this->___phaseStartTime_13);
		if ((!(((float)L_11) >= ((float)((float)((float)L_13+(float)L_14))))))
		{
			goto IL_009f;
		}
	}
	{
		MouseMove_SetPhase_m2959(__this, 2, /*hidden argument*/NULL);
	}

IL_009f:
	{
		goto IL_017c;
	}

IL_00a4:
	{
		float L_15 = (__this->___actualSpeedM_15);
		float L_16 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		MouseMove_SetPhase_m2959(__this, 3, /*hidden argument*/NULL);
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
		MouseMove_SetPhase_m2959(__this, 3, /*hidden argument*/NULL);
	}

IL_0136:
	{
		goto IL_017c;
	}

IL_013b:
	{
		float L_31 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseConfig_t544 * L_32 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_32);
		float L_33 = (L_32->___timeToTurn_2);
		float L_34 = (__this->___phaseStartTime_13);
		if ((!(((float)L_31) >= ((float)((float)((float)L_33+(float)L_34))))))
		{
			goto IL_015d;
		}
	}
	{
		MouseMove_SetPhase_m2959(__this, 4, /*hidden argument*/NULL);
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
		MouseMove_SetMouseTransform_m2954(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnKilled()
extern "C" void MouseMove_OnKilled_m2961 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		MouseMove_MakeDeadMouse_m2962(__this, /*hidden argument*/NULL);
		MouseMove_set_dead_m2940(__this, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::MakeDeadMouse()
extern "C" void MouseMove_MakeDeadMouse_m2962 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t580 * L_0 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t580 * L_1 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		SFXTypeU5BU5D_t579* L_2 = (L_1->___deadMouseIds_4);
		NullCheck(L_0);
		SFXPlayer_PlayRandom_m3125(L_0, L_2, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::OnSafeExit()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var;
extern "C" void MouseMove_OnSafeExit_m2963 (MouseMove_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	DistortForEffect_t535 * V_0 = {0};
	{
		MouseMove_SetPhase_m2959(__this, 5, /*hidden argument*/NULL);
		DistortForEffect_t535 * L_0 = Component_GetComponent_TisDistortForEffect_t535_m4374(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var);
		V_0 = L_0;
		DistortForEffect_t535 * L_1 = V_0;
		NullCheck(L_1);
		DistortForEffect_Distort_m3776(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern TypeInfo* MaterialU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetMouseType_m2964 (MouseMove_t517 * __this, int32_t ___mt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		MaterialU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	MouseTypeDesc_t655 * V_0 = {0};
	Vector3_t523  V_1 = {0};
	float V_2 = 0.0f;
	MaterialU5BU5D_t646* V_3 = {0};
	float G_B3_0 = 0.0f;
	{
		int32_t L_0 = ___mt;
		MouseMove_set_mouseType_m2938(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t544 * L_1 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		int32_t L_2 = ___mt;
		NullCheck(L_1);
		MouseTypeDesc_t655 * L_3 = MouseConfig_GetMouseTypeDesc_m2925(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseTypeDesc_t655 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = (L_4->___speed_4);
		__this->___baseSpeedM_14 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t523  L_7 = Transform_get_localScale_m4260(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_9 = ((&V_1)->___x_1);
		MouseTypeDesc_t655 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___scale_5);
		float L_12 = ((&V_1)->___y_2);
		MouseTypeDesc_t655 * L_13 = V_0;
		NullCheck(L_13);
		float L_14 = (L_13->___scale_5);
		float L_15 = ((&V_1)->___z_3);
		Vector3_t523  L_16 = {0};
		Vector3__ctor_m4250(&L_16, ((float)((float)L_9*(float)L_11)), ((float)((float)L_12*(float)L_14)), L_15, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m4261(L_8, L_16, /*hidden argument*/NULL);
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
		Vector3_t523  L_19 = Transform_get_localScale_m4260(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Transform_t406 * L_20 = (__this->___artTransform_6);
		float L_21 = ((&V_1)->___x_1);
		float L_22 = ((&V_1)->___y_2);
		float L_23 = V_2;
		float L_24 = ((&V_1)->___z_3);
		Vector3_t523  L_25 = {0};
		Vector3__ctor_m4250(&L_25, L_21, ((float)((float)L_22*(float)L_23)), L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_m4261(L_20, L_25, /*hidden argument*/NULL);
		V_3 = ((MaterialU5BU5D_t646*)SZArrayNew(MaterialU5BU5D_t646_il2cpp_TypeInfo_var, 1));
		MaterialU5BU5D_t646* L_26 = V_3;
		MouseTypeDesc_t655 * L_27 = V_0;
		NullCheck(L_27);
		Material_t513 * L_28 = (L_27->___mouseMaterial_3);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_28);
		*((Material_t513 **)(Material_t513 **)SZArrayLdElema(L_26, 0)) = (Material_t513 *)L_28;
		Renderer_t546 * L_29 = (__this->___mouseRenderer_3);
		MaterialU5BU5D_t646* L_30 = V_3;
		NullCheck(L_29);
		Renderer_set_materials_m4429(L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m2965 (MouseMove_t517 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___phase_12);
		return L_0;
	}
}
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseSinkController/MouseHoleLocation,System.Boolean,System.Int32)
extern TypeInfo* MouseSinkController_t629_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern "C" void MouseMove_SetupMouse_m2966 (MouseMove_t517 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSinkController_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
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
		IL2CPP_RUNTIME_CLASS_INIT(MouseSinkController_t629_il2cpp_TypeInfo_var);
		float L_3 = ((MouseSinkController_t629_StaticFields*)MouseSinkController_t629_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_10;
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
		MouseConfig_t544 * L_8 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_8);
		float L_9 = (L_8->___maxCirclingRadius_4);
		MouseConfig_t544 * L_10 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_10);
		float L_11 = (L_10->___minCirclingRadius_3);
		float L_12 = V_0;
		V_1 = ((float)((float)((float)((float)L_9-(float)L_11))*(float)L_12));
		MouseConfig_t544 * L_13 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_13);
		float L_14 = (L_13->___minCirclingRadius_3);
		float L_15 = V_1;
		__this->___circlingRadius_11 = ((float)((float)L_14+(float)L_15));
		int32_t L_16 = ___mouseType;
		MouseMove_SetMouseType_m2964(__this, L_16, /*hidden argument*/NULL);
		__this->___wiggleType_21 = 0;
		int32_t L_17 = ___mouseType;
		V_2 = ((int32_t)((int32_t)2+(int32_t)L_17));
		DebugConfig_t658 * L_18 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = DebugConfig_IsDebugFlagSet_m3594(L_18, 0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(MouseSinkController_t629_il2cpp_TypeInfo_var);
		float L_21 = ((MouseSinkController_t629_StaticFields*)MouseSinkController_t629_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_10;
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
extern "C" void MouseMove_AddWiggle_m2967 (MouseMove_t517 * __this, int32_t ___wiggleType, float ___wiggleMagnitude, int32_t ___wiggleCycles, bool ___wiggleClockwise, const MethodInfo* method)
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



// System.Void MouseSpawnFromData/MouseSpawnEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MouseSpawnEventHandler__ctor_m2968 (MouseSpawnEventHandler_t548 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke()
extern "C" void MouseSpawnEventHandler_Invoke_m2969 (MouseSpawnEventHandler_t548 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MouseSpawnEventHandler_Invoke_m2969((MouseSpawnEventHandler_t548 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MouseSpawnEventHandler_t548(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult MouseSpawnFromData/MouseSpawnEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MouseSpawnEventHandler_BeginInvoke_m2970 (MouseSpawnEventHandler_t548 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void MouseSpawnFromData/MouseSpawnEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseSpawnEventHandler_EndInvoke_m2971 (MouseSpawnEventHandler_t548 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDescMethodDeclarations.h"
struct GameObject_t352;
struct MouseMove_t517;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
// !!0 UnityEngine.GameObject::GetComponent<MouseMove>()
#define GameObject_GetComponent_TisMouseMove_t517_m4430(__this, method) (( MouseMove_t517 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m2972 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	{
		__this->___maxRandomDelay_4 = (4.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_add_MouseSpawn_m2973 (MouseSpawnFromData_t549 * __this, MouseSpawnEventHandler_t548 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t548 * L_0 = (__this->___MouseSpawn_9);
		MouseSpawnEventHandler_t548 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_9 = ((MouseSpawnEventHandler_t548 *)Castclass(L_2, MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern TypeInfo* MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m2974 (MouseSpawnFromData_t549 * __this, MouseSpawnEventHandler_t548 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSpawnEventHandler_t548 * L_0 = (__this->___MouseSpawn_9);
		MouseSpawnEventHandler_t548 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MouseSpawn_9 = ((MouseSpawnEventHandler_t548 *)Castclass(L_2, MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m2975 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmiceSpawnedU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m2976 (MouseSpawnFromData_t549 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmiceSpawnedU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void MouseSpawnFromData::Awake()
extern TypeInfo* MouseSpawnFromData_t549_il2cpp_TypeInfo_var;
extern "C" void MouseSpawnFromData_Awake_m2977 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseSpawnFromData_t549_StaticFields*)MouseSpawnFromData_t549_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m2978 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_RegisterForEvents_m2980(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m2979 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	{
		MouseSpawnFromData_UnregisterForEvents_m2981(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m2982_MethodInfo_var;
extern "C" void MouseSpawnFromData_RegisterForEvents_m2980 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		MouseSpawnFromData_OnPhaseChanged_m2982_MethodInfo_var = il2cpp_codegen_method_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)MouseSpawnFromData_OnPhaseChanged_m2982_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_2 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m3628(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_8 = 1;
		return;
	}
}
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSpawnFromData_OnPhaseChanged_m2982_MethodInfo_var;
extern "C" void MouseSpawnFromData_UnregisterForEvents_m2981 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		MouseSpawnFromData_OnPhaseChanged_m2982_MethodInfo_var = il2cpp_codegen_method_info_from_index(500);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSpawnFromData_OnPhaseChanged_m2982_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m2982 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3645(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___nextSpawnTime_6 = ((float)((float)L_2+(float)(1.3f)));
		goto IL_002b;
	}

IL_0025:
	{
		MouseSpawnFromData_Clear_m2987(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m2983 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3645(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		float L_2 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		MouseSpawnFromData_MaybeProduceNextMouse_m2984(__this, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m2984 (MouseSpawnFromData_t549 * __this, float ___timeNow, const MethodInfo* method)
{
	ExplicitMouseDesc_t654 * V_0 = {0};
	{
		List_1_t550 * L_0 = (__this->___miceDesc_5);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t550 * L_1 = (__this->___miceDesc_5);
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
		List_1_t550 * L_5 = (__this->___miceDesc_5);
		NullCheck(L_5);
		ExplicitMouseDesc_t654 * L_6 = (ExplicitMouseDesc_t654 *)VirtFuncInvoker1< ExplicitMouseDesc_t654 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_5, 0);
		V_0 = L_6;
		List_1_t550 * L_7 = (__this->___miceDesc_5);
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32) */, L_7, 0);
		ExplicitMouseDesc_t654 * L_8 = V_0;
		MouseSpawnFromData_ProduceMouse_m2985(__this, L_8, /*hidden argument*/NULL);
		float L_9 = ___timeNow;
		ExplicitMouseDesc_t654 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___delayToNextMouse_4);
		__this->___nextSpawnTime_6 = ((float)((float)L_9+(float)L_11));
		return;
	}
}
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseMove_t517_m4430_MethodInfo_var;
extern "C" void MouseSpawnFromData_ProduceMouse_m2985 (MouseSpawnFromData_t549 * __this, ExplicitMouseDesc_t654 * ___emd, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisMouseMove_t517_m4430_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484149);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	MouseMove_t517 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___mousePrototype_7);
		Vector3_t523  L_1 = {0};
		Vector3__ctor_m4250(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t813  L_2 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_3 = Object_Instantiate_m4367(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		MouseMove_t517 * L_5 = GameObject_GetComponent_TisMouseMove_t517_m4430(L_4, /*hidden argument*/GameObject_GetComponent_TisMouseMove_t517_m4430_MethodInfo_var);
		V_1 = L_5;
		MouseMove_t517 * L_6 = V_1;
		ExplicitMouseDesc_t654 * L_7 = ___emd;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___mouseType_0);
		ExplicitMouseDesc_t654 * L_9 = ___emd;
		NullCheck(L_9);
		int32_t L_10 = (L_9->___mouseHoleLocation_1);
		ExplicitMouseDesc_t654 * L_11 = ___emd;
		NullCheck(L_11);
		bool L_12 = (L_11->___isClockwise_2);
		ExplicitMouseDesc_t654 * L_13 = ___emd;
		NullCheck(L_13);
		int32_t L_14 = (L_13->___track_3);
		NullCheck(L_6);
		MouseMove_SetupMouse_m2966(L_6, L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		ExplicitMouseDesc_t654 * L_15 = ___emd;
		NullCheck(L_15);
		int32_t L_16 = ExplicitMouseDesc_get_wiggleType_m3559(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		MouseMove_t517 * L_17 = V_1;
		ExplicitMouseDesc_t654 * L_18 = ___emd;
		NullCheck(L_18);
		int32_t L_19 = ExplicitMouseDesc_get_wiggleType_m3559(L_18, /*hidden argument*/NULL);
		ExplicitMouseDesc_t654 * L_20 = ___emd;
		NullCheck(L_20);
		float L_21 = ExplicitMouseDesc_get_wiggleMagnitude_m3561(L_20, /*hidden argument*/NULL);
		ExplicitMouseDesc_t654 * L_22 = ___emd;
		NullCheck(L_22);
		int32_t L_23 = ExplicitMouseDesc_get_wiggleCycles_m3563(L_22, /*hidden argument*/NULL);
		ExplicitMouseDesc_t654 * L_24 = ___emd;
		NullCheck(L_24);
		bool L_25 = ExplicitMouseDesc_get_wiggleClockwise_m3565(L_24, /*hidden argument*/NULL);
		NullCheck(L_17);
		MouseMove_AddWiggle_m2967(L_17, L_19, L_21, L_23, L_25, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_26 = MouseSpawnFromData_get_miceSpawned_m2975(__this, /*hidden argument*/NULL);
		MouseSpawnFromData_set_miceSpawned_m2976(__this, ((int32_t)((int32_t)L_26+(int32_t)1)), /*hidden argument*/NULL);
		MouseSpawnEventHandler_t548 * L_27 = (__this->___MouseSpawn_9);
		if (!L_27)
		{
			goto IL_009c;
		}
	}
	{
		MouseSpawnEventHandler_t548 * L_28 = (__this->___MouseSpawn_9);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(12 /* System.Void MouseSpawnFromData/MouseSpawnEventHandler::Invoke() */, L_28);
	}

IL_009c:
	{
		return;
	}
}
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m2986 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	{
		List_1_t550 * L_0 = (__this->___miceDesc_5);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_0);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void MouseSpawnFromData::Clear()
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4431_MethodInfo_var;
extern "C" void MouseSpawnFromData_Clear_m2987 (MouseSpawnFromData_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		List_1__ctor_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t550 * L_0 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m4431(L_0, /*hidden argument*/List_1__ctor_m4431_MethodInfo_var);
		__this->___miceDesc_5 = L_0;
		MouseSpawnFromData_set_miceSpawned_m2976(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern const MethodInfo* List_1_AddRange_m4432_MethodInfo_var;
extern "C" void MouseSpawnFromData_AddMice_m2988 (MouseSpawnFromData_t549 * __this, List_1_t550 * ___explicitMice, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m4432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484151);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t550 * L_0 = (__this->___miceDesc_5);
		List_1_t550 * L_1 = ___explicitMice;
		NullCheck(L_0);
		List_1_AddRange_m4432(L_0, L_1, /*hidden argument*/List_1_AddRange_m4432_MethodInfo_var);
		return;
	}
}
// MouseTrap
#include "AssemblyU2DCSharp_MouseTrap.h"
#ifndef _MSC_VER
#else
#endif
// MouseTrap
#include "AssemblyU2DCSharp_MouseTrapMethodDeclarations.h"

// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimation.h"
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinner.h"
// FlyingAnimation
#include "AssemblyU2DCSharp_FlyingAnimationMethodDeclarations.h"
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinnerMethodDeclarations.h"
struct Object_t728;
struct GameObject_t352;
struct Object_t728;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m4434_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m4434(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m4434_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t352_m4433(__this /* static, unused */, p0, method) (( GameObject_t352 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Object_Instantiate_TisObject_t_m4434_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t352;
struct FlyingAnimation_t692;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
// !!0 UnityEngine.GameObject::GetComponent<FlyingAnimation>()
#define GameObject_GetComponent_TisFlyingAnimation_t692_m4435(__this, method) (( FlyingAnimation_t692 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
struct GameObject_t352;
struct AcceleratingSpinner_t686;
// Declaration !!0 UnityEngine.GameObject::GetComponent<AcceleratingSpinner>()
// !!0 UnityEngine.GameObject::GetComponent<AcceleratingSpinner>()
#define GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436(__this, method) (( AcceleratingSpinner_t686 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void MouseTrap::.ctor()
extern "C" void MouseTrap__ctor_m2989 (MouseTrap_t551 * __this, const MethodInfo* method)
{
	{
		__this->___timeToSlide_9 = (0.5f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseTrap::Awake()
extern "C" void MouseTrap_Awake_m2990 (MouseTrap_t551 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MouseTrap::Start()
extern "C" void MouseTrap_Start_m2991 (MouseTrap_t551 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MouseTrap::Update()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void MouseTrap_Update_m2992 (MouseTrap_t551 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
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
		float L_1 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Lerp_m4426(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t523 * L_9 = &(__this->___originalPosition_6);
		float L_10 = (L_9->___x_1);
		Vector3_t523 * L_11 = &(__this->___targetPosition_8);
		float L_12 = (L_11->___x_1);
		float L_13 = V_0;
		float L_14 = Mathf_Lerp_m4426(NULL /*static, unused*/, L_10, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Vector3_t523 * L_15 = &(__this->___originalPosition_6);
		float L_16 = (L_15->___y_2);
		Vector3_t523 * L_17 = &(__this->___targetPosition_8);
		float L_18 = (L_17->___y_2);
		float L_19 = V_0;
		float L_20 = Mathf_Lerp_m4426(NULL /*static, unused*/, L_16, L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_t523 * L_21 = &(__this->___originalPosition_6);
		float L_22 = (L_21->___z_3);
		Vector3_t523 * L_23 = &(__this->___targetPosition_8);
		float L_24 = (L_23->___z_3);
		float L_25 = V_0;
		float L_26 = Mathf_Lerp_m4426(NULL /*static, unused*/, L_22, L_24, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t406 * L_27 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_28 = V_1;
		Quaternion_t813  L_29 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localRotation_m4406(L_27, L_29, /*hidden argument*/NULL);
		Transform_t406 * L_30 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_31 = V_2;
		float L_32 = V_3;
		float L_33 = V_4;
		Vector3_t523  L_34 = {0};
		Vector3__ctor_m4250(&L_34, L_31, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m4402(L_30, L_34, /*hidden argument*/NULL);
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
extern "C" void MouseTrap_AnimateOut_m2993 (MouseTrap_t551 * __this, const MethodInfo* method)
{
	{
		MouseTrap_DoTrapDestructionFX_m2995(__this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseTrap::SlideTo(UnityEngine.Vector3,System.Single)
extern "C" void MouseTrap_SlideTo_m2994 (MouseTrap_t551 * __this, Vector3_t523  ___newPosition, float ___newRotation, const MethodInfo* method)
{
	Quaternion_t813  V_0 = {0};
	Vector3_t523  V_1 = {0};
	{
		Vector3_t523  L_0 = ___newPosition;
		__this->___targetPosition_8 = L_0;
		float L_1 = ___newRotation;
		__this->___targetRotation_7 = L_1;
		__this->___sliding_3 = 1;
		float L_2 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startSlideTime_4 = L_2;
		Transform_t406 * L_3 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t813  L_4 = Transform_get_localRotation_m4437(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t523  L_5 = Quaternion_get_eulerAngles_m4438((&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ((&V_1)->___z_3);
		__this->___originalRotation_5 = L_6;
		Transform_t406 * L_7 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t523  L_8 = Transform_get_localPosition_m4400(L_7, /*hidden argument*/NULL);
		__this->___originalPosition_6 = L_8;
		return;
	}
}
// System.Void MouseTrap::DoTrapDestructionFX()
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436_MethodInfo_var;
extern "C" void MouseTrap_DoTrapDestructionFX_m2995 (MouseTrap_t551 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484152);
		GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484154);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t692 * V_1 = {0};
	AcceleratingSpinner_t686 * V_2 = {0};
	Vector3_t523  V_3 = {0};
	Vector3_t523  V_4 = {0};
	{
		SFXPlayer_t580 * L_0 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SFXPlayer_Play_m3123(L_0, 7, /*hidden argument*/NULL);
		GameObject_t352 * L_1 = (__this->___mouseTrapEffectPrototype_2);
		GameObject_t352 * L_2 = Object_Instantiate_TisGameObject_t352_m4433(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var);
		V_0 = L_2;
		GameObject_t352 * L_3 = V_0;
		NullCheck(L_3);
		FlyingAnimation_t692 * L_4 = GameObject_GetComponent_TisFlyingAnimation_t692_m4435(L_3, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var);
		V_1 = L_4;
		FlyingAnimation_t692 * L_5 = V_1;
		Transform_t406 * L_6 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t523  L_7 = Transform_get_position_m4257(L_6, /*hidden argument*/NULL);
		Vector3_t523  L_8 = {0};
		Vector3__ctor_m4250(&L_8, (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		FlyingAnimation_ConfigureWithViewportPos_m3784(L_5, L_7, L_8, /*hidden argument*/NULL);
		FlyingAnimation_t692 * L_9 = V_1;
		NullCheck(L_9);
		FlyingAnimation_Run_m3785(L_9, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = V_0;
		NullCheck(L_10);
		AcceleratingSpinner_t686 * L_11 = GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436(L_10, /*hidden argument*/GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436_MethodInfo_var);
		V_2 = L_11;
		AcceleratingSpinner_t686 * L_12 = V_2;
		Transform_t406 * L_13 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t523  L_14 = Transform_get_eulerAngles_m4439(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = ((&V_3)->___z_3);
		Camera_t532 * L_16 = Camera_get_main_m4223(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_t406 * L_17 = Component_get_transform_m4252(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t523  L_18 = Transform_get_eulerAngles_m4439(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = ((&V_4)->___z_3);
		NullCheck(L_12);
		AcceleratingSpinner_Configure_m3744(L_12, ((float)((float)L_15-(float)L_19)), /*hidden argument*/NULL);
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

// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandl.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// SoundController/MusicMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_MusicMuteChangedEventHandlMethodDeclarations.h"
struct Resources_t818;
struct Sprite_t521;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t818;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m4441_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m4441(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4441_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t521_m4440(__this /* static, unused */, p0, method) (( Sprite_t521 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4441_gshared)(__this /* static, unused */, p0, method)


// System.Void MusicButton::.ctor()
extern "C" void MusicButton__ctor_m2996 (MusicButton_t552 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t521_m4440_MethodInfo_var;
extern "C" void MusicButton_Awake_m2997 (MusicButton_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t521_m4440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1062;
		String_t* L_0 = V_0;
		Sprite_t521 * L_1 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___onSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1063;
		String_t* L_2 = V_0;
		Sprite_t521 * L_3 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___offSprite_4 = L_3;
		return;
	}
}
// System.Void MusicButton::Start()
extern "C" void MusicButton_Start_m2998 (MusicButton_t552 * __this, const MethodInfo* method)
{
	{
		MusicButton_RegisterForEvents_m3000(__this, /*hidden argument*/NULL);
		MusicButton_UpdateButtonImage_m3003(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::OnDestroy()
extern "C" void MusicButton_OnDestroy_m2999 (MusicButton_t552 * __this, const MethodInfo* method)
{
	{
		MusicButton_UnregisterForEvents_m3001(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::RegisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3002_MethodInfo_var;
extern "C" void MusicButton_RegisterForEvents_m3000 (MusicButton_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		MusicButton_OnMusicMuteChanged_m3002_MethodInfo_var = il2cpp_codegen_method_info_from_index(508);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3002_MethodInfo_var };
		MusicMuteChangedEventHandler_t644 * L_3 = (MusicMuteChangedEventHandler_t644 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3502(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_MusicMuteChanged_m3509(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UnregisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicButton_OnMusicMuteChanged_m3002_MethodInfo_var;
extern "C" void MusicButton_UnregisterForEvents_m3001 (MusicButton_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		MusicButton_OnMusicMuteChanged_m3002_MethodInfo_var = il2cpp_codegen_method_info_from_index(508);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)MusicButton_OnMusicMuteChanged_m3002_MethodInfo_var };
		MusicMuteChangedEventHandler_t644 * L_3 = (MusicMuteChangedEventHandler_t644 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3502(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_MusicMuteChanged_m3510(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MusicButton::OnMusicMuteChanged()
extern "C" void MusicButton_OnMusicMuteChanged_m3002 (MusicButton_t552 * __this, const MethodInfo* method)
{
	{
		MusicButton_UpdateButtonImage_m3003(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicButton::UpdateButtonImage()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void MusicButton_UpdateButtonImage_m3003 (MusicButton_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3513(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t499 * L_2 = (__this->___buttonImage_5);
		Sprite_t521 * L_3 = (__this->___offSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m4377(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t499 * L_4 = (__this->___buttonImage_5);
		Sprite_t521 * L_5 = (__this->___onSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m4377(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// MusicPlayer
#include "AssemblyU2DCSharp_MusicPlayer.h"
#ifndef _MSC_VER
#else
#endif
// MusicPlayer
#include "AssemblyU2DCSharp_MusicPlayerMethodDeclarations.h"

// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandle.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandler.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// MusicFader
#include "AssemblyU2DCSharp_MusicFader.h"
// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandleMethodDeclarations.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandlerMethodDeclarations.h"
// MusicFader
#include "AssemblyU2DCSharp_MusicFaderMethodDeclarations.h"
struct Component_t786;
struct MusicFader_t694;
// Declaration !!0 UnityEngine.Component::GetComponent<MusicFader>()
// !!0 UnityEngine.Component::GetComponent<MusicFader>()
#define Component_GetComponent_TisMusicFader_t694_m4442(__this, method) (( MusicFader_t694 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m3004 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m3005 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_RegisterForEvents_m3007(__this, /*hidden argument*/NULL);
		MusicPlayer_UpdateAllMusic_m3013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m3006 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UnregisterForEvents_m3008(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3009_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3010_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnPauseChanged_m3012_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnBoostActive_m3011_MethodInfo_var;
extern "C" void MusicPlayer_RegisterForEvents_m3007 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		MusicPlayer_OnGamePhaseChanged_m3009_MethodInfo_var = il2cpp_codegen_method_info_from_index(509);
		MusicPlayer_OnMusicMuteChanged_m3010_MethodInfo_var = il2cpp_codegen_method_info_from_index(510);
		MusicPlayer_OnPauseChanged_m3012_MethodInfo_var = il2cpp_codegen_method_info_from_index(511);
		MusicPlayer_OnBoostActive_m3011_MethodInfo_var = il2cpp_codegen_method_info_from_index(512);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3009_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t645 * L_4 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3010_MethodInfo_var };
		MusicMuteChangedEventHandler_t644 * L_6 = (MusicMuteChangedEventHandler_t644 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3502(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_add_MusicMuteChanged_m3509(L_4, L_6, /*hidden argument*/NULL);
		TimeController_t650 * L_7 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)MusicPlayer_OnPauseChanged_m3012_MethodInfo_var };
		TimeStateChangedEventHandler_t649 * L_9 = (TimeStateChangedEventHandler_t649 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3524(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		TimeController_add_TimeStateChanged_m3529(L_7, L_9, /*hidden argument*/NULL);
		BoostConfig_t493 * L_10 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)MusicPlayer_OnBoostActive_m3011_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_12 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		BoostConfig_add_BoostActive_m2781(L_10, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnGamePhaseChanged_m3009_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnMusicMuteChanged_m3010_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnPauseChanged_m3012_MethodInfo_var;
extern const MethodInfo* MusicPlayer_OnBoostActive_m3011_MethodInfo_var;
extern "C" void MusicPlayer_UnregisterForEvents_m3008 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		MusicPlayer_OnGamePhaseChanged_m3009_MethodInfo_var = il2cpp_codegen_method_info_from_index(509);
		MusicPlayer_OnMusicMuteChanged_m3010_MethodInfo_var = il2cpp_codegen_method_info_from_index(510);
		MusicPlayer_OnPauseChanged_m3012_MethodInfo_var = il2cpp_codegen_method_info_from_index(511);
		MusicPlayer_OnBoostActive_m3011_MethodInfo_var = il2cpp_codegen_method_info_from_index(512);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MusicPlayer_OnGamePhaseChanged_m3009_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
		SoundController_t645 * L_4 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_5 = { (void*)MusicPlayer_OnMusicMuteChanged_m3010_MethodInfo_var };
		MusicMuteChangedEventHandler_t644 * L_6 = (MusicMuteChangedEventHandler_t644 *)il2cpp_codegen_object_new (MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var);
		MusicMuteChangedEventHandler__ctor_m3502(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SoundController_remove_MusicMuteChanged_m3510(L_4, L_6, /*hidden argument*/NULL);
		TimeController_t650 * L_7 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)MusicPlayer_OnPauseChanged_m3012_MethodInfo_var };
		TimeStateChangedEventHandler_t649 * L_9 = (TimeStateChangedEventHandler_t649 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3524(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		TimeController_remove_TimeStateChanged_m3530(L_7, L_9, /*hidden argument*/NULL);
		BoostConfig_t493 * L_10 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)MusicPlayer_OnBoostActive_m3011_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_12 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		BoostConfig_remove_BoostActive_m2782(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m3009 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m3010 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void MusicPlayer_OnBoostActive_m3011 (MusicPlayer_t554 * __this, int32_t ___newBoost, int32_t ___oldBoost, const MethodInfo* method)
{
	{
		MusicPlayer_UpdateAllMusic_m3013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnPauseChanged()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern "C" void MusicPlayer_OnPauseChanged_m3012 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t553 * L_0 = (__this->___currentMusic_7);
		bool L_1 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		TimeController_t650 * L_2 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		int32_t L_3 = TimeController_get_timeState_m3531(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0032;
		}
	}
	{
		AudioSource_t553 * L_4 = (__this->___currentMusic_7);
		MusicPlayer_FadeOutMusic_m3014(__this, L_4, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_0032:
	{
		AudioSource_t553 * L_5 = (__this->___currentMusic_7);
		MusicPlayer_FadeInMusic_m3015(__this, L_5, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void MusicPlayer::UpdateAllMusic()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void MusicPlayer_UpdateAllMusic_m3013 (MusicPlayer_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t553 * V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = (AudioSource_t553 *)NULL;
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_musicMuted_m3513(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_007c;
		}
	}
	{
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3630(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 1)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 2)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 3)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)2)) == 4)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0070;
	}

IL_003d:
	{
		BoostConfig_t493 * L_5 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = BoostConfig_IsBoostActive_m2804(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		AudioSource_t553 * L_7 = (__this->___boostMusic_6);
		V_0 = L_7;
		goto IL_005f;
	}

IL_0058:
	{
		AudioSource_t553 * L_8 = (__this->___gameMusic_3);
		V_0 = L_8;
	}

IL_005f:
	{
		goto IL_007c;
	}

IL_0064:
	{
		AudioSource_t553 * L_9 = (__this->___realAngusMusic_5);
		V_0 = L_9;
		goto IL_007c;
	}

IL_0070:
	{
		AudioSource_t553 * L_10 = (__this->___menuMusic_4);
		V_0 = L_10;
		goto IL_007c;
	}

IL_007c:
	{
		AudioSource_t553 * L_11 = V_0;
		AudioSource_t553 * L_12 = (__this->___currentMusic_7);
		bool L_13 = Object_op_Equality_m3997(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		return;
	}

IL_008e:
	{
		AudioSource_t553 * L_14 = (__this->___currentMusic_7);
		MusicPlayer_FadeOutMusic_m3014(__this, L_14, /*hidden argument*/NULL);
		__this->___currentMusic_7 = (AudioSource_t553 *)NULL;
		AudioSource_t553 * L_15 = V_0;
		bool L_16 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bf;
		}
	}
	{
		AudioSource_t553 * L_17 = V_0;
		__this->___currentMusic_7 = L_17;
		AudioSource_t553 * L_18 = (__this->___currentMusic_7);
		MusicPlayer_FadeInMusic_m3015(__this, L_18, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
// System.Void MusicPlayer::FadeOutMusic(UnityEngine.AudioSource)
extern const MethodInfo* Component_GetComponent_TisMusicFader_t694_m4442_MethodInfo_var;
extern "C" void MusicPlayer_FadeOutMusic_m3014 (MusicPlayer_t554 * __this, AudioSource_t553 * ___music, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisMusicFader_t694_m4442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484161);
		s_Il2CppMethodIntialized = true;
	}
	MusicFader_t694 * V_0 = {0};
	{
		AudioSource_t553 * L_0 = ___music;
		bool L_1 = Object_op_Equality_m3997(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		AudioSource_t553 * L_2 = ___music;
		NullCheck(L_2);
		MusicFader_t694 * L_3 = Component_GetComponent_TisMusicFader_t694_m4442(L_2, /*hidden argument*/Component_GetComponent_TisMusicFader_t694_m4442_MethodInfo_var);
		V_0 = L_3;
		MusicFader_t694 * L_4 = V_0;
		NullCheck(L_4);
		MusicFader_FadeOut_m3803(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::FadeInMusic(UnityEngine.AudioSource)
extern const MethodInfo* Component_GetComponent_TisMusicFader_t694_m4442_MethodInfo_var;
extern "C" void MusicPlayer_FadeInMusic_m3015 (MusicPlayer_t554 * __this, AudioSource_t553 * ___music, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisMusicFader_t694_m4442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484161);
		s_Il2CppMethodIntialized = true;
	}
	MusicFader_t694 * V_0 = {0};
	{
		AudioSource_t553 * L_0 = ___music;
		bool L_1 = Object_op_Equality_m3997(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		AudioSource_t553 * L_2 = ___music;
		NullCheck(L_2);
		MusicFader_t694 * L_3 = Component_GetComponent_TisMusicFader_t694_m4442(L_2, /*hidden argument*/Component_GetComponent_TisMusicFader_t694_m4442_MethodInfo_var);
		V_0 = L_3;
		MusicFader_t694 * L_4 = V_0;
		NullCheck(L_4);
		MusicFader_FadeIn_m3802(L_4, /*hidden argument*/NULL);
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
extern "C" void PausePlayToggle__ctor_m3016 (PausePlayToggle_t555 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausePlayToggle::TogglePausePlay()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern TypeInfo* PausedOverlay_t556_il2cpp_TypeInfo_var;
extern "C" void PausePlayToggle_TogglePausePlay_m3017 (PausePlayToggle_t555 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		PausedOverlay_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t650 * L_0 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = TimeController_get_timeState_m3531(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		TimeController_t650 * L_2 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		TimeController_SetTimeState_m3534(L_2, 2, /*hidden argument*/NULL);
		PausedOverlay_t556 * L_3 = ((PausedOverlay_t556_StaticFields*)PausedOverlay_t556_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		PausedOverlay_ShowBigPlayButton_m3025(L_3, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_002a:
	{
		TimeController_t650 * L_4 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_4);
		TimeController_SetTimeState_m3534(L_4, 0, /*hidden argument*/NULL);
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
extern "C" void PausedOverlay__ctor_m3018 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Awake()
extern TypeInfo* PausedOverlay_t556_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_Awake_m3019 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PausedOverlay_t556_StaticFields*)PausedOverlay_t556_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		__this->___registeredForEvents_6 = 0;
		Button_t526 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3972(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m4172(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::Start()
extern "C" void PausedOverlay_Start_m3020 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_RegisterForEvents_m3021(__this, /*hidden argument*/NULL);
		PausedOverlay_UpdateUX_m3024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::RegisterForEvents()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3023_MethodInfo_var;
extern "C" void PausedOverlay_RegisterForEvents_m3021 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		PausedOverlay_OnPauseChanged_m3023_MethodInfo_var = il2cpp_codegen_method_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t650 * L_0 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_1 = { (void*)PausedOverlay_OnPauseChanged_m3023_MethodInfo_var };
		TimeStateChangedEventHandler_t649 * L_2 = (TimeStateChangedEventHandler_t649 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3524(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TimeController_add_TimeStateChanged_m3529(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_6 = 1;
		return;
	}
}
// System.Void PausedOverlay::UnregisterForEvents()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern TypeInfo* TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var;
extern const MethodInfo* PausedOverlay_OnPauseChanged_m3023_MethodInfo_var;
extern "C" void PausedOverlay_UnregisterForEvents_m3022 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		PausedOverlay_OnPauseChanged_m3023_MethodInfo_var = il2cpp_codegen_method_info_from_index(514);
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
		TimeController_t650 * L_1 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)PausedOverlay_OnPauseChanged_m3023_MethodInfo_var };
		TimeStateChangedEventHandler_t649 * L_3 = (TimeStateChangedEventHandler_t649 *)il2cpp_codegen_object_new (TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var);
		TimeStateChangedEventHandler__ctor_m3524(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TimeController_remove_TimeStateChanged_m3530(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PausedOverlay::OnPauseChanged()
extern "C" void PausedOverlay_OnPauseChanged_m3023 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	{
		PausedOverlay_UpdateUX_m3024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::UpdateUX()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern "C" void PausedOverlay_UpdateUX_m3024 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeController_t650 * L_0 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = TimeController_get_timeState_m3531(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___overlay_3);
		NullCheck(L_2);
		GameObject_SetActive_m4172(L_2, 1, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_0020:
	{
		GameObject_t352 * L_3 = (__this->___overlay_3);
		NullCheck(L_3);
		GameObject_SetActive_m4172(L_3, 0, /*hidden argument*/NULL);
		Button_t526 * L_4 = (__this->___bigPlayButton_4);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3972(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m4172(L_5, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = (__this->___childElement_5);
		bool L_7 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_6, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		GameObject_t352 * L_8 = (__this->___childElement_5);
		NullCheck(L_8);
		Transform_t406 * L_9 = GameObject_get_transform_m4255(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetParent_m4368(L_9, (Transform_t406 *)NULL, 0, /*hidden argument*/NULL);
		__this->___childElement_5 = (GameObject_t352 *)NULL;
	}

IL_0067:
	{
		return;
	}
}
// System.Void PausedOverlay::ShowBigPlayButton()
extern "C" void PausedOverlay_ShowBigPlayButton_m3025 (PausedOverlay_t556 * __this, const MethodInfo* method)
{
	{
		Button_t526 * L_0 = (__this->___bigPlayButton_4);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3972(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m4172(L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PausedOverlay::SetChildElement(UnityEngine.GameObject)
extern "C" void PausedOverlay_SetChildElement_m3026 (PausedOverlay_t556 * __this, GameObject_t352 * ___newChildElement, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___newChildElement;
		__this->___childElement_5 = L_0;
		Button_t526 * L_1 = (__this->___bigPlayButton_4);
		NullCheck(L_1);
		GameObject_t352 * L_2 = Component_get_gameObject_m3972(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m4172(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___childElement_5);
		bool L_4 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_3, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GameObject_t352 * L_5 = (__this->___childElement_5);
		NullCheck(L_5);
		Transform_t406 * L_6 = GameObject_get_transform_m4255(L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_7 = (__this->___overlay_3);
		NullCheck(L_7);
		Transform_t406 * L_8 = GameObject_get_transform_m4255(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m4368(L_6, L_8, 0, /*hidden argument*/NULL);
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
struct Utilities_t698;
struct MouseMove_t517;
struct GameObject_t352;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t698;
struct Object_t;
struct GameObject_t352;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m4444_gshared (Object_t * __this /* static, unused */, GameObject_t352 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m4444(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4444_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443(__this /* static, unused */, p0, method) (( MouseMove_t517 * (*) (Object_t * /* static, unused */, GameObject_t352 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m4444_gshared)(__this /* static, unused */, p0, method)


// System.Void PawCollider::.ctor()
extern "C" void PawCollider__ctor_m3027 (PawCollider_t558 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerEnter2D_m3028 (PawCollider_t558 * __this, Collider2D_t724 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t724 * L_0 = ___other;
		PawCollider_HandleCollision_m3030(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void PawCollider_OnTriggerStay2D_m3029 (PawCollider_t558 * __this, Collider2D_t724 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t724 * L_0 = ___other;
		PawCollider_HandleCollision_m3030(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawCollider::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var;
extern "C" void PawCollider_HandleCollision_m3030 (PawCollider_t558 * __this, Collider2D_t724 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t517 * V_0 = {0};
	{
		Collider2D_t724 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4411(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1064, /*hidden argument*/NULL);
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
		Collider2D_t724 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		MouseMove_t517 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t517 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m2939(L_6, /*hidden argument*/NULL);
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
		DeadMouseRelay_t519 * L_8 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		MouseMove_t517 * L_9 = V_0;
		NullCheck(L_8);
		DeadMouseRelay_HandleMouseKill_m2839(L_8, L_9, /*hidden argument*/NULL);
		PawController_t557 * L_10 = (__this->___pawController_2);
		bool L_11 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		PawController_t557 * L_12 = (__this->___pawController_2);
		NullCheck(L_12);
		PawController_CountKill_m3418(L_12, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// PhaseDelayedEventScheduler/DelayedEventHandler
#include "AssemblyU2DCSharp_PhaseDelayedEventScheduler_DelayedEventHan.h"
#ifndef _MSC_VER
#else
#endif
// PhaseDelayedEventScheduler/DelayedEventHandler
#include "AssemblyU2DCSharp_PhaseDelayedEventScheduler_DelayedEventHanMethodDeclarations.h"



// System.Void PhaseDelayedEventScheduler/DelayedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DelayedEventHandler__ctor_m3031 (DelayedEventHandler_t559 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean PhaseDelayedEventScheduler/DelayedEventHandler::Invoke()
extern "C" bool DelayedEventHandler_Invoke_m3032 (DelayedEventHandler_t559 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DelayedEventHandler_Invoke_m3032((DelayedEventHandler_t559 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_DelayedEventHandler_t559(Il2CppObject* delegate)
{
	typedef int32_t (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.IAsyncResult PhaseDelayedEventScheduler/DelayedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DelayedEventHandler_BeginInvoke_m3033 (DelayedEventHandler_t559 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean PhaseDelayedEventScheduler/DelayedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" bool DelayedEventHandler_EndInvoke_m3034 (DelayedEventHandler_t559 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14
#include "AssemblyU2DCSharp_PhaseDelayedEventScheduler_U3CWaitAndFireE.h"
#ifndef _MSC_VER
#else
#endif
// PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14
#include "AssemblyU2DCSharp_PhaseDelayedEventScheduler_U3CWaitAndFireEMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// PhaseDelayedEventScheduler
#include "AssemblyU2DCSharp_PhaseDelayedEventScheduler.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// PhaseDelayedEventScheduler
#include "AssemblyU2DCSharp_PhaseDelayedEventSchedulerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14::.ctor()
extern "C" void U3CWaitAndFireEventU3Ec__Iterator14__ctor_m3035 (U3CWaitAndFireEventU3Ec__Iterator14_t561 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitAndFireEventU3Ec__Iterator14_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3036 (U3CWaitAndFireEventU3Ec__Iterator14_t561 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitAndFireEventU3Ec__Iterator14_System_Collections_IEnumerator_get_Current_m3037 (U3CWaitAndFireEventU3Ec__Iterator14_t561 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14::MoveNext()
extern TypeInfo* WaitForSeconds_t810_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitAndFireEventU3Ec__Iterator14_MoveNext_m3038 (U3CWaitAndFireEventU3Ec__Iterator14_t561 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		goto IL_0077;
	}

IL_0021:
	{
		PhaseDelayedEventScheduler_t560 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___timeToWait_3);
		WaitForSeconds_t810 * L_4 = (WaitForSeconds_t810 *)il2cpp_codegen_object_new (WaitForSeconds_t810_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4355(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0079;
	}

IL_0043:
	{
		PhaseDelayedEventScheduler_t560 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		L_5->___scheduledEvent_4 = (Object_t *)NULL;
		PhaseDelayedEventScheduler_t560 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		bool L_7 = PhaseDelayedEventScheduler_IsAcceptableGamePhase_m3042(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		PhaseDelayedEventScheduler_t560 * L_8 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_8);
		DelayedEventHandler_t559 * L_9 = (L_8->___delayedEvetHandler_5);
		NullCheck(L_9);
		VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean PhaseDelayedEventScheduler/DelayedEventHandler::Invoke() */, L_9);
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
// System.Void PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14::Dispose()
extern "C" void U3CWaitAndFireEventU3Ec__Iterator14_Dispose_m3039 (U3CWaitAndFireEventU3Ec__Iterator14_t561 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PhaseDelayedEventScheduler/<WaitAndFireEvent>c__Iterator14::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CWaitAndFireEventU3Ec__Iterator14_Reset_m3040 (U3CWaitAndFireEventU3Ec__Iterator14_t561 * __this, const MethodInfo* method)
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



// System.Void PhaseDelayedEventScheduler::.ctor()
extern "C" void PhaseDelayedEventScheduler__ctor_m3041 (PhaseDelayedEventScheduler_t560 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PhaseDelayedEventScheduler::IsAcceptableGamePhase()
extern "C" bool PhaseDelayedEventScheduler_IsAcceptableGamePhase_m3042 (PhaseDelayedEventScheduler_t560 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0026;
	}

IL_0012:
	{
		GamePhaseTypeU5BU5D_t562* L_2 = (__this->___acceptablePhases_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)L_5))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		GamePhaseTypeU5BU5D_t562* L_8 = (__this->___acceptablePhases_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}
}
// System.Boolean PhaseDelayedEventScheduler::OnPhaseChanged(PhaseDelayedEventScheduler/DelayedEventHandler)
extern "C" bool PhaseDelayedEventScheduler_OnPhaseChanged_m3043 (PhaseDelayedEventScheduler_t560 * __this, DelayedEventHandler_t559 * ___handler, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___scheduledEvent_4);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___scheduledEvent_4);
		MonoBehaviour_StopCoroutine_m4386(__this, L_1, /*hidden argument*/NULL);
		__this->___scheduledEvent_4 = (Object_t *)NULL;
	}

IL_001e:
	{
		bool L_2 = PhaseDelayedEventScheduler_IsAcceptableGamePhase_m3042(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		DelayedEventHandler_t559 * L_3 = ___handler;
		__this->___delayedEvetHandler_5 = L_3;
		Object_t * L_4 = PhaseDelayedEventScheduler_WaitAndFireEvent_m3044(__this, /*hidden argument*/NULL);
		__this->___scheduledEvent_4 = L_4;
		Object_t * L_5 = (__this->___scheduledEvent_4);
		MonoBehaviour_StartCoroutine_m3935(__this, L_5, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Collections.IEnumerator PhaseDelayedEventScheduler::WaitAndFireEvent()
extern TypeInfo* U3CWaitAndFireEventU3Ec__Iterator14_t561_il2cpp_TypeInfo_var;
extern "C" Object_t * PhaseDelayedEventScheduler_WaitAndFireEvent_m3044 (PhaseDelayedEventScheduler_t560 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitAndFireEventU3Ec__Iterator14_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(518);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitAndFireEventU3Ec__Iterator14_t561 * V_0 = {0};
	{
		U3CWaitAndFireEventU3Ec__Iterator14_t561 * L_0 = (U3CWaitAndFireEventU3Ec__Iterator14_t561 *)il2cpp_codegen_object_new (U3CWaitAndFireEventU3Ec__Iterator14_t561_il2cpp_TypeInfo_var);
		U3CWaitAndFireEventU3Ec__Iterator14__ctor_m3035(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAndFireEventU3Ec__Iterator14_t561 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CWaitAndFireEventU3Ec__Iterator14_t561 * L_2 = V_0;
		return L_2;
	}
}
// PlayButtonClickSound
#include "AssemblyU2DCSharp_PlayButtonClickSound.h"
#ifndef _MSC_VER
#else
#endif
// PlayButtonClickSound
#include "AssemblyU2DCSharp_PlayButtonClickSoundMethodDeclarations.h"

// BounceLerp
#include "AssemblyU2DCSharp_BounceLerp.h"


// System.Void PlayButtonClickSound::.ctor()
extern "C" void PlayButtonClickSound__ctor_m3045 (PlayButtonClickSound_t563 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayButtonClickSound::Awake()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var;
extern "C" void PlayButtonClickSound_Awake_m3046 (PlayButtonClickSound_t563 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	{
		DistortForEffect_t535 * L_0 = Component_GetComponent_TisDistortForEffect_t535_m4374(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var);
		__this->___distortForEffect_2 = L_0;
		DistortForEffect_t535 * L_1 = (__this->___distortForEffect_2);
		bool L_2 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_1, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		DistortForEffect_t535 * L_3 = (__this->___distortForEffect_2);
		NullCheck(L_3);
		((BounceLerp_t605 *)L_3)->___totalPeriods_3 = (1.0f);
		DistortForEffect_t535 * L_4 = (__this->___distortForEffect_2);
		NullCheck(L_4);
		L_4->___squishAndStretch_12 = 1;
	}

IL_0039:
	{
		return;
	}
}
// System.Void PlayButtonClickSound::Play()
extern "C" void PlayButtonClickSound_Play_m3047 (PlayButtonClickSound_t563 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t580 * L_0 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SFXPlayer_Play_m3123(L_0, 2, /*hidden argument*/NULL);
		DistortForEffect_t535 * L_1 = (__this->___distortForEffect_2);
		bool L_2 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_1, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		DistortForEffect_t535 * L_3 = (__this->___distortForEffect_2);
		NullCheck(L_3);
		DistortForEffect_Distort_m3776(L_3, /*hidden argument*/NULL);
	}

IL_0027:
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



// System.Void PlayLevelHandler::.ctor()
extern "C" void PlayLevelHandler__ctor_m3048 (PlayLevelHandler_t564 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayLevelHandler::Play()
extern "C" void PlayLevelHandler_Play_m3049 (PlayLevelHandler_t564 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_TransitionToPhase_m3651(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// RateMeDialog
#include "AssemblyU2DCSharp_RateMeDialog.h"
#ifndef _MSC_VER
#else
#endif
// RateMeDialog
#include "AssemblyU2DCSharp_RateMeDialogMethodDeclarations.h"

// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// DialogController
#include "AssemblyU2DCSharp_DialogController.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"


// System.Void RateMeDialog::.ctor()
extern "C" void RateMeDialog__ctor_m3050 (RateMeDialog_t565 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::Start()
extern "C" void RateMeDialog_Start_m3051 (RateMeDialog_t565 * __this, const MethodInfo* method)
{
	{
		RateMeDialog_RecordShowTime_m3052(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RecordShowTime()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RecordShowTime_m3052 (RateMeDialog_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		PersistentStorage_t695 * L_0 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3810(L_0, (String_t*) &_stringLiteral1065, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		float L_2 = Utilities_SecondsSinceEpoch_m3836(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		PersistentStorage_t695 * L_3 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PersistentStorage_SetIntValue_m3809(L_3, (String_t*) &_stringLiteral1066, L_4, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_5 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		float L_6 = V_1;
		NullCheck(L_5);
		PersistentStorage_SetFloatValue_m3807(L_5, (String_t*) &_stringLiteral1067, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RateThis()
extern TypeInfo* RatingsHelper_t566_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RateThis_m3053 (RateMeDialog_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t566 * L_0 = ((RatingsHelper_t566_StaticFields*)RatingsHelper_t566_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m3059(L_0, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3811(L_1, (String_t*) &_stringLiteral1068, 1, /*hidden argument*/NULL);
		DialogController_t610 * L_2 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		DialogController_HideDialog_m3277(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::RemindMeLater()
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_RemindMeLater_m3054 (RateMeDialog_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t610 * L_0 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m3277(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeDialog::NoThanks()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern "C" void RateMeDialog_NoThanks_m3055 (RateMeDialog_t565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t695 * L_0 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		PersistentStorage_SetBoolValue_m3811(L_0, (String_t*) &_stringLiteral1068, 1, /*hidden argument*/NULL);
		DialogController_t610 * L_1 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_2 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DialogController_HideDialog_m3277(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void RatingsHelper::.ctor()
extern "C" void RatingsHelper__ctor_m3056 (RatingsHelper_t566 * __this, const MethodInfo* method)
{
	{
		__this->___iosAppID_2 = (String_t*) &_stringLiteral1069;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RatingsHelper::Awake()
extern TypeInfo* RatingsHelper_t566_il2cpp_TypeInfo_var;
extern "C" void RatingsHelper_Awake_m3057 (RatingsHelper_t566 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RatingsHelper_t566_StaticFields*)RatingsHelper_t566_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.String RatingsHelper::GetStorePageURL()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RatingsHelper_GetStorePageURL_m3058 (RatingsHelper_t566 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		float L_1 = Utilities_GetIOSVersion_m3835(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1070, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002d:
	{
		String_t* L_5 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1071, L_5, (String_t*) &_stringLiteral1072, /*hidden argument*/NULL);
		return L_6;
	}

IL_0043:
	{
		String_t* L_7 = (__this->___iosAppID_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1073, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void RatingsHelper::ShowRatingsPage()
extern "C" void RatingsHelper_ShowRatingsPage_m3059 (RatingsHelper_t566 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = RatingsHelper_GetStorePageURL_m3058(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		Application_OpenURL_m4176(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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

// RealAngusData
#include "AssemblyU2DCSharp_RealAngusData.h"
// RealAngusData/RealAngusDataChangedEventHandler
#include "AssemblyU2DCSharp_RealAngusData_RealAngusDataChangedEventHan.h"
// System.Collections.Generic.List`1<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDesc.h"
// RealAngusData
#include "AssemblyU2DCSharp_RealAngusDataMethodDeclarations.h"
// RealAngusData/RealAngusDataChangedEventHandler
#include "AssemblyU2DCSharp_RealAngusData_RealAngusDataChangedEventHanMethodDeclarations.h"
// System.Collections.Generic.List`1<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDescMethodDeclarations.h"


// System.Void RealAngusButton::.ctor()
extern "C" void RealAngusButton__ctor_m3060 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::Start()
extern "C" void RealAngusButton_Start_m3061 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	{
		RealAngusButton_RegisterForEvents_m3064(__this, /*hidden argument*/NULL);
		RealAngusButton_UpdateDisplay_m3067(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::Update()
extern "C" void RealAngusButton_Update_m3062 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RealAngusButton::OnDestroy()
extern "C" void RealAngusButton_OnDestroy_m3063 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	{
		RealAngusButton_UnregisterForEvents_m3065(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusButton_UpdateDisplay_m3067_MethodInfo_var;
extern "C" void RealAngusButton_RegisterForEvents_m3064 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		RealAngusButton_UpdateDisplay_m3067_MethodInfo_var = il2cpp_codegen_method_info_from_index(516);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RealAngusButton_UpdateDisplay_m3067_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		RealAngusData_t684 * L_4 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_5 = { (void*)RealAngusButton_UpdateDisplay_m3067_MethodInfo_var };
		RealAngusDataChangedEventHandler_t682 * L_6 = (RealAngusDataChangedEventHandler_t682 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3722(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RealAngusData_add_RealAngusDataChanged_m3727(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusButton_UpdateDisplay_m3067_MethodInfo_var;
extern "C" void RealAngusButton_UnregisterForEvents_m3065 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		RealAngusButton_UpdateDisplay_m3067_MethodInfo_var = il2cpp_codegen_method_info_from_index(516);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RealAngusButton_UpdateDisplay_m3067_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
		RealAngusData_t684 * L_4 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_5 = { (void*)RealAngusButton_UpdateDisplay_m3067_MethodInfo_var };
		RealAngusDataChangedEventHandler_t682 * L_6 = (RealAngusDataChangedEventHandler_t682 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3722(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RealAngusData_remove_RealAngusDataChanged_m3728(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void RealAngusButton::OnEnable()
extern "C" void RealAngusButton_OnEnable_m3066 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	{
		RealAngusButton_UpdateDisplay_m3067(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::UpdateDisplay()
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern "C" void RealAngusButton_UpdateDisplay_m3067 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t683 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RealAngusData_t684 * L_0 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		bool L_1 = Object_op_Equality_m3997(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
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
		RealAngusData_t684 * L_2 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_2);
		List_1_t683 * L_3 = RealAngusData_GetRealAngusItemDescs_m3732(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		List_1_t683 * L_4 = V_0;
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
		List_1_t683 * L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		RealAngusItemDesc_t571 * L_7 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_5, L_6);
		NullCheck(L_7);
		bool L_8 = RealAngusItemDesc_get_unlocked_m3577(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		List_1_t683 * L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RealAngusItemDesc_t571 * L_11 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_9, L_10);
		NullCheck(L_11);
		bool L_12 = RealAngusItemDesc_get_viewed_m3579(L_11, /*hidden argument*/NULL);
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
		List_1_t683 * L_15 = V_0;
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
		GameObject_SetActive_m4172(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusButton::ShowRealAngusPage()
extern "C" void RealAngusButton_ShowRealAngusPage_m3068 (RealAngusButton_t567 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_TransitionToPhase_m3651(L_0, 5, /*hidden argument*/NULL);
		return;
	}
}
// RealAngusElementButton/ButtonHandler
#include "AssemblyU2DCSharp_RealAngusElementButton_ButtonHandler.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusElementButton/ButtonHandler
#include "AssemblyU2DCSharp_RealAngusElementButton_ButtonHandlerMethodDeclarations.h"

// RealAngusElementButton
#include "AssemblyU2DCSharp_RealAngusElementButton.h"


// System.Void RealAngusElementButton/ButtonHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ButtonHandler__ctor_m3069 (ButtonHandler_t569 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void RealAngusElementButton/ButtonHandler::Invoke(RealAngusElementButton)
extern "C" void ButtonHandler_Invoke_m3070 (ButtonHandler_t569 * __this, RealAngusElementButton_t568 * ___button, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ButtonHandler_Invoke_m3070((ButtonHandler_t569 *)__this->___prev_9,___button, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RealAngusElementButton_t568 * ___button, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___button,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RealAngusElementButton_t568 * ___button, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___button,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___button,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ButtonHandler_t569(Il2CppObject* delegate, RealAngusElementButton_t568 * ___button)
{
	// Marshaling of parameter '___button' to native representation
	RealAngusElementButton_t568 * ____button_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'RealAngusElementButton'."));
}
// System.IAsyncResult RealAngusElementButton/ButtonHandler::BeginInvoke(RealAngusElementButton,System.AsyncCallback,System.Object)
extern "C" Object_t * ButtonHandler_BeginInvoke_m3071 (ButtonHandler_t569 * __this, RealAngusElementButton_t568 * ___button, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void RealAngusElementButton/ButtonHandler::EndInvoke(System.IAsyncResult)
extern "C" void ButtonHandler_EndInvoke_m3072 (ButtonHandler_t569 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// RealAngusElementButton
#include "AssemblyU2DCSharp_RealAngusElementButtonMethodDeclarations.h"

// InOutTransitioner
#include "AssemblyU2DCSharp_InOutTransitioner.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// InOutTransitioner
#include "AssemblyU2DCSharp_InOutTransitionerMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"


// System.Void RealAngusElementButton::.ctor()
extern "C" void RealAngusElementButton__ctor_m3073 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		__this->___pauseBeforePulsing_6 = (0.5f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// RealAngusItemDesc RealAngusElementButton::get_raid()
extern "C" RealAngusItemDesc_t571 * RealAngusElementButton_get_raid_m3074 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t571 * L_0 = (__this->___U3CraidU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void RealAngusElementButton::set_raid(RealAngusItemDesc)
extern "C" void RealAngusElementButton_set_raid_m3075 (RealAngusElementButton_t568 * __this, RealAngusItemDesc_t571 * ___value, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t571 * L_0 = ___value;
		__this->___U3CraidU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void RealAngusElementButton::Awake()
extern TypeInfo* InOutTransitioner_t570_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var;
extern "C" void RealAngusElementButton_Awake_m3076 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InOutTransitioner_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	{
		DistortForEffect_t535 * L_0 = Component_GetComponent_TisDistortForEffect_t535_m4374(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var);
		__this->___distortForEffect_7 = L_0;
		InOutTransitioner_t570 * L_1 = (InOutTransitioner_t570 *)il2cpp_codegen_object_new (InOutTransitioner_t570_il2cpp_TypeInfo_var);
		InOutTransitioner__ctor_m3787(L_1, (0.400000036f), /*hidden argument*/NULL);
		__this->___transitioner_15 = L_1;
		return;
	}
}
// System.Void RealAngusElementButton::Start()
extern "C" void RealAngusElementButton_Start_m3077 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RealAngusElementButton::Update()
extern "C" void RealAngusElementButton_Update_m3078 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_15);
		NullCheck(L_0);
		bool L_1 = InOutTransitioner_IsTransitioning_m3793(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		RealAngusElementButton_UpdateSelectionState_m3079(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusElementButton::UpdateSelectionState()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void RealAngusElementButton_UpdateSelectionState_m3079 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_15);
		NullCheck(L_0);
		InOutTransitioner_UpdateTransitionFraction_m3791(L_0, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_1 = (__this->___transitioner_15);
		NullCheck(L_1);
		float L_2 = InOutTransitioner_GetFractionIn_m3794(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		Vector2_t110  L_4 = (__this->___homePosition_10);
		float L_5 = (__this->___homeRotation_11);
		Vector2_t110  L_6 = (__this->___selectedPosition_12);
		float L_7 = (__this->___selectedRotation_13);
		float L_8 = (__this->___selectedScale_14);
		Transform_t406 * L_9 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		Utilities_LerpTransform_m3842(NULL /*static, unused*/, L_3, L_4, L_5, (1.0f), L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_10 = (__this->___transitioner_15);
		NullCheck(L_10);
		bool L_11 = InOutTransitioner_IsTransitioning_m3793(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006d;
		}
	}
	{
		ButtonHandler_t569 * L_12 = (__this->___OnTransitionComplete_9);
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		ButtonHandler_t569 * L_13 = (__this->___OnTransitionComplete_9);
		NullCheck(L_13);
		VirtActionInvoker1< RealAngusElementButton_t568 * >::Invoke(12 /* System.Void RealAngusElementButton/ButtonHandler::Invoke(RealAngusElementButton) */, L_13, __this);
	}

IL_006d:
	{
		return;
	}
}
// System.Void RealAngusElementButton::SetClickHandler(RealAngusElementButton/ButtonHandler)
extern "C" void RealAngusElementButton_SetClickHandler_m3080 (RealAngusElementButton_t568 * __this, ButtonHandler_t569 * ___handler, const MethodInfo* method)
{
	{
		ButtonHandler_t569 * L_0 = ___handler;
		__this->___OnButtonClicked_8 = L_0;
		return;
	}
}
// System.Void RealAngusElementButton::SetTransitionCompleteHandler(RealAngusElementButton/ButtonHandler)
extern "C" void RealAngusElementButton_SetTransitionCompleteHandler_m3081 (RealAngusElementButton_t568 * __this, ButtonHandler_t569 * ___handler, const MethodInfo* method)
{
	{
		ButtonHandler_t569 * L_0 = ___handler;
		__this->___OnTransitionComplete_9 = L_0;
		return;
	}
}
// System.Void RealAngusElementButton::Configure(RealAngusItemDesc)
extern "C" void RealAngusElementButton_Configure_m3082 (RealAngusElementButton_t568 * __this, RealAngusItemDesc_t571 * ___raid, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		RealAngusItemDesc_t571 * L_0 = ___raid;
		RealAngusElementButton_set_raid_m3075(__this, L_0, /*hidden argument*/NULL);
		Image_t499 * L_1 = (__this->___photoImage_2);
		RealAngusItemDesc_t571 * L_2 = ___raid;
		NullCheck(L_2);
		Sprite_t521 * L_3 = RealAngusItemDesc_get_pictureSprite_m3571(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Image_set_sprite_m4377(L_1, L_3, /*hidden argument*/NULL);
		V_0 = (300.0f);
		float L_4 = V_0;
		V_1 = ((float)((float)L_4-(float)(10.0f)));
		float L_5 = V_1;
		V_2 = ((float)((float)L_5/(float)(1.33333f)));
		float L_6 = V_2;
		V_3 = ((float)((float)L_6+(float)(10.0f)));
		Image_t499 * L_7 = (__this->___frameImage_3);
		NullCheck(L_7);
		RectTransform_t573 * L_8 = Graphic_get_rectTransform_m4445(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		float L_10 = V_3;
		Vector2_t110  L_11 = {0};
		Vector2__ctor_m4446(&L_11, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		RectTransform_set_sizeDelta_m4447(L_8, L_11, /*hidden argument*/NULL);
		Image_t499 * L_12 = (__this->___shadowImage_4);
		NullCheck(L_12);
		RectTransform_t573 * L_13 = Graphic_get_rectTransform_m4445(L_12, /*hidden argument*/NULL);
		float L_14 = V_0;
		float L_15 = V_3;
		Vector2_t110  L_16 = {0};
		Vector2__ctor_m4446(&L_16, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_sizeDelta_m4447(L_13, L_16, /*hidden argument*/NULL);
		Image_t499 * L_17 = (__this->___photoImage_2);
		NullCheck(L_17);
		RectTransform_t573 * L_18 = Graphic_get_rectTransform_m4445(L_17, /*hidden argument*/NULL);
		float L_19 = V_1;
		float L_20 = V_2;
		Vector2_t110  L_21 = {0};
		Vector2__ctor_m4446(&L_21, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_set_sizeDelta_m4447(L_18, L_21, /*hidden argument*/NULL);
		RealAngusElementButton_UpdateState_m3083(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusElementButton::UpdateState()
extern "C" void RealAngusElementButton_UpdateState_m3083 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t571 * L_0 = RealAngusElementButton_get_raid_m3074(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = RealAngusItemDesc_get_unlocked_m3577(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___lockWidgetGameObject_5);
		NullCheck(L_2);
		GameObject_SetActive_m4172(L_2, 0, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0021:
	{
		GameObject_t352 * L_3 = (__this->___lockWidgetGameObject_5);
		NullCheck(L_3);
		GameObject_SetActive_m4172(L_3, 1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void RealAngusElementButton::ViewImage()
extern "C" void RealAngusElementButton_ViewImage_m3084 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t571 * L_0 = RealAngusElementButton_get_raid_m3074(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RealAngusItemDesc_SetViewed_m3584(L_0, 1, /*hidden argument*/NULL);
		RealAngusElementButton_UpdateState_m3083(__this, /*hidden argument*/NULL);
		ButtonHandler_t569 * L_1 = (__this->___OnButtonClicked_8);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ButtonHandler_t569 * L_2 = (__this->___OnButtonClicked_8);
		NullCheck(L_2);
		VirtActionInvoker1< RealAngusElementButton_t568 * >::Invoke(12 /* System.Void RealAngusElementButton/ButtonHandler::Invoke(RealAngusElementButton) */, L_2, __this);
	}

IL_0029:
	{
		return;
	}
}
// System.Void RealAngusElementButton::OnFirstDisplayed()
extern "C" void RealAngusElementButton_OnFirstDisplayed_m3085 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		RealAngusItemDesc_t571 * L_0 = RealAngusElementButton_get_raid_m3074(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = RealAngusItemDesc_get_unlocked_m3577(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		RealAngusItemDesc_t571 * L_2 = RealAngusElementButton_get_raid_m3074(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = RealAngusItemDesc_get_viewed_m3579(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		DistortForEffect_t535 * L_4 = (__this->___distortForEffect_7);
		float L_5 = (__this->___pauseBeforePulsing_6);
		NullCheck(L_4);
		DistortForEffect_DistortWithDelay_m3774(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		RealAngusElementButton_UpdateState_m3083(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusElementButton::SetSelected(System.Boolean,System.Boolean)
extern "C" void RealAngusElementButton_SetSelected_m3086 (RealAngusElementButton_t568 * __this, bool ___selected, bool ___skipTransition, const MethodInfo* method)
{
	{
		bool L_0 = ___skipTransition;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		InOutTransitioner_t570 * L_1 = (__this->___transitioner_15);
		bool L_2 = ___selected;
		NullCheck(L_1);
		InOutTransitioner_Reset_m3790(L_1, L_2, /*hidden argument*/NULL);
		RealAngusElementButton_UpdateSelectionState_m3079(__this, /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_001d:
	{
		InOutTransitioner_t570 * L_3 = (__this->___transitioner_15);
		bool L_4 = ___selected;
		NullCheck(L_3);
		InOutTransitioner_Transition_m3792(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean RealAngusElementButton::IsSelected()
extern "C" bool RealAngusElementButton_IsSelected_m3087 (RealAngusElementButton_t568 * __this, const MethodInfo* method)
{
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_15);
		NullCheck(L_0);
		bool L_1 = InOutTransitioner_get_movingIn_m3788(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void RealAngusElementButton::SetSelectedTransform(UnityEngine.Vector2,System.Single,System.Single)
extern "C" void RealAngusElementButton_SetSelectedTransform_m3088 (RealAngusElementButton_t568 * __this, Vector2_t110  ___position, float ___rotation, float ___scale, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = ___position;
		__this->___selectedPosition_12 = L_0;
		float L_1 = ___rotation;
		__this->___selectedRotation_13 = L_1;
		float L_2 = ___scale;
		__this->___selectedScale_14 = L_2;
		return;
	}
}
// System.Void RealAngusElementButton::SetHomeTransform(UnityEngine.Vector2,System.Single)
extern "C" void RealAngusElementButton_SetHomeTransform_m3089 (RealAngusElementButton_t568 * __this, Vector2_t110  ___position, float ___rotation, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = ___position;
		__this->___homePosition_10 = L_0;
		float L_1 = ___rotation;
		__this->___homeRotation_11 = L_1;
		GameObject_t352 * L_2 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4255(L_2, /*hidden argument*/NULL);
		Vector2_t110  L_4 = ___position;
		Vector3_t523  L_5 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_m4402(L_3, L_5, /*hidden argument*/NULL);
		GameObject_t352 * L_6 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t406 * L_7 = GameObject_get_transform_m4255(L_6, /*hidden argument*/NULL);
		float L_8 = ___rotation;
		Quaternion_t813  L_9 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localRotation_m4406(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// RealAngusSelectedButtonParent
#include "AssemblyU2DCSharp_RealAngusSelectedButtonParent.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusSelectedButtonParent
#include "AssemblyU2DCSharp_RealAngusSelectedButtonParentMethodDeclarations.h"

struct Component_t786;
struct Image_t499;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t499_m4448(__this, method) (( Image_t499 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void RealAngusSelectedButtonParent::.ctor()
extern "C" void RealAngusSelectedButtonParent__ctor_m3090 (RealAngusSelectedButtonParent_t572 * __this, const MethodInfo* method)
{
	{
		__this->___selectedBackgroundAlpha_4 = (0.4f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Awake()
extern const MethodInfo* Component_GetComponent_TisImage_t499_m4448_MethodInfo_var;
extern "C" void RealAngusSelectedButtonParent_Awake_m3091 (RealAngusSelectedButtonParent_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisImage_t499_m4448_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t499 * L_0 = Component_GetComponent_TisImage_t499_m4448(__this, /*hidden argument*/Component_GetComponent_TisImage_t499_m4448_MethodInfo_var);
		__this->___image_3 = L_0;
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Start()
extern "C" void RealAngusSelectedButtonParent_Start_m3092 (RealAngusSelectedButtonParent_t572 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::Update()
extern "C" void RealAngusSelectedButtonParent_Update_m3093 (RealAngusSelectedButtonParent_t572 * __this, const MethodInfo* method)
{
	{
		RealAngusSelectedButtonParent_MaybeMakeTransitioner_m3097(__this, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_2);
		NullCheck(L_0);
		bool L_1 = InOutTransitioner_IsTransitioning_m3793(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		InOutTransitioner_t570 * L_2 = (__this->___transitioner_2);
		NullCheck(L_2);
		float L_3 = InOutTransitioner_GetFractionIn_m3794(L_2, /*hidden argument*/NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4172(L_4, 0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		RealAngusSelectedButtonParent_UpdateSelectionState_m3094(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::UpdateSelectionState()
extern "C" void RealAngusSelectedButtonParent_UpdateSelectionState_m3094 (RealAngusSelectedButtonParent_t572 * __this, const MethodInfo* method)
{
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_2);
		NullCheck(L_0);
		InOutTransitioner_UpdateTransitionFraction_m3791(L_0, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_UpdateImage_m3095(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::UpdateImage()
extern "C" void RealAngusSelectedButtonParent_UpdateImage_m3095 (RealAngusSelectedButtonParent_t572 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_2);
		NullCheck(L_0);
		float L_1 = InOutTransitioner_GetFractionIn_m3794(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Image_t499 * L_2 = (__this->___image_3);
		float L_3 = (__this->___selectedBackgroundAlpha_4);
		float L_4 = V_0;
		Color_t325  L_5 = {0};
		Color__ctor_m4376(&L_5, (0.0f), (0.0f), (0.0f), ((float)((float)L_3*(float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_2);
		Graphic_set_color_m4379(L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::StartVisibilityTransition(System.Boolean)
extern "C" void RealAngusSelectedButtonParent_StartVisibilityTransition_m3096 (RealAngusSelectedButtonParent_t572 * __this, bool ___visible, const MethodInfo* method)
{
	{
		RealAngusSelectedButtonParent_MaybeMakeTransitioner_m3097(__this, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_2);
		bool L_1 = ___visible;
		NullCheck(L_0);
		InOutTransitioner_Transition_m3792(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___visible;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_t352 * L_3 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m4172(L_3, 1, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_UpdateImage_m3095(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void RealAngusSelectedButtonParent::MaybeMakeTransitioner()
extern TypeInfo* InOutTransitioner_t570_il2cpp_TypeInfo_var;
extern "C" void RealAngusSelectedButtonParent_MaybeMakeTransitioner_m3097 (RealAngusSelectedButtonParent_t572 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InOutTransitioner_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_2);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		InOutTransitioner_t570 * L_1 = (InOutTransitioner_t570 *)il2cpp_codegen_object_new (InOutTransitioner_t570_il2cpp_TypeInfo_var);
		InOutTransitioner__ctor_m3787(L_1, (0.6f), /*hidden argument*/NULL);
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

struct Component_t786;
struct RectTransform_t573;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t573_m4449(__this, method) (( RectTransform_t573 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void RealAngusTextWidget::.ctor()
extern "C" void RealAngusTextWidget__ctor_m3098 (RealAngusTextWidget_t574 * __this, const MethodInfo* method)
{
	{
		__this->___offscreenRotation_5 = (20.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::Awake()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var;
extern "C" void RealAngusTextWidget_Awake_m3099 (RealAngusTextWidget_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t573 * L_0 = Component_GetComponent_TisRectTransform_t573_m4449(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		__this->___rectTransform_7 = L_0;
		RealAngusTextWidget_MaybeMakeTransitioner_m3105(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::Start()
extern "C" void RealAngusTextWidget_Start_m3100 (RealAngusTextWidget_t574 * __this, const MethodInfo* method)
{
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3105(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::Update()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void RealAngusTextWidget_Update_m3101 (RealAngusTextWidget_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3105(__this, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_8);
		NullCheck(L_0);
		bool L_1 = InOutTransitioner_IsTransitioning_m3793(L_0, /*hidden argument*/NULL);
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
		InOutTransitioner_t570 * L_2 = (__this->___transitioner_8);
		NullCheck(L_2);
		InOutTransitioner_UpdateTransitionFraction_m3791(L_2, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_3 = (__this->___transitioner_8);
		NullCheck(L_3);
		float L_4 = InOutTransitioner_GetFractionIn_m3794(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = V_0;
		Vector3_t523  L_6 = (__this->___offscreenPosition_4);
		Vector2_t110  L_7 = Vector2_op_Implicit_m4409(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		float L_8 = (__this->___offscreenRotation_5);
		Vector3_t523  L_9 = (__this->___onscreenPosition_3);
		Vector2_t110  L_10 = Vector2_op_Implicit_m4409(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		float L_11 = (__this->___onscreenRotation_6);
		Transform_t406 * L_12 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		Utilities_LerpTransform_m3842(NULL /*static, unused*/, L_5, L_7, L_8, (1.0f), L_10, L_11, (1.0f), L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::ConfigureLayout(System.Single,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern const MethodInfo* Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var;
extern "C" void RealAngusTextWidget_ConfigureLayout_m3102 (RealAngusTextWidget_t574 * __this, float ___width, float ___height, Vector2_t110  ___onscreenPosition, Vector2_t110  ___offscreenPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3105(__this, /*hidden argument*/NULL);
		RectTransform_t573 * L_0 = Component_GetComponent_TisRectTransform_t573_m4449(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		__this->___rectTransform_7 = L_0;
		Vector2_t110  L_1 = ___onscreenPosition;
		Vector3_t523  L_2 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___onscreenPosition_3 = L_2;
		Vector2_t110  L_3 = ___offscreenPosition;
		Vector3_t523  L_4 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___offscreenPosition_4 = L_4;
		RectTransform_t573 * L_5 = (__this->___rectTransform_7);
		float L_6 = ___width;
		float L_7 = ___height;
		Vector2_t110  L_8 = {0};
		Vector2__ctor_m4446(&L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_sizeDelta_m4447(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::TransitionIn(RealAngusItemDesc)
extern "C" void RealAngusTextWidget_TransitionIn_m3103 (RealAngusTextWidget_t574 * __this, RealAngusItemDesc_t571 * ___raid, const MethodInfo* method)
{
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3105(__this, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_8);
		NullCheck(L_0);
		InOutTransitioner_Transition_m3792(L_0, 1, /*hidden argument*/NULL);
		Text_t498 * L_1 = (__this->___mainText_2);
		RealAngusItemDesc_t571 * L_2 = ___raid;
		NullCheck(L_2);
		String_t* L_3 = RealAngusItemDesc_get_text_m3573(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		return;
	}
}
// System.Void RealAngusTextWidget::TransitionOut()
extern "C" void RealAngusTextWidget_TransitionOut_m3104 (RealAngusTextWidget_t574 * __this, const MethodInfo* method)
{
	{
		RealAngusTextWidget_MaybeMakeTransitioner_m3105(__this, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_8);
		NullCheck(L_0);
		InOutTransitioner_Transition_m3792(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusTextWidget::MaybeMakeTransitioner()
extern TypeInfo* InOutTransitioner_t570_il2cpp_TypeInfo_var;
extern "C" void RealAngusTextWidget_MaybeMakeTransitioner_m3105 (RealAngusTextWidget_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InOutTransitioner_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_8);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		InOutTransitioner_t570 * L_1 = (InOutTransitioner_t570 *)il2cpp_codegen_object_new (InOutTransitioner_t570_il2cpp_TypeInfo_var);
		InOutTransitioner__ctor_m3787(L_1, (0.5f), /*hidden argument*/NULL);
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



// System.Void RestartGameHandler::.ctor()
extern "C" void RestartGameHandler__ctor_m3106 (RestartGameHandler_t575 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::ResetLevelAndRestart()
extern "C" void RestartGameHandler_ResetLevelAndRestart_m3107 (RestartGameHandler_t575 * __this, const MethodInfo* method)
{
	{
		GameLevelState_t660 * L_0 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_SetGameLevel_m3610(L_0, 1, /*hidden argument*/NULL);
		RestartGameHandler_RestartGame_m3108(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::RestartGame()
extern "C" void RestartGameHandler_RestartGame_m3108 (RestartGameHandler_t575 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_RestartGame_m3646(L_0, /*hidden argument*/NULL);
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
extern "C" void SFXButton__ctor_m3109 (SFXButton_t576 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t521_m4440_MethodInfo_var;
extern "C" void SFXButton_Awake_m3110 (SFXButton_t576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t521_m4440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral1074;
		String_t* L_0 = V_0;
		Sprite_t521 * L_1 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___soundOnSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral1075;
		String_t* L_2 = V_0;
		Sprite_t521 * L_3 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___soundOffSprite_4 = L_3;
		return;
	}
}
// System.Void SFXButton::Start()
extern "C" void SFXButton_Start_m3111 (SFXButton_t576 * __this, const MethodInfo* method)
{
	{
		SFXButton_RegisterForEvents_m3113(__this, /*hidden argument*/NULL);
		SFXButton_UpdateButtonImage_m3116(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::OnDestroy()
extern "C" void SFXButton_OnDestroy_m3112 (SFXButton_t576 * __this, const MethodInfo* method)
{
	{
		SFXButton_UnregisterForEvents_m3114(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::RegisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3115_MethodInfo_var;
extern "C" void SFXButton_RegisterForEvents_m3113 (SFXButton_t576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		SFXButton_OnSoundMuteChanged_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(519);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3115_MethodInfo_var };
		SoundMuteChangedEventHandler_t643 * L_3 = (SoundMuteChangedEventHandler_t643 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3498(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3507(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UnregisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m3115_MethodInfo_var;
extern "C" void SFXButton_UnregisterForEvents_m3114 (SFXButton_t576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		SFXButton_OnSoundMuteChanged_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(519);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m3115_MethodInfo_var };
		SoundMuteChangedEventHandler_t643 * L_3 = (SoundMuteChangedEventHandler_t643 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3498(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3508(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXButton::OnSoundMuteChanged()
extern "C" void SFXButton_OnSoundMuteChanged_m3115 (SFXButton_t576 * __this, const MethodInfo* method)
{
	{
		SFXButton_UpdateButtonImage_m3116(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UpdateButtonImage()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void SFXButton_UpdateButtonImage_m3116 (SFXButton_t576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3511(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t499 * L_2 = (__this->___buttonImage_5);
		Sprite_t521 * L_3 = (__this->___soundOffSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m4377(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t499 * L_4 = (__this->___buttonImage_5);
		Sprite_t521 * L_5 = (__this->___soundOnSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m4377(L_4, L_5, /*hidden argument*/NULL);
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
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
struct GameObject_t352;
struct AudioSource_t553;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t553_m4213(__this, method) (( AudioSource_t553 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m4073_gshared)(__this, method)


// System.Void SFXPlayer::.ctor()
extern TypeInfo* SFXTypeU5BU5D_t579_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer__ctor_m3117 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXTypeU5BU5D_t579_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(525);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXTypeU5BU5D_t579* L_0 = ((SFXTypeU5BU5D_t579*)SZArrayNew(SFXTypeU5BU5D_t579_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 1)) = (int32_t)1;
		__this->___deadMouseIds_4 = L_0;
		SFXTypeU5BU5D_t579* L_1 = ((SFXTypeU5BU5D_t579*)SZArrayNew(SFXTypeU5BU5D_t579_il2cpp_TypeInfo_var, 3));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 0)) = (int32_t)3;
		SFXTypeU5BU5D_t579* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 1)) = (int32_t)4;
		SFXTypeU5BU5D_t579* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, 2)) = (int32_t)5;
		__this->___slapIds_5 = L_3;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// SFXPlayer SFXPlayer::get_instance()
extern TypeInfo* SFXPlayer_t580_il2cpp_TypeInfo_var;
extern "C" SFXPlayer_t580 * SFXPlayer_get_instance_m3118 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t580 * L_0 = ((SFXPlayer_t580_StaticFields*)SFXPlayer_t580_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SFXPlayer::set_instance(SFXPlayer)
extern TypeInfo* SFXPlayer_t580_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_set_instance_m3119 (Object_t * __this /* static, unused */, SFXPlayer_t580 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SFXPlayer_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	{
		SFXPlayer_t580 * L_0 = ___value;
		((SFXPlayer_t580_StaticFields*)SFXPlayer_t580_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void SFXPlayer::Awake()
extern "C" void SFXPlayer_Awake_m3120 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_set_instance_m3119(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSources_m3121(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSources()
extern TypeInfo* AudioSourceU5BU5D_t578_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_LoadAudioSources_m3121 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSourceU5BU5D_t578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___audioSources_2 = ((AudioSourceU5BU5D_t578*)SZArrayNew(AudioSourceU5BU5D_t578_il2cpp_TypeInfo_var, ((int32_t)10)));
		SFXPlayer_LoadAudioSource_m3122(__this, 0, (String_t*) &_stringLiteral1051, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 1, (String_t*) &_stringLiteral1053, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 2, (String_t*) &_stringLiteral1076, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 3, (String_t*) &_stringLiteral1077, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 4, (String_t*) &_stringLiteral1078, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 5, (String_t*) &_stringLiteral1079, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 6, (String_t*) &_stringLiteral1080, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 7, (String_t*) &_stringLiteral1081, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, 8, (String_t*) &_stringLiteral1082, /*hidden argument*/NULL);
		SFXPlayer_LoadAudioSource_m3122(__this, ((int32_t)9), (String_t*) &_stringLiteral1083, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::LoadAudioSource(SFXPlayer/SFXType,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* AudioClip_t395_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t553_m4213_MethodInfo_var;
extern "C" void SFXPlayer_LoadAudioSource_m3122 (SFXPlayer_t580 * __this, int32_t ___type, String_t* ___resourceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		AudioClip_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(529);
		GameObject_AddComponent_TisAudioSource_t553_m4213_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t553 * V_0 = {0};
	AudioClip_t395 * V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_t553 * L_1 = GameObject_AddComponent_TisAudioSource_t553_m4213(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t553_m4213_MethodInfo_var);
		V_0 = L_1;
		String_t* L_2 = ___resourceName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1084, L_2, /*hidden argument*/NULL);
		Object_t728 * L_4 = Resources_Load_m3998(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = ((AudioClip_t395 *)IsInst(L_4, AudioClip_t395_il2cpp_TypeInfo_var));
		AudioSource_t553 * L_5 = V_0;
		AudioClip_t395 * L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_clip_m4215(L_5, L_6, /*hidden argument*/NULL);
		AudioSourceU5BU5D_t578* L_7 = (__this->___audioSources_2);
		int32_t L_8 = ___type;
		AudioSource_t553 * L_9 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ArrayElementTypeCheck (L_7, L_9);
		*((AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_7, L_8)) = (AudioSource_t553 *)L_9;
		return;
	}
}
// System.Void SFXPlayer::Play(SFXPlayer/SFXType)
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_Play_m3123 (SFXPlayer_t580 * __this, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3511(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t578* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Play_m4450((*(AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayDelayed(SFXPlayer/SFXType,System.Single)
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_PlayDelayed_m3124 (SFXPlayer_t580 * __this, int32_t ___type, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3511(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t578* L_2 = (__this->___audioSources_2);
		int32_t L_3 = ___type;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		float L_5 = ___delay;
		NullCheck((*(AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_PlayDelayed_m4451((*(AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_2, L_4)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::PlayRandom(SFXPlayer/SFXType[],System.Single)
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_PlayRandom_m3125 (SFXPlayer_t580 * __this, SFXTypeU5BU5D_t579* ___types, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AudioSource_t553 * V_1 = {0};
	{
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3511(L_0, /*hidden argument*/NULL);
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
		SFXTypeU5BU5D_t579* L_2 = ___types;
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m3981(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		AudioSourceU5BU5D_t578* L_4 = (__this->___audioSources_2);
		SFXTypeU5BU5D_t579* L_5 = ___types;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)));
		int32_t L_8 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7));
		V_1 = (*(AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_4, L_8));
		AudioSource_t553 * L_9 = V_1;
		float L_10 = ___delay;
		NullCheck(L_9);
		AudioSource_PlayDelayed_m4451(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::Start()
extern "C" void SFXPlayer_Start_m3126 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_RegisterForEvents_m3128(__this, /*hidden argument*/NULL);
		SFXPlayer_OnSoundMuteChanged_m3130(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::OnDestroy()
extern "C" void SFXPlayer_OnDestroy_m3127 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_UnregisterForEvents_m3129(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::RegisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3130_MethodInfo_var;
extern "C" void SFXPlayer_RegisterForEvents_m3128 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		SFXPlayer_OnSoundMuteChanged_m3130_MethodInfo_var = il2cpp_codegen_method_info_from_index(520);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3130_MethodInfo_var };
		SoundMuteChangedEventHandler_t643 * L_3 = (SoundMuteChangedEventHandler_t643 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3498(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3507(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXPlayer::UnregisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXPlayer_OnSoundMuteChanged_m3130_MethodInfo_var;
extern "C" void SFXPlayer_UnregisterForEvents_m3129 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		SFXPlayer_OnSoundMuteChanged_m3130_MethodInfo_var = il2cpp_codegen_method_info_from_index(520);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXPlayer_OnSoundMuteChanged_m3130_MethodInfo_var };
		SoundMuteChangedEventHandler_t643 * L_3 = (SoundMuteChangedEventHandler_t643 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3498(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3508(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXPlayer::OnSoundMuteChanged()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void SFXPlayer_OnSoundMuteChanged_m3130 (SFXPlayer_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m3511(L_0, /*hidden argument*/NULL);
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
		AudioSourceU5BU5D_t578* L_2 = (__this->___audioSources_2);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_2, L_4)));
		AudioSource_Stop_m4216((*(AudioSource_t553 **)(AudioSource_t553 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
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



// System.Void SFXSilencer::.ctor()
extern "C" void SFXSilencer__ctor_m3131 (SFXSilencer_t581 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::Start()
extern "C" void SFXSilencer_Start_m3132 (SFXSilencer_t581 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_RegisterForEvents_m3134(__this, /*hidden argument*/NULL);
		SFXSilencer_UpdateSoundsActive_m3137(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::OnDestroy()
extern "C" void SFXSilencer_OnDestroy_m3133 (SFXSilencer_t581 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UnregisterForEvents_m3135(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::RegisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3136_MethodInfo_var;
extern "C" void SFXSilencer_RegisterForEvents_m3134 (SFXSilencer_t581 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		SFXSilencer_OnSoundMuteChanged_m3136_MethodInfo_var = il2cpp_codegen_method_info_from_index(521);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3136_MethodInfo_var };
		SoundMuteChangedEventHandler_t643 * L_3 = (SoundMuteChangedEventHandler_t643 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3498(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m3507(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UnregisterForEvents()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m3136_MethodInfo_var;
extern "C" void SFXSilencer_UnregisterForEvents_m3135 (SFXSilencer_t581 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		SFXSilencer_OnSoundMuteChanged_m3136_MethodInfo_var = il2cpp_codegen_method_info_from_index(521);
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
		SoundController_t645 * L_1 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m3136_MethodInfo_var };
		SoundMuteChangedEventHandler_t643 * L_3 = (SoundMuteChangedEventHandler_t643 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m3498(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m3508(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXSilencer::OnSoundMuteChanged()
extern "C" void SFXSilencer_OnSoundMuteChanged_m3136 (SFXSilencer_t581 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UpdateSoundsActive_m3137(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UpdateSoundsActive()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void SFXSilencer_UpdateSoundsActive_m3137 (SFXSilencer_t581 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
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
		Transform_t406 * L_0 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_t406 * L_2 = Transform_GetChild_m4452(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3972(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t352 * L_4 = V_1;
		SoundController_t645 * L_5 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		bool L_6 = SoundController_get_sfxMuted_m3511(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4172(L_4, ((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		Transform_t406 * L_9 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m4453(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
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
struct DistortForEffect_t535;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t535_m4454(__this, method) (( DistortForEffect_t535 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void ScoreDisplay::.ctor()
extern "C" void ScoreDisplay__ctor_m3138 (ScoreDisplay_t582 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::Awake()
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var;
extern "C" void ScoreDisplay_Awake_m3139 (ScoreDisplay_t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	{
		DistortForEffect_t535 * L_0 = Component_GetComponent_TisDistortForEffect_t535_m4374(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var);
		__this->___distortForEffect_3 = L_0;
		return;
	}
}
// System.Void ScoreDisplay::Start()
extern const MethodInfo* GameObject_GetComponent_TisText_t498_m4405_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t535_m4454_MethodInfo_var;
extern "C" void ScoreDisplay_Start_m3140 (ScoreDisplay_t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisText_t498_m4405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484138);
		GameObject_GetComponent_TisDistortForEffect_t535_m4454_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484170);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t498 * L_1 = GameObject_GetComponent_TisText_t498_m4405(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t498_m4405_MethodInfo_var);
		__this->___scoreText_2 = L_1;
		GameObject_t352 * L_2 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		DistortForEffect_t535 * L_3 = GameObject_GetComponent_TisDistortForEffect_t535_m4454(L_2, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t535_m4454_MethodInfo_var);
		__this->___distortForEffect_3 = L_3;
		ScoreDisplay_RegisterForEvents_m3141(__this, /*hidden argument*/NULL);
		ScoreDisplay_SetScoreText_m3143(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::RegisterForEvents()
extern TypeInfo* ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreDisplay_DynamicUpdateScoreText_m3144_MethodInfo_var;
extern "C" void ScoreDisplay_RegisterForEvents_m3141 (ScoreDisplay_t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		ScoreDisplay_DynamicUpdateScoreText_m3144_MethodInfo_var = il2cpp_codegen_method_info_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)ScoreDisplay_DynamicUpdateScoreText_m3144_MethodInfo_var };
		ScoreChangedEventHandler_t679 * L_2 = (ScoreChangedEventHandler_t679 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3680(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayerStats_add_ScoreChanged_m3693(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_4 = 1;
		return;
	}
}
// System.Void ScoreDisplay::OnDestroy()
extern TypeInfo* ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreDisplay_DynamicUpdateScoreText_m3144_MethodInfo_var;
extern "C" void ScoreDisplay_OnDestroy_m3142 (ScoreDisplay_t582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		ScoreDisplay_DynamicUpdateScoreText_m3144_MethodInfo_var = il2cpp_codegen_method_info_from_index(523);
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
		PlayerStats_t509 * L_1 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ScoreDisplay_DynamicUpdateScoreText_m3144_MethodInfo_var };
		ScoreChangedEventHandler_t679 * L_3 = (ScoreChangedEventHandler_t679 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m3680(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_ScoreChanged_m3694(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean ScoreDisplay::SetScoreText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool ScoreDisplay_SetScoreText_m3143 (ScoreDisplay_t582 * __this, const MethodInfo* method)
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
		PlayerStats_t509 * L_1 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_get_gameScore_m3699(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Text_t498 * L_7 = (__this->___scoreText_2);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		bool L_9 = String_op_Inequality_m415(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Text_t498 * L_10 = (__this->___scoreText_2);
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
extern "C" void ScoreDisplay_DynamicUpdateScoreText_m3144 (ScoreDisplay_t582 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ScoreDisplay_SetScoreText_m3143(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		DistortForEffect_t535 * L_1 = (__this->___distortForEffect_3);
		NullCheck(L_1);
		DistortForEffect_DistortWithDelay_m3774(L_1, (1.3f), /*hidden argument*/NULL);
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
extern "C" void SecretUI__ctor_m3145 (SecretUI_t583 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::LaunchShareWidget(System.Int32,System.Boolean)
extern "C" {void DEFAULT_CALL LaunchShareWidget(int32_t, int32_t);}
extern "C" void SecretUI_LaunchShareWidget_m3146 (Object_t * __this /* static, unused */, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
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
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ResetPreferences_m3147 (SecretUI_t583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t695 * L_0 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		PersistentStorage_ClearAll_m3806(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Awake()
extern TypeInfo* SecretUI_t583_il2cpp_TypeInfo_var;
extern "C" void SecretUI_Awake_m3148 (SecretUI_t583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SecretUI_t583_StaticFields*)SecretUI_t583_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void SecretUI::UpdateInputs()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void SecretUI_UpdateInputs_m3149 (SecretUI_t583 * __this, const MethodInfo* method)
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
		DebugConfig_t658 * L_0 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = DebugConfig_GetDebugFlags_m3596(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InputField_t584 * L_2 = (__this->___debugFlagsInputField_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m409(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputField_set_text_m4455(L_2, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Start()
extern TypeInfo* UnityAction_1_t820_il2cpp_TypeInfo_var;
extern const MethodInfo* SecretUI_U3CStartU3Em__4A_m3155_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m4457_MethodInfo_var;
extern const MethodInfo* UnityEvent_1_AddListener_m4458_MethodInfo_var;
extern const MethodInfo* SecretUI_U3CStartU3Em__4B_m3156_MethodInfo_var;
extern "C" void SecretUI_Start_m3150 (SecretUI_t583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_1_t820_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(532);
		SecretUI_U3CStartU3Em__4A_m3155_MethodInfo_var = il2cpp_codegen_method_info_from_index(524);
		UnityAction_1__ctor_m4457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484173);
		UnityEvent_1_AddListener_m4458_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484174);
		SecretUI_U3CStartU3Em__4B_m3156_MethodInfo_var = il2cpp_codegen_method_info_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t584 * L_0 = (__this->___levelInputField_4);
		NullCheck(L_0);
		SubmitEvent_t819 * L_1 = InputField_get_onEndEdit_m4456(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)SecretUI_U3CStartU3Em__4A_m3155_MethodInfo_var };
		UnityAction_1_t820 * L_3 = (UnityAction_1_t820 *)il2cpp_codegen_object_new (UnityAction_1_t820_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4457(L_3, __this, L_2, /*hidden argument*/UnityAction_1__ctor_m4457_MethodInfo_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m4458(L_1, L_3, /*hidden argument*/UnityEvent_1_AddListener_m4458_MethodInfo_var);
		InputField_t584 * L_4 = (__this->___debugFlagsInputField_5);
		NullCheck(L_4);
		SubmitEvent_t819 * L_5 = InputField_get_onEndEdit_m4456(L_4, /*hidden argument*/NULL);
		IntPtr_t L_6 = { (void*)SecretUI_U3CStartU3Em__4B_m3156_MethodInfo_var };
		UnityAction_1_t820 * L_7 = (UnityAction_1_t820 *)il2cpp_codegen_object_new (UnityAction_1_t820_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4457(L_7, __this, L_6, /*hidden argument*/UnityAction_1__ctor_m4457_MethodInfo_var);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m4458(L_5, L_7, /*hidden argument*/UnityEvent_1_AddListener_m4458_MethodInfo_var);
		return;
	}
}
// System.Void SecretUI::ApplyLevelInput()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ApplyLevelInput_m3151 (SecretUI_t583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		InputField_t584 * L_0 = (__this->___levelInputField_4);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m4459(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		int32_t L_2 = Utilities_ParseIntWithDefault_m3838(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		GameLevelState_t660 * L_4 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameLevelState_SetGameLevel_m3610(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void SecretUI::ToggleVisibility()
extern "C" void SecretUI_ToggleVisibility_m3152 (SecretUI_t583 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___inputs_3);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m4460(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___inputs_3);
		NullCheck(L_2);
		GameObject_SetActive_m4172(L_2, 0, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_0021:
	{
		GameObject_t352 * L_3 = (__this->___inputs_3);
		NullCheck(L_3);
		GameObject_SetActive_m4172(L_3, 1, /*hidden argument*/NULL);
		SecretUI_UpdateInputs_m3149(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void SecretUI::ApplyDebugFlags()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void SecretUI_ApplyDebugFlags_m3153 (SecretUI_t583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		InputField_t584 * L_0 = (__this->___debugFlagsInputField_5);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m4459(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		int32_t L_2 = Utilities_ParseIntWithDefault_m3838(NULL /*static, unused*/, L_1, (-1), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		DebugConfig_t658 * L_4 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		DebugConfig_SetDebugFlags_m3595(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void SecretUI::DebugShowSharing()
extern "C" void SecretUI_DebugShowSharing_m3154 (SecretUI_t583 * __this, const MethodInfo* method)
{
	{
		SecretUI_LaunchShareWidget_m3146(NULL /*static, unused*/, ((int32_t)100), 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::<Start>m__4A(System.String)
extern "C" void SecretUI_U3CStartU3Em__4A_m3155 (SecretUI_t583 * __this, String_t* p0, const MethodInfo* method)
{
	{
		SecretUI_ApplyLevelInput_m3151(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::<Start>m__4B(System.String)
extern "C" void SecretUI_U3CStartU3Em__4B_m3156 (SecretUI_t583 * __this, String_t* p0, const MethodInfo* method)
{
	{
		SecretUI_ApplyDebugFlags_m3153(__this, /*hidden argument*/NULL);
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



// System.Void SizeCamera/CameraConfiguredHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CameraConfiguredHandler__ctor_m3157 (CameraConfiguredHandler_t585 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SizeCamera/CameraConfiguredHandler::Invoke()
extern "C" void CameraConfiguredHandler_Invoke_m3158 (CameraConfiguredHandler_t585 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraConfiguredHandler_Invoke_m3158((CameraConfiguredHandler_t585 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_CameraConfiguredHandler_t585(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SizeCamera/CameraConfiguredHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CameraConfiguredHandler_BeginInvoke_m3159 (CameraConfiguredHandler_t585 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SizeCamera/CameraConfiguredHandler::EndInvoke(System.IAsyncResult)
extern "C" void CameraConfiguredHandler_EndInvoke_m3160 (CameraConfiguredHandler_t585 * __this, Object_t * ___result, const MethodInfo* method)
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

// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCamera.h"
// ZoomCamera
#include "AssemblyU2DCSharp_ZoomCameraMethodDeclarations.h"
struct Component_t786;
struct Camera_t532;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t532_m4461(__this, method) (( Camera_t532 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)
struct Component_t786;
struct ZoomCamera_t586;
// Declaration !!0 UnityEngine.Component::GetComponent<ZoomCamera>()
// !!0 UnityEngine.Component::GetComponent<ZoomCamera>()
#define Component_GetComponent_TisZoomCamera_t586_m4462(__this, method) (( ZoomCamera_t586 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m3161 (SizeCamera_t587 * __this, const MethodInfo* method)
{
	{
		__this->___minWorldAspectRatio_2 = (1.33333337f);
		__this->___targetWorldHalfHeight_3 = (5.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::add_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern TypeInfo* CameraConfiguredHandler_t585_il2cpp_TypeInfo_var;
extern "C" void SizeCamera_add_CameraConfigured_m3162 (SizeCamera_t587 * __this, CameraConfiguredHandler_t585 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraConfiguredHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraConfiguredHandler_t585 * L_0 = (__this->___CameraConfigured_11);
		CameraConfiguredHandler_t585 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CameraConfigured_11 = ((CameraConfiguredHandler_t585 *)Castclass(L_2, CameraConfiguredHandler_t585_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SizeCamera::remove_CameraConfigured(SizeCamera/CameraConfiguredHandler)
extern TypeInfo* CameraConfiguredHandler_t585_il2cpp_TypeInfo_var;
extern "C" void SizeCamera_remove_CameraConfigured_m3163 (SizeCamera_t587 * __this, CameraConfiguredHandler_t585 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CameraConfiguredHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraConfiguredHandler_t585 * L_0 = (__this->___CameraConfigured_11);
		CameraConfiguredHandler_t585 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___CameraConfigured_11 = ((CameraConfiguredHandler_t585 *)Castclass(L_2, CameraConfiguredHandler_t585_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Single SizeCamera::get_finalActualWorldHalfHeight()
extern "C" float SizeCamera_get_finalActualWorldHalfHeight_m3164 (SizeCamera_t587 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CfinalActualWorldHalfHeightU3Ek__BackingField_12);
		return L_0;
	}
}
// System.Void SizeCamera::set_finalActualWorldHalfHeight(System.Single)
extern "C" void SizeCamera_set_finalActualWorldHalfHeight_m3165 (SizeCamera_t587 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CfinalActualWorldHalfHeightU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void SizeCamera::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisZoomCamera_t586_m4462_MethodInfo_var;
extern "C" void SizeCamera_Awake_m3166 (SizeCamera_t587 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Component_GetComponent_TisZoomCamera_t586_m4462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484177);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___finalAspectRatio_10 = (0.0f);
		Camera_t532 * L_0 = Component_GetComponent_TisCamera_t532_m4461(__this, /*hidden argument*/Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var);
		__this->___myCamera_7 = L_0;
		ZoomCamera_t586 * L_1 = Component_GetComponent_TisZoomCamera_t586_m4462(__this, /*hidden argument*/Component_GetComponent_TisZoomCamera_t586_m4462_MethodInfo_var);
		__this->___myZoomCamera_8 = L_1;
		return;
	}
}
// System.Void SizeCamera::UpdateCameraSize()
extern "C" void SizeCamera_UpdateCameraSize_m3167 (SizeCamera_t587 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_t586 * L_0 = (__this->___myZoomCamera_8);
		bool L_1 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ZoomCamera_t586 * L_2 = (__this->___myZoomCamera_8);
		NullCheck(L_2);
		ZoomCamera_UpdateCameraSize_m3249(L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		Camera_t532 * L_3 = (__this->___myCamera_7);
		float L_4 = SizeCamera_get_finalActualWorldHalfHeight_m3164(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Camera_set_orthographicSize_m4463(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Single SizeCamera::GetAspectRatio()
extern "C" float SizeCamera_GetAspectRatio_m3168 (SizeCamera_t587 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___finalAspectRatio_10);
		return L_0;
	}
}
// System.Void SizeCamera::Configure()
extern "C" void SizeCamera_Configure_m3169 (SizeCamera_t587 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t523  V_8 = {0};
	Rect_t719  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___screenPixelsTopCameraSlop_4);
		float L_2 = (__this->___screenPixelsBottomToIgnore_5);
		V_0 = ((float)((float)(((float)L_0))-(float)((float)((float)L_1+(float)L_2))));
		int32_t L_3 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___screenPixelsBottomToIgnore_5);
		V_1 = ((float)((float)(((float)L_3))-(float)L_4));
		int32_t L_5 = Screen_get_width_m3877(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		SizeCamera_set_finalActualWorldHalfHeight_m3165(__this, L_20, /*hidden argument*/NULL);
		SizeCamera_UpdateCameraSize_m3167(__this, /*hidden argument*/NULL);
		float L_21 = V_5;
		float L_22 = V_2;
		V_6 = ((float)((float)((float)((float)(2.0f)*(float)L_21))-(float)((float)((float)(2.0f)*(float)L_22))));
		float L_23 = V_6;
		V_7 = ((float)((float)L_23/(float)(2.0f)));
		float L_24 = V_7;
		Vector3__ctor_m4250((&V_8), (0.0f), L_24, (0.0f), /*hidden argument*/NULL);
		Camera_t532 * L_25 = (__this->___myCamera_7);
		NullCheck(L_25);
		Transform_t406 * L_26 = Component_get_transform_m4252(L_25, /*hidden argument*/NULL);
		Vector3_t523  L_27 = V_8;
		NullCheck(L_26);
		Vector3_t523  L_28 = Transform_TransformVector_m4464(L_26, L_27, /*hidden argument*/NULL);
		V_8 = L_28;
		Camera_t532 * L_29 = (__this->___myCamera_7);
		NullCheck(L_29);
		Transform_t406 * L_30 = Component_get_transform_m4252(L_29, /*hidden argument*/NULL);
		Camera_t532 * L_31 = (__this->___myCamera_7);
		NullCheck(L_31);
		Transform_t406 * L_32 = Component_get_transform_m4252(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t523  L_33 = Transform_get_localPosition_m4400(L_32, /*hidden argument*/NULL);
		Vector3_t523  L_34 = V_8;
		Vector3_t523  L_35 = Vector3_op_Addition_m4401(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m4402(L_30, L_35, /*hidden argument*/NULL);
		Camera_t532 * L_36 = (__this->___myCamera_7);
		NullCheck(L_36);
		Rect_t719  L_37 = Camera_get_rect_m4413(L_36, /*hidden argument*/NULL);
		V_9 = L_37;
		float L_38 = (__this->___screenPixelsBottomToIgnore_5);
		int32_t L_39 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_10 = ((float)((float)L_38/(float)(((float)L_39))));
		float L_40 = V_1;
		int32_t L_41 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_11 = ((float)((float)L_40/(float)(((float)L_41))));
		Rect_set_width_m4465((&V_9), (1.0f), /*hidden argument*/NULL);
		float L_42 = V_11;
		Rect_set_height_m4466((&V_9), L_42, /*hidden argument*/NULL);
		Rect_set_x_m4467((&V_9), (0.0f), /*hidden argument*/NULL);
		float L_43 = V_10;
		Rect_set_y_m4468((&V_9), L_43, /*hidden argument*/NULL);
		Camera_t532 * L_44 = (__this->___myCamera_7);
		Rect_t719  L_45 = V_9;
		NullCheck(L_44);
		Camera_set_rect_m4469(L_44, L_45, /*hidden argument*/NULL);
		CameraConfiguredHandler_t585 * L_46 = (__this->___CameraConfigured_11);
		if (!L_46)
		{
			goto IL_015f;
		}
	}
	{
		CameraConfiguredHandler_t585 * L_47 = (__this->___CameraConfigured_11);
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



// System.Void SlowByCollision::.ctor()
extern "C" void SlowByCollision__ctor_m3170 (SlowByCollision_t588 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerEnter2D_m3171 (SlowByCollision_t588 * __this, Collider2D_t724 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t724 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3173(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void SlowByCollision_OnTriggerStay2D_m3172 (SlowByCollision_t588 * __this, Collider2D_t724 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t724 * L_0 = ___other;
		SlowByCollision_HandleCollision_m3173(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlowByCollision::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var;
extern "C" void SlowByCollision_HandleCollision_m3173 (SlowByCollision_t588 * __this, Collider2D_t724 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t517 * V_0 = {0};
	{
		Collider2D_t724 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4411(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1064, /*hidden argument*/NULL);
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
		Collider2D_t724 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		MouseMove_t517 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t517 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m2939(L_6, /*hidden argument*/NULL);
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
		MouseMove_t517 * L_8 = V_0;
		NullCheck(L_8);
		MouseMove_OnFartedUpon_m2951(L_8, /*hidden argument*/NULL);
		return;
	}
}
// SocialHelper/<DebugScoreAndAchievement>c__Iterator15
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<DebugScoreAndAchievement>c__Iterator15
#include "AssemblyU2DCSharp_SocialHelper_U3CDebugScoreAndAchievementU3MethodDeclarations.h"



// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator15::.ctor()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator15__ctor_m3174 (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3175 (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SocialHelper/<DebugScoreAndAchievement>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDebugScoreAndAchievementU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m3176 (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean SocialHelper/<DebugScoreAndAchievement>c__Iterator15::MoveNext()
extern TypeInfo* WaitForSeconds_t810_il2cpp_TypeInfo_var;
extern "C" bool U3CDebugScoreAndAchievementU3Ec__Iterator15_MoveNext_m3177 (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1089, /*hidden argument*/NULL);
		WaitForSeconds_t810 * L_2 = (WaitForSeconds_t810 *)il2cpp_codegen_object_new (WaitForSeconds_t810_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4355(L_2, (2.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0065;
	}

IL_0047:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1090, /*hidden argument*/NULL);
		SocialHelper_CustomReportAchievement_m3185(NULL /*static, unused*/, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
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
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator15::Dispose()
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator15_Dispose_m3178 (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SocialHelper/<DebugScoreAndAchievement>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDebugScoreAndAchievementU3Ec__Iterator15_Reset_m3179 (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * __this, const MethodInfo* method)
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
// SocialHelper/<Authenticate>c__AnonStorey1B
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStor.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<Authenticate>c__AnonStorey1B
#include "AssemblyU2DCSharp_SocialHelper_U3CAuthenticateU3Ec__AnonStorMethodDeclarations.h"

// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"


// System.Void SocialHelper/<Authenticate>c__AnonStorey1B::.ctor()
extern "C" void U3CAuthenticateU3Ec__AnonStorey1B__ctor_m3180 (U3CAuthenticateU3Ec__AnonStorey1B_t590 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<Authenticate>c__AnonStorey1B::<>m__4C(System.Boolean)
extern TypeInfo* GameCenterPlatform_t821_il2cpp_TypeInfo_var;
extern "C" void U3CAuthenticateU3Ec__AnonStorey1B_U3CU3Em__4C_m3181 (U3CAuthenticateU3Ec__AnonStorey1B_t590 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
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
		int32_t L_1 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t821_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m4470(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
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
// SocialHelper/<RecordAchievement>c__AnonStorey1C
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
// SocialHelper/<RecordAchievement>c__AnonStorey1C
#include "AssemblyU2DCSharp_SocialHelper_U3CRecordAchievementU3Ec__AnoMethodDeclarations.h"



// System.Void SocialHelper/<RecordAchievement>c__AnonStorey1C::.ctor()
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1C__ctor_m3182 (U3CRecordAchievementU3Ec__AnonStorey1C_t591 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper/<RecordAchievement>c__AnonStorey1C::<>m__4E(System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void U3CRecordAchievementU3Ec__AnonStorey1C_U3CU3Em__4E_m3183 (U3CRecordAchievementU3Ec__AnonStorey1C_t591 * __this, bool ___success, const MethodInfo* method)
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
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1092, L_0, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = ___success;
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1093, L_4, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
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
extern "C" void SocialHelper__ctor_m3184 (SocialHelper_t592 * __this, const MethodInfo* method)
{
	{
		__this->___leaderboardID_2 = (String_t*) &_stringLiteral1085;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SocialHelper::CustomReportAchievement(System.String)
extern "C" {int32_t DEFAULT_CALL CustomReportAchievement(char*);}
extern "C" bool SocialHelper_CustomReportAchievement_m3185 (Object_t * __this /* static, unused */, String_t* ___achievementID, const MethodInfo* method)
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
extern "C" bool SocialHelper_CustomClearAchivements_m3186 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_Awake_m3187 (SocialHelper_t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		int32_t L_0 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern TypeInfo* U3CAuthenticateU3Ec__AnonStorey1B_t590_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t822_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CAuthenticateU3Ec__AnonStorey1B_U3CU3Em__4C_m3181_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4079_MethodInfo_var;
extern "C" void SocialHelper_Authenticate_m3188 (SocialHelper_t592 * __this, Action_1_t277 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CAuthenticateU3Ec__AnonStorey1B_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(536);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		ILocalUser_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		U3CAuthenticateU3Ec__AnonStorey1B_U3CU3Em__4C_m3181_MethodInfo_var = il2cpp_codegen_method_info_from_index(530);
		Action_1__ctor_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CAuthenticateU3Ec__AnonStorey1B_t590 * V_0 = {0};
	{
		U3CAuthenticateU3Ec__AnonStorey1B_t590 * L_0 = (U3CAuthenticateU3Ec__AnonStorey1B_t590 *)il2cpp_codegen_object_new (U3CAuthenticateU3Ec__AnonStorey1B_t590_il2cpp_TypeInfo_var);
		U3CAuthenticateU3Ec__AnonStorey1B__ctor_m3180(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAuthenticateU3Ec__AnonStorey1B_t590 * L_1 = V_0;
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
		Object_t * L_4 = Social_get_localUser_m4471(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CAuthenticateU3Ec__AnonStorey1B_t590 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)U3CAuthenticateU3Ec__AnonStorey1B_U3CU3Em__4C_m3181_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4079(L_7, L_5, L_6, /*hidden argument*/Action_1__ctor_m4079_MethodInfo_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t277 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ILocalUser::Authenticate(System.Action`1<System.Boolean>) */, ILocalUser_t822_il2cpp_TypeInfo_var, L_4, L_7);
		goto IL_003f;
	}

IL_0033:
	{
		U3CAuthenticateU3Ec__AnonStorey1B_t590 * L_8 = V_0;
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
extern TypeInfo* U3CDebugScoreAndAchievementU3Ec__Iterator15_t589_il2cpp_TypeInfo_var;
extern "C" Object_t * SocialHelper_DebugScoreAndAchievement_m3189 (SocialHelper_t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator15_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(538);
		s_Il2CppMethodIntialized = true;
	}
	U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * V_0 = {0};
	{
		U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * L_0 = (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 *)il2cpp_codegen_object_new (U3CDebugScoreAndAchievementU3Ec__Iterator15_t589_il2cpp_TypeInfo_var);
		U3CDebugScoreAndAchievementU3Ec__Iterator15__ctor_m3174(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDebugScoreAndAchievementU3Ec__Iterator15_t589 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SocialHelper::ClearAchievements()
extern "C" void SocialHelper_ClearAchievements_m3190 (SocialHelper_t592 * __this, const MethodInfo* method)
{
	{
		SocialHelper_CustomClearAchivements_m3186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ReportScore(System.Int32)
extern TypeInfo* ILocalUser_t822_il2cpp_TypeInfo_var;
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CReportScoreU3Em__4D_m3196_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4079_MethodInfo_var;
extern "C" void SocialHelper_ReportScore_m3191 (SocialHelper_t592 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CReportScoreU3Em__4D_m3196_MethodInfo_var = il2cpp_codegen_method_info_from_index(531);
		Action_1__ctor_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B4_0 = {0};
	int64_t G_B4_1 = 0;
	String_t* G_B3_0 = {0};
	int64_t G_B3_1 = 0;
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1086, /*hidden argument*/NULL);
		bool L_0 = (__this->___socialHelperEnabled_4);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		Object_t * L_1 = Social_get_localUser_m4471(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t822_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_3 = ___score;
		String_t* L_4 = (__this->___leaderboardID_2);
		Action_1_t277 * L_5 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
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
		IntPtr_t L_6 = { (void*)SocialHelper_U3CReportScoreU3Em__4D_m3196_MethodInfo_var };
		Action_1_t277 * L_7 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4079(L_7, NULL, L_6, /*hidden argument*/Action_1__ctor_m4079_MethodInfo_var);
		((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_7;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		Action_1_t277 * L_8 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		Social_ReportScore_m4472(NULL /*static, unused*/, G_B4_1, G_B4_0, L_8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void SocialHelper::RecordAchievement(System.String)
extern TypeInfo* U3CRecordAchievementU3Ec__AnonStorey1C_t591_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t822_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRecordAchievementU3Ec__AnonStorey1C_U3CU3Em__4E_m3183_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4079_MethodInfo_var;
extern "C" void SocialHelper_RecordAchievement_m3192 (SocialHelper_t592 * __this, String_t* ___achievementID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRecordAchievementU3Ec__AnonStorey1C_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(539);
		ILocalUser_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		U3CRecordAchievementU3Ec__AnonStorey1C_U3CU3Em__4E_m3183_MethodInfo_var = il2cpp_codegen_method_info_from_index(532);
		Action_1__ctor_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	U3CRecordAchievementU3Ec__AnonStorey1C_t591 * V_0 = {0};
	{
		U3CRecordAchievementU3Ec__AnonStorey1C_t591 * L_0 = (U3CRecordAchievementU3Ec__AnonStorey1C_t591 *)il2cpp_codegen_object_new (U3CRecordAchievementU3Ec__AnonStorey1C_t591_il2cpp_TypeInfo_var);
		U3CRecordAchievementU3Ec__AnonStorey1C__ctor_m3182(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRecordAchievementU3Ec__AnonStorey1C_t591 * L_1 = V_0;
		String_t* L_2 = ___achievementID;
		NullCheck(L_1);
		L_1->___achievementID_0 = L_2;
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1087, /*hidden argument*/NULL);
		bool L_3 = (__this->___socialHelperEnabled_4);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		Object_t * L_4 = Social_get_localUser_m4471(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t822_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		U3CRecordAchievementU3Ec__AnonStorey1C_t591 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___achievementID_0);
		SocialHelper_CustomReportAchievement_m3185(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_004d:
	{
		U3CRecordAchievementU3Ec__AnonStorey1C_t591 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___achievementID_0);
		U3CRecordAchievementU3Ec__AnonStorey1C_t591 * L_11 = V_0;
		IntPtr_t L_12 = { (void*)U3CRecordAchievementU3Ec__AnonStorey1C_U3CU3Em__4E_m3183_MethodInfo_var };
		Action_1_t277 * L_13 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4079(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m4079_MethodInfo_var);
		Social_ReportProgress_m4473(NULL /*static, unused*/, L_10, (100.0), L_13, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean SocialHelper::IsEnabled()
extern "C" bool SocialHelper_IsEnabled_m3193 (SocialHelper_t592 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___socialHelperEnabled_4);
		return L_0;
	}
}
// System.Void SocialHelper::ShowLeaderBoard()
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowLeaderBoardU3Em__4F_m3197_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4079_MethodInfo_var;
extern "C" void SocialHelper_ShowLeaderBoard_m3194 (SocialHelper_t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowLeaderBoardU3Em__4F_m3197_MethodInfo_var = il2cpp_codegen_method_info_from_index(533);
		Action_1__ctor_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
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
		IntPtr_t L_1 = { (void*)SocialHelper_U3CShowLeaderBoardU3Em__4F_m3197_MethodInfo_var };
		Action_1_t277 * L_2 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4079(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m4079_MethodInfo_var);
		SocialHelper_Authenticate_m3188(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::ShowAchievements()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* SocialHelper_U3CShowAchievementsU3Em__50_m3198_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4079_MethodInfo_var;
extern "C" void SocialHelper_ShowAchievements_m3195 (SocialHelper_t592 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SocialHelper_U3CShowAchievementsU3Em__50_m3198_MethodInfo_var = il2cpp_codegen_method_info_from_index(534);
		Action_1__ctor_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t592 * G_B4_0 = {0};
	SocialHelper_t592 * G_B3_0 = {0};
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
		Action_1_t277 * L_1 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B3_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0025;
		}
	}
	{
		IntPtr_t L_2 = { (void*)SocialHelper_U3CShowAchievementsU3Em__50_m3198_MethodInfo_var };
		Action_1_t277 * L_3 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4079(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m4079_MethodInfo_var);
		((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_3;
		G_B4_0 = G_B3_0;
	}

IL_0025:
	{
		Action_1_t277 * L_4 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B4_0);
		SocialHelper_Authenticate_m3188(G_B4_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ReportScore>m__4D(System.Boolean)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CReportScoreU3Em__4D_m3196 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
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
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1088, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialHelper::<ShowLeaderBoard>m__4F(System.Boolean)
extern TypeInfo* GameCenterPlatform_t821_il2cpp_TypeInfo_var;
extern "C" void SocialHelper_U3CShowLeaderBoardU3Em__4F_m3197 (SocialHelper_t592 * __this, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t821_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(535);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = (__this->___leaderboardID_2);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t821_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowLeaderboardUI_m4474(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void SocialHelper::<ShowAchievements>m__50(System.Boolean)
extern "C" void SocialHelper_U3CShowAchievementsU3Em__50_m3198 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	{
		Social_ShowAchievementsUI_m4475(NULL /*static, unused*/, /*hidden argument*/NULL);
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

// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharing.h"
// TwitterSharing
#include "AssemblyU2DCSharp_TwitterSharingMethodDeclarations.h"


// System.Void SocialMediaButtons::.ctor()
extern "C" void SocialMediaButtons__ctor_m3199 (SocialMediaButtons_t593 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::LaunchShareWidget(System.Int32,System.Boolean)
extern "C" void SocialMediaButtons_LaunchShareWidget_m3200 (Object_t * __this /* static, unused */, int32_t ___score, bool ___isHighScore, const MethodInfo* method)
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
extern "C" void SocialMediaButtons_Start_m3201 (SocialMediaButtons_t593 * __this, const MethodInfo* method)
{
	{
		SocialMediaButtons_UpdateButtonAvailability_m3202(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::UpdateButtonAvailability()
extern "C" void SocialMediaButtons_UpdateButtonAvailability_m3202 (SocialMediaButtons_t593 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_001b;
		}
	}
	{
		DebugConfig_t658 * L_1 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = DebugConfig_IsDebugFlagSet_m3594(L_1, 1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}

IL_001b:
	{
		Button_t526 * L_3 = (__this->___fbButton_2);
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m4172(L_4, 0, /*hidden argument*/NULL);
		Button_t526 * L_5 = (__this->___twitterButton_3);
		NullCheck(L_5);
		GameObject_t352 * L_6 = Component_get_gameObject_m3972(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m4172(L_6, 0, /*hidden argument*/NULL);
		Button_t526 * L_7 = (__this->___shareButton_4);
		NullCheck(L_7);
		GameObject_t352 * L_8 = Component_get_gameObject_m3972(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_m4172(L_8, 1, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0053:
	{
		Button_t526 * L_9 = (__this->___fbButton_2);
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3972(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m4172(L_10, 1, /*hidden argument*/NULL);
		Button_t526 * L_11 = (__this->___twitterButton_3);
		NullCheck(L_11);
		GameObject_t352 * L_12 = Component_get_gameObject_m3972(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m4172(L_12, 1, /*hidden argument*/NULL);
		Button_t526 * L_13 = (__this->___shareButton_4);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3972(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m4172(L_14, 0, /*hidden argument*/NULL);
	}

IL_0086:
	{
		return;
	}
}
// System.Void SocialMediaButtons::ShareInShareWidget()
extern "C" void SocialMediaButtons_ShareInShareWidget_m3203 (SocialMediaButtons_t593 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3720(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayerStats_t509 * L_2 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_get_gameScore_m3699(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		SocialMediaButtons_LaunchShareWidget_m3200(NULL /*static, unused*/, L_4, ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::ShareOnFB()
extern TypeInfo* FacebookSharing_t520_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_ShareOnFB_m3204 (SocialMediaButtons_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t520_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3720(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayerStats_t509 * L_2 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_get_gameScore_m3699(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		FacebookSharing_t520 * L_4 = ((FacebookSharing_t520_StaticFields*)FacebookSharing_t520_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_4);
		FacebookSharing_ShareScore_m2844(L_4, L_5, ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocialMediaButtons::ShareOnTwitter()
extern TypeInfo* TwitterSharing_t601_il2cpp_TypeInfo_var;
extern "C" void SocialMediaButtons_ShareOnTwitter_m3205 (SocialMediaButtons_t593 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_get_gameScore_m3699(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TwitterSharing_t601 * L_2 = ((TwitterSharing_t601_StaticFields*)TwitterSharing_t601_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		TwitterSharing_ShareScore_m3227(L_2, L_3, /*hidden argument*/NULL);
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



// System.Void TimedFader::.ctor()
extern "C" void TimedFader__ctor_m3206 (TimedFader_t595 * __this, const MethodInfo* method)
{
	{
		__this->___staticLifespan_2 = (0.5f);
		__this->___fadingLifespan_3 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedFader::Awake()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t594_m4393_MethodInfo_var;
extern "C" void TimedFader_Awake_m3207 (TimedFader_t595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t594_m4393_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484134);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_5 = L_0;
		SpriteRenderer_t594 * L_1 = Component_GetComponent_TisSpriteRenderer_t594_m4393(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t594_m4393_MethodInfo_var);
		__this->___spriteRenderer_4 = L_1;
		return;
	}
}
// System.Void TimedFader::Update()
extern "C" void TimedFader_Update_m3208 (TimedFader_t595 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		SpriteRenderer_t594 * L_9 = (__this->___spriteRenderer_4);
		float L_10 = V_2;
		Color_t325  L_11 = {0};
		Color__ctor_m4376(&L_11, (1.0f), (1.0f), (1.0f), ((float)((float)(1.0f)-(float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_9);
		SpriteRenderer_set_color_m4476(L_9, L_11, /*hidden argument*/NULL);
		float L_12 = V_2;
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		GameObject_t352 * L_13 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
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
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElementMethodDeclarations.h"
// TimerWidgetConfig
#include "AssemblyU2DCSharp_TimerWidgetConfigMethodDeclarations.h"


// System.Void TimerWidget::.ctor()
extern "C" void TimerWidget__ctor_m3209 (TimerWidget_t596 * __this, const MethodInfo* method)
{
	{
		__this->___actualCanvasSizePixels_9 = (100.0f);
		WorldRelativeGUIElement__ctor_m3848(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidget::Initialize()
extern "C" void TimerWidget_Initialize_m3210 (TimerWidget_t596 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidget::Awake()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var;
extern "C" void TimerWidget_Awake_m3211 (TimerWidget_t596 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4477(NULL /*static, unused*/, (String_t*) &_stringLiteral1094, /*hidden argument*/NULL);
		__this->___worldCanvasGameObject_7 = L_0;
		GameObject_t352 * L_1 = (__this->___worldCanvasGameObject_7);
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3849(__this, L_1, /*hidden argument*/NULL);
		V_0 = (0.8f);
		float L_2 = V_0;
		float L_3 = WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3851(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = V_1;
		float L_5 = (__this->___actualCanvasSizePixels_9);
		__this->___desiredScaleNormal_10 = ((float)((float)L_4/(float)L_5));
		float L_6 = (__this->___desiredScaleNormal_10);
		__this->___desiredScaleBig_11 = ((float)((float)L_6*(float)(2.0f)));
		RectTransform_t573 * L_7 = Component_GetComponent_TisRectTransform_t573_m4449(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		__this->___rectTransform_8 = L_7;
		return;
	}
}
// System.Void TimerWidget::Start()
extern "C" void TimerWidget_Start_m3212 (TimerWidget_t596 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidget::Update()
extern TypeInfo* TimerWidgetConfig_t599_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void TimerWidget_Update_m3213 (TimerWidget_t596 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerWidgetConfig_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___startTime_14);
		V_0 = ((float)((float)L_0-(float)L_1));
		float L_2 = V_0;
		float L_3 = (__this->___lifespan_13);
		V_1 = ((float)((float)L_2/(float)L_3));
		float L_4 = V_1;
		TimerWidgetConfig_t599 * L_5 = ((TimerWidgetConfig_t599_StaticFields*)TimerWidgetConfig_t599_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_5);
		SpriteU5BU5D_t598* L_6 = (L_5->___frames_2);
		NullCheck(L_6);
		V_2 = ((float)((float)L_4*(float)(((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1))))));
		float L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_8 = floorf(L_7);
		V_3 = (((int32_t)L_8));
		int32_t L_9 = V_3;
		TimerWidgetConfig_t599 * L_10 = ((TimerWidgetConfig_t599_StaticFields*)TimerWidgetConfig_t599_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_10);
		SpriteU5BU5D_t598* L_11 = (L_10->___frames_2);
		NullCheck(L_11);
		int32_t L_12 = Mathf_Min_m4478(NULL /*static, unused*/, L_9, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_12;
		Image_t499 * L_13 = (__this->___image_15);
		TimerWidgetConfig_t599 * L_14 = ((TimerWidgetConfig_t599_StaticFields*)TimerWidgetConfig_t599_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_14);
		SpriteU5BU5D_t598* L_15 = (L_14->___frames_2);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck(L_13);
		Image_set_sprite_m4377(L_13, (*(Sprite_t521 **)(Sprite_t521 **)SZArrayLdElema(L_15, L_17)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidget::Configure(System.Single,UnityEngine.Vector3)
extern "C" void TimerWidget_Configure_m3214 (TimerWidget_t596 * __this, float ___lifespan, Vector3_t523  ___worldPosition, const MethodInfo* method)
{
	{
		float L_0 = ___lifespan;
		__this->___lifespan_13 = L_0;
		Vector3_t523  L_1 = ___worldPosition;
		TimerWidget_UpdatePosition_m3215(__this, L_1, /*hidden argument*/NULL);
		float L_2 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_14 = L_2;
		return;
	}
}
// System.Void TimerWidget::UpdatePosition(UnityEngine.Vector3)
extern "C" void TimerWidget_UpdatePosition_m3215 (TimerWidget_t596 * __this, Vector3_t523  ___worldLocation, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	Vector3_t523  V_1 = {0};
	{
		Vector3_t523  L_0 = ___worldLocation;
		Vector3_t523  L_1 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3852(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RectTransform_t573 * L_2 = (__this->___rectTransform_8);
		Vector3_t523  L_3 = V_0;
		NullCheck(L_2);
		Transform_set_localPosition_m4402(L_2, L_3, /*hidden argument*/NULL);
		BoostConfig_t493 * L_4 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = BoostConfig_get_activeBoost_m2785(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0041;
		}
	}
	{
		float L_6 = (__this->___desiredScaleBig_11);
		float L_7 = (__this->___desiredScaleBig_11);
		Vector3__ctor_m4250((&V_1), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0041:
	{
		float L_8 = (__this->___desiredScaleNormal_10);
		float L_9 = (__this->___desiredScaleNormal_10);
		Vector3__ctor_m4250((&V_1), L_8, L_9, (1.0f), /*hidden argument*/NULL);
	}

IL_0059:
	{
		RectTransform_t573 * L_10 = (__this->___rectTransform_8);
		Vector3_t523  L_11 = V_1;
		NullCheck(L_10);
		Transform_set_localScale_m4261(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void TimerWidgetConfig::.ctor()
extern "C" void TimerWidgetConfig__ctor_m3216 (TimerWidgetConfig_t599 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerWidgetConfig::Awake()
extern TypeInfo* TimerWidgetConfig_t599_il2cpp_TypeInfo_var;
extern "C" void TimerWidgetConfig_Awake_m3217 (TimerWidgetConfig_t599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerWidgetConfig_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(541);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimerWidgetConfig_t599_StaticFields*)TimerWidgetConfig_t599_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.Void TimerWidgetConfig::Start()
extern "C" void TimerWidgetConfig_Start_m3218 (TimerWidgetConfig_t599 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerWidgetConfig::Update()
extern "C" void TimerWidgetConfig_Update_m3219 (TimerWidgetConfig_t599 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// TipDialog
#include "AssemblyU2DCSharp_TipDialog.h"
#ifndef _MSC_VER
#else
#endif
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"

// UnityEngine.UI.LayoutUtility
#include "UnityEngine_UI_UnityEngine_UI_LayoutUtilityMethodDeclarations.h"


// System.Void TipDialog::.ctor()
extern "C" void TipDialog__ctor_m3220 (TipDialog_t600 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::Awake()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var;
extern "C" void TipDialog_Awake_m3221 (TipDialog_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_t719  V_2 = {0};
	Rect_t719  V_3 = {0};
	{
		RectTransform_t573 * L_0 = Component_GetComponent_TisRectTransform_t573_m4449(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		__this->___myRectTransform_3 = L_0;
		Text_t498 * L_1 = (__this->___dialogText_2);
		NullCheck(L_1);
		RectTransform_t573 * L_2 = Component_GetComponent_TisRectTransform_t573_m4449(L_1, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		__this->___textRectTransform_4 = L_2;
		RectTransform_t573 * L_3 = (__this->___textRectTransform_4);
		NullCheck(L_3);
		Rect_t719  L_4 = RectTransform_get_rect_m4382(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_height_m4254((&V_2), /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t573 * L_6 = (__this->___myRectTransform_3);
		NullCheck(L_6);
		Rect_t719  L_7 = RectTransform_get_rect_m4382(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = Rect_get_height_m4254((&V_3), /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = V_1;
		float L_10 = V_0;
		__this->___calculatedFudge_5 = ((float)((float)L_9-(float)L_10));
		return;
	}
}
// System.Void TipDialog::CloseDialog()
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern "C" void TipDialog_CloseDialog_m3222 (TipDialog_t600 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t610 * L_0 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_1 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m3277(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::ConfigureDialog(System.String)
extern "C" void TipDialog_ConfigureDialog_m3223 (TipDialog_t600 * __this, String_t* ___message, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t719  V_1 = {0};
	{
		Text_t498 * L_0 = (__this->___dialogText_2);
		String_t* L_1 = ___message;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		RectTransform_t573 * L_2 = (__this->___textRectTransform_4);
		float L_3 = LayoutUtility_GetPreferredHeight_m4479(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RectTransform_t573 * L_4 = (__this->___myRectTransform_3);
		RectTransform_t573 * L_5 = (__this->___myRectTransform_3);
		NullCheck(L_5);
		Rect_t719  L_6 = RectTransform_get_rect_m4382(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = Rect_get_width_m4253((&V_1), /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9 = (__this->___calculatedFudge_5);
		Vector2_t110  L_10 = {0};
		Vector2__ctor_m4446(&L_10, L_7, ((float)((float)L_8+(float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_m4447(L_4, L_10, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// TweakableSlider
#include "AssemblyU2DCSharp_TweakableSliderMethodDeclarations.h"



// System.Void TweakableSlider::.ctor()
extern "C" void TweakableSlider__ctor_m3224 (TweakableSlider_t547 * __this, const MethodInfo* method)
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


// System.Void TwitterSharing::.ctor()
extern "C" void TwitterSharing__ctor_m3225 (TwitterSharing_t601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::Awake()
extern TypeInfo* TwitterSharing_t601_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_Awake_m3226 (TwitterSharing_t601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TwitterSharing_t601_StaticFields*)TwitterSharing_t601_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t364_il2cpp_TypeInfo_var);
		SPTwitter_t364 * L_0 = SPTwitter_get_instance_m1949(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void SPTwitter::Init() */, L_0);
		return;
	}
}
// System.Void TwitterSharing::ShareScore(System.Int32)
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScore_m3227 (TwitterSharing_t601 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1095, /*hidden argument*/NULL);
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
		TwitterSharing_ShareScoreInternal_m3229(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0025:
	{
		int32_t L_3 = ___score;
		TwitterSharing_ShareScoreThroughURLs_m3228(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreThroughURLs_m3228 (TwitterSharing_t601 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1096, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3829(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t75* L_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1097);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral1097;
		StringU5BU5D_t75* L_3 = L_2;
		String_t* L_4 = V_0;
		String_t* L_5 = WWW_EscapeURL_m4396(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1098);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral1098;
		StringU5BU5D_t75* L_7 = L_6;
		String_t* L_8 = WWW_EscapeURL_m4396(NULL /*static, unused*/, (String_t*) &_stringLiteral1023, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t75* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1099);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral1099;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m450(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_m408(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14 = WWW_EscapeURL_m4396(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1101, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17 = String_Replace_m3959(L_16, (String_t*) &_stringLiteral1102, (String_t*) &_stringLiteral1103, /*hidden argument*/NULL);
		V_2 = L_17;
		String_t* L_18 = V_2;
		String_t* L_19 = V_1;
		Object_t * L_20 = Utilities_LaunchAppOrWeb_m3833(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3935(__this, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t364_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreInternal_m3229 (TwitterSharing_t601 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		SPTwitter_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1104, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareMessageForScore_m3829(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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



// System.Void UseBoost::.ctor()
extern "C" void UseBoost__ctor_m3230 (UseBoost_t602 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UseBoost::Start()
extern "C" void UseBoost_Start_m3231 (UseBoost_t602 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t493 * L_0 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t509 * L_1 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void UseBoost::Use()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t496_m4380_MethodInfo_var;
extern "C" void UseBoost_Use_m3232 (UseBoost_t602 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t496_m4380_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484125);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t496 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t496 * L_1 = GameObject_GetComponent_TisBoostButton_t496_m4380(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t496_m4380_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t496 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2746(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PlayerStats_t509 * L_4 = (__this->___playerStats_3);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = PlayerStats_GetAvailableBoostCount_m3717(L_4, L_5, /*hidden argument*/NULL);
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
		PlayerStats_t509 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		PlayerStats_RemoveBoost_m3719(L_7, L_8, /*hidden argument*/NULL);
		BoostConfig_t493 * L_9 = (__this->___boostConfig_2);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		BoostConfig_ExecuteBoost_m2800(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// UsedTrapRelay/UsedTrapEventHandler
#include "AssemblyU2DCSharp_UsedTrapRelay_UsedTrapEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// UsedTrapRelay/UsedTrapEventHandler
#include "AssemblyU2DCSharp_UsedTrapRelay_UsedTrapEventHandlerMethodDeclarations.h"



// System.Void UsedTrapRelay/UsedTrapEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UsedTrapEventHandler__ctor_m3233 (UsedTrapEventHandler_t603 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UsedTrapRelay/UsedTrapEventHandler::Invoke()
extern "C" void UsedTrapEventHandler_Invoke_m3234 (UsedTrapEventHandler_t603 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UsedTrapEventHandler_Invoke_m3234((UsedTrapEventHandler_t603 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UsedTrapEventHandler_t603(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UsedTrapRelay/UsedTrapEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UsedTrapEventHandler_BeginInvoke_m3235 (UsedTrapEventHandler_t603 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UsedTrapRelay/UsedTrapEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UsedTrapEventHandler_EndInvoke_m3236 (UsedTrapEventHandler_t603 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UsedTrapRelay
#include "AssemblyU2DCSharp_UsedTrapRelay.h"
#ifndef _MSC_VER
#else
#endif
// UsedTrapRelay
#include "AssemblyU2DCSharp_UsedTrapRelayMethodDeclarations.h"



// System.Void UsedTrapRelay::.ctor()
extern "C" void UsedTrapRelay__ctor_m3237 (UsedTrapRelay_t604 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UsedTrapRelay::add_UsedTrap(UsedTrapRelay/UsedTrapEventHandler)
extern TypeInfo* UsedTrapEventHandler_t603_il2cpp_TypeInfo_var;
extern "C" void UsedTrapRelay_add_UsedTrap_m3238 (UsedTrapRelay_t604 * __this, UsedTrapEventHandler_t603 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UsedTrapEventHandler_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		s_Il2CppMethodIntialized = true;
	}
	{
		UsedTrapEventHandler_t603 * L_0 = (__this->___UsedTrap_3);
		UsedTrapEventHandler_t603 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___UsedTrap_3 = ((UsedTrapEventHandler_t603 *)Castclass(L_2, UsedTrapEventHandler_t603_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UsedTrapRelay::remove_UsedTrap(UsedTrapRelay/UsedTrapEventHandler)
extern TypeInfo* UsedTrapEventHandler_t603_il2cpp_TypeInfo_var;
extern "C" void UsedTrapRelay_remove_UsedTrap_m3239 (UsedTrapRelay_t604 * __this, UsedTrapEventHandler_t603 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UsedTrapEventHandler_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		s_Il2CppMethodIntialized = true;
	}
	{
		UsedTrapEventHandler_t603 * L_0 = (__this->___UsedTrap_3);
		UsedTrapEventHandler_t603 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___UsedTrap_3 = ((UsedTrapEventHandler_t603 *)Castclass(L_2, UsedTrapEventHandler_t603_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UsedTrapRelay::Awake()
extern TypeInfo* UsedTrapRelay_t604_il2cpp_TypeInfo_var;
extern "C" void UsedTrapRelay_Awake_m3240 (UsedTrapRelay_t604 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UsedTrapRelay_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		s_Il2CppMethodIntialized = true;
	}
	{
		((UsedTrapRelay_t604_StaticFields*)UsedTrapRelay_t604_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void UsedTrapRelay::Start()
extern "C" void UsedTrapRelay_Start_m3241 (UsedTrapRelay_t604 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UsedTrapRelay::Update()
extern "C" void UsedTrapRelay_Update_m3242 (UsedTrapRelay_t604 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UsedTrapRelay::HandleUsedTrap()
extern "C" void UsedTrapRelay_HandleUsedTrap_m3243 (UsedTrapRelay_t604 * __this, const MethodInfo* method)
{
	{
		UsedTrapEventHandler_t603 * L_0 = (__this->___UsedTrap_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UsedTrapEventHandler_t603 * L_1 = (__this->___UsedTrap_3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(12 /* System.Void UsedTrapRelay/UsedTrapEventHandler::Invoke() */, L_1);
	}

IL_0016:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// BounceLerp
#include "AssemblyU2DCSharp_BounceLerpMethodDeclarations.h"
struct Component_t786;
struct SizeCamera_t587;
// Declaration !!0 UnityEngine.Component::GetComponent<SizeCamera>()
// !!0 UnityEngine.Component::GetComponent<SizeCamera>()
#define Component_GetComponent_TisSizeCamera_t587_m4480(__this, method) (( SizeCamera_t587 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void ZoomCamera::.ctor()
extern "C" void ZoomCamera__ctor_m3244 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	{
		__this->___zoomOutScale_7 = (1.5f);
		BounceLerp__ctor_m3758(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSizeCamera_t587_m4480_MethodInfo_var;
extern "C" void ZoomCamera_Awake_m3245 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		Component_GetComponent_TisSizeCamera_t587_m4480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484183);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t532 * L_0 = Component_GetComponent_TisCamera_t532_m4461(__this, /*hidden argument*/Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var);
		__this->___myCamera_10 = L_0;
		SizeCamera_t587 * L_1 = Component_GetComponent_TisSizeCamera_t587_m4480(__this, /*hidden argument*/Component_GetComponent_TisSizeCamera_t587_m4480_MethodInfo_var);
		__this->___mySizeCamera_11 = L_1;
		return;
	}
}
// System.Void ZoomCamera::Start()
extern "C" void ZoomCamera_Start_m3246 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_RegisterForEvents_m3250(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::OnDestroy()
extern "C" void ZoomCamera_OnDestroy_m3247 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	{
		ZoomCamera_UnregisterForEvents_m3251(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::Update()
extern "C" void ZoomCamera_Update_m3248 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___zooming_13);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ZoomCamera_UpdateCameraSize_m3249(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ZoomCamera::UpdateCameraSize()
extern "C" void ZoomCamera_UpdateCameraSize_m3249 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = {0};
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
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
		float L_4 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		((BounceLerp_t605 *)__this)->___periodOffsetDeg_5 = (270.0f);
		float L_7 = (__this->___zoomOutScale_7);
		((BounceLerp_t605 *)__this)->___additionalScale_4 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)L_7))));
		((BounceLerp_t605 *)__this)->___totalPeriods_3 = (0.5f);
		float L_8 = (((BounceLerp_t605 *)__this)->___totalPeriods_3);
		((BounceLerp_t605 *)__this)->___secondsPerPeriod_2 = ((float)((float)(1.4f)/(float)L_8));
		float L_9 = (__this->___zoomOutScale_7);
		float L_10 = V_2;
		float L_11 = BounceLerp_GetCoefficientForTime_m3759(__this, L_10, (&V_1), /*hidden argument*/NULL);
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
		float L_13 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		((BounceLerp_t605 *)__this)->___periodOffsetDeg_5 = (90.0f);
		float L_17 = (__this->___zoomOutScale_7);
		((BounceLerp_t605 *)__this)->___additionalScale_4 = ((float)((float)L_17-(float)(1.0f)));
		((BounceLerp_t605 *)__this)->___totalPeriods_3 = (0.4f);
		float L_18 = (((BounceLerp_t605 *)__this)->___totalPeriods_3);
		((BounceLerp_t605 *)__this)->___secondsPerPeriod_2 = ((float)((float)(0.7f)/(float)L_18));
		float L_19 = V_3;
		float L_20 = BounceLerp_GetCoefficientForTime_m3759(__this, L_19, (&V_1), /*hidden argument*/NULL);
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
		SizeCamera_t587 * L_24 = (__this->___mySizeCamera_11);
		NullCheck(L_24);
		float L_25 = SizeCamera_get_finalActualWorldHalfHeight_m3164(L_24, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_23*(float)L_25));
		Camera_t532 * L_26 = (__this->___myCamera_10);
		NullCheck(L_26);
		float L_27 = Camera_get_orthographicSize_m4481(L_26, /*hidden argument*/NULL);
		float L_28 = V_4;
		if ((((float)L_27) == ((float)L_28)))
		{
			goto IL_0162;
		}
	}
	{
		Camera_t532 * L_29 = (__this->___myCamera_10);
		float L_30 = V_4;
		NullCheck(L_29);
		Camera_set_orthographicSize_m4463(L_29, L_30, /*hidden argument*/NULL);
	}

IL_0162:
	{
		return;
	}
}
// System.Void ZoomCamera::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* ZoomCamera_OnGamePhaseChanged_m3252_MethodInfo_var;
extern "C" void ZoomCamera_RegisterForEvents_m3250 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		ZoomCamera_OnGamePhaseChanged_m3252_MethodInfo_var = il2cpp_codegen_method_info_from_index(536);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ZoomCamera_OnGamePhaseChanged_m3252_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZoomCamera::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* ZoomCamera_OnGamePhaseChanged_m3252_MethodInfo_var;
extern "C" void ZoomCamera_UnregisterForEvents_m3251 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		ZoomCamera_OnGamePhaseChanged_m3252_MethodInfo_var = il2cpp_codegen_method_info_from_index(536);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ZoomCamera_OnGamePhaseChanged_m3252_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ZoomCamera::OnGamePhaseChanged()
extern "C" void ZoomCamera_OnGamePhaseChanged_m3252 (ZoomCamera_t586 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___phaseStartTime_8 = L_0;
		__this->___zooming_13 = 1;
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GamePhaseState_get_gamePhase_m3630(L_1, /*hidden argument*/NULL);
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
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_gamePhase_m3630(L_4, /*hidden argument*/NULL);
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
// AchievementController
#include "AssemblyU2DCSharp_AchievementController.h"
#ifndef _MSC_VER
#else
#endif
// AchievementController
#include "AssemblyU2DCSharp_AchievementControllerMethodDeclarations.h"

// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHan.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHanMethodDeclarations.h"


// System.Void AchievementController::.ctor()
extern "C" void AchievementController__ctor_m3253 (AchievementController_t606 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::Awake()
extern "C" void AchievementController_Awake_m3254 (AchievementController_t606 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AchievementController::Start()
extern "C" void AchievementController_Start_m3255 (AchievementController_t606 * __this, const MethodInfo* method)
{
	{
		AchievementController_RegisterForEvents_m3257(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::OnDestroy()
extern "C" void AchievementController_OnDestroy_m3256 (AchievementController_t606 * __this, const MethodInfo* method)
{
	{
		AchievementController_UnregisterForEvents_m3258(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern const MethodInfo* AchievementController_OnGameLevelChanged_m3260_MethodInfo_var;
extern const MethodInfo* AchievementController_OnGameInstanceChanged_m3259_MethodInfo_var;
extern "C" void AchievementController_RegisterForEvents_m3257 (AchievementController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		AchievementController_OnGameLevelChanged_m3260_MethodInfo_var = il2cpp_codegen_method_info_from_index(537);
		AchievementController_OnGameInstanceChanged_m3259_MethodInfo_var = il2cpp_codegen_method_info_from_index(538);
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
		GameLevelState_t660 * L_1 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)AchievementController_OnGameLevelChanged_m3260_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_3 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_add_GameLevelChanged_m3602(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)AchievementController_OnGameInstanceChanged_m3259_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_6 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GameInstanceChanged_m3626(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern const MethodInfo* AchievementController_OnGameLevelChanged_m3260_MethodInfo_var;
extern const MethodInfo* AchievementController_OnGameInstanceChanged_m3259_MethodInfo_var;
extern "C" void AchievementController_UnregisterForEvents_m3258 (AchievementController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		AchievementController_OnGameLevelChanged_m3260_MethodInfo_var = il2cpp_codegen_method_info_from_index(537);
		AchievementController_OnGameInstanceChanged_m3259_MethodInfo_var = il2cpp_codegen_method_info_from_index(538);
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
		GameLevelState_t660 * L_1 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)AchievementController_OnGameLevelChanged_m3260_MethodInfo_var };
		GameLevelChangedEventHandler_t659 * L_3 = (GameLevelChangedEventHandler_t659 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m3597(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m3603(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)AchievementController_OnGameInstanceChanged_m3259_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_6 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GameInstanceChanged_m3627(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void AchievementController::OnGameInstanceChanged()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern "C" void AchievementController_OnGameInstanceChanged_m3259 (AchievementController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t658 * L_0 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___clearAchievements_7);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		SocialHelper_t592 * L_2 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_2);
		SocialHelper_ClearAchievements_m3190(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void AchievementController::OnGameLevelChanged()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern "C" void AchievementController_OnGameLevelChanged_m3260 (AchievementController_t606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t673 * V_0 = {0};
	{
		LevelConfig_t678 * L_0 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t673 * L_1 = LevelConfig_GetCurrentLevelDescription_m3664(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t673 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___previousLevelClearedAchievementID_11);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		SocialHelper_t592 * L_4 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		LevelDescription_t673 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___previousLevelClearedAchievementID_11);
		NullCheck(L_4);
		SocialHelper_RecordAchievement_m3192(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0026:
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

// UnityEngine.UI.CanvasScaler
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler.h"
// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdControllerMethodDeclarations.h"
// UnityEngine.UI.CanvasScaler
#include "UnityEngine_UI_UnityEngine_UI_CanvasScalerMethodDeclarations.h"


// System.Void CameraController::.ctor()
extern "C" void CameraController__ctor_m3261 (CameraController_t608 * __this, const MethodInfo* method)
{
	{
		__this->___actualHUDPixelHeight_5 = (180.0f);
		__this->___minHUDAspectRatio_6 = (2.5f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C" void CameraController_Start_m3262 (CameraController_t608 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		SizeCamera_t587 * L_0 = (__this->___uxCamera_3);
		NullCheck(L_0);
		L_0->___screenPixelsBottomToIgnore_5 = (0.0f);
		SizeCamera_t587 * L_1 = (__this->___uxCamera_3);
		NullCheck(L_1);
		L_1->___screenPixelsTopCameraSlop_4 = (0.0f);
		SizeCamera_t587 * L_2 = (__this->___uxCamera_3);
		NullCheck(L_2);
		SizeCamera_Configure_m3169(L_2, /*hidden argument*/NULL);
		float L_3 = GoogleAdController_GetBannerHeight_m3347(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		SizeCamera_t587 * L_4 = (__this->___worldCamera_2);
		float L_5 = V_0;
		NullCheck(L_4);
		L_4->___screenPixelsBottomToIgnore_5 = L_5;
		int32_t L_6 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = (((float)L_6));
		int32_t L_7 = Screen_get_width_m3877(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		SizeCamera_t587 * L_20 = (__this->___worldCamera_2);
		float L_21 = V_5;
		NullCheck(L_20);
		L_20->___screenPixelsTopCameraSlop_4 = L_21;
		CanvasScaler_t607 * L_22 = (__this->___constantUXCanvas_4);
		float L_23 = V_5;
		float L_24 = (__this->___actualHUDPixelHeight_5);
		NullCheck(L_22);
		CanvasScaler_set_scaleFactor_m4482(L_22, ((float)((float)L_23/(float)L_24)), /*hidden argument*/NULL);
		SizeCamera_t587 * L_25 = (__this->___worldCamera_2);
		NullCheck(L_25);
		SizeCamera_Configure_m3169(L_25, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ConeOfViewController::.ctor()
extern "C" void ConeOfViewController__ctor_m3263 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	{
		__this->___innerGapHalfAngle_4 = (2.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single ConeOfViewController::get_actualAngleRange()
extern "C" float ConeOfViewController_get_actualAngleRange_m3264 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CactualAngleRangeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void ConeOfViewController::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewController_set_actualAngleRange_m3265 (ConeOfViewController_t609 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CactualAngleRangeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void ConeOfViewController::Awake()
extern TypeInfo* ConeOfViewController_t609_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewController_Awake_m3266 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConeOfViewController_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ConeOfViewController_t609_StaticFields*)ConeOfViewController_t609_il2cpp_TypeInfo_var->static_fields)->___instance_6 = __this;
		__this->___registeredForEvents_5 = 0;
		return;
	}
}
// System.Void ConeOfViewController::Start()
extern "C" void ConeOfViewController_Start_m3267 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	{
		ConeOfViewController_RegisterForEvents_m3269(__this, /*hidden argument*/NULL);
		ConeOfViewController_MaybeUpdateAngleRange_m3272(__this, /*hidden argument*/NULL);
		ConeOfViewController_UpdateCones_m3273(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewController::OnDestroy()
extern "C" void ConeOfViewController_OnDestroy_m3268 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	{
		ConeOfViewController_UnregisterForEvents_m3270(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewController_OnBoostUsageChanged_m3271_MethodInfo_var;
extern "C" void ConeOfViewController_RegisterForEvents_m3269 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		ConeOfViewController_OnBoostUsageChanged_m3271_MethodInfo_var = il2cpp_codegen_method_info_from_index(539);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t493 * L_0 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)ConeOfViewController_OnBoostUsageChanged_m3271_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_2 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2781(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_5 = 1;
		return;
	}
}
// System.Void ConeOfViewController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewController_OnBoostUsageChanged_m3271_MethodInfo_var;
extern "C" void ConeOfViewController_UnregisterForEvents_m3270 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		ConeOfViewController_OnBoostUsageChanged_m3271_MethodInfo_var = il2cpp_codegen_method_info_from_index(539);
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
		BoostConfig_t493 * L_1 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ConeOfViewController_OnBoostUsageChanged_m3271_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_3 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2782(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ConeOfViewController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewController_OnBoostUsageChanged_m3271 (ConeOfViewController_t609 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		bool L_0 = ConeOfViewController_MaybeUpdateAngleRange_m3272(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConeOfViewController_UpdateCones_m3273(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean ConeOfViewController::MaybeUpdateAngleRange()
extern "C" bool ConeOfViewController_MaybeUpdateAngleRange_m3272 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		BoostConfig_t493 * L_0 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2785(L_0, /*hidden argument*/NULL);
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
		float L_3 = ConeOfViewController_get_actualAngleRange_m3264(__this, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		float L_4 = V_0;
		ConeOfViewController_set_actualAngleRange_m3265(__this, L_4, /*hidden argument*/NULL);
		return 1;
	}

IL_0036:
	{
		return 0;
	}
}
// System.Void ConeOfViewController::UpdateCones()
extern "C" void ConeOfViewController_UpdateCones_m3273 (ConeOfViewController_t609 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_t514 * L_0 = (__this->___leftCone_2);
		float L_1 = (__this->___innerGapHalfAngle_4);
		float L_2 = ConeOfViewController_get_actualAngleRange_m3264(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConeOfViewRenderer_CreateMeshForAngleRange_m2816(L_0, L_1, ((float)((float)L_2/(float)(2.0f))), /*hidden argument*/NULL);
		ConeOfViewRenderer_t514 * L_3 = (__this->___rightCone_3);
		float L_4 = ConeOfViewController_get_actualAngleRange_m3264(__this, /*hidden argument*/NULL);
		float L_5 = (__this->___innerGapHalfAngle_4);
		NullCheck(L_3);
		ConeOfViewRenderer_CreateMeshForAngleRange_m2816(L_3, ((float)((float)((-L_4))/(float)(2.0f))), ((-L_5)), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void DialogController::.ctor()
extern "C" void DialogController__ctor_m3274 (DialogController_t610 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::Awake()
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern "C" void DialogController_Awake_m3275 (DialogController_t610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern TypeInfo* PausedOverlay_t556_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern "C" void DialogController_ShowDialog_m3276 (DialogController_t610 * __this, GameObject_t352 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t556_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = ___dialog;
		__this->___activeDialog_3 = L_0;
		PausedOverlay_t556 * L_1 = ((PausedOverlay_t556_StaticFields*)PausedOverlay_t556_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_2 = ___dialog;
		NullCheck(L_1);
		PausedOverlay_SetChildElement_m3026(L_1, L_2, /*hidden argument*/NULL);
		TimeController_t650 * L_3 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_SetTimeState_m3534(L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern "C" void DialogController_HideDialog_m3277 (DialogController_t610 * __this, GameObject_t352 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = ___dialog;
		GameObject_t352 * L_1 = (__this->___activeDialog_3);
		bool L_2 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
		TimeController_t650 * L_3 = ((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_SetTimeState_m3534(L_3, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m3278 (DialogController_t610 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___activeDialog_3);
		bool L_1 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// FinalScoreController
#include "AssemblyU2DCSharp_FinalScoreController.h"
#ifndef _MSC_VER
#else
#endif
// FinalScoreController
#include "AssemblyU2DCSharp_FinalScoreControllerMethodDeclarations.h"



// System.Void FinalScoreController::.ctor()
extern "C" void FinalScoreController__ctor_m3279 (FinalScoreController_t611 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::Awake()
extern "C" void FinalScoreController_Awake_m3280 (FinalScoreController_t611 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FinalScoreController::Start()
extern "C" void FinalScoreController_Start_m3281 (FinalScoreController_t611 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_RegisterForEvents_m3283(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::OnDestroy()
extern "C" void FinalScoreController_OnDestroy_m3282 (FinalScoreController_t611 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_UnregisterForEvents_m3284(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m3285_MethodInfo_var;
extern "C" void FinalScoreController_RegisterForEvents_m3283 (FinalScoreController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		FinalScoreController_OnGamePhaseChanged_m3285_MethodInfo_var = il2cpp_codegen_method_info_from_index(540);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m3285_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m3285_MethodInfo_var;
extern "C" void FinalScoreController_UnregisterForEvents_m3284 (FinalScoreController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		FinalScoreController_OnGamePhaseChanged_m3285_MethodInfo_var = il2cpp_codegen_method_info_from_index(540);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m3285_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void FinalScoreController::OnGamePhaseChanged()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern "C" void FinalScoreController_OnGamePhaseChanged_m3285 (FinalScoreController_t611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0024;
		}
	}
	{
		SocialHelper_t592 * L_2 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		PlayerStats_t509 * L_3 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PlayerStats_get_gameScore_m3699(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		SocialHelper_ReportScore_m3191(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
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



// System.Void FooterController::.ctor()
extern "C" void FooterController__ctor_m3286 (FooterController_t613 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FooterController::Start()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var;
extern "C" void FooterController_Start_m3287 (FooterController_t613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	RectTransform_t573 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Rect_t719  V_5 = {0};
	{
		float L_0 = GoogleAdController_GetBannerHeight_m3347(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		RectTransform_t573 * L_1 = Component_GetComponent_TisRectTransform_t573_m4449(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		V_1 = L_1;
		RectTransform_t573 * L_2 = V_1;
		NullCheck(L_2);
		Rect_t719  L_3 = RectTransform_get_rect_m4382(L_2, /*hidden argument*/NULL);
		V_5 = L_3;
		float L_4 = Rect_get_height_m4254((&V_5), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = V_0;
		float L_6 = V_2;
		V_3 = ((float)((float)L_5/(float)L_6));
		V_4 = 0;
		goto IL_0049;
	}

IL_0029:
	{
		RectTransformU5BU5D_t612* L_7 = (__this->___contents_2);
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		float L_10 = V_3;
		float L_11 = V_3;
		Vector2_t110  L_12 = {0};
		Vector2__ctor_m4446(&L_12, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t523  L_13 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck((*(RectTransform_t573 **)(RectTransform_t573 **)SZArrayLdElema(L_7, L_9)));
		Transform_set_localScale_m4261((*(RectTransform_t573 **)(RectTransform_t573 **)SZArrayLdElema(L_7, L_9)), L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_15 = V_4;
		RectTransformU5BU5D_t612* L_16 = (__this->___contents_2);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		RectTransform_t573 * L_17 = V_1;
		float L_18 = V_0;
		Vector2_t110  L_19 = {0};
		Vector2__ctor_m4446(&L_19, (0.0f), L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m4447(L_17, L_19, /*hidden argument*/NULL);
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
extern "C" void GameAnalyticsAnalyticsController__ctor_m3288 (GameAnalyticsAnalyticsController_t614 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::Start()
extern "C" void GameAnalyticsAnalyticsController_Start_m3289 (GameAnalyticsAnalyticsController_t614 * __this, const MethodInfo* method)
{
	{
		GameAnalyticsAnalyticsController_RegisterForEvents_m3291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::OnDestroy()
extern "C" void GameAnalyticsAnalyticsController_OnDestroy_m3290 (GameAnalyticsAnalyticsController_t614 * __this, const MethodInfo* method)
{
	{
		GameAnalyticsAnalyticsController_UnregisterForEvents_m3292(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* GameAnalyticsAnalyticsController_OnGamePhaseChanged_m3293_MethodInfo_var;
extern "C" void GameAnalyticsAnalyticsController_RegisterForEvents_m3291 (GameAnalyticsAnalyticsController_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GameAnalyticsAnalyticsController_OnGamePhaseChanged_m3293_MethodInfo_var = il2cpp_codegen_method_info_from_index(541);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameAnalyticsAnalyticsController_OnGamePhaseChanged_m3293_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* GameAnalyticsAnalyticsController_OnGamePhaseChanged_m3293_MethodInfo_var;
extern "C" void GameAnalyticsAnalyticsController_UnregisterForEvents_m3292 (GameAnalyticsAnalyticsController_t614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GameAnalyticsAnalyticsController_OnGamePhaseChanged_m3293_MethodInfo_var = il2cpp_codegen_method_info_from_index(541);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameAnalyticsAnalyticsController_OnGamePhaseChanged_m3293_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::OnGamePhaseChanged()
extern "C" void GameAnalyticsAnalyticsController_OnGamePhaseChanged_m3293 (GameAnalyticsAnalyticsController_t614 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		GameAnalyticsAnalyticsController_LogGameOverEvent_m3294(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GameAnalyticsAnalyticsController::LogGameOverEvent()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void GameAnalyticsAnalyticsController_LogGameOverEvent_m3294 (GameAnalyticsAnalyticsController_t614 * __this, const MethodInfo* method)
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
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_instancesFinishedEver_m3638(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t664 * L_8 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = GamePhaseState_get_instancesFinishedThisSession_m3636(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Concat_m409(NULL /*static, unused*/, L_7, L_11, /*hidden argument*/NULL);
		PlayerStats_t509 * L_13 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = PlayerStats_get_gameScore_m3699(L_13, /*hidden argument*/NULL);
		GameAnalytics_NewProgressionEvent_m2667(NULL /*static, unused*/, 2, L_0, L_6, L_12, L_14, /*hidden argument*/NULL);
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

// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneState.h"
// Accumulator
#include "AssemblyU2DCSharp_Accumulator.h"
// EnumAccumulator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen.h"
// CrossSceneState
#include "AssemblyU2DCSharp_CrossSceneStateMethodDeclarations.h"
// Accumulator
#include "AssemblyU2DCSharp_AccumulatorMethodDeclarations.h"
struct GameObject_t352;
struct MouseSpawnFromData_t549;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
// !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
#define GameObject_GetComponent_TisMouseSpawnFromData_t549_m4483(__this, method) (( MouseSpawnFromData_t549 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m3295 (GameController_t616 * __this, const MethodInfo* method)
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
extern TypeInfo* GameController_t616_il2cpp_TypeInfo_var;
extern "C" GameController_t616 * GameController_get_instance_m3296 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t616 * L_0 = ((GameController_t616_StaticFields*)GameController_t616_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void GameController::set_instance(GameController)
extern TypeInfo* GameController_t616_il2cpp_TypeInfo_var;
extern "C" void GameController_set_instance_m3297 (Object_t * __this /* static, unused */, GameController_t616 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t616 * L_0 = ___value;
		((GameController_t616_StaticFields*)GameController_t616_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void GameController::Awake()
extern const MethodInfo* GameObject_GetComponent_TisMouseSpawnFromData_t549_m4483_MethodInfo_var;
extern "C" void GameController_Awake_m3298 (GameController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisMouseSpawnFromData_t549_m4483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484190);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_set_instance_m3297(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___checkForPhaseChanges_9 = 0;
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MouseSpawnFromData_t549 * L_1 = GameObject_GetComponent_TisMouseSpawnFromData_t549_m4483(L_0, /*hidden argument*/GameObject_GetComponent_TisMouseSpawnFromData_t549_m4483_MethodInfo_var);
		__this->___mouseSpawnFromData_7 = L_1;
		return;
	}
}
// System.Void GameController::Start()
extern TypeInfo* SocialHelper_t592_il2cpp_TypeInfo_var;
extern TypeInfo* GameController_t616_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t277_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_U3CStartU3Em__51_m3315_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m4079_MethodInfo_var;
extern "C" void GameController_Start_m3299 (GameController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		GameController_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(546);
		Action_1_t277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		GameController_U3CStartU3Em__51_m3315_MethodInfo_var = il2cpp_codegen_method_info_from_index(543);
		Action_1__ctor_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t592 * G_B2_0 = {0};
	SocialHelper_t592 * G_B1_0 = {0};
	{
		GameController_RegisterForEvents_m3302(__this, /*hidden argument*/NULL);
		GameLevelState_t660 * L_0 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_SetGameLevel_m3610(L_0, 1, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_RestartGame_m3646(L_1, /*hidden argument*/NULL);
		SocialHelper_t592 * L_2 = ((SocialHelper_t592_StaticFields*)SocialHelper_t592_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		Action_1_t277 * L_3 = ((GameController_t616_StaticFields*)GameController_t616_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0038;
		}
	}
	{
		IntPtr_t L_4 = { (void*)GameController_U3CStartU3Em__51_m3315_MethodInfo_var };
		Action_1_t277 * L_5 = (Action_1_t277 *)il2cpp_codegen_object_new (Action_1_t277_il2cpp_TypeInfo_var);
		Action_1__ctor_m4079(L_5, NULL, L_4, /*hidden argument*/Action_1__ctor_m4079_MethodInfo_var);
		((GameController_t616_StaticFields*)GameController_t616_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11 = L_5;
		G_B2_0 = G_B1_0;
	}

IL_0038:
	{
		Action_1_t277 * L_6 = ((GameController_t616_StaticFields*)GameController_t616_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache9_11;
		NullCheck(G_B2_0);
		SocialHelper_Authenticate_m3188(G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Update()
extern "C" void GameController_Update_m3300 (GameController_t616 * __this, const MethodInfo* method)
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
		bool L_1 = GameController_CheckForGameEnd_m3311(__this, /*hidden argument*/NULL);
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
		bool L_2 = GameController_CheckForLevelEnd_m3313(__this, /*hidden argument*/NULL);
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
extern "C" void GameController_OnDestroy_m3301 (GameController_t616 * __this, const MethodInfo* method)
{
	{
		GameController_UnregisterForEvents_m3303(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t518_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m3306_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m3305_MethodInfo_var;
extern const MethodInfo* GameController_OnMouseKilled_m3314_MethodInfo_var;
extern "C" void GameController_RegisterForEvents_m3302 (GameController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		MouseKillEventHandler_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		GameController_OnGamePhaseChanged_m3306_MethodInfo_var = il2cpp_codegen_method_info_from_index(544);
		GameController_OnGameInstanceChanged_m3305_MethodInfo_var = il2cpp_codegen_method_info_from_index(545);
		GameController_OnMouseKilled_m3314_MethodInfo_var = il2cpp_codegen_method_info_from_index(546);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m3306_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m3305_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_6 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GameInstanceChanged_m3626(L_4, L_6, /*hidden argument*/NULL);
		DeadMouseRelay_t519 * L_7 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)GameController_OnMouseKilled_m3314_MethodInfo_var };
		MouseKillEventHandler_t518 * L_9 = (MouseKillEventHandler_t518 *)il2cpp_codegen_object_new (MouseKillEventHandler_t518_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2826(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		DeadMouseRelay_add_MouseKill_m2833(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t518_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m3306_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m3305_MethodInfo_var;
extern const MethodInfo* GameController_OnMouseKilled_m3314_MethodInfo_var;
extern "C" void GameController_UnregisterForEvents_m3303 (GameController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		MouseKillEventHandler_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		GameController_OnGamePhaseChanged_m3306_MethodInfo_var = il2cpp_codegen_method_info_from_index(544);
		GameController_OnGameInstanceChanged_m3305_MethodInfo_var = il2cpp_codegen_method_info_from_index(545);
		GameController_OnMouseKilled_m3314_MethodInfo_var = il2cpp_codegen_method_info_from_index(546);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m3306_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m3305_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_6 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GameInstanceChanged_m3627(L_4, L_6, /*hidden argument*/NULL);
		DeadMouseRelay_t519 * L_7 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_8 = { (void*)GameController_OnMouseKilled_m3314_MethodInfo_var };
		MouseKillEventHandler_t518 * L_9 = (MouseKillEventHandler_t518 *)il2cpp_codegen_object_new (MouseKillEventHandler_t518_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2826(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		DeadMouseRelay_remove_MouseKill_m2834(L_7, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void GameController::RestarrrtGame()
extern "C" void GameController_RestarrrtGame_m3304 (GameController_t616 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m3305 (GameController_t616 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m3306 (GameController_t616 * __this, const MethodInfo* method)
{
	CrossSceneState_t657 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
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
		CrossSceneState_t657 * L_3 = CrossSceneState_get_instance_m3586(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		CrossSceneState_t657 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___didWelcome_2 = 1;
		goto IL_0068;
	}

IL_0036:
	{
		GameController_EnqueueMiceForLevel_m3309(__this, /*hidden argument*/NULL);
		GameController_UpdateMouseSinkTrapCount_m3308(__this, /*hidden argument*/NULL);
		GameController_UpdateRealAngusContentLocks_m3307(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_004d:
	{
		GameLevelState_t660 * L_5 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t660 * L_6 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = GameLevelState_get_gameLevel_m3604(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameLevelState_SetGameLevel_m3610(L_5, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// System.Void GameController::UpdateRealAngusContentLocks()
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern "C" void GameController_UpdateRealAngusContentLocks_m3307 (GameController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t673 * V_0 = {0};
	{
		LevelConfig_t678 * L_0 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t660 * L_1 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m3604(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t673 * L_3 = LevelConfig_GetLevelDescription_m3665(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RealAngusData_t684 * L_4 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		LevelDescription_t673 * L_5 = V_0;
		NullCheck(L_5);
		Accumulator_t672 * L_6 = (L_5->___realAngusAccumulator_12);
		NullCheck(L_6);
		int32_t L_7 = Accumulator_get_derivedCount_m3748(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RealAngusData_UnlockNItems_m3736(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::UpdateMouseSinkTrapCount()
extern "C" void GameController_UpdateMouseSinkTrapCount_m3308 (GameController_t616 * __this, const MethodInfo* method)
{
	LevelDescription_t673 * V_0 = {0};
	EnumAccumulator_1_t667 * V_1 = {0};
	int32_t V_2 = 0;
	{
		LevelConfig_t678 * L_0 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t660 * L_1 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m3604(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t673 * L_3 = LevelConfig_GetLevelDescription_m3665(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t673 * L_4 = V_0;
		NullCheck(L_4);
		EnumAccumulator_1_t667 * L_5 = (L_4->___mouseHolesAccumulator_5);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0041;
	}

IL_0023:
	{
		MouseSinkControllerU5BU5D_t615* L_6 = (__this->___mouseSinkControllers_5);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		EnumAccumulator_1_t667 * L_9 = V_1;
		NullCheck(L_9);
		AccumulatorU5BU5D_t823* L_10 = (L_9->___accumulators_0);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(Accumulator_t672 **)(Accumulator_t672 **)SZArrayLdElema(L_10, L_12)));
		int32_t L_13 = Accumulator_get_derivedCount_m3748((*(Accumulator_t672 **)(Accumulator_t672 **)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck((*(MouseSinkController_t629 **)(MouseSinkController_t629 **)SZArrayLdElema(L_6, L_8)));
		MouseSinkController_SetTrapCapacity_m3389((*(MouseSinkController_t629 **)(MouseSinkController_t629 **)SZArrayLdElema(L_6, L_8)), L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		EnumAccumulator_1_t667 * L_16 = V_1;
		NullCheck(L_16);
		AccumulatorU5BU5D_t823* L_17 = (L_16->___accumulators_0);
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
extern "C" void GameController_EnqueueMiceForLevel_m3309 (GameController_t616 * __this, const MethodInfo* method)
{
	LevelDescription_t673 * V_0 = {0};
	{
		MouseSpawnFromData_t549 * L_0 = (__this->___mouseSpawnFromData_7);
		NullCheck(L_0);
		MouseSpawnFromData_Clear_m2987(L_0, /*hidden argument*/NULL);
		LevelConfig_t678 * L_1 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t660 * L_2 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m3604(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		LevelDescription_t673 * L_4 = LevelConfig_GetLevelDescription_m3665(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		MouseSpawnFromData_t549 * L_5 = (__this->___mouseSpawnFromData_7);
		LevelDescription_t673 * L_6 = V_0;
		NullCheck(L_6);
		List_1_t550 * L_7 = (L_6->___explicitMouseDescs_1);
		NullCheck(L_5);
		MouseSpawnFromData_AddMice_m2988(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m3310 (GameController_t616 * __this, MouseMove_t517 * ___mouse, const MethodInfo* method)
{
	{
		__this->___checkForPhaseChanges_9 = 1;
		return;
	}
}
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m3311 (GameController_t616 * __this, const MethodInfo* method)
{
	MouseSinkController_t629 * V_0 = {0};
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
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
		MouseSinkController_t629 * L_2 = GameController_FindDoomedExit_m3312(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		MouseSinkController_t629 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_3, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		GamePhaseState_t664 * L_5 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GamePhaseState_TransitionWithPause_m3648(L_5, 4, /*hidden argument*/NULL);
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// MouseSinkController GameController::FindDoomedExit()
extern "C" MouseSinkController_t629 * GameController_FindDoomedExit_m3312 (GameController_t616 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	MouseSinkController_t629 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0007:
	{
		MouseSinkControllerU5BU5D_t615* L_0 = (__this->___mouseSinkControllers_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(MouseSinkController_t629 **)(MouseSinkController_t629 **)SZArrayLdElema(L_0, L_2));
		MouseSinkController_t629 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = MouseSinkController_get_savedMouseCount_m3372(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		MouseSinkController_t629 * L_5 = V_1;
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
		MouseSinkControllerU5BU5D_t615* L_8 = (__this->___mouseSinkControllers_5);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return (MouseSinkController_t629 *)NULL;
	}
}
// System.Boolean GameController::CheckForLevelEnd()
extern TypeInfo* MouseMove_t517_il2cpp_TypeInfo_var;
extern "C" bool GameController_CheckForLevelEnd_m3313 (GameController_t616 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
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
		MouseSpawnFromData_t549 * L_2 = (__this->___mouseSpawnFromData_7);
		NullCheck(L_2);
		bool L_3 = MouseSpawnFromData_FinishedWithCurrentSet_m2986(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t517_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t517_StaticFields*)MouseMove_t517_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_2;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		GamePhaseState_t664 * L_5 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GamePhaseState_TransitionWithPause_m3648(L_5, 3, /*hidden argument*/NULL);
		return 1;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m3314 (GameController_t616 * __this, MouseMove_t517 * ___mouse, const MethodInfo* method)
{
	{
		__this->___checkForPhaseChanges_9 = 1;
		return;
	}
}
// System.Void GameController::<Start>m__51(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* IUserProfile_t824_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t822_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameController_U3CStartU3Em__51_m3315 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		IUserProfile_t824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(547);
		ILocalUser_t822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(537);
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
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1105, /*hidden argument*/NULL);
		ObjectU5BU5D_t707* L_1 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral1106);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral1106;
		ObjectU5BU5D_t707* L_2 = L_1;
		Object_t * L_3 = Social_get_localUser_m4471(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_userName() */, IUserProfile_t824_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t707* L_5 = L_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1107);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral1107;
		ObjectU5BU5D_t707* L_6 = L_5;
		Object_t * L_7 = Social_get_localUser_m4471(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_t824_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_8;
		ObjectU5BU5D_t707* L_9 = L_6;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1108);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 4)) = (Object_t *)(String_t*) &_stringLiteral1108;
		ObjectU5BU5D_t707* L_10 = L_9;
		Object_t * L_11 = Social_get_localUser_m4471(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_underage() */, ILocalUser_t822_il2cpp_TypeInfo_var, L_11);
		bool L_13 = L_12;
		Object_t * L_14 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m4090(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = V_0;
		Debug_Log_m382(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_006b:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1109, /*hidden argument*/NULL);
	}

IL_0075:
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



// GameUIController/<ConfirmComplete>c__Iterator16
#include "AssemblyU2DCSharp_GameUIController_U3CConfirmCompleteU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// GameUIController/<ConfirmComplete>c__Iterator16
#include "AssemblyU2DCSharp_GameUIController_U3CConfirmCompleteU3Ec__IMethodDeclarations.h"

// GameUIController
#include "AssemblyU2DCSharp_GameUIController.h"


// System.Void GameUIController/<ConfirmComplete>c__Iterator16::.ctor()
extern "C" void U3CConfirmCompleteU3Ec__Iterator16__ctor_m3316 (U3CConfirmCompleteU3Ec__Iterator16_t619 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator16::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator16_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3317 (U3CConfirmCompleteU3Ec__Iterator16_t619 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object GameUIController/<ConfirmComplete>c__Iterator16::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CConfirmCompleteU3Ec__Iterator16_System_Collections_IEnumerator_get_Current_m3318 (U3CConfirmCompleteU3Ec__Iterator16_t619 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean GameUIController/<ConfirmComplete>c__Iterator16::MoveNext()
extern TypeInfo* WaitForSeconds_t810_il2cpp_TypeInfo_var;
extern "C" bool U3CConfirmCompleteU3Ec__Iterator16_MoveNext_m3319 (U3CConfirmCompleteU3Ec__Iterator16_t619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		WaitForSeconds_t810 * L_2 = (WaitForSeconds_t810 *)il2cpp_codegen_object_new (WaitForSeconds_t810_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4355(L_2, (0.0f), /*hidden argument*/NULL);
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
		GameUIController_t618 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		GameUIU5BU5D_t620* L_4 = (L_3->___gameUIs_6);
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_4, L_6)));
		VirtActionInvoker0::Invoke(5 /* System.Void GameUI::ConfirmLayoutComplete() */, (*(GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_8 = (__this->___U3CiU3E__0_0);
		GameUIController_t618 * L_9 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_9);
		GameUIU5BU5D_t620* L_10 = (L_9->___gameUIs_6);
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
// System.Void GameUIController/<ConfirmComplete>c__Iterator16::Dispose()
extern "C" void U3CConfirmCompleteU3Ec__Iterator16_Dispose_m3320 (U3CConfirmCompleteU3Ec__Iterator16_t619 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void GameUIController/<ConfirmComplete>c__Iterator16::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CConfirmCompleteU3Ec__Iterator16_Reset_m3321 (U3CConfirmCompleteU3Ec__Iterator16_t619 * __this, const MethodInfo* method)
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
struct GameUI_t525;
// Declaration !!0 UnityEngine.GameObject::GetComponent<GameUI>()
// !!0 UnityEngine.GameObject::GetComponent<GameUI>()
#define GameObject_GetComponent_TisGameUI_t525_m4484(__this, method) (( GameUI_t525 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void GameUIController::.ctor()
extern "C" void GameUIController__ctor_m3322 (GameUIController_t618 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameUIController GameUIController::get_instance()
extern TypeInfo* GameUIController_t618_il2cpp_TypeInfo_var;
extern "C" GameUIController_t618 * GameUIController_get_instance_m3323 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(548);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t618 * L_0 = ((GameUIController_t618_StaticFields*)GameUIController_t618_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GameUIController::set_instance(GameUIController)
extern TypeInfo* GameUIController_t618_il2cpp_TypeInfo_var;
extern "C" void GameUIController_set_instance_m3324 (Object_t * __this /* static, unused */, GameUIController_t618 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(548);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t618 * L_0 = ___value;
		((GameUIController_t618_StaticFields*)GameUIController_t618_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void GameUIController::Awake()
extern TypeInfo* GameUIU5BU5D_t620_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameUI_t525_m4484_MethodInfo_var;
extern "C" void GameUIController_Awake_m3325 (GameUIController_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIU5BU5D_t620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(550);
		GameObject_GetComponent_TisGameUI_t525_m4484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484195);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_set_instance_m3324(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___gameUIs_6 = ((GameUIU5BU5D_t620*)SZArrayNew(GameUIU5BU5D_t620_il2cpp_TypeInfo_var, 4));
		GameUIU5BU5D_t620* L_0 = (__this->___gameUIs_6);
		GameObject_t352 * L_1 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_1);
		GameUI_t525 * L_2 = GameObject_GetComponent_TisGameUI_t525_m4484(L_1, /*hidden argument*/GameObject_GetComponent_TisGameUI_t525_m4484_MethodInfo_var);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_0, 0)) = (GameUI_t525 *)L_2;
		GameUIU5BU5D_t620* L_3 = (__this->___gameUIs_6);
		GameObject_t352 * L_4 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_4);
		GameUI_t525 * L_5 = GameObject_GetComponent_TisGameUI_t525_m4484(L_4, /*hidden argument*/GameObject_GetComponent_TisGameUI_t525_m4484_MethodInfo_var);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_3, 1)) = (GameUI_t525 *)L_5;
		GameUIU5BU5D_t620* L_6 = (__this->___gameUIs_6);
		GameObject_t352 * L_7 = (__this->___gameOverUIGameObject_4);
		NullCheck(L_7);
		GameUI_t525 * L_8 = GameObject_GetComponent_TisGameUI_t525_m4484(L_7, /*hidden argument*/GameObject_GetComponent_TisGameUI_t525_m4484_MethodInfo_var);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_6, 2)) = (GameUI_t525 *)L_8;
		GameUIU5BU5D_t620* L_9 = (__this->___gameUIs_6);
		GameObject_t352 * L_10 = (__this->___realAngusUIGameObject_5);
		NullCheck(L_10);
		GameUI_t525 * L_11 = GameObject_GetComponent_TisGameUI_t525_m4484(L_10, /*hidden argument*/GameObject_GetComponent_TisGameUI_t525_m4484_MethodInfo_var);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_11);
		*((GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_9, 3)) = (GameUI_t525 *)L_11;
		return;
	}
}
// System.Void GameUIController::Start()
extern "C" void GameUIController_Start_m3326 (GameUIController_t618 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameUIU5BU5D_t620* L_0 = (__this->___gameUIs_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_0, L_2)));
		GameObject_t352 * L_3 = Component_get_gameObject_m3972((*(GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m4172(L_3, 0, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		GameUIU5BU5D_t620* L_6 = (__this->___gameUIs_6);
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		GameUIController_RegisterForEvents_m3329(__this, /*hidden argument*/NULL);
		GameUIController_OnGamePhaseChanged_m3331(__this, /*hidden argument*/NULL);
		Object_t * L_7 = GameUIController_ConfirmComplete_m3327(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3935(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GameUIController::ConfirmComplete()
extern TypeInfo* U3CConfirmCompleteU3Ec__Iterator16_t619_il2cpp_TypeInfo_var;
extern "C" Object_t * GameUIController_ConfirmComplete_m3327 (GameUIController_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CConfirmCompleteU3Ec__Iterator16_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	U3CConfirmCompleteU3Ec__Iterator16_t619 * V_0 = {0};
	{
		U3CConfirmCompleteU3Ec__Iterator16_t619 * L_0 = (U3CConfirmCompleteU3Ec__Iterator16_t619 *)il2cpp_codegen_object_new (U3CConfirmCompleteU3Ec__Iterator16_t619_il2cpp_TypeInfo_var);
		U3CConfirmCompleteU3Ec__Iterator16__ctor_m3316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CConfirmCompleteU3Ec__Iterator16_t619 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CConfirmCompleteU3Ec__Iterator16_t619 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameUIController::OnDestroy()
extern "C" void GameUIController_OnDestroy_m3328 (GameUIController_t618 * __this, const MethodInfo* method)
{
	{
		GameUIController_UnregisterForEvents_m3330(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m3331_MethodInfo_var;
extern "C" void GameUIController_RegisterForEvents_m3329 (GameUIController_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GameUIController_OnGamePhaseChanged_m3331_MethodInfo_var = il2cpp_codegen_method_info_from_index(548);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m3331_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m3331_MethodInfo_var;
extern "C" void GameUIController_UnregisterForEvents_m3330 (GameUIController_t618 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GameUIController_OnGamePhaseChanged_m3331_MethodInfo_var = il2cpp_codegen_method_info_from_index(548);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m3331_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameUIController::OnGamePhaseChanged()
extern "C" void GameUIController_OnGamePhaseChanged_m3331 (GameUIController_t618 * __this, const MethodInfo* method)
{
	CrossSceneState_t657 * V_0 = {0};
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GamePhaseState_get_gamePhase_m3630(L_1, /*hidden argument*/NULL);
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
		DebugConfig_t658 * L_4 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (L_4->___skipWelcome_6);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		GameUIController_SetActiveUI_m3332(__this, 1, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_0057:
	{
		GameUIController_SetActiveUI_m3332(__this, 0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		CrossSceneState_t657 * L_6 = CrossSceneState_get_instance_m3586(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_6;
		CrossSceneState_t657 * L_7 = V_0;
		NullCheck(L_7);
		L_7->___didWelcome_2 = 1;
		goto IL_00ac;
	}

IL_0070:
	{
		GameUIController_SetActiveUI_m3332(__this, 4, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_007c:
	{
		GameUIController_SetActiveUI_m3332(__this, 4, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_0088:
	{
		GameUIController_SetActiveUI_m3332(__this, 1, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_0094:
	{
		GameUIController_SetActiveUI_m3332(__this, 2, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_00a0:
	{
		GameUIController_SetActiveUI_m3332(__this, 3, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_00ac:
	{
		return;
	}
}
// System.Void GameUIController::SetActiveUI(GameUIController/GameUIsType)
extern "C" void GameUIController_SetActiveUI_m3332 (GameUIController_t618 * __this, int32_t ___uiType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	GameUI_t525 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameUIU5BU5D_t620* L_0 = (__this->___gameUIs_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(GameUI_t525 **)(GameUI_t525 **)SZArrayLdElema(L_0, L_2));
		GameUI_t525 * L_3 = V_1;
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
// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdController.h"
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
extern "C" void GoogleAdController__ctor_m3333 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	{
		__this->___instancesBetweenInterstitialAds_3 = 3;
		__this->___adsEnabled_7 = 1;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::Awake()
extern TypeInfo* GoogleAdController_t621_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsLoaded_m3337_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsOpen_m3338_MethodInfo_var;
extern const MethodInfo* GoogleAdController_OnInterstisialsClosed_m3339_MethodInfo_var;
extern "C" void GoogleAdController_Awake_m3334 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleAdController_t621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(552);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		GoogleAdController_OnInterstisialsLoaded_m3337_MethodInfo_var = il2cpp_codegen_method_info_from_index(549);
		GoogleAdController_OnInterstisialsOpen_m3338_MethodInfo_var = il2cpp_codegen_method_info_from_index(550);
		GoogleAdController_OnInterstisialsClosed_m3339_MethodInfo_var = il2cpp_codegen_method_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GoogleAdController_t621_StaticFields*)GoogleAdController_t621_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m733(NULL /*static, unused*/, /*hidden argument*/NULL);
		GoogleMobileAd_AddKeyword_m740(NULL /*static, unused*/, (String_t*) &_stringLiteral255, /*hidden argument*/NULL);
		Object_t * L_0 = GoogleMobileAd_CreateAdBanner_m736(NULL /*static, unused*/, 7, 2, /*hidden argument*/NULL);
		__this->___banner_8 = L_0;
		Object_t * L_1 = (__this->___banner_8);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1);
		Object_t * L_2 = (__this->___banner_8);
		NullCheck(L_2);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void GoogleMobileAdBanner::set_ShowOnLoad(System.Boolean) */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_2, 0);
		Action_t143 * L_3 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2;
		IntPtr_t L_4 = { (void*)GoogleAdController_OnInterstisialsLoaded_m3337_MethodInfo_var };
		Action_t143 * L_5 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3974(L_5, __this, L_4, /*hidden argument*/NULL);
		Delegate_t749 * L_6 = Delegate_Combine_m3975(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialLoaded_2 = ((Action_t143 *)Castclass(L_6, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_7 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4;
		IntPtr_t L_8 = { (void*)GoogleAdController_OnInterstisialsOpen_m3338_MethodInfo_var };
		Action_t143 * L_9 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3974(L_9, __this, L_8, /*hidden argument*/NULL);
		Delegate_t749 * L_10 = Delegate_Combine_m3975(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialOpened_4 = ((Action_t143 *)Castclass(L_10, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_11 = ((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5;
		IntPtr_t L_12 = { (void*)GoogleAdController_OnInterstisialsClosed_m3339_MethodInfo_var };
		Action_t143 * L_13 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3974(L_13, __this, L_12, /*hidden argument*/NULL);
		Delegate_t749 * L_14 = Delegate_Combine_m3975(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		((GoogleMobileAd_t145_StaticFields*)GoogleMobileAd_t145_il2cpp_TypeInfo_var->static_fields)->___OnInterstitialClosed_5 = ((Action_t143 *)Castclass(L_14, Action_t143_il2cpp_TypeInfo_var));
		GoogleMobileAd_LoadInterstitialAd_m747(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::Start()
extern "C" void GoogleAdController_Start_m3335 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_RegisterForEvents_m3340(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateBanner_m3346(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnDestroy()
extern "C" void GoogleAdController_OnDestroy_m3336 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UnregisterForEvents_m3341(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsLoaded()
extern "C" void GoogleAdController_OnInterstisialsLoaded_m3337 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	{
		__this->___interstitialAdLoaded_6 = 1;
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsOpen()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsOpen_m3338 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_SuppressSounds_m3519(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnInterstisialsClosed()
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_OnInterstisialsClosed_m3339 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___interstitialAdLoaded_6 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_LoadInterstitialAd_m747(NULL /*static, unused*/, /*hidden argument*/NULL);
		SoundController_t645 * L_0 = ((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		SoundController_UnsuppressSounds_m3520(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m3342_MethodInfo_var;
extern "C" void GoogleAdController_RegisterForEvents_m3340 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GoogleAdController_OnGamePhaseChanged_m3342_MethodInfo_var = il2cpp_codegen_method_info_from_index(552);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m3342_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m3342_MethodInfo_var;
extern "C" void GoogleAdController_UnregisterForEvents_m3341 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		GoogleAdController_OnGamePhaseChanged_m3342_MethodInfo_var = il2cpp_codegen_method_info_from_index(552);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m3342_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GoogleAdController::OnGamePhaseChanged()
extern "C" void GoogleAdController_OnGamePhaseChanged_m3342 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UpdateBanner_m3346(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateInterstialAd_m3343(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UpdateInterstialAd()
extern TypeInfo* DelayedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_MaybeShowAd_m3344_MethodInfo_var;
extern "C" void GoogleAdController_UpdateInterstialAd_m3343 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DelayedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(553);
		GoogleAdController_MaybeShowAd_m3344_MethodInfo_var = il2cpp_codegen_method_info_from_index(553);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhaseDelayedEventScheduler_t560 * L_0 = (__this->___phaseDelayedEventScheduler_4);
		IntPtr_t L_1 = { (void*)GoogleAdController_MaybeShowAd_m3344_MethodInfo_var };
		DelayedEventHandler_t559 * L_2 = (DelayedEventHandler_t559 *)il2cpp_codegen_object_new (DelayedEventHandler_t559_il2cpp_TypeInfo_var);
		DelayedEventHandler__ctor_m3031(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PhaseDelayedEventScheduler_OnPhaseChanged_m3043(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GoogleAdController::MaybeShowAd()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAd_t145_il2cpp_TypeInfo_var;
extern "C" bool GoogleAdController_MaybeShowAd_m3344 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		GoogleMobileAd_t145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = GoogleAdController_ShouldShowInterstitialAd_m3345(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		PersistentStorage_t695 * L_2 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GamePhaseState_t664 * L_3 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GamePhaseState_get_instancesFinishedThisSession_m3636(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		PersistentStorage_SetIntValue_m3809(L_2, (String_t*) &_stringLiteral1110, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t145_il2cpp_TypeInfo_var);
		GoogleMobileAd_ShowInterstitialAd_m748(NULL /*static, unused*/, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean GoogleAdController::ShouldShowInterstitialAd()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" bool GoogleAdController_ShouldShowInterstitialAd_m3345 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PersistentStorage_t695 * L_0 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3810(L_0, (String_t*) &_stringLiteral1110, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_instancesFinishedThisSession_m3636(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___instancesBetweenInterstitialAds_3);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5)))))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		bool L_6 = (__this->___interstitialAdLoaded_6);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		return 0;
	}

IL_0037:
	{
		return 1;
	}
}
// System.Void GoogleAdController::UpdateBanner()
extern TypeInfo* GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_UpdateBanner_m3346 (GoogleAdController_t621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		bool L_0 = (__this->___adsEnabled_7);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = (__this->___banner_8);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_1);
		return;
	}

IL_0017:
	{
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3630(L_2, /*hidden argument*/NULL);
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
		Object_t * L_5 = (__this->___banner_8);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_5);
		goto IL_008a;
	}

IL_004f:
	{
		Object_t * L_6 = (__this->___banner_8);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_6);
		goto IL_008a;
	}

IL_005f:
	{
		Object_t * L_7 = (__this->___banner_8);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_7);
		goto IL_008a;
	}

IL_006f:
	{
		Object_t * L_8 = (__this->___banner_8);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t140_il2cpp_TypeInfo_var, L_8);
		Object_t * L_9 = (__this->___banner_8);
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
extern "C" float GoogleAdController_GetBannerHeight_m3347 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// InitialTutorialController
#include "AssemblyU2DCSharp_InitialTutorialController.h"
#ifndef _MSC_VER
#else
#endif
// InitialTutorialController
#include "AssemblyU2DCSharp_InitialTutorialControllerMethodDeclarations.h"

// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
// PlayerController/TurnedWithTapHandler
#include "AssemblyU2DCSharp_PlayerController_TurnedWithTapHandler.h"
// PlayerController/TurnedWithDragHandler
#include "AssemblyU2DCSharp_PlayerController_TurnedWithDragHandler.h"
// PlayerController/SwattedHandler
#include "AssemblyU2DCSharp_PlayerController_SwattedHandler.h"
// TipController
#include "AssemblyU2DCSharp_TipController.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"
// PlayerController/TurnedWithTapHandler
#include "AssemblyU2DCSharp_PlayerController_TurnedWithTapHandlerMethodDeclarations.h"
// PlayerController/TurnedWithDragHandler
#include "AssemblyU2DCSharp_PlayerController_TurnedWithDragHandlerMethodDeclarations.h"
// PlayerController/SwattedHandler
#include "AssemblyU2DCSharp_PlayerController_SwattedHandlerMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"


// System.Void InitialTutorialController::.ctor()
extern "C" void InitialTutorialController__ctor_m3348 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	{
		__this->___firstMouseTipPause_3 = (2.0f);
		__this->___firstSlapTipPause_5 = (2.0f);
		__this->___firstTurnTipPause_7 = (1.0f);
		__this->___usedTrapTipPause_9 = (1.0f);
		__this->___lostGameTipPause_11 = (1.0f);
		__this->___boostOverTipPause_13 = (0.4f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitialTutorialController::Awake()
extern TypeInfo* TipConfig_t623_il2cpp_TypeInfo_var;
extern "C" void InitialTutorialController_Awake_m3349 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	{
		TipConfig_t623 * L_0 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3535(L_0, (String_t*) &_stringLiteral1111, (String_t*) &_stringLiteral1112, /*hidden argument*/NULL);
		__this->___firstMouseTipConfig_4 = L_0;
		TipConfig_t623 * L_1 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3536(L_1, (String_t*) &_stringLiteral1113, (String_t*) &_stringLiteral1114, (String_t*) &_stringLiteral1111, /*hidden argument*/NULL);
		__this->___firstSlapTipConfig_6 = L_1;
		TipConfig_t623 * L_2 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3536(L_2, (String_t*) &_stringLiteral1115, (String_t*) &_stringLiteral1116, (String_t*) &_stringLiteral1113, /*hidden argument*/NULL);
		__this->___firstTurnTipConfig_8 = L_2;
		TipConfig_t623 * L_3 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3535(L_3, (String_t*) &_stringLiteral1117, (String_t*) &_stringLiteral1118, /*hidden argument*/NULL);
		__this->___usedTrapTipConfig_10 = L_3;
		TipConfig_t623 * L_4 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3535(L_4, (String_t*) &_stringLiteral1119, (String_t*) &_stringLiteral1120, /*hidden argument*/NULL);
		__this->___lostGameTipConfig_12 = L_4;
		TipConfig_t623 * L_5 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3535(L_5, (String_t*) &_stringLiteral1121, (String_t*) &_stringLiteral1122, /*hidden argument*/NULL);
		__this->___boostOverTipConfig_14 = L_5;
		return;
	}
}
// System.Void InitialTutorialController::Start()
extern "C" void InitialTutorialController_Start_m3350 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	{
		InitialTutorialController_RegisterForEvents_m3352(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitialTutorialController::OnDestroy()
extern "C" void InitialTutorialController_OnDestroy_m3351 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	{
		InitialTutorialController_UnregisterForEvents_m3353(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitialTutorialController::RegisterForEvents()
extern TypeInfo* MouseSpawnFromData_t549_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var;
extern TypeInfo* TurnedWithTapHandler_t634_il2cpp_TypeInfo_var;
extern TypeInfo* TurnedWithDragHandler_t635_il2cpp_TypeInfo_var;
extern TypeInfo* SwattedHandler_t636_il2cpp_TypeInfo_var;
extern TypeInfo* UsedTrapRelay_t604_il2cpp_TypeInfo_var;
extern TypeInfo* UsedTrapEventHandler_t603_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* InitialTutorialController_OnMouseSpawned_m3356_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnTurnedWithTap_m3357_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnTurnedWithDrag_m3358_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnSwatted_m3359_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnUsedTrap_m3360_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnGamePhaseChanged_m3355_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnBoostActiveChanged_m3354_MethodInfo_var;
extern "C" void InitialTutorialController_RegisterForEvents_m3352 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		TurnedWithTapHandler_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		TurnedWithDragHandler_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		SwattedHandler_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		UsedTrapRelay_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		UsedTrapEventHandler_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		InitialTutorialController_OnMouseSpawned_m3356_MethodInfo_var = il2cpp_codegen_method_info_from_index(554);
		InitialTutorialController_OnTurnedWithTap_m3357_MethodInfo_var = il2cpp_codegen_method_info_from_index(555);
		InitialTutorialController_OnTurnedWithDrag_m3358_MethodInfo_var = il2cpp_codegen_method_info_from_index(556);
		InitialTutorialController_OnSwatted_m3359_MethodInfo_var = il2cpp_codegen_method_info_from_index(557);
		InitialTutorialController_OnUsedTrap_m3360_MethodInfo_var = il2cpp_codegen_method_info_from_index(558);
		InitialTutorialController_OnGamePhaseChanged_m3355_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		InitialTutorialController_OnBoostActiveChanged_m3354_MethodInfo_var = il2cpp_codegen_method_info_from_index(560);
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
		MouseSpawnFromData_t549 * L_1 = ((MouseSpawnFromData_t549_StaticFields*)MouseSpawnFromData_t549_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)InitialTutorialController_OnMouseSpawned_m3356_MethodInfo_var };
		MouseSpawnEventHandler_t548 * L_3 = (MouseSpawnEventHandler_t548 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m2968(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_add_MouseSpawn_m2973(L_1, L_3, /*hidden argument*/NULL);
		PlayerController_t637 * L_4 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)InitialTutorialController_OnTurnedWithTap_m3357_MethodInfo_var };
		TurnedWithTapHandler_t634 * L_6 = (TurnedWithTapHandler_t634 *)il2cpp_codegen_object_new (TurnedWithTapHandler_t634_il2cpp_TypeInfo_var);
		TurnedWithTapHandler__ctor_m3419(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerController_add_TurnedWithTap_m3432(L_4, L_6, /*hidden argument*/NULL);
		PlayerController_t637 * L_7 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)InitialTutorialController_OnTurnedWithDrag_m3358_MethodInfo_var };
		TurnedWithDragHandler_t635 * L_9 = (TurnedWithDragHandler_t635 *)il2cpp_codegen_object_new (TurnedWithDragHandler_t635_il2cpp_TypeInfo_var);
		TurnedWithDragHandler__ctor_m3423(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		PlayerController_add_TurnedWithDrag_m3434(L_7, L_9, /*hidden argument*/NULL);
		PlayerController_t637 * L_10 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)InitialTutorialController_OnSwatted_m3359_MethodInfo_var };
		SwattedHandler_t636 * L_12 = (SwattedHandler_t636 *)il2cpp_codegen_object_new (SwattedHandler_t636_il2cpp_TypeInfo_var);
		SwattedHandler__ctor_m3427(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		PlayerController_add_Swatted_m3436(L_10, L_12, /*hidden argument*/NULL);
		UsedTrapRelay_t604 * L_13 = ((UsedTrapRelay_t604_StaticFields*)UsedTrapRelay_t604_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_14 = { (void*)InitialTutorialController_OnUsedTrap_m3360_MethodInfo_var };
		UsedTrapEventHandler_t603 * L_15 = (UsedTrapEventHandler_t603 *)il2cpp_codegen_object_new (UsedTrapEventHandler_t603_il2cpp_TypeInfo_var);
		UsedTrapEventHandler__ctor_m3233(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		UsedTrapRelay_add_UsedTrap_m3238(L_13, L_15, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_16 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_17 = { (void*)InitialTutorialController_OnGamePhaseChanged_m3355_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_18 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_18, __this, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		GamePhaseState_add_GamePhaseChanged_m3628(L_16, L_18, /*hidden argument*/NULL);
		BoostConfig_t493 * L_19 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_20 = { (void*)InitialTutorialController_OnBoostActiveChanged_m3354_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_21 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_21, __this, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		BoostConfig_add_BoostActive_m2781(L_19, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitialTutorialController::UnregisterForEvents()
extern TypeInfo* MouseSpawnFromData_t549_il2cpp_TypeInfo_var;
extern TypeInfo* MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var;
extern TypeInfo* TurnedWithTapHandler_t634_il2cpp_TypeInfo_var;
extern TypeInfo* TurnedWithDragHandler_t635_il2cpp_TypeInfo_var;
extern TypeInfo* SwattedHandler_t636_il2cpp_TypeInfo_var;
extern TypeInfo* UsedTrapRelay_t604_il2cpp_TypeInfo_var;
extern TypeInfo* UsedTrapEventHandler_t603_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* InitialTutorialController_OnMouseSpawned_m3356_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnTurnedWithTap_m3357_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnTurnedWithDrag_m3358_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnSwatted_m3359_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnUsedTrap_m3360_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnGamePhaseChanged_m3355_MethodInfo_var;
extern const MethodInfo* InitialTutorialController_OnBoostActiveChanged_m3354_MethodInfo_var;
extern "C" void InitialTutorialController_UnregisterForEvents_m3353 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSpawnFromData_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		TurnedWithTapHandler_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		TurnedWithDragHandler_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		SwattedHandler_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		UsedTrapRelay_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		UsedTrapEventHandler_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(542);
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		InitialTutorialController_OnMouseSpawned_m3356_MethodInfo_var = il2cpp_codegen_method_info_from_index(554);
		InitialTutorialController_OnTurnedWithTap_m3357_MethodInfo_var = il2cpp_codegen_method_info_from_index(555);
		InitialTutorialController_OnTurnedWithDrag_m3358_MethodInfo_var = il2cpp_codegen_method_info_from_index(556);
		InitialTutorialController_OnSwatted_m3359_MethodInfo_var = il2cpp_codegen_method_info_from_index(557);
		InitialTutorialController_OnUsedTrap_m3360_MethodInfo_var = il2cpp_codegen_method_info_from_index(558);
		InitialTutorialController_OnGamePhaseChanged_m3355_MethodInfo_var = il2cpp_codegen_method_info_from_index(559);
		InitialTutorialController_OnBoostActiveChanged_m3354_MethodInfo_var = il2cpp_codegen_method_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_2);
		if (!L_0)
		{
			goto IL_00a5;
		}
	}
	{
		MouseSpawnFromData_t549 * L_1 = ((MouseSpawnFromData_t549_StaticFields*)MouseSpawnFromData_t549_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)InitialTutorialController_OnMouseSpawned_m3356_MethodInfo_var };
		MouseSpawnEventHandler_t548 * L_3 = (MouseSpawnEventHandler_t548 *)il2cpp_codegen_object_new (MouseSpawnEventHandler_t548_il2cpp_TypeInfo_var);
		MouseSpawnEventHandler__ctor_m2968(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MouseSpawnFromData_remove_MouseSpawn_m2974(L_1, L_3, /*hidden argument*/NULL);
		PlayerController_t637 * L_4 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)InitialTutorialController_OnTurnedWithTap_m3357_MethodInfo_var };
		TurnedWithTapHandler_t634 * L_6 = (TurnedWithTapHandler_t634 *)il2cpp_codegen_object_new (TurnedWithTapHandler_t634_il2cpp_TypeInfo_var);
		TurnedWithTapHandler__ctor_m3419(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerController_remove_TurnedWithTap_m3433(L_4, L_6, /*hidden argument*/NULL);
		PlayerController_t637 * L_7 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)InitialTutorialController_OnTurnedWithDrag_m3358_MethodInfo_var };
		TurnedWithDragHandler_t635 * L_9 = (TurnedWithDragHandler_t635 *)il2cpp_codegen_object_new (TurnedWithDragHandler_t635_il2cpp_TypeInfo_var);
		TurnedWithDragHandler__ctor_m3423(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		PlayerController_remove_TurnedWithDrag_m3435(L_7, L_9, /*hidden argument*/NULL);
		PlayerController_t637 * L_10 = PlayerController_get_instance_m3440(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)InitialTutorialController_OnSwatted_m3359_MethodInfo_var };
		SwattedHandler_t636 * L_12 = (SwattedHandler_t636 *)il2cpp_codegen_object_new (SwattedHandler_t636_il2cpp_TypeInfo_var);
		SwattedHandler__ctor_m3427(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		PlayerController_remove_Swatted_m3437(L_10, L_12, /*hidden argument*/NULL);
		UsedTrapRelay_t604 * L_13 = ((UsedTrapRelay_t604_StaticFields*)UsedTrapRelay_t604_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_14 = { (void*)InitialTutorialController_OnUsedTrap_m3360_MethodInfo_var };
		UsedTrapEventHandler_t603 * L_15 = (UsedTrapEventHandler_t603 *)il2cpp_codegen_object_new (UsedTrapEventHandler_t603_il2cpp_TypeInfo_var);
		UsedTrapEventHandler__ctor_m3233(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		UsedTrapRelay_remove_UsedTrap_m3239(L_13, L_15, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_16 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_17 = { (void*)InitialTutorialController_OnGamePhaseChanged_m3355_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_18 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_18, __this, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_16, L_18, /*hidden argument*/NULL);
		BoostConfig_t493 * L_19 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_20 = { (void*)InitialTutorialController_OnBoostActiveChanged_m3354_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_21 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_21, __this, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		BoostConfig_remove_BoostActive_m2782(L_19, L_21, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void InitialTutorialController::OnBoostActiveChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern TypeInfo* TipController_t651_il2cpp_TypeInfo_var;
extern "C" void InitialTutorialController_OnBoostActiveChanged_m3354 (InitialTutorialController_t624 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = ___oldType;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		TipController_t651 * L_2 = ((TipController_t651_StaticFields*)TipController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t623 * L_3 = (__this->___boostOverTipConfig_14);
		float L_4 = (__this->___boostOverTipPause_13);
		NullCheck(L_2);
		TipController_EnqueueTip_m3551(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void InitialTutorialController::OnGamePhaseChanged()
extern TypeInfo* TipController_t651_il2cpp_TypeInfo_var;
extern "C" void InitialTutorialController_OnGamePhaseChanged_m3355 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)6))))
		{
			goto IL_0036;
		}
	}
	{
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_pendingPhase_m3634(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0036;
		}
	}
	{
		TipController_t651 * L_4 = ((TipController_t651_StaticFields*)TipController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t623 * L_5 = (__this->___lostGameTipConfig_12);
		float L_6 = (__this->___lostGameTipPause_11);
		NullCheck(L_4);
		TipController_EnqueueTip_m3551(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void InitialTutorialController::OnMouseSpawned()
extern TypeInfo* TipController_t651_il2cpp_TypeInfo_var;
extern "C" void InitialTutorialController_OnMouseSpawned_m3356 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		TipController_t651 * L_0 = ((TipController_t651_StaticFields*)TipController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t623 * L_1 = (__this->___firstMouseTipConfig_4);
		float L_2 = (__this->___firstMouseTipPause_3);
		NullCheck(L_0);
		TipController_EnqueueTip_m3551(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitialTutorialController::OnTurnedWithTap()
extern TypeInfo* TipController_t651_il2cpp_TypeInfo_var;
extern "C" void InitialTutorialController_OnTurnedWithTap_m3357 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		TipController_t651 * L_0 = ((TipController_t651_StaticFields*)TipController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t623 * L_1 = (__this->___firstTurnTipConfig_8);
		float L_2 = (__this->___firstTurnTipPause_7);
		NullCheck(L_0);
		TipController_EnqueueTip_m3551(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitialTutorialController::OnTurnedWithDrag()
extern "C" void InitialTutorialController_OnTurnedWithDrag_m3358 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void InitialTutorialController::OnSwatted()
extern TypeInfo* TipController_t651_il2cpp_TypeInfo_var;
extern "C" void InitialTutorialController_OnSwatted_m3359 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		TipController_t651 * L_0 = ((TipController_t651_StaticFields*)TipController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t623 * L_1 = (__this->___firstSlapTipConfig_6);
		float L_2 = (__this->___firstSlapTipPause_5);
		NullCheck(L_0);
		TipController_EnqueueTip_m3551(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitialTutorialController::OnUsedTrap()
extern TypeInfo* TipController_t651_il2cpp_TypeInfo_var;
extern "C" void InitialTutorialController_OnUsedTrap_m3360 (InitialTutorialController_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		TipController_t651 * L_0 = ((TipController_t651_StaticFields*)TipController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		TipConfig_t623 * L_1 = (__this->___usedTrapTipConfig_10);
		float L_2 = (__this->___usedTrapTipPause_9);
		NullCheck(L_0);
		TipController_EnqueueTip_m3551(L_0, L_1, L_2, /*hidden argument*/NULL);
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
extern "C" void LaunchCountController__ctor_m3361 (LaunchCountController_t625 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LaunchCountController::Start()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void LaunchCountController_Start_m3362 (LaunchCountController_t625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PersistentStorage_t695 * L_0 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m3810(L_0, (String_t*) &_stringLiteral1065, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		PersistentStorage_t695 * L_2 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		PersistentStorage_SetIntValue_m3809(L_2, (String_t*) &_stringLiteral1065, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
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



// System.Void MoneyEarningController::.ctor()
extern "C" void MoneyEarningController__ctor_m3363 (MoneyEarningController_t626 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::Start()
extern "C" void MoneyEarningController_Start_m3364 (MoneyEarningController_t626 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_RegisterForEvents_m3366(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::OnDestroy()
extern "C" void MoneyEarningController_OnDestroy_m3365 (MoneyEarningController_t626 * __this, const MethodInfo* method)
{
	{
		MoneyEarningController_UnregisterForEvents_m3367(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m3368_MethodInfo_var;
extern "C" void MoneyEarningController_RegisterForEvents_m3366 (MoneyEarningController_t626 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		MultiKillEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		MoneyEarningController_OnMultiKill_m3368_MethodInfo_var = il2cpp_codegen_method_info_from_index(561);
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
		DeadMouseRelay_t519 * L_1 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m3368_MethodInfo_var };
		MultiKillEventHandler_t516 * L_3 = (MultiKillEventHandler_t516 *)il2cpp_codegen_object_new (MultiKillEventHandler_t516_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2822(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MultiKill_m2831(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern TypeInfo* MultiKillEventHandler_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* MoneyEarningController_OnMultiKill_m3368_MethodInfo_var;
extern "C" void MoneyEarningController_UnregisterForEvents_m3367 (MoneyEarningController_t626 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		MultiKillEventHandler_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		MoneyEarningController_OnMultiKill_m3368_MethodInfo_var = il2cpp_codegen_method_info_from_index(561);
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
		DeadMouseRelay_t519 * L_1 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)MoneyEarningController_OnMultiKill_m3368_MethodInfo_var };
		MultiKillEventHandler_t516 * L_3 = (MultiKillEventHandler_t516 *)il2cpp_codegen_object_new (MultiKillEventHandler_t516_il2cpp_TypeInfo_var);
		MultiKillEventHandler__ctor_m2822(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MultiKill_m2832(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void MoneyEarningController::OnMultiKill(System.Int32,UnityEngine.Vector3)
extern "C" void MoneyEarningController_OnMultiKill_m3368 (MoneyEarningController_t626 * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, const MethodInfo* method)
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
		PlayerStats_t509 * L_3 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PlayerStats_EarnMoney_m3714(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		Vector3_t523  L_6 = ___pawPosition;
		MoneyEarningController_MakeMoneyEffect_m3369(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoneyEarningController::MakeMoneyEffect(System.Int32,UnityEngine.Vector3)
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var;
extern "C" void MoneyEarningController_MakeMoneyEffect_m3369 (MoneyEarningController_t626 * __this, int32_t ___moneyEarned, Vector3_t523  ___pawPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484152);
		GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FlyingAnimation_t692 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___moneyEffectPrototype_2);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4433(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		FlyingAnimation_t692 * L_3 = GameObject_GetComponent_TisFlyingAnimation_t692_m4435(L_2, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var);
		V_1 = L_3;
		FlyingAnimation_t692 * L_4 = V_1;
		Vector3_t523  L_5 = ___pawPosition;
		GameObject_t352 * L_6 = (__this->___moneyDisplay_3);
		NullCheck(L_4);
		FlyingAnimation_Configure_m3783(L_4, L_5, L_6, /*hidden argument*/NULL);
		FlyingAnimation_t692 * L_7 = V_1;
		NullCheck(L_7);
		FlyingAnimation_Run_m3785(L_7, /*hidden argument*/NULL);
		SFXPlayer_t580 * L_8 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		SFXPlayer_Play_m3123(L_8, ((int32_t)9), /*hidden argument*/NULL);
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
#include "mscorlib_System_Collections_Generic_List_1_gen_22.h"
// System.Collections.Generic.List`1<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_gen_22MethodDeclarations.h"
struct GameObject_t352;
struct MouseTrap_t551;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseTrap>()
// !!0 UnityEngine.GameObject::GetComponent<MouseTrap>()
#define GameObject_GetComponent_TisMouseTrap_t551_m4485(__this, method) (( MouseTrap_t551 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void MouseSinkController::.ctor()
extern "C" void MouseSinkController__ctor_m3370 (MouseSinkController_t629 * __this, const MethodInfo* method)
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
extern TypeInfo* MouseSinkController_t629_il2cpp_TypeInfo_var;
extern "C" void MouseSinkController__cctor_m3371 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseSinkController_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(508);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MouseSinkController_t629_StaticFields*)MouseSinkController_t629_il2cpp_TypeInfo_var->static_fields)->___angleBetweenHoles_10 = (90.0f);
		return;
	}
}
// System.Int32 MouseSinkController::get_savedMouseCount()
extern "C" int32_t MouseSinkController_get_savedMouseCount_m3372 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CsavedMouseCountU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void MouseSinkController::set_savedMouseCount(System.Int32)
extern "C" void MouseSinkController_set_savedMouseCount_m3373 (MouseSinkController_t629 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CsavedMouseCountU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Void MouseSinkController::Awake()
extern TypeInfo* List_1_t628_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4486_MethodInfo_var;
extern "C" void MouseSinkController_Awake_m3374 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		List_1__ctor_m4486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484210);
		s_Il2CppMethodIntialized = true;
	}
	{
		MouseSinkController_set_savedMouseCount_m3373(__this, 0, /*hidden argument*/NULL);
		List_1_t628 * L_0 = (List_1_t628 *)il2cpp_codegen_object_new (List_1_t628_il2cpp_TypeInfo_var);
		List_1__ctor_m4486(L_0, /*hidden argument*/List_1__ctor_m4486_MethodInfo_var);
		__this->___mouseTraps_13 = L_0;
		return;
	}
}
// System.Void MouseSinkController::Start()
extern const MethodInfo* Component_GetComponent_TisSizeCamera_t587_m4480_MethodInfo_var;
extern "C" void MouseSinkController_Start_m3375 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSizeCamera_t587_m4480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484183);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t532 * L_0 = Camera_get_main_m4223(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		SizeCamera_t587 * L_1 = Component_GetComponent_TisSizeCamera_t587_m4480(L_0, /*hidden argument*/Component_GetComponent_TisSizeCamera_t587_m4480_MethodInfo_var);
		__this->___sizeCameraWorld_15 = L_1;
		MouseSinkController_RegisterForEvents_m3377(__this, /*hidden argument*/NULL);
		MouseSinkController_CalculateSpread_m3381(__this, /*hidden argument*/NULL);
		MouseSinkController_ResetTraps_m3382(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::OnDestroy()
extern "C" void MouseSinkController_OnDestroy_m3376 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	{
		MouseSinkController_UnregisterForEvents_m3378(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern TypeInfo* CameraConfiguredHandler_t585_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSinkController_OnInstanceChanged_m3380_MethodInfo_var;
extern const MethodInfo* MouseSinkController_OnCameraChanged_m3379_MethodInfo_var;
extern "C" void MouseSinkController_RegisterForEvents_m3377 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		CameraConfiguredHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		MouseSinkController_OnInstanceChanged_m3380_MethodInfo_var = il2cpp_codegen_method_info_from_index(563);
		MouseSinkController_OnCameraChanged_m3379_MethodInfo_var = il2cpp_codegen_method_info_from_index(564);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSinkController_OnInstanceChanged_m3380_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_3 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m3626(L_1, L_3, /*hidden argument*/NULL);
		SizeCamera_t587 * L_4 = (__this->___sizeCameraWorld_15);
		IntPtr_t L_5 = { (void*)MouseSinkController_OnCameraChanged_m3379_MethodInfo_var };
		CameraConfiguredHandler_t585 * L_6 = (CameraConfiguredHandler_t585 *)il2cpp_codegen_object_new (CameraConfiguredHandler_t585_il2cpp_TypeInfo_var);
		CameraConfiguredHandler__ctor_m3157(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SizeCamera_add_CameraConfigured_m3162(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern TypeInfo* CameraConfiguredHandler_t585_il2cpp_TypeInfo_var;
extern const MethodInfo* MouseSinkController_OnInstanceChanged_m3380_MethodInfo_var;
extern const MethodInfo* MouseSinkController_OnCameraChanged_m3379_MethodInfo_var;
extern "C" void MouseSinkController_UnregisterForEvents_m3378 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		CameraConfiguredHandler_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(533);
		MouseSinkController_OnInstanceChanged_m3380_MethodInfo_var = il2cpp_codegen_method_info_from_index(563);
		MouseSinkController_OnCameraChanged_m3379_MethodInfo_var = il2cpp_codegen_method_info_from_index(564);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)MouseSinkController_OnInstanceChanged_m3380_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_3 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3627(L_1, L_3, /*hidden argument*/NULL);
		SizeCamera_t587 * L_4 = (__this->___sizeCameraWorld_15);
		IntPtr_t L_5 = { (void*)MouseSinkController_OnCameraChanged_m3379_MethodInfo_var };
		CameraConfiguredHandler_t585 * L_6 = (CameraConfiguredHandler_t585 *)il2cpp_codegen_object_new (CameraConfiguredHandler_t585_il2cpp_TypeInfo_var);
		CameraConfiguredHandler__ctor_m3157(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SizeCamera_remove_CameraConfigured_m3163(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void MouseSinkController::OnCameraChanged()
extern "C" void MouseSinkController_OnCameraChanged_m3379 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	{
		MouseSinkController_CalculateSpread_m3381(__this, /*hidden argument*/NULL);
		MouseSinkController_ResetTraps_m3382(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::OnInstanceChanged()
extern "C" void MouseSinkController_OnInstanceChanged_m3380 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	{
		__this->___trapCapacity_5 = 1;
		__this->___trapsSpent_6 = 0;
		MouseSinkController_set_savedMouseCount_m3373(__this, 0, /*hidden argument*/NULL);
		MouseSinkController_ResetTraps_m3382(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::CalculateSpread()
extern "C" void MouseSinkController_CalculateSpread_m3381 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	MouseSinkController_t629 * G_B3_0 = {0};
	MouseSinkController_t629 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	MouseSinkController_t629 * G_B4_1 = {0};
	MouseSinkController_t629 * G_B7_0 = {0};
	MouseSinkController_t629 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	MouseSinkController_t629 * G_B8_1 = {0};
	{
		SizeCamera_t587 * L_0 = (__this->___sizeCameraWorld_15);
		NullCheck(L_0);
		float L_1 = SizeCamera_GetAspectRatio_m3168(L_0, /*hidden argument*/NULL);
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
extern "C" void MouseSinkController_ResetTraps_m3382 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	MouseTrap_t551 * V_0 = {0};
	int32_t V_1 = 0;
	{
		goto IL_0029;
	}

IL_0005:
	{
		List_1_t628 * L_0 = (__this->___mouseTraps_13);
		NullCheck(L_0);
		MouseTrap_t551 * L_1 = (MouseTrap_t551 *)VirtFuncInvoker1< MouseTrap_t551 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_0, 0);
		V_0 = L_1;
		List_1_t628 * L_2 = (__this->___mouseTraps_13);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32) */, L_2, 0);
		MouseTrap_t551 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(L_3, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		List_1_t628 * L_5 = (__this->___mouseTraps_13);
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
		MouseSinkController_AddTrap_m3384(__this, /*hidden argument*/NULL);
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
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern TypeInfo* UsedTrapRelay_t604_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var;
extern "C" void MouseSinkController_OnTriggerEnter2D_m3383 (MouseSinkController_t629 * __this, Collider2D_t724 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		UsedTrapRelay_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484163);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t517 * V_0 = {0};
	{
		Collider2D_t724 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m4411(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1064, /*hidden argument*/NULL);
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
		Collider2D_t724 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t352 * L_4 = Component_get_gameObject_m3972(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		MouseMove_t517 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t517_m4443_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t517 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
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
		MouseMove_t517 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MouseMove_GetMousePhase_m2965(L_8, /*hidden argument*/NULL);
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
		List_1_t628 * L_10 = (__this->___mouseTraps_13);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_10);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		DeadMouseRelay_t519 * L_12 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		MouseMove_t517 * L_13 = V_0;
		NullCheck(L_12);
		DeadMouseRelay_HandleMouseKill_m2839(L_12, L_13, /*hidden argument*/NULL);
		MouseSinkController_RemoveTopmostMouseTrap_m3388(__this, /*hidden argument*/NULL);
		int32_t L_14 = (__this->___trapsSpent_6);
		__this->___trapsSpent_6 = ((int32_t)((int32_t)L_14+(int32_t)1));
		UsedTrapRelay_t604 * L_15 = ((UsedTrapRelay_t604_StaticFields*)UsedTrapRelay_t604_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_15);
		UsedTrapRelay_HandleUsedTrap_m3243(L_15, /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_007a:
	{
		int32_t L_16 = MouseSinkController_get_savedMouseCount_m3372(__this, /*hidden argument*/NULL);
		MouseSinkController_set_savedMouseCount_m3373(__this, ((int32_t)((int32_t)L_16+(int32_t)1)), /*hidden argument*/NULL);
		GameController_t616 * L_17 = GameController_get_instance_m3296(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseMove_t517 * L_18 = V_0;
		NullCheck(L_17);
		GameController_OnMouseExit_m3310(L_17, L_18, /*hidden argument*/NULL);
		MouseMove_t517 * L_19 = V_0;
		NullCheck(L_19);
		MouseMove_OnSafeExit_m2963(L_19, /*hidden argument*/NULL);
	}

IL_0099:
	{
		return;
	}
}
// System.Void MouseSinkController::AddTrap()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseTrap_t551_m4485_MethodInfo_var;
extern "C" void MouseSinkController_AddTrap_m3384 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisMouseTrap_t551_m4485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484213);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t352 * V_1 = {0};
	MouseTrap_t551 * V_2 = {0};
	{
		List_1_t628 * L_0 = (__this->___mouseTraps_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count() */, L_0);
		V_0 = L_1;
		GameObject_t352 * L_2 = (__this->___mouseTrapPrototype_11);
		Vector3_t523  L_3 = {0};
		Vector3__ctor_m4250(&L_3, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t813  L_4 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_5 = Object_Instantiate_m4367(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((GameObject_t352 *)IsInst(L_5, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_6 = V_1;
		NullCheck(L_6);
		Transform_t406 * L_7 = GameObject_get_transform_m4255(L_6, /*hidden argument*/NULL);
		Transform_t406 * L_8 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m4487(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t352 * L_9 = V_1;
		int32_t L_10 = V_0;
		MouseSinkController_PositionNthMousetrap_m3387(__this, L_9, L_10, /*hidden argument*/NULL);
		GameObject_t352 * L_11 = V_1;
		NullCheck(L_11);
		MouseTrap_t551 * L_12 = GameObject_GetComponent_TisMouseTrap_t551_m4485(L_11, /*hidden argument*/GameObject_GetComponent_TisMouseTrap_t551_m4485_MethodInfo_var);
		V_2 = L_12;
		List_1_t628 * L_13 = (__this->___mouseTraps_13);
		MouseTrap_t551 * L_14 = V_2;
		NullCheck(L_13);
		VirtActionInvoker1< MouseTrap_t551 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseTrap>::Add(!0) */, L_13, L_14);
		return;
	}
}
// UnityEngine.Vector3 MouseSinkController::NthMouseTrapPosition(System.Int32)
extern "C" Vector3_t523  MouseSinkController_NthMouseTrapPosition_m3385 (MouseSinkController_t629 * __this, int32_t ___i, const MethodInfo* method)
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
		Vector3_t523  L_9 = {0};
		Vector3__ctor_m4250(&L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single MouseSinkController::NthMouseTrapRotation(System.Int32)
extern "C" float MouseSinkController_NthMouseTrapRotation_m3386 (MouseSinkController_t629 * __this, int32_t ___i, const MethodInfo* method)
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
extern "C" void MouseSinkController_PositionNthMousetrap_m3387 (MouseSinkController_t629 * __this, GameObject_t352 * ___mouseTrapGameObject, int32_t ___i, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___mouseTrapGameObject;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		Vector3_t523  L_3 = MouseSinkController_NthMouseTrapPosition_m3385(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m4402(L_1, L_3, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = ___mouseTrapGameObject;
		NullCheck(L_4);
		Transform_t406 * L_5 = GameObject_get_transform_m4255(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = MouseSinkController_NthMouseTrapRotation_m3386(__this, L_6, /*hidden argument*/NULL);
		Quaternion_t813  L_8 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localRotation_m4406(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseSinkController::RemoveTopmostMouseTrap()
extern "C" void MouseSinkController_RemoveTopmostMouseTrap_m3388 (MouseSinkController_t629 * __this, const MethodInfo* method)
{
	MouseTrap_t551 * V_0 = {0};
	int32_t V_1 = 0;
	Vector3_t523  V_2 = {0};
	float V_3 = 0.0f;
	{
		List_1_t628 * L_0 = (__this->___mouseTraps_13);
		NullCheck(L_0);
		MouseTrap_t551 * L_1 = (MouseTrap_t551 *)VirtFuncInvoker1< MouseTrap_t551 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_0, 0);
		V_0 = L_1;
		List_1_t628 * L_2 = (__this->___mouseTraps_13);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32) */, L_2, 0);
		MouseTrap_t551 * L_3 = V_0;
		NullCheck(L_3);
		MouseTrap_AnimateOut_m2993(L_3, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_004d;
	}

IL_0026:
	{
		int32_t L_4 = V_1;
		Vector3_t523  L_5 = MouseSinkController_NthMouseTrapPosition_m3385(__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_1;
		float L_7 = MouseSinkController_NthMouseTrapRotation_m3386(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t628 * L_8 = (__this->___mouseTraps_13);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		MouseTrap_t551 * L_10 = (MouseTrap_t551 *)VirtFuncInvoker1< MouseTrap_t551 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32) */, L_8, L_9);
		Vector3_t523  L_11 = V_2;
		float L_12 = V_3;
		NullCheck(L_10);
		MouseTrap_SlideTo_m2994(L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		List_1_t628 * L_15 = (__this->___mouseTraps_13);
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
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var;
extern "C" void MouseSinkController_SetTrapCapacity_m3389 (MouseSinkController_t629 * __this, int32_t ___newTrapCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	DistortForEffect_t535 * V_0 = {0};
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
		MouseSinkController_ResetTraps_m3382(__this, /*hidden argument*/NULL);
		GameLevelState_t660 * L_3 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GameLevelState_get_gameLevel_m3604(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		DistortForEffect_t535 * L_5 = Component_GetComponent_TisDistortForEffect_t535_m4374(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var);
		V_0 = L_5;
		DistortForEffect_t535 * L_6 = V_0;
		bool L_7 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		DistortForEffect_t535 * L_8 = V_0;
		float L_9 = (__this->___distortDelay_9);
		NullCheck(L_8);
		DistortForEffect_DistortWithDelay_m3774(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0048:
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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// Parse.ParseAnalytics
#include "Parse_Unity_Parse_ParseAnalyticsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"


// System.Void ParseAnalyticsController::.ctor()
extern "C" void ParseAnalyticsController__ctor_m3390 (ParseAnalyticsController_t630 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::Start()
extern "C" void ParseAnalyticsController_Start_m3391 (ParseAnalyticsController_t630 * __this, const MethodInfo* method)
{
	{
		ParseAnalytics_TrackAppOpenedAsync_m4488(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseAnalyticsController_RegisterForEvents_m3393(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnDestroy()
extern "C" void ParseAnalyticsController_OnDestroy_m3392 (ParseAnalyticsController_t630 * __this, const MethodInfo* method)
{
	{
		ParseAnalyticsController_UnregisterForEvents_m3394(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3396_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3395_MethodInfo_var;
extern "C" void ParseAnalyticsController_RegisterForEvents_m3393 (ParseAnalyticsController_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		ParseAnalyticsController_OnGamePhaseChanged_m3396_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
		ParseAnalyticsController_OnBoostActive_m3395_MethodInfo_var = il2cpp_codegen_method_info_from_index(567);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3396_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t493 * L_4 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3395_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_6 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2781(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnGamePhaseChanged_m3396_MethodInfo_var;
extern const MethodInfo* ParseAnalyticsController_OnBoostActive_m3395_MethodInfo_var;
extern "C" void ParseAnalyticsController_UnregisterForEvents_m3394 (ParseAnalyticsController_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		ParseAnalyticsController_OnGamePhaseChanged_m3396_MethodInfo_var = il2cpp_codegen_method_info_from_index(566);
		ParseAnalyticsController_OnBoostActive_m3395_MethodInfo_var = il2cpp_codegen_method_info_from_index(567);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)ParseAnalyticsController_OnGamePhaseChanged_m3396_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t493 * L_4 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)ParseAnalyticsController_OnBoostActive_m3395_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_6 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2782(L_4, L_6, /*hidden argument*/NULL);
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
extern TypeInfo* BoostType_t504_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3911_MethodInfo_var;
extern "C" void ParseAnalyticsController_OnBoostActive_m3395 (ParseAnalyticsController_t630 * __this, int32_t ___bType, int32_t ___oldType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		BoostType_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		Dictionary_2__ctor_m3911_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
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
		Dictionary_2__ctor_m3911(L_1, /*hidden argument*/Dictionary_2__ctor_m3911_MethodInfo_var);
		V_0 = L_1;
		Dictionary_2_t122 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_instancesFinishedThisSession_m3636(L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m409(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral1123, L_8);
		Dictionary_2_t122 * L_9 = V_0;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t664 * L_11 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = GamePhaseState_get_instancesFinishedEver_m3638(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m409(NULL /*static, unused*/, L_10, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral1124, L_15);
		Dictionary_2_t122 * L_16 = V_0;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t660 * L_18 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = GameLevelState_get_gameLevel_m3604(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_m409(NULL /*static, unused*/, L_17, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_16, (String_t*) &_stringLiteral1125, L_22);
		Dictionary_2_t122 * L_23 = V_0;
		String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_25 = ___bType;
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(BoostType_t504_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral1126, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t509 * L_31 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_32 = ___bType;
		NullCheck(L_31);
		int32_t L_33 = PlayerStats_GetPurchasedBoostCount_m3716(L_31, L_32, /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = String_Concat_m409(NULL /*static, unused*/, L_30, L_35, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1127, L_36);
		Dictionary_2_t122 * L_37 = V_0;
		ParseAnalytics_TrackEventAsync_m4489(NULL /*static, unused*/, (String_t*) &_stringLiteral1128, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParseAnalyticsController::OnGamePhaseChanged()
extern "C" void ParseAnalyticsController_OnGamePhaseChanged_m3396 (ParseAnalyticsController_t630 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		ParseAnalyticsController_LogGameOverEvent_m3397(__this, /*hidden argument*/NULL);
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
extern const MethodInfo* Dictionary_2__ctor_m3911_MethodInfo_var;
extern "C" void ParseAnalyticsController_LogGameOverEvent_m3397 (ParseAnalyticsController_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Dictionary_2__ctor_m3911_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
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
		Dictionary_2__ctor_m3911(L_0, /*hidden argument*/Dictionary_2__ctor_m3911_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t122 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t664 * L_3 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = GamePhaseState_get_instancesFinishedThisSession_m3636(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m409(NULL /*static, unused*/, L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral1123, L_7);
		Dictionary_2_t122 * L_8 = V_0;
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GamePhaseState_t664 * L_10 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = GamePhaseState_get_instancesFinishedEver_m3638(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m409(NULL /*static, unused*/, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral1124, L_14);
		Dictionary_2_t122 * L_15 = V_0;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t509 * L_17 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = PlayerStats_get_gameScore_m3699(L_17, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_m409(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral542, L_21);
		Dictionary_2_t122 * L_22 = V_0;
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		PlayerStats_t509 * L_24 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = PlayerStats_get_money_m3701(L_24, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_22, (String_t*) &_stringLiteral1129, L_28);
		Dictionary_2_t122 * L_29 = V_0;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GameLevelState_t660 * L_31 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = GameLevelState_get_gameLevel_m3604(L_31, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35 = String_Concat_m409(NULL /*static, unused*/, L_30, L_34, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1125, L_35);
		Dictionary_2_t122 * L_36 = V_0;
		PlayerStats_t509 * L_37 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = PlayerStats_GetHighScore_m3720(L_37, /*hidden argument*/NULL);
		PlayerStats_t509 * L_39 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40 = PlayerStats_get_gameScore_m3699(L_39, /*hidden argument*/NULL);
		G_B1_0 = (String_t*) &_stringLiteral1130;
		G_B1_1 = L_36;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_40))))
		{
			G_B2_0 = (String_t*) &_stringLiteral1130;
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
		ParseAnalytics_TrackEventAsync_m4489(NULL /*static, unused*/, (String_t*) &_stringLiteral1131, L_41, /*hidden argument*/NULL);
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
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
struct GameObject_t352;
struct TimerWidget_t596;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TimerWidget>()
// !!0 UnityEngine.GameObject::GetComponent<TimerWidget>()
#define GameObject_GetComponent_TisTimerWidget_t596_m4490(__this, method) (( TimerWidget_t596 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void PawController::.ctor()
extern "C" void PawController__ctor_m3398 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Awake()
extern "C" void PawController_Awake_m3399 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_17 = 0;
		return;
	}
}
// System.Void PawController::Start()
extern "C" void PawController_Start_m3400 (PawController_t557 * __this, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	{
		__this->___swipePhase_4 = 0;
		__this->___swipeSpeed_14 = (14.0f);
		__this->___initialPauseLength_15 = (0.5f);
		Transform_t406 * L_0 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Transform_t406 * L_1 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_1);
		Vector3_t523  L_2 = Transform_get_localPosition_m4400(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m4402(L_0, L_2, /*hidden argument*/NULL);
		Transform_t406 * L_3 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_3);
		Vector3_t523  L_4 = Transform_get_localPosition_m4400(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Vector3_get_magnitude_m4423((&V_0), /*hidden argument*/NULL);
		__this->___pawHomeCatTransformMagnitude_20 = L_5;
		CircleCollider2D_t632 * L_6 = (__this->___normalCollider_11);
		NullCheck(L_6);
		CircleCollider2D_set_radius_m4491(L_6, (0.4f), /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_7 = (__this->___bigCollider_12);
		CircleCollider2D_t632 * L_8 = (__this->___normalCollider_11);
		NullCheck(L_8);
		float L_9 = CircleCollider2D_get_radius_m4492(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		CircleCollider2D_set_radius_m4491(L_7, ((float)((float)L_9*(float)(2.0f))), /*hidden argument*/NULL);
		PawController_RegisterForEvents_m3402(__this, /*hidden argument*/NULL);
		PawController_UpdatePawState_m3408(__this, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3410(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::OnDestroy()
extern "C" void PawController_OnDestroy_m3401 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		PawController_UnregisterForEvents_m3403(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3404_MethodInfo_var;
extern "C" void PawController_RegisterForEvents_m3402 (PawController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		PawController_OnBoostUsageChanged_m3404_MethodInfo_var = il2cpp_codegen_method_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t493 * L_0 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)PawController_OnBoostUsageChanged_m3404_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_2 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2781(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_17 = 1;
		return;
	}
}
// System.Void PawController::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* PawController_OnBoostUsageChanged_m3404_MethodInfo_var;
extern "C" void PawController_UnregisterForEvents_m3403 (PawController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		PawController_OnBoostUsageChanged_m3404_MethodInfo_var = il2cpp_codegen_method_info_from_index(568);
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
		BoostConfig_t493 * L_1 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PawController_OnBoostUsageChanged_m3404_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_3 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2782(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PawController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PawController_OnBoostUsageChanged_m3404 (PawController_t557 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
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
		__this->___initialPauseLength_15 = (0.0005f);
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
		PawController_UpdatePawState_m3408(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void PawController::Update()
extern "C" void PawController_Update_m3405 (PawController_t557 * __this, const MethodInfo* method)
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
		float L_1 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___timeStartNextSwipe_5);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		__this->___timeStartNextSwipe_5 = (0.0f);
		Vector3_t523  L_3 = (__this->___nextSwipeLocationCat_2);
		__this->___currentSwipeLocationCat_3 = L_3;
		PawController_SetPhase_m3406(__this, 1, /*hidden argument*/NULL);
	}

IL_003e:
	{
		PawController_UpdateTimerWidget_m3416(__this, /*hidden argument*/NULL);
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
		Vector3_t523  L_6 = (__this->___currentSwipeLocationCat_3);
		bool L_7 = PawController_MovePawTowards_m3409(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		PawController_RemoveTimer_m3417(__this, /*hidden argument*/NULL);
		PawController_SetPhase_m3406(__this, 2, /*hidden argument*/NULL);
	}

IL_0080:
	{
		goto IL_00c0;
	}

IL_0085:
	{
		float L_8 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = V_0;
		float L_10 = (__this->___extendedPauseStarted_6);
		if ((!(((float)((float)((float)L_9-(float)L_10))) > ((float)(0.1f)))))
		{
			goto IL_00a4;
		}
	}
	{
		PawController_SetPhase_m3406(__this, 0, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		goto IL_00c0;
	}

IL_00a9:
	{
		Transform_t406 * L_11 = (__this->___pawHomeCatTransform_18);
		NullCheck(L_11);
		Vector3_t523  L_12 = Transform_get_localPosition_m4400(L_11, /*hidden argument*/NULL);
		PawController_MovePawTowards_m3409(__this, L_12, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_00c0:
	{
		return;
	}
}
// System.Void PawController::SetPhase(PawController/SwipePhase)
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern "C" void PawController_SetPhase_m3406 (PawController_t557 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
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
		DeadMouseRelay_t519 * L_4 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_5 = (__this->___killsThisSwipe_16);
		Transform_t406 * L_6 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t523  L_7 = Transform_get_position_m4257(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		DeadMouseRelay_HandleMultiKill_m2838(L_4, L_5, L_7, /*hidden argument*/NULL);
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
		float L_9 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___extendedPauseStarted_6 = L_9;
		PawController_PlayRandomSound_m3407(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		PawController_UpdatePawState_m3408(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::PlayRandomSound()
extern "C" void PawController_PlayRandomSound_m3407 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		SFXPlayer_t580 * L_0 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t580 * L_1 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		SFXTypeU5BU5D_t579* L_2 = (L_1->___slapIds_5);
		NullCheck(L_0);
		SFXPlayer_PlayRandom_m3125(L_0, L_2, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::UpdatePawState()
extern "C" void PawController_UpdatePawState_m3408 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t493 * L_0 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2785(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		GameObject_t352 * L_2 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_2);
		GameObject_SetActive_m4172(L_2, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_3);
		GameObject_SetActive_m4172(L_3, 0, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_4 = (__this->___normalCollider_11);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3972(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m4172(L_5, 0, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_6 = (__this->___bigCollider_12);
		NullCheck(L_6);
		GameObject_t352 * L_7 = Component_get_gameObject_m3972(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m4172(L_7, 1, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___swipePhase_4);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_007f;
		}
	}
	{
		GameObject_t352 * L_9 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_9);
		GameObject_SetActive_m4172(L_9, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_10 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_10);
		GameObject_SetActive_m4172(L_10, 0, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_11 = (__this->___bigCollider_12);
		NullCheck(L_11);
		Collider2D_set_isTrigger_m4493(L_11, 1, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_007f:
	{
		GameObject_t352 * L_12 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_12);
		GameObject_SetActive_m4172(L_12, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_13 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_13);
		GameObject_SetActive_m4172(L_13, 1, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_14 = (__this->___bigCollider_12);
		NullCheck(L_14);
		Collider2D_set_isTrigger_m4493(L_14, 0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		goto IL_013b;
	}

IL_00a8:
	{
		GameObject_t352 * L_15 = (__this->___bigDangerPawArtGameObject_10);
		NullCheck(L_15);
		GameObject_SetActive_m4172(L_15, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_16 = (__this->___bigPawArtGameObject_9);
		NullCheck(L_16);
		GameObject_SetActive_m4172(L_16, 0, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_17 = (__this->___bigCollider_12);
		NullCheck(L_17);
		GameObject_t352 * L_18 = Component_get_gameObject_m3972(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m4172(L_18, 0, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_19 = (__this->___normalCollider_11);
		NullCheck(L_19);
		GameObject_t352 * L_20 = Component_get_gameObject_m3972(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_m4172(L_20, 1, /*hidden argument*/NULL);
		int32_t L_21 = (__this->___swipePhase_4);
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_0117;
		}
	}
	{
		GameObject_t352 * L_22 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_22);
		GameObject_SetActive_m4172(L_22, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_23 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_23);
		GameObject_SetActive_m4172(L_23, 0, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_24 = (__this->___normalCollider_11);
		NullCheck(L_24);
		Collider2D_set_isTrigger_m4493(L_24, 1, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0117:
	{
		GameObject_t352 * L_25 = (__this->___dangerPawArtGameObject_8);
		NullCheck(L_25);
		GameObject_SetActive_m4172(L_25, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_26 = (__this->___normalPawArtGameObject_7);
		NullCheck(L_26);
		GameObject_SetActive_m4172(L_26, 1, /*hidden argument*/NULL);
		CircleCollider2D_t632 * L_27 = (__this->___normalCollider_11);
		NullCheck(L_27);
		Collider2D_set_isTrigger_m4493(L_27, 0, /*hidden argument*/NULL);
	}

IL_013b:
	{
		return;
	}
}
// System.Boolean PawController::MovePawTowards(UnityEngine.Vector3)
extern "C" bool PawController_MovePawTowards_m3409 (PawController_t557 * __this, Vector3_t523  ___targetLocationCat, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t523  V_1 = {0};
	Vector3_t523  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t523  V_6 = {0};
	bool V_7 = false;
	Vector3_t523  V_8 = {0};
	{
		(&___targetLocationCat)->___z_3 = (0.0f);
		float L_0 = Vector3_get_magnitude_m4423((&___targetLocationCat), /*hidden argument*/NULL);
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
		Transform_t406 * L_3 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t523  L_4 = Transform_get_localPosition_m4400(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t523  L_5 = ___targetLocationCat;
		Vector3_t523  L_6 = V_1;
		Vector3_t523  L_7 = Vector3_op_Subtraction_m4494(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (__this->___swipeSpeed_14);
		float L_10 = V_3;
		V_4 = ((float)((float)L_9*(float)L_10));
		float L_11 = Vector3_get_magnitude_m4423((&V_2), /*hidden argument*/NULL);
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
		Vector3_t523  L_15 = ___targetLocationCat;
		V_6 = L_15;
		V_7 = 1;
		goto IL_008f;
	}

IL_0071:
	{
		Vector3_t523  L_16 = V_2;
		float L_17 = V_4;
		Vector3_t523  L_18 = Vector3_op_Multiply_m4262(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = V_5;
		Vector3_t523  L_20 = Vector3_op_Division_m4495(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		Vector3_t523  L_21 = V_1;
		Vector3_t523  L_22 = V_8;
		Vector3_t523  L_23 = Vector3_op_Addition_m4401(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		V_7 = 0;
	}

IL_008f:
	{
		Transform_t406 * L_24 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Vector3_t523  L_25 = V_6;
		NullCheck(L_24);
		Transform_set_localPosition_m4402(L_24, L_25, /*hidden argument*/NULL);
		PawController_UpdateArmRotation_m3410(__this, /*hidden argument*/NULL);
		bool L_26 = V_7;
		return L_26;
	}
}
// System.Void PawController::UpdateArmRotation()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void PawController_UpdateArmRotation_m3410 (PawController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t523  V_0 = {0};
	float V_1 = 0.0f;
	{
		Transform_t406 * L_0 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t523  L_1 = Transform_get_localPosition_m4400(L_0, /*hidden argument*/NULL);
		Transform_t406 * L_2 = (__this->___shoulderJointCatTransform_19);
		NullCheck(L_2);
		Vector3_t523  L_3 = Transform_get_localPosition_m4400(L_2, /*hidden argument*/NULL);
		Vector3_t523  L_4 = Vector3_op_Subtraction_m4494(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		float L_6 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_7 = atan2f(L_5, L_6);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_9 = V_1;
		Quaternion_t813  L_10 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_9*(float)(57.29578f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_m4406(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::Swipe(UnityEngine.Vector3)
extern "C" void PawController_Swipe_m3411 (PawController_t557 * __this, Vector3_t523  ___location, const MethodInfo* method)
{
	{
		Vector3_t523  L_0 = ___location;
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
		float L_2 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___initialPauseLength_15);
		__this->___timeStartNextSwipe_5 = ((float)((float)L_2+(float)L_3));
	}

IL_002f:
	{
		return;
	}
}
// System.Void PawController::CancelSwipe()
extern "C" void PawController_CancelSwipe_m3412 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		PawController_RemoveTimer_m3417(__this, /*hidden argument*/NULL);
		PawController_SetPhase_m3406(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PawController::AddTimer()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTimerWidget_t596_m4490_MethodInfo_var;
extern "C" void PawController_AddTimer_m3413 (PawController_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisTimerWidget_t596_m4490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484217);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		PawController_RemoveTimer_m3417(__this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = (__this->___timerWidgetPrototype_21);
		Vector3_t523  L_1 = {0};
		Vector3__ctor_m4250(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t813  L_2 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_3 = Object_Instantiate_m4367(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		TimerWidget_t596 * L_5 = GameObject_GetComponent_TisTimerWidget_t596_m4490(L_4, /*hidden argument*/GameObject_GetComponent_TisTimerWidget_t596_m4490_MethodInfo_var);
		__this->___timerWidget_22 = L_5;
		TimerWidget_t596 * L_6 = (__this->___timerWidget_22);
		float L_7 = (__this->___initialPauseLength_15);
		Vector3_t523  L_8 = PawController_GetTimerWidgetPosition_m3414(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TimerWidget_Configure_m3214(L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 PawController::GetTimerWidgetPosition()
extern "C" Vector3_t523  PawController_GetTimerWidgetPosition_m3414 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t406 * L_1 = Transform_get_parent_m4496(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t406 * L_2 = Component_get_transform_m4252(L_1, /*hidden argument*/NULL);
		Vector3_t523  L_3 = (__this->___nextSwipeLocationCat_2);
		NullCheck(L_2);
		Vector3_t523  L_4 = Transform_TransformVector_m4464(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean PawController::ShouldHaveTimer()
extern "C" bool PawController_ShouldHaveTimer_m3415 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___timeStartNextSwipe_5);
		return ((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
// System.Void PawController::UpdateTimerWidget()
extern "C" void PawController_UpdateTimerWidget_m3416 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		bool L_0 = PawController_ShouldHaveTimer_m3415(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		TimerWidget_t596 * L_1 = (__this->___timerWidget_22);
		bool L_2 = Object_op_Equality_m3997(NULL /*static, unused*/, L_1, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		PawController_AddTimer_m3413(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		TimerWidget_t596 * L_3 = (__this->___timerWidget_22);
		Vector3_t523  L_4 = PawController_GetTimerWidgetPosition_m3414(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TimerWidget_UpdatePosition_m3215(L_3, L_4, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0038:
	{
		TimerWidget_t596 * L_5 = (__this->___timerWidget_22);
		bool L_6 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_5, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		PawController_RemoveTimer_m3417(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void PawController::RemoveTimer()
extern "C" void PawController_RemoveTimer_m3417 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		TimerWidget_t596 * L_0 = (__this->___timerWidget_22);
		bool L_1 = Object_op_Inequality_m3893(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		TimerWidget_t596 * L_2 = (__this->___timerWidget_22);
		NullCheck(L_2);
		GameObject_t352 * L_3 = Component_get_gameObject_m3972(L_2, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___timerWidget_22 = (TimerWidget_t596 *)NULL;
	}

IL_0028:
	{
		return;
	}
}
// System.Void PawController::CountKill()
extern "C" void PawController_CountKill_m3418 (PawController_t557 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___killsThisSwipe_16);
		__this->___killsThisSwipe_16 = ((int32_t)((int32_t)L_0+(int32_t)1));
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



// System.Void PlayerController/TurnedWithTapHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TurnedWithTapHandler__ctor_m3419 (TurnedWithTapHandler_t634 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerController/TurnedWithTapHandler::Invoke()
extern "C" void TurnedWithTapHandler_Invoke_m3420 (TurnedWithTapHandler_t634 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TurnedWithTapHandler_Invoke_m3420((TurnedWithTapHandler_t634 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_TurnedWithTapHandler_t634(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerController/TurnedWithTapHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TurnedWithTapHandler_BeginInvoke_m3421 (TurnedWithTapHandler_t634 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerController/TurnedWithTapHandler::EndInvoke(System.IAsyncResult)
extern "C" void TurnedWithTapHandler_EndInvoke_m3422 (TurnedWithTapHandler_t634 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerController/TurnedWithDragHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TurnedWithDragHandler__ctor_m3423 (TurnedWithDragHandler_t635 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerController/TurnedWithDragHandler::Invoke()
extern "C" void TurnedWithDragHandler_Invoke_m3424 (TurnedWithDragHandler_t635 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TurnedWithDragHandler_Invoke_m3424((TurnedWithDragHandler_t635 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_TurnedWithDragHandler_t635(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerController/TurnedWithDragHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TurnedWithDragHandler_BeginInvoke_m3425 (TurnedWithDragHandler_t635 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerController/TurnedWithDragHandler::EndInvoke(System.IAsyncResult)
extern "C" void TurnedWithDragHandler_EndInvoke_m3426 (TurnedWithDragHandler_t635 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PlayerController/SwattedHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SwattedHandler__ctor_m3427 (SwattedHandler_t636 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerController/SwattedHandler::Invoke()
extern "C" void SwattedHandler_Invoke_m3428 (SwattedHandler_t636 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SwattedHandler_Invoke_m3428((SwattedHandler_t636 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SwattedHandler_t636(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerController/SwattedHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SwattedHandler_BeginInvoke_m3429 (SwattedHandler_t636 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerController/SwattedHandler::EndInvoke(System.IAsyncResult)
extern "C" void SwattedHandler_EndInvoke_m3430 (SwattedHandler_t636 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct GameObject_t352;
struct PawController_t557;
// Declaration !!0 UnityEngine.GameObject::GetComponent<PawController>()
// !!0 UnityEngine.GameObject::GetComponent<PawController>()
#define GameObject_GetComponent_TisPawController_t557_m4497(__this, method) (( PawController_t557 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
struct GameObject_t352;
struct FartPuff_t522;
// Declaration !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
// !!0 UnityEngine.GameObject::GetComponent<FartPuff>()
#define GameObject_GetComponent_TisFartPuff_t522_m4498(__this, method) (( FartPuff_t522 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3431 (PlayerController_t637 * __this, const MethodInfo* method)
{
	{
		__this->___startCatAngle_2 = (45.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::add_TurnedWithTap(PlayerController/TurnedWithTapHandler)
extern TypeInfo* TurnedWithTapHandler_t634_il2cpp_TypeInfo_var;
extern "C" void PlayerController_add_TurnedWithTap_m3432 (PlayerController_t637 * __this, TurnedWithTapHandler_t634 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TurnedWithTapHandler_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		TurnedWithTapHandler_t634 * L_0 = (__this->___TurnedWithTap_17);
		TurnedWithTapHandler_t634 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TurnedWithTap_17 = ((TurnedWithTapHandler_t634 *)Castclass(L_2, TurnedWithTapHandler_t634_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerController::remove_TurnedWithTap(PlayerController/TurnedWithTapHandler)
extern TypeInfo* TurnedWithTapHandler_t634_il2cpp_TypeInfo_var;
extern "C" void PlayerController_remove_TurnedWithTap_m3433 (PlayerController_t637 * __this, TurnedWithTapHandler_t634 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TurnedWithTapHandler_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		TurnedWithTapHandler_t634 * L_0 = (__this->___TurnedWithTap_17);
		TurnedWithTapHandler_t634 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TurnedWithTap_17 = ((TurnedWithTapHandler_t634 *)Castclass(L_2, TurnedWithTapHandler_t634_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerController::add_TurnedWithDrag(PlayerController/TurnedWithDragHandler)
extern TypeInfo* TurnedWithDragHandler_t635_il2cpp_TypeInfo_var;
extern "C" void PlayerController_add_TurnedWithDrag_m3434 (PlayerController_t637 * __this, TurnedWithDragHandler_t635 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TurnedWithDragHandler_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		TurnedWithDragHandler_t635 * L_0 = (__this->___TurnedWithDrag_18);
		TurnedWithDragHandler_t635 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TurnedWithDrag_18 = ((TurnedWithDragHandler_t635 *)Castclass(L_2, TurnedWithDragHandler_t635_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerController::remove_TurnedWithDrag(PlayerController/TurnedWithDragHandler)
extern TypeInfo* TurnedWithDragHandler_t635_il2cpp_TypeInfo_var;
extern "C" void PlayerController_remove_TurnedWithDrag_m3435 (PlayerController_t637 * __this, TurnedWithDragHandler_t635 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TurnedWithDragHandler_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(555);
		s_Il2CppMethodIntialized = true;
	}
	{
		TurnedWithDragHandler_t635 * L_0 = (__this->___TurnedWithDrag_18);
		TurnedWithDragHandler_t635 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TurnedWithDrag_18 = ((TurnedWithDragHandler_t635 *)Castclass(L_2, TurnedWithDragHandler_t635_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerController::add_Swatted(PlayerController/SwattedHandler)
extern TypeInfo* SwattedHandler_t636_il2cpp_TypeInfo_var;
extern "C" void PlayerController_add_Swatted_m3436 (PlayerController_t637 * __this, SwattedHandler_t636 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SwattedHandler_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		s_Il2CppMethodIntialized = true;
	}
	{
		SwattedHandler_t636 * L_0 = (__this->___Swatted_19);
		SwattedHandler_t636 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Swatted_19 = ((SwattedHandler_t636 *)Castclass(L_2, SwattedHandler_t636_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerController::remove_Swatted(PlayerController/SwattedHandler)
extern TypeInfo* SwattedHandler_t636_il2cpp_TypeInfo_var;
extern "C" void PlayerController_remove_Swatted_m3437 (PlayerController_t637 * __this, SwattedHandler_t636 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SwattedHandler_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(556);
		s_Il2CppMethodIntialized = true;
	}
	{
		SwattedHandler_t636 * L_0 = (__this->___Swatted_19);
		SwattedHandler_t636 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Swatted_19 = ((SwattedHandler_t636 *)Castclass(L_2, SwattedHandler_t636_il2cpp_TypeInfo_var));
		return;
	}
}
// PlayerController/BodyMovementType PlayerController::get_bodyMovement()
extern "C" int32_t PlayerController_get_bodyMovement_m3438 (PlayerController_t637 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CbodyMovementU3Ek__BackingField_20);
		return L_0;
	}
}
// System.Void PlayerController::set_bodyMovement(PlayerController/BodyMovementType)
extern "C" void PlayerController_set_bodyMovement_m3439 (PlayerController_t637 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CbodyMovementU3Ek__BackingField_20 = L_0;
		return;
	}
}
// PlayerController PlayerController::get_instance()
extern TypeInfo* PlayerController_t637_il2cpp_TypeInfo_var;
extern "C" PlayerController_t637 * PlayerController_get_instance_m3440 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t637 * L_0 = ((PlayerController_t637_StaticFields*)PlayerController_t637_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void PlayerController::set_instance(PlayerController)
extern TypeInfo* PlayerController_t637_il2cpp_TypeInfo_var;
extern "C" void PlayerController_set_instance_m3441 (Object_t * __this /* static, unused */, PlayerController_t637 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(560);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_t637 * L_0 = ___value;
		((PlayerController_t637_StaticFields*)PlayerController_t637_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Void PlayerController::Awake()
extern TypeInfo* TipConfig_t623_il2cpp_TypeInfo_var;
extern "C" void PlayerController_Awake_m3442 (PlayerController_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_instance_m3441(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerController_set_bodyMovement_m3439(__this, 0, /*hidden argument*/NULL);
		TipConfig_t623 * L_0 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3535(L_0, (String_t*) &_stringLiteral1132, (String_t*) &_stringLiteral1116, /*hidden argument*/NULL);
		__this->___turningTip_13 = L_0;
		return;
	}
}
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m3443 (PlayerController_t637 * __this, const MethodInfo* method)
{
	{
		PlayerController_RegisterForEvents_m3445(__this, /*hidden argument*/NULL);
		PlayerController_Reset_m3449(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnDestroy()
extern "C" void PlayerController_OnDestroy_m3444 (PlayerController_t637 * __this, const MethodInfo* method)
{
	{
		PlayerController_UnregisterForEvents_m3446(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3447_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3448_MethodInfo_var;
extern "C" void PlayerController_RegisterForEvents_m3445 (PlayerController_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		PlayerController_OnInstanceChanged_m3447_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
		PlayerController_OnBoostActive_m3448_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3447_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_3 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m3626(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t493 * L_4 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3448_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_6 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_add_BoostActive_m2781(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerController_OnInstanceChanged_m3447_MethodInfo_var;
extern const MethodInfo* PlayerController_OnBoostActive_m3448_MethodInfo_var;
extern "C" void PlayerController_UnregisterForEvents_m3446 (PlayerController_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		BoostActiveEventHandler_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		PlayerController_OnInstanceChanged_m3447_MethodInfo_var = il2cpp_codegen_method_info_from_index(570);
		PlayerController_OnBoostActive_m3448_MethodInfo_var = il2cpp_codegen_method_info_from_index(571);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerController_OnInstanceChanged_m3447_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_3 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3627(L_1, L_3, /*hidden argument*/NULL);
		BoostConfig_t493 * L_4 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)PlayerController_OnBoostActive_m3448_MethodInfo_var };
		BoostActiveEventHandler_t505 * L_6 = (BoostActiveEventHandler_t505 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t505_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2770(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoostConfig_remove_BoostActive_m2782(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void PlayerController::OnInstanceChanged()
extern "C" void PlayerController_OnInstanceChanged_m3447 (PlayerController_t637 * __this, const MethodInfo* method)
{
	{
		PlayerController_Reset_m3449(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void PlayerController_OnBoostActive_m3448 (PlayerController_t637 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3457(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void PlayerController::Reset()
extern "C" void PlayerController_Reset_m3449 (PlayerController_t637 * __this, const MethodInfo* method)
{
	{
		PlayerController_set_bodyMovement_m3439(__this, 0, /*hidden argument*/NULL);
		float L_0 = (__this->___startCatAngle_2);
		__this->___currentTurnAngleDegrees_9 = L_0;
		float L_1 = (__this->___currentTurnAngleDegrees_9);
		__this->___targetTurnAngleDegrees_8 = L_1;
		Transform_t406 * L_2 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_3 = (__this->___currentTurnAngleDegrees_9);
		Quaternion_t813  L_4 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m4372(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m3450 (PlayerController_t637 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		PlayerController_MaybeMakeFartPuff_m3456(__this, /*hidden argument*/NULL);
		int32_t L_0 = PlayerController_get_bodyMovement_m3438(__this, /*hidden argument*/NULL);
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
		PlayerController_UpdateDrag_m3452(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_002b:
	{
		PlayerController_UpdateTurn_m3451(__this, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0036:
	{
		return;
	}
}
// System.Void PlayerController::UpdateTurn()
extern "C" void PlayerController_UpdateTurn_m3451 (PlayerController_t637 * __this, const MethodInfo* method)
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
		float L_3 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		PlayerController_set_bodyMovement_m3439(__this, 0, /*hidden argument*/NULL);
	}

IL_004d:
	{
		goto IL_008e;
	}

IL_0052:
	{
		float L_7 = (__this->___currentTurnAngleDegrees_9);
		float L_8 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		PlayerController_set_bodyMovement_m3439(__this, 0, /*hidden argument*/NULL);
	}

IL_008e:
	{
		Transform_t406 * L_12 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_13 = (__this->___currentTurnAngleDegrees_9);
		Quaternion_t813  L_14 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m4372(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::UpdateDrag()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void PlayerController_UpdateDrag_m3452 (PlayerController_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t523  V_0 = {0};
	bool V_1 = false;
	Vector3_t523  V_2 = {0};
	Vector3_t523  V_3 = {0};
	float V_4 = 0.0f;
	{
		InputHandler_t533 * L_0 = InputHandler_get_instance_m2887(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InputHandler_GetWorldClickPosition_m2897(L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		PlayerController_set_bodyMovement_m3439(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_001b:
	{
		Camera_t532 * L_3 = Camera_get_main_m4223(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t523  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t523  L_5 = Camera_ScreenToWorldPoint_m4258(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_t406 * L_6 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Vector3_t523  L_7 = V_2;
		NullCheck(L_6);
		Vector3_t523  L_8 = Transform_InverseTransformPoint_m4499(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector3_t523  L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		float L_10 = Utilities_GetZAngle_m3825(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Transform_t406 * L_11 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_12 = V_4;
		float L_13 = (__this->___dragAnchorAngleCat_11);
		Vector3_t523  L_14 = {0};
		Vector3__ctor_m4250(&L_14, (0.0f), (0.0f), ((float)((float)L_12-(float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m4500(L_11, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::HandleDragClickStart(UnityEngine.Vector2)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var;
extern "C" void PlayerController_HandleDragClickStart_m3453 (PlayerController_t637 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484220);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerController_set_bodyMovement_m3439(__this, 2, /*hidden argument*/NULL);
		Transform_t406 * L_0 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Vector2_t110  L_1 = ___worldPoint2d;
		Vector3_t523  L_2 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t523  L_3 = Transform_InverseTransformPoint_m4499(L_0, L_2, /*hidden argument*/NULL);
		__this->___dragAnchorCat_10 = L_3;
		Vector3_t523 * L_4 = &(__this->___dragAnchorCat_10);
		L_4->___z_3 = (0.0f);
		Vector3_t523  L_5 = (__this->___dragAnchorCat_10);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		float L_6 = Utilities_GetZAngle_m3825(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___dragAnchorAngleCat_11 = L_6;
		GameObject_t352 * L_7 = (__this->___rightPawGameObject_3);
		NullCheck(L_7);
		PawController_t557 * L_8 = GameObject_GetComponent_TisPawController_t557_m4497(L_7, /*hidden argument*/GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var);
		NullCheck(L_8);
		PawController_CancelSwipe_m3412(L_8, /*hidden argument*/NULL);
		GameObject_t352 * L_9 = (__this->___leftPawGameObject_4);
		NullCheck(L_9);
		PawController_t557 * L_10 = GameObject_GetComponent_TisPawController_t557_m4497(L_9, /*hidden argument*/GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var);
		NullCheck(L_10);
		PawController_CancelSwipe_m3412(L_10, /*hidden argument*/NULL);
		TurnedWithDragHandler_t635 * L_11 = (__this->___TurnedWithDrag_18);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		TurnedWithDragHandler_t635 * L_12 = (__this->___TurnedWithDrag_18);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerController/TurnedWithDragHandler::Invoke() */, L_12);
	}

IL_0075:
	{
		return;
	}
}
// System.Void PlayerController::HandleSlapClickStart(UnityEngine.Vector2)
extern const MethodInfo* GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var;
extern "C" void PlayerController_HandleSlapClickStart_m3454 (PlayerController_t637 * __this, Vector2_t110  ___worldPoint2d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484220);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t523  V_0 = {0};
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	Quaternion_t813  V_3 = {0};
	Vector3_t523  V_4 = {0};
	{
		Vector2_t110  L_0 = ___worldPoint2d;
		GameObject_t352 * L_1 = PlayerController_GetPawToHitWorldLocation_m3458(__this, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		GameObject_t352 * L_2 = V_2;
		bool L_3 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		GameObject_t352 * L_4 = V_2;
		NullCheck(L_4);
		PawController_t557 * L_5 = GameObject_GetComponent_TisPawController_t557_m4497(L_4, /*hidden argument*/GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var);
		Vector3_t523  L_6 = V_0;
		NullCheck(L_5);
		PawController_Swipe_m3411(L_5, L_6, /*hidden argument*/NULL);
		SwattedHandler_t636 * L_7 = (__this->___Swatted_19);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		SwattedHandler_t636 * L_8 = (__this->___Swatted_19);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerController/SwattedHandler::Invoke() */, L_8);
	}

IL_0039:
	{
		goto IL_00ab;
	}

IL_003e:
	{
		Transform_t406 * L_9 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t813  L_10 = Transform_get_rotation_m4395(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Vector3_t523  L_11 = Quaternion_get_eulerAngles_m4438((&V_3), /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = ((&V_4)->___z_3);
		__this->___currentTurnAngleDegrees_9 = L_12;
		float L_13 = V_1;
		float L_14 = (__this->___currentTurnAngleDegrees_9);
		__this->___targetTurnAngleDegrees_8 = ((float)((float)L_13+(float)L_14));
		PlayerController_set_bodyMovement_m3439(__this, 1, /*hidden argument*/NULL);
		GameObject_t352 * L_15 = (__this->___rightPawGameObject_3);
		NullCheck(L_15);
		PawController_t557 * L_16 = GameObject_GetComponent_TisPawController_t557_m4497(L_15, /*hidden argument*/GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var);
		NullCheck(L_16);
		PawController_CancelSwipe_m3412(L_16, /*hidden argument*/NULL);
		GameObject_t352 * L_17 = (__this->___leftPawGameObject_4);
		NullCheck(L_17);
		PawController_t557 * L_18 = GameObject_GetComponent_TisPawController_t557_m4497(L_17, /*hidden argument*/GameObject_GetComponent_TisPawController_t557_m4497_MethodInfo_var);
		NullCheck(L_18);
		PawController_CancelSwipe_m3412(L_18, /*hidden argument*/NULL);
		TurnedWithTapHandler_t634 * L_19 = (__this->___TurnedWithTap_17);
		if (!L_19)
		{
			goto IL_00ab;
		}
	}
	{
		TurnedWithTapHandler_t634 * L_20 = (__this->___TurnedWithTap_17);
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerController/TurnedWithTapHandler::Invoke() */, L_20);
	}

IL_00ab:
	{
		HeadMovement_t530 * L_21 = (__this->___headMovement_5);
		Vector3_t523  L_22 = V_0;
		NullCheck(L_21);
		HeadMovement_LookTowards_m2880(L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnApplicationFocus(System.Boolean)
extern "C" void PlayerController_OnApplicationFocus_m3455 (PlayerController_t637 * __this, bool ___focusStatus, const MethodInfo* method)
{
	{
		bool L_0 = ___focusStatus;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		DebugConfig_t658 * L_1 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (L_1->___useDebugValues_5);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		PlayerController_set_bodyMovement_m3439(__this, 0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void PlayerController::MaybeMakeFartPuff()
extern "C" void PlayerController_MaybeMakeFartPuff_m3456 (PlayerController_t637 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t493 * L_0 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = BoostConfig_get_activeBoost_m2785(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___lastFartTime_15);
		float L_4 = (__this->___fartPause_16);
		if ((!(((float)L_2) > ((float)((float)((float)L_3+(float)L_4))))))
		{
			goto IL_002d;
		}
	}
	{
		PlayerController_MakeFartPuff_m3457(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PlayerController::MakeFartPuff()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFartPuff_t522_m4498_MethodInfo_var;
extern "C" void PlayerController_MakeFartPuff_m3457 (PlayerController_t637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisFartPuff_t522_m4498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484221);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	FartPuff_t522 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___fartPuffPrototype_6);
		GameObject_t352 * L_1 = (__this->___butthole_7);
		NullCheck(L_1);
		Transform_t406 * L_2 = GameObject_get_transform_m4255(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t523  L_3 = Transform_get_position_m4257(L_2, /*hidden argument*/NULL);
		Quaternion_t813  L_4 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_5 = Object_Instantiate_m4367(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_5, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_6 = V_0;
		NullCheck(L_6);
		FartPuff_t522 * L_7 = GameObject_GetComponent_TisFartPuff_t522_m4498(L_6, /*hidden argument*/GameObject_GetComponent_TisFartPuff_t522_m4498_MethodInfo_var);
		V_1 = L_7;
		FartPuff_t522 * L_8 = V_1;
		Transform_t406 * L_9 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t813  L_10 = Transform_get_rotation_m4395(L_9, /*hidden argument*/NULL);
		Vector3_t523  L_11 = Vector3_get_left_m4501(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t523  L_12 = Quaternion_op_Multiply_m4428(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		FartPuff_SetDirection_m2854(L_8, L_12, /*hidden argument*/NULL);
		float L_13 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastFartTime_15 = L_13;
		return;
	}
}
// UnityEngine.GameObject PlayerController::GetPawToHitWorldLocation(UnityEngine.Vector2,UnityEngine.Vector3&,System.Single&)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* ConeOfViewController_t609_il2cpp_TypeInfo_var;
extern "C" GameObject_t352 * PlayerController_GetPawToHitWorldLocation_m3458 (PlayerController_t637 * __this, Vector2_t110  ___worldPoint2d, Vector3_t523 * ___swipeLocationCat, float* ___angle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		ConeOfViewController_t609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t523 * L_0 = ___swipeLocationCat;
		Transform_t406 * L_1 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		Vector2_t110  L_2 = ___worldPoint2d;
		Vector3_t523  L_3 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t523  L_4 = Transform_InverseTransformPoint_m4499(L_1, L_3, /*hidden argument*/NULL);
		*L_0 = L_4;
		float* L_5 = ___angle;
		*((float*)(L_5)) = (float)(0.0f);
		Vector3_t523 * L_6 = ___swipeLocationCat;
		float L_7 = Vector3_get_magnitude_m4423(L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) > ((float)(4.6f)))))
		{
			goto IL_004b;
		}
	}
	{
		Vector3_t523 * L_8 = ___swipeLocationCat;
		Vector3_t523 * L_9 = ___swipeLocationCat;
		Vector3_t523 * L_10 = ___swipeLocationCat;
		float L_11 = Vector3_get_magnitude_m4423(L_10, /*hidden argument*/NULL);
		Vector3_t523  L_12 = Vector3_op_Multiply_m4262(NULL /*static, unused*/, (*(Vector3_t523 *)L_9), ((float)((float)(4.6f)/(float)L_11)), /*hidden argument*/NULL);
		*L_8 = L_12;
	}

IL_004b:
	{
		float* L_13 = ___angle;
		Vector3_t523 * L_14 = ___swipeLocationCat;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		float L_15 = Utilities_GetZAngle_m3825(NULL /*static, unused*/, (*(Vector3_t523 *)L_14), /*hidden argument*/NULL);
		*((float*)(L_13)) = (float)L_15;
		float* L_16 = ___angle;
		if ((!(((float)(*((float*)L_16))) >= ((float)(0.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		float* L_17 = ___angle;
		ConeOfViewController_t609 * L_18 = ((ConeOfViewController_t609_StaticFields*)ConeOfViewController_t609_il2cpp_TypeInfo_var->static_fields)->___instance_6;
		NullCheck(L_18);
		float L_19 = ConeOfViewController_get_actualAngleRange_m3264(L_18, /*hidden argument*/NULL);
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
		ConeOfViewController_t609 * L_23 = ((ConeOfViewController_t609_StaticFields*)ConeOfViewController_t609_il2cpp_TypeInfo_var->static_fields)->___instance_6;
		NullCheck(L_23);
		float L_24 = ConeOfViewController_get_actualAngleRange_m3264(L_23, /*hidden argument*/NULL);
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
// RateMeController
#include "AssemblyU2DCSharp_RateMeController.h"
#ifndef _MSC_VER
#else
#endif
// RateMeController
#include "AssemblyU2DCSharp_RateMeControllerMethodDeclarations.h"



// System.Void RateMeController::.ctor()
extern "C" void RateMeController__ctor_m3459 (RateMeController_t638 * __this, const MethodInfo* method)
{
	{
		__this->___launchFrequency_2 = 1;
		__this->___minTimeFrequencySec_3 = (60.0000038f);
		__this->___waitToShow_5 = (3.0f);
		__this->___yOffset_7 = (-50.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::Start()
extern "C" void RateMeController_Start_m3460 (RateMeController_t638 * __this, const MethodInfo* method)
{
	{
		RateMeController_RegisterForEvents_m3462(__this, /*hidden argument*/NULL);
		RateMeController_OnGamePhaseChanged_m3464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::OnDestroy()
extern "C" void RateMeController_OnDestroy_m3461 (RateMeController_t638 * __this, const MethodInfo* method)
{
	{
		RateMeController_UnregisterForEvents_m3463(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* RateMeController_OnGamePhaseChanged_m3464_MethodInfo_var;
extern "C" void RateMeController_RegisterForEvents_m3462 (RateMeController_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		RateMeController_OnGamePhaseChanged_m3464_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RateMeController_OnGamePhaseChanged_m3464_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m3628(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RateMeController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* RateMeController_OnGamePhaseChanged_m3464_MethodInfo_var;
extern "C" void RateMeController_UnregisterForEvents_m3463 (RateMeController_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		RateMeController_OnGamePhaseChanged_m3464_MethodInfo_var = il2cpp_codegen_method_info_from_index(574);
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
		GamePhaseState_t664 * L_1 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)RateMeController_OnGamePhaseChanged_m3464_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_3 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void RateMeController::OnGamePhaseChanged()
extern TypeInfo* DelayedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* RateMeController_MaybeShowDialog_m3465_MethodInfo_var;
extern "C" void RateMeController_OnGamePhaseChanged_m3464 (RateMeController_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DelayedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(553);
		RateMeController_MaybeShowDialog_m3465_MethodInfo_var = il2cpp_codegen_method_info_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhaseDelayedEventScheduler_t560 * L_0 = (__this->___phaseDelayedEventScheduler_8);
		IntPtr_t L_1 = { (void*)RateMeController_MaybeShowDialog_m3465_MethodInfo_var };
		DelayedEventHandler_t559 * L_2 = (DelayedEventHandler_t559 *)il2cpp_codegen_object_new (DelayedEventHandler_t559_il2cpp_TypeInfo_var);
		DelayedEventHandler__ctor_m3031(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PhaseDelayedEventScheduler_OnPhaseChanged_m3043(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RateMeController::MaybeShowDialog()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern "C" bool RateMeController_MaybeShowDialog_m3465 (RateMeController_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GameObject_t352 * V_1 = {0};
	{
		bool L_0 = RateMeController_GetShouldShowRateMeRightNow_m3466(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		bool L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		GameObject_t352 * L_3 = (__this->___rateMeDialogPrototype_4);
		float L_4 = (__this->___yOffset_7);
		Vector2_t110  L_5 = {0};
		Vector2__ctor_m4446(&L_5, (0.0f), L_4, /*hidden argument*/NULL);
		Vector3_t523  L_6 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Quaternion_t813  L_7 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_8 = Object_Instantiate_m4367(NULL /*static, unused*/, L_3, L_6, L_7, /*hidden argument*/NULL);
		V_1 = ((GameObject_t352 *)IsInst(L_8, GameObject_t352_il2cpp_TypeInfo_var));
		DialogController_t610 * L_9 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_10 = V_1;
		NullCheck(L_9);
		DialogController_ShowDialog_m3276(L_9, L_10, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean RateMeController::GetShouldShowRateMeRightNow()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" bool RateMeController_GetShouldShowRateMeRightNow_m3466 (RateMeController_t638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		DebugConfig_t658 * L_0 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_IsDebugFlagSet_m3594(L_0, 2, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		PersistentStorage_t695 * L_2 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = PersistentStorage_GetBoolValue_m3812(L_2, (String_t*) &_stringLiteral1068, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		PersistentStorage_t695 * L_5 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_5);
		int32_t L_6 = PersistentStorage_GetIntValue_m3810(L_5, (String_t*) &_stringLiteral1065, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		PersistentStorage_t695 * L_7 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_7);
		int32_t L_8 = PersistentStorage_GetIntValue_m3810(L_7, (String_t*) &_stringLiteral1066, 0, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (__this->___launchFrequency_2);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)((int32_t)L_10+(int32_t)L_11)))))
		{
			goto IL_005d;
		}
	}
	{
		return 0;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		float L_12 = Utilities_SecondsSinceEpoch_m3836(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_12;
		PersistentStorage_t695 * L_13 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_13);
		float L_14 = PersistentStorage_GetFloatValue_m3808(L_13, (String_t*) &_stringLiteral1067, (0.0f), /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = V_3;
		float L_16 = V_4;
		float L_17 = (__this->___minTimeFrequencySec_3);
		if ((!(((float)L_15) < ((float)((float)((float)L_16+(float)L_17))))))
		{
			goto IL_008a;
		}
	}
	{
		return 0;
	}

IL_008a:
	{
		return 1;
	}
}
// RealAngusController
#include "AssemblyU2DCSharp_RealAngusController.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusController
#include "AssemblyU2DCSharp_RealAngusControllerMethodDeclarations.h"

// System.Collections.Generic.List`1<RealAngusElementButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// System.Collections.Generic.List`1<RealAngusElementButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
struct GameObject_t352;
struct RectTransform_t573;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t573_m4365(__this, method) (( RectTransform_t573 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
struct GameObject_t352;
struct RealAngusElementButton_t568;
// Declaration !!0 UnityEngine.GameObject::GetComponent<RealAngusElementButton>()
// !!0 UnityEngine.GameObject::GetComponent<RealAngusElementButton>()
#define GameObject_GetComponent_TisRealAngusElementButton_t568_m4502(__this, method) (( RealAngusElementButton_t568 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
struct GameObject_t352;
struct TipDialog_t600;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t600_m4503(__this, method) (( TipDialog_t600 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void RealAngusController::.ctor()
extern "C" void RealAngusController__ctor_m3467 (RealAngusController_t640 * __this, const MethodInfo* method)
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
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var;
extern "C" void RealAngusController_Awake_m3468 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484116);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = (__this->___parentScreen_3);
		NullCheck(L_0);
		RectTransform_t573 * L_1 = GameObject_GetComponent_TisRectTransform_t573_m4365(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var);
		__this->___parentScreenRectTransform_15 = L_1;
		return;
	}
}
// System.Void RealAngusController::Start()
extern "C" void RealAngusController_Start_m3469 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	{
		RealAngusController_RegisterForEvents_m3471(__this, /*hidden argument*/NULL);
		RealAngusController_CalculateLayoutNumbers_m3475(__this, /*hidden argument*/NULL);
		RealAngusController_LayoutDisplayElements_m3476(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::OnDestroy()
extern "C" void RealAngusController_OnDestroy_m3470 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	{
		RealAngusController_UnregisterForEvents_m3472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::RegisterForEvents()
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusController_OnRealAngusDataChanged_m3473_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnGamePhaseChanged_m3474_MethodInfo_var;
extern "C" void RealAngusController_RegisterForEvents_m3471 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		RealAngusController_OnRealAngusDataChanged_m3473_MethodInfo_var = il2cpp_codegen_method_info_from_index(576);
		RealAngusController_OnGamePhaseChanged_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(577);
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
		RealAngusData_t684 * L_1 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_2 = { (void*)RealAngusController_OnRealAngusDataChanged_m3473_MethodInfo_var };
		RealAngusDataChangedEventHandler_t682 * L_3 = (RealAngusDataChangedEventHandler_t682 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3722(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		RealAngusData_add_RealAngusDataChanged_m3727(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)RealAngusController_OnGamePhaseChanged_m3474_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_6 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GamePhaseChanged_m3628(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::UnregisterForEvents()
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* RealAngusController_OnRealAngusDataChanged_m3473_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnGamePhaseChanged_m3474_MethodInfo_var;
extern "C" void RealAngusController_UnregisterForEvents_m3472 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		RealAngusController_OnRealAngusDataChanged_m3473_MethodInfo_var = il2cpp_codegen_method_info_from_index(576);
		RealAngusController_OnGamePhaseChanged_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(577);
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
		RealAngusData_t684 * L_1 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		IntPtr_t L_2 = { (void*)RealAngusController_OnRealAngusDataChanged_m3473_MethodInfo_var };
		RealAngusDataChangedEventHandler_t682 * L_3 = (RealAngusDataChangedEventHandler_t682 *)il2cpp_codegen_object_new (RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var);
		RealAngusDataChangedEventHandler__ctor_m3722(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		RealAngusData_remove_RealAngusDataChanged_m3728(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)RealAngusController_OnGamePhaseChanged_m3474_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_6 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GamePhaseChanged_m3629(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void RealAngusController::OnRealAngusDataChanged()
extern "C" void RealAngusController_OnRealAngusDataChanged_m3473 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	{
		RealAngusController_LayoutDisplayElements_m3476(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::OnGamePhaseChanged()
extern "C" void RealAngusController_OnGamePhaseChanged_m3474 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	RealAngusElementButton_t568 * V_1 = {0};
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
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
		List_1_t639 * L_2 = (__this->___buttons_23);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t639 * L_3 = (__this->___buttons_23);
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
		List_1_t639 * L_5 = (__this->___buttons_23);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RealAngusElementButton_t568 * L_7 = (RealAngusElementButton_t568 *)VirtFuncInvoker1< RealAngusElementButton_t568 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusElementButton>::get_Item(System.Int32) */, L_5, L_6);
		V_1 = L_7;
		RealAngusElementButton_t568 * L_8 = V_1;
		NullCheck(L_8);
		RealAngusElementButton_OnFirstDisplayed_m3085(L_8, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_9 = V_1;
		NullCheck(L_9);
		Transform_t406 * L_10 = Component_get_transform_m4252(L_9, /*hidden argument*/NULL);
		GameObject_t352 * L_11 = (__this->___parentScreen_3);
		NullCheck(L_11);
		Transform_t406 * L_12 = GameObject_get_transform_m4255(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_SetParent_m4368(L_10, L_12, 0, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_13 = V_1;
		NullCheck(L_13);
		RealAngusElementButton_SetSelected_m3086(L_13, 0, 1, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_15 = V_0;
		List_1_t639 * L_16 = (__this->___buttons_23);
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusElementButton>::get_Count() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0034;
		}
	}
	{
		__this->___selectedButton_16 = (RealAngusElementButton_t568 *)NULL;
		RealAngusSelectedButtonParent_t572 * L_18 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_18);
		GameObject_t352 * L_19 = Component_get_gameObject_m3972(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m4172(L_19, 0, /*hidden argument*/NULL);
		RealAngusTextWidget_t574 * L_20 = (__this->___realAngusTextWidget_4);
		NullCheck(L_20);
		Transform_t406 * L_21 = Component_get_transform_m4252(L_20, /*hidden argument*/NULL);
		Vector2_t110  L_22 = {0};
		Vector2__ctor_m4446(&L_22, (0.0f), (-2000.0f), /*hidden argument*/NULL);
		Vector3_t523  L_23 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localPosition_m4402(L_21, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::CalculateLayoutNumbers()
extern "C" void RealAngusController_CalculateLayoutNumbers_m3475 (RealAngusController_t640 * __this, const MethodInfo* method)
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
	Rect_t719  V_11 = {0};
	Rect_t719  V_12 = {0};
	{
		RectTransform_t573 * L_0 = (__this->___parentScreenRectTransform_15);
		NullCheck(L_0);
		Rect_t719  L_1 = RectTransform_get_rect_m4382(L_0, /*hidden argument*/NULL);
		V_11 = L_1;
		float L_2 = Rect_get_width_m4253((&V_11), /*hidden argument*/NULL);
		__this->___screenWidth_30 = L_2;
		RectTransform_t573 * L_3 = (__this->___parentScreenRectTransform_15);
		NullCheck(L_3);
		Rect_t719  L_4 = RectTransform_get_rect_m4382(L_3, /*hidden argument*/NULL);
		V_12 = L_4;
		float L_5 = Rect_get_height_m4254((&V_12), /*hidden argument*/NULL);
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
		Vector2__ctor_m4446(&L_46, L_44, L_45, /*hidden argument*/NULL);
		__this->___selectedButtonLocation_17 = L_46;
		float L_47 = V_9;
		float L_48 = V_10;
		Vector2_t110  L_49 = {0};
		Vector2__ctor_m4446(&L_49, L_47, L_48, /*hidden argument*/NULL);
		__this->___textWidgetLocation_26 = L_49;
		float L_50 = V_9;
		float L_51 = (__this->___screenHeight_31);
		float L_52 = V_6;
		Vector2_t110  L_53 = {0};
		Vector2__ctor_m4446(&L_53, L_50, ((float)((float)((float)((float)((-L_51))/(float)(2.0f)))-(float)L_52)), /*hidden argument*/NULL);
		__this->___textWidgetOffscreenLocation_27 = L_53;
		RealAngusTextWidget_t574 * L_54 = (__this->___realAngusTextWidget_4);
		float L_55 = V_5;
		float L_56 = V_6;
		Vector2_t110  L_57 = (__this->___textWidgetLocation_26);
		Vector2_t110  L_58 = (__this->___textWidgetOffscreenLocation_27);
		NullCheck(L_54);
		RealAngusTextWidget_ConfigureLayout_m3102(L_54, L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::LayoutDisplayElements()
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t639_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* ButtonHandler_t569_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4504_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRealAngusElementButton_t568_m4502_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnButtonClicked_m3477_MethodInfo_var;
extern const MethodInfo* RealAngusController_OnSelectionTransitionCompleted_m3480_MethodInfo_var;
extern "C" void RealAngusController_LayoutDisplayElements_m3476 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		List_1_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(564);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		ButtonHandler_t569_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(565);
		List_1__ctor_m4504_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484226);
		GameObject_GetComponent_TisRealAngusElementButton_t568_m4502_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484227);
		RealAngusController_OnButtonClicked_m3477_MethodInfo_var = il2cpp_codegen_method_info_from_index(580);
		RealAngusController_OnSelectionTransitionCompleted_m3480_MethodInfo_var = il2cpp_codegen_method_info_from_index(581);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t683 * V_0 = {0};
	int32_t V_1 = 0;
	RealAngusItemDesc_t571 * V_2 = {0};
	GameObject_t352 * V_3 = {0};
	RealAngusElementButton_t568 * V_4 = {0};
	{
		List_1_t639 * L_0 = (__this->___buttons_23);
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
		RealAngusData_t684 * L_1 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_1);
		List_1_t683 * L_2 = RealAngusData_GetRealAngusItemDescs_m3732(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t683 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		List_1_t683 * L_4 = V_0;
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
		List_1_t683 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_6);
		int32_t L_8 = (__this->___numColumns_7);
		__this->___numRows_14 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)1))/(int32_t)L_8))));
		List_1_t639 * L_9 = (List_1_t639 *)il2cpp_codegen_object_new (List_1_t639_il2cpp_TypeInfo_var);
		List_1__ctor_m4504(L_9, /*hidden argument*/List_1__ctor_m4504_MethodInfo_var);
		__this->___buttons_23 = L_9;
		float L_10 = (__this->___buttonPanelWidth_21);
		int32_t L_11 = (__this->___numColumns_7);
		__this->___columnWidth_24 = ((float)((float)L_10/(float)(((float)L_11))));
		float L_12 = (__this->___buttonPanelHeight_22);
		int32_t L_13 = (__this->___numRows_14);
		__this->___rowHeight_25 = ((float)((float)L_12/(float)(((float)L_13))));
		Random_set_seed_m4505(NULL /*static, unused*/, ((int32_t)141234), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_014d;
	}

IL_0084:
	{
		List_1_t683 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RealAngusItemDesc_t571 * L_16 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_14, L_15);
		V_2 = L_16;
		GameObject_t352 * L_17 = (__this->___realAngusElementButtonPrototype_2);
		Vector3_t523  L_18 = {0};
		Vector3__ctor_m4250(&L_18, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t813  L_19 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_20 = Object_Instantiate_m4367(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_3 = ((GameObject_t352 *)IsInst(L_20, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_21 = V_3;
		NullCheck(L_21);
		RealAngusElementButton_t568 * L_22 = GameObject_GetComponent_TisRealAngusElementButton_t568_m4502(L_21, /*hidden argument*/GameObject_GetComponent_TisRealAngusElementButton_t568_m4502_MethodInfo_var);
		V_4 = L_22;
		List_1_t639 * L_23 = (__this->___buttons_23);
		RealAngusElementButton_t568 * L_24 = V_4;
		NullCheck(L_23);
		VirtActionInvoker1< RealAngusElementButton_t568 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusElementButton>::Add(!0) */, L_23, L_24);
		RealAngusElementButton_t568 * L_25 = V_4;
		NullCheck(L_25);
		Transform_t406 * L_26 = Component_get_transform_m4252(L_25, /*hidden argument*/NULL);
		GameObject_t352 * L_27 = (__this->___parentScreen_3);
		NullCheck(L_27);
		Transform_t406 * L_28 = GameObject_get_transform_m4255(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_SetParent_m4368(L_26, L_28, 0, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_29 = V_4;
		int32_t L_30 = V_1;
		Vector2_t110  L_31 = RealAngusController_GetNthPosition_m3481(__this, L_30, /*hidden argument*/NULL);
		float L_32 = (__this->___buttonRotationDeg_8);
		float L_33 = (__this->___buttonRotationDeg_8);
		float L_34 = Random_Range_m4397(NULL /*static, unused*/, ((-L_32)), L_33, /*hidden argument*/NULL);
		NullCheck(L_29);
		RealAngusElementButton_SetHomeTransform_m3089(L_29, L_31, L_34, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_35 = V_4;
		Vector2_t110  L_36 = (__this->___selectedButtonLocation_17);
		float L_37 = (__this->___selectedButtonScale_18);
		NullCheck(L_35);
		RealAngusElementButton_SetSelectedTransform_m3088(L_35, L_36, (0.0f), L_37, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_38 = V_4;
		RealAngusItemDesc_t571 * L_39 = V_2;
		NullCheck(L_38);
		RealAngusElementButton_Configure_m3082(L_38, L_39, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_40 = V_4;
		IntPtr_t L_41 = { (void*)RealAngusController_OnButtonClicked_m3477_MethodInfo_var };
		ButtonHandler_t569 * L_42 = (ButtonHandler_t569 *)il2cpp_codegen_object_new (ButtonHandler_t569_il2cpp_TypeInfo_var);
		ButtonHandler__ctor_m3069(L_42, __this, L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		RealAngusElementButton_SetClickHandler_m3080(L_40, L_42, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_43 = V_4;
		IntPtr_t L_44 = { (void*)RealAngusController_OnSelectionTransitionCompleted_m3480_MethodInfo_var };
		ButtonHandler_t569 * L_45 = (ButtonHandler_t569 *)il2cpp_codegen_object_new (ButtonHandler_t569_il2cpp_TypeInfo_var);
		ButtonHandler__ctor_m3069(L_45, __this, L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		RealAngusElementButton_SetTransitionCompleteHandler_m3081(L_43, L_45, /*hidden argument*/NULL);
		int32_t L_46 = V_1;
		V_1 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_014d:
	{
		int32_t L_47 = V_1;
		List_1_t683 * L_48 = V_0;
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
extern "C" void RealAngusController_OnButtonClicked_m3477 (RealAngusController_t640 * __this, RealAngusElementButton_t568 * ___button, const MethodInfo* method)
{
	{
		RealAngusElementButton_t568 * L_0 = (__this->___selectedButton_16);
		bool L_1 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		RealAngusElementButton_t568 * L_2 = (__this->___selectedButton_16);
		NullCheck(L_2);
		RealAngusElementButton_SetSelected_m3086(L_2, 0, 0, /*hidden argument*/NULL);
		__this->___selectedButton_16 = (RealAngusElementButton_t568 *)NULL;
		RealAngusSelectedButtonParent_t572 * L_3 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_3);
		RealAngusSelectedButtonParent_StartVisibilityTransition_m3096(L_3, 0, /*hidden argument*/NULL);
		RealAngusTextWidget_t574 * L_4 = (__this->___realAngusTextWidget_4);
		NullCheck(L_4);
		RealAngusTextWidget_TransitionOut_m3104(L_4, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0040:
	{
		RealAngusElementButton_t568 * L_5 = ___button;
		NullCheck(L_5);
		RealAngusItemDesc_t571 * L_6 = RealAngusElementButton_get_raid_m3074(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = RealAngusItemDesc_get_unlocked_m3577(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		RealAngusElementButton_t568 * L_8 = ___button;
		RealAngusController_SelectButton_m3479(__this, L_8, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_005c:
	{
		RealAngusController_CueToPlayMore_m3478(__this, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void RealAngusController::CueToPlayMore()
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t600_m4503_MethodInfo_var;
extern "C" void RealAngusController_CueToPlayMore_m3478 (RealAngusController_t640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		GameObject_GetComponent_TisTipDialog_t600_m4503_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484230);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	GameObject_t352 * V_3 = {0};
	TipDialog_t600 * V_4 = {0};
	{
		RealAngusData_t684 * L_0 = ((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		int32_t L_1 = RealAngusData_CountUnlockedItemDescs_m3733(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelConfig_t678 * L_2 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = LevelConfig_LevelForRealAngusUnlocks_m3679(L_2, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral1133, L_7, (String_t*) &_stringLiteral1134, /*hidden argument*/NULL);
		V_2 = L_8;
		GameObject_t352 * L_9 = (__this->___tipDialogPrototype_6);
		Vector3_t523  L_10 = {0};
		Vector3__ctor_m4250(&L_10, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t813  L_11 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_12 = Object_Instantiate_m4367(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_3 = ((GameObject_t352 *)IsInst(L_12, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_13 = V_3;
		NullCheck(L_13);
		TipDialog_t600 * L_14 = GameObject_GetComponent_TisTipDialog_t600_m4503(L_13, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t600_m4503_MethodInfo_var);
		V_4 = L_14;
		TipDialog_t600 * L_15 = V_4;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		TipDialog_ConfigureDialog_m3223(L_15, L_16, /*hidden argument*/NULL);
		DialogController_t610 * L_17 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_18 = V_3;
		NullCheck(L_17);
		DialogController_ShowDialog_m3276(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::SelectButton(RealAngusElementButton)
extern "C" void RealAngusController_SelectButton_m3479 (RealAngusController_t640 * __this, RealAngusElementButton_t568 * ___button, const MethodInfo* method)
{
	{
		RealAngusElementButton_t568 * L_0 = ___button;
		__this->___selectedButton_16 = L_0;
		RealAngusElementButton_t568 * L_1 = (__this->___selectedButton_16);
		NullCheck(L_1);
		RealAngusElementButton_SetSelected_m3086(L_1, 1, 0, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_t572 * L_2 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_2);
		RealAngusSelectedButtonParent_StartVisibilityTransition_m3096(L_2, 1, /*hidden argument*/NULL);
		RealAngusTextWidget_t574 * L_3 = (__this->___realAngusTextWidget_4);
		RealAngusElementButton_t568 * L_4 = (__this->___selectedButton_16);
		NullCheck(L_4);
		RealAngusItemDesc_t571 * L_5 = RealAngusElementButton_get_raid_m3074(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		RealAngusTextWidget_TransitionIn_m3103(L_3, L_5, /*hidden argument*/NULL);
		RealAngusElementButton_t568 * L_6 = (__this->___selectedButton_16);
		NullCheck(L_6);
		Transform_t406 * L_7 = Component_get_transform_m4252(L_6, /*hidden argument*/NULL);
		RealAngusSelectedButtonParent_t572 * L_8 = (__this->___realAngusSelectedButtonParent_5);
		NullCheck(L_8);
		Transform_t406 * L_9 = Component_get_transform_m4252(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m4368(L_7, L_9, 0, /*hidden argument*/NULL);
		SFXPlayer_t580 * L_10 = SFXPlayer_get_instance_m3118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		SFXPlayer_Play_m3123(L_10, 8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusController::OnSelectionTransitionCompleted(RealAngusElementButton)
extern "C" void RealAngusController_OnSelectionTransitionCompleted_m3480 (RealAngusController_t640 * __this, RealAngusElementButton_t568 * ___button, const MethodInfo* method)
{
	{
		RealAngusElementButton_t568 * L_0 = ___button;
		NullCheck(L_0);
		bool L_1 = RealAngusElementButton_IsSelected_m3087(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		RealAngusElementButton_t568 * L_2 = ___button;
		NullCheck(L_2);
		Transform_t406 * L_3 = Component_get_transform_m4252(L_2, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = (__this->___parentScreen_3);
		NullCheck(L_4);
		Transform_t406 * L_5 = GameObject_get_transform_m4255(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m4368(L_3, L_5, 0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// UnityEngine.Vector2 RealAngusController::GetNthPosition(System.Int32)
extern "C" Vector2_t110  RealAngusController_GetNthPosition_m3481 (RealAngusController_t640 * __this, int32_t ___n, const MethodInfo* method)
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
		float L_21 = Random_Range_m4397(NULL /*static, unused*/, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_18+(float)L_21));
		float L_22 = V_3;
		float L_23 = (__this->___buttonWigglePix_9);
		float L_24 = (__this->___buttonWigglePix_9);
		float L_25 = Random_Range_m4397(NULL /*static, unused*/, ((-L_23)), L_24, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_22+(float)L_25));
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t110  L_28 = {0};
		Vector2__ctor_m4446(&L_28, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// ScoreController/<DestroyMouse>c__Iterator17
#include "AssemblyU2DCSharp_ScoreController_U3CDestroyMouseU3Ec__Itera.h"
#ifndef _MSC_VER
#else
#endif
// ScoreController/<DestroyMouse>c__Iterator17
#include "AssemblyU2DCSharp_ScoreController_U3CDestroyMouseU3Ec__IteraMethodDeclarations.h"



// System.Void ScoreController/<DestroyMouse>c__Iterator17::.ctor()
extern "C" void U3CDestroyMouseU3Ec__Iterator17__ctor_m3482 (U3CDestroyMouseU3Ec__Iterator17_t641 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object ScoreController/<DestroyMouse>c__Iterator17::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDestroyMouseU3Ec__Iterator17_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3483 (U3CDestroyMouseU3Ec__Iterator17_t641 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object ScoreController/<DestroyMouse>c__Iterator17::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDestroyMouseU3Ec__Iterator17_System_Collections_IEnumerator_get_Current_m3484 (U3CDestroyMouseU3Ec__Iterator17_t641 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean ScoreController/<DestroyMouse>c__Iterator17::MoveNext()
extern TypeInfo* WaitForSeconds_t810_il2cpp_TypeInfo_var;
extern "C" bool U3CDestroyMouseU3Ec__Iterator17_MoveNext_m3485 (U3CDestroyMouseU3Ec__Iterator17_t641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		WaitForSeconds_t810 * L_2 = (WaitForSeconds_t810 *)il2cpp_codegen_object_new (WaitForSeconds_t810_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4355(L_2, (0.001f), /*hidden argument*/NULL);
		__this->___U24current_2 = L_2;
		__this->___U24PC_1 = 1;
		goto IL_0051;
	}

IL_003d:
	{
		GameObject_t352 * L_3 = (__this->___deadMouseGameObject_0);
		Object_Destroy_m4116(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
// System.Void ScoreController/<DestroyMouse>c__Iterator17::Dispose()
extern "C" void U3CDestroyMouseU3Ec__Iterator17_Dispose_m3486 (U3CDestroyMouseU3Ec__Iterator17_t641 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void ScoreController/<DestroyMouse>c__Iterator17::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDestroyMouseU3Ec__Iterator17_Reset_m3487 (U3CDestroyMouseU3Ec__Iterator17_t641 * __this, const MethodInfo* method)
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

// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandler.h"
// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandlerMethodDeclarations.h"
struct GameObject_t352;
struct DeadMouse_t515;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
// !!0 UnityEngine.GameObject::GetComponent<DeadMouse>()
#define GameObject_GetComponent_TisDeadMouse_t515_m4506(__this, method) (( DeadMouse_t515 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void ScoreController::.ctor()
extern "C" void ScoreController__ctor_m3488 (ScoreController_t642 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::Start()
extern "C" void ScoreController_Start_m3489 (ScoreController_t642 * __this, const MethodInfo* method)
{
	{
		ScoreController_RegisterForEvents_m3491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::OnDestroy()
extern "C" void ScoreController_OnDestroy_m3490 (ScoreController_t642 * __this, const MethodInfo* method)
{
	{
		ScoreController_UnregisterForEvents_m3492(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::RegisterForEvents()
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t518_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3493_MethodInfo_var;
extern "C" void ScoreController_RegisterForEvents_m3491 (ScoreController_t642 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		MouseKillEventHandler_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		ScoreController_OnMouseKill_m3493_MethodInfo_var = il2cpp_codegen_method_info_from_index(583);
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
		DeadMouseRelay_t519 * L_1 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3493_MethodInfo_var };
		MouseKillEventHandler_t518 * L_3 = (MouseKillEventHandler_t518 *)il2cpp_codegen_object_new (MouseKillEventHandler_t518_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2826(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_add_MouseKill_m2833(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::UnregisterForEvents()
extern TypeInfo* DeadMouseRelay_t519_il2cpp_TypeInfo_var;
extern TypeInfo* MouseKillEventHandler_t518_il2cpp_TypeInfo_var;
extern const MethodInfo* ScoreController_OnMouseKill_m3493_MethodInfo_var;
extern "C" void ScoreController_UnregisterForEvents_m3492 (ScoreController_t642 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeadMouseRelay_t519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(488);
		MouseKillEventHandler_t518_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		ScoreController_OnMouseKill_m3493_MethodInfo_var = il2cpp_codegen_method_info_from_index(583);
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
		DeadMouseRelay_t519 * L_1 = ((DeadMouseRelay_t519_StaticFields*)DeadMouseRelay_t519_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		IntPtr_t L_2 = { (void*)ScoreController_OnMouseKill_m3493_MethodInfo_var };
		MouseKillEventHandler_t518 * L_3 = (MouseKillEventHandler_t518 *)il2cpp_codegen_object_new (MouseKillEventHandler_t518_il2cpp_TypeInfo_var);
		MouseKillEventHandler__ctor_m2826(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeadMouseRelay_remove_MouseKill_m2834(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void ScoreController::OnMouseKill(MouseMove)
extern "C" void ScoreController_OnMouseKill_m3493 (ScoreController_t642 * __this, MouseMove_t517 * ___killedMouse, const MethodInfo* method)
{
	{
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayerStats_IncrementScore_m3711(L_0, 1, /*hidden argument*/NULL);
		MouseMove_t517 * L_1 = ___killedMouse;
		ScoreController_MakeDeadMouseAnimation_m3497(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::OnDeadMouseDone(UnityEngine.GameObject)
extern "C" void ScoreController_OnDeadMouseDone_m3494 (ScoreController_t642 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m3630(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3630(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)6))))
		{
			goto IL_0027;
		}
	}

IL_0020:
	{
		GameObject_t352 * L_4 = ___deadMouseGameObject;
		ScoreController_MakeFlyingAnimation_m3496(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		GameObject_t352 * L_5 = ___deadMouseGameObject;
		Object_t * L_6 = ScoreController_DestroyMouse_m3495(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3935(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ScoreController::DestroyMouse(UnityEngine.GameObject)
extern TypeInfo* U3CDestroyMouseU3Ec__Iterator17_t641_il2cpp_TypeInfo_var;
extern "C" Object_t * ScoreController_DestroyMouse_m3495 (ScoreController_t642 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDestroyMouseU3Ec__Iterator17_t641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(567);
		s_Il2CppMethodIntialized = true;
	}
	U3CDestroyMouseU3Ec__Iterator17_t641 * V_0 = {0};
	{
		U3CDestroyMouseU3Ec__Iterator17_t641 * L_0 = (U3CDestroyMouseU3Ec__Iterator17_t641 *)il2cpp_codegen_object_new (U3CDestroyMouseU3Ec__Iterator17_t641_il2cpp_TypeInfo_var);
		U3CDestroyMouseU3Ec__Iterator17__ctor_m3482(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDestroyMouseU3Ec__Iterator17_t641 * L_1 = V_0;
		GameObject_t352 * L_2 = ___deadMouseGameObject;
		NullCheck(L_1);
		L_1->___deadMouseGameObject_0 = L_2;
		U3CDestroyMouseU3Ec__Iterator17_t641 * L_3 = V_0;
		GameObject_t352 * L_4 = ___deadMouseGameObject;
		NullCheck(L_3);
		L_3->___U3CU24U3EdeadMouseGameObject_3 = L_4;
		U3CDestroyMouseU3Ec__Iterator17_t641 * L_5 = V_0;
		return L_5;
	}
}
// System.Void ScoreController::MakeFlyingAnimation(UnityEngine.GameObject)
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t515_m4506_MethodInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436_MethodInfo_var;
extern "C" void ScoreController_MakeFlyingAnimation_m3496 (ScoreController_t642 * __this, GameObject_t352 * ___deadMouseGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		GameObject_GetComponent_TisDeadMouse_t515_m4506_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484232);
		Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484152);
		GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484153);
		GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484154);
		s_Il2CppMethodIntialized = true;
	}
	DeadMouse_t515 * V_0 = {0};
	MouseTypeDesc_t655 * V_1 = {0};
	GameObject_t352 * V_2 = {0};
	FlyingAnimation_t692 * V_3 = {0};
	float V_4 = 0.0f;
	AcceleratingSpinner_t686 * V_5 = {0};
	Vector3_t523  V_6 = {0};
	Vector3_t523  V_7 = {0};
	Vector3_t523  V_8 = {0};
	{
		GameObject_t352 * L_0 = ___deadMouseGameObject;
		NullCheck(L_0);
		DeadMouse_t515 * L_1 = GameObject_GetComponent_TisDeadMouse_t515_m4506(L_0, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t515_m4506_MethodInfo_var);
		V_0 = L_1;
		MouseConfig_t544 * L_2 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		DeadMouse_t515 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = DeadMouse_get_mouseType_m2818(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MouseTypeDesc_t655 * L_5 = MouseConfig_GetMouseTypeDesc_m2925(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		GameObject_t352 * L_6 = (__this->___scoreEffectPrototype_4);
		GameObject_t352 * L_7 = Object_Instantiate_TisGameObject_t352_m4433(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var);
		V_2 = L_7;
		GameObject_t352 * L_8 = V_2;
		NullCheck(L_8);
		FlyingAnimation_t692 * L_9 = GameObject_GetComponent_TisFlyingAnimation_t692_m4435(L_8, /*hidden argument*/GameObject_GetComponent_TisFlyingAnimation_t692_m4435_MethodInfo_var);
		V_3 = L_9;
		FlyingAnimation_t692 * L_10 = V_3;
		DeadMouse_t515 * L_11 = V_0;
		NullCheck(L_11);
		Transform_t406 * L_12 = Component_get_transform_m4252(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t523  L_13 = Transform_get_position_m4257(L_12, /*hidden argument*/NULL);
		GameObject_t352 * L_14 = (__this->___scoreDisplay_5);
		NullCheck(L_10);
		FlyingAnimation_Configure_m3783(L_10, L_13, L_14, /*hidden argument*/NULL);
		FlyingAnimation_t692 * L_15 = V_3;
		NullCheck(L_15);
		Image_t499 * L_16 = (L_15->___image_18);
		MouseTypeDesc_t655 * L_17 = V_1;
		NullCheck(L_17);
		Sprite_t521 * L_18 = (L_17->___deadMouseSprite_0);
		NullCheck(L_16);
		Image_set_sprite_m4377(L_16, L_18, /*hidden argument*/NULL);
		FlyingAnimation_t692 * L_19 = V_3;
		NullCheck(L_19);
		Transform_t406 * L_20 = Component_get_transform_m4252(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t523  L_21 = Transform_get_localScale_m4260(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		float L_22 = ((&V_6)->___x_1);
		V_4 = L_22;
		float L_23 = V_4;
		MouseTypeDesc_t655 * L_24 = V_1;
		NullCheck(L_24);
		float L_25 = (L_24->___scale_5);
		V_4 = ((float)((float)L_23*(float)L_25));
		FlyingAnimation_t692 * L_26 = V_3;
		NullCheck(L_26);
		Transform_t406 * L_27 = Component_get_transform_m4252(L_26, /*hidden argument*/NULL);
		float L_28 = V_4;
		float L_29 = V_4;
		Vector3_t523  L_30 = {0};
		Vector3__ctor_m4250(&L_30, L_28, L_29, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localScale_m4261(L_27, L_30, /*hidden argument*/NULL);
		FlyingAnimation_t692 * L_31 = V_3;
		NullCheck(L_31);
		FlyingAnimation_Run_m3785(L_31, /*hidden argument*/NULL);
		GameObject_t352 * L_32 = V_2;
		NullCheck(L_32);
		AcceleratingSpinner_t686 * L_33 = GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436(L_32, /*hidden argument*/GameObject_GetComponent_TisAcceleratingSpinner_t686_m4436_MethodInfo_var);
		V_5 = L_33;
		AcceleratingSpinner_t686 * L_34 = V_5;
		DeadMouse_t515 * L_35 = V_0;
		NullCheck(L_35);
		Transform_t406 * L_36 = Component_get_transform_m4252(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t523  L_37 = Transform_get_eulerAngles_m4439(L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		float L_38 = ((&V_7)->___z_3);
		Camera_t532 * L_39 = Camera_get_main_m4223(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_t406 * L_40 = Component_get_transform_m4252(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t523  L_41 = Transform_get_eulerAngles_m4439(L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		float L_42 = ((&V_8)->___z_3);
		NullCheck(L_34);
		AcceleratingSpinner_Configure_m3744(L_34, ((float)((float)L_38-(float)L_42)), /*hidden argument*/NULL);
		bool L_43 = (__this->___scoreEffectClockwise_6);
		if (!L_43)
		{
			goto IL_0100;
		}
	}
	{
		AcceleratingSpinner_t686 * L_44 = V_5;
		AcceleratingSpinner_t686 * L_45 = L_44;
		NullCheck(L_45);
		float L_46 = (L_45->___initialAngleVelocityDeg_2);
		NullCheck(L_45);
		L_45->___initialAngleVelocityDeg_2 = ((float)((float)L_46*(float)(-1.0f)));
		AcceleratingSpinner_t686 * L_47 = V_5;
		AcceleratingSpinner_t686 * L_48 = L_47;
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
extern TypeInfo* DistortFinishedHandler_t689_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDeadMouse_t515_m4506_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var;
extern const MethodInfo* ScoreController_OnDeadMouseDone_m3494_MethodInfo_var;
extern "C" void ScoreController_MakeDeadMouseAnimation_m3497 (ScoreController_t642 * __this, MouseMove_t517 * ___killedMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DistortFinishedHandler_t689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(569);
		Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484152);
		GameObject_GetComponent_TisDeadMouse_t515_m4506_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484232);
		Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		ScoreController_OnDeadMouseDone_m3494_MethodInfo_var = il2cpp_codegen_method_info_from_index(585);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	DeadMouse_t515 * V_1 = {0};
	DistortForEffect_t535 * V_2 = {0};
	{
		GameObject_t352 * L_0 = (__this->___deadMousePrototype_3);
		GameObject_t352 * L_1 = Object_Instantiate_TisGameObject_t352_m4433(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t352_m4433_MethodInfo_var);
		V_0 = L_1;
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		DeadMouse_t515 * L_3 = GameObject_GetComponent_TisDeadMouse_t515_m4506(L_2, /*hidden argument*/GameObject_GetComponent_TisDeadMouse_t515_m4506_MethodInfo_var);
		V_1 = L_3;
		DeadMouse_t515 * L_4 = V_1;
		MouseMove_t517 * L_5 = ___killedMouse;
		NullCheck(L_4);
		DeadMouse_Configure_m2821(L_4, L_5, /*hidden argument*/NULL);
		DeadMouse_t515 * L_6 = V_1;
		NullCheck(L_6);
		DistortForEffect_t535 * L_7 = Component_GetComponent_TisDistortForEffect_t535_m4374(L_6, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4374_MethodInfo_var);
		V_2 = L_7;
		DistortForEffect_t535 * L_8 = V_2;
		NullCheck(L_8);
		((BounceLerp_t605 *)L_8)->___totalPeriods_3 = (1.0f);
		DistortForEffect_t535 * L_9 = V_2;
		NullCheck(L_9);
		((BounceLerp_t605 *)L_9)->___secondsPerPeriod_2 = (0.3f);
		DistortForEffect_t535 * L_10 = V_2;
		IntPtr_t L_11 = { (void*)ScoreController_OnDeadMouseDone_m3494_MethodInfo_var };
		DistortFinishedHandler_t689 * L_12 = (DistortFinishedHandler_t689 *)il2cpp_codegen_object_new (DistortFinishedHandler_t689_il2cpp_TypeInfo_var);
		DistortFinishedHandler__ctor_m3765(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		DistortForEffect_SetDistortFinishedHandler_m3775(L_10, L_12, /*hidden argument*/NULL);
		DistortForEffect_t535 * L_13 = V_2;
		NullCheck(L_13);
		DistortForEffect_Distort_m3776(L_13, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
