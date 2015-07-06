#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandler.h"
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
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandlerMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void PlayerStats/ScoreChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ScoreChangedEventHandler__ctor_m2225 (ScoreChangedEventHandler_t473 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m2226 (ScoreChangedEventHandler_t473 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreChangedEventHandler_Invoke_m2226((ScoreChangedEventHandler_t473 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t473(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m2227 (ScoreChangedEventHandler_t473 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m2228 (ScoreChangedEventHandler_t473 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void TreatsChangedEventHandler__ctor_m2229 (TreatsChangedEventHandler_t474 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/TreatsChangedEventHandler::Invoke()
extern "C" void TreatsChangedEventHandler_Invoke_m2230 (TreatsChangedEventHandler_t474 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TreatsChangedEventHandler_Invoke_m2230((TreatsChangedEventHandler_t474 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_TreatsChangedEventHandler_t474(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/TreatsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TreatsChangedEventHandler_BeginInvoke_m2231 (TreatsChangedEventHandler_t474 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/TreatsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TreatsChangedEventHandler_EndInvoke_m2232 (TreatsChangedEventHandler_t474 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void BoostsChangedEventHandler__ctor_m2233 (BoostsChangedEventHandler_t475 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m2234 (BoostsChangedEventHandler_t475 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostsChangedEventHandler_Invoke_m2234((BoostsChangedEventHandler_t475 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t475(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m2235 (BoostsChangedEventHandler_t475 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m2236 (BoostsChangedEventHandler_t475 * __this, Object_t * ___result, const MethodInfo* method)
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
// System.Boolean
#include "mscorlib_System_Boolean.h"
// GameController
#include "AssemblyU2DCSharp_GameController.h"
// GameController/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameInstanceChangedEventHan.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParams.h"
#include "mscorlib_ArrayTypes.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"
// GameController/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameInstanceChangedEventHanMethodDeclarations.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"


// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m2237 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_ScoreChanged_m2238 (PlayerStats_t391 * __this, ScoreChangedEventHandler_t473 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t473 * L_0 = (__this->___ScoreChanged_8);
		ScoreChangedEventHandler_t473 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Combine_m2568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_8 = ((ScoreChangedEventHandler_t473 *)Castclass(L_2, ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_ScoreChanged_m2239 (PlayerStats_t391 * __this, ScoreChangedEventHandler_t473 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t473 * L_0 = (__this->___ScoreChanged_8);
		ScoreChangedEventHandler_t473 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Remove_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_8 = ((ScoreChangedEventHandler_t473 *)Castclass(L_2, ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern TypeInfo* TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_TreatsChanged_m2240 (PlayerStats_t391 * __this, TreatsChangedEventHandler_t474 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		TreatsChangedEventHandler_t474 * L_0 = (__this->___TreatsChanged_9);
		TreatsChangedEventHandler_t474 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Combine_m2568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TreatsChanged_9 = ((TreatsChangedEventHandler_t474 *)Castclass(L_2, TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern TypeInfo* TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_TreatsChanged_m2241 (PlayerStats_t391 * __this, TreatsChangedEventHandler_t474 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		TreatsChangedEventHandler_t474 * L_0 = (__this->___TreatsChanged_9);
		TreatsChangedEventHandler_t474 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Remove_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TreatsChanged_9 = ((TreatsChangedEventHandler_t474 *)Castclass(L_2, TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t475_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_BoostsChanged_m2242 (PlayerStats_t391 * __this, BoostsChangedEventHandler_t475 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t475 * L_0 = (__this->___BoostsChanged_10);
		BoostsChangedEventHandler_t475 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Combine_m2568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_10 = ((BoostsChangedEventHandler_t475 *)Castclass(L_2, BoostsChangedEventHandler_t475_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t475_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_BoostsChanged_m2243 (PlayerStats_t391 * __this, BoostsChangedEventHandler_t475 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(328);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t475 * L_0 = (__this->___BoostsChanged_10);
		BoostsChangedEventHandler_t475 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Remove_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_10 = ((BoostsChangedEventHandler_t475 *)Castclass(L_2, BoostsChangedEventHandler_t475_il2cpp_TypeInfo_var));
		return;
	}
}
// PlayerStats PlayerStats::get_instance()
extern TypeInfo* PlayerStats_t391_il2cpp_TypeInfo_var;
extern "C" PlayerStats_t391 * PlayerStats_get_instance_m2244 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t391 * L_0 = ((PlayerStats_t391_StaticFields*)PlayerStats_t391_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void PlayerStats::set_instance(PlayerStats)
extern TypeInfo* PlayerStats_t391_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_set_instance_m2245 (Object_t * __this /* static, unused */, PlayerStats_t391 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t391 * L_0 = ___value;
		((PlayerStats_t391_StaticFields*)PlayerStats_t391_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m2246 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	{
		PlayerStats_set_instance_m2245(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerStats_Reset_m2253(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m2247 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	{
		PlayerStats_RegisterForEvents_m2249(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m2248 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	{
		PlayerStats_UnregisterForEvents_m2250(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t422_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m2251_MethodInfo_var;
extern "C" void PlayerStats_RegisterForEvents_m2249 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		PlayerStats_OnInstanceChanged_m2251_MethodInfo_var = il2cpp_codegen_method_info_from_index(409);
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
		GameController_t392 * L_1 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m2251_MethodInfo_var };
		GameInstanceChangedEventHandler_t422 * L_3 = (GameInstanceChangedEventHandler_t422 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t422_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m1928(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameController_add_GameInstanceChanged_m1947(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t422_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m2251_MethodInfo_var;
extern "C" void PlayerStats_UnregisterForEvents_m2250 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		PlayerStats_OnInstanceChanged_m2251_MethodInfo_var = il2cpp_codegen_method_info_from_index(409);
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
		GameController_t392 * L_1 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m2251_MethodInfo_var };
		GameInstanceChangedEventHandler_t422 * L_3 = (GameInstanceChangedEventHandler_t422 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t422_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m1928(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameController_remove_GameInstanceChanged_m1948(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m2251 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	{
		PlayerStats_Reset_m2253(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m2252 (PlayerStats_t391 * __this, int32_t ___increment, const MethodInfo* method)
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
		ScoreChangedEventHandler_t473 * L_3 = (__this->___ScoreChanged_8);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ScoreChangedEventHandler_t473 * L_4 = (__this->___ScoreChanged_8);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::Reset()
extern TypeInfo* Int32U5BU5D_t476_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_Reset_m2253 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___gameScore_3 = 0;
		TweakableParams_t401 * L_0 = TweakableParams_get_instance_m2369(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = TweakableParams_GetInitialMoney_m2371(L_0, /*hidden argument*/NULL);
		__this->___treatCount_4 = L_1;
		__this->___purchasedBoostCount_6 = ((Int32U5BU5D_t476*)SZArrayNew(Int32U5BU5D_t476_il2cpp_TypeInfo_var, 5));
		__this->___availableBoostCount_5 = ((Int32U5BU5D_t476*)SZArrayNew(Int32U5BU5D_t476_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_0055;
	}

IL_0036:
	{
		Int32U5BU5D_t476* L_2 = (__this->___purchasedBoostCount_6);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)0;
		Int32U5BU5D_t476* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		TweakableParams_t401 * L_6 = TweakableParams_get_instance_m2369(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = TweakableParams_GetInitialBoosts_m2372(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)L_7;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)5)))
		{
			goto IL_0036;
		}
	}
	{
		TreatsChangedEventHandler_t474 * L_10 = (__this->___TreatsChanged_9);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		TreatsChangedEventHandler_t474 * L_11 = (__this->___TreatsChanged_9);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_11);
	}

IL_0072:
	{
		ScoreChangedEventHandler_t473 * L_12 = (__this->___ScoreChanged_8);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		ScoreChangedEventHandler_t473 * L_13 = (__this->___ScoreChanged_8);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_13);
	}

IL_0088:
	{
		BoostsChangedEventHandler_t475 * L_14 = (__this->___BoostsChanged_10);
		if (!L_14)
		{
			goto IL_009e;
		}
	}
	{
		BoostsChangedEventHandler_t475 * L_15 = (__this->___BoostsChanged_10);
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_15);
	}

IL_009e:
	{
		return;
	}
}
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m2254 (PlayerStats_t391 * __this, int32_t ___price, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___treatCount_4);
		int32_t L_1 = ___price;
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerStats::EarnTreats(System.Int32)
extern "C" void PlayerStats_EarnTreats_m2255 (PlayerStats_t391 * __this, int32_t ___earnedTreats, const MethodInfo* method)
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
		TreatsChangedEventHandler_t474 * L_3 = (__this->___TreatsChanged_9);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		TreatsChangedEventHandler_t474 * L_4 = (__this->___TreatsChanged_9);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::SpendTreats(System.Int32)
extern "C" void PlayerStats_SpendTreats_m2256 (PlayerStats_t391 * __this, int32_t ___spentTreats, const MethodInfo* method)
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
		TreatsChangedEventHandler_t474 * L_4 = (__this->___TreatsChanged_9);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		TreatsChangedEventHandler_t474 * L_5 = (__this->___TreatsChanged_9);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/TreatsChangedEventHandler::Invoke() */, L_5);
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetScore()
extern "C" int32_t PlayerStats_GetScore_m2257 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gameScore_3);
		return L_0;
	}
}
// System.Int32 PlayerStats::GetTreats()
extern "C" int32_t PlayerStats_GetTreats_m2258 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___treatCount_4);
		return L_0;
	}
}
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m2259 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t476* L_1 = (__this->___purchasedBoostCount_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m2260 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t476* L_1 = (__this->___availableBoostCount_5);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
	}
}
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m2261 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t476* L_1 = (__this->___purchasedBoostCount_6);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t* L_3 = ((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2));
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_3))+(int32_t)1));
		Int32U5BU5D_t476* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t* L_6 = ((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5));
		*((int32_t*)(L_6)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		BoostsChangedEventHandler_t475 * L_7 = (__this->___BoostsChanged_10);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		BoostsChangedEventHandler_t475 * L_8 = (__this->___BoostsChanged_10);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_8);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m2262 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		Int32U5BU5D_t476* L_1 = (__this->___availableBoostCount_5);
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
		Int32U5BU5D_t476* L_4 = (__this->___availableBoostCount_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		return;
	}

IL_001a:
	{
		Int32U5BU5D_t476* L_6 = (__this->___availableBoostCount_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t* L_8 = ((int32_t*)(int32_t*)SZArrayLdElema(L_6, L_7));
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))-(int32_t)1));
		BoostsChangedEventHandler_t475 * L_9 = (__this->___BoostsChanged_10);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		BoostsChangedEventHandler_t475 * L_10 = (__this->___BoostsChanged_10);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(10 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetHighScore()
extern TypeInfo* PersistentStorage_t469_il2cpp_TypeInfo_var;
extern "C" int32_t PlayerStats_GetHighScore_m2263 (PlayerStats_t391 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t469_il2cpp_TypeInfo_var);
		PersistentStorage_t469 * L_0 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		int32_t L_1 = PersistentStorage_GetIntValue_m2198(L_0, (String_t*) &_stringLiteral813, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerStats::SetHighScore(System.Int32)
extern TypeInfo* PersistentStorage_t469_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_SetHighScore_m2264 (PlayerStats_t391 * __this, int32_t ___highScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t469_il2cpp_TypeInfo_var);
		PersistentStorage_t469 * L_0 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_1 = ___highScore;
		NullCheck(L_0);
		PersistentStorage_SetIntValue_m2197(L_0, (String_t*) &_stringLiteral813, L_1, /*hidden argument*/NULL);
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
extern "C" void RestartGameHandler__ctor_m2265 (RestartGameHandler_t477 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RestartGameHandler::RestartGame()
extern "C" void RestartGameHandler_RestartGame_m2266 (RestartGameHandler_t477 * __this, const MethodInfo* method)
{
	{
		GameController_t392 * L_0 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameController_RestartGame_m1961(L_0, /*hidden argument*/NULL);
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
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandlMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
struct Resources_t604;
struct Sprite_t394;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t604;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m2871_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m2871(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m2871_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t394_m2870(__this /* static, unused */, p0, method) (( Sprite_t394 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m2871_gshared)(__this /* static, unused */, p0, method)


// System.Void SFXButton::.ctor()
extern "C" void SFXButton__ctor_m2267 (SFXButton_t478 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::Awake()
extern const MethodInfo* Resources_Load_TisSprite_t394_m2870_MethodInfo_var;
extern "C" void SFXButton_Awake_m2268 (SFXButton_t478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t394_m2870_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484001);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral814;
		String_t* L_0 = V_0;
		Sprite_t394 * L_1 = Resources_Load_TisSprite_t394_m2870(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisSprite_t394_m2870_MethodInfo_var);
		__this->___soundOnSprite_3 = L_1;
		V_0 = (String_t*) &_stringLiteral815;
		String_t* L_2 = V_0;
		Sprite_t394 * L_3 = Resources_Load_TisSprite_t394_m2870(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t394_m2870_MethodInfo_var);
		__this->___soundOffSprite_4 = L_3;
		return;
	}
}
// System.Void SFXButton::Start()
extern "C" void SFXButton_Start_m2269 (SFXButton_t478 * __this, const MethodInfo* method)
{
	{
		SFXButton_RegisterForEvents_m2271(__this, /*hidden argument*/NULL);
		SFXButton_UpdateButtonImage_m2274(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::OnDestroy()
extern "C" void SFXButton_OnDestroy_m2270 (SFXButton_t478 * __this, const MethodInfo* method)
{
	{
		SFXButton_UnregisterForEvents_m2272(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::RegisterForEvents()
extern TypeInfo* SoundController_t486_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m2273_MethodInfo_var;
extern "C" void SFXButton_RegisterForEvents_m2271 (SFXButton_t478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		SFXButton_OnSoundMuteChanged_m2273_MethodInfo_var = il2cpp_codegen_method_info_from_index(410);
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
		SoundController_t486 * L_1 = ((SoundController_t486_StaticFields*)SoundController_t486_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m2273_MethodInfo_var };
		SoundMuteChangedEventHandler_t484 * L_3 = (SoundMuteChangedEventHandler_t484 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2292(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m2301(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UnregisterForEvents()
extern TypeInfo* SoundController_t486_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXButton_OnSoundMuteChanged_m2273_MethodInfo_var;
extern "C" void SFXButton_UnregisterForEvents_m2272 (SFXButton_t478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		SFXButton_OnSoundMuteChanged_m2273_MethodInfo_var = il2cpp_codegen_method_info_from_index(410);
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
		SoundController_t486 * L_1 = ((SoundController_t486_StaticFields*)SoundController_t486_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXButton_OnSoundMuteChanged_m2273_MethodInfo_var };
		SoundMuteChangedEventHandler_t484 * L_3 = (SoundMuteChangedEventHandler_t484 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2292(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m2302(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXButton::OnSoundMuteChanged()
extern "C" void SFXButton_OnSoundMuteChanged_m2273 (SFXButton_t478 * __this, const MethodInfo* method)
{
	{
		SFXButton_UpdateButtonImage_m2274(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXButton::UpdateButtonImage()
extern TypeInfo* SoundController_t486_il2cpp_TypeInfo_var;
extern "C" void SFXButton_UpdateButtonImage_m2274 (SFXButton_t478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t486 * L_0 = ((SoundController_t486_StaticFields*)SoundController_t486_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m2305(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Image_t448 * L_2 = (__this->___buttonImage_5);
		Sprite_t394 * L_3 = (__this->___soundOffSprite_4);
		NullCheck(L_2);
		Image_set_sprite_m2856(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		Image_t448 * L_4 = (__this->___buttonImage_5);
		Sprite_t394 * L_5 = (__this->___soundOnSprite_3);
		NullCheck(L_4);
		Image_set_sprite_m2856(L_4, L_5, /*hidden argument*/NULL);
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

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void SFXSilencer::.ctor()
extern "C" void SFXSilencer__ctor_m2275 (SFXSilencer_t479 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::Start()
extern "C" void SFXSilencer_Start_m2276 (SFXSilencer_t479 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_RegisterForEvents_m2278(__this, /*hidden argument*/NULL);
		SFXSilencer_UpdateSoundsActive_m2281(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::OnDestroy()
extern "C" void SFXSilencer_OnDestroy_m2277 (SFXSilencer_t479 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UnregisterForEvents_m2279(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::RegisterForEvents()
extern TypeInfo* SoundController_t486_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m2280_MethodInfo_var;
extern "C" void SFXSilencer_RegisterForEvents_m2278 (SFXSilencer_t479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		SFXSilencer_OnSoundMuteChanged_m2280_MethodInfo_var = il2cpp_codegen_method_info_from_index(411);
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
		SoundController_t486 * L_1 = ((SoundController_t486_StaticFields*)SoundController_t486_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m2280_MethodInfo_var };
		SoundMuteChangedEventHandler_t484 * L_3 = (SoundMuteChangedEventHandler_t484 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2292(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_add_SoundMuteChanged_m2301(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UnregisterForEvents()
extern TypeInfo* SoundController_t486_il2cpp_TypeInfo_var;
extern TypeInfo* SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var;
extern const MethodInfo* SFXSilencer_OnSoundMuteChanged_m2280_MethodInfo_var;
extern "C" void SFXSilencer_UnregisterForEvents_m2279 (SFXSilencer_t479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		SFXSilencer_OnSoundMuteChanged_m2280_MethodInfo_var = il2cpp_codegen_method_info_from_index(411);
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
		SoundController_t486 * L_1 = ((SoundController_t486_StaticFields*)SoundController_t486_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		IntPtr_t L_2 = { (void*)SFXSilencer_OnSoundMuteChanged_m2280_MethodInfo_var };
		SoundMuteChangedEventHandler_t484 * L_3 = (SoundMuteChangedEventHandler_t484 *)il2cpp_codegen_object_new (SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var);
		SoundMuteChangedEventHandler__ctor_m2292(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		SoundController_remove_SoundMuteChanged_m2302(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SFXSilencer::OnSoundMuteChanged()
extern "C" void SFXSilencer_OnSoundMuteChanged_m2280 (SFXSilencer_t479 * __this, const MethodInfo* method)
{
	{
		SFXSilencer_UpdateSoundsActive_m2281(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SFXSilencer::UpdateSoundsActive()
extern TypeInfo* SoundController_t486_il2cpp_TypeInfo_var;
extern "C" void SFXSilencer_UpdateSoundsActive_m2281 (SFXSilencer_t479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
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
		Transform_t323 * L_0 = Component_get_transform_m2739(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_t323 * L_2 = Transform_GetChild_m2961(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_t284 * L_3 = Component_get_gameObject_m2533(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t284 * L_4 = V_1;
		SoundController_t486 * L_5 = ((SoundController_t486_StaticFields*)SoundController_t486_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_5);
		bool L_6 = SoundController_get_sfxMuted_m2305(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m2671(L_4, ((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		Transform_t323 * L_9 = Component_get_transform_m2739(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m2962(L_9, /*hidden argument*/NULL);
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
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputFieldMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void SecretUI::.ctor()
extern "C" void SecretUI__ctor_m2282 (SecretUI_t482 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::Awake()
extern TypeInfo* SecretUI_t482_il2cpp_TypeInfo_var;
extern "C" void SecretUI_Awake_m2283 (SecretUI_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SecretUI_t482_StaticFields*)SecretUI_t482_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		return;
	}
}
// System.Void SecretUI::Start()
extern "C" void SecretUI_Start_m2284 (SecretUI_t482 * __this, const MethodInfo* method)
{
	{
		__this->___uiIsVisible_4 = 0;
		SecretUI_UpdateVisibility_m2285(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SecretUI::UpdateVisibility()
extern "C" void SecretUI_UpdateVisibility_m2285 (SecretUI_t482 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___uiIsVisible_4);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CanvasGroup_t481 * L_1 = (__this->___canvasGroup_3);
		NullCheck(L_1);
		CanvasGroup_set_alpha_m2963(L_1, (1.0f), /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		CanvasGroup_t481 * L_2 = (__this->___canvasGroup_3);
		NullCheck(L_2);
		CanvasGroup_set_alpha_m2963(L_2, (0.0f), /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void SecretUI::Update()
extern "C" void SecretUI_Update_m2286 (SecretUI_t482 * __this, const MethodInfo* method)
{
	{
		InputField_t480 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		bool L_1 = InputField_get_isFocused_m2964(L_0, /*hidden argument*/NULL);
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
		SecretUI_MaybeApplySuggestedLevel_m2287(__this, /*hidden argument*/NULL);
		SecretUI_UpdateVisibility_m2285(__this, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0033:
	{
		InputField_t480 * L_3 = (__this->___inputField_2);
		NullCheck(L_3);
		bool L_4 = InputField_get_isFocused_m2964(L_3, /*hidden argument*/NULL);
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
		SecretUI_UpdateVisibility_m2285(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void SecretUI::MaybeApplySuggestedLevel()
extern TypeInfo* SecretUI_t482_il2cpp_TypeInfo_var;
extern "C" void SecretUI_MaybeApplySuggestedLevel_m2287 (SecretUI_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecretUI_t482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = SecretUI_GetSuggestedLevel_m2288(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		GameController_t392 * L_2 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameController_SetGameLevel_m1974(L_2, L_3, /*hidden argument*/NULL);
		SecretUI_t482 * L_4 = ((SecretUI_t482_StaticFields*)SecretUI_t482_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		NullCheck(L_4);
		SecretUI_ClearSuggestedLevel_m2289(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Int32 SecretUI::GetSuggestedLevel()
extern "C" int32_t SecretUI_GetSuggestedLevel_m2288 (SecretUI_t482 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		InputField_t480 * L_0 = (__this->___inputField_2);
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m2965(L_0, /*hidden argument*/NULL);
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
extern "C" void SecretUI_ClearSuggestedLevel_m2289 (SecretUI_t482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t480 * L_0 = (__this->___inputField_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_0);
		InputField_set_text_m2966(L_0, L_1, /*hidden argument*/NULL);
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

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
struct Component_t578;
struct Camera_t435;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t578;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2698_gshared (Component_t578 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2698(__this, method) (( Object_t * (*) (Component_t578 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2698_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t435_m2834(__this, method) (( Camera_t435 * (*) (Component_t578 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2698_gshared)(__this, method)


// System.Void SizeCamera::.ctor()
extern "C" void SizeCamera__ctor_m2290 (SizeCamera_t483 * __this, const MethodInfo* method)
{
	{
		__this->___minWorldAspectRatio_2 = (1.33333337f);
		__this->___targetWorldHalfHeight_3 = (5.0f);
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SizeCamera::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t435_m2834_MethodInfo_var;
extern "C" void SizeCamera_Start_m2291 (SizeCamera_t483 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t435_m2834_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Camera_t435 * V_4 = {0};
	Rect_t520  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m2443(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___screenPixelsTopToIgnore_4);
		float L_2 = (__this->___screenPixelsBottomToIgnore_5);
		V_0 = ((float)((float)(((float)L_0))-(float)((float)((float)L_1+(float)L_2))));
		int32_t L_3 = Screen_get_width_m2427(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Camera_t435 * L_14 = Component_GetComponent_TisCamera_t435_m2834(__this, /*hidden argument*/Component_GetComponent_TisCamera_t435_m2834_MethodInfo_var);
		V_4 = L_14;
		Camera_t435 * L_15 = V_4;
		float L_16 = V_2;
		NullCheck(L_15);
		Camera_set_orthographicSize_m2967(L_15, L_16, /*hidden argument*/NULL);
		Camera_t435 * L_17 = V_4;
		NullCheck(L_17);
		Rect_t520  L_18 = Camera_get_rect_m2835(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		float L_19 = (__this->___screenPixelsBottomToIgnore_5);
		int32_t L_20 = Screen_get_height_m2443(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_19/(float)(((float)L_20))));
		float L_21 = V_0;
		int32_t L_22 = Screen_get_height_m2443(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_21/(float)(((float)L_22))));
		Rect_set_width_m2836((&V_5), (1.0f), /*hidden argument*/NULL);
		float L_23 = V_7;
		Rect_set_height_m2837((&V_5), L_23, /*hidden argument*/NULL);
		Rect_set_x_m2838((&V_5), (0.0f), /*hidden argument*/NULL);
		float L_24 = V_6;
		Rect_set_y_m2839((&V_5), L_24, /*hidden argument*/NULL);
		Camera_t435 * L_25 = V_4;
		Rect_t520  L_26 = V_5;
		NullCheck(L_25);
		Camera_set_rect_m2840(L_25, L_26, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m2292 (SoundMuteChangedEventHandler_t484 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m2293 (SoundMuteChangedEventHandler_t484 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SoundMuteChangedEventHandler_Invoke_m2293((SoundMuteChangedEventHandler_t484 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t484(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m2294 (SoundMuteChangedEventHandler_t484 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m2295 (SoundMuteChangedEventHandler_t484 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void MusicMuteChangedEventHandler__ctor_m2296 (MusicMuteChangedEventHandler_t485 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/MusicMuteChangedEventHandler::Invoke()
extern "C" void MusicMuteChangedEventHandler_Invoke_m2297 (MusicMuteChangedEventHandler_t485 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MusicMuteChangedEventHandler_Invoke_m2297((MusicMuteChangedEventHandler_t485 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MusicMuteChangedEventHandler_t485(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/MusicMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MusicMuteChangedEventHandler_BeginInvoke_m2298 (MusicMuteChangedEventHandler_t485 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/MusicMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MusicMuteChangedEventHandler_EndInvoke_m2299 (MusicMuteChangedEventHandler_t485 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m2300 (SoundController_t486 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_SoundMuteChanged_m2301 (SoundController_t486 * __this, SoundMuteChangedEventHandler_t484 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t484 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t484 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Combine_m2568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t484 *)Castclass(L_2, SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_SoundMuteChanged_m2302 (SoundController_t486 * __this, SoundMuteChangedEventHandler_t484 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t484 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t484 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Remove_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t484 *)Castclass(L_2, SoundMuteChangedEventHandler_t484_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t485_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_MusicMuteChanged_m2303 (SoundController_t486 * __this, MusicMuteChangedEventHandler_t485 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t485 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t485 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Combine_m2568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t485 *)Castclass(L_2, MusicMuteChangedEventHandler_t485_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t485_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_MusicMuteChanged_m2304 (SoundController_t486 * __this, MusicMuteChangedEventHandler_t485 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t485 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t485 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Remove_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t485 *)Castclass(L_2, MusicMuteChangedEventHandler_t485_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m2305 (SoundController_t486 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsfxMutedU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m2306 (SoundController_t486 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsfxMutedU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m2307 (SoundController_t486 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmusicMutedU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m2308 (SoundController_t486 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmusicMutedU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void SoundController::Awake()
extern TypeInfo* SoundController_t486_il2cpp_TypeInfo_var;
extern "C" void SoundController_Awake_m2309 (SoundController_t486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(342);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SoundController_t486_StaticFields*)SoundController_t486_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void SoundController::Start()
extern TypeInfo* PersistentStorage_t469_il2cpp_TypeInfo_var;
extern "C" void SoundController_Start_m2310 (SoundController_t486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t469_il2cpp_TypeInfo_var);
		PersistentStorage_t469 * L_0 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = PersistentStorage_GetBoolValue_m2200(L_0, (String_t*) &_stringLiteral816, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m2306(__this, L_1, /*hidden argument*/NULL);
		PersistentStorage_t469 * L_2 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = PersistentStorage_GetBoolValue_m2200(L_2, (String_t*) &_stringLiteral817, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m2308(__this, L_3, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t484 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		SoundMuteChangedEventHandler_t484 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(10 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0042:
	{
		MusicMuteChangedEventHandler_t485 * L_6 = (__this->___MusicMuteChanged_6);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		MusicMuteChangedEventHandler_t485 * L_7 = (__this->___MusicMuteChanged_6);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(10 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_7);
	}

IL_0058:
	{
		return;
	}
}
// System.Void SoundController::ToggleSoundsMuted()
extern TypeInfo* PersistentStorage_t469_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleSoundsMuted_m2311 (SoundController_t486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_sfxMuted_m2305(__this, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m2306(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t469_il2cpp_TypeInfo_var);
		PersistentStorage_t469 * L_1 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_sfxMuted_m2305(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m2199(L_1, (String_t*) &_stringLiteral816, L_2, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t484 * L_3 = (__this->___SoundMuteChanged_5);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		SoundMuteChangedEventHandler_t484 * L_4 = (__this->___SoundMuteChanged_5);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(10 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::ToggleMusicMuted()
extern TypeInfo* PersistentStorage_t469_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleMusicMuted_m2312 (SoundController_t486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m2307(__this, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m2308(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t469_il2cpp_TypeInfo_var);
		PersistentStorage_t469 * L_1 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_musicMuted_m2307(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m2199(L_1, (String_t*) &_stringLiteral817, L_2, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t485 * L_3 = (__this->___MusicMuteChanged_6);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MusicMuteChangedEventHandler_t485 * L_4 = (__this->___MusicMuteChanged_6);
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

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void ThrobForEffect::.ctor()
extern "C" void ThrobForEffect__ctor_m2313 (ThrobForEffect_t456 * __this, const MethodInfo* method)
{
	{
		__this->___throbPeriod_4 = (0.3f);
		__this->___throbScale_5 = (1.0f);
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThrobForEffect::Start()
extern "C" void ThrobForEffect_Start_m2314 (ThrobForEffect_t456 * __this, const MethodInfo* method)
{
	{
		__this->___throbbing_2 = 0;
		Transform_t323 * L_0 = (__this->___thingToScale_6);
		NullCheck(L_0);
		Vector3_t414  L_1 = Transform_get_localScale_m2747(L_0, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_1;
		return;
	}
}
// System.Void ThrobForEffect::SetThrobbing(System.Boolean)
extern "C" void ThrobForEffect_SetThrobbing_m2315 (ThrobForEffect_t456 * __this, bool ___throbbing, const MethodInfo* method)
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
		float L_3 = Time_get_time_m2867(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startThrobTime_3 = L_3;
		goto IL_0042;
	}

IL_002a:
	{
		__this->___throbbing_2 = 0;
		Transform_t323 * L_4 = (__this->___thingToScale_6);
		Vector3_t414  L_5 = (__this->___originalScale_7);
		NullCheck(L_4);
		Transform_set_localScale_m2748(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ThrobForEffect::Update()
extern TypeInfo* Mathf_t608_il2cpp_TypeInfo_var;
extern "C" void ThrobForEffect_Update_m2316 (ThrobForEffect_t456 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
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
		float L_1 = Time_get_time_m2867(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startThrobTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___throbPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t608_il2cpp_TypeInfo_var);
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
		Vector3_t414 * L_12 = &(__this->___originalScale_7);
		float L_13 = (L_12->___x_1);
		float L_14 = V_3;
		Vector3_t414 * L_15 = &(__this->___originalScale_7);
		float L_16 = (L_15->___y_2);
		float L_17 = V_3;
		Vector3_t414 * L_18 = &(__this->___originalScale_7);
		float L_19 = (L_18->___z_3);
		Vector3_t414  L_20 = {0};
		Vector3__ctor_m2737(&L_20, ((float)((float)L_11*(float)L_13)), ((float)((float)L_14*(float)L_16)), ((float)((float)L_17*(float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m2748(L_10, L_20, /*hidden argument*/NULL);
		return;
	}
}
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// TimeController/PauseChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_PauseChangedEventHandlerMethodDeclarations.h"



// System.Void TimeController/PauseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PauseChangedEventHandler__ctor_m2317 (PauseChangedEventHandler_t487 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void TimeController/PauseChangedEventHandler::Invoke()
extern "C" void PauseChangedEventHandler_Invoke_m2318 (PauseChangedEventHandler_t487 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PauseChangedEventHandler_Invoke_m2318((PauseChangedEventHandler_t487 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_PauseChangedEventHandler_t487(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult TimeController/PauseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * PauseChangedEventHandler_BeginInvoke_m2319 (PauseChangedEventHandler_t487 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void TimeController/PauseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PauseChangedEventHandler_EndInvoke_m2320 (PauseChangedEventHandler_t487 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void TimeController__ctor_m2321 (TimeController_t488 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeController::add_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t487_il2cpp_TypeInfo_var;
extern "C" void TimeController_add_PauseChanged_m2322 (TimeController_t488 * __this, PauseChangedEventHandler_t487 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t487 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t487 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Combine_m2568(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t487 *)Castclass(L_2, PauseChangedEventHandler_t487_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TimeController::remove_PauseChanged(TimeController/PauseChangedEventHandler)
extern TypeInfo* PauseChangedEventHandler_t487_il2cpp_TypeInfo_var;
extern "C" void TimeController_remove_PauseChanged_m2323 (TimeController_t488 * __this, PauseChangedEventHandler_t487 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PauseChangedEventHandler_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	{
		PauseChangedEventHandler_t487 * L_0 = (__this->___PauseChanged_3);
		PauseChangedEventHandler_t487 * L_1 = ___value;
		Delegate_t562 * L_2 = Delegate_Remove_m2569(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PauseChanged_3 = ((PauseChangedEventHandler_t487 *)Castclass(L_2, PauseChangedEventHandler_t487_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean TimeController::get_paused()
extern "C" bool TimeController_get_paused_m2324 (TimeController_t488 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CpausedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TimeController::set_paused(System.Boolean)
extern "C" void TimeController_set_paused_m2325 (TimeController_t488 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CpausedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TimeController::Awake()
extern TypeInfo* TimeController_t488_il2cpp_TypeInfo_var;
extern "C" void TimeController_Awake_m2326 (TimeController_t488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimeController_t488_StaticFields*)TimeController_t488_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void TimeController::PauseTime()
extern "C" void TimeController_PauseTime_m2327 (TimeController_t488 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m2324(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m2325(__this, 1, /*hidden argument*/NULL);
		Time_set_timeScale_m2676(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t487 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t487 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
	{
		return;
	}
}
// System.Void TimeController::UnPauseTime()
extern "C" void TimeController_UnPauseTime_m2328 (TimeController_t488 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TimeController_get_paused_m2324(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		TimeController_set_paused_m2325(__this, 0, /*hidden argument*/NULL);
		Time_set_timeScale_m2676(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		PauseChangedEventHandler_t487 * L_1 = (__this->___PauseChanged_3);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PauseChangedEventHandler_t487 * L_2 = (__this->___PauseChanged_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void TimeController/PauseChangedEventHandler::Invoke() */, L_2);
	}

IL_0032:
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

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void TipConfig::.ctor(System.String,System.String,UnityEngine.Vector2)
extern "C" void TipConfig__ctor_m2329 (TipConfig_t438 * __this, String_t* ___tipID, String_t* ___tipText, Vector2_t68  ___tipPosition, const MethodInfo* method)
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
// TipController/<PlayTipWithPause>c__Iterator14
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__Ite.h"
#ifndef _MSC_VER
#else
#endif
// TipController/<PlayTipWithPause>c__Iterator14
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__IteMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// TipController
#include "AssemblyU2DCSharp_TipController.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void TipController/<PlayTipWithPause>c__Iterator14::.ctor()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator14__ctor_m2330 (U3CPlayTipWithPauseU3Ec__Iterator14_t490 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator14::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator14_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2331 (U3CPlayTipWithPauseU3Ec__Iterator14_t490 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator14::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator14_System_Collections_IEnumerator_get_Current_m2332 (U3CPlayTipWithPauseU3Ec__Iterator14_t490 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean TipController/<PlayTipWithPause>c__Iterator14::MoveNext()
extern TypeInfo* WaitForSeconds_t602_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayTipWithPauseU3Ec__Iterator14_MoveNext_m2333 (U3CPlayTipWithPauseU3Ec__Iterator14_t490 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
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
		WaitForSeconds_t602 * L_3 = (WaitForSeconds_t602 *)il2cpp_codegen_object_new (WaitForSeconds_t602_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2853(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_3 = L_3;
		__this->___U24PC_2 = 1;
		goto IL_0065;
	}

IL_003e:
	{
		TipController_t489 * L_4 = (__this->___U3CU3Ef__this_6);
		TipConfig_t438 * L_5 = (__this->___tipConfig_1);
		NullCheck(L_4);
		TipController_MaybeShowTip_m2347(L_4, L_5, /*hidden argument*/NULL);
		TipController_t489 * L_6 = (__this->___U3CU3Ef__this_6);
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
// System.Void TipController/<PlayTipWithPause>c__Iterator14::Dispose()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator14_Dispose_m2334 (U3CPlayTipWithPauseU3Ec__Iterator14_t490 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void TipController/<PlayTipWithPause>c__Iterator14::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator14_Reset_m2335 (U3CPlayTipWithPauseU3Ec__Iterator14_t490 * __this, const MethodInfo* method)
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

// GameController/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GamePhaseChangedEventHandle.h"
// GameController/GamePhaseType
#include "AssemblyU2DCSharp_GameController_GamePhaseType.h"
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
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// GameController/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GamePhaseChangedEventHandleMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"
struct GameObject_t284;
struct TipDialog_t491;
struct GameObject_t284;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2732_gshared (GameObject_t284 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2732(__this, method) (( Object_t * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2732_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t491_m2968(__this, method) (( TipDialog_t491 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2732_gshared)(__this, method)


// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m2336 (TipController_t489 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::Awake()
extern TypeInfo* TipController_t489_il2cpp_TypeInfo_var;
extern "C" void TipController_Awake_m2337 (TipController_t489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TipController_t489_StaticFields*)TipController_t489_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_2 = 0;
		return;
	}
}
// System.Void TipController::Start()
extern "C" void TipController_Start_m2338 (TipController_t489 * __this, const MethodInfo* method)
{
	{
		TipController_RegisterForEvents_m2340(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m2339 (TipController_t489 * __this, const MethodInfo* method)
{
	{
		TipController_UnregisterForEvents_m2341(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t424_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m2342_MethodInfo_var;
extern "C" void TipController_RegisterForEvents_m2340 (TipController_t489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		TipController_OnPhaseChanged_m2342_MethodInfo_var = il2cpp_codegen_method_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t392 * L_0 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)TipController_OnPhaseChanged_m2342_MethodInfo_var };
		GamePhaseChangedEventHandler_t424 * L_2 = (GamePhaseChangedEventHandler_t424 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t424_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m1936(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameController_add_GamePhaseChanged_m1951(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_2 = 1;
		return;
	}
}
// System.Void TipController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t424_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m2342_MethodInfo_var;
extern "C" void TipController_UnregisterForEvents_m2341 (TipController_t489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		TipController_OnPhaseChanged_m2342_MethodInfo_var = il2cpp_codegen_method_info_from_index(412);
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
		GameController_t392 * L_1 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TipController_OnPhaseChanged_m2342_MethodInfo_var };
		GamePhaseChangedEventHandler_t424 * L_3 = (GamePhaseChangedEventHandler_t424 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t424_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m1936(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameController_remove_GamePhaseChanged_m1952(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m2342 (TipController_t489 * __this, const MethodInfo* method)
{
	{
		GameController_t392 * L_0 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameController_get_gamePhase_m1955(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001b;
		}
	}
	{
		TipController_EnqueueTipForLevel_m2343(__this, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_001b:
	{
		TipController_ClearEnqueuedTips_m2346(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m2343 (TipController_t489 * __this, const MethodInfo* method)
{
	LevelDescription_t439 * V_0 = {0};
	{
		LevelConfig_t447 * L_0 = LevelConfig_get_instance_m2017(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t439 * L_1 = LevelConfig_GetCurrentLevelDescription_m2022(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t439 * L_2 = V_0;
		NullCheck(L_2);
		TipConfig_t438 * L_3 = (L_2->___tipConfig_8);
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
		LevelDescription_t439 * L_4 = V_0;
		NullCheck(L_4);
		TipConfig_t438 * L_5 = (L_4->___tipConfig_8);
		LevelDescription_t439 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = (L_6->___tipPause_9);
		TipController_EnqueueTip_m2344(__this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m2344 (TipController_t489 * __this, TipConfig_t438 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	{
		TipConfig_t438 * L_0 = ___tipConfig;
		float L_1 = ___tipPause;
		Object_t * L_2 = TipController_PlayTipWithPause_m2345(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = L_2;
		Object_t * L_3 = (__this->___enqueuedTip_4);
		MonoBehaviour_StartCoroutine_m2487(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern TypeInfo* U3CPlayTipWithPauseU3Ec__Iterator14_t490_il2cpp_TypeInfo_var;
extern "C" Object_t * TipController_PlayTipWithPause_m2345 (TipController_t489 * __this, TipConfig_t438 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayTipWithPauseU3Ec__Iterator14_t490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayTipWithPauseU3Ec__Iterator14_t490 * V_0 = {0};
	{
		U3CPlayTipWithPauseU3Ec__Iterator14_t490 * L_0 = (U3CPlayTipWithPauseU3Ec__Iterator14_t490 *)il2cpp_codegen_object_new (U3CPlayTipWithPauseU3Ec__Iterator14_t490_il2cpp_TypeInfo_var);
		U3CPlayTipWithPauseU3Ec__Iterator14__ctor_m2330(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayTipWithPauseU3Ec__Iterator14_t490 * L_1 = V_0;
		float L_2 = ___tipPause;
		NullCheck(L_1);
		L_1->___tipPause_0 = L_2;
		U3CPlayTipWithPauseU3Ec__Iterator14_t490 * L_3 = V_0;
		TipConfig_t438 * L_4 = ___tipConfig;
		NullCheck(L_3);
		L_3->___tipConfig_1 = L_4;
		U3CPlayTipWithPauseU3Ec__Iterator14_t490 * L_5 = V_0;
		float L_6 = ___tipPause;
		NullCheck(L_5);
		L_5->___U3CU24U3EtipPause_4 = L_6;
		U3CPlayTipWithPauseU3Ec__Iterator14_t490 * L_7 = V_0;
		TipConfig_t438 * L_8 = ___tipConfig;
		NullCheck(L_7);
		L_7->___U3CU24U3EtipConfig_5 = L_8;
		U3CPlayTipWithPauseU3Ec__Iterator14_t490 * L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3Ef__this_6 = __this;
		U3CPlayTipWithPauseU3Ec__Iterator14_t490 * L_10 = V_0;
		return L_10;
	}
}
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m2346 (TipController_t489 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m2869(__this, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = (Object_t *)NULL;
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern TypeInfo* PersistentStorage_t469_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogController_t412_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t284_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t491_m2968_MethodInfo_var;
extern "C" bool TipController_MaybeShowTip_m2347 (TipController_t489 * __this, TipConfig_t438 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DialogController_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		GameObject_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		GameObject_GetComponent_TisTipDialog_t491_m2968_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GameObject_t284 * V_1 = {0};
	TipDialog_t491 * V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t469_il2cpp_TypeInfo_var);
		PersistentStorage_t469 * L_0 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t438 * L_1 = ___tipConfig;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral818, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = PersistentStorage_GetBoolValue_m2200(L_0, L_3, 0, /*hidden argument*/NULL);
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
		DialogController_t412 * L_6 = ((DialogController_t412_StaticFields*)DialogController_t412_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_6);
		bool L_7 = DialogController_IsDialogShowing_m1903(L_6, /*hidden argument*/NULL);
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
		Vector3_t414  L_9 = {0};
		Vector3__ctor_m2737(&L_9, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t601  L_10 = Quaternion_get_identity_m2844(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t528 * L_11 = Object_Instantiate_m2845(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = ((GameObject_t284 *)IsInst(L_11, GameObject_t284_il2cpp_TypeInfo_var));
		GameObject_t284 * L_12 = V_1;
		NullCheck(L_12);
		Transform_t323 * L_13 = GameObject_get_transform_m2742(L_12, /*hidden argument*/NULL);
		Vector3_t414  L_14 = {0};
		Vector3__ctor_m2737(&L_14, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_m2748(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t284 * L_15 = V_1;
		NullCheck(L_15);
		TipDialog_t491 * L_16 = GameObject_GetComponent_TisTipDialog_t491_m2968(L_15, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t491_m2968_MethodInfo_var);
		V_2 = L_16;
		TipDialog_t491 * L_17 = V_2;
		TipConfig_t438 * L_18 = ___tipConfig;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___tipText_1);
		TipConfig_t438 * L_20 = ___tipConfig;
		NullCheck(L_20);
		Vector2_t68  L_21 = (L_20->___tipPosition_2);
		NullCheck(L_17);
		TipDialog_ConfigureDialog_m2350(L_17, L_19, L_21, /*hidden argument*/NULL);
		DialogController_t412 * L_22 = ((DialogController_t412_StaticFields*)DialogController_t412_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t284 * L_23 = V_1;
		NullCheck(L_22);
		DialogController_ShowDialog_m1900(L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PersistentStorage_t469_il2cpp_TypeInfo_var);
		PersistentStorage_t469 * L_24 = ((PersistentStorage_t469_StaticFields*)PersistentStorage_t469_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t438 * L_25 = ___tipConfig;
		NullCheck(L_25);
		String_t* L_26 = (L_25->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral818, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		PersistentStorage_SetBoolValue_m2199(L_24, L_27, 1, /*hidden argument*/NULL);
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
struct Component_t578;
struct RectTransform_t501;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t501_m2904(__this, method) (( RectTransform_t501 * (*) (Component_t578 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2698_gshared)(__this, method)


// System.Void TipDialog::.ctor()
extern "C" void TipDialog__ctor_m2348 (TipDialog_t491 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::CloseDialog()
extern TypeInfo* DialogController_t412_il2cpp_TypeInfo_var;
extern "C" void TipDialog_CloseDialog_m2349 (TipDialog_t491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		DialogController_t412 * L_0 = ((DialogController_t412_StaticFields*)DialogController_t412_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t284 * L_1 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DialogController_HideDialog_m1901(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipDialog::ConfigureDialog(System.String,UnityEngine.Vector2)
extern const MethodInfo* Component_GetComponent_TisRectTransform_t501_m2904_MethodInfo_var;
extern "C" void TipDialog_ConfigureDialog_m2350 (TipDialog_t491 * __this, String_t* ___message, Vector2_t68  ___position, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t501_m2904_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484018);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t501 * V_0 = {0};
	{
		Text_t380 * L_0 = (__this->___dialogText_2);
		String_t* L_1 = ___message;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		RectTransform_t501 * L_2 = Component_GetComponent_TisRectTransform_t501_m2904(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t501_m2904_MethodInfo_var);
		V_0 = L_2;
		RectTransform_t501 * L_3 = V_0;
		Vector2_t68  L_4 = ___position;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m2969(L_3, L_4, /*hidden argument*/NULL);
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

// GameController/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameLevelChangedEventHandle.h"
// GameController/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameController_GameLevelChangedEventHandleMethodDeclarations.h"
struct GameObject_t284;
struct Text_t380;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t380_m2970(__this, method) (( Text_t380 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2732_gshared)(__this, method)


// System.Void TrackLevel::.ctor()
extern "C" void TrackLevel__ctor_m2351 (TrackLevel_t492 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::Start()
extern TypeInfo* GameLevelChangedEventHandler_t423_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m2354_MethodInfo_var;
extern "C" void TrackLevel_Start_m2352 (TrackLevel_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		TrackLevel_SetGameLevelText_m2354_MethodInfo_var = il2cpp_codegen_method_info_from_index(415);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t380 * L_1 = GameObject_GetComponent_TisText_t380_m2970(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var);
		__this->___levelText_2 = L_1;
		GameController_t392 * L_2 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)TrackLevel_SetGameLevelText_m2354_MethodInfo_var };
		GameLevelChangedEventHandler_t423 * L_4 = (GameLevelChangedEventHandler_t423 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t423_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1932(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameController_add_GameLevelChanged_m1949(L_2, L_4, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		TrackLevel_SetGameLevelText_m2354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackLevel::OnDestroy()
extern TypeInfo* GameLevelChangedEventHandler_t423_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackLevel_SetGameLevelText_m2354_MethodInfo_var;
extern "C" void TrackLevel_OnDestroy_m2353 (TrackLevel_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(329);
		TrackLevel_SetGameLevelText_m2354_MethodInfo_var = il2cpp_codegen_method_info_from_index(415);
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
		GameController_t392 * L_1 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)TrackLevel_SetGameLevelText_m2354_MethodInfo_var };
		GameLevelChangedEventHandler_t423 * L_3 = (GameLevelChangedEventHandler_t423 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t423_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m1932(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameController_remove_GameLevelChanged_m1950(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TrackLevel::SetGameLevelText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackLevel_SetGameLevelText_m2354 (TrackLevel_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t380 * L_0 = (__this->___levelText_2);
		GameController_t392 * L_1 = GameController_get_instance_m1957(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameController_get_gameLevel_m1953(L_1, /*hidden argument*/NULL);
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
struct DistortForEffect_t413;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
// !!0 UnityEngine.GameObject::GetComponent<DistortForEffect>()
#define GameObject_GetComponent_TisDistortForEffect_t413_m2903(__this, method) (( DistortForEffect_t413 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2732_gshared)(__this, method)


// System.Void TrackScore::.ctor()
extern "C" void TrackScore__ctor_m2355 (TrackScore_t493 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::Start()
extern TypeInfo* ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t413_m2903_MethodInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m2359_MethodInfo_var;
extern "C" void TrackScore_Start_m2356 (TrackScore_t493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		GameObject_GetComponent_TisDistortForEffect_t413_m2903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484015);
		TrackScore_DynamicUpdateScoreText_m2359_MethodInfo_var = il2cpp_codegen_method_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t391 * L_0 = PlayerStats_get_instance_m2244(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t380 * L_2 = GameObject_GetComponent_TisText_t380_m2970(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var);
		__this->___scoreText_2 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t413 * L_4 = GameObject_GetComponent_TisDistortForEffect_t413_m2903(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t413_m2903_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t391 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackScore_DynamicUpdateScoreText_m2359_MethodInfo_var };
		ScoreChangedEventHandler_t473 * L_7 = (ScoreChangedEventHandler_t473 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m2225(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_ScoreChanged_m2238(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackScore_SetScoreText_m2358(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackScore::OnDestroy()
extern TypeInfo* ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackScore_DynamicUpdateScoreText_m2359_MethodInfo_var;
extern "C" void TrackScore_OnDestroy_m2357 (TrackScore_t493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		TrackScore_DynamicUpdateScoreText_m2359_MethodInfo_var = il2cpp_codegen_method_info_from_index(416);
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
		PlayerStats_t391 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackScore_DynamicUpdateScoreText_m2359_MethodInfo_var };
		ScoreChangedEventHandler_t473 * L_3 = (ScoreChangedEventHandler_t473 *)il2cpp_codegen_object_new (ScoreChangedEventHandler_t473_il2cpp_TypeInfo_var);
		ScoreChangedEventHandler__ctor_m2225(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_ScoreChanged_m2239(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackScore::SetScoreText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackScore_SetScoreText_m2358 (TrackScore_t493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t380 * L_0 = (__this->___scoreText_2);
		PlayerStats_t391 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_GetScore_m2257(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral819, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackScore::DynamicUpdateScoreText()
extern "C" void TrackScore_DynamicUpdateScoreText_m2359 (TrackScore_t493 * __this, const MethodInfo* method)
{
	{
		TrackScore_SetScoreText_m2358(__this, /*hidden argument*/NULL);
		DistortForEffect_t413 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_Distort_m1906(L_0, /*hidden argument*/NULL);
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
extern "C" void TrackTreats__ctor_m2360 (TrackTreats_t494 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::Start()
extern TypeInfo* TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDistortForEffect_t413_m2903_MethodInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m2364_MethodInfo_var;
extern "C" void TrackTreats_Start_m2361 (TrackTreats_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		GameObject_GetComponent_TisDistortForEffect_t413_m2903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484015);
		TrackTreats_DynamicUpdateTreatsText_m2364_MethodInfo_var = il2cpp_codegen_method_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t391 * L_0 = PlayerStats_get_instance_m2244(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_4 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t380 * L_2 = GameObject_GetComponent_TisText_t380_m2970(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t380_m2970_MethodInfo_var);
		__this->___treatsText_2 = L_2;
		GameObject_t284 * L_3 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DistortForEffect_t413 * L_4 = GameObject_GetComponent_TisDistortForEffect_t413_m2903(L_3, /*hidden argument*/GameObject_GetComponent_TisDistortForEffect_t413_m2903_MethodInfo_var);
		__this->___distortForEffect_3 = L_4;
		PlayerStats_t391 * L_5 = (__this->___playerStats_4);
		IntPtr_t L_6 = { (void*)TrackTreats_DynamicUpdateTreatsText_m2364_MethodInfo_var };
		TreatsChangedEventHandler_t474 * L_7 = (TreatsChangedEventHandler_t474 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2229(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerStats_add_TreatsChanged_m2240(L_5, L_7, /*hidden argument*/NULL);
		__this->___registerdForEvents_5 = 1;
		TrackTreats_SetTreatsText_m2363(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackTreats::OnDestroy()
extern TypeInfo* TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var;
extern const MethodInfo* TrackTreats_DynamicUpdateTreatsText_m2364_MethodInfo_var;
extern "C" void TrackTreats_OnDestroy_m2362 (TrackTreats_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		TrackTreats_DynamicUpdateTreatsText_m2364_MethodInfo_var = il2cpp_codegen_method_info_from_index(417);
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
		PlayerStats_t391 * L_1 = (__this->___playerStats_4);
		IntPtr_t L_2 = { (void*)TrackTreats_DynamicUpdateTreatsText_m2364_MethodInfo_var };
		TreatsChangedEventHandler_t474 * L_3 = (TreatsChangedEventHandler_t474 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t474_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2229(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_TreatsChanged_m2241(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TrackTreats::SetTreatsText()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TrackTreats_SetTreatsText_m2363 (TrackTreats_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t380 * L_0 = (__this->___treatsText_2);
		PlayerStats_t391 * L_1 = (__this->___playerStats_4);
		NullCheck(L_1);
		int32_t L_2 = PlayerStats_GetTreats_m2258(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral820, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void TrackTreats::DynamicUpdateTreatsText()
extern "C" void TrackTreats_DynamicUpdateTreatsText_m2364 (TrackTreats_t494 * __this, const MethodInfo* method)
{
	{
		TrackTreats_SetTreatsText_m2363(__this, /*hidden argument*/NULL);
		DistortForEffect_t413 * L_0 = (__this->___distortForEffect_3);
		NullCheck(L_0);
		DistortForEffect_Distort_m1906(L_0, /*hidden argument*/NULL);
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
struct Component_t578;
struct Animator_t495;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t495_m2971(__this, method) (( Animator_t495 * (*) (Component_t578 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2698_gshared)(__this, method)


// System.Void TutsPlayerController::.ctor()
extern "C" void TutsPlayerController__ctor_m2365 (TutsPlayerController_t496 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutsPlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t495_m2971_MethodInfo_var;
extern "C" void TutsPlayerController_Start_m2366 (TutsPlayerController_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t495_m2971_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t495 * L_0 = Component_GetComponent_TisAnimator_t495_m2971(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t495_m2971_MethodInfo_var);
		__this->___animator_2 = L_0;
		return;
	}
}
// System.Void TutsPlayerController::Update()
extern TypeInfo* Input_t532_il2cpp_TypeInfo_var;
extern "C" void TutsPlayerController_Update_m2367 (TutsPlayerController_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t532_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2972(NULL /*static, unused*/, (String_t*) &_stringLiteral821, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2972(NULL /*static, unused*/, (String_t*) &_stringLiteral822, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		Animator_t495 * L_3 = (__this->___animator_2);
		NullCheck(L_3);
		Animator_SetInteger_m2973(L_3, (String_t*) &_stringLiteral823, 2, /*hidden argument*/NULL);
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
		Animator_t495 * L_5 = (__this->___animator_2);
		NullCheck(L_5);
		Animator_SetInteger_m2973(L_5, (String_t*) &_stringLiteral823, 0, /*hidden argument*/NULL);
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
		Animator_t495 * L_7 = (__this->___animator_2);
		NullCheck(L_7);
		Animator_SetInteger_m2973(L_7, (String_t*) &_stringLiteral823, 1, /*hidden argument*/NULL);
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
		Animator_t495 * L_9 = (__this->___animator_2);
		NullCheck(L_9);
		Animator_SetInteger_m2973(L_9, (String_t*) &_stringLiteral823, 3, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"


// System.Void TweakableParams::.ctor()
extern "C" void TweakableParams__ctor_m2368 (TweakableParams_t401 * __this, const MethodInfo* method)
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
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// TweakableParams TweakableParams::get_instance()
extern TypeInfo* TweakableParams_t401_il2cpp_TypeInfo_var;
extern "C" TweakableParams_t401 * TweakableParams_get_instance_m2369 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TweakableParams_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	{
		TweakableParams_t401 * L_0 = ((TweakableParams_t401_StaticFields*)TweakableParams_t401_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void TweakableParams::set_instance(TweakableParams)
extern TypeInfo* TweakableParams_t401_il2cpp_TypeInfo_var;
extern "C" void TweakableParams_set_instance_m2370 (Object_t * __this /* static, unused */, TweakableParams_t401 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TweakableParams_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		s_Il2CppMethodIntialized = true;
	}
	{
		TweakableParams_t401 * L_0 = ___value;
		((TweakableParams_t401_StaticFields*)TweakableParams_t401_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Int32 TweakableParams::GetInitialMoney()
extern "C" int32_t TweakableParams_GetInitialMoney_m2371 (TweakableParams_t401 * __this, const MethodInfo* method)
{
	{
		DebugConfig_t408 * L_0 = DebugConfig_get_instance_m1885(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" int32_t TweakableParams_GetInitialBoosts_m2372 (TweakableParams_t401 * __this, const MethodInfo* method)
{
	{
		DebugConfig_t408 * L_0 = DebugConfig_get_instance_m1885(NULL /*static, unused*/, /*hidden argument*/NULL);
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
extern "C" void TweakableParams_Awake_m2373 (TweakableParams_t401 * __this, const MethodInfo* method)
{
	{
		TweakableParams_set_instance_m2370(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
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
extern "C" void TweakableSlider__ctor_m2374 (TweakableSlider_t457 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
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
extern "C" void TwitterSharing__ctor_m2375 (TwitterSharing_t497 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::Awake()
extern TypeInfo* TwitterSharing_t497_il2cpp_TypeInfo_var;
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_Awake_m2376 (TwitterSharing_t497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TwitterSharing_t497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TwitterSharing_t497_StaticFields*)TwitterSharing_t497_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		IL2CPP_RUNTIME_CLASS_INIT(SPTwitter_t296_il2cpp_TypeInfo_var);
		SPTwitter_t296 * L_0 = SPTwitter_get_instance_m1274(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void SPTwitter::Init() */, L_0);
		return;
	}
}
// System.Void TwitterSharing::ShareScore(System.Int32)
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScore_m2377 (TwitterSharing_t497 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m2462(NULL /*static, unused*/, (String_t*) &_stringLiteral824, /*hidden argument*/NULL);
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
		TwitterSharing_ShareScoreInternal_m2379(__this, L_2, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0025:
	{
		int32_t L_3 = ___score;
		TwitterSharing_ShareScoreThroughURLs_m2378(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void TwitterSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreThroughURLs_m2378 (TwitterSharing_t497 * __this, int32_t ___score, const MethodInfo* method)
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
		Debug_Log_m2462(NULL /*static, unused*/, (String_t*) &_stringLiteral825, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		String_t* L_1 = Utilities_GetShareMessageForScore_m2394(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t45* L_2 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral826);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral826;
		StringU5BU5D_t45* L_3 = L_2;
		String_t* L_4 = V_0;
		String_t* L_5 = WWW_EscapeURL_m2892(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)L_5;
		StringU5BU5D_t45* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral827);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral827;
		StringU5BU5D_t45* L_7 = L_6;
		String_t* L_8 = WWW_EscapeURL_m2892(NULL /*static, unused*/, (String_t*) &_stringLiteral758, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t45* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral828);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral828;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m217(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_m174(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral829, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		String_t* L_14 = WWW_EscapeURL_m2892(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral830, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16 = V_2;
		String_t* L_17 = V_1;
		Object_t * L_18 = Utilities_LaunchAppOrWeb_m2398(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2487(__this, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwitterSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* SPTwitter_t296_il2cpp_TypeInfo_var;
extern "C" void TwitterSharing_ShareScoreInternal_m2379 (TwitterSharing_t497 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SPTwitter_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Debug_Log_m2462(NULL /*static, unused*/, (String_t*) &_stringLiteral831, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		String_t* L_1 = Utilities_GetShareMessageForScore_m2394(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"
struct GameObject_t284;
struct BoostButton_t377;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t377_m2860(__this, method) (( BoostButton_t377 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2732_gshared)(__this, method)


// System.Void UseBoost::.ctor()
extern "C" void UseBoost__ctor_m2380 (UseBoost_t498 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UseBoost::Start()
extern "C" void UseBoost_Start_m2381 (UseBoost_t498 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t372 * L_0 = BoostConfig_get_instance_m1838(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t391 * L_1 = PlayerStats_get_instance_m2244(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void UseBoost::Use()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t377_m2860_MethodInfo_var;
extern "C" void UseBoost_Use_m2382 (UseBoost_t498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t377_m2860_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483997);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t377 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GameObject_t284 * L_0 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t377 * L_1 = GameObject_GetComponent_TisBoostButton_t377_m2860(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t377_m2860_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t377 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m1807(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PlayerStats_t391 * L_4 = (__this->___playerStats_3);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = PlayerStats_GetAvailableBoostCount_m2260(L_4, L_5, /*hidden argument*/NULL);
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
		PlayerStats_t391 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		PlayerStats_RemoveBoost_m2262(L_7, L_8, /*hidden argument*/NULL);
		BoostConfig_t372 * L_9 = (__this->___boostConfig_2);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		BoostConfig_ExecuteBoost_m1852(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// Utilities/<LaunchAppOrWeb>c__Iterator15
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1.h"
#ifndef _MSC_VER
#else
#endif
// Utilities/<LaunchAppOrWeb>c__Iterator15
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1MethodDeclarations.h"

// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void Utilities/<LaunchAppOrWeb>c__Iterator15::.ctor()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator15__ctor_m2383 (U3CLaunchAppOrWebU3Ec__Iterator15_t499 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2384 (U3CLaunchAppOrWebU3Ec__Iterator15_t499 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m2385 (U3CLaunchAppOrWebU3Ec__Iterator15_t499 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean Utilities/<LaunchAppOrWeb>c__Iterator15::MoveNext()
extern TypeInfo* WaitForSeconds_t602_il2cpp_TypeInfo_var;
extern "C" bool U3CLaunchAppOrWebU3Ec__Iterator15_MoveNext_m2386 (U3CLaunchAppOrWebU3Ec__Iterator15_t499 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t602_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
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
		int32_t L_2 = Application_get_platform_m2681(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_3 = (__this->___appURL_0);
		String_t* L_4 = (__this->___webURL_1);
		Utilities_LaunchAppOrWebOnIOS_m2397(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		WaitForSeconds_t602 * L_5 = (WaitForSeconds_t602 *)il2cpp_codegen_object_new (WaitForSeconds_t602_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2853(L_5, (0.001f), /*hidden argument*/NULL);
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
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator15::Dispose()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator15_Dispose_m2387 (U3CLaunchAppOrWebU3Ec__Iterator15_t499 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator15_Reset_m2388 (U3CLaunchAppOrWebU3Ec__Iterator15_t499 * __this, const MethodInfo* method)
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

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
struct GameObject_t284;
struct RectTransform_t501;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t501_m2843(__this, method) (( RectTransform_t501 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2732_gshared)(__this, method)


// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m2389 (Utilities_t500 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m2390 (Object_t * __this /* static, unused */, Vector3_t414  ___vector, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		(&___vector)->___z_3 = (0.0f);
		Vector3_t414  L_0 = Vector3_get_right_m2974(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t414  L_1 = ___vector;
		float L_2 = Vector3_Angle_m2975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" GameObject_t284 * Utilities_FindChildWithTag_m2391 (Object_t * __this /* static, unused */, GameObject_t284 * ___gameObject, String_t* ___tag, const MethodInfo* method)
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
		Transform_t323 * L_1 = GameObject_get_transform_m2742(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t323 * L_3 = Transform_GetChild_m2961(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t323 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_t284 * L_5 = Component_get_gameObject_m2533(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m2976(L_5, /*hidden argument*/NULL);
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
		GameObject_t284 * L_10 = Component_get_gameObject_m2533(L_9, /*hidden argument*/NULL);
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
		Transform_t323 * L_14 = GameObject_get_transform_m2742(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m2962(L_14, /*hidden argument*/NULL);
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
extern TypeInfo* Mathf_t608_il2cpp_TypeInfo_var;
extern "C" Color_t257  Utilities_TrafficLightColorLerp_m2392 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___fractionFinished;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t608_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m2902(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___fractionFinished = L_1;
		float L_2 = ___fractionFinished;
		if ((!(((float)L_2) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		Color_t257  L_3 = Color_get_green_m2977(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t257  L_4 = Color_get_yellow_m2978(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___fractionFinished;
		Color_t257  L_6 = Color_Lerp_m2979(NULL /*static, unused*/, L_3, L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		Color_t257  L_7 = Color_get_yellow_m2978(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t257  L_8 = Color_get_red_m2980(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___fractionFinished;
		Color_t257  L_10 = Color_Lerp_m2979(NULL /*static, unused*/, L_7, L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m2393 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t391 * L_0 = PlayerStats_get_instance_m2244(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m2263(L_0, /*hidden argument*/NULL);
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
		return (String_t*) &_stringLiteral832;
	}
}
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_GetShareMessageForScore_m2394 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
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
		PlayerStats_t391 * L_0 = PlayerStats_get_instance_m2244(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m2263(L_0, /*hidden argument*/NULL);
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
		String_t* L_7 = String_Concat_m2588(NULL /*static, unused*/, (String_t*) &_stringLiteral833, L_6, (String_t*) &_stringLiteral834, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___score;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2588(NULL /*static, unused*/, (String_t*) &_stringLiteral835, L_10, (String_t*) &_stringLiteral834, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" {int32_t DEFAULT_CALL CanLaunchURL(char*);}
extern "C" bool Utilities_CanLaunchURL_m2395 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
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
extern "C" bool Utilities_AppCanLaunchURL_m2396 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m2681(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = Utilities_CanLaunchURL_m2395(NULL /*static, unused*/, (String_t*) &_stringLiteral758, /*hidden argument*/NULL);
		return L_1;
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern "C" void Utilities_LaunchAppOrWebOnIOS_m2397 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appURL;
		bool L_1 = Utilities_CanLaunchURL_m2395(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Debug_Log_m2462(NULL /*static, unused*/, (String_t*) &_stringLiteral836, /*hidden argument*/NULL);
		String_t* L_2 = ___appURL;
		Application_OpenURL_m2675(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		Debug_Log_m2462(NULL /*static, unused*/, (String_t*) &_stringLiteral837, /*hidden argument*/NULL);
		String_t* L_3 = ___webURL;
		Application_OpenURL_m2675(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern TypeInfo* U3CLaunchAppOrWebU3Ec__Iterator15_t499_il2cpp_TypeInfo_var;
extern "C" Object_t * Utilities_LaunchAppOrWeb_m2398 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CLaunchAppOrWebU3Ec__Iterator15_t499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	U3CLaunchAppOrWebU3Ec__Iterator15_t499 * V_0 = {0};
	{
		U3CLaunchAppOrWebU3Ec__Iterator15_t499 * L_0 = (U3CLaunchAppOrWebU3Ec__Iterator15_t499 *)il2cpp_codegen_object_new (U3CLaunchAppOrWebU3Ec__Iterator15_t499_il2cpp_TypeInfo_var);
		U3CLaunchAppOrWebU3Ec__Iterator15__ctor_m2383(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLaunchAppOrWebU3Ec__Iterator15_t499 * L_1 = V_0;
		String_t* L_2 = ___appURL;
		NullCheck(L_1);
		L_1->___appURL_0 = L_2;
		U3CLaunchAppOrWebU3Ec__Iterator15_t499 * L_3 = V_0;
		String_t* L_4 = ___webURL;
		NullCheck(L_3);
		L_3->___webURL_1 = L_4;
		U3CLaunchAppOrWebU3Ec__Iterator15_t499 * L_5 = V_0;
		String_t* L_6 = ___appURL;
		NullCheck(L_5);
		L_5->___U3CU24U3EappURL_4 = L_6;
		U3CLaunchAppOrWebU3Ec__Iterator15_t499 * L_7 = V_0;
		String_t* L_8 = ___webURL;
		NullCheck(L_7);
		L_7->___U3CU24U3EwebURL_5 = L_8;
		U3CLaunchAppOrWebU3Ec__Iterator15_t499 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t501_m2843_MethodInfo_var;
extern "C" void Utilities_SpaceHorizontally_m2399 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t382* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t501_m2843_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483987);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t284 * V_2 = {0};
	GameObjectU5BU5D_t382* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t284 * V_10 = {0};
	GameObjectU5BU5D_t382* V_11 = {0};
	int32_t V_12 = 0;
	RectTransform_t501 * V_13 = {0};
	float V_14 = 0.0f;
	Vector2_t68  V_15 = {0};
	Rect_t520  V_16 = {0};
	Rect_t520  V_17 = {0};
	{
		float L_0 = ___containingWidth;
		V_0 = L_0;
		V_1 = (0.0f);
		GameObjectU5BU5D_t382* L_1 = ___objects;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		GameObjectU5BU5D_t382* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_2, L_4));
		float L_5 = V_1;
		GameObject_t284 * L_6 = V_2;
		NullCheck(L_6);
		RectTransform_t501 * L_7 = GameObject_GetComponent_TisRectTransform_t501_m2843(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t501_m2843_MethodInfo_var);
		NullCheck(L_7);
		Rect_t520  L_8 = RectTransform_get_rect_m2907(L_7, /*hidden argument*/NULL);
		V_16 = L_8;
		float L_9 = Rect_get_width_m2740((&V_16), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5+(float)L_9));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_4;
		GameObjectU5BU5D_t382* L_12 = V_3;
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
		GameObjectU5BU5D_t382* L_16 = ___objects;
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
		GameObjectU5BU5D_t382* L_20 = ___objects;
		V_11 = L_20;
		V_12 = 0;
		goto IL_00d7;
	}

IL_0079:
	{
		GameObjectU5BU5D_t382* L_21 = V_11;
		int32_t L_22 = V_12;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_10 = (*(GameObject_t284 **)(GameObject_t284 **)SZArrayLdElema(L_21, L_23));
		GameObject_t284 * L_24 = V_10;
		NullCheck(L_24);
		RectTransform_t501 * L_25 = GameObject_GetComponent_TisRectTransform_t501_m2843(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t501_m2843_MethodInfo_var);
		V_13 = L_25;
		RectTransform_t501 * L_26 = V_13;
		NullCheck(L_26);
		Rect_t520  L_27 = RectTransform_get_rect_m2907(L_26, /*hidden argument*/NULL);
		V_17 = L_27;
		float L_28 = Rect_get_width_m2740((&V_17), /*hidden argument*/NULL);
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
		Vector2__ctor_m2920((&V_15), L_33, ((float)((float)L_34+(float)L_35)), /*hidden argument*/NULL);
		float L_36 = V_9;
		V_9 = ((-L_36));
		RectTransform_t501 * L_37 = V_13;
		Vector2_t68  L_38 = V_15;
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_m2969(L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_7;
		float L_40 = V_14;
		V_7 = ((float)((float)L_39+(float)L_40));
		int32_t L_41 = V_12;
		V_12 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_42 = V_12;
		GameObjectU5BU5D_t382* L_43 = V_11;
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
struct Canvas_t374;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t374_m2981(__this, method) (( Canvas_t374 * (*) (GameObject_t284 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2732_gshared)(__this, method)


// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m2400 (WorldObjectFollower_t502 * __this, const MethodInfo* method)
{
	{
		Vector3_t414  L_0 = {0};
		Vector3__ctor_m2737(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_10 = L_0;
		MonoBehaviour__ctor_m2428(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldObjectFollower::Start()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t374_m2981_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t501_m2843_MethodInfo_var;
extern "C" void WorldObjectFollower_Start_m2401 (WorldObjectFollower_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t374_m2981_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484067);
		GameObject_GetComponent_TisRectTransform_t501_m2843_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483987);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t284 * V_0 = {0};
	Rect_t520  V_1 = {0};
	{
		GameObject_t284 * L_0 = GameObject_FindWithTag_m2982(NULL /*static, unused*/, (String_t*) &_stringLiteral838, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t284 * L_1 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t323 * L_2 = GameObject_get_transform_m2742(L_1, /*hidden argument*/NULL);
		GameObject_t284 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t323 * L_4 = GameObject_get_transform_m2742(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_m2846(L_2, L_4, 0, /*hidden argument*/NULL);
		GameObject_t284 * L_5 = V_0;
		NullCheck(L_5);
		Canvas_t374 * L_6 = GameObject_GetComponent_TisCanvas_t374_m2981(L_5, /*hidden argument*/GameObject_GetComponent_TisCanvas_t374_m2981_MethodInfo_var);
		__this->___worldCanvas_4 = L_6;
		Canvas_t374 * L_7 = (__this->___worldCanvas_4);
		NullCheck(L_7);
		Camera_t435 * L_8 = Canvas_get_worldCamera_m2983(L_7, /*hidden argument*/NULL);
		__this->___worldCamera_5 = L_8;
		Canvas_t374 * L_9 = (__this->___worldCanvas_4);
		NullCheck(L_9);
		Rect_t520  L_10 = Canvas_get_pixelRect_m2862(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = Rect_get_width_m2740((&V_1), /*hidden argument*/NULL);
		Canvas_t374 * L_12 = (__this->___worldCanvas_4);
		NullCheck(L_12);
		float L_13 = Canvas_get_scaleFactor_m2863(L_12, /*hidden argument*/NULL);
		__this->___canvasWidth_6 = ((float)((float)L_11/(float)L_13));
		float L_14 = Rect_get_height_m2741((&V_1), /*hidden argument*/NULL);
		Canvas_t374 * L_15 = (__this->___worldCanvas_4);
		NullCheck(L_15);
		float L_16 = Canvas_get_scaleFactor_m2863(L_15, /*hidden argument*/NULL);
		__this->___canvasHeight_7 = ((float)((float)L_14/(float)L_16));
		GameObject_t284 * L_17 = Component_get_gameObject_m2533(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_t501 * L_18 = GameObject_GetComponent_TisRectTransform_t501_m2843(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t501_m2843_MethodInfo_var);
		__this->___myRectTransform_3 = L_18;
		return;
	}
}
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m2402 (WorldObjectFollower_t502 * __this, const MethodInfo* method)
{
	{
		RectTransform_t501 * L_0 = (__this->___myRectTransform_3);
		bool L_1 = Object_op_Implicit_m2803(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		WorldObjectFollower_ResetPosition_m2404(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m2403 (WorldObjectFollower_t502 * __this, GameObject_t284 * ___go, Vector3_t414  ___offset, bool ___followeeMoves, const MethodInfo* method)
{
	{
		GameObject_t284 * L_0 = ___go;
		__this->___objectToFollow_2 = L_0;
		Vector3_t414  L_1 = ___offset;
		__this->___offset_10 = L_1;
		bool L_2 = ___followeeMoves;
		__this->___followeeMoves_8 = L_2;
		__this->___positionDirty_9 = 1;
		return;
	}
}
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m2404 (WorldObjectFollower_t502 * __this, const MethodInfo* method)
{
	Vector3_t414  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Camera_t435 * L_0 = (__this->___worldCamera_5);
		GameObject_t284 * L_1 = (__this->___objectToFollow_2);
		NullCheck(L_1);
		Transform_t323 * L_2 = GameObject_get_transform_m2742(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t414  L_3 = Transform_get_position_m2744(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t414  L_4 = Camera_WorldToViewportPoint_m2984(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___x_1);
		float L_6 = (__this->___canvasWidth_6);
		V_1 = ((float)((float)((float)((float)L_5-(float)(0.5f)))*(float)L_6));
		float L_7 = ((&V_0)->___y_2);
		float L_8 = (__this->___canvasHeight_7);
		V_2 = ((float)((float)((float)((float)L_7-(float)(0.5f)))*(float)L_8));
		RectTransform_t501 * L_9 = (__this->___myRectTransform_3);
		float L_10 = V_1;
		float L_11 = V_2;
		Vector3_t414  L_12 = {0};
		Vector3__ctor_m2737(&L_12, L_10, L_11, (0.0f), /*hidden argument*/NULL);
		Vector3_t414  L_13 = (__this->___offset_10);
		Vector3_t414  L_14 = Vector3_op_Addition_m2949(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m2906(L_9, L_14, /*hidden argument*/NULL);
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
extern "C" void EventHandlerFunction__ctor_m2405 (EventHandlerFunction_t503 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m2406 (EventHandlerFunction_t503 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandlerFunction_Invoke_m2406((EventHandlerFunction_t503 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t503(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m2407 (EventHandlerFunction_t503 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m2408 (EventHandlerFunction_t503 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void DataEventHandlerFunction__ctor_m2409 (DataEventHandlerFunction_t504 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m2410 (DataEventHandlerFunction_t504 * __this, CEvent_t91 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DataEventHandlerFunction_Invoke_m2410((DataEventHandlerFunction_t504 *)__this->___prev_9,___e, method);
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
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t504(Il2CppObject* delegate, CEvent_t91 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	CEvent_t91 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnionAssets.FLE.CEvent'."));
}
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m2411 (DataEventHandlerFunction_t504 * __this, CEvent_t91 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m2412 (DataEventHandlerFunction_t504 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void InitDelegate__ctor_m2413 (InitDelegate_t336 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m2414 (InitDelegate_t336 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		InitDelegate_Invoke_m2414((InitDelegate_t336 *)__this->___prev_9, method);
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
extern "C" Object_t * InitDelegate_BeginInvoke_m2415 (InitDelegate_t336 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m2416 (InitDelegate_t336 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void FacebookDelegate__ctor_m2417 (FacebookDelegate_t350 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m2418 (FacebookDelegate_t350 * __this, FBResult_t213 * ___result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FacebookDelegate_Invoke_m2418((FacebookDelegate_t350 *)__this->___prev_9,___result, method);
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
extern "C" Object_t * FacebookDelegate_BeginInvoke_m2419 (FacebookDelegate_t350 * __this, FBResult_t213 * ___result, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m2420 (FacebookDelegate_t350 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void HideUnityDelegate__ctor_m2421 (HideUnityDelegate_t337 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C" void HideUnityDelegate_Invoke_m2422 (HideUnityDelegate_t337 * __this, bool ___isUnityShown, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HideUnityDelegate_Invoke_m2422((HideUnityDelegate_t337 *)__this->___prev_9,___isUnityShown, method);
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
extern "C" Object_t * HideUnityDelegate_BeginInvoke_m2423 (HideUnityDelegate_t337 * __this, bool ___isUnityShown, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
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
extern "C" void HideUnityDelegate_EndInvoke_m2424 (HideUnityDelegate_t337 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
