#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandl.h"
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
// SoundController/SoundMuteChangedEventHandler
#include "AssemblyU2DCSharp_SoundController_SoundMuteChangedEventHandlMethodDeclarations.h"

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

// System.Void SoundController/SoundMuteChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SoundMuteChangedEventHandler__ctor_m3498 (SoundMuteChangedEventHandler_t643 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/SoundMuteChangedEventHandler::Invoke()
extern "C" void SoundMuteChangedEventHandler_Invoke_m3499 (SoundMuteChangedEventHandler_t643 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SoundMuteChangedEventHandler_Invoke_m3499((SoundMuteChangedEventHandler_t643 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SoundMuteChangedEventHandler_t643(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/SoundMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SoundMuteChangedEventHandler_BeginInvoke_m3500 (SoundMuteChangedEventHandler_t643 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/SoundMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SoundMuteChangedEventHandler_EndInvoke_m3501 (SoundMuteChangedEventHandler_t643 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void MusicMuteChangedEventHandler__ctor_m3502 (MusicMuteChangedEventHandler_t644 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SoundController/MusicMuteChangedEventHandler::Invoke()
extern "C" void MusicMuteChangedEventHandler_Invoke_m3503 (MusicMuteChangedEventHandler_t644 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MusicMuteChangedEventHandler_Invoke_m3503((MusicMuteChangedEventHandler_t644 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MusicMuteChangedEventHandler_t644(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult SoundController/MusicMuteChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MusicMuteChangedEventHandler_BeginInvoke_m3504 (MusicMuteChangedEventHandler_t644 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SoundController/MusicMuteChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MusicMuteChangedEventHandler_EndInvoke_m3505 (MusicMuteChangedEventHandler_t644 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
#ifndef _MSC_VER
#else
#endif
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorage.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// PersistentStorage
#include "AssemblyU2DCSharp_PersistentStorageMethodDeclarations.h"


// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3506 (SoundController_t645 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_SoundMuteChanged_m3507 (SoundController_t645 * __this, SoundMuteChangedEventHandler_t643 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t643 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t643 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t643 *)Castclass(L_2, SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern TypeInfo* SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_SoundMuteChanged_m3508 (SoundController_t645 * __this, SoundMuteChangedEventHandler_t643 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundMuteChangedEventHandler_t643 * L_0 = (__this->___SoundMuteChanged_5);
		SoundMuteChangedEventHandler_t643 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___SoundMuteChanged_5 = ((SoundMuteChangedEventHandler_t643 *)Castclass(L_2, SoundMuteChangedEventHandler_t643_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var;
extern "C" void SoundController_add_MusicMuteChanged_m3509 (SoundController_t645 * __this, MusicMuteChangedEventHandler_t644 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t644 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t644 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t644 *)Castclass(L_2, MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern TypeInfo* MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var;
extern "C" void SoundController_remove_MusicMuteChanged_m3510 (SoundController_t645 * __this, MusicMuteChangedEventHandler_t644 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	{
		MusicMuteChangedEventHandler_t644 * L_0 = (__this->___MusicMuteChanged_6);
		MusicMuteChangedEventHandler_t644 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MusicMuteChanged_6 = ((MusicMuteChangedEventHandler_t644 *)Castclass(L_2, MusicMuteChangedEventHandler_t644_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3511 (SoundController_t645 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsfxMutedU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3512 (SoundController_t645 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsfxMutedU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3513 (SoundController_t645 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmusicMutedU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3514 (SoundController_t645 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmusicMutedU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void SoundController::Awake()
extern TypeInfo* SoundController_t645_il2cpp_TypeInfo_var;
extern "C" void SoundController_Awake_m3515 (SoundController_t645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		((SoundController_t645_StaticFields*)SoundController_t645_il2cpp_TypeInfo_var->static_fields)->___instance_4 = __this;
		return;
	}
}
// System.Void SoundController::Start()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void SoundController_Start_m3516 (SoundController_t645 * __this, const MethodInfo* method)
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
		bool L_1 = PersistentStorage_GetBoolValue_m3812(L_0, (String_t*) &_stringLiteral1135, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3512(__this, L_1, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_2 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_2);
		bool L_3 = PersistentStorage_GetBoolValue_m3812(L_2, (String_t*) &_stringLiteral1136, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3514(__this, L_3, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t643 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		SoundMuteChangedEventHandler_t643 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0042:
	{
		MusicMuteChangedEventHandler_t644 * L_6 = (__this->___MusicMuteChanged_6);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		MusicMuteChangedEventHandler_t644 * L_7 = (__this->___MusicMuteChanged_6);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_7);
	}

IL_0058:
	{
		return;
	}
}
// System.Void SoundController::ToggleSoundsMuted()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleSoundsMuted_m3517 (SoundController_t645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_sfxMuted_m3511(__this, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3512(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_sfxMuted_m3511(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3811(L_1, (String_t*) &_stringLiteral1135, L_2, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t643 * L_3 = (__this->___SoundMuteChanged_5);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		SoundMuteChangedEventHandler_t643 * L_4 = (__this->___SoundMuteChanged_5);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::ToggleMusicMuted()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void SoundController_ToggleMusicMuted_m3518 (SoundController_t645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3513(__this, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3514(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_2 = SoundController_get_musicMuted_m3513(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3811(L_1, (String_t*) &_stringLiteral1136, L_2, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t644 * L_3 = (__this->___MusicMuteChanged_6);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		MusicMuteChangedEventHandler_t644 * L_4 = (__this->___MusicMuteChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_4);
	}

IL_003a:
	{
		return;
	}
}
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3519 (SoundController_t645 * __this, const MethodInfo* method)
{
	{
		bool L_0 = SoundController_get_musicMuted_m3513(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		SoundController_set_musicMuted_m3514(__this, 1, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t644 * L_1 = (__this->___MusicMuteChanged_6);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		MusicMuteChangedEventHandler_t644 * L_2 = (__this->___MusicMuteChanged_6);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_2);
	}

IL_0028:
	{
		bool L_3 = SoundController_get_sfxMuted_m3511(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0050;
		}
	}
	{
		SoundController_set_sfxMuted_m3512(__this, 1, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t643 * L_4 = (__this->___SoundMuteChanged_5);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		SoundMuteChangedEventHandler_t643 * L_5 = (__this->___SoundMuteChanged_5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_5);
	}

IL_0050:
	{
		return;
	}
}
// System.Void SoundController::UnsuppressSounds()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void SoundController_UnsuppressSounds_m3520 (SoundController_t645 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SoundController_get_musicMuted_m3513(__this, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_1);
		bool L_2 = PersistentStorage_GetBoolValue_m3812(L_1, (String_t*) &_stringLiteral1136, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0047;
		}
	}
	{
		PersistentStorage_t695 * L_3 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		bool L_4 = PersistentStorage_GetBoolValue_m3812(L_3, (String_t*) &_stringLiteral1136, 0, /*hidden argument*/NULL);
		SoundController_set_musicMuted_m3514(__this, L_4, /*hidden argument*/NULL);
		MusicMuteChangedEventHandler_t644 * L_5 = (__this->___MusicMuteChanged_6);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		MusicMuteChangedEventHandler_t644 * L_6 = (__this->___MusicMuteChanged_6);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/MusicMuteChangedEventHandler::Invoke() */, L_6);
	}

IL_0047:
	{
		bool L_7 = SoundController_get_sfxMuted_m3511(__this, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_8 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_8);
		bool L_9 = PersistentStorage_GetBoolValue_m3812(L_8, (String_t*) &_stringLiteral1135, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_008e;
		}
	}
	{
		PersistentStorage_t695 * L_10 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_10);
		bool L_11 = PersistentStorage_GetBoolValue_m3812(L_10, (String_t*) &_stringLiteral1135, 0, /*hidden argument*/NULL);
		SoundController_set_sfxMuted_m3512(__this, L_11, /*hidden argument*/NULL);
		SoundMuteChangedEventHandler_t643 * L_12 = (__this->___SoundMuteChanged_5);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		SoundMuteChangedEventHandler_t643 * L_13 = (__this->___SoundMuteChanged_5);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(12 /* System.Void SoundController/SoundMuteChangedEventHandler::Invoke() */, L_13);
	}

IL_008e:
	{
		return;
	}
}
// TailController
#include "AssemblyU2DCSharp_TailController.h"
#ifndef _MSC_VER
#else
#endif
// TailController
#include "AssemblyU2DCSharp_TailControllerMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"


// System.Void TailController::.ctor()
extern "C" void TailController__ctor_m3521 (TailController_t647 * __this, const MethodInfo* method)
{
	{
		__this->___cycleTime_4 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TailController::Start()
extern TypeInfo* MaterialU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" void TailController_Start_m3522 (TailController_t647 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MaterialU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___currentMaterial_6 = ((MaterialU5BU5D_t646*)SZArrayNew(MaterialU5BU5D_t646_il2cpp_TypeInfo_var, 1));
		MaterialU5BU5D_t646* L_0 = (__this->___tailMaterials_3);
		NullCheck(L_0);
		__this->___numFrames_5 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2))-(int32_t)1));
		return;
	}
}
// System.Void TailController::Update()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void TailController_Update_m3523 (TailController_t647 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___cycleTime_4);
		V_1 = (fmodf(L_1, L_2));
		float L_3 = V_1;
		int32_t L_4 = (__this->___numFrames_5);
		float L_5 = (__this->___cycleTime_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_6 = floorf(((float)((float)((float)((float)L_3*(float)(((float)L_4))))/(float)L_5)));
		V_2 = (((int32_t)L_6));
		int32_t L_7 = V_2;
		MaterialU5BU5D_t646* L_8 = (__this->___tailMaterials_3);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		MaterialU5BU5D_t646* L_9 = (__this->___tailMaterials_3);
		NullCheck(L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)2*(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))))-(int32_t)1))-(int32_t)L_10));
	}

IL_0043:
	{
		MaterialU5BU5D_t646* L_11 = (__this->___currentMaterial_6);
		MaterialU5BU5D_t646* L_12 = (__this->___tailMaterials_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, (*(Material_t513 **)(Material_t513 **)SZArrayLdElema(L_12, L_14)));
		*((Material_t513 **)(Material_t513 **)SZArrayLdElema(L_11, 0)) = (Material_t513 *)(*(Material_t513 **)(Material_t513 **)SZArrayLdElema(L_12, L_14));
		Renderer_t546 * L_15 = (__this->___tailRenderer_2);
		MaterialU5BU5D_t646* L_16 = (__this->___currentMaterial_6);
		NullCheck(L_15);
		Renderer_set_materials_m4429(L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeState.h"
#ifndef _MSC_VER
#else
#endif
// TimeController/TimeState
#include "AssemblyU2DCSharp_TimeController_TimeStateMethodDeclarations.h"



// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandle.h"
#ifndef _MSC_VER
#else
#endif
// TimeController/TimeStateChangedEventHandler
#include "AssemblyU2DCSharp_TimeController_TimeStateChangedEventHandleMethodDeclarations.h"



// System.Void TimeController/TimeStateChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TimeStateChangedEventHandler__ctor_m3524 (TimeStateChangedEventHandler_t649 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void TimeController/TimeStateChangedEventHandler::Invoke()
extern "C" void TimeStateChangedEventHandler_Invoke_m3525 (TimeStateChangedEventHandler_t649 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TimeStateChangedEventHandler_Invoke_m3525((TimeStateChangedEventHandler_t649 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_TimeStateChangedEventHandler_t649(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult TimeController/TimeStateChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TimeStateChangedEventHandler_BeginInvoke_m3526 (TimeStateChangedEventHandler_t649 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void TimeController/TimeStateChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TimeStateChangedEventHandler_EndInvoke_m3527 (TimeStateChangedEventHandler_t649 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void TimeController__ctor_m3528 (TimeController_t650 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeController::add_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern TypeInfo* TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var;
extern "C" void TimeController_add_TimeStateChanged_m3529 (TimeController_t650 * __this, TimeStateChangedEventHandler_t649 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeStateChangedEventHandler_t649 * L_0 = (__this->___TimeStateChanged_3);
		TimeStateChangedEventHandler_t649 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TimeStateChanged_3 = ((TimeStateChangedEventHandler_t649 *)Castclass(L_2, TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void TimeController::remove_TimeStateChanged(TimeController/TimeStateChangedEventHandler)
extern TypeInfo* TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var;
extern "C" void TimeController_remove_TimeStateChanged_m3530 (TimeController_t650 * __this, TimeStateChangedEventHandler_t649 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeStateChangedEventHandler_t649 * L_0 = (__this->___TimeStateChanged_3);
		TimeStateChangedEventHandler_t649 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TimeStateChanged_3 = ((TimeStateChangedEventHandler_t649 *)Castclass(L_2, TimeStateChangedEventHandler_t649_il2cpp_TypeInfo_var));
		return;
	}
}
// TimeController/TimeState TimeController::get_timeState()
extern "C" int32_t TimeController_get_timeState_m3531 (TimeController_t650 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeStateU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void TimeController::set_timeState(TimeController/TimeState)
extern "C" void TimeController_set_timeState_m3532 (TimeController_t650 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeStateU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TimeController::Awake()
extern TypeInfo* TimeController_t650_il2cpp_TypeInfo_var;
extern "C" void TimeController_Awake_m3533 (TimeController_t650 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TimeController_t650_StaticFields*)TimeController_t650_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void TimeController::SetTimeState(TimeController/TimeState)
extern "C" void TimeController_SetTimeState_m3534 (TimeController_t650 * __this, int32_t ___ts, const MethodInfo* method)
{
	{
		int32_t L_0 = ___ts;
		int32_t L_1 = TimeController_get_timeState_m3531(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_2 = ___ts;
		TimeController_set_timeState_m3532(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___ts;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		Time_set_timeScale_m4177(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_0028:
	{
		Time_set_timeScale_m4177(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
	}

IL_0032:
	{
		TimeStateChangedEventHandler_t649 * L_4 = (__this->___TimeStateChanged_3);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		TimeStateChangedEventHandler_t649 * L_5 = (__this->___TimeStateChanged_3);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(12 /* System.Void TimeController/TimeStateChangedEventHandler::Invoke() */, L_5);
	}

IL_0048:
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

// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void TipConfig::.ctor(System.String,System.String)
extern "C" void TipConfig__ctor_m3535 (TipConfig_t623 * __this, String_t* ___tipID, String_t* ___tipText, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		__this->___previousTipID_2 = (String_t*)NULL;
		return;
	}
}
// System.Void TipConfig::.ctor(System.String,System.String,System.String)
extern "C" void TipConfig__ctor_m3536 (TipConfig_t623 * __this, String_t* ___tipID, String_t* ___tipText, String_t* ___previousTipID, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tipID;
		__this->___tipID_0 = L_0;
		String_t* L_1 = ___tipText;
		__this->___tipText_1 = L_1;
		String_t* L_2 = ___previousTipID;
		__this->___previousTipID_2 = L_2;
		return;
	}
}
// TipController/<PlayTipWithPause>c__Iterator18
#include "AssemblyU2DCSharp_TipController_U3CPlayTipWithPauseU3Ec__Ite.h"
#ifndef _MSC_VER
#else
#endif
// TipController/<PlayTipWithPause>c__Iterator18
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


// System.Void TipController/<PlayTipWithPause>c__Iterator18::.ctor()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator18__ctor_m3537 (U3CPlayTipWithPauseU3Ec__Iterator18_t652 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator18::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator18_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3538 (U3CPlayTipWithPauseU3Ec__Iterator18_t652 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object TipController/<PlayTipWithPause>c__Iterator18::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayTipWithPauseU3Ec__Iterator18_System_Collections_IEnumerator_get_Current_m3539 (U3CPlayTipWithPauseU3Ec__Iterator18_t652 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean TipController/<PlayTipWithPause>c__Iterator18::MoveNext()
extern TypeInfo* WaitForSeconds_t810_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayTipWithPauseU3Ec__Iterator18_MoveNext_m3540 (U3CPlayTipWithPauseU3Ec__Iterator18_t652 * __this, const MethodInfo* method)
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
		WaitForSeconds_t810 * L_3 = (WaitForSeconds_t810 *)il2cpp_codegen_object_new (WaitForSeconds_t810_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4355(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_3 = L_3;
		__this->___U24PC_2 = 1;
		goto IL_0065;
	}

IL_003e:
	{
		TipController_t651 * L_4 = (__this->___U3CU3Ef__this_6);
		TipConfig_t623 * L_5 = (__this->___tipConfig_1);
		NullCheck(L_4);
		TipController_MaybeShowTip_m3556(L_4, L_5, /*hidden argument*/NULL);
		TipController_t651 * L_6 = (__this->___U3CU3Ef__this_6);
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
// System.Void TipController/<PlayTipWithPause>c__Iterator18::Dispose()
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator18_Dispose_m3541 (U3CPlayTipWithPauseU3Ec__Iterator18_t652 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void TipController/<PlayTipWithPause>c__Iterator18::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CPlayTipWithPauseU3Ec__Iterator18_Reset_m3542 (U3CPlayTipWithPauseU3Ec__Iterator18_t652 * __this, const MethodInfo* method)
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

// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialog.h"
// DialogController
#include "AssemblyU2DCSharp_DialogController.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// DialogController
#include "AssemblyU2DCSharp_DialogControllerMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// TipDialog
#include "AssemblyU2DCSharp_TipDialogMethodDeclarations.h"
struct GameObject_t352;
struct TipDialog_t600;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m4245_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m4245(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
// !!0 UnityEngine.GameObject::GetComponent<TipDialog>()
#define GameObject_GetComponent_TisTipDialog_t600_m4503(__this, method) (( TipDialog_t600 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void TipController::.ctor()
extern "C" void TipController__ctor_m3543 (TipController_t651 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::Awake()
extern TypeInfo* TipController_t651_il2cpp_TypeInfo_var;
extern "C" void TipController_Awake_m3544 (TipController_t651 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TipController_t651_StaticFields*)TipController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		__this->___registeredForEvents_2 = 0;
		return;
	}
}
// System.Void TipController::Start()
extern "C" void TipController_Start_m3545 (TipController_t651 * __this, const MethodInfo* method)
{
	{
		TipController_RegisterForEvents_m3547(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::OnDestroy()
extern "C" void TipController_OnDestroy_m3546 (TipController_t651 * __this, const MethodInfo* method)
{
	{
		TipController_UnregisterForEvents_m3548(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3549_MethodInfo_var;
extern "C" void TipController_RegisterForEvents_m3547 (TipController_t651 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		TipController_OnPhaseChanged_m3549_MethodInfo_var = il2cpp_codegen_method_info_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_1 = { (void*)TipController_OnPhaseChanged_m3549_MethodInfo_var };
		GamePhaseChangedEventHandler_t663 * L_2 = (GamePhaseChangedEventHandler_t663 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m3615(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GamePhaseState_add_GamePhaseChanged_m3628(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_2 = 1;
		return;
	}
}
// System.Void TipController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern const MethodInfo* TipController_OnPhaseChanged_m3549_MethodInfo_var;
extern "C" void TipController_UnregisterForEvents_m3548 (TipController_t651 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		TipController_OnPhaseChanged_m3549_MethodInfo_var = il2cpp_codegen_method_info_from_index(586);
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
		IntPtr_t L_2 = { (void*)TipController_OnPhaseChanged_m3549_MethodInfo_var };
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
// System.Void TipController::OnPhaseChanged()
extern "C" void TipController_OnPhaseChanged_m3549 (TipController_t651 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t664 * L_0 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3645(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		TipController_EnqueueTipForLevel_m3550(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		GamePhaseState_t664 * L_2 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m3630(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		GamePhaseState_t664 * L_4 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GamePhaseState_get_gamePhase_m3630(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_003b;
		}
	}
	{
		TipController_ClearEnqueuedTips_m3554(__this, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TipController::EnqueueTipForLevel()
extern "C" void TipController_EnqueueTipForLevel_m3550 (TipController_t651 * __this, const MethodInfo* method)
{
	LevelDescription_t673 * V_0 = {0};
	{
		LevelConfig_t678 * L_0 = LevelConfig_get_instance_m3655(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t673 * L_1 = LevelConfig_GetCurrentLevelDescription_m3664(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t673 * L_2 = V_0;
		NullCheck(L_2);
		TipConfig_t623 * L_3 = (L_2->___tipConfig_3);
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
		LevelDescription_t673 * L_4 = V_0;
		NullCheck(L_4);
		TipConfig_t623 * L_5 = (L_4->___tipConfig_3);
		LevelDescription_t673 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = (L_6->___tipPause_4);
		TipController_EnqueueTip_m3551(__this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::EnqueueTip(TipConfig,System.Single)
extern "C" void TipController_EnqueueTip_m3551 (TipController_t651 * __this, TipConfig_t623 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	{
		TipConfig_t623 * L_0 = ___tipConfig;
		float L_1 = ___tipPause;
		Object_t * L_2 = TipController_PlayTipWithPause_m3553(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = L_2;
		Object_t * L_3 = (__this->___enqueuedTip_4);
		MonoBehaviour_StartCoroutine_m3935(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TipController::EnqueueAnytimeTip(System.String)
extern TypeInfo* TipConfig_t623_il2cpp_TypeInfo_var;
extern "C" void TipController_EnqueueAnytimeTip_m3552 (TipController_t651 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TipConfig_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	TipConfig_t623 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		TipConfig_t623 * L_1 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3535(L_1, (String_t*)NULL, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TipConfig_t623 * L_2 = V_0;
		TipController_EnqueueTip_m3551(__this, L_2, (0.001f), /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator TipController::PlayTipWithPause(TipConfig,System.Single)
extern TypeInfo* U3CPlayTipWithPauseU3Ec__Iterator18_t652_il2cpp_TypeInfo_var;
extern "C" Object_t * TipController_PlayTipWithPause_m3553 (TipController_t651 * __this, TipConfig_t623 * ___tipConfig, float ___tipPause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayTipWithPauseU3Ec__Iterator18_t652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayTipWithPauseU3Ec__Iterator18_t652 * V_0 = {0};
	{
		U3CPlayTipWithPauseU3Ec__Iterator18_t652 * L_0 = (U3CPlayTipWithPauseU3Ec__Iterator18_t652 *)il2cpp_codegen_object_new (U3CPlayTipWithPauseU3Ec__Iterator18_t652_il2cpp_TypeInfo_var);
		U3CPlayTipWithPauseU3Ec__Iterator18__ctor_m3537(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayTipWithPauseU3Ec__Iterator18_t652 * L_1 = V_0;
		float L_2 = ___tipPause;
		NullCheck(L_1);
		L_1->___tipPause_0 = L_2;
		U3CPlayTipWithPauseU3Ec__Iterator18_t652 * L_3 = V_0;
		TipConfig_t623 * L_4 = ___tipConfig;
		NullCheck(L_3);
		L_3->___tipConfig_1 = L_4;
		U3CPlayTipWithPauseU3Ec__Iterator18_t652 * L_5 = V_0;
		float L_6 = ___tipPause;
		NullCheck(L_5);
		L_5->___U3CU24U3EtipPause_4 = L_6;
		U3CPlayTipWithPauseU3Ec__Iterator18_t652 * L_7 = V_0;
		TipConfig_t623 * L_8 = ___tipConfig;
		NullCheck(L_7);
		L_7->___U3CU24U3EtipConfig_5 = L_8;
		U3CPlayTipWithPauseU3Ec__Iterator18_t652 * L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3Ef__this_6 = __this;
		U3CPlayTipWithPauseU3Ec__Iterator18_t652 * L_10 = V_0;
		return L_10;
	}
}
// System.Void TipController::ClearEnqueuedTips()
extern "C" void TipController_ClearEnqueuedTips_m3554 (TipController_t651 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m4386(__this, L_1, /*hidden argument*/NULL);
		__this->___enqueuedTip_4 = (Object_t *)NULL;
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean TipController::DidShowTip(System.String)
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TipController_DidShowTip_m3555 (TipController_t651 * __this, String_t* ___tipID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___tipID;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_2 = ___tipID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1137, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = PersistentStorage_GetBoolValue_m3812(L_1, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean TipController::MaybeShowTip(TipConfig)
extern TypeInfo* DialogController_t610_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTipDialog_t600_m4503_MethodInfo_var;
extern "C" bool TipController_MaybeShowTip_m3556 (TipController_t651 * __this, TipConfig_t623 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GameObject_GetComponent_TisTipDialog_t600_m4503_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484230);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	TipDialog_t600 * V_1 = {0};
	{
		TipConfig_t623 * L_0 = ___tipConfig;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___tipID_0);
		bool L_2 = TipController_DidShowTip_m3555(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		TipConfig_t623 * L_3 = ___tipConfig;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___previousTipID_2);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		TipConfig_t623 * L_5 = ___tipConfig;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___previousTipID_2);
		bool L_7 = TipController_DidShowTip_m3555(__this, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		DialogController_t610 * L_8 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_8);
		bool L_9 = DialogController_IsDialogShowing_m3278(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		GameObject_t352 * L_10 = (__this->___tipDialogPrototype_3);
		Vector3_t523  L_11 = {0};
		Vector3__ctor_m4250(&L_11, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t813  L_12 = Quaternion_get_identity_m4366(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t728 * L_13 = Object_Instantiate_m4367(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_13, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_14 = V_0;
		NullCheck(L_14);
		Transform_t406 * L_15 = GameObject_get_transform_m4255(L_14, /*hidden argument*/NULL);
		Vector3_t523  L_16 = {0};
		Vector3__ctor_m4250(&L_16, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m4261(L_15, L_16, /*hidden argument*/NULL);
		GameObject_t352 * L_17 = V_0;
		NullCheck(L_17);
		TipDialog_t600 * L_18 = GameObject_GetComponent_TisTipDialog_t600_m4503(L_17, /*hidden argument*/GameObject_GetComponent_TisTipDialog_t600_m4503_MethodInfo_var);
		V_1 = L_18;
		TipDialog_t600 * L_19 = V_1;
		TipConfig_t623 * L_20 = ___tipConfig;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___tipText_1);
		NullCheck(L_19);
		TipDialog_ConfigureDialog_m3223(L_19, L_21, /*hidden argument*/NULL);
		DialogController_t610 * L_22 = ((DialogController_t610_StaticFields*)DialogController_t610_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t352 * L_23 = V_0;
		NullCheck(L_22);
		DialogController_ShowDialog_m3276(L_22, L_23, /*hidden argument*/NULL);
		TipConfig_t623 * L_24 = ___tipConfig;
		NullCheck(L_24);
		String_t* L_25 = (L_24->___tipID_0);
		if (!L_25)
		{
			goto IL_00cf;
		}
	}
	{
		PersistentStorage_t695 * L_26 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		TipConfig_t623 * L_27 = ___tipConfig;
		NullCheck(L_27);
		String_t* L_28 = (L_27->___tipID_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1137, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		PersistentStorage_SetBoolValue_m3811(L_26, L_29, 1, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		return 1;
	}
}
// BoostDesc
#include "AssemblyU2DCSharp_BoostDesc.h"
#ifndef _MSC_VER
#else
#endif
// BoostDesc
#include "AssemblyU2DCSharp_BoostDescMethodDeclarations.h"

// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
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


// System.Void BoostDesc::.ctor(System.String,System.String,System.String,System.Single,TipConfig)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t521_m4440_MethodInfo_var;
extern "C" void BoostDesc__ctor_m3557 (BoostDesc_t653 * __this, String_t* ___boostName, String_t* ___buttonImageName, String_t* ___introScreenImageName, float ___effectiveTime, TipConfig_t623 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t521_m4440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___buttonImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1138, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t521 * L_3 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___buttonSprite_0 = L_3;
		String_t* L_4 = ___introScreenImageName;
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1139, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t521 * L_7 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___introScreenSprite_1 = L_7;
		float L_8 = ___effectiveTime;
		__this->___effectiveTime_2 = L_8;
		String_t* L_9 = ___boostName;
		__this->___boostName_3 = L_9;
		TipConfig_t623 * L_10 = ___tipConfig;
		__this->___tipConfig_4 = L_10;
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
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDesc.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfig.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfigMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"


// System.Void ExplicitMouseDesc::.ctor(System.Single,System.Boolean,MouseSinkController/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc__ctor_m3558 (ExplicitMouseDesc_t654 * __this, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
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
		ExplicitMouseDesc_AddWiggle_m3567(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MouseWiggleType ExplicitMouseDesc::get_wiggleType()
extern "C" int32_t ExplicitMouseDesc_get_wiggleType_m3559 (ExplicitMouseDesc_t654 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleTypeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleType(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_set_wiggleType_m3560 (ExplicitMouseDesc_t654 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleTypeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Single ExplicitMouseDesc::get_wiggleMagnitude()
extern "C" float ExplicitMouseDesc_get_wiggleMagnitude_m3561 (ExplicitMouseDesc_t654 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CwiggleMagnitudeU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleMagnitude(System.Single)
extern "C" void ExplicitMouseDesc_set_wiggleMagnitude_m3562 (ExplicitMouseDesc_t654 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CwiggleMagnitudeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 ExplicitMouseDesc::get_wiggleCycles()
extern "C" int32_t ExplicitMouseDesc_get_wiggleCycles_m3563 (ExplicitMouseDesc_t654 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleCyclesU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleCycles(System.Int32)
extern "C" void ExplicitMouseDesc_set_wiggleCycles_m3564 (ExplicitMouseDesc_t654 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleCyclesU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean ExplicitMouseDesc::get_wiggleClockwise()
extern "C" bool ExplicitMouseDesc_get_wiggleClockwise_m3565 (ExplicitMouseDesc_t654 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CwiggleClockwiseU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleClockwise(System.Boolean)
extern "C" void ExplicitMouseDesc_set_wiggleClockwise_m3566 (ExplicitMouseDesc_t654 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CwiggleClockwiseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void ExplicitMouseDesc::AddWiggle(MouseConfig/MouseWiggleType)
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern "C" void ExplicitMouseDesc_AddWiggle_m3567 (ExplicitMouseDesc_t654 * __this, int32_t ___wt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	MouseWiggleDesc_t656 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		ExplicitMouseDesc_set_wiggleType_m3560(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t544 * L_1 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		int32_t L_2 = ___wt;
		NullCheck(L_1);
		MouseWiggleDesc_t656 * L_3 = MouseConfig_GetWiggleDesc_m2924(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseWiggleDesc_t656 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		MouseWiggleDesc_t656 * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = (L_5->___minMagnitude_1);
		MouseWiggleDesc_t656 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = (L_7->___maxMagnitude_2);
		float L_9 = Random_Range_m4397(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleMagnitude_m3562(__this, L_9, /*hidden argument*/NULL);
		MouseWiggleDesc_t656 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___minCycles_3);
		MouseWiggleDesc_t656 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___maxCycles_4);
		int32_t L_14 = Random_Range_m3981(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleCycles_m3564(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = Random_Range_m3981(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleClockwise_m3566(__this, ((((int32_t)((((int32_t)L_15) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// MouseTypeDesc
#include "AssemblyU2DCSharp_MouseTypeDesc.h"
#ifndef _MSC_VER
#else
#endif
// MouseTypeDesc
#include "AssemblyU2DCSharp_MouseTypeDescMethodDeclarations.h"

struct Resources_t818;
struct Material_t513;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
#define Resources_Load_TisMaterial_t513_m4507(__this /* static, unused */, p0, method) (( Material_t513 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m4441_gshared)(__this /* static, unused */, p0, method)


// System.Void MouseTypeDesc::.ctor(System.String,System.String,System.Single,System.Single)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t521_m4440_MethodInfo_var;
extern const MethodInfo* Resources_Load_TisMaterial_t513_m4507_MethodInfo_var;
extern "C" void MouseTypeDesc__ctor_m3568 (MouseTypeDesc_t655 * __this, String_t* ___oldImageName, String_t* ___newImageName, float ___speed, float ___scale, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t521_m4440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		Resources_Load_TisMaterial_t513_m4507_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484235);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___newImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1140, L_0, (String_t*) &_stringLiteral1141, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t521 * L_3 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___deadMouseSprite_0 = L_3;
		String_t* L_4 = ___newImageName;
		String_t* L_5 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1140, L_4, (String_t*) &_stringLiteral1142, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t521 * L_7 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___exitingMouseSprite_1 = L_7;
		String_t* L_8 = ___newImageName;
		String_t* L_9 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1143, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = V_0;
		Material_t513 * L_11 = Resources_Load_TisMaterial_t513_m4507(NULL /*static, unused*/, L_10, /*hidden argument*/Resources_Load_TisMaterial_t513_m4507_MethodInfo_var);
		__this->___mouseMaterial_3 = L_11;
		String_t* L_12 = ___newImageName;
		String_t* L_13 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1144, L_12, (String_t*) &_stringLiteral1145, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		Sprite_t521 * L_15 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_14, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
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
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDescMethodDeclarations.h"



// System.Void MouseWiggleDesc::.ctor(System.String,System.Single,System.Single,System.Int32,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t521_m4440_MethodInfo_var;
extern "C" void MouseWiggleDesc__ctor_m3569 (MouseWiggleDesc_t656 * __this, String_t* ___introScreenImageName, float ___minMagnitude, float ___maxMagnitude, int32_t ___minCycles, int32_t ___maxCycles, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Resources_Load_TisSprite_t521_m4440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___introScreenImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1146, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t521 * L_3 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
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
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDesc.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusItemDesc
#include "AssemblyU2DCSharp_RealAngusItemDescMethodDeclarations.h"



// System.Void RealAngusItemDesc::.ctor(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t521_m4440_MethodInfo_var;
extern "C" void RealAngusItemDesc__ctor_m3570 (RealAngusItemDesc_t571 * __this, String_t* ___pictureName, String_t* ___text, String_t* ___tag, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		Resources_Load_TisSprite_t521_m4440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___pictureName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1147, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t521 * L_3 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		RealAngusItemDesc_set_pictureSprite_m3572(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___text;
		RealAngusItemDesc_set_text_m3574(__this, L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___tag;
		RealAngusItemDesc_set_tag_m3576(__this, L_5, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_6 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_7 = RealAngusItemDesc_UnlockedTag_m3582(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8 = PersistentStorage_GetBoolValue_m3812(L_6, L_7, 0, /*hidden argument*/NULL);
		RealAngusItemDesc_set_unlocked_m3578(__this, L_8, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_9 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_10 = RealAngusItemDesc_ViewedTag_m3581(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_11 = PersistentStorage_GetBoolValue_m3812(L_9, L_10, 0, /*hidden argument*/NULL);
		RealAngusItemDesc_set_viewed_m3580(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Sprite RealAngusItemDesc::get_pictureSprite()
extern "C" Sprite_t521 * RealAngusItemDesc_get_pictureSprite_m3571 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	{
		Sprite_t521 * L_0 = (__this->___U3CpictureSpriteU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_pictureSprite(UnityEngine.Sprite)
extern "C" void RealAngusItemDesc_set_pictureSprite_m3572 (RealAngusItemDesc_t571 * __this, Sprite_t521 * ___value, const MethodInfo* method)
{
	{
		Sprite_t521 * L_0 = ___value;
		__this->___U3CpictureSpriteU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String RealAngusItemDesc::get_text()
extern "C" String_t* RealAngusItemDesc_get_text_m3573 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CtextU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_text(System.String)
extern "C" void RealAngusItemDesc_set_text_m3574 (RealAngusItemDesc_t571 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CtextU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String RealAngusItemDesc::get_tag()
extern "C" String_t* RealAngusItemDesc_get_tag_m3575 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CtagU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_tag(System.String)
extern "C" void RealAngusItemDesc_set_tag_m3576 (RealAngusItemDesc_t571 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CtagU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean RealAngusItemDesc::get_unlocked()
extern "C" bool RealAngusItemDesc_get_unlocked_m3577 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CunlockedU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_unlocked(System.Boolean)
extern "C" void RealAngusItemDesc_set_unlocked_m3578 (RealAngusItemDesc_t571 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CunlockedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean RealAngusItemDesc::get_viewed()
extern "C" bool RealAngusItemDesc_get_viewed_m3579 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CviewedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void RealAngusItemDesc::set_viewed(System.Boolean)
extern "C" void RealAngusItemDesc_set_viewed_m3580 (RealAngusItemDesc_t571 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CviewedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String RealAngusItemDesc::ViewedTag()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RealAngusItemDesc_ViewedTag_m3581 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = RealAngusItemDesc_get_tag_m3575(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1148, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String RealAngusItemDesc::UnlockedTag()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RealAngusItemDesc_UnlockedTag_m3582 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = RealAngusItemDesc_get_tag_m3575(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1149, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void RealAngusItemDesc::Unlock()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void RealAngusItemDesc_Unlock_m3583 (RealAngusItemDesc_t571 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusItemDesc_set_unlocked_m3578(__this, 1, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_0 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_1 = RealAngusItemDesc_UnlockedTag_m3582(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PersistentStorage_SetBoolValue_m3811(L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusItemDesc::SetViewed(System.Boolean)
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void RealAngusItemDesc_SetViewed_m3584 (RealAngusItemDesc_t571 * __this, bool ___viewed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___viewed;
		RealAngusItemDesc_set_viewed_m3580(__this, L_0, /*hidden argument*/NULL);
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		String_t* L_2 = RealAngusItemDesc_ViewedTag_m3581(__this, /*hidden argument*/NULL);
		bool L_3 = ___viewed;
		NullCheck(L_1);
		PersistentStorage_SetBoolValue_m3811(L_1, L_2, L_3, /*hidden argument*/NULL);
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

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"


// System.Void CrossSceneState::.ctor()
extern "C" void CrossSceneState__ctor_m3585 (CrossSceneState_t657 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// CrossSceneState CrossSceneState::get_instance()
extern TypeInfo* CrossSceneState_t657_il2cpp_TypeInfo_var;
extern "C" CrossSceneState_t657 * CrossSceneState_get_instance_m3586 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t657 * L_0 = ((CrossSceneState_t657_StaticFields*)CrossSceneState_t657_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void CrossSceneState::set_instance(CrossSceneState)
extern TypeInfo* CrossSceneState_t657_il2cpp_TypeInfo_var;
extern "C" void CrossSceneState_set_instance_m3587 (Object_t * __this /* static, unused */, CrossSceneState_t657 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(571);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t657 * L_0 = ___value;
		((CrossSceneState_t657_StaticFields*)CrossSceneState_t657_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void CrossSceneState::Awake()
extern "C" void CrossSceneState_Awake_m3588 (CrossSceneState_t657 * __this, const MethodInfo* method)
{
	{
		CrossSceneState_set_instance_m3587(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___didWelcome_2 = 0;
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
extern "C" void DebugConfig__ctor_m3589 (DebugConfig_t658 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// DebugConfig DebugConfig::get_instance()
extern TypeInfo* DebugConfig_t658_il2cpp_TypeInfo_var;
extern "C" DebugConfig_t658 * DebugConfig_get_instance_m3590 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t658 * L_0 = ((DebugConfig_t658_StaticFields*)DebugConfig_t658_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void DebugConfig::set_instance(DebugConfig)
extern TypeInfo* DebugConfig_t658_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_set_instance_m3591 (Object_t * __this /* static, unused */, DebugConfig_t658 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(572);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t658 * L_0 = ___value;
		((DebugConfig_t658_StaticFields*)DebugConfig_t658_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void DebugConfig::Awake()
extern "C" void DebugConfig_Awake_m3592 (DebugConfig_t658 * __this, const MethodInfo* method)
{
	{
		__this->___useDebugValues_5 = 0;
		DebugConfig_set_instance_m3591(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___debugFlags_10 = 0;
		return;
	}
}
// System.Void DebugConfig::Start()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_Start_m3593 (DebugConfig_t658 * __this, const MethodInfo* method)
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
		int32_t L_1 = PersistentStorage_GetIntValue_m3810(L_0, (String_t*) &_stringLiteral1150, 0, /*hidden argument*/NULL);
		__this->___debugFlags_10 = L_1;
		return;
	}
}
// System.Boolean DebugConfig::IsDebugFlagSet(System.Int32)
extern "C" bool DebugConfig_IsDebugFlagSet_m3594 (DebugConfig_t658 * __this, int32_t ___debugFlag, const MethodInfo* method)
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
		int32_t L_3 = (__this->___debugFlags_10);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)))))&(int32_t)L_3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void DebugConfig::SetDebugFlags(System.Int32)
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_SetDebugFlags_m3595 (DebugConfig_t658 * __this, int32_t ___debugFlags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___debugFlags;
		__this->___debugFlags_10 = L_0;
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_2 = ___debugFlags;
		NullCheck(L_1);
		PersistentStorage_SetIntValue_m3809(L_1, (String_t*) &_stringLiteral1150, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 DebugConfig::GetDebugFlags()
extern "C" int32_t DebugConfig_GetDebugFlags_m3596 (DebugConfig_t658 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___debugFlags_10);
		return L_0;
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
extern "C" void GameLevelChangedEventHandler__ctor_m3597 (GameLevelChangedEventHandler_t659 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GameLevelState/GameLevelChangedEventHandler::Invoke()
extern "C" void GameLevelChangedEventHandler_Invoke_m3598 (GameLevelChangedEventHandler_t659 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameLevelChangedEventHandler_Invoke_m3598((GameLevelChangedEventHandler_t659 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameLevelChangedEventHandler_t659(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GameLevelState/GameLevelChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameLevelChangedEventHandler_BeginInvoke_m3599 (GameLevelChangedEventHandler_t659 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GameLevelState/GameLevelChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameLevelChangedEventHandler_EndInvoke_m3600 (GameLevelChangedEventHandler_t659 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
#ifndef _MSC_VER
#else
#endif
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"



// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m3601 (GameLevelState_t660 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_add_GameLevelChanged_m3602 (GameLevelState_t660 * __this, GameLevelChangedEventHandler_t659 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t659 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t659 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t659 *)Castclass(L_2, GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_remove_GameLevelChanged_m3603 (GameLevelState_t660 * __this, GameLevelChangedEventHandler_t659 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t659 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t659 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t659 *)Castclass(L_2, GameLevelChangedEventHandler_t659_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m3604 (GameLevelState_t660 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameLevelU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m3605 (GameLevelState_t660 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameLevelU3Ek__BackingField_3 = L_0;
		return;
	}
}
// GameLevelState GameLevelState::get_instance()
extern TypeInfo* GameLevelState_t660_il2cpp_TypeInfo_var;
extern "C" GameLevelState_t660 * GameLevelState_get_instance_m3606 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t660 * L_0 = ((GameLevelState_t660_StaticFields*)GameLevelState_t660_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameLevelState::set_instance(GameLevelState)
extern TypeInfo* GameLevelState_t660_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_set_instance_m3607 (Object_t * __this /* static, unused */, GameLevelState_t660 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(573);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t660 * L_0 = ___value;
		((GameLevelState_t660_StaticFields*)GameLevelState_t660_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m3608 (GameLevelState_t660 * __this, const MethodInfo* method)
{
	{
		GameLevelState_set_instance_m3607(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m3609 (GameLevelState_t660 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m3610 (GameLevelState_t660 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___gameLevel;
		GameLevelState_set_gameLevel_m3605(__this, L_0, /*hidden argument*/NULL);
		GameLevelChangedEventHandler_t659 * L_1 = (__this->___GameLevelChanged_2);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameLevelChangedEventHandler_t659 * L_2 = (__this->___GameLevelChanged_2);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(12 /* System.Void GameLevelState/GameLevelChangedEventHandler::Invoke() */, L_2);
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



// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHan.h"
#ifndef _MSC_VER
#else
#endif
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHanMethodDeclarations.h"



// System.Void GamePhaseState/GameInstanceChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameInstanceChangedEventHandler__ctor_m3611 (GameInstanceChangedEventHandler_t662 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke()
extern "C" void GameInstanceChangedEventHandler_Invoke_m3612 (GameInstanceChangedEventHandler_t662 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameInstanceChangedEventHandler_Invoke_m3612((GameInstanceChangedEventHandler_t662 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameInstanceChangedEventHandler_t662(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GameInstanceChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameInstanceChangedEventHandler_BeginInvoke_m3613 (GameInstanceChangedEventHandler_t662 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameInstanceChangedEventHandler_EndInvoke_m3614 (GameInstanceChangedEventHandler_t662 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GamePhaseState/GamePhaseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GamePhaseChangedEventHandler__ctor_m3615 (GamePhaseChangedEventHandler_t663 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke()
extern "C" void GamePhaseChangedEventHandler_Invoke_m3616 (GamePhaseChangedEventHandler_t663 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GamePhaseChangedEventHandler_Invoke_m3616((GamePhaseChangedEventHandler_t663 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GamePhaseChangedEventHandler_t663(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GamePhaseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GamePhaseChangedEventHandler_BeginInvoke_m3617 (GamePhaseChangedEventHandler_t663 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GamePhaseChangedEventHandler_EndInvoke_m3618 (GamePhaseChangedEventHandler_t663 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// GamePhaseState/<SetupPendingPhase>c__Iterator19
#include "AssemblyU2DCSharp_GamePhaseState_U3CSetupPendingPhaseU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// GamePhaseState/<SetupPendingPhase>c__Iterator19
#include "AssemblyU2DCSharp_GamePhaseState_U3CSetupPendingPhaseU3Ec__IMethodDeclarations.h"



// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator19::.ctor()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator19__ctor_m3619 (U3CSetupPendingPhaseU3Ec__Iterator19_t665 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator19::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator19_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3620 (U3CSetupPendingPhaseU3Ec__Iterator19_t665 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator19::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator19_System_Collections_IEnumerator_get_Current_m3621 (U3CSetupPendingPhaseU3Ec__Iterator19_t665 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GamePhaseState/<SetupPendingPhase>c__Iterator19::MoveNext()
extern TypeInfo* WaitForSeconds_t810_il2cpp_TypeInfo_var;
extern "C" bool U3CSetupPendingPhaseU3Ec__Iterator19_MoveNext_m3622 (U3CSetupPendingPhaseU3Ec__Iterator19_t665 * __this, const MethodInfo* method)
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
			goto IL_0053;
		}
	}
	{
		goto IL_0077;
	}

IL_0021:
	{
		GamePhaseState_t664 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___pendingPhaseTimeout_2 = ((float)((float)L_3+(float)(2.2f)));
		WaitForSeconds_t810 * L_4 = (WaitForSeconds_t810 *)il2cpp_codegen_object_new (WaitForSeconds_t810_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4355(L_4, (2.2f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0079;
	}

IL_0053:
	{
		GamePhaseState_t664 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		int32_t L_6 = GamePhaseState_get_gamePhase_m3630(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)6))))
		{
			goto IL_0070;
		}
	}
	{
		GamePhaseState_t664 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		L_7->___shouldCheckForPhaseTransition_3 = 1;
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
// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator19::Dispose()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator19_Dispose_m3623 (U3CSetupPendingPhaseU3Ec__Iterator19_t665 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator19::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator19_Reset_m3624 (U3CSetupPendingPhaseU3Ec__Iterator19_t665 * __this, const MethodInfo* method)
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
extern "C" void GamePhaseState__ctor_m3625 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GameInstanceChanged_m3626 (GamePhaseState_t664 * __this, GameInstanceChangedEventHandler_t662 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t662 * L_0 = (__this->___GameInstanceChanged_5);
		GameInstanceChangedEventHandler_t662 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_5 = ((GameInstanceChangedEventHandler_t662 *)Castclass(L_2, GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GameInstanceChanged_m3627 (GamePhaseState_t664 * __this, GameInstanceChangedEventHandler_t662 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t662 * L_0 = (__this->___GameInstanceChanged_5);
		GameInstanceChangedEventHandler_t662 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_5 = ((GameInstanceChangedEventHandler_t662 *)Castclass(L_2, GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GamePhaseChanged_m3628 (GamePhaseState_t664 * __this, GamePhaseChangedEventHandler_t663 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t663 * L_0 = (__this->___GamePhaseChanged_6);
		GamePhaseChangedEventHandler_t663 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_6 = ((GamePhaseChangedEventHandler_t663 *)Castclass(L_2, GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GamePhaseChanged_m3629 (GamePhaseState_t664 * __this, GamePhaseChangedEventHandler_t663 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t663 * L_0 = (__this->___GamePhaseChanged_6);
		GamePhaseChangedEventHandler_t663 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_6 = ((GamePhaseChangedEventHandler_t663 *)Castclass(L_2, GamePhaseChangedEventHandler_t663_il2cpp_TypeInfo_var));
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m3630 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgamePhaseU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m3631 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgamePhaseU3Ek__BackingField_7 = L_0;
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_previousGamePhase()
extern "C" int32_t GamePhaseState_get_previousGamePhase_m3632 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpreviousGamePhaseU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void GamePhaseState::set_previousGamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_previousGamePhase_m3633 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpreviousGamePhaseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_pendingPhase()
extern "C" int32_t GamePhaseState_get_pendingPhase_m3634 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpendingPhaseU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void GamePhaseState::set_pendingPhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_pendingPhase_m3635 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpendingPhaseU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 GamePhaseState::get_instancesFinishedThisSession()
extern "C" int32_t GamePhaseState_get_instancesFinishedThisSession_m3636 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CinstancesFinishedThisSessionU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void GamePhaseState::set_instancesFinishedThisSession(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedThisSession_m3637 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CinstancesFinishedThisSessionU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int32 GamePhaseState::get_instancesFinishedEver()
extern "C" int32_t GamePhaseState_get_instancesFinishedEver_m3638 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CinstancesFinishedEverU3Ek__BackingField_11);
		return L_0;
	}
}
// System.Void GamePhaseState::set_instancesFinishedEver(System.Int32)
extern "C" void GamePhaseState_set_instancesFinishedEver_m3639 (GamePhaseState_t664 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CinstancesFinishedEverU3Ek__BackingField_11 = L_0;
		return;
	}
}
// GamePhaseState GamePhaseState::get_instance()
extern TypeInfo* GamePhaseState_t664_il2cpp_TypeInfo_var;
extern "C" GamePhaseState_t664 * GamePhaseState_get_instance_m3640 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(574);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t664 * L_0 = ((GamePhaseState_t664_StaticFields*)GamePhaseState_t664_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern TypeInfo* GamePhaseState_t664_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_set_instance_m3641 (Object_t * __this /* static, unused */, GamePhaseState_t664 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(574);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t664 * L_0 = ___value;
		((GamePhaseState_t664_StaticFields*)GamePhaseState_t664_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m3642 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_instance_m3641(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GamePhaseState_set_gamePhase_m3631(__this, 0, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3633(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::Start()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_Start_m3643 (GamePhaseState_t664 * __this, const MethodInfo* method)
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
		int32_t L_1 = PersistentStorage_GetIntValue_m3810(L_0, (String_t*) &_stringLiteral1151, 0, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedEver_m3639(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m3644 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___shouldCheckForPhaseTransition_3);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GamePhaseState_CheckForPhaseTransition_m3649(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m3645 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3630(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m3646 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_gamePhase_m3631(__this, 0, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3633(__this, 0, /*hidden argument*/NULL);
		GameInstanceChangedEventHandler_t662 * L_0 = (__this->___GameInstanceChanged_5);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		GameInstanceChangedEventHandler_t662 * L_1 = (__this->___GameInstanceChanged_5);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(12 /* System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke() */, L_1);
	}

IL_0024:
	{
		CrossSceneState_t657 * L_2 = CrossSceneState_get_instance_m3586(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (L_2->___didWelcome_2);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		GamePhaseState_TransitionToPhase_m3651(__this, 2, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_003f:
	{
		GamePhaseState_TransitionToPhase_m3651(__this, 1, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern TypeInfo* U3CSetupPendingPhaseU3Ec__Iterator19_t665_il2cpp_TypeInfo_var;
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m3647 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSetupPendingPhaseU3Ec__Iterator19_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(575);
		s_Il2CppMethodIntialized = true;
	}
	U3CSetupPendingPhaseU3Ec__Iterator19_t665 * V_0 = {0};
	{
		U3CSetupPendingPhaseU3Ec__Iterator19_t665 * L_0 = (U3CSetupPendingPhaseU3Ec__Iterator19_t665 *)il2cpp_codegen_object_new (U3CSetupPendingPhaseU3Ec__Iterator19_t665_il2cpp_TypeInfo_var);
		U3CSetupPendingPhaseU3Ec__Iterator19__ctor_m3619(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetupPendingPhaseU3Ec__Iterator19_t665 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CSetupPendingPhaseU3Ec__Iterator19_t665 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m3648 (GamePhaseState_t664 * __this, int32_t ___phase, const MethodInfo* method)
{
	{
		int32_t L_0 = ___phase;
		GamePhaseState_set_pendingPhase_m3635(__this, L_0, /*hidden argument*/NULL);
		GamePhaseState_TransitionToPhase_m3651(__this, 6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m3649 (GamePhaseState_t664 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3630(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = (__this->___pendingPhaseTimeout_2);
		float L_2 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) <= ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = GamePhaseState_get_pendingPhase_m3634(__this, /*hidden argument*/NULL);
		GamePhaseState_TransitionToPhase_m3651(__this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		__this->___shouldCheckForPhaseTransition_3 = 0;
		return;
	}
}
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m3650 (GamePhaseState_t664 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method)
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
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_TransitionToPhase_m3651 (GamePhaseState_t664 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m3630(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___newPhase;
		bool L_2 = GamePhaseState_IsLegalTransition_m3650(__this, L_0, L_1, /*hidden argument*/NULL);
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
		int32_t L_3 = GamePhaseState_get_gamePhase_m3630(__this, /*hidden argument*/NULL);
		GamePhaseState_set_previousGamePhase_m3633(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___newPhase;
		GamePhaseState_set_gamePhase_m3631(__this, L_4, /*hidden argument*/NULL);
		GamePhaseState_t664 * L_5 = GamePhaseState_get_instance_m3640(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = GamePhaseState_get_gamePhase_m3630(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_7 = GamePhaseState_get_instancesFinishedThisSession_m3636(__this, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedThisSession_m3637(__this, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_8 = GamePhaseState_get_instancesFinishedEver_m3638(__this, /*hidden argument*/NULL);
		GamePhaseState_set_instancesFinishedEver_m3639(__this, ((int32_t)((int32_t)L_8+(int32_t)1)), /*hidden argument*/NULL);
		PersistentStorage_t695 * L_9 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_10 = GamePhaseState_get_instancesFinishedEver_m3638(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		PersistentStorage_SetIntValue_m3809(L_9, (String_t*) &_stringLiteral1151, L_10, /*hidden argument*/NULL);
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
		Object_t * L_12 = GamePhaseState_SetupPendingPhase_m3647(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3935(__this, L_12, /*hidden argument*/NULL);
	}

IL_007b:
	{
		GamePhaseChangedEventHandler_t663 * L_13 = (__this->___GamePhaseChanged_6);
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		GamePhaseChangedEventHandler_t663 * L_14 = (__this->___GamePhaseChanged_6);
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(12 /* System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke() */, L_14);
	}

IL_0091:
	{
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

// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_20.h"
// EnumAccumulator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen.h"
// EnumAccumulator`1<BoostConfig/BoostType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_0.h"
// EnumAccumulator`1<MouseConfig/MouseWiggleType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_1.h"
// EnumAccumulator`1<MouseConfig/MouseType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_2.h"
// EnumAccumulator`1<LevelDescription/WaveType>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_3.h"
// Accumulator
#include "AssemblyU2DCSharp_Accumulator.h"
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
// Accumulator
#include "AssemblyU2DCSharp_AccumulatorMethodDeclarations.h"


// System.Void LevelDescription::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t667_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t668_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t669_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t670_il2cpp_TypeInfo_var;
extern TypeInfo* EnumAccumulator_1_t671_il2cpp_TypeInfo_var;
extern TypeInfo* Accumulator_t672_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4431_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4508_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4509_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4510_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4511_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1__ctor_m4512_MethodInfo_var;
extern "C" void LevelDescription__ctor_m3652 (LevelDescription_t673 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		EnumAccumulator_1_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(580);
		EnumAccumulator_1_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(581);
		EnumAccumulator_1_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(582);
		EnumAccumulator_1_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(583);
		EnumAccumulator_1_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(584);
		Accumulator_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		List_1__ctor_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		EnumAccumulator_1__ctor_m4508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484236);
		EnumAccumulator_1__ctor_m4509_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484237);
		EnumAccumulator_1__ctor_m4510_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484238);
		EnumAccumulator_1__ctor_m4511_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484239);
		EnumAccumulator_1__ctor_m4512_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484240);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___specialText_0 = L_0;
		List_1_t550 * L_1 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m4431(L_1, /*hidden argument*/List_1__ctor_m4431_MethodInfo_var);
		__this->___explicitMouseDescs_1 = L_1;
		__this->___sprite_2 = (Sprite_t521 *)NULL;
		__this->___previousLevelClearedAchievementID_11 = (String_t*)NULL;
		EnumAccumulator_1_t667 * L_2 = (EnumAccumulator_1_t667 *)il2cpp_codegen_object_new (EnumAccumulator_1_t667_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4508(L_2, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4508_MethodInfo_var);
		__this->___mouseHolesAccumulator_5 = L_2;
		EnumAccumulator_1_t668 * L_3 = (EnumAccumulator_1_t668 *)il2cpp_codegen_object_new (EnumAccumulator_1_t668_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4509(L_3, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4509_MethodInfo_var);
		__this->___boostsAccumulator_6 = L_3;
		EnumAccumulator_1_t669 * L_4 = (EnumAccumulator_1_t669 *)il2cpp_codegen_object_new (EnumAccumulator_1_t669_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4510(L_4, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4510_MethodInfo_var);
		__this->___wigglesAccumulator_7 = L_4;
		EnumAccumulator_1_t670 * L_5 = (EnumAccumulator_1_t670 *)il2cpp_codegen_object_new (EnumAccumulator_1_t670_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4511(L_5, 4, /*hidden argument*/EnumAccumulator_1__ctor_m4511_MethodInfo_var);
		__this->___mouseTypesAccumulator_8 = L_5;
		EnumAccumulator_1_t671 * L_6 = (EnumAccumulator_1_t671 *)il2cpp_codegen_object_new (EnumAccumulator_1_t671_il2cpp_TypeInfo_var);
		EnumAccumulator_1__ctor_m4512(L_6, 3, /*hidden argument*/EnumAccumulator_1__ctor_m4512_MethodInfo_var);
		__this->___waveTypesAccumulator_9 = L_6;
		Accumulator_t672 * L_7 = (Accumulator_t672 *)il2cpp_codegen_object_new (Accumulator_t672_il2cpp_TypeInfo_var);
		Accumulator__ctor_m3745(L_7, /*hidden argument*/NULL);
		__this->___realAngusAccumulator_12 = L_7;
		return;
	}
}
// System.Void LevelDescription::PropagateAccumulators(LevelDescription)
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4513_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4514_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4515_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4516_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_DeriveFrom_m4517_MethodInfo_var;
extern "C" void LevelDescription_PropagateAccumulators_m3653 (LevelDescription_t673 * __this, LevelDescription_t673 * ___previousLd, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_DeriveFrom_m4513_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484241);
		EnumAccumulator_1_DeriveFrom_m4514_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484242);
		EnumAccumulator_1_DeriveFrom_m4515_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484243);
		EnumAccumulator_1_DeriveFrom_m4516_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484244);
		EnumAccumulator_1_DeriveFrom_m4517_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484245);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnumAccumulator_1_t668 * L_0 = (__this->___boostsAccumulator_6);
		LevelDescription_t673 * L_1 = ___previousLd;
		NullCheck(L_1);
		EnumAccumulator_1_t668 * L_2 = (L_1->___boostsAccumulator_6);
		NullCheck(L_0);
		EnumAccumulator_1_DeriveFrom_m4513(L_0, L_2, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4513_MethodInfo_var);
		EnumAccumulator_1_t667 * L_3 = (__this->___mouseHolesAccumulator_5);
		LevelDescription_t673 * L_4 = ___previousLd;
		NullCheck(L_4);
		EnumAccumulator_1_t667 * L_5 = (L_4->___mouseHolesAccumulator_5);
		NullCheck(L_3);
		EnumAccumulator_1_DeriveFrom_m4514(L_3, L_5, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4514_MethodInfo_var);
		EnumAccumulator_1_t669 * L_6 = (__this->___wigglesAccumulator_7);
		LevelDescription_t673 * L_7 = ___previousLd;
		NullCheck(L_7);
		EnumAccumulator_1_t669 * L_8 = (L_7->___wigglesAccumulator_7);
		NullCheck(L_6);
		EnumAccumulator_1_DeriveFrom_m4515(L_6, L_8, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4515_MethodInfo_var);
		EnumAccumulator_1_t670 * L_9 = (__this->___mouseTypesAccumulator_8);
		LevelDescription_t673 * L_10 = ___previousLd;
		NullCheck(L_10);
		EnumAccumulator_1_t670 * L_11 = (L_10->___mouseTypesAccumulator_8);
		NullCheck(L_9);
		EnumAccumulator_1_DeriveFrom_m4516(L_9, L_11, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4516_MethodInfo_var);
		EnumAccumulator_1_t671 * L_12 = (__this->___waveTypesAccumulator_9);
		LevelDescription_t673 * L_13 = ___previousLd;
		NullCheck(L_13);
		EnumAccumulator_1_t671 * L_14 = (L_13->___waveTypesAccumulator_9);
		NullCheck(L_12);
		EnumAccumulator_1_DeriveFrom_m4517(L_12, L_14, /*hidden argument*/EnumAccumulator_1_DeriveFrom_m4517_MethodInfo_var);
		Accumulator_t672 * L_15 = (__this->___realAngusAccumulator_12);
		LevelDescription_t673 * L_16 = ___previousLd;
		NullCheck(L_16);
		Accumulator_t672 * L_17 = (L_16->___realAngusAccumulator_12);
		NullCheck(L_15);
		Accumulator_DeriveFrom_m3754(L_15, L_17, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22.h"
#include "mscorlib_ArrayTypes.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
#include "Assembly-CSharp_ArrayTypes.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0.h"
// QuasiRandomGenerator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1.h"
// System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_22MethodDeclarations.h"
// TweakableParams
#include "AssemblyU2DCSharp_TweakableParamsMethodDeclarations.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_genMethodDeclarations.h"
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0MethodDeclarations.h"
// QuasiRandomGenerator`1<MouseSinkController/MouseHoleLocation>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"


// System.Void LevelConfig::.ctor()
extern "C" void LevelConfig__ctor_m3654 (LevelConfig_t678 * __this, const MethodInfo* method)
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
extern TypeInfo* LevelConfig_t678_il2cpp_TypeInfo_var;
extern "C" LevelConfig_t678 * LevelConfig_get_instance_m3655 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t678 * L_0 = ((LevelConfig_t678_StaticFields*)LevelConfig_t678_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void LevelConfig::set_instance(LevelConfig)
extern TypeInfo* LevelConfig_t678_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_set_instance_m3656 (Object_t * __this /* static, unused */, LevelConfig_t678 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelConfig_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(586);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_t678 * L_0 = ___value;
		((LevelConfig_t678_StaticFields*)LevelConfig_t678_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Void LevelConfig::Awake()
extern TypeInfo* Dictionary_2_t677_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4518_MethodInfo_var;
extern "C" void LevelConfig_Awake_m3657 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(588);
		Dictionary_2__ctor_m4518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484246);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelConfig_set_instance_m3656(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		Dictionary_2_t677 * L_0 = (Dictionary_2_t677 *)il2cpp_codegen_object_new (Dictionary_2_t677_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4518(L_0, /*hidden argument*/Dictionary_2__ctor_m4518_MethodInfo_var);
		__this->___levelDescMap_21 = L_0;
		return;
	}
}
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m3658 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	{
		LevelConfig_LoadSprites_m3659(__this, /*hidden argument*/NULL);
		LevelConfig_MakeQuasiRandomGenerators_m3678(__this, /*hidden argument*/NULL);
		LevelConfig_GeneratePresetLevels_m3666(__this, /*hidden argument*/NULL);
		LevelConfig_GenerateLevelLockInfo_m3660(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::LoadSprites()
extern const MethodInfo* Resources_Load_TisSprite_t521_m4440_MethodInfo_var;
extern "C" void LevelConfig_LoadSprites_m3659 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Resources_Load_TisSprite_t521_m4440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484155);
		s_Il2CppMethodIntialized = true;
	}
	{
		Sprite_t521 * L_0 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, (String_t*) &_stringLiteral1152, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___newMouseTrapSprite_23 = L_0;
		Sprite_t521 * L_1 = Resources_Load_TisSprite_t521_m4440(NULL /*static, unused*/, (String_t*) &_stringLiteral1153, /*hidden argument*/Resources_Load_TisSprite_t521_m4440_MethodInfo_var);
		__this->___angusIntroSprite_24 = L_1;
		return;
	}
}
// System.Void LevelConfig::GenerateLevelLockInfo()
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_GenerateLevelLockInfo_m3660 (LevelConfig_t678 * __this, const MethodInfo* method)
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
		int32_t L_1 = LevelConfig_GetLevelLockInfoForBoost_m3661(__this, L_0, /*hidden argument*/NULL);
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
extern "C" int32_t LevelConfig_GetLevelLockInfoForBoost_m3661 (LevelConfig_t678 * __this, int32_t ___bt, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LevelDescription_t673 * V_2 = {0};
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
		LevelDescription_t673 * L_3 = LevelConfig_GetLevelDescription_m3665(__this, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		LevelDescription_t673 * L_4 = V_2;
		NullCheck(L_4);
		EnumAccumulator_1_t668 * L_5 = (L_4->___boostsAccumulator_6);
		NullCheck(L_5);
		AccumulatorU5BU5D_t823* L_6 = (L_5->___accumulators_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(Accumulator_t672 **)(Accumulator_t672 **)SZArrayLdElema(L_6, L_8)));
		int32_t L_9 = Accumulator_get_newCount_m3746((*(Accumulator_t672 **)(Accumulator_t672 **)SZArrayLdElema(L_6, L_8)), /*hidden argument*/NULL);
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
extern "C" int32_t LevelConfig_GetLevelLock_m3662 (LevelConfig_t678 * __this, int32_t ___bType, const MethodInfo* method)
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
extern TypeInfo* ExplicitMouseDesc_t654_il2cpp_TypeInfo_var;
extern "C" void LevelConfig_AddExplicitMouseDesc_m3663 (LevelConfig_t678 * __this, List_1_t550 ** ___retVal, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExplicitMouseDesc_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(509);
		s_Il2CppMethodIntialized = true;
	}
	ExplicitMouseDesc_t654 * V_0 = {0};
	{
		float L_0 = ___delayToNextMouse;
		bool L_1 = ___isClockwise;
		int32_t L_2 = ___location;
		int32_t L_3 = ___mType;
		int32_t L_4 = ___track;
		int32_t L_5 = ___wType;
		ExplicitMouseDesc_t654 * L_6 = (ExplicitMouseDesc_t654 *)il2cpp_codegen_object_new (ExplicitMouseDesc_t654_il2cpp_TypeInfo_var);
		ExplicitMouseDesc__ctor_m3558(L_6, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t550 ** L_7 = ___retVal;
		ExplicitMouseDesc_t654 * L_8 = V_0;
		NullCheck((*((List_1_t550 **)L_7)));
		VirtActionInvoker1< ExplicitMouseDesc_t654 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(!0) */, (*((List_1_t550 **)L_7)), L_8);
		return;
	}
}
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t673 * LevelConfig_GetCurrentLevelDescription_m3664 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GameLevelState_t660 * L_0 = GameLevelState_get_instance_m3606(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GameLevelState_get_gameLevel_m3604(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		LevelDescription_t673 * L_3 = LevelConfig_GetLevelDescription_m3665(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t673 * LevelConfig_GetLevelDescription_m3665 (LevelConfig_t678 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	LevelDescription_t673 * V_0 = {0};
	{
		Dictionary_2_t677 * L_0 = (__this->___levelDescMap_21);
		int32_t L_1 = ___gameLevel;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t677 * L_3 = (__this->___levelDescMap_21);
		int32_t L_4 = ___gameLevel;
		NullCheck(L_3);
		LevelDescription_t673 * L_5 = (LevelDescription_t673 *)VirtFuncInvoker1< LevelDescription_t673 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___gameLevel;
		LevelDescription_t673 * L_7 = LevelConfig_GenerateRandomLevelDescription_m3671(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Dictionary_2_t677 * L_8 = (__this->___levelDescMap_21);
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(!0) */, L_8, L_9);
		LevelDescription_t673 * L_10 = V_0;
		int32_t L_11 = ___gameLevel;
		NullCheck(L_10);
		L_10->___gameLevel_10 = L_11;
		Dictionary_2_t677 * L_12 = (__this->___levelDescMap_21);
		int32_t L_13 = ___gameLevel;
		LevelDescription_t673 * L_14 = V_0;
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, LevelDescription_t673 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_12, L_13, L_14);
		LevelDescription_t673 * L_15 = V_0;
		return L_15;
	}
}
// System.Void LevelConfig::GeneratePresetLevels()
extern "C" void LevelConfig_GeneratePresetLevels_m3666 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	LevelDescription_t673 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Dictionary_2_t677 * L_0 = (__this->___levelDescMap_21);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear() */, L_0);
		V_1 = 0;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_1;
		LevelDescription_t673 * L_3 = LevelConfig_MakePresetGameLevelSkeleton_m3670(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t673 * L_4 = V_0;
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
		LevelDescription_t673 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		L_5->___gameLevel_10 = L_6;
		Dictionary_2_t677 * L_7 = (__this->___levelDescMap_21);
		int32_t L_8 = V_1;
		LevelDescription_t673 * L_9 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LevelDescription_t673 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(!0,!1) */, L_7, L_8, L_9);
		goto IL_000d;
	}

IL_003d:
	{
		LevelConfig_FillOutPresetGameLevelSkeletons_m3668(__this, /*hidden argument*/NULL);
		LevelConfig_AddPreviousLevelClearedAchievements_m3667(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelConfig::AddPreviousLevelClearedAchievements()
extern "C" void LevelConfig_AddPreviousLevelClearedAchievements_m3667 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	LevelDescription_t673 * V_0 = {0};
	{
		LevelDescription_t673 * L_0 = LevelConfig_GetLevelDescription_m3665(__this, 6, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t673 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1154;
		LevelDescription_t673 * L_2 = LevelConfig_GetLevelDescription_m3665(__this, ((int32_t)11), /*hidden argument*/NULL);
		V_0 = L_2;
		LevelDescription_t673 * L_3 = V_0;
		NullCheck(L_3);
		L_3->___previousLevelClearedAchievementID_11 = (String_t*) &_stringLiteral1155;
		return;
	}
}
// System.Void LevelConfig::FillOutPresetGameLevelSkeletons()
extern "C" void LevelConfig_FillOutPresetGameLevelSkeletons_m3668 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	LevelDescription_t673 * V_1 = {0};
	LevelDescription_t673 * V_2 = {0};
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t677 * L_1 = (__this->___levelDescMap_21);
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
		Dictionary_2_t677 * L_4 = (__this->___levelDescMap_21);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		LevelDescription_t673 * L_6 = (LevelDescription_t673 *)VirtFuncInvoker1< LevelDescription_t673 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_4, L_5);
		V_1 = L_6;
		V_2 = (LevelDescription_t673 *)NULL;
		Dictionary_2_t677 * L_7 = (__this->___levelDescMap_21);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(!0) */, L_7, ((int32_t)((int32_t)L_8-(int32_t)1)));
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t677 * L_10 = (__this->___levelDescMap_21);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		LevelDescription_t673 * L_12 = (LevelDescription_t673 *)VirtFuncInvoker1< LevelDescription_t673 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_10, ((int32_t)((int32_t)L_11-(int32_t)1)));
		V_2 = L_12;
	}

IL_0049:
	{
		LevelDescription_t673 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		LevelDescription_t673 * L_14 = V_1;
		LevelDescription_t673 * L_15 = V_2;
		NullCheck(L_14);
		LevelDescription_PropagateAccumulators_m3653(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0056:
	{
		LevelDescription_t673 * L_16 = V_1;
		NullCheck(L_16);
		List_1_t550 * L_17 = (L_16->___explicitMouseDescs_1);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count() */, L_17);
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		LevelDescription_t673 * L_19 = V_1;
		LevelDescription_t673 * L_20 = V_1;
		List_1_t550 * L_21 = LevelConfig_GenerateRandomMiceForLevel_m3673(__this, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->___explicitMouseDescs_1 = L_21;
		LevelDescription_t673 * L_22 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m3672(__this, L_22, /*hidden argument*/NULL);
	}

IL_007a:
	{
		LevelDescription_t673 * L_23 = V_1;
		NullCheck(L_23);
		Sprite_t521 * L_24 = (L_23->___sprite_2);
		bool L_25 = Object_op_Equality_m3997(NULL /*static, unused*/, L_24, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0097;
		}
	}
	{
		LevelDescription_t673 * L_26 = V_1;
		Sprite_t521 * L_27 = (__this->___angusIntroSprite_24);
		NullCheck(L_26);
		L_26->___sprite_2 = L_27;
	}

IL_0097:
	{
		goto IL_0002;
	}
}
// System.Void LevelConfig::SetupInitialAccumulators(LevelDescription)
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4519_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4520_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4521_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddDerived_m4522_MethodInfo_var;
extern "C" void LevelConfig_SetupInitialAccumulators_m3669 (LevelConfig_t678 * __this, LevelDescription_t673 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumAccumulator_1_AddDerived_m4519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484247);
		EnumAccumulator_1_AddDerived_m4520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484248);
		EnumAccumulator_1_AddDerived_m4521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484249);
		EnumAccumulator_1_AddDerived_m4522_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484250);
		s_Il2CppMethodIntialized = true;
	}
	{
		LevelDescription_t673 * L_0 = ___ld;
		NullCheck(L_0);
		EnumAccumulator_1_t667 * L_1 = (L_0->___mouseHolesAccumulator_5);
		int32_t L_2 = TweakableParams_GetInitialTrapsPerHole_m3740(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		EnumAccumulator_1_AddDerived_m4519(L_1, 1, L_2, /*hidden argument*/EnumAccumulator_1_AddDerived_m4519_MethodInfo_var);
		LevelDescription_t673 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t667 * L_4 = (L_3->___mouseHolesAccumulator_5);
		int32_t L_5 = TweakableParams_GetInitialTrapsPerHole_m3740(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		EnumAccumulator_1_AddDerived_m4519(L_4, 3, L_5, /*hidden argument*/EnumAccumulator_1_AddDerived_m4519_MethodInfo_var);
		LevelDescription_t673 * L_6 = ___ld;
		NullCheck(L_6);
		EnumAccumulator_1_t667 * L_7 = (L_6->___mouseHolesAccumulator_5);
		int32_t L_8 = TweakableParams_GetInitialTrapsPerHole_m3740(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		EnumAccumulator_1_AddDerived_m4519(L_7, 0, L_8, /*hidden argument*/EnumAccumulator_1_AddDerived_m4519_MethodInfo_var);
		LevelDescription_t673 * L_9 = ___ld;
		NullCheck(L_9);
		EnumAccumulator_1_t667 * L_10 = (L_9->___mouseHolesAccumulator_5);
		int32_t L_11 = TweakableParams_GetInitialTrapsPerHole_m3740(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		EnumAccumulator_1_AddDerived_m4519(L_10, 2, L_11, /*hidden argument*/EnumAccumulator_1_AddDerived_m4519_MethodInfo_var);
		LevelDescription_t673 * L_12 = ___ld;
		NullCheck(L_12);
		EnumAccumulator_1_t670 * L_13 = (L_12->___mouseTypesAccumulator_8);
		NullCheck(L_13);
		EnumAccumulator_1_AddDerived_m4520(L_13, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4520_MethodInfo_var);
		LevelDescription_t673 * L_14 = ___ld;
		NullCheck(L_14);
		EnumAccumulator_1_t669 * L_15 = (L_14->___wigglesAccumulator_7);
		NullCheck(L_15);
		EnumAccumulator_1_AddDerived_m4521(L_15, 0, /*hidden argument*/EnumAccumulator_1_AddDerived_m4521_MethodInfo_var);
		LevelDescription_t673 * L_16 = ___ld;
		NullCheck(L_16);
		EnumAccumulator_1_t671 * L_17 = (L_16->___waveTypesAccumulator_9);
		NullCheck(L_17);
		EnumAccumulator_1_AddDerived_m4522(L_17, 0, 3, /*hidden argument*/EnumAccumulator_1_AddDerived_m4522_MethodInfo_var);
		LevelDescription_t673 * L_18 = ___ld;
		NullCheck(L_18);
		EnumAccumulator_1_t671 * L_19 = (L_18->___waveTypesAccumulator_9);
		NullCheck(L_19);
		EnumAccumulator_1_AddDerived_m4522(L_19, 2, 1, /*hidden argument*/EnumAccumulator_1_AddDerived_m4522_MethodInfo_var);
		LevelDescription_t673 * L_20 = ___ld;
		NullCheck(L_20);
		Accumulator_t672 * L_21 = (L_20->___realAngusAccumulator_12);
		NullCheck(L_21);
		Accumulator_AddNew_m3751(L_21, /*hidden argument*/NULL);
		LevelDescription_t673 * L_22 = ___ld;
		NullCheck(L_22);
		Accumulator_t672 * L_23 = (L_22->___realAngusAccumulator_12);
		NullCheck(L_23);
		Accumulator_AddDerived_m3753(L_23, /*hidden argument*/NULL);
		return;
	}
}
// LevelDescription LevelConfig::MakePresetGameLevelSkeleton(System.Int32)
extern TypeInfo* LevelDescription_t673_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MouseConfig_t544_il2cpp_TypeInfo_var;
extern TypeInfo* TipConfig_t623_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4431_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4523_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4524_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4525_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4526_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4527_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_AddNew_m4528_MethodInfo_var;
extern "C" LevelDescription_t673 * LevelConfig_MakePresetGameLevelSkeleton_m3670 (LevelConfig_t678 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelDescription_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(587);
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		MouseConfig_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		TipConfig_t623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		List_1__ctor_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		EnumAccumulator_1_AddNew_m4523_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484251);
		EnumAccumulator_1_AddNew_m4524_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484252);
		EnumAccumulator_1_AddNew_m4525_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484253);
		EnumAccumulator_1_AddNew_m4526_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484254);
		EnumAccumulator_1_AddNew_m4527_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484255);
		EnumAccumulator_1_AddNew_m4528_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484256);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t673 * V_0 = {0};
	int32_t V_1 = 0;
	{
		LevelDescription_t673 * L_0 = (LevelDescription_t673 *)il2cpp_codegen_object_new (LevelDescription_t673_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m3652(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		LevelDescription_t673 * L_1 = V_0;
		List_1_t550 * L_2 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m4431(L_2, /*hidden argument*/List_1__ctor_m4431_MethodInfo_var);
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
		LevelDescription_t673 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_6);
		L_6->___specialText_0 = L_7;
		LevelDescription_t673 * L_8 = V_0;
		LevelConfig_SetupInitialAccumulators_m3669(__this, L_8, /*hidden argument*/NULL);
		LevelDescription_t673 * L_9 = V_0;
		NullCheck(L_9);
		List_1_t550 ** L_10 = &(L_9->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_10, (3.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_11 = V_0;
		NullCheck(L_11);
		List_1_t550 ** L_12 = &(L_11->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_12, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_13 = V_0;
		NullCheck(L_13);
		List_1_t550 ** L_14 = &(L_13->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_14, (3.0f), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_15 = V_0;
		NullCheck(L_15);
		List_1_t550 ** L_16 = &(L_15->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_16, (3.0f), 1, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_17 = V_0;
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
		LevelDescription_t673 * L_20 = V_0;
		NullCheck(L_20);
		L_20->___specialText_0 = (String_t*) &_stringLiteral1156;
		LevelDescription_t673 * L_21 = V_0;
		MouseConfig_t544 * L_22 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_22);
		Sprite_t521 * L_23 = MouseConfig_GetIntroSpriteForMouseType_m2922(L_22, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___sprite_2 = L_23;
		LevelDescription_t673 * L_24 = V_0;
		NullCheck(L_24);
		EnumAccumulator_1_t670 * L_25 = (L_24->___mouseTypesAccumulator_8);
		NullCheck(L_25);
		EnumAccumulator_1_AddNew_m4523(L_25, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4523_MethodInfo_var);
		LevelDescription_t673 * L_26 = V_0;
		NullCheck(L_26);
		Accumulator_t672 * L_27 = (L_26->___realAngusAccumulator_12);
		NullCheck(L_27);
		Accumulator_AddNew_m3751(L_27, /*hidden argument*/NULL);
		LevelDescription_t673 * L_28 = V_0;
		NullCheck(L_28);
		List_1_t550 ** L_29 = &(L_28->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_29, (1.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_30 = V_0;
		NullCheck(L_30);
		List_1_t550 ** L_31 = &(L_30->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_31, (2.1f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_32 = V_0;
		NullCheck(L_32);
		List_1_t550 ** L_33 = &(L_32->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_33, (3.1f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_34 = V_0;
		NullCheck(L_34);
		List_1_t550 ** L_35 = &(L_34->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_35, (1.5f), 0, 2, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_36 = V_0;
		NullCheck(L_36);
		List_1_t550 ** L_37 = &(L_36->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_37, (3.0f), 0, 1, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_38 = V_0;
		NullCheck(L_38);
		List_1_t550 ** L_39 = &(L_38->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_39, (4.0f), 1, 3, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_40 = V_0;
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
		LevelDescription_t673 * L_43 = V_0;
		NullCheck(L_43);
		L_43->___specialText_0 = (String_t*) &_stringLiteral1157;
		LevelDescription_t673 * L_44 = V_0;
		Sprite_t521 * L_45 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_44);
		L_44->___sprite_2 = L_45;
		LevelDescription_t673 * L_46 = V_0;
		NullCheck(L_46);
		EnumAccumulator_1_t667 * L_47 = (L_46->___mouseHolesAccumulator_5);
		NullCheck(L_47);
		EnumAccumulator_1_AddNew_m4524(L_47, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_48 = V_0;
		NullCheck(L_48);
		Accumulator_t672 * L_49 = (L_48->___realAngusAccumulator_12);
		NullCheck(L_49);
		Accumulator_AddNew_m3751(L_49, /*hidden argument*/NULL);
		LevelDescription_t673 * L_50 = V_0;
		NullCheck(L_50);
		List_1_t550 ** L_51 = &(L_50->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_51, (2.0f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_52 = V_0;
		NullCheck(L_52);
		List_1_t550 ** L_53 = &(L_52->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_53, (0.1f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_54 = V_0;
		NullCheck(L_54);
		List_1_t550 ** L_55 = &(L_54->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_55, (0.1f), 1, 2, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_56 = V_0;
		NullCheck(L_56);
		List_1_t550 ** L_57 = &(L_56->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_57, (2.0f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_58 = V_0;
		NullCheck(L_58);
		List_1_t550 ** L_59 = &(L_58->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_59, (1.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_60 = V_0;
		NullCheck(L_60);
		List_1_t550 ** L_61 = &(L_60->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_61, (2.3f), 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_62 = V_0;
		NullCheck(L_62);
		List_1_t550 ** L_63 = &(L_62->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_63, (1.5f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_64 = V_0;
		NullCheck(L_64);
		List_1_t550 ** L_65 = &(L_64->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_65, (4.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_66 = V_0;
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
		LevelDescription_t673 * L_69 = V_0;
		NullCheck(L_69);
		L_69->___specialText_0 = (String_t*) &_stringLiteral1158;
		LevelDescription_t673 * L_70 = V_0;
		BoostConfig_t493 * L_71 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_71);
		Sprite_t521 * L_72 = BoostConfig_GetIntroImageForType_m2795(L_71, 0, /*hidden argument*/NULL);
		NullCheck(L_70);
		L_70->___sprite_2 = L_72;
		LevelDescription_t673 * L_73 = V_0;
		TipConfig_t623 * L_74 = (TipConfig_t623 *)il2cpp_codegen_object_new (TipConfig_t623_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3535(L_74, (String_t*) &_stringLiteral1159, (String_t*) &_stringLiteral1160, /*hidden argument*/NULL);
		NullCheck(L_73);
		L_73->___tipConfig_3 = L_74;
		LevelDescription_t673 * L_75 = V_0;
		NullCheck(L_75);
		L_75->___tipPause_4 = (1.7f);
		LevelDescription_t673 * L_76 = V_0;
		NullCheck(L_76);
		EnumAccumulator_1_t668 * L_77 = (L_76->___boostsAccumulator_6);
		NullCheck(L_77);
		EnumAccumulator_1_AddNew_m4525(L_77, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4525_MethodInfo_var);
		LevelDescription_t673 * L_78 = V_0;
		NullCheck(L_78);
		List_1_t550 ** L_79 = &(L_78->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_79, (4.0f), 1, 0, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_80 = V_0;
		NullCheck(L_80);
		List_1_t550 ** L_81 = &(L_80->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_81, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_82 = V_0;
		NullCheck(L_82);
		List_1_t550 ** L_83 = &(L_82->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_83, (2.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_84 = V_0;
		NullCheck(L_84);
		List_1_t550 ** L_85 = &(L_84->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_85, (3.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_86 = V_0;
		NullCheck(L_86);
		List_1_t550 ** L_87 = &(L_86->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_87, (3.0f), 0, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_88 = V_0;
		NullCheck(L_88);
		List_1_t550 ** L_89 = &(L_88->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_89, (3.0f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_90 = V_0;
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
		LevelDescription_t673 * L_93 = V_0;
		NullCheck(L_93);
		L_93->___specialText_0 = (String_t*) &_stringLiteral1161;
		LevelDescription_t673 * L_94 = V_0;
		Sprite_t521 * L_95 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_94);
		L_94->___sprite_2 = L_95;
		LevelDescription_t673 * L_96 = V_0;
		NullCheck(L_96);
		EnumAccumulator_1_t667 * L_97 = (L_96->___mouseHolesAccumulator_5);
		NullCheck(L_97);
		EnumAccumulator_1_AddNew_m4524(L_97, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_98 = V_0;
		NullCheck(L_98);
		Accumulator_t672 * L_99 = (L_98->___realAngusAccumulator_12);
		NullCheck(L_99);
		Accumulator_AddNew_m3751(L_99, /*hidden argument*/NULL);
		LevelDescription_t673 * L_100 = V_0;
		NullCheck(L_100);
		List_1_t550 ** L_101 = &(L_100->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_101, (1.0f), 0, 1, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_102 = V_0;
		NullCheck(L_102);
		List_1_t550 ** L_103 = &(L_102->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_103, (2.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_104 = V_0;
		NullCheck(L_104);
		List_1_t550 ** L_105 = &(L_104->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_105, (3.0f), 1, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_106 = V_0;
		NullCheck(L_106);
		List_1_t550 ** L_107 = &(L_106->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_107, (1.0f), 1, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_108 = V_0;
		NullCheck(L_108);
		List_1_t550 ** L_109 = &(L_108->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_109, (2.0f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_110 = V_0;
		NullCheck(L_110);
		List_1_t550 ** L_111 = &(L_110->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_111, (0.1f), 0, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_112 = V_0;
		NullCheck(L_112);
		List_1_t550 ** L_113 = &(L_112->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_113, (2.5f), 1, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_114 = V_0;
		NullCheck(L_114);
		List_1_t550 ** L_115 = &(L_114->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_115, (4.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_116 = V_0;
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
		LevelDescription_t673 * L_119 = V_0;
		NullCheck(L_119);
		L_119->___specialText_0 = (String_t*) &_stringLiteral1162;
		LevelDescription_t673 * L_120 = V_0;
		MouseConfig_t544 * L_121 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_121);
		Sprite_t521 * L_122 = MouseConfig_GetIntroSpriteForMouseType_m2922(L_121, 2, /*hidden argument*/NULL);
		NullCheck(L_120);
		L_120->___sprite_2 = L_122;
		LevelDescription_t673 * L_123 = V_0;
		NullCheck(L_123);
		EnumAccumulator_1_t670 * L_124 = (L_123->___mouseTypesAccumulator_8);
		NullCheck(L_124);
		EnumAccumulator_1_AddNew_m4523(L_124, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4523_MethodInfo_var);
		LevelDescription_t673 * L_125 = V_0;
		NullCheck(L_125);
		EnumAccumulator_1_t670 * L_126 = (L_125->___mouseTypesAccumulator_8);
		NullCheck(L_126);
		EnumAccumulator_1_AddNew_m4523(L_126, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4523_MethodInfo_var);
		LevelDescription_t673 * L_127 = V_0;
		NullCheck(L_127);
		List_1_t550 ** L_128 = &(L_127->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_128, (3.0f), 0, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_129 = V_0;
		NullCheck(L_129);
		List_1_t550 ** L_130 = &(L_129->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_130, (2.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_131 = V_0;
		NullCheck(L_131);
		List_1_t550 ** L_132 = &(L_131->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_132, (2.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_133 = V_0;
		NullCheck(L_133);
		List_1_t550 ** L_134 = &(L_133->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_134, (1.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_135 = V_0;
		NullCheck(L_135);
		List_1_t550 ** L_136 = &(L_135->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_136, (3.0f), 0, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_137 = V_0;
		NullCheck(L_137);
		List_1_t550 ** L_138 = &(L_137->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_138, (2.0f), 1, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_139 = V_0;
		NullCheck(L_139);
		List_1_t550 ** L_140 = &(L_139->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_140, (1.0f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_141 = V_0;
		NullCheck(L_141);
		List_1_t550 ** L_142 = &(L_141->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_142, (4.0f), 1, 1, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_143 = V_0;
		NullCheck(L_143);
		List_1_t550 ** L_144 = &(L_143->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_144, (2.0f), 0, 2, 2, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_145 = V_0;
		NullCheck(L_145);
		List_1_t550 ** L_146 = &(L_145->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_146, (4.0f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_147 = V_0;
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
		LevelDescription_t673 * L_150 = V_0;
		NullCheck(L_150);
		L_150->___specialText_0 = (String_t*) &_stringLiteral1163;
		LevelDescription_t673 * L_151 = V_0;
		BoostConfig_t493 * L_152 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_152);
		Sprite_t521 * L_153 = BoostConfig_GetIntroImageForType_m2795(L_152, 1, /*hidden argument*/NULL);
		NullCheck(L_151);
		L_151->___sprite_2 = L_153;
		LevelDescription_t673 * L_154 = V_0;
		NullCheck(L_154);
		EnumAccumulator_1_t668 * L_155 = (L_154->___boostsAccumulator_6);
		NullCheck(L_155);
		EnumAccumulator_1_AddNew_m4525(L_155, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4525_MethodInfo_var);
		LevelDescription_t673 * L_156 = V_0;
		NullCheck(L_156);
		Accumulator_t672 * L_157 = (L_156->___realAngusAccumulator_12);
		NullCheck(L_157);
		Accumulator_AddNew_m3751(L_157, /*hidden argument*/NULL);
		LevelDescription_t673 * L_158 = V_0;
		NullCheck(L_158);
		List_1_t550 ** L_159 = &(L_158->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_159, (2.0f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_160 = V_0;
		NullCheck(L_160);
		List_1_t550 ** L_161 = &(L_160->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_161, (2.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_162 = V_0;
		NullCheck(L_162);
		List_1_t550 ** L_163 = &(L_162->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_163, (1.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_164 = V_0;
		NullCheck(L_164);
		List_1_t550 ** L_165 = &(L_164->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_165, (0.1f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_166 = V_0;
		NullCheck(L_166);
		List_1_t550 ** L_167 = &(L_166->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_167, (3.0f), 0, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_168 = V_0;
		NullCheck(L_168);
		List_1_t550 ** L_169 = &(L_168->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_169, (3.0f), 1, 0, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_170 = V_0;
		NullCheck(L_170);
		List_1_t550 ** L_171 = &(L_170->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_171, (0.1f), 0, 2, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_172 = V_0;
		NullCheck(L_172);
		List_1_t550 ** L_173 = &(L_172->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_173, (4.0f), 1, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_174 = V_0;
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
		LevelDescription_t673 * L_177 = V_0;
		NullCheck(L_177);
		L_177->___specialText_0 = (String_t*) &_stringLiteral1164;
		LevelDescription_t673 * L_178 = V_0;
		Sprite_t521 * L_179 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_178);
		L_178->___sprite_2 = L_179;
		LevelDescription_t673 * L_180 = V_0;
		NullCheck(L_180);
		EnumAccumulator_1_t667 * L_181 = (L_180->___mouseHolesAccumulator_5);
		NullCheck(L_181);
		EnumAccumulator_1_AddNew_m4524(L_181, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_182 = V_0;
		NullCheck(L_182);
		List_1_t550 ** L_183 = &(L_182->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_183, (3.0f), 0, 3, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_184 = V_0;
		NullCheck(L_184);
		List_1_t550 ** L_185 = &(L_184->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_185, (2.0f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_186 = V_0;
		NullCheck(L_186);
		List_1_t550 ** L_187 = &(L_186->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_187, (4.0f), 1, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_188 = V_0;
		NullCheck(L_188);
		List_1_t550 ** L_189 = &(L_188->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_189, (2.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_190 = V_0;
		NullCheck(L_190);
		List_1_t550 ** L_191 = &(L_190->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_191, (1.0f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_192 = V_0;
		NullCheck(L_192);
		List_1_t550 ** L_193 = &(L_192->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_193, (1.0f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_194 = V_0;
		NullCheck(L_194);
		List_1_t550 ** L_195 = &(L_194->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_195, (2.0f), 1, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_196 = V_0;
		NullCheck(L_196);
		List_1_t550 ** L_197 = &(L_196->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_197, (3.0f), 0, 1, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_198 = V_0;
		NullCheck(L_198);
		List_1_t550 ** L_199 = &(L_198->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_199, (2.0f), 0, 2, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_200 = V_0;
		NullCheck(L_200);
		List_1_t550 ** L_201 = &(L_200->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_201, (4.0f), 0, 1, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_202 = V_0;
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
		LevelDescription_t673 * L_205 = V_0;
		NullCheck(L_205);
		L_205->___specialText_0 = (String_t*) &_stringLiteral1165;
		LevelDescription_t673 * L_206 = V_0;
		MouseConfig_t544 * L_207 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_207);
		Sprite_t521 * L_208 = MouseConfig_GetIntroSpriteForMouseWiggle_m2923(L_207, 2, /*hidden argument*/NULL);
		NullCheck(L_206);
		L_206->___sprite_2 = L_208;
		LevelDescription_t673 * L_209 = V_0;
		NullCheck(L_209);
		EnumAccumulator_1_t669 * L_210 = (L_209->___wigglesAccumulator_7);
		NullCheck(L_210);
		EnumAccumulator_1_AddNew_m4526(L_210, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4526_MethodInfo_var);
		LevelDescription_t673 * L_211 = V_0;
		NullCheck(L_211);
		List_1_t550 ** L_212 = &(L_211->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_212, (2.0f), 0, 1, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_213 = V_0;
		NullCheck(L_213);
		List_1_t550 ** L_214 = &(L_213->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_214, (2.5f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_215 = V_0;
		NullCheck(L_215);
		List_1_t550 ** L_216 = &(L_215->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_216, (2.0f), 1, 3, 0, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_217 = V_0;
		NullCheck(L_217);
		List_1_t550 ** L_218 = &(L_217->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_218, (3.0f), 0, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_219 = V_0;
		NullCheck(L_219);
		List_1_t550 ** L_220 = &(L_219->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_220, (0.1f), 0, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_221 = V_0;
		NullCheck(L_221);
		List_1_t550 ** L_222 = &(L_221->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_222, (0.5f), 1, 0, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_223 = V_0;
		NullCheck(L_223);
		List_1_t550 ** L_224 = &(L_223->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_224, (2.0f), 0, 2, 2, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_225 = V_0;
		NullCheck(L_225);
		List_1_t550 ** L_226 = &(L_225->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_226, (1.0f), 1, 3, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_227 = V_0;
		NullCheck(L_227);
		List_1_t550 ** L_228 = &(L_227->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_228, (2.0f), 0, 1, 0, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_229 = V_0;
		NullCheck(L_229);
		List_1_t550 ** L_230 = &(L_229->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_230, (0.1f), 1, 0, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_231 = V_0;
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
		LevelDescription_t673 * L_234 = V_0;
		NullCheck(L_234);
		L_234->___specialText_0 = (String_t*) &_stringLiteral1166;
		LevelDescription_t673 * L_235 = V_0;
		BoostConfig_t493 * L_236 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_236);
		Sprite_t521 * L_237 = BoostConfig_GetIntroImageForType_m2795(L_236, 2, /*hidden argument*/NULL);
		NullCheck(L_235);
		L_235->___sprite_2 = L_237;
		LevelDescription_t673 * L_238 = V_0;
		NullCheck(L_238);
		EnumAccumulator_1_t668 * L_239 = (L_238->___boostsAccumulator_6);
		NullCheck(L_239);
		EnumAccumulator_1_AddNew_m4525(L_239, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4525_MethodInfo_var);
		LevelDescription_t673 * L_240 = V_0;
		NullCheck(L_240);
		List_1_t550 ** L_241 = &(L_240->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_241, (0.1f), 0, 0, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_242 = V_0;
		NullCheck(L_242);
		List_1_t550 ** L_243 = &(L_242->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_243, (2.0f), 0, 2, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_244 = V_0;
		NullCheck(L_244);
		List_1_t550 ** L_245 = &(L_244->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_245, (0.5f), 0, 3, 1, 3, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_246 = V_0;
		NullCheck(L_246);
		List_1_t550 ** L_247 = &(L_246->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_247, (2.5f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_248 = V_0;
		NullCheck(L_248);
		List_1_t550 ** L_249 = &(L_248->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_249, (1.8f), 0, 1, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_250 = V_0;
		NullCheck(L_250);
		List_1_t550 ** L_251 = &(L_250->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_251, (1.3f), 0, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_252 = V_0;
		NullCheck(L_252);
		List_1_t550 ** L_253 = &(L_252->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_253, (0.4f), 0, 0, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_254 = V_0;
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
		LevelDescription_t673 * L_257 = V_0;
		NullCheck(L_257);
		L_257->___specialText_0 = (String_t*) &_stringLiteral1167;
		LevelDescription_t673 * L_258 = V_0;
		Sprite_t521 * L_259 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_258);
		L_258->___sprite_2 = L_259;
		LevelDescription_t673 * L_260 = V_0;
		NullCheck(L_260);
		EnumAccumulator_1_t667 * L_261 = (L_260->___mouseHolesAccumulator_5);
		NullCheck(L_261);
		EnumAccumulator_1_AddNew_m4524(L_261, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_262 = V_0;
		NullCheck(L_262);
		List_1_t550 ** L_263 = &(L_262->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_263, (0.4f), 0, 3, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_264 = V_0;
		NullCheck(L_264);
		List_1_t550 ** L_265 = &(L_264->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_265, (0.6f), 0, 0, 3, 1, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_266 = V_0;
		NullCheck(L_266);
		List_1_t550 ** L_267 = &(L_266->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_267, (2.0f), 0, 1, 1, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_268 = V_0;
		NullCheck(L_268);
		List_1_t550 ** L_269 = &(L_268->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_269, (2.2f), 0, 2, 2, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_270 = V_0;
		NullCheck(L_270);
		List_1_t550 ** L_271 = &(L_270->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_271, (2.4f), 0, 3, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_272 = V_0;
		NullCheck(L_272);
		List_1_t550 ** L_273 = &(L_272->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_273, (2.6f), 0, 0, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_274 = V_0;
		NullCheck(L_274);
		List_1_t550 ** L_275 = &(L_274->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_275, (3.6f), 0, 1, 1, 3, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_276 = V_0;
		NullCheck(L_276);
		List_1_t550 ** L_277 = &(L_276->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_277, (4.0f), 0, 0, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_278 = V_0;
		NullCheck(L_278);
		List_1_t550 ** L_279 = &(L_278->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_279, (4.8f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_280 = V_0;
		NullCheck(L_280);
		List_1_t550 ** L_281 = &(L_280->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_281, (5.4f), 0, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_282 = V_0;
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
		LevelDescription_t673 * L_285 = V_0;
		NullCheck(L_285);
		L_285->___specialText_0 = (String_t*) &_stringLiteral1168;
		LevelDescription_t673 * L_286 = V_0;
		MouseConfig_t544 * L_287 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_287);
		Sprite_t521 * L_288 = MouseConfig_GetIntroSpriteForMouseType_m2922(L_287, 3, /*hidden argument*/NULL);
		NullCheck(L_286);
		L_286->___sprite_2 = L_288;
		LevelDescription_t673 * L_289 = V_0;
		NullCheck(L_289);
		EnumAccumulator_1_t670 * L_290 = (L_289->___mouseTypesAccumulator_8);
		NullCheck(L_290);
		EnumAccumulator_1_AddNew_m4523(L_290, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4523_MethodInfo_var);
		LevelDescription_t673 * L_291 = V_0;
		NullCheck(L_291);
		EnumAccumulator_1_t670 * L_292 = (L_291->___mouseTypesAccumulator_8);
		NullCheck(L_292);
		EnumAccumulator_1_AddNew_m4523(L_292, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4523_MethodInfo_var);
		LevelDescription_t673 * L_293 = V_0;
		NullCheck(L_293);
		EnumAccumulator_1_t670 * L_294 = (L_293->___mouseTypesAccumulator_8);
		NullCheck(L_294);
		EnumAccumulator_1_AddNew_m4523(L_294, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4523_MethodInfo_var);
		LevelDescription_t673 * L_295 = V_0;
		NullCheck(L_295);
		List_1_t550 ** L_296 = &(L_295->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_296, (2.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_297 = V_0;
		NullCheck(L_297);
		List_1_t550 ** L_298 = &(L_297->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_298, (2.0f), 0, 3, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_299 = V_0;
		NullCheck(L_299);
		List_1_t550 ** L_300 = &(L_299->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_300, (3.0f), 1, 2, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_301 = V_0;
		NullCheck(L_301);
		List_1_t550 ** L_302 = &(L_301->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_302, (2.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_303 = V_0;
		NullCheck(L_303);
		List_1_t550 ** L_304 = &(L_303->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_304, (1.0f), 1, 3, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_305 = V_0;
		NullCheck(L_305);
		List_1_t550 ** L_306 = &(L_305->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_306, (2.0f), 1, 2, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_307 = V_0;
		NullCheck(L_307);
		List_1_t550 ** L_308 = &(L_307->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_308, (1.0f), 1, 1, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_309 = V_0;
		NullCheck(L_309);
		List_1_t550 ** L_310 = &(L_309->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_310, (2.0f), 0, 0, 1, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_311 = V_0;
		NullCheck(L_311);
		List_1_t550 ** L_312 = &(L_311->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_312, (1.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_313 = V_0;
		NullCheck(L_313);
		List_1_t550 ** L_314 = &(L_313->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_314, (2.0f), 0, 3, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_315 = V_0;
		NullCheck(L_315);
		List_1_t550 ** L_316 = &(L_315->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_316, (1.0f), 0, 2, 3, 0, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_317 = V_0;
		NullCheck(L_317);
		List_1_t550 ** L_318 = &(L_317->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_318, (2.0f), 1, 1, 0, 2, 2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_319 = V_0;
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
		LevelDescription_t673 * L_322 = V_0;
		NullCheck(L_322);
		L_322->___specialText_0 = (String_t*) &_stringLiteral1169;
		LevelDescription_t673 * L_323 = V_0;
		BoostConfig_t493 * L_324 = BoostConfig_get_instance_m2783(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_324);
		Sprite_t521 * L_325 = BoostConfig_GetIntroImageForType_m2795(L_324, 3, /*hidden argument*/NULL);
		NullCheck(L_323);
		L_323->___sprite_2 = L_325;
		LevelDescription_t673 * L_326 = V_0;
		NullCheck(L_326);
		EnumAccumulator_1_t668 * L_327 = (L_326->___boostsAccumulator_6);
		NullCheck(L_327);
		EnumAccumulator_1_AddNew_m4525(L_327, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4525_MethodInfo_var);
		LevelDescription_t673 * L_328 = V_0;
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
		LevelDescription_t673 * L_331 = V_0;
		NullCheck(L_331);
		L_331->___specialText_0 = (String_t*) &_stringLiteral1170;
		LevelDescription_t673 * L_332 = V_0;
		Sprite_t521 * L_333 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_332);
		L_332->___sprite_2 = L_333;
		LevelDescription_t673 * L_334 = V_0;
		NullCheck(L_334);
		EnumAccumulator_1_t667 * L_335 = (L_334->___mouseHolesAccumulator_5);
		NullCheck(L_335);
		EnumAccumulator_1_AddNew_m4524(L_335, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_336 = V_0;
		NullCheck(L_336);
		EnumAccumulator_1_t671 * L_337 = (L_336->___waveTypesAccumulator_9);
		NullCheck(L_337);
		EnumAccumulator_1_AddNew_m4527(L_337, 0, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4527_MethodInfo_var);
		LevelDescription_t673 * L_338 = V_0;
		NullCheck(L_338);
		EnumAccumulator_1_t671 * L_339 = (L_338->___waveTypesAccumulator_9);
		NullCheck(L_339);
		EnumAccumulator_1_AddNew_m4527(L_339, 2, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4527_MethodInfo_var);
		LevelDescription_t673 * L_340 = V_0;
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
		LevelDescription_t673 * L_343 = V_0;
		NullCheck(L_343);
		L_343->___specialText_0 = (String_t*) &_stringLiteral1171;
		LevelDescription_t673 * L_344 = V_0;
		MouseConfig_t544 * L_345 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_345);
		Sprite_t521 * L_346 = MouseConfig_GetIntroSpriteForMouseWiggle_m2923(L_345, 1, /*hidden argument*/NULL);
		NullCheck(L_344);
		L_344->___sprite_2 = L_346;
		LevelDescription_t673 * L_347 = V_0;
		NullCheck(L_347);
		EnumAccumulator_1_t669 * L_348 = (L_347->___wigglesAccumulator_7);
		NullCheck(L_348);
		EnumAccumulator_1_AddNew_m4526(L_348, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4526_MethodInfo_var);
		LevelDescription_t673 * L_349 = V_0;
		NullCheck(L_349);
		List_1_t550 ** L_350 = &(L_349->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_350, (2.0f), 0, 2, 0, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_351 = V_0;
		NullCheck(L_351);
		List_1_t550 ** L_352 = &(L_351->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_352, (1.0f), 0, 0, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_353 = V_0;
		NullCheck(L_353);
		List_1_t550 ** L_354 = &(L_353->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_354, (2.0f), 1, 2, 0, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_355 = V_0;
		NullCheck(L_355);
		List_1_t550 ** L_356 = &(L_355->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_356, (3.0f), 0, 1, 2, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_357 = V_0;
		NullCheck(L_357);
		List_1_t550 ** L_358 = &(L_357->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_358, (2.0f), 1, 3, 2, 1, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_359 = V_0;
		NullCheck(L_359);
		List_1_t550 ** L_360 = &(L_359->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_360, (1.0f), 1, 2, 2, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_361 = V_0;
		NullCheck(L_361);
		List_1_t550 ** L_362 = &(L_361->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_362, (0.1f), 1, 1, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_363 = V_0;
		NullCheck(L_363);
		List_1_t550 ** L_364 = &(L_363->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_364, (0.1f), 0, 0, 1, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_365 = V_0;
		NullCheck(L_365);
		List_1_t550 ** L_366 = &(L_365->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_366, (1.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_367 = V_0;
		NullCheck(L_367);
		List_1_t550 ** L_368 = &(L_367->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_368, (2.0f), 1, 3, 3, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_369 = V_0;
		NullCheck(L_369);
		List_1_t550 ** L_370 = &(L_369->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_370, (1.0f), 0, 2, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_371 = V_0;
		NullCheck(L_371);
		List_1_t550 ** L_372 = &(L_371->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_372, (0.1f), 1, 0, 1, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_373 = V_0;
		NullCheck(L_373);
		List_1_t550 ** L_374 = &(L_373->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_374, (2.0f), 1, 3, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_375 = V_0;
		NullCheck(L_375);
		List_1_t550 ** L_376 = &(L_375->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_376, (2.0f), 0, 3, 0, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_377 = V_0;
		NullCheck(L_377);
		List_1_t550 ** L_378 = &(L_377->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_378, (2.0f), 0, 2, 0, 0, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_379 = V_0;
		NullCheck(L_379);
		List_1_t550 ** L_380 = &(L_379->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_380, (2.0f), 1, 1, 0, 2, 1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_381 = V_0;
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
		LevelDescription_t673 * L_384 = V_0;
		NullCheck(L_384);
		L_384->___specialText_0 = (String_t*) &_stringLiteral1172;
		LevelDescription_t673 * L_385 = V_0;
		MouseConfig_t544 * L_386 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_386);
		Sprite_t521 * L_387 = MouseConfig_GetIntroSpriteForMouseType_m2922(L_386, 3, /*hidden argument*/NULL);
		NullCheck(L_385);
		L_385->___sprite_2 = L_387;
		LevelDescription_t673 * L_388 = V_0;
		NullCheck(L_388);
		List_1_t550 ** L_389 = &(L_388->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_389, (1.2f), 1, 1, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_390 = V_0;
		NullCheck(L_390);
		List_1_t550 ** L_391 = &(L_390->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_391, (1.4f), 1, 0, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_392 = V_0;
		NullCheck(L_392);
		List_1_t550 ** L_393 = &(L_392->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_393, (1.0f), 0, 3, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_394 = V_0;
		NullCheck(L_394);
		List_1_t550 ** L_395 = &(L_394->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_395, (1.1f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_396 = V_0;
		NullCheck(L_396);
		List_1_t550 ** L_397 = &(L_396->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_397, (1.5f), 1, 1, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_398 = V_0;
		NullCheck(L_398);
		List_1_t550 ** L_399 = &(L_398->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_399, (1.2f), 0, 2, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_400 = V_0;
		NullCheck(L_400);
		List_1_t550 ** L_401 = &(L_400->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_401, (1.3f), 0, 3, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_402 = V_0;
		NullCheck(L_402);
		List_1_t550 ** L_403 = &(L_402->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_403, (2.0f), 1, 0, 1, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_404 = V_0;
		NullCheck(L_404);
		List_1_t550 ** L_405 = &(L_404->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_405, (0.1f), 0, 3, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_406 = V_0;
		NullCheck(L_406);
		List_1_t550 ** L_407 = &(L_406->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_407, (1.1f), 1, 3, 3, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_408 = V_0;
		NullCheck(L_408);
		List_1_t550 ** L_409 = &(L_408->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_409, (0.1f), 0, 2, 3, 2, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_410 = V_0;
		NullCheck(L_410);
		List_1_t550 ** L_411 = &(L_410->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_411, (1.5f), 1, 1, 3, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_412 = V_0;
		NullCheck(L_412);
		List_1_t550 ** L_413 = &(L_412->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_413, (2.2f), 1, 0, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_414 = V_0;
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
		LevelDescription_t673 * L_417 = V_0;
		NullCheck(L_417);
		L_417->___specialText_0 = (String_t*) &_stringLiteral1157;
		LevelDescription_t673 * L_418 = V_0;
		Sprite_t521 * L_419 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_418);
		L_418->___sprite_2 = L_419;
		LevelDescription_t673 * L_420 = V_0;
		NullCheck(L_420);
		EnumAccumulator_1_t667 * L_421 = (L_420->___mouseHolesAccumulator_5);
		NullCheck(L_421);
		EnumAccumulator_1_AddNew_m4524(L_421, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_422 = V_0;
		NullCheck(L_422);
		EnumAccumulator_1_t671 * L_423 = (L_422->___waveTypesAccumulator_9);
		NullCheck(L_423);
		EnumAccumulator_1_AddNew_m4528(L_423, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_424 = V_0;
		NullCheck(L_424);
		EnumAccumulator_1_t671 * L_425 = (L_424->___waveTypesAccumulator_9);
		NullCheck(L_425);
		EnumAccumulator_1_AddNew_m4528(L_425, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_426 = V_0;
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
		LevelDescription_t673 * L_429 = V_0;
		NullCheck(L_429);
		L_429->___specialText_0 = (String_t*) &_stringLiteral1173;
		LevelDescription_t673 * L_430 = V_0;
		MouseConfig_t544 * L_431 = ((MouseConfig_t544_StaticFields*)MouseConfig_t544_il2cpp_TypeInfo_var->static_fields)->___instance_25;
		NullCheck(L_431);
		Sprite_t521 * L_432 = MouseConfig_GetIntroSpriteForMouseWiggle_m2923(L_431, 3, /*hidden argument*/NULL);
		NullCheck(L_430);
		L_430->___sprite_2 = L_432;
		LevelDescription_t673 * L_433 = V_0;
		NullCheck(L_433);
		EnumAccumulator_1_t669 * L_434 = (L_433->___wigglesAccumulator_7);
		NullCheck(L_434);
		EnumAccumulator_1_AddNew_m4526(L_434, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4526_MethodInfo_var);
		LevelDescription_t673 * L_435 = V_0;
		NullCheck(L_435);
		List_1_t550 ** L_436 = &(L_435->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_436, (1.3f), 1, 1, 1, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_437 = V_0;
		NullCheck(L_437);
		List_1_t550 ** L_438 = &(L_437->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_438, (0.1f), 0, 2, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_439 = V_0;
		NullCheck(L_439);
		List_1_t550 ** L_440 = &(L_439->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_440, (2.0f), 1, 0, 1, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_441 = V_0;
		NullCheck(L_441);
		List_1_t550 ** L_442 = &(L_441->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_442, (0.1f), 0, 3, 3, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_443 = V_0;
		NullCheck(L_443);
		List_1_t550 ** L_444 = &(L_443->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_444, (1.1f), 0, 2, 0, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_445 = V_0;
		NullCheck(L_445);
		List_1_t550 ** L_446 = &(L_445->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_446, (1.4f), 1, 0, 0, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_447 = V_0;
		NullCheck(L_447);
		List_1_t550 ** L_448 = &(L_447->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_448, (1.0f), 1, 3, 0, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_449 = V_0;
		NullCheck(L_449);
		List_1_t550 ** L_450 = &(L_449->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_450, (1.1f), 1, 2, 1, 1, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_451 = V_0;
		NullCheck(L_451);
		List_1_t550 ** L_452 = &(L_451->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_452, (1.2f), 1, 1, 3, 1, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_453 = V_0;
		NullCheck(L_453);
		List_1_t550 ** L_454 = &(L_453->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_454, (1.5f), 0, 1, 2, 2, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_455 = V_0;
		NullCheck(L_455);
		List_1_t550 ** L_456 = &(L_455->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_456, (1.2f), 0, 2, 1, 0, 0, /*hidden argument*/NULL);
		LevelDescription_t673 * L_457 = V_0;
		NullCheck(L_457);
		List_1_t550 ** L_458 = &(L_457->___explicitMouseDescs_1);
		LevelConfig_AddExplicitMouseDesc_m3663(__this, L_458, (1.5f), 1, 1, 2, 0, 3, /*hidden argument*/NULL);
		LevelDescription_t673 * L_459 = V_0;
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
		LevelDescription_t673 * L_462 = V_0;
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
		LevelDescription_t673 * L_465 = V_0;
		NullCheck(L_465);
		L_465->___specialText_0 = (String_t*) &_stringLiteral1161;
		LevelDescription_t673 * L_466 = V_0;
		Sprite_t521 * L_467 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_466);
		L_466->___sprite_2 = L_467;
		LevelDescription_t673 * L_468 = V_0;
		NullCheck(L_468);
		EnumAccumulator_1_t667 * L_469 = (L_468->___mouseHolesAccumulator_5);
		NullCheck(L_469);
		EnumAccumulator_1_AddNew_m4524(L_469, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_470 = V_0;
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
		LevelDescription_t673 * L_473 = V_0;
		NullCheck(L_473);
		EnumAccumulator_1_t671 * L_474 = (L_473->___waveTypesAccumulator_9);
		NullCheck(L_474);
		EnumAccumulator_1_AddNew_m4528(L_474, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_475 = V_0;
		NullCheck(L_475);
		EnumAccumulator_1_t671 * L_476 = (L_475->___waveTypesAccumulator_9);
		NullCheck(L_476);
		EnumAccumulator_1_AddNew_m4528(L_476, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_477 = V_0;
		NullCheck(L_477);
		EnumAccumulator_1_t671 * L_478 = (L_477->___waveTypesAccumulator_9);
		NullCheck(L_478);
		EnumAccumulator_1_AddNew_m4528(L_478, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_479 = V_0;
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
		LevelDescription_t673 * L_482 = V_0;
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
		LevelDescription_t673 * L_485 = V_0;
		NullCheck(L_485);
		L_485->___specialText_0 = (String_t*) &_stringLiteral1174;
		LevelDescription_t673 * L_486 = V_0;
		Sprite_t521 * L_487 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_486);
		L_486->___sprite_2 = L_487;
		LevelDescription_t673 * L_488 = V_0;
		NullCheck(L_488);
		EnumAccumulator_1_t667 * L_489 = (L_488->___mouseHolesAccumulator_5);
		NullCheck(L_489);
		EnumAccumulator_1_AddNew_m4524(L_489, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_490 = V_0;
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
		LevelDescription_t673 * L_493 = V_0;
		NullCheck(L_493);
		EnumAccumulator_1_t671 * L_494 = (L_493->___waveTypesAccumulator_9);
		NullCheck(L_494);
		EnumAccumulator_1_AddNew_m4528(L_494, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_495 = V_0;
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
		LevelDescription_t673 * L_498 = V_0;
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
		LevelDescription_t673 * L_501 = V_0;
		NullCheck(L_501);
		L_501->___specialText_0 = (String_t*) &_stringLiteral1175;
		LevelDescription_t673 * L_502 = V_0;
		Sprite_t521 * L_503 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_502);
		L_502->___sprite_2 = L_503;
		LevelDescription_t673 * L_504 = V_0;
		NullCheck(L_504);
		EnumAccumulator_1_t667 * L_505 = (L_504->___mouseHolesAccumulator_5);
		NullCheck(L_505);
		EnumAccumulator_1_AddNew_m4524(L_505, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_506 = V_0;
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
		LevelDescription_t673 * L_509 = V_0;
		NullCheck(L_509);
		EnumAccumulator_1_t671 * L_510 = (L_509->___waveTypesAccumulator_9);
		NullCheck(L_510);
		EnumAccumulator_1_AddNew_m4528(L_510, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_511 = V_0;
		NullCheck(L_511);
		EnumAccumulator_1_t671 * L_512 = (L_511->___waveTypesAccumulator_9);
		NullCheck(L_512);
		EnumAccumulator_1_AddNew_m4528(L_512, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_513 = V_0;
		NullCheck(L_513);
		EnumAccumulator_1_t671 * L_514 = (L_513->___waveTypesAccumulator_9);
		NullCheck(L_514);
		EnumAccumulator_1_AddNew_m4528(L_514, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_515 = V_0;
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
		LevelDescription_t673 * L_518 = V_0;
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
		LevelDescription_t673 * L_521 = V_0;
		NullCheck(L_521);
		L_521->___specialText_0 = (String_t*) &_stringLiteral1176;
		LevelDescription_t673 * L_522 = V_0;
		Sprite_t521 * L_523 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_522);
		L_522->___sprite_2 = L_523;
		LevelDescription_t673 * L_524 = V_0;
		NullCheck(L_524);
		EnumAccumulator_1_t667 * L_525 = (L_524->___mouseHolesAccumulator_5);
		NullCheck(L_525);
		EnumAccumulator_1_AddNew_m4524(L_525, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_526 = V_0;
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
		LevelDescription_t673 * L_529 = V_0;
		NullCheck(L_529);
		EnumAccumulator_1_t671 * L_530 = (L_529->___waveTypesAccumulator_9);
		NullCheck(L_530);
		EnumAccumulator_1_AddNew_m4528(L_530, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_531 = V_0;
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
		LevelDescription_t673 * L_534 = V_0;
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
		LevelDescription_t673 * L_537 = V_0;
		NullCheck(L_537);
		L_537->___specialText_0 = (String_t*) &_stringLiteral1177;
		LevelDescription_t673 * L_538 = V_0;
		Sprite_t521 * L_539 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_538);
		L_538->___sprite_2 = L_539;
		LevelDescription_t673 * L_540 = V_0;
		NullCheck(L_540);
		EnumAccumulator_1_t667 * L_541 = (L_540->___mouseHolesAccumulator_5);
		NullCheck(L_541);
		EnumAccumulator_1_AddNew_m4524(L_541, 3, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_542 = V_0;
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
		LevelDescription_t673 * L_545 = V_0;
		NullCheck(L_545);
		EnumAccumulator_1_t671 * L_546 = (L_545->___waveTypesAccumulator_9);
		NullCheck(L_546);
		EnumAccumulator_1_AddNew_m4528(L_546, 1, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_547 = V_0;
		NullCheck(L_547);
		EnumAccumulator_1_t671 * L_548 = (L_547->___waveTypesAccumulator_9);
		NullCheck(L_548);
		EnumAccumulator_1_AddNew_m4528(L_548, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_549 = V_0;
		NullCheck(L_549);
		EnumAccumulator_1_t671 * L_550 = (L_549->___waveTypesAccumulator_9);
		NullCheck(L_550);
		EnumAccumulator_1_AddNew_m4528(L_550, 2, /*hidden argument*/EnumAccumulator_1_AddNew_m4528_MethodInfo_var);
		LevelDescription_t673 * L_551 = V_0;
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
		LevelDescription_t673 * L_554 = V_0;
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
		LevelDescription_t673 * L_557 = V_0;
		NullCheck(L_557);
		L_557->___specialText_0 = (String_t*) &_stringLiteral1178;
		LevelDescription_t673 * L_558 = V_0;
		Sprite_t521 * L_559 = (__this->___newMouseTrapSprite_23);
		NullCheck(L_558);
		L_558->___sprite_2 = L_559;
		LevelDescription_t673 * L_560 = V_0;
		NullCheck(L_560);
		EnumAccumulator_1_t667 * L_561 = (L_560->___mouseHolesAccumulator_5);
		NullCheck(L_561);
		EnumAccumulator_1_AddNew_m4524(L_561, 0, /*hidden argument*/EnumAccumulator_1_AddNew_m4524_MethodInfo_var);
		LevelDescription_t673 * L_562 = V_0;
		return L_562;
	}

IL_1247:
	{
		return (LevelDescription_t673 *)NULL;
	}
}
// LevelDescription LevelConfig::GenerateRandomLevelDescription(System.Int32)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* LevelDescription_t673_il2cpp_TypeInfo_var;
extern "C" LevelDescription_t673 * LevelConfig_GenerateRandomLevelDescription_m3671 (LevelConfig_t678 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		LevelDescription_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(587);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t673 * V_0 = {0};
	LevelDescription_t673 * V_1 = {0};
	{
		Dictionary_2_t677 * L_0 = (__this->___levelDescMap_21);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t57 * L_2 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_2, (String_t*) &_stringLiteral1179, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		V_0 = (LevelDescription_t673 *)NULL;
		int32_t L_3 = ___gameLevel;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = ___gameLevel;
		LevelDescription_t673 * L_5 = LevelConfig_GetLevelDescription_m3665(__this, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_003e;
	}

IL_0033:
	{
		Exception_t57 * L_6 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_6, (String_t*) &_stringLiteral1180, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003e:
	{
		LevelDescription_t673 * L_7 = (LevelDescription_t673 *)il2cpp_codegen_object_new (LevelDescription_t673_il2cpp_TypeInfo_var);
		LevelDescription__ctor_m3652(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		LevelDescription_t673 * L_8 = V_1;
		int32_t L_9 = ___gameLevel;
		NullCheck(L_8);
		L_8->___gameLevel_10 = L_9;
		LevelDescription_t673 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		LevelDescription_t673 * L_11 = V_1;
		LevelDescription_t673 * L_12 = V_0;
		NullCheck(L_11);
		LevelDescription_PropagateAccumulators_m3653(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0058:
	{
		LevelDescription_t673 * L_13 = V_1;
		LevelDescription_t673 * L_14 = V_1;
		List_1_t550 * L_15 = LevelConfig_GenerateRandomMiceForLevel_m3673(__this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___explicitMouseDescs_1 = L_15;
		LevelDescription_t673 * L_16 = V_1;
		Sprite_t521 * L_17 = (__this->___angusIntroSprite_24);
		NullCheck(L_16);
		L_16->___sprite_2 = L_17;
		LevelDescription_t673 * L_18 = V_1;
		LevelConfig_GenerateRandomWigglesForLevel_m3672(__this, L_18, /*hidden argument*/NULL);
		LevelDescription_t673 * L_19 = V_1;
		return L_19;
	}
}
// System.Void LevelConfig::GenerateRandomWigglesForLevel(LevelDescription)
extern TypeInfo* QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4529_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var;
extern "C" void LevelConfig_GenerateRandomWigglesForLevel_m3672 (LevelConfig_t678 * __this, LevelDescription_t673 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		EnumAccumulator_1_GetDistribution_m4529_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484257);
		QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484258);
		QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484259);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t825 * V_0 = {0};
	QuasiRandomGenerator_1_t675 * V_1 = {0};
	int32_t V_2 = 0;
	ExplicitMouseDesc_t654 * V_3 = {0};
	int32_t V_4 = {0};
	{
		LevelDescription_t673 * L_0 = ___ld;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___gameLevel_10);
		Random_set_seed_m4505(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LevelDescription_t673 * L_2 = ___ld;
		NullCheck(L_2);
		EnumAccumulator_1_t669 * L_3 = (L_2->___wigglesAccumulator_7);
		NullCheck(L_3);
		List_1_t825 * L_4 = EnumAccumulator_1_GetDistribution_m4529(L_3, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4529_MethodInfo_var);
		V_0 = L_4;
		List_1_t825 * L_5 = V_0;
		QuasiRandomGenerator_1_t675 * L_6 = (QuasiRandomGenerator_1_t675 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4530(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0046;
	}

IL_0025:
	{
		LevelDescription_t673 * L_7 = ___ld;
		NullCheck(L_7);
		List_1_t550 * L_8 = (L_7->___explicitMouseDescs_1);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		ExplicitMouseDesc_t654 * L_10 = (ExplicitMouseDesc_t654 *)VirtFuncInvoker1< ExplicitMouseDesc_t654 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32) */, L_8, L_9);
		V_3 = L_10;
		QuasiRandomGenerator_1_t675 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4531(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
		V_4 = L_12;
		ExplicitMouseDesc_t654 * L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		ExplicitMouseDesc_AddWiggle_m3567(L_13, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_16 = V_2;
		LevelDescription_t673 * L_17 = ___ld;
		NullCheck(L_17);
		List_1_t550 * L_18 = (L_17->___explicitMouseDescs_1);
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
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4431_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4532_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var;
extern const MethodInfo* EnumAccumulator_1_GetDistribution_m4533_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m4432_MethodInfo_var;
extern "C" List_1_t550 * LevelConfig_GenerateRandomMiceForLevel_m3673 (LevelConfig_t678 * __this, LevelDescription_t673 * ___ld, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		List_1__ctor_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		EnumAccumulator_1_GetDistribution_m4532_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484260);
		QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484258);
		EnumAccumulator_1_GetDistribution_m4533_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484261);
		QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484259);
		List_1_AddRange_m4432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484151);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t550 * V_0 = {0};
	List_1_t825 * V_1 = {0};
	QuasiRandomGenerator_1_t675 * V_2 = {0};
	List_1_t825 * V_3 = {0};
	QuasiRandomGenerator_1_t675 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = {0};
	{
		List_1_t550 * L_0 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m4431(L_0, /*hidden argument*/List_1__ctor_m4431_MethodInfo_var);
		V_0 = L_0;
		LevelDescription_t673 * L_1 = ___ld;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___gameLevel_10);
		Random_set_seed_m4505(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		LevelDescription_t673 * L_3 = ___ld;
		NullCheck(L_3);
		EnumAccumulator_1_t671 * L_4 = (L_3->___waveTypesAccumulator_9);
		NullCheck(L_4);
		List_1_t825 * L_5 = EnumAccumulator_1_GetDistribution_m4532(L_4, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4532_MethodInfo_var);
		V_1 = L_5;
		List_1_t825 * L_6 = V_1;
		QuasiRandomGenerator_1_t675 * L_7 = (QuasiRandomGenerator_1_t675 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4530(L_7, L_6, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var);
		V_2 = L_7;
		LevelDescription_t673 * L_8 = ___ld;
		NullCheck(L_8);
		EnumAccumulator_1_t670 * L_9 = (L_8->___mouseTypesAccumulator_8);
		NullCheck(L_9);
		List_1_t825 * L_10 = EnumAccumulator_1_GetDistribution_m4533(L_9, /*hidden argument*/EnumAccumulator_1_GetDistribution_m4533_MethodInfo_var);
		V_3 = L_10;
		List_1_t825 * L_11 = V_3;
		QuasiRandomGenerator_1_t675 * L_12 = (QuasiRandomGenerator_1_t675 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4530(L_12, L_11, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var);
		V_4 = L_12;
		V_5 = 0;
		goto IL_005f;
	}

IL_0040:
	{
		QuasiRandomGenerator_1_t675 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = QuasiRandomGenerator_1_GetNextValue_m4531(L_13, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
		V_6 = L_14;
		List_1_t550 * L_15 = V_0;
		int32_t L_16 = V_6;
		QuasiRandomGenerator_1_t675 * L_17 = V_4;
		LevelDescription_t673 * L_18 = ___ld;
		List_1_t550 * L_19 = LevelConfig_GenerateWaveForLevel_m3674(__this, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_AddRange_m4432(L_15, L_19, /*hidden argument*/List_1_AddRange_m4432_MethodInfo_var);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_5;
		LevelDescription_t673 * L_22 = ___ld;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___gameLevel_10);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)L_23/(int32_t)2)))))
		{
			goto IL_0040;
		}
	}
	{
		List_1_t550 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelDescription/WaveType,QuasiRandomGenerator`1<System.Int32>,LevelDescription)
extern "C" List_1_t550 * LevelConfig_GenerateWaveForLevel_m3674 (LevelConfig_t678 * __this, int32_t ___wt, QuasiRandomGenerator_1_t675 * ___mouseTypeGenerator, LevelDescription_t673 * ___ld, const MethodInfo* method)
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
		QuasiRandomGenerator_1_t675 * L_2 = ___mouseTypeGenerator;
		List_1_t550 * L_3 = LevelConfig_GenerateDistributedWave_m3675(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t675 * L_4 = ___mouseTypeGenerator;
		List_1_t550 * L_5 = LevelConfig_GenerateParadeWave_m3676(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0029:
	{
		QuasiRandomGenerator_1_t675 * L_6 = ___mouseTypeGenerator;
		List_1_t550 * L_7 = LevelConfig_GenerateSpoutWave_m3677(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4431_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4534_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var;
extern "C" List_1_t550 * LevelConfig_GenerateDistributedWave_m3675 (LevelConfig_t678 * __this, QuasiRandomGenerator_1_t675 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		List_1__ctor_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		QuasiRandomGenerator_1_GetNextValue_m4534_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484262);
		QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484263);
		QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484259);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t550 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = {0};
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t550 * L_0 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m4431(L_0, /*hidden argument*/List_1__ctor_m4431_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minDistributedMice_8);
		int32_t L_2 = (__this->___maxDistributedMice_9);
		int32_t L_3 = Random_Range_m3981(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0081;
	}

IL_0021:
	{
		QuasiRandomGenerator_1_t676 * L_4 = (__this->___distributedPauseGenerator_20);
		NullCheck(L_4);
		float L_5 = QuasiRandomGenerator_1_GetNextValue_m4534(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4534_MethodInfo_var);
		V_3 = L_5;
		int32_t L_6 = Random_Range_m3981(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_4 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t674 * L_7 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4535(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t675 * L_9 = ___mouseTypeGenerator;
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4531(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t675 * L_11 = (__this->___trackGenerator_19);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4531(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
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
		LevelConfig_AddExplicitMouseDesc_m3663(__this, (&V_0), L_16, L_17, L_18, L_19, L_20, 0, /*hidden argument*/NULL);
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
		List_1_t550 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4431_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_RefreshValues_m4536_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var;
extern "C" List_1_t550 * LevelConfig_GenerateParadeWave_m3676 (LevelConfig_t678 * __this, QuasiRandomGenerator_1_t675 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		List_1__ctor_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		QuasiRandomGenerator_1_RefreshValues_m4536_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484264);
		QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484259);
		QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484263);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t550 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = {0};
	{
		List_1_t550 * L_0 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m4431(L_0, /*hidden argument*/List_1__ctor_m4431_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = Random_Range_m3981(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_1 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		QuasiRandomGenerator_1_t674 * L_2 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_2);
		QuasiRandomGenerator_1_RefreshValues_m4536(L_2, /*hidden argument*/QuasiRandomGenerator_1_RefreshValues_m4536_MethodInfo_var);
		int32_t L_3 = (__this->___minParadeMice_5);
		int32_t L_4 = (__this->___maxParadeMice_6);
		int32_t L_5 = Random_Range_m3981(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_008d;
	}

IL_0037:
	{
		float L_6 = (__this->___paradePause_4);
		V_4 = L_6;
		QuasiRandomGenerator_1_t675 * L_7 = ___mouseTypeGenerator;
		NullCheck(L_7);
		int32_t L_8 = QuasiRandomGenerator_1_GetNextValue_m4531(L_7, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
		V_5 = L_8;
		QuasiRandomGenerator_1_t675 * L_9 = (__this->___trackGenerator_19);
		NullCheck(L_9);
		int32_t L_10 = QuasiRandomGenerator_1_GetNextValue_m4531(L_9, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
		V_6 = L_10;
		QuasiRandomGenerator_1_t674 * L_11 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_11);
		int32_t L_12 = QuasiRandomGenerator_1_GetNextValue_m4535(L_11, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var);
		V_7 = L_12;
		List_1_t550 * L_13 = V_0;
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
		LevelConfig_AddExplicitMouseDesc_m3663(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
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
		List_1_t550 * L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<System.Int32>)
extern TypeInfo* List_1_t550_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4431_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var;
extern "C" List_1_t550 * LevelConfig_GenerateSpoutWave_m3677 (LevelConfig_t678 * __this, QuasiRandomGenerator_1_t675 * ___mouseTypeGenerator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(510);
		List_1__ctor_m4431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484150);
		QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484263);
		QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484259);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t550 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = {0};
	int32_t V_7 = 0;
	{
		List_1_t550 * L_0 = (List_1_t550 *)il2cpp_codegen_object_new (List_1_t550_il2cpp_TypeInfo_var);
		List_1__ctor_m4431(L_0, /*hidden argument*/List_1__ctor_m4431_MethodInfo_var);
		V_0 = L_0;
		int32_t L_1 = (__this->___minSpoutMice_15);
		int32_t L_2 = (__this->___maxSpoutMice_16);
		int32_t L_3 = Random_Range_m3981(NULL /*static, unused*/, L_1, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		QuasiRandomGenerator_1_t674 * L_4 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_4);
		int32_t L_5 = QuasiRandomGenerator_1_GetNextValue_m4535(L_4, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4535_MethodInfo_var);
		V_2 = L_5;
		int32_t L_6 = Random_Range_m3981(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		V_4 = 0;
		goto IL_008f;
	}

IL_0039:
	{
		float L_7 = (__this->___minSpoutPause_12);
		float L_8 = (__this->___maxSpoutPause_13);
		float L_9 = Random_Range_m4397(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		QuasiRandomGenerator_1_t675 * L_10 = ___mouseTypeGenerator;
		NullCheck(L_10);
		int32_t L_11 = QuasiRandomGenerator_1_GetNextValue_m4531(L_10, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
		V_6 = L_11;
		QuasiRandomGenerator_1_t675 * L_12 = (__this->___trackGenerator_19);
		NullCheck(L_12);
		int32_t L_13 = QuasiRandomGenerator_1_GetNextValue_m4531(L_12, /*hidden argument*/QuasiRandomGenerator_1_GetNextValue_m4531_MethodInfo_var);
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
		LevelConfig_AddExplicitMouseDesc_m3663(__this, (&V_0), L_17, L_18, L_19, L_20, L_21, 0, /*hidden argument*/NULL);
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
		List_1_t550 * L_26 = V_0;
		return L_26;
	}
}
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern TypeInfo* List_1_t826_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t674_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t825_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var;
extern TypeInfo* QuasiRandomGenerator_1_t676_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4537_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4538_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4539_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var;
extern const MethodInfo* QuasiRandomGenerator_1__ctor_m4540_MethodInfo_var;
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m3678 (LevelConfig_t678 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(590);
		QuasiRandomGenerator_1_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(591);
		List_1_t825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(592);
		QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(589);
		QuasiRandomGenerator_1_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(593);
		List_1__ctor_m4537_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484265);
		QuasiRandomGenerator_1__ctor_m4538_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484266);
		List_1__ctor_m4539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484267);
		QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484258);
		QuasiRandomGenerator_1__ctor_m4540_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484268);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t826 * V_0 = {0};
	List_1_t825 * V_1 = {0};
	int32_t V_2 = 0;
	{
		List_1_t826 * L_0 = (List_1_t826 *)il2cpp_codegen_object_new (List_1_t826_il2cpp_TypeInfo_var);
		List_1__ctor_m4537(L_0, /*hidden argument*/List_1__ctor_m4537_MethodInfo_var);
		V_0 = L_0;
		List_1_t826 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_1, 1);
		List_1_t826 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_2, 0);
		List_1_t826 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_3, 3);
		List_1_t826 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<MouseSinkController/MouseHoleLocation>::Add(!0) */, L_4, 2);
		List_1_t826 * L_5 = V_0;
		QuasiRandomGenerator_1_t674 * L_6 = (QuasiRandomGenerator_1_t674 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t674_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4538(L_6, L_5, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4538_MethodInfo_var);
		__this->___mouseHoleGenerator_18 = L_6;
		QuasiRandomGenerator_1_t674 * L_7 = (__this->___mouseHoleGenerator_18);
		NullCheck(L_7);
		L_7->___refreshTrigger_2 = 1;
		List_1_t825 * L_8 = (List_1_t825 *)il2cpp_codegen_object_new (List_1_t825_il2cpp_TypeInfo_var);
		List_1__ctor_m4539(L_8, /*hidden argument*/List_1__ctor_m4539_MethodInfo_var);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0052;
	}

IL_0047:
	{
		List_1_t825 * L_9 = V_1;
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
		List_1_t825 * L_13 = V_1;
		QuasiRandomGenerator_1_t675 * L_14 = (QuasiRandomGenerator_1_t675 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t675_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4530(L_14, L_13, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4530_MethodInfo_var);
		__this->___trackGenerator_19 = L_14;
		SingleU5BU5D_t541* L_15 = (__this->___distributedPauseDist_10);
		QuasiRandomGenerator_1_t676 * L_16 = (QuasiRandomGenerator_1_t676 *)il2cpp_codegen_object_new (QuasiRandomGenerator_1_t676_il2cpp_TypeInfo_var);
		QuasiRandomGenerator_1__ctor_m4540(L_16, L_15, /*hidden argument*/QuasiRandomGenerator_1__ctor_m4540_MethodInfo_var);
		__this->___distributedPauseGenerator_20 = L_16;
		return;
	}
}
// System.Int32 LevelConfig::LevelForRealAngusUnlocks(System.Int32)
extern "C" int32_t LevelConfig_LevelForRealAngusUnlocks_m3679 (LevelConfig_t678 * __this, int32_t ___numUnlocks, const MethodInfo* method)
{
	LevelDescription_t673 * V_0 = {0};
	int32_t V_1 = 0;
	{
		V_1 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_1;
		V_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t677 * L_1 = (__this->___levelDescMap_21);
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
		Dictionary_2_t677 * L_5 = (__this->___levelDescMap_21);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		LevelDescription_t673 * L_7 = (LevelDescription_t673 *)VirtFuncInvoker1< LevelDescription_t673 *, int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(!0) */, L_5, L_6);
		V_0 = L_7;
		LevelDescription_t673 * L_8 = V_0;
		NullCheck(L_8);
		Accumulator_t672 * L_9 = (L_8->___realAngusAccumulator_12);
		NullCheck(L_9);
		int32_t L_10 = Accumulator_get_derivedCount_m3748(L_9, /*hidden argument*/NULL);
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
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// PlayerStats/ScoreChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_ScoreChangedEventHandlerMethodDeclarations.h"



// System.Void PlayerStats/ScoreChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ScoreChangedEventHandler__ctor_m3680 (ScoreChangedEventHandler_t679 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m3681 (ScoreChangedEventHandler_t679 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ScoreChangedEventHandler_Invoke_m3681((ScoreChangedEventHandler_t679 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t679(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m3682 (ScoreChangedEventHandler_t679 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m3683 (ScoreChangedEventHandler_t679 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void MoneyChangedEventHandler__ctor_m3684 (MoneyChangedEventHandler_t680 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/MoneyChangedEventHandler::Invoke()
extern "C" void MoneyChangedEventHandler_Invoke_m3685 (MoneyChangedEventHandler_t680 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MoneyChangedEventHandler_Invoke_m3685((MoneyChangedEventHandler_t680 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_MoneyChangedEventHandler_t680(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/MoneyChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MoneyChangedEventHandler_BeginInvoke_m3686 (MoneyChangedEventHandler_t680 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/MoneyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MoneyChangedEventHandler_EndInvoke_m3687 (MoneyChangedEventHandler_t680 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void BoostsChangedEventHandler__ctor_m3688 (BoostsChangedEventHandler_t681 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m3689 (BoostsChangedEventHandler_t681 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostsChangedEventHandler_Invoke_m3689((BoostsChangedEventHandler_t681 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t681(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m3690 (BoostsChangedEventHandler_t681 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m3691 (BoostsChangedEventHandler_t681 * __this, Object_t * ___result, const MethodInfo* method)
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



// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m3692 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_ScoreChanged_m3693 (PlayerStats_t509 * __this, ScoreChangedEventHandler_t679 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t679 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t679 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t679 *)Castclass(L_2, ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern TypeInfo* ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_ScoreChanged_m3694 (PlayerStats_t509 * __this, ScoreChangedEventHandler_t679 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(530);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScoreChangedEventHandler_t679 * L_0 = (__this->___ScoreChanged_6);
		ScoreChangedEventHandler_t679 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ScoreChanged_6 = ((ScoreChangedEventHandler_t679 *)Castclass(L_2, ScoreChangedEventHandler_t679_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_MoneyChanged_m3695 (PlayerStats_t509 * __this, MoneyChangedEventHandler_t680 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t680 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t680 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t680 *)Castclass(L_2, MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern TypeInfo* MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_MoneyChanged_m3696 (PlayerStats_t509 * __this, MoneyChangedEventHandler_t680 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		MoneyChangedEventHandler_t680 * L_0 = (__this->___MoneyChanged_7);
		MoneyChangedEventHandler_t680 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MoneyChanged_7 = ((MoneyChangedEventHandler_t680 *)Castclass(L_2, MoneyChangedEventHandler_t680_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t681_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_add_BoostsChanged_m3697 (PlayerStats_t509 * __this, BoostsChangedEventHandler_t681 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t681 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t681 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t681 *)Castclass(L_2, BoostsChangedEventHandler_t681_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern TypeInfo* BoostsChangedEventHandler_t681_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_remove_BoostsChanged_m3698 (PlayerStats_t509 * __this, BoostsChangedEventHandler_t681 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostsChangedEventHandler_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostsChangedEventHandler_t681 * L_0 = (__this->___BoostsChanged_8);
		BoostsChangedEventHandler_t681 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostsChanged_8 = ((BoostsChangedEventHandler_t681 *)Castclass(L_2, BoostsChangedEventHandler_t681_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 PlayerStats::get_gameScore()
extern "C" int32_t PlayerStats_get_gameScore_m3699 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameScoreU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void PlayerStats::set_gameScore(System.Int32)
extern "C" void PlayerStats_set_gameScore_m3700 (PlayerStats_t509 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameScoreU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 PlayerStats::get_money()
extern "C" int32_t PlayerStats_get_money_m3701 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmoneyU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void PlayerStats::set_money(System.Int32)
extern "C" void PlayerStats_set_money_m3702 (PlayerStats_t509 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmoneyU3Ek__BackingField_10 = L_0;
		return;
	}
}
// PlayerStats PlayerStats::get_instance()
extern TypeInfo* PlayerStats_t509_il2cpp_TypeInfo_var;
extern "C" PlayerStats_t509 * PlayerStats_get_instance_m3703 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t509 * L_0 = ((PlayerStats_t509_StaticFields*)PlayerStats_t509_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void PlayerStats::set_instance(PlayerStats)
extern TypeInfo* PlayerStats_t509_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_set_instance_m3704 (Object_t * __this /* static, unused */, PlayerStats_t509 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerStats_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(594);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerStats_t509 * L_0 = ___value;
		((PlayerStats_t509_StaticFields*)PlayerStats_t509_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m3705 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	{
		PlayerStats_set_instance_m3704(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		PlayerStats_Reset_m3712(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m3706 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	{
		PlayerStats_RegisterForEvents_m3708(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m3707 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	{
		PlayerStats_UnregisterForEvents_m3709(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::RegisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3710_MethodInfo_var;
extern "C" void PlayerStats_RegisterForEvents_m3708 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		PlayerStats_OnInstanceChanged_m3710_MethodInfo_var = il2cpp_codegen_method_info_from_index(621);
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
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3710_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_3 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GameInstanceChanged_m3626(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::UnregisterForEvents()
extern TypeInfo* GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var;
extern const MethodInfo* PlayerStats_OnInstanceChanged_m3710_MethodInfo_var;
extern "C" void PlayerStats_UnregisterForEvents_m3709 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(545);
		PlayerStats_OnInstanceChanged_m3710_MethodInfo_var = il2cpp_codegen_method_info_from_index(621);
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
		IntPtr_t L_2 = { (void*)PlayerStats_OnInstanceChanged_m3710_MethodInfo_var };
		GameInstanceChangedEventHandler_t662 * L_3 = (GameInstanceChangedEventHandler_t662 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t662_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m3611(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GameInstanceChanged_m3627(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m3710 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	{
		PlayerStats_Reset_m3712(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m3711 (PlayerStats_t509 * __this, int32_t ___increment, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_gameScore_m3699(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___increment;
		PlayerStats_set_gameScore_m3700(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		ScoreChangedEventHandler_t679 * L_3 = (__this->___ScoreChanged_6);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ScoreChangedEventHandler_t679 * L_4 = (__this->___ScoreChanged_6);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::Reset()
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_Reset_m3712 (PlayerStats_t509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		PlayerStats_set_gameScore_m3700(__this, 0, /*hidden argument*/NULL);
		int32_t L_0 = TweakableParams_GetInitialMoney_m3738(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerStats_set_money_m3702(__this, L_0, /*hidden argument*/NULL);
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
		int32_t L_5 = TweakableParams_GetInitialBoosts_m3739(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		MoneyChangedEventHandler_t680 * L_8 = (__this->___MoneyChanged_7);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		MoneyChangedEventHandler_t680 * L_9 = (__this->___MoneyChanged_7);
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_9);
	}

IL_0068:
	{
		ScoreChangedEventHandler_t679 * L_10 = (__this->___ScoreChanged_6);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		ScoreChangedEventHandler_t679 * L_11 = (__this->___ScoreChanged_6);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/ScoreChangedEventHandler::Invoke() */, L_11);
	}

IL_007e:
	{
		BoostsChangedEventHandler_t681 * L_12 = (__this->___BoostsChanged_8);
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		BoostsChangedEventHandler_t681 * L_13 = (__this->___BoostsChanged_8);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_13);
	}

IL_0094:
	{
		return;
	}
}
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m3713 (PlayerStats_t509 * __this, int32_t ___price, const MethodInfo* method)
{
	{
		int32_t L_0 = PlayerStats_get_money_m3701(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___price;
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerStats::EarnMoney(System.Int32)
extern "C" void PlayerStats_EarnMoney_m3714 (PlayerStats_t509 * __this, int32_t ___earnedMoney, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_money_m3701(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___earnedMoney;
		PlayerStats_set_money_m3702(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		MoneyChangedEventHandler_t680 * L_3 = (__this->___MoneyChanged_7);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		MoneyChangedEventHandler_t680 * L_4 = (__this->___MoneyChanged_7);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PlayerStats::SpendMoney(System.Int32)
extern "C" void PlayerStats_SpendMoney_m3715 (PlayerStats_t509 * __this, int32_t ___spentMoney, const MethodInfo* method)
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
		int32_t L_1 = PlayerStats_get_money_m3701(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___spentMoney;
		PlayerStats_set_money_m3702(__this, ((int32_t)((int32_t)L_1-(int32_t)L_2)), /*hidden argument*/NULL);
		int32_t L_3 = PlayerStats_get_money_m3701(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		PlayerStats_set_money_m3702(__this, 0, /*hidden argument*/NULL);
	}

IL_0028:
	{
		MoneyChangedEventHandler_t680 * L_4 = (__this->___MoneyChanged_7);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		MoneyChangedEventHandler_t680 * L_5 = (__this->___MoneyChanged_7);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/MoneyChangedEventHandler::Invoke() */, L_5);
	}

IL_003e:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m3716 (PlayerStats_t509 * __this, int32_t ___bType, const MethodInfo* method)
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
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m3717 (PlayerStats_t509 * __this, int32_t ___bType, const MethodInfo* method)
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
extern "C" void PlayerStats_AddBoost_m3718 (PlayerStats_t509 * __this, int32_t ___bType, const MethodInfo* method)
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
		BoostsChangedEventHandler_t681 * L_7 = (__this->___BoostsChanged_8);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		BoostsChangedEventHandler_t681 * L_8 = (__this->___BoostsChanged_8);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_8);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m3719 (PlayerStats_t509 * __this, int32_t ___bType, const MethodInfo* method)
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
		BoostsChangedEventHandler_t681 * L_9 = (__this->___BoostsChanged_8);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		BoostsChangedEventHandler_t681 * L_10 = (__this->___BoostsChanged_8);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(12 /* System.Void PlayerStats/BoostsChangedEventHandler::Invoke() */, L_10);
	}

IL_0041:
	{
		return;
	}
}
// System.Int32 PlayerStats::GetHighScore()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" int32_t PlayerStats_GetHighScore_m3720 (PlayerStats_t509 * __this, const MethodInfo* method)
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
		int32_t L_1 = PersistentStorage_GetIntValue_m3810(L_0, (String_t*) &_stringLiteral1181, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlayerStats::SetHighScore(System.Int32)
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void PlayerStats_SetHighScore_m3721 (PlayerStats_t509 * __this, int32_t ___highScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		PersistentStorage_t695 * L_0 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_1 = ___highScore;
		NullCheck(L_0);
		PersistentStorage_SetIntValue_m3809(L_0, (String_t*) &_stringLiteral1181, L_1, /*hidden argument*/NULL);
		return;
	}
}
// RealAngusData/RealAngusDataChangedEventHandler
#include "AssemblyU2DCSharp_RealAngusData_RealAngusDataChangedEventHan.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusData/RealAngusDataChangedEventHandler
#include "AssemblyU2DCSharp_RealAngusData_RealAngusDataChangedEventHanMethodDeclarations.h"



// System.Void RealAngusData/RealAngusDataChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RealAngusDataChangedEventHandler__ctor_m3722 (RealAngusDataChangedEventHandler_t682 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void RealAngusData/RealAngusDataChangedEventHandler::Invoke()
extern "C" void RealAngusDataChangedEventHandler_Invoke_m3723 (RealAngusDataChangedEventHandler_t682 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RealAngusDataChangedEventHandler_Invoke_m3723((RealAngusDataChangedEventHandler_t682 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_RealAngusDataChangedEventHandler_t682(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult RealAngusData/RealAngusDataChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * RealAngusDataChangedEventHandler_BeginInvoke_m3724 (RealAngusDataChangedEventHandler_t682 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void RealAngusData/RealAngusDataChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RealAngusDataChangedEventHandler_EndInvoke_m3725 (RealAngusDataChangedEventHandler_t682 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// RealAngusData
#include "AssemblyU2DCSharp_RealAngusData.h"
#ifndef _MSC_VER
#else
#endif
// RealAngusData
#include "AssemblyU2DCSharp_RealAngusDataMethodDeclarations.h"

// System.Collections.Generic.List`1<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
// System.Collections.Generic.List`1<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
struct Utilities_t698;
struct List_1_t683;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t698;
struct List_1_t709;
// Declaration System.Void Utilities::ShuffleList<System.Object>(System.Collections.Generic.List`1<!!0>&)
// System.Void Utilities::ShuffleList<System.Object>(System.Collections.Generic.List`1<!!0>&)
extern "C" void Utilities_ShuffleList_TisObject_t_m4542_gshared (Object_t * __this /* static, unused */, List_1_t709 ** p0, const MethodInfo* method);
#define Utilities_ShuffleList_TisObject_t_m4542(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, List_1_t709 **, const MethodInfo*))Utilities_ShuffleList_TisObject_t_m4542_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Void Utilities::ShuffleList<RealAngusItemDesc>(System.Collections.Generic.List`1<!!0>&)
// System.Void Utilities::ShuffleList<RealAngusItemDesc>(System.Collections.Generic.List`1<!!0>&)
#define Utilities_ShuffleList_TisRealAngusItemDesc_t571_m4541(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, List_1_t683 **, const MethodInfo*))Utilities_ShuffleList_TisObject_t_m4542_gshared)(__this /* static, unused */, p0, method)


// System.Void RealAngusData::.ctor()
extern "C" void RealAngusData__ctor_m3726 (RealAngusData_t684 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RealAngusData::add_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern TypeInfo* RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var;
extern "C" void RealAngusData_add_RealAngusDataChanged_m3727 (RealAngusData_t684 * __this, RealAngusDataChangedEventHandler_t682 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusDataChangedEventHandler_t682 * L_0 = (__this->___RealAngusDataChanged_5);
		RealAngusDataChangedEventHandler_t682 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Combine_m3975(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___RealAngusDataChanged_5 = ((RealAngusDataChangedEventHandler_t682 *)Castclass(L_2, RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void RealAngusData::remove_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern TypeInfo* RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var;
extern "C" void RealAngusData_remove_RealAngusDataChanged_m3728 (RealAngusData_t684 * __this, RealAngusDataChangedEventHandler_t682 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	{
		RealAngusDataChangedEventHandler_t682 * L_0 = (__this->___RealAngusDataChanged_5);
		RealAngusDataChangedEventHandler_t682 * L_1 = ___value;
		Delegate_t749 * L_2 = Delegate_Remove_m3983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___RealAngusDataChanged_5 = ((RealAngusDataChangedEventHandler_t682 *)Castclass(L_2, RealAngusDataChangedEventHandler_t682_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void RealAngusData::Awake()
extern TypeInfo* RealAngusData_t684_il2cpp_TypeInfo_var;
extern "C" void RealAngusData_Awake_m3729 (RealAngusData_t684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RealAngusData_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(521);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RealAngusData_t684_StaticFields*)RealAngusData_t684_il2cpp_TypeInfo_var->static_fields)->___instance_3 = __this;
		return;
	}
}
// System.Void RealAngusData::Start()
extern "C" void RealAngusData_Start_m3730 (RealAngusData_t684 * __this, const MethodInfo* method)
{
	{
		RealAngusData_MakeRealAngusItemDescs_m3735(__this, /*hidden argument*/NULL);
		RealAngusData_MakeSemiRandomOrdering_m3734(__this, /*hidden argument*/NULL);
		RealAngusDataChangedEventHandler_t682 * L_0 = (__this->___RealAngusDataChanged_5);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RealAngusDataChangedEventHandler_t682 * L_1 = (__this->___RealAngusDataChanged_5);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(12 /* System.Void RealAngusData/RealAngusDataChangedEventHandler::Invoke() */, L_1);
	}

IL_0022:
	{
		return;
	}
}
// System.Void RealAngusData::Update()
extern "C" void RealAngusData_Update_m3731 (RealAngusData_t684 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::GetRealAngusItemDescs()
extern "C" List_1_t683 * RealAngusData_GetRealAngusItemDescs_m3732 (RealAngusData_t684 * __this, const MethodInfo* method)
{
	{
		List_1_t683 * L_0 = (__this->___realAngusItemDescs_2);
		return L_0;
	}
}
// System.Int32 RealAngusData::CountUnlockedItemDescs()
extern "C" int32_t RealAngusData_CountUnlockedItemDescs_m3733 (RealAngusData_t684 * __this, const MethodInfo* method)
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
		List_1_t683 * L_0 = (__this->___realAngusItemDescs_2);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RealAngusItemDesc_t571 * L_2 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		bool L_3 = RealAngusItemDesc_get_unlocked_m3577(L_2, /*hidden argument*/NULL);
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
		List_1_t683 * L_7 = (__this->___realAngusItemDescs_2);
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
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t683_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4543_MethodInfo_var;
extern const MethodInfo* Utilities_ShuffleList_TisRealAngusItemDesc_t571_m4541_MethodInfo_var;
extern "C" void RealAngusData_MakeSemiRandomOrdering_m3734 (RealAngusData_t684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		List_1_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		List_1__ctor_m4543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484270);
		Utilities_ShuffleList_TisRealAngusItemDesc_t571_m4541_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484271);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		float L_0 = Utilities_SecondsSinceEpoch_m3836(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)(((int32_t)L_0))%(int32_t)((int32_t)100000)));
		PersistentStorage_t695 * L_1 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = PersistentStorage_GetIntValue_m3810(L_1, (String_t*) &_stringLiteral1182, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0035;
		}
	}
	{
		PersistentStorage_t695 * L_6 = ((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		PersistentStorage_SetIntValue_m3809(L_6, (String_t*) &_stringLiteral1182, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		List_1_t683 * L_8 = (List_1_t683 *)il2cpp_codegen_object_new (List_1_t683_il2cpp_TypeInfo_var);
		List_1__ctor_m4543(L_8, /*hidden argument*/List_1__ctor_m4543_MethodInfo_var);
		__this->___semiRandomItemDescs_4 = L_8;
		V_2 = 1;
		goto IL_0073;
	}

IL_0047:
	{
		List_1_t683 * L_9 = (__this->___semiRandomItemDescs_4);
		List_1_t683 * L_10 = (__this->___realAngusItemDescs_2);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		RealAngusItemDesc_t571 * L_12 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_10, L_11);
		NullCheck(L_9);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_9, L_12);
		int32_t L_13 = V_1;
		Random_set_seed_m4505(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		List_1_t683 ** L_14 = &(__this->___semiRandomItemDescs_4);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		Utilities_ShuffleList_TisRealAngusItemDesc_t571_m4541(NULL /*static, unused*/, L_14, /*hidden argument*/Utilities_ShuffleList_TisRealAngusItemDesc_t571_m4541_MethodInfo_var);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_16 = V_2;
		List_1_t683 * L_17 = (__this->___realAngusItemDescs_2);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)L_18-(int32_t)1)))))
		{
			goto IL_0047;
		}
	}
	{
		List_1_t683 * L_19 = (__this->___semiRandomItemDescs_4);
		List_1_t683 * L_20 = (__this->___realAngusItemDescs_2);
		List_1_t683 * L_21 = (__this->___realAngusItemDescs_2);
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count() */, L_21);
		NullCheck(L_20);
		RealAngusItemDesc_t571 * L_23 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_20, ((int32_t)((int32_t)L_22-(int32_t)1)));
		NullCheck(L_19);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_19, L_23);
		List_1_t683 * L_24 = (__this->___semiRandomItemDescs_4);
		List_1_t683 * L_25 = (__this->___realAngusItemDescs_2);
		NullCheck(L_25);
		RealAngusItemDesc_t571 * L_26 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_25, 0);
		NullCheck(L_24);
		VirtActionInvoker2< int32_t, RealAngusItemDesc_t571 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Insert(System.Int32,!0) */, L_24, 0, L_26);
		return;
	}
}
// System.Void RealAngusData::MakeRealAngusItemDescs()
extern TypeInfo* List_1_t683_il2cpp_TypeInfo_var;
extern TypeInfo* RealAngusItemDesc_t571_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4543_MethodInfo_var;
extern "C" void RealAngusData_MakeRealAngusItemDescs_m3735 (RealAngusData_t684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(596);
		RealAngusItemDesc_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(595);
		List_1__ctor_m4543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484270);
		s_Il2CppMethodIntialized = true;
	}
	RealAngusItemDesc_t571 * V_0 = {0};
	{
		List_1_t683 * L_0 = (List_1_t683 *)il2cpp_codegen_object_new (List_1_t683_il2cpp_TypeInfo_var);
		List_1__ctor_m4543(L_0, /*hidden argument*/List_1__ctor_m4543_MethodInfo_var);
		__this->___realAngusItemDescs_2 = L_0;
		RealAngusItemDesc_t571 * L_1 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_1, (String_t*) &_stringLiteral1183, (String_t*) &_stringLiteral1184, (String_t*) &_stringLiteral1185, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t683 * L_2 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_2, L_3);
		RealAngusItemDesc_t571 * L_4 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_4, (String_t*) &_stringLiteral1186, (String_t*) &_stringLiteral1187, (String_t*) &_stringLiteral1188, /*hidden argument*/NULL);
		V_0 = L_4;
		List_1_t683 * L_5 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_5, L_6);
		RealAngusItemDesc_t571 * L_7 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_7, (String_t*) &_stringLiteral1189, (String_t*) &_stringLiteral1190, (String_t*) &_stringLiteral1189, /*hidden argument*/NULL);
		V_0 = L_7;
		List_1_t683 * L_8 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_9 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_8, L_9);
		RealAngusItemDesc_t571 * L_10 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_10, (String_t*) &_stringLiteral1191, (String_t*) &_stringLiteral1192, (String_t*) &_stringLiteral1191, /*hidden argument*/NULL);
		V_0 = L_10;
		List_1_t683 * L_11 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_11, L_12);
		RealAngusItemDesc_t571 * L_13 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_13, (String_t*) &_stringLiteral1193, (String_t*) &_stringLiteral1194, (String_t*) &_stringLiteral1195, /*hidden argument*/NULL);
		V_0 = L_13;
		List_1_t683 * L_14 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_15 = V_0;
		NullCheck(L_14);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_14, L_15);
		RealAngusItemDesc_t571 * L_16 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_16, (String_t*) &_stringLiteral1191, (String_t*) &_stringLiteral1196, (String_t*) &_stringLiteral1197, /*hidden argument*/NULL);
		V_0 = L_16;
		List_1_t683 * L_17 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_18 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_17, L_18);
		RealAngusItemDesc_t571 * L_19 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_19, (String_t*) &_stringLiteral1191, (String_t*) &_stringLiteral1196, (String_t*) &_stringLiteral1198, /*hidden argument*/NULL);
		V_0 = L_19;
		List_1_t683 * L_20 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_20, L_21);
		RealAngusItemDesc_t571 * L_22 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_22, (String_t*) &_stringLiteral1191, (String_t*) &_stringLiteral1196, (String_t*) &_stringLiteral1199, /*hidden argument*/NULL);
		V_0 = L_22;
		List_1_t683 * L_23 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_23, L_24);
		RealAngusItemDesc_t571 * L_25 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_25, (String_t*) &_stringLiteral1191, (String_t*) &_stringLiteral1196, (String_t*) &_stringLiteral1200, /*hidden argument*/NULL);
		V_0 = L_25;
		List_1_t683 * L_26 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_27 = V_0;
		NullCheck(L_26);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_26, L_27);
		RealAngusItemDesc_t571 * L_28 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_28, (String_t*) &_stringLiteral1191, (String_t*) &_stringLiteral1196, (String_t*) &_stringLiteral1201, /*hidden argument*/NULL);
		V_0 = L_28;
		List_1_t683 * L_29 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_30 = V_0;
		NullCheck(L_29);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_29, L_30);
		RealAngusItemDesc_t571 * L_31 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_31, (String_t*) &_stringLiteral1191, (String_t*) &_stringLiteral1196, (String_t*) &_stringLiteral1202, /*hidden argument*/NULL);
		V_0 = L_31;
		List_1_t683 * L_32 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_33 = V_0;
		NullCheck(L_32);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_32, L_33);
		RealAngusItemDesc_t571 * L_34 = (RealAngusItemDesc_t571 *)il2cpp_codegen_object_new (RealAngusItemDesc_t571_il2cpp_TypeInfo_var);
		RealAngusItemDesc__ctor_m3570(L_34, (String_t*) &_stringLiteral1203, (String_t*) &_stringLiteral1204, (String_t*) &_stringLiteral1205, /*hidden argument*/NULL);
		V_0 = L_34;
		List_1_t683 * L_35 = (__this->___realAngusItemDescs_2);
		RealAngusItemDesc_t571 * L_36 = V_0;
		NullCheck(L_35);
		VirtActionInvoker1< RealAngusItemDesc_t571 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(!0) */, L_35, L_36);
		return;
	}
}
// System.Void RealAngusData::UnlockNItems(System.Int32)
extern "C" void RealAngusData_UnlockNItems_m3736 (RealAngusData_t684 * __this, int32_t ___n, const MethodInfo* method)
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
		List_1_t683 * L_0 = (__this->___semiRandomItemDescs_4);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RealAngusItemDesc_t571 * L_2 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		bool L_3 = RealAngusItemDesc_get_unlocked_m3577(L_2, /*hidden argument*/NULL);
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
		List_1_t683 * L_4 = (__this->___semiRandomItemDescs_4);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RealAngusItemDesc_t571 * L_6 = (RealAngusItemDesc_t571 *)VirtFuncInvoker1< RealAngusItemDesc_t571 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32) */, L_4, L_5);
		NullCheck(L_6);
		RealAngusItemDesc_Unlock_m3583(L_6, /*hidden argument*/NULL);
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
		RealAngusDataChangedEventHandler_t682 * L_11 = (__this->___RealAngusDataChanged_5);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RealAngusDataChangedEventHandler_t682 * L_12 = (__this->___RealAngusDataChanged_5);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(12 /* System.Void RealAngusData/RealAngusDataChangedEventHandler::Invoke() */, L_12);
	}

IL_0059:
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
extern "C" void TweakableParams__ctor_m3737 (TweakableParams_t685 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TweakableParams::GetInitialMoney()
extern "C" int32_t TweakableParams_GetInitialMoney_m3738 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t658 * L_0 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_5);
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
extern "C" int32_t TweakableParams_GetInitialBoosts_m3739 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t658 * L_0 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_5);
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
// System.Int32 TweakableParams::GetInitialTrapsPerHole()
extern "C" int32_t TweakableParams_GetInitialTrapsPerHole_m3740 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		DebugConfig_t658 * L_0 = DebugConfig_get_instance_m3590(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___useDebugValues_5);
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
		return 1;
	}
}
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinner.h"
#ifndef _MSC_VER
#else
#endif
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinnerMethodDeclarations.h"



// System.Void AcceleratingSpinner::.ctor()
extern "C" void AcceleratingSpinner__ctor_m3741 (AcceleratingSpinner_t686 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AcceleratingSpinner::Start()
extern "C" void AcceleratingSpinner_Start_m3742 (AcceleratingSpinner_t686 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AcceleratingSpinner::Update()
extern "C" void AcceleratingSpinner_Update_m3743 (AcceleratingSpinner_t686 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___angleDeg_4);
		float L_1 = (__this->___angleVelocityDeg_5);
		float L_2 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___angleDeg_4 = ((float)((float)L_0+(float)((float)((float)L_1*(float)L_2))));
		float L_3 = (__this->___angleVelocityDeg_5);
		float L_4 = (__this->___angleAccelerationDeg_3);
		float L_5 = Time_get_deltaTime_m4398(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___angleVelocityDeg_5 = ((float)((float)L_3+(float)((float)((float)L_4*(float)L_5))));
		Transform_t406 * L_6 = Component_get_transform_m4252(__this, /*hidden argument*/NULL);
		float L_7 = (__this->___angleDeg_4);
		Quaternion_t813  L_8 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_rotation_m4372(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AcceleratingSpinner::Configure(System.Single)
extern "C" void AcceleratingSpinner_Configure_m3744 (AcceleratingSpinner_t686 * __this, float ___angleDeg, const MethodInfo* method)
{
	{
		float L_0 = ___angleDeg;
		__this->___angleDeg_4 = L_0;
		float L_1 = (__this->___initialAngleVelocityDeg_2);
		__this->___angleVelocityDeg_5 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Accumulator::.ctor()
extern "C" void Accumulator__ctor_m3745 (Accumulator_t672 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Accumulator_set_newCount_m3747(__this, 0, /*hidden argument*/NULL);
		Accumulator_set_derivedCount_m3749(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Accumulator::get_newCount()
extern "C" int32_t Accumulator_get_newCount_m3746 (Accumulator_t672 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CnewCountU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void Accumulator::set_newCount(System.Int32)
extern "C" void Accumulator_set_newCount_m3747 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CnewCountU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 Accumulator::get_derivedCount()
extern "C" int32_t Accumulator_get_derivedCount_m3748 (Accumulator_t672 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CderivedCountU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void Accumulator::set_derivedCount(System.Int32)
extern "C" void Accumulator_set_derivedCount_m3749 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CderivedCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Accumulator::AddNew(System.Int32)
extern "C" void Accumulator_AddNew_m3750 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = Accumulator_get_newCount_m3746(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___value;
		Accumulator_set_newCount_m3747(__this, ((int32_t)((int32_t)L_0+(int32_t)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Accumulator::AddNew()
extern "C" void Accumulator_AddNew_m3751 (Accumulator_t672 * __this, const MethodInfo* method)
{
	{
		Accumulator_AddNew_m3750(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Accumulator::AddDerived(System.Int32)
extern "C" void Accumulator_AddDerived_m3752 (Accumulator_t672 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = Accumulator_get_derivedCount_m3748(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___value;
		Accumulator_set_derivedCount_m3749(__this, ((int32_t)((int32_t)L_0+(int32_t)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Accumulator::AddDerived()
extern "C" void Accumulator_AddDerived_m3753 (Accumulator_t672 * __this, const MethodInfo* method)
{
	{
		Accumulator_AddDerived_m3752(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Accumulator::DeriveFrom(Accumulator)
extern "C" void Accumulator_DeriveFrom_m3754 (Accumulator_t672 * __this, Accumulator_t672 * ___accumulator, const MethodInfo* method)
{
	{
		Accumulator_t672 * L_0 = ___accumulator;
		NullCheck(L_0);
		int32_t L_1 = Accumulator_get_derivedCount_m3748(L_0, /*hidden argument*/NULL);
		int32_t L_2 = Accumulator_get_newCount_m3746(__this, /*hidden argument*/NULL);
		Accumulator_set_derivedCount_m3749(__this, ((int32_t)((int32_t)L_1+(int32_t)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// AspectRatioPreserve
#include "AssemblyU2DCSharp_AspectRatioPreserve.h"
#ifndef _MSC_VER
#else
#endif
// AspectRatioPreserve
#include "AssemblyU2DCSharp_AspectRatioPreserveMethodDeclarations.h"

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
struct Component_t786;
struct Camera_t532;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t786;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m4212_gshared (Component_t786 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m4212(__this, method) (( Object_t * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t532_m4461(__this, method) (( Camera_t532 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void AspectRatioPreserve::.ctor()
extern "C" void AspectRatioPreserve__ctor_m3755 (AspectRatioPreserve_t687 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AspectRatioPreserve::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var;
extern "C" void AspectRatioPreserve_Start_m3756 (AspectRatioPreserve_t687 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484176);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_t532 * V_3 = {0};
	Rect_t719  V_4 = {0};
	float V_5 = 0.0f;
	Rect_t719  V_6 = {0};
	{
		V_0 = (1.0f);
		int32_t L_0 = Screen_get_width_m3877(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m3892(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_0))/(float)(((float)L_1))));
		float L_2 = V_1;
		float L_3 = V_0;
		V_2 = ((float)((float)L_2/(float)L_3));
		Camera_t532 * L_4 = Component_GetComponent_TisCamera_t532_m4461(__this, /*hidden argument*/Component_GetComponent_TisCamera_t532_m4461_MethodInfo_var);
		V_3 = L_4;
		float L_5 = V_2;
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		Camera_t532 * L_6 = V_3;
		NullCheck(L_6);
		Rect_t719  L_7 = Camera_get_rect_m4413(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Rect_set_width_m4465((&V_4), (1.0f), /*hidden argument*/NULL);
		float L_8 = V_2;
		Rect_set_height_m4466((&V_4), L_8, /*hidden argument*/NULL);
		Rect_set_x_m4467((&V_4), (0.0f), /*hidden argument*/NULL);
		float L_9 = V_2;
		Rect_set_y_m4468((&V_4), ((float)((float)((float)((float)(1.0f)-(float)L_9))/(float)(2.0f))), /*hidden argument*/NULL);
		Camera_t532 * L_10 = V_3;
		Rect_t719  L_11 = V_4;
		NullCheck(L_10);
		Camera_set_rect_m4469(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_0073:
	{
		float L_12 = V_2;
		V_5 = ((float)((float)(1.0f)/(float)L_12));
		Camera_t532 * L_13 = V_3;
		NullCheck(L_13);
		Rect_t719  L_14 = Camera_get_rect_m4413(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = V_5;
		Rect_set_width_m4465((&V_6), L_15, /*hidden argument*/NULL);
		Rect_set_height_m4466((&V_6), (1.0f), /*hidden argument*/NULL);
		float L_16 = V_5;
		Rect_set_x_m4467((&V_6), ((float)((float)((float)((float)(1.0f)-(float)L_16))/(float)(2.0f))), /*hidden argument*/NULL);
		Rect_set_y_m4468((&V_6), (0.0f), /*hidden argument*/NULL);
		Camera_t532 * L_17 = V_3;
		Rect_t719  L_18 = V_6;
		NullCheck(L_17);
		Camera_set_rect_m4469(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void AspectRatioPreserve::Update()
extern "C" void AspectRatioPreserve_Update_m3757 (AspectRatioPreserve_t687 * __this, const MethodInfo* method)
{
	{
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



// System.Void BounceLerp::.ctor()
extern "C" void BounceLerp__ctor_m3758 (BounceLerp_t605 * __this, const MethodInfo* method)
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
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" float BounceLerp_GetCoefficientForTime_m3759 (BounceLerp_t605 * __this, float ___timeDelta, bool* ___isFinished, const MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
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
extern "C" void DebugLogPropagate__ctor_m3760 (DebugLogPropagate_t688 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::LogInIOS(System.String)
extern "C" {void DEFAULT_CALL LogInIOS(char*);}
extern "C" void DebugLogPropagate_LogInIOS_m3761 (Object_t * __this /* static, unused */, String_t* ___testArg, const MethodInfo* method)
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
extern const MethodInfo* DebugLogPropagate_HandleLog_m3764_MethodInfo_var;
extern "C" void DebugLogPropagate_OnEnable_m3762 (DebugLogPropagate_t688 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		DebugLogPropagate_HandleLog_m3764_MethodInfo_var = il2cpp_codegen_method_info_from_index(624);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m3764_MethodInfo_var };
		LogCallback_t54 * L_1 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m4358(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::OnDisable()
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m3764_MethodInfo_var;
extern "C" void DebugLogPropagate_OnDisable_m3763 (DebugLogPropagate_t688 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		DebugLogPropagate_HandleLog_m3764_MethodInfo_var = il2cpp_codegen_method_info_from_index(624);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m3764_MethodInfo_var };
		LogCallback_t54 * L_1 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_logMessageReceived_m4544(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::HandleLog(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* LogType_t101_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void DebugLogPropagate_HandleLog_m3764 (DebugLogPropagate_t688 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
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
		String_t* L_5 = String_Format_m4545(NULL /*static, unused*/, (String_t*) &_stringLiteral1206, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1207, L_7, /*hidden argument*/NULL);
		DebugLogPropagate_LogInIOS_m3761(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandler.h"
#ifndef _MSC_VER
#else
#endif
// DistortForEffect/DistortFinishedHandler
#include "AssemblyU2DCSharp_DistortForEffect_DistortFinishedHandlerMethodDeclarations.h"



// System.Void DistortForEffect/DistortFinishedHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DistortFinishedHandler__ctor_m3765 (DistortFinishedHandler_t689 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void DistortForEffect/DistortFinishedHandler::Invoke(UnityEngine.GameObject)
extern "C" void DistortFinishedHandler_Invoke_m3766 (DistortFinishedHandler_t689 * __this, GameObject_t352 * ___go, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DistortFinishedHandler_Invoke_m3766((DistortFinishedHandler_t689 *)__this->___prev_9,___go, method);
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
extern "C" void pinvoke_delegate_wrapper_DistortFinishedHandler_t689(Il2CppObject* delegate, GameObject_t352 * ___go)
{
	// Marshaling of parameter '___go' to native representation
	GameObject_t352 * ____go_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.GameObject'."));
}
// System.IAsyncResult DistortForEffect/DistortFinishedHandler::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * DistortFinishedHandler_BeginInvoke_m3767 (DistortFinishedHandler_t689 * __this, GameObject_t352 * ___go, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___go;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void DistortForEffect/DistortFinishedHandler::EndInvoke(System.IAsyncResult)
extern "C" void DistortFinishedHandler_EndInvoke_m3768 (DistortFinishedHandler_t689 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void DistortForEffect__ctor_m3769 (DistortForEffect_t535 * __this, const MethodInfo* method)
{
	{
		BounceLerp__ctor_m3758(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DistortForEffect::get_distorting()
extern "C" bool DistortForEffect_get_distorting_m3770 (DistortForEffect_t535 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CdistortingU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void DistortForEffect::set_distorting(System.Boolean)
extern "C" void DistortForEffect_set_distorting_m3771 (DistortForEffect_t535 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CdistortingU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Void DistortForEffect::Awake()
extern "C" void DistortForEffect_Awake_m3772 (DistortForEffect_t535 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___onAtStart_13);
		DistortForEffect_set_distorting_m3771(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Start()
extern "C" void DistortForEffect_Start_m3773 (DistortForEffect_t535 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = (__this->___thingToScale_11);
		bool L_1 = Object_op_Equality_m3997(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t352 * L_2 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4255(L_2, /*hidden argument*/NULL);
		__this->___thingToScale_11 = L_3;
	}

IL_0022:
	{
		Transform_t406 * L_4 = (__this->___thingToScale_11);
		NullCheck(L_4);
		Vector3_t523  L_5 = Transform_get_localScale_m4260(L_4, /*hidden argument*/NULL);
		__this->___originalScale_9 = L_5;
		return;
	}
}
// System.Void DistortForEffect::DistortWithDelay(System.Single)
extern "C" void DistortForEffect_DistortWithDelay_m3774 (DistortForEffect_t535 * __this, float ___delay, const MethodInfo* method)
{
	{
		bool L_0 = DistortForEffect_get_distorting_m3770(__this, /*hidden argument*/NULL);
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
		float L_1 = Time_get_realtimeSinceStartup_m4546(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = ___delay;
		__this->___startDistortTime_8 = ((float)((float)L_1+(float)L_2));
		DistortForEffect_set_distorting_m3771(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::SetDistortFinishedHandler(DistortForEffect/DistortFinishedHandler)
extern "C" void DistortForEffect_SetDistortFinishedHandler_m3775 (DistortForEffect_t535 * __this, DistortFinishedHandler_t689 * ___handler, const MethodInfo* method)
{
	{
		DistortFinishedHandler_t689 * L_0 = ___handler;
		__this->___handler_7 = L_0;
		return;
	}
}
// System.Void DistortForEffect::Distort()
extern "C" void DistortForEffect_Distort_m3776 (DistortForEffect_t535 * __this, const MethodInfo* method)
{
	{
		DistortForEffect_DistortWithDelay_m3774(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Cancel()
extern "C" void DistortForEffect_Cancel_m3777 (DistortForEffect_t535 * __this, const MethodInfo* method)
{
	{
		DistortForEffect_set_distorting_m3771(__this, 0, /*hidden argument*/NULL);
		Transform_t406 * L_0 = (__this->___thingToScale_11);
		Vector3_t523  L_1 = (__this->___originalScale_9);
		NullCheck(L_0);
		Transform_set_localScale_m4261(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Update()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void DistortForEffect_Update_m3778 (DistortForEffect_t535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0 = DistortForEffect_get_distorting_m3770(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = Time_get_realtimeSinceStartup_m4546(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		float L_3 = Time_get_realtimeSinceStartup_m4546(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = (__this->___startDistortTime_8);
		V_1 = ((float)((float)L_4-(float)L_5));
		float L_6 = V_1;
		float L_7 = BounceLerp_GetCoefficientForTime_m3759(__this, L_6, (&V_2), /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		DistortForEffect_set_distorting_m3771(__this, 0, /*hidden argument*/NULL);
		DistortFinishedHandler_t689 * L_9 = (__this->___handler_7);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		DistortFinishedHandler_t689 * L_10 = (__this->___handler_7);
		GameObject_t352 * L_11 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< GameObject_t352 * >::Invoke(12 /* System.Void DistortForEffect/DistortFinishedHandler::Invoke(UnityEngine.GameObject) */, L_10, L_11);
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
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Max_m4547(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
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
		Vector3_t523 * L_21 = &(__this->___originalScale_9);
		float L_22 = (L_21->___x_1);
		float L_23 = V_3;
		Vector3_t523 * L_24 = &(__this->___originalScale_9);
		float L_25 = (L_24->___y_2);
		float L_26 = V_3;
		Vector3_t523 * L_27 = &(__this->___originalScale_9);
		float L_28 = (L_27->___z_3);
		Vector3_t523  L_29 = {0};
		Vector3__ctor_m4250(&L_29, ((float)((float)L_20*(float)L_22)), ((float)((float)L_23*(float)L_25)), ((float)((float)L_26*(float)L_28)), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_m4261(L_19, L_29, /*hidden argument*/NULL);
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
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElementMethodDeclarations.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
struct GameObject_t352;
struct Canvas_t691;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t691_m4548(__this, method) (( Canvas_t691 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)
struct Component_t786;
struct RectTransform_t573;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t573_m4449(__this, method) (( RectTransform_t573 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void FlyingAnimation::.ctor()
extern "C" void FlyingAnimation__ctor_m3779 (FlyingAnimation_t692 * __this, const MethodInfo* method)
{
	{
		WorldRelativeGUIElement__ctor_m3848(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingAnimation::Awake()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var;
extern "C" void FlyingAnimation_Awake_m3780 (FlyingAnimation_t692 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484273);
		Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4477(NULL /*static, unused*/, (String_t*) &_stringLiteral1049, /*hidden argument*/NULL);
		__this->___uxCanvasGameObject_15 = L_0;
		GameObject_t352 * L_1 = (__this->___uxCanvasGameObject_15);
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3849(__this, L_1, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = (__this->___uxCanvasGameObject_15);
		NullCheck(L_2);
		Canvas_t691 * L_3 = GameObject_GetComponent_TisCanvas_t691_m4548(L_2, /*hidden argument*/GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var);
		__this->___uxCanvas_16 = L_3;
		Canvas_t691 * L_4 = (__this->___uxCanvas_16);
		NullCheck(L_4);
		Camera_t532 * L_5 = Canvas_get_worldCamera_m4549(L_4, /*hidden argument*/NULL);
		__this->___uxCamera_17 = L_5;
		RectTransform_t573 * L_6 = Component_GetComponent_TisRectTransform_t573_m4449(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		__this->___myRectTransform_7 = L_6;
		Image_t499 * L_7 = (__this->___image_18);
		NullCheck(L_7);
		RectTransform_t573 * L_8 = Component_GetComponent_TisRectTransform_t573_m4449(L_7, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		__this->___imageRectTransform_8 = L_8;
		return;
	}
}
// System.Void FlyingAnimation::Start()
extern "C" void FlyingAnimation_Start_m3781 (FlyingAnimation_t692 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FlyingAnimation::Update()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void FlyingAnimation_Update_m3782 (FlyingAnimation_t692 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	SingleU5BU5D_t541* V_3 = {0};
	Vector3_t523  V_4 = {0};
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
		float L_1 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		GameObject_t352 * L_5 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		Object_Destroy_m4116(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		float L_6 = V_1;
		V_2 = ((float)((float)L_6/(float)(1.0f)));
		float L_7 = V_2;
		Vector3U5BU5D_t690* L_8 = (__this->___points_9);
		NullCheck(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		SingleU5BU5D_t541* L_9 = Utilities_GetBlendingCoefficients_m3837(NULL /*static, unused*/, L_7, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/NULL);
		V_3 = L_9;
		Vector3__ctor_m4250((&V_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_0091;
	}

IL_0067:
	{
		Vector3_t523  L_10 = V_4;
		SingleU5BU5D_t541* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		Vector3U5BU5D_t690* L_14 = (__this->___points_9);
		int32_t L_15 = V_5;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Vector3_t523  L_16 = Vector3_op_Multiply_m4399(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_11, L_13)), (*(Vector3_t523 *)((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_14, L_15))), /*hidden argument*/NULL);
		Vector3_t523  L_17 = Vector3_op_Addition_m4401(NULL /*static, unused*/, L_10, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		Vector3U5BU5D_t690* L_20 = (__this->___points_9);
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		RectTransform_t573 * L_21 = (__this->___myRectTransform_7);
		Vector3_t523  L_22 = V_4;
		NullCheck(L_21);
		RectTransform_set_anchoredPosition3D_m4371(L_21, L_22, /*hidden argument*/NULL);
		float L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
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
		RectTransform_t573 * L_32 = (__this->___imageRectTransform_8);
		float L_33 = V_8;
		float L_34 = V_8;
		Vector3_t523  L_35 = {0};
		Vector3__ctor_m4250(&L_35, L_33, L_34, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_m4261(L_32, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlyingAnimation::Configure(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" void FlyingAnimation_Configure_m3783 (FlyingAnimation_t692 * __this, Vector3_t523  ___worldStartPosition, GameObject_t352 * ___canvasTarget, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	{
		Camera_t532 * L_0 = (__this->___uxCamera_17);
		GameObject_t352 * L_1 = ___canvasTarget;
		NullCheck(L_1);
		Transform_t406 * L_2 = GameObject_get_transform_m4255(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t523  L_3 = Transform_get_position_m4257(L_2, /*hidden argument*/NULL);
		Vector3_t523  L_4 = WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3853(__this, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t523  L_5 = ___worldStartPosition;
		Vector3_t523  L_6 = V_0;
		FlyingAnimation_CreatePoints_m3786(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->___running_11 = 0;
		return;
	}
}
// System.Void FlyingAnimation::ConfigureWithViewportPos(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void FlyingAnimation_ConfigureWithViewportPos_m3784 (FlyingAnimation_t692 * __this, Vector3_t523  ___worldStartPosition, Vector3_t523  ___viewportPos, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	{
		Vector3_t523  L_0 = ___viewportPos;
		Vector3_t523  L_1 = WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3854(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t523  L_2 = ___worldStartPosition;
		Vector3_t523  L_3 = V_0;
		FlyingAnimation_CreatePoints_m3786(__this, L_2, L_3, /*hidden argument*/NULL);
		__this->___running_11 = 0;
		return;
	}
}
// System.Void FlyingAnimation::Run()
extern "C" void FlyingAnimation_Run_m3785 (FlyingAnimation_t692 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startTime_10 = L_0;
		__this->___running_11 = 1;
		return;
	}
}
// System.Void FlyingAnimation::CreatePoints(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Vector3U5BU5D_t690_il2cpp_TypeInfo_var;
extern "C" void FlyingAnimation_CreatePoints_m3786 (FlyingAnimation_t692 * __this, Vector3_t523  ___worldStartPosition, Vector3_t523  ___otherCanvasPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		__this->___points_9 = ((Vector3U5BU5D_t690*)SZArrayNew(Vector3U5BU5D_t690_il2cpp_TypeInfo_var, 3));
		Vector3U5BU5D_t690* L_0 = (__this->___points_9);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Vector3_t523  L_1 = ___worldStartPosition;
		Vector3_t523  L_2 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3852(__this, L_1, /*hidden argument*/NULL);
		*((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_0, 0)) = L_2;
		Vector3U5BU5D_t690* L_3 = (__this->___points_9);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		Vector3_t523  L_4 = ___otherCanvasPosition;
		*((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_3, 2)) = L_4;
		float L_5 = Random_Range_m4397(NULL /*static, unused*/, (0.1f), (0.4f), /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = Random_Range_m4397(NULL /*static, unused*/, (0.1f), (0.4f), /*hidden argument*/NULL);
		V_1 = L_6;
		Vector3U5BU5D_t690* L_7 = (__this->___points_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		float L_8 = V_0;
		Vector3U5BU5D_t690* L_9 = (__this->___points_9);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		float L_10 = (((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_9, 0))->___x_1);
		float L_11 = V_0;
		Vector3U5BU5D_t690* L_12 = (__this->___points_9);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		float L_13 = (((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_12, 2))->___x_1);
		float L_14 = V_1;
		Vector3U5BU5D_t690* L_15 = (__this->___points_9);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		float L_16 = (((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_15, 0))->___y_2);
		float L_17 = V_1;
		Vector3U5BU5D_t690* L_18 = (__this->___points_9);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		float L_19 = (((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_18, 2))->___y_2);
		Vector3_t523  L_20 = {0};
		Vector3__ctor_m4250(&L_20, ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_8))*(float)L_10))+(float)((float)((float)L_11*(float)L_13)))), ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_14))*(float)L_16))+(float)((float)((float)L_17*(float)L_19)))), (0.0f), /*hidden argument*/NULL);
		*((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_7, 1)) = L_20;
		return;
	}
}
// InOutTransitioner
#include "AssemblyU2DCSharp_InOutTransitioner.h"
#ifndef _MSC_VER
#else
#endif
// InOutTransitioner
#include "AssemblyU2DCSharp_InOutTransitionerMethodDeclarations.h"



// System.Void InOutTransitioner::.ctor(System.Single)
extern "C" void InOutTransitioner__ctor_m3787 (InOutTransitioner_t570 * __this, float ___transitionDuration, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		float L_0 = ___transitionDuration;
		__this->___duration_0 = L_0;
		InOutTransitioner_Reset_m3790(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean InOutTransitioner::get_movingIn()
extern "C" bool InOutTransitioner_get_movingIn_m3788 (InOutTransitioner_t570 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmovingInU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void InOutTransitioner::set_movingIn(System.Boolean)
extern "C" void InOutTransitioner_set_movingIn_m3789 (InOutTransitioner_t570 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmovingInU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void InOutTransitioner::Reset(System.Boolean)
extern "C" void InOutTransitioner_Reset_m3790 (InOutTransitioner_t570 * __this, bool ___inState, const MethodInfo* method)
{
	{
		__this->___startTime_1 = (0.0f);
		bool L_0 = ___inState;
		InOutTransitioner_set_movingIn_m3789(__this, L_0, /*hidden argument*/NULL);
		__this->___fractionThruTransition_2 = (1.0f);
		return;
	}
}
// System.Void InOutTransitioner::UpdateTransitionFraction()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void InOutTransitioner_UpdateTransitionFraction_m3791 (InOutTransitioner_t570 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___startTime_1);
		float L_3 = (__this->___duration_0);
		__this->___fractionThruTransition_2 = ((float)((float)((float)((float)L_1-(float)L_2))/(float)L_3));
		float L_4 = (__this->___fractionThruTransition_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Clamp_m4407(NULL /*static, unused*/, L_4, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___fractionThruTransition_2 = L_5;
		return;
	}
}
// System.Void InOutTransitioner::Transition(System.Boolean)
extern "C" void InOutTransitioner_Transition_m3792 (InOutTransitioner_t570 * __this, bool ___moveIn, const MethodInfo* method)
{
	{
		bool L_0 = ___moveIn;
		bool L_1 = InOutTransitioner_get_movingIn_m3788(__this, /*hidden argument*/NULL);
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
		bool L_2 = ___moveIn;
		InOutTransitioner_set_movingIn_m3789(__this, L_2, /*hidden argument*/NULL);
		float L_3 = (__this->___fractionThruTransition_2);
		__this->___fractionThruTransition_2 = ((float)((float)(1.0f)-(float)L_3));
		float L_4 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = (__this->___fractionThruTransition_2);
		float L_6 = (__this->___duration_0);
		__this->___startTime_1 = ((float)((float)L_4-(float)((float)((float)L_5*(float)L_6))));
		return;
	}
}
// System.Boolean InOutTransitioner::IsTransitioning()
extern "C" bool InOutTransitioner_IsTransitioning_m3793 (InOutTransitioner_t570 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___fractionThruTransition_2);
		return ((((int32_t)((((float)L_0) == ((float)(1.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single InOutTransitioner::GetFractionIn()
extern "C" float InOutTransitioner_GetFractionIn_m3794 (InOutTransitioner_t570 * __this, const MethodInfo* method)
{
	{
		bool L_0 = InOutTransitioner_get_movingIn_m3788(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		float L_1 = (__this->___fractionThruTransition_2);
		return L_1;
	}

IL_0012:
	{
		float L_2 = (__this->___fractionThruTransition_2);
		return ((float)((float)(1.0f)-(float)L_2));
	}
}
// KeepItSquare
#include "AssemblyU2DCSharp_KeepItSquare.h"
#ifndef _MSC_VER
#else
#endif
// KeepItSquare
#include "AssemblyU2DCSharp_KeepItSquareMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Void KeepItSquare::.ctor()
extern "C" void KeepItSquare__ctor_m3795 (KeepItSquare_t693 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KeepItSquare::Start()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var;
extern "C" void KeepItSquare_Start_m3796 (KeepItSquare_t693 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484166);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t573 * V_0 = {0};
	Rect_t719  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		RectTransform_t573 * L_0 = Component_GetComponent_TisRectTransform_t573_m4449(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t573_m4449_MethodInfo_var);
		V_0 = L_0;
		RectTransform_t573 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		RectTransform_t573 * L_3 = V_0;
		NullCheck(L_3);
		Rect_t719  L_4 = RectTransform_get_rect_m4382(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Rect_get_height_m4254((&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_width_m4253((&V_1), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = V_2;
		float L_8 = V_3;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_004d;
		}
	}
	{
		RectTransform_t573 * L_9 = V_0;
		float L_10 = V_2;
		float L_11 = V_3;
		Vector2_t110  L_12 = {0};
		Vector2__ctor_m4446(&L_12, ((float)((float)L_10/(float)L_11)), (1.0f), /*hidden argument*/NULL);
		Vector3_t523  L_13 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_m4261(L_9, L_13, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_004d:
	{
		RectTransform_t573 * L_14 = V_0;
		float L_15 = V_3;
		float L_16 = V_2;
		Vector2_t110  L_17 = {0};
		Vector2__ctor_m4446(&L_17, (1.0f), ((float)((float)L_15/(float)L_16)), /*hidden argument*/NULL);
		Vector3_t523  L_18 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_m4261(L_14, L_18, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void KeepItSquare::Update()
extern "C" void KeepItSquare_Update_m3797 (KeepItSquare_t693 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// MusicFader
#include "AssemblyU2DCSharp_MusicFader.h"
#ifndef _MSC_VER
#else
#endif
// MusicFader
#include "AssemblyU2DCSharp_MusicFaderMethodDeclarations.h"

// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
struct Component_t786;
struct AudioSource_t553;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t553_m4211(__this, method) (( AudioSource_t553 * (*) (Component_t786 *, const MethodInfo*))Component_GetComponent_TisObject_t_m4212_gshared)(__this, method)


// System.Void MusicFader::.ctor()
extern "C" void MusicFader__ctor_m3798 (MusicFader_t694 * __this, const MethodInfo* method)
{
	{
		__this->___fadeTime_2 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicFader::Awake()
extern TypeInfo* InOutTransitioner_t570_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t553_m4211_MethodInfo_var;
extern "C" void MusicFader_Awake_m3799 (MusicFader_t694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InOutTransitioner_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(523);
		Component_GetComponent_TisAudioSource_t553_m4211_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t553 * L_0 = Component_GetComponent_TisAudioSource_t553_m4211(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t553_m4211_MethodInfo_var);
		__this->___audioSource_3 = L_0;
		float L_1 = (__this->___fadeTime_2);
		InOutTransitioner_t570 * L_2 = (InOutTransitioner_t570 *)il2cpp_codegen_object_new (InOutTransitioner_t570_il2cpp_TypeInfo_var);
		InOutTransitioner__ctor_m3787(L_2, L_1, /*hidden argument*/NULL);
		__this->___transitioner_4 = L_2;
		InOutTransitioner_t570 * L_3 = (__this->___transitioner_4);
		NullCheck(L_3);
		InOutTransitioner_Reset_m3790(L_3, 1, /*hidden argument*/NULL);
		AudioSource_t553 * L_4 = (__this->___audioSource_3);
		NullCheck(L_4);
		AudioSource_set_volume_m4550(L_4, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicFader::Start()
extern "C" void MusicFader_Start_m3800 (MusicFader_t694 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicFader::Update()
extern "C" void MusicFader_Update_m3801 (MusicFader_t694 * __this, const MethodInfo* method)
{
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_4);
		NullCheck(L_0);
		bool L_1 = InOutTransitioner_IsTransitioning_m3793(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		InOutTransitioner_t570 * L_2 = (__this->___transitioner_4);
		NullCheck(L_2);
		InOutTransitioner_UpdateTransitionFraction_m3791(L_2, /*hidden argument*/NULL);
		AudioSource_t553 * L_3 = (__this->___audioSource_3);
		InOutTransitioner_t570 * L_4 = (__this->___transitioner_4);
		NullCheck(L_4);
		float L_5 = InOutTransitioner_GetFractionIn_m3794(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		AudioSource_set_volume_m4550(L_3, L_5, /*hidden argument*/NULL);
		InOutTransitioner_t570 * L_6 = (__this->___transitioner_4);
		NullCheck(L_6);
		bool L_7 = InOutTransitioner_IsTransitioning_m3793(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005c;
		}
	}
	{
		InOutTransitioner_t570 * L_8 = (__this->___transitioner_4);
		NullCheck(L_8);
		bool L_9 = InOutTransitioner_get_movingIn_m3788(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005c;
		}
	}
	{
		AudioSource_t553 * L_10 = (__this->___audioSource_3);
		NullCheck(L_10);
		AudioSource_Stop_m4216(L_10, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void MusicFader::FadeIn()
extern "C" void MusicFader_FadeIn_m3802 (MusicFader_t694 * __this, const MethodInfo* method)
{
	{
		InOutTransitioner_t570 * L_0 = (__this->___transitioner_4);
		NullCheck(L_0);
		InOutTransitioner_Transition_m3792(L_0, 1, /*hidden argument*/NULL);
		AudioSource_t553 * L_1 = (__this->___audioSource_3);
		NullCheck(L_1);
		bool L_2 = AudioSource_get_isPlaying_m4551(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		AudioSource_t553 * L_3 = (__this->___audioSource_3);
		NullCheck(L_3);
		AudioSource_Play_m4450(L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		AudioSource_t553 * L_4 = (__this->___audioSource_3);
		InOutTransitioner_t570 * L_5 = (__this->___transitioner_4);
		NullCheck(L_5);
		float L_6 = InOutTransitioner_GetFractionIn_m3794(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_set_volume_m4550(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicFader::FadeOut()
extern "C" void MusicFader_FadeOut_m3803 (MusicFader_t694 * __this, const MethodInfo* method)
{
	{
		AudioSource_t553 * L_0 = (__this->___audioSource_3);
		NullCheck(L_0);
		bool L_1 = AudioSource_get_isPlaying_m4551(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		InOutTransitioner_t570 * L_2 = (__this->___transitioner_4);
		NullCheck(L_2);
		InOutTransitioner_Reset_m3790(L_2, 0, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0021:
	{
		InOutTransitioner_t570 * L_3 = (__this->___transitioner_4);
		NullCheck(L_3);
		InOutTransitioner_Transition_m3792(L_3, 0, /*hidden argument*/NULL);
		AudioSource_t553 * L_4 = (__this->___audioSource_3);
		InOutTransitioner_t570 * L_5 = (__this->___transitioner_4);
		NullCheck(L_5);
		float L_6 = InOutTransitioner_GetFractionIn_m3794(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_set_volume_m4550(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"


// System.Void PersistentStorage::.ctor()
extern "C" void PersistentStorage__ctor_m3804 (PersistentStorage_t695 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::Awake()
extern TypeInfo* PersistentStorage_t695_il2cpp_TypeInfo_var;
extern "C" void PersistentStorage_Awake_m3805 (PersistentStorage_t695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PersistentStorage_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(519);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PersistentStorage_t695_StaticFields*)PersistentStorage_t695_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void PersistentStorage::ClearAll()
extern "C" void PersistentStorage_ClearAll_m3806 (PersistentStorage_t695 * __this, const MethodInfo* method)
{
	{
		PlayerPrefs_DeleteAll_m4552(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PersistentStorage::SetFloatValue(System.String,System.Single)
extern "C" void PersistentStorage_SetFloatValue_m3807 (PersistentStorage_t695 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		PlayerPrefs_SetFloat_m4553(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single PersistentStorage::GetFloatValue(System.String,System.Single)
extern "C" float PersistentStorage_GetFloatValue_m3808 (PersistentStorage_t695 * __this, String_t* ___name, float ___defaultValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___defaultValue;
		float L_2 = PlayerPrefs_GetFloat_m4554(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::SetIntValue(System.String,System.Int32)
extern "C" void PersistentStorage_SetIntValue_m3809 (PersistentStorage_t695 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		PlayerPrefs_SetInt_m4555(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PersistentStorage::GetIntValue(System.String,System.Int32)
extern "C" int32_t PersistentStorage_GetIntValue_m3810 (PersistentStorage_t695 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___defaultValue;
		int32_t L_2 = PlayerPrefs_GetInt_m4556(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void PersistentStorage::SetBoolValue(System.String,System.Boolean)
extern "C" void PersistentStorage_SetBoolValue_m3811 (PersistentStorage_t695 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
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
		PlayerPrefs_SetInt_m4555(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PersistentStorage::GetBoolValue(System.String,System.Boolean)
extern "C" bool PersistentStorage_GetBoolValue_m3812 (PersistentStorage_t695 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method)
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
		int32_t L_3 = PlayerPrefs_GetInt_m4556(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
extern "C" void ThrobForEffect__ctor_m3813 (ThrobForEffect_t696 * __this, const MethodInfo* method)
{
	{
		__this->___throbPeriod_4 = (0.3f);
		__this->___throbScale_5 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThrobForEffect::Start()
extern "C" void ThrobForEffect_Start_m3814 (ThrobForEffect_t696 * __this, const MethodInfo* method)
{
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_0 = (__this->___thingToScale_6);
		NullCheck(L_0);
		Vector3_t523  L_1 = Transform_get_localScale_m4260(L_0, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_1;
		return;
	}
}
// System.Void ThrobForEffect::SetThrobbing(System.Boolean)
extern "C" void ThrobForEffect_SetThrobbing_m3815 (ThrobForEffect_t696 * __this, bool ___throbbing, const MethodInfo* method)
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
		float L_3 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startThrobTime_3 = L_3;
		goto IL_0042;
	}

IL_002a:
	{
		__this->___throbbing_2 = 0;
		Transform_t406 * L_4 = (__this->___thingToScale_6);
		Vector3_t523  L_5 = (__this->___originalScale_7);
		NullCheck(L_4);
		Transform_set_localScale_m4261(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ThrobForEffect::Update()
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void ThrobForEffect_Update_m3816 (ThrobForEffect_t696 * __this, const MethodInfo* method)
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
		float L_1 = Time_get_time_m4357(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startThrobTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___throbPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
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
		Vector3_t523 * L_12 = &(__this->___originalScale_7);
		float L_13 = (L_12->___x_1);
		float L_14 = V_3;
		Vector3_t523 * L_15 = &(__this->___originalScale_7);
		float L_16 = (L_15->___y_2);
		float L_17 = V_3;
		Vector3_t523 * L_18 = &(__this->___originalScale_7);
		float L_19 = (L_18->___z_3);
		Vector3_t523  L_20 = {0};
		Vector3__ctor_m4250(&L_20, ((float)((float)L_11*(float)L_13)), ((float)((float)L_14*(float)L_16)), ((float)((float)L_17*(float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m4261(L_10, L_20, /*hidden argument*/NULL);
		return;
	}
}
// Utilities/<LaunchAppOrWeb>c__Iterator1A
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1.h"
#ifndef _MSC_VER
#else
#endif
// Utilities/<LaunchAppOrWeb>c__Iterator1A
#include "AssemblyU2DCSharp_Utilities_U3CLaunchAppOrWebU3Ec__Iterator1MethodDeclarations.h"



// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1A::.ctor()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1A__ctor_m3817 (U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1A::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1A_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3818 (U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object Utilities/<LaunchAppOrWeb>c__Iterator1A::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CLaunchAppOrWebU3Ec__Iterator1A_System_Collections_IEnumerator_get_Current_m3819 (U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean Utilities/<LaunchAppOrWeb>c__Iterator1A::MoveNext()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t810_il2cpp_TypeInfo_var;
extern "C" bool U3CLaunchAppOrWebU3Ec__Iterator1A_MoveNext_m3820 (U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		WaitForSeconds_t810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		int32_t L_2 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_3 = (__this->___appURL_0);
		String_t* L_4 = (__this->___webURL_1);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		Utilities_LaunchAppOrWebOnIOS_m3832(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		WaitForSeconds_t810 * L_5 = (WaitForSeconds_t810 *)il2cpp_codegen_object_new (WaitForSeconds_t810_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4355(L_5, (0.001f), /*hidden argument*/NULL);
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
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1A::Dispose()
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1A_Dispose_m3821 (U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void Utilities/<LaunchAppOrWeb>c__Iterator1A::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CLaunchAppOrWebU3Ec__Iterator1A_Reset_m3822 (U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * __this, const MethodInfo* method)
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
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Double
#include "mscorlib_System_Double.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
struct GameObject_t352;
struct RectTransform_t573;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t573_m4365(__this, method) (( RectTransform_t573 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4245_gshared)(__this, method)


// System.Void Utilities::.ctor()
extern "C" void Utilities__ctor_m3823 (Utilities_t698 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Utilities::.cctor()
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void Utilities__cctor_m3824 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t287  L_0 = {0};
		DateTime__ctor_m4557(&L_0, ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		((Utilities_t698_StaticFields*)Utilities_t698_il2cpp_TypeInfo_var->static_fields)->___epoch_2 = L_0;
		return;
	}
}
// System.Single Utilities::GetZAngle(UnityEngine.Vector3)
extern "C" float Utilities_GetZAngle_m3825 (Object_t * __this /* static, unused */, Vector3_t523  ___vector, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		(&___vector)->___z_3 = (0.0f);
		Vector3_t523  L_0 = Vector3_get_right_m4424(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t523  L_1 = ___vector;
		float L_2 = Vector3_Angle_m4425(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
extern "C" GameObject_t352 * Utilities_FindChildWithTag_m3826 (Object_t * __this /* static, unused */, GameObject_t352 * ___gameObject, String_t* ___tag, const MethodInfo* method)
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
		Transform_t406 * L_1 = GameObject_get_transform_m4255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t406 * L_3 = Transform_GetChild_m4452(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t406 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3972(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GameObject_get_tag_m4558(L_5, /*hidden argument*/NULL);
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
		GameObject_t352 * L_10 = Component_get_gameObject_m3972(L_9, /*hidden argument*/NULL);
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
		Transform_t406 * L_14 = GameObject_get_transform_m4255(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m4453(L_14, /*hidden argument*/NULL);
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
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" Color_t325  Utilities_TrafficLightColorLerp_m3827 (Object_t * __this /* static, unused */, float ___fractionFinished, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___fractionFinished;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m4407(NULL /*static, unused*/, L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___fractionFinished = L_1;
		float L_2 = ___fractionFinished;
		if ((!(((float)L_2) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		Color_t325  L_3 = Color_get_green_m4559(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_4 = Color_get_yellow_m4560(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___fractionFinished;
		Color_t325  L_6 = Color_Lerp_m4561(NULL /*static, unused*/, L_3, L_4, ((float)((float)L_5*(float)(2.0f))), /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		Color_t325  L_7 = Color_get_yellow_m4560(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t325  L_8 = Color_get_red_m4562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___fractionFinished;
		Color_t325  L_10 = Color_Lerp_m4561(NULL /*static, unused*/, L_7, L_8, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Utilities::GetShareTitleForScore(System.Int32)
extern "C" String_t* Utilities_GetShareTitleForScore_m3828 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3720(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___score;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*) &_stringLiteral1208;
	}

IL_0018:
	{
		return (String_t*) &_stringLiteral1209;
	}
}
// System.String Utilities::GetShareMessageForScore(System.Int32)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_GetShareMessageForScore_m3829 (Object_t * __this /* static, unused */, int32_t ___score, const MethodInfo* method)
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
		PlayerStats_t509 * L_0 = PlayerStats_get_instance_m3703(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PlayerStats_GetHighScore_m3720(L_0, /*hidden argument*/NULL);
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
		String_t* L_7 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral1210, L_6, (String_t*) &_stringLiteral1211, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___score;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral1212, L_10, (String_t*) &_stringLiteral1211, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Utilities::CanLaunchURL(System.String)
extern "C" {int32_t DEFAULT_CALL CanLaunchURL(char*);}
extern "C" bool Utilities_CanLaunchURL_m3830 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
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
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" bool Utilities_AppCanLaunchURL_m3831 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3830(NULL /*static, unused*/, (String_t*) &_stringLiteral1023, /*hidden argument*/NULL);
		return L_1;
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void Utilities::LaunchAppOrWebOnIOS(System.String,System.String)
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" void Utilities_LaunchAppOrWebOnIOS_m3832 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appURL;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		bool L_1 = Utilities_CanLaunchURL_m3830(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1213, /*hidden argument*/NULL);
		String_t* L_2 = ___appURL;
		Application_OpenURL_m4176(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0030;
	}

IL_0020:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1214, /*hidden argument*/NULL);
		String_t* L_3 = ___webURL;
		Application_OpenURL_m4176(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Collections.IEnumerator Utilities::LaunchAppOrWeb(System.String,System.String)
extern TypeInfo* U3CLaunchAppOrWebU3Ec__Iterator1A_t697_il2cpp_TypeInfo_var;
extern "C" Object_t * Utilities_LaunchAppOrWeb_m3833 (Object_t * __this /* static, unused */, String_t* ___appURL, String_t* ___webURL, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CLaunchAppOrWebU3Ec__Iterator1A_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(599);
		s_Il2CppMethodIntialized = true;
	}
	U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * V_0 = {0};
	{
		U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * L_0 = (U3CLaunchAppOrWebU3Ec__Iterator1A_t697 *)il2cpp_codegen_object_new (U3CLaunchAppOrWebU3Ec__Iterator1A_t697_il2cpp_TypeInfo_var);
		U3CLaunchAppOrWebU3Ec__Iterator1A__ctor_m3817(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * L_1 = V_0;
		String_t* L_2 = ___appURL;
		NullCheck(L_1);
		L_1->___appURL_0 = L_2;
		U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * L_3 = V_0;
		String_t* L_4 = ___webURL;
		NullCheck(L_3);
		L_3->___webURL_1 = L_4;
		U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * L_5 = V_0;
		String_t* L_6 = ___appURL;
		NullCheck(L_5);
		L_5->___U3CU24U3EappURL_4 = L_6;
		U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * L_7 = V_0;
		String_t* L_8 = ___webURL;
		NullCheck(L_7);
		L_7->___U3CU24U3EwebURL_5 = L_8;
		U3CLaunchAppOrWebU3Ec__Iterator1A_t697 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Utilities::SpaceHorizontally(System.Single,UnityEngine.GameObject[],System.Single,System.Single)
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var;
extern "C" void Utilities_SpaceHorizontally_m3834 (Object_t * __this /* static, unused */, float ___containingWidth, GameObjectU5BU5D_t503* ___objects, float ___yOffset, float ___yWiggle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484116);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t352 * V_2 = {0};
	GameObjectU5BU5D_t503* V_3 = {0};
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t352 * V_10 = {0};
	GameObjectU5BU5D_t503* V_11 = {0};
	int32_t V_12 = 0;
	RectTransform_t573 * V_13 = {0};
	float V_14 = 0.0f;
	Vector2_t110  V_15 = {0};
	Rect_t719  V_16 = {0};
	Rect_t719  V_17 = {0};
	{
		float L_0 = ___containingWidth;
		V_0 = L_0;
		V_1 = (0.0f);
		GameObjectU5BU5D_t503* L_1 = ___objects;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		GameObjectU5BU5D_t503* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_2, L_4));
		float L_5 = V_1;
		GameObject_t352 * L_6 = V_2;
		NullCheck(L_6);
		RectTransform_t573 * L_7 = GameObject_GetComponent_TisRectTransform_t573_m4365(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var);
		NullCheck(L_7);
		Rect_t719  L_8 = RectTransform_get_rect_m4382(L_7, /*hidden argument*/NULL);
		V_16 = L_8;
		float L_9 = Rect_get_width_m4253((&V_16), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5+(float)L_9));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_4;
		GameObjectU5BU5D_t503* L_12 = V_3;
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
		GameObjectU5BU5D_t503* L_16 = ___objects;
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
		GameObjectU5BU5D_t503* L_20 = ___objects;
		V_11 = L_20;
		V_12 = 0;
		goto IL_00d7;
	}

IL_0079:
	{
		GameObjectU5BU5D_t503* L_21 = V_11;
		int32_t L_22 = V_12;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_10 = (*(GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_21, L_23));
		GameObject_t352 * L_24 = V_10;
		NullCheck(L_24);
		RectTransform_t573 * L_25 = GameObject_GetComponent_TisRectTransform_t573_m4365(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var);
		V_13 = L_25;
		RectTransform_t573 * L_26 = V_13;
		NullCheck(L_26);
		Rect_t719  L_27 = RectTransform_get_rect_m4382(L_26, /*hidden argument*/NULL);
		V_17 = L_27;
		float L_28 = Rect_get_width_m4253((&V_17), /*hidden argument*/NULL);
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
		Vector2__ctor_m4446((&V_15), L_33, ((float)((float)L_34+(float)L_35)), /*hidden argument*/NULL);
		float L_36 = V_9;
		V_9 = ((-L_36));
		RectTransform_t573 * L_37 = V_13;
		Vector2_t110  L_38 = V_15;
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_m4563(L_37, L_38, /*hidden argument*/NULL);
		float L_39 = V_7;
		float L_40 = V_14;
		V_7 = ((float)((float)L_39+(float)L_40));
		int32_t L_41 = V_12;
		V_12 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_42 = V_12;
		GameObjectU5BU5D_t503* L_43 = V_11;
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
extern TypeInfo* CharU5BU5D_t722_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t793_il2cpp_TypeInfo_var;
extern "C" float Utilities_GetIOSVersion_m3835 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		CultureInfo_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t75* V_1 = {0};
	String_t* V_2 = {0};
	{
		int32_t L_0 = Application_get_platform_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		String_t* L_1 = SystemInfo_get_operatingSystem_m4564(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1215, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		CharU5BU5D_t722* L_5 = ((CharU5BU5D_t722*)SZArrayNew(CharU5BU5D_t722_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)((int32_t)32);
		NullCheck(L_4);
		StringU5BU5D_t75* L_6 = String_Split_m3928(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t75* L_7 = V_1;
		StringU5BU5D_t75* L_8 = V_1;
		NullCheck(L_8);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1)));
		int32_t L_9 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)1));
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9));
		String_t* L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t793_il2cpp_TypeInfo_var);
		CultureInfo_t793 * L_11 = CultureInfo_get_InvariantCulture_m4278(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = Single_Parse_m4565(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Utilities::SecondsSinceEpoch()
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t698_il2cpp_TypeInfo_var;
extern "C" float Utilities_SecondsSinceEpoch_m3836 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Utilities_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t334  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_0 = DateTime_get_UtcNow_m4149(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t698_il2cpp_TypeInfo_var);
		DateTime_t287  L_1 = ((Utilities_t698_StaticFields*)Utilities_t698_il2cpp_TypeInfo_var->static_fields)->___epoch_2;
		TimeSpan_t334  L_2 = DateTime_op_Subtraction_m4151(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = TimeSpan_get_TotalSeconds_m4153((&V_0), /*hidden argument*/NULL);
		return (((float)L_3));
	}
}
// System.Single[] Utilities::GetBlendingCoefficients(System.Single,System.Int32)
extern TypeInfo* SingleU5BU5D_t541_il2cpp_TypeInfo_var;
extern "C" SingleU5BU5D_t541* Utilities_GetBlendingCoefficients_m3837 (Object_t * __this /* static, unused */, float ___t, int32_t ___numPoints, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(600);
		s_Il2CppMethodIntialized = true;
	}
	SingleU5BU5D_t541* V_0 = {0};
	SingleU5BU5D_t541* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___numPoints;
		V_0 = ((SingleU5BU5D_t541*)SZArrayNew(SingleU5BU5D_t541_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___numPoints;
		V_1 = ((SingleU5BU5D_t541*)SZArrayNew(SingleU5BU5D_t541_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_0023;
	}

IL_0015:
	{
		SingleU5BU5D_t541* L_2 = V_1;
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
		SingleU5BU5D_t541* L_13 = V_1;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		SingleU5BU5D_t541* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		SingleU5BU5D_t541* L_19 = V_1;
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
		SingleU5BU5D_t541* L_25 = V_0;
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
		SingleU5BU5D_t541* L_31 = V_0;
		return L_31;
	}
}
// System.Int32 Utilities::ParseIntWithDefault(System.String,System.Int32)
extern "C" int32_t Utilities_ParseIntWithDefault_m3838 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___defaultValue, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text;
		bool L_1 = Int32_TryParse_m398(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		int32_t L_3 = ___defaultValue;
		return L_3;
	}
}
// System.Void Utilities::MakeFanWithAngleRange(UnityEngine.Mesh&,System.Single,System.Single,System.Single,System.Int32)
extern TypeInfo* Vector3U5BU5D_t690_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t827_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void Utilities_MakeFanWithAngleRange_m3839 (Object_t * __this /* static, unused */, Mesh_t512 ** ___mesh, float ___startAngle, float ___endAngle, float ___radius, int32_t ___numTriangles, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(598);
		Vector2U5BU5D_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3U5BU5D_t690* V_2 = {0};
	Vector2U5BU5D_t827* V_3 = {0};
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Int32U5BU5D_t484* V_6 = {0};
	int32_t V_7 = 0;
	{
		float L_0 = ___endAngle;
		float L_1 = ___startAngle;
		V_0 = ((float)((float)L_0-(float)L_1));
		float L_2 = V_0;
		int32_t L_3 = ___numTriangles;
		V_1 = ((float)((float)L_2/(float)(((float)L_3))));
		int32_t L_4 = ___numTriangles;
		V_2 = ((Vector3U5BU5D_t690*)SZArrayNew(Vector3U5BU5D_t690_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4+(int32_t)2))));
		int32_t L_5 = ___numTriangles;
		V_3 = ((Vector2U5BU5D_t827*)SZArrayNew(Vector2U5BU5D_t827_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_5+(int32_t)2))));
		Vector3U5BU5D_t690* L_6 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_6, 0))->___x_1 = (0.0f);
		Vector3U5BU5D_t690* L_7 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_7, 0))->___y_2 = (0.0f);
		Vector3U5BU5D_t690* L_8 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_8, 0))->___z_3 = (0.0f);
		Vector2U5BU5D_t827* L_9 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_9, 0))->___x_1 = (0.0f);
		Vector2U5BU5D_t827* L_10 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_10, 0))->___y_2 = (0.0f);
		V_5 = 0;
		goto IL_0104;
	}

IL_007b:
	{
		float L_11 = ___startAngle;
		int32_t L_12 = V_5;
		float L_13 = V_1;
		V_4 = ((float)((float)L_11+(float)((float)((float)(((float)L_12))*(float)L_13))));
		Vector3U5BU5D_t690* L_14 = V_2;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15+(int32_t)1)));
		float L_16 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_17 = sinf(((float)((float)(0.0174532924f)*(float)L_16)));
		float L_18 = ___radius;
		((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15+(int32_t)1))))->___y_2 = ((float)((float)L_17*(float)L_18));
		Vector3U5BU5D_t690* L_19 = V_2;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)L_20+(int32_t)1)));
		float L_21 = V_4;
		float L_22 = cosf(((float)((float)(0.0174532924f)*(float)L_21)));
		float L_23 = ___radius;
		((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_19, ((int32_t)((int32_t)L_20+(int32_t)1))))->___x_1 = ((float)((float)L_22*(float)L_23));
		Vector3U5BU5D_t690* L_24 = V_2;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)L_25+(int32_t)1)));
		((Vector3_t523 *)(Vector3_t523 *)SZArrayLdElema(L_24, ((int32_t)((int32_t)L_25+(int32_t)1))))->___z_3 = (0.0f);
		Vector2U5BU5D_t827* L_26 = V_3;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)1)));
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)1))))->___x_1 = (1.0f);
		Vector2U5BU5D_t827* L_28 = V_3;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)1)));
		int32_t L_30 = V_5;
		int32_t L_31 = ___numTriangles;
		((Vector2_t110 *)(Vector2_t110 *)SZArrayLdElema(L_28, ((int32_t)((int32_t)L_29+(int32_t)1))))->___y_2 = ((float)((float)(((float)L_30))/(float)(((float)L_31))));
		int32_t L_32 = V_5;
		V_5 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0104:
	{
		int32_t L_33 = V_5;
		int32_t L_34 = ___numTriangles;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)L_34+(int32_t)1)))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_35 = ___numTriangles;
		V_6 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_35*(int32_t)3))));
		V_7 = 0;
		goto IL_014a;
	}

IL_0122:
	{
		Int32U5BU5D_t484* L_36 = V_6;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)((int32_t)L_37*(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_36, ((int32_t)((int32_t)L_37*(int32_t)3)))) = (int32_t)0;
		Int32U5BU5D_t484* L_38 = V_6;
		int32_t L_39 = V_7;
		int32_t L_40 = V_7;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)3))+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_38, ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)3))+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)L_40+(int32_t)2));
		Int32U5BU5D_t484* L_41 = V_6;
		int32_t L_42 = V_7;
		int32_t L_43 = V_7;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)3))+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_41, ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)3))+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)L_43+(int32_t)1));
		int32_t L_44 = V_7;
		V_7 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_45 = V_7;
		int32_t L_46 = ___numTriangles;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0122;
		}
	}
	{
		Mesh_t512 ** L_47 = ___mesh;
		Vector3U5BU5D_t690* L_48 = V_2;
		NullCheck((*((Mesh_t512 **)L_47)));
		Mesh_set_vertices_m4566((*((Mesh_t512 **)L_47)), L_48, /*hidden argument*/NULL);
		Mesh_t512 ** L_49 = ___mesh;
		Int32U5BU5D_t484* L_50 = V_6;
		NullCheck((*((Mesh_t512 **)L_49)));
		Mesh_set_triangles_m4567((*((Mesh_t512 **)L_49)), L_50, /*hidden argument*/NULL);
		Mesh_t512 ** L_51 = ___mesh;
		Vector2U5BU5D_t827* L_52 = V_3;
		NullCheck((*((Mesh_t512 **)L_51)));
		Mesh_set_uv_m4568((*((Mesh_t512 **)L_51)), L_52, /*hidden argument*/NULL);
		Mesh_t512 ** L_53 = ___mesh;
		NullCheck((*((Mesh_t512 **)L_53)));
		Mesh_RecalculateNormals_m4569((*((Mesh_t512 **)L_53)), /*hidden argument*/NULL);
		return;
	}
}
// System.String Utilities::AddTextColor(System.String,UnityEngine.Color)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_AddTextColor_m3840 (Object_t * __this /* static, unused */, String_t* ___input, Color_t325  ___color, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1216);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1216;
		StringU5BU5D_t75* L_1 = L_0;
		String_t* L_2 = Color_ToHexStringRGB_m4570((&___color), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t75* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1217);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral1217;
		StringU5BU5D_t75* L_4 = L_3;
		String_t* L_5 = ___input;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_5;
		StringU5BU5D_t75* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1218);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 4)) = (String_t*)(String_t*) &_stringLiteral1218;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m450(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String Utilities::AddFontSize(System.String,System.Int32)
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Utilities_AddFontSize_m3841 (Object_t * __this /* static, unused */, String_t* ___input, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t707* L_0 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1219);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral1219;
		ObjectU5BU5D_t707* L_1 = L_0;
		int32_t L_2 = ___size;
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t707* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1217);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral1217;
		ObjectU5BU5D_t707* L_6 = L_5;
		String_t* L_7 = ___input;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t707* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral1220);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)(String_t*) &_stringLiteral1220;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m4090(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Utilities::LerpTransform(System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Transform)
extern TypeInfo* Mathf_t752_il2cpp_TypeInfo_var;
extern "C" void Utilities_LerpTransform_m3842 (Object_t * __this /* static, unused */, float ___timeFraction, Vector2_t110  ___fromPosition, float ___fromAngle, float ___fromScale, Vector2_t110  ___toPosition, float ___toAngle, float ___toScale, Transform_t406 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = ___timeFraction;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t110  L_1 = ___fromPosition;
		V_0 = L_1;
		float L_2 = ___fromAngle;
		V_1 = L_2;
		float L_3 = ___fromScale;
		V_2 = L_3;
		goto IL_004d;
	}

IL_0016:
	{
		float L_4 = ___timeFraction;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t110  L_5 = ___toPosition;
		V_0 = L_5;
		float L_6 = ___toAngle;
		V_1 = L_6;
		float L_7 = ___toScale;
		V_2 = L_7;
		goto IL_004d;
	}

IL_002f:
	{
		Vector2_t110  L_8 = ___fromPosition;
		Vector2_t110  L_9 = ___toPosition;
		float L_10 = ___timeFraction;
		Vector2_t110  L_11 = Vector2_Lerp_m4571(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		float L_12 = ___fromAngle;
		float L_13 = ___toAngle;
		float L_14 = ___timeFraction;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t752_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Lerp_m4426(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		float L_16 = ___fromScale;
		float L_17 = ___toScale;
		float L_18 = ___timeFraction;
		float L_19 = Mathf_Lerp_m4426(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
	}

IL_004d:
	{
		Transform_t406 * L_20 = ___t;
		Vector2_t110  L_21 = V_0;
		Vector3_t523  L_22 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m4402(L_20, L_22, /*hidden argument*/NULL);
		Transform_t406 * L_23 = ___t;
		float L_24 = V_1;
		Quaternion_t813  L_25 = Quaternion_Euler_m4403(NULL /*static, unused*/, (0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localRotation_m4406(L_23, L_25, /*hidden argument*/NULL);
		Transform_t406 * L_26 = ___t;
		float L_27 = V_2;
		float L_28 = V_2;
		Vector2_t110  L_29 = {0};
		Vector2__ctor_m4446(&L_29, L_27, L_28, /*hidden argument*/NULL);
		Vector3_t523  L_30 = Vector2_op_Implicit_m4415(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_m4261(L_26, L_30, /*hidden argument*/NULL);
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



// System.Void WorldObjectFollower::.ctor()
extern "C" void WorldObjectFollower__ctor_m3843 (WorldObjectFollower_t699 * __this, const MethodInfo* method)
{
	{
		Vector3_t523  L_0 = {0};
		Vector3__ctor_m4250(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_11 = L_0;
		WorldRelativeGUIElement__ctor_m3848(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldObjectFollower::Start()
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var;
extern "C" void WorldObjectFollower_Start_m3844 (WorldObjectFollower_t699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484116);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4477(NULL /*static, unused*/, (String_t*) &_stringLiteral1094, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		WorldRelativeGUIElement_SetParentCanvasGameObject_m3849(__this, L_1, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_t573 * L_3 = GameObject_GetComponent_TisRectTransform_t573_m4365(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t573_m4365_MethodInfo_var);
		__this->___myRectTransform_8 = L_3;
		return;
	}
}
// System.Void WorldObjectFollower::Update()
extern "C" void WorldObjectFollower_Update_m3845 (WorldObjectFollower_t699 * __this, const MethodInfo* method)
{
	{
		RectTransform_t573 * L_0 = (__this->___myRectTransform_8);
		bool L_1 = Object_op_Implicit_m4315(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		WorldObjectFollower_ResetPosition_m3847(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WorldObjectFollower::SetObjectToFollow(UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C" void WorldObjectFollower_SetObjectToFollow_m3846 (WorldObjectFollower_t699 * __this, GameObject_t352 * ___go, Vector3_t523  ___offset, bool ___followeeMoves, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___go;
		__this->___objectToFollow_7 = L_0;
		Vector3_t523  L_1 = ___offset;
		__this->___offset_11 = L_1;
		bool L_2 = ___followeeMoves;
		__this->___followeeMoves_9 = L_2;
		__this->___positionDirty_10 = 1;
		return;
	}
}
// System.Void WorldObjectFollower::ResetPosition()
extern "C" void WorldObjectFollower_ResetPosition_m3847 (WorldObjectFollower_t699 * __this, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	{
		GameObject_t352 * L_0 = (__this->___objectToFollow_7);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4255(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t523  L_2 = Transform_get_position_m4257(L_1, /*hidden argument*/NULL);
		Vector3_t523  L_3 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3852(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RectTransform_t573 * L_4 = (__this->___myRectTransform_8);
		Vector3_t523  L_5 = V_0;
		Vector3_t523  L_6 = (__this->___offset_11);
		Vector3_t523  L_7 = Vector3_op_Addition_m4401(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m4402(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
#ifndef _MSC_VER
#else
#endif



// System.Void WorldRelativeGUIElement::.ctor()
extern "C" void WorldRelativeGUIElement__ctor_m3848 (WorldRelativeGUIElement_t597 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldRelativeGUIElement::SetParentCanvasGameObject(UnityEngine.GameObject)
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_SetParentCanvasGameObject_m3849 (WorldRelativeGUIElement_t597 * __this, GameObject_t352 * ___parentCanvasGameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484273);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t719  V_0 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3972(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4255(L_0, /*hidden argument*/NULL);
		GameObject_t352 * L_2 = ___parentCanvasGameObject;
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4255(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_SetParent_m4368(L_1, L_3, 0, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = ___parentCanvasGameObject;
		NullCheck(L_4);
		Canvas_t691 * L_5 = GameObject_GetComponent_TisCanvas_t691_m4548(L_4, /*hidden argument*/GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var);
		__this->___parentCanvas_3 = L_5;
		Canvas_t691 * L_6 = (__this->___parentCanvas_3);
		NullCheck(L_6);
		Camera_t532 * L_7 = Canvas_get_worldCamera_m4549(L_6, /*hidden argument*/NULL);
		__this->___parentCamera_4 = L_7;
		Canvas_t691 * L_8 = (__this->___parentCanvas_3);
		NullCheck(L_8);
		Rect_t719  L_9 = Canvas_get_pixelRect_m4572(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = Rect_get_width_m4253((&V_0), /*hidden argument*/NULL);
		Canvas_t691 * L_11 = (__this->___parentCanvas_3);
		NullCheck(L_11);
		float L_12 = Canvas_get_scaleFactor_m4573(L_11, /*hidden argument*/NULL);
		__this->___parentCanvasWidth_5 = ((float)((float)L_10/(float)L_12));
		float L_13 = Rect_get_height_m4254((&V_0), /*hidden argument*/NULL);
		Canvas_t691 * L_14 = (__this->___parentCanvas_3);
		NullCheck(L_14);
		float L_15 = Canvas_get_scaleFactor_m4573(L_14, /*hidden argument*/NULL);
		__this->___parentCanvasHeight_6 = ((float)((float)L_13/(float)L_15));
		return;
	}
}
// System.Void WorldRelativeGUIElement::GetWorldCamera()
extern const MethodInfo* GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var;
extern "C" void WorldRelativeGUIElement_GetWorldCamera_m3850 (WorldRelativeGUIElement_t597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484273);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	Canvas_t691 * V_1 = {0};
	{
		GameObject_t352 * L_0 = GameObject_FindWithTag_m4477(NULL /*static, unused*/, (String_t*) &_stringLiteral1094, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		NullCheck(L_1);
		Canvas_t691 * L_2 = GameObject_GetComponent_TisCanvas_t691_m4548(L_1, /*hidden argument*/GameObject_GetComponent_TisCanvas_t691_m4548_MethodInfo_var);
		V_1 = L_2;
		Canvas_t691 * L_3 = V_1;
		NullCheck(L_3);
		Camera_t532 * L_4 = Canvas_get_worldCamera_m4549(L_3, /*hidden argument*/NULL);
		__this->___worldCamera_2 = L_4;
		return;
	}
}
// System.Single WorldRelativeGUIElement::WorldSizeToParentCanvasSize(System.Single)
extern "C" float WorldRelativeGUIElement_WorldSizeToParentCanvasSize_m3851 (WorldRelativeGUIElement_t597 * __this, float ___worldSize, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	Vector3_t523  V_1 = {0};
	Vector3_t523  V_2 = {0};
	Vector3_t523  V_3 = {0};
	{
		Vector3__ctor_m4250((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_0 = ___worldSize;
		Vector3__ctor_m4250((&V_1), (0.0f), L_0, (0.0f), /*hidden argument*/NULL);
		Vector3_t523  L_1 = V_0;
		Vector3_t523  L_2 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3852(__this, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector3_t523  L_3 = V_1;
		Vector3_t523  L_4 = WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3852(__this, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		Vector3_t523  L_5 = V_2;
		Vector3_t523  L_6 = V_3;
		float L_7 = Vector3_Distance_m4574(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::WorldPositionToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t523  WorldRelativeGUIElement_WorldPositionToParentCanvasPosition_m3852 (WorldRelativeGUIElement_t597 * __this, Vector3_t523  ___worldPosition, const MethodInfo* method)
{
	{
		Camera_t532 * L_0 = (__this->___worldCamera_2);
		bool L_1 = Object_op_Equality_m3997(NULL /*static, unused*/, L_0, (Object_t728 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		WorldRelativeGUIElement_GetWorldCamera_m3850(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Camera_t532 * L_2 = (__this->___worldCamera_2);
		Vector3_t523  L_3 = ___worldPosition;
		Vector3_t523  L_4 = WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3853(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertToParentCanvasPosition(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t523  WorldRelativeGUIElement_ConvertToParentCanvasPosition_m3853 (WorldRelativeGUIElement_t597 * __this, Camera_t532 * ___otherCamera, Vector3_t523  ___otherCameraPosition, const MethodInfo* method)
{
	Vector3_t523  V_0 = {0};
	Vector3_t523  V_1 = {0};
	{
		Camera_t532 * L_0 = ___otherCamera;
		Vector3_t523  L_1 = ___otherCameraPosition;
		NullCheck(L_0);
		Vector3_t523  L_2 = Camera_WorldToScreenPoint_m4251(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Camera_t532 * L_3 = (__this->___parentCamera_4);
		Vector3_t523  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t523  L_5 = Camera_ScreenToViewportPoint_m4575(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t523  L_6 = V_1;
		Vector3_t523  L_7 = WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3854(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 WorldRelativeGUIElement::ConvertViewportPosToParentCanvasPosition(UnityEngine.Vector3)
extern "C" Vector3_t523  WorldRelativeGUIElement_ConvertViewportPosToParentCanvasPosition_m3854 (WorldRelativeGUIElement_t597 * __this, Vector3_t523  ___viewportPos, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ((&___viewportPos)->___x_1);
		float L_1 = (__this->___parentCanvasWidth_5);
		V_0 = ((float)((float)((float)((float)L_0-(float)(0.5f)))*(float)L_1));
		float L_2 = ((&___viewportPos)->___y_2);
		float L_3 = (__this->___parentCanvasHeight_6);
		V_1 = ((float)((float)((float)((float)L_2-(float)(0.5f)))*(float)L_3));
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3_t523  L_6 = {0};
		Vector3__ctor_m4250(&L_6, L_4, L_5, (0.0f), /*hidden argument*/NULL);
		return L_6;
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
extern "C" void EventHandlerFunction__ctor_m3855 (EventHandlerFunction_t700 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m3856 (EventHandlerFunction_t700 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandlerFunction_Invoke_m3856((EventHandlerFunction_t700 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t700(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m3857 (EventHandlerFunction_t700 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m3858 (EventHandlerFunction_t700 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void DataEventHandlerFunction__ctor_m3859 (DataEventHandlerFunction_t701 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m3860 (DataEventHandlerFunction_t701 * __this, CEvent_t133 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DataEventHandlerFunction_Invoke_m3860((DataEventHandlerFunction_t701 *)__this->___prev_9,___e, method);
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
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t701(Il2CppObject* delegate, CEvent_t133 * ___e)
{
	// Marshaling of parameter '___e' to native representation
	CEvent_t133 * ____e_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnionAssets.FLE.CEvent'."));
}
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m3861 (DataEventHandlerFunction_t701 * __this, CEvent_t133 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m3862 (DataEventHandlerFunction_t701 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void InitDelegate__ctor_m3863 (InitDelegate_t419 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.InitDelegate::Invoke()
extern "C" void InitDelegate_Invoke_m3864 (InitDelegate_t419 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		InitDelegate_Invoke_m3864((InitDelegate_t419 *)__this->___prev_9, method);
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
extern "C" Object_t * InitDelegate_BeginInvoke_m3865 (InitDelegate_t419 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InitDelegate_EndInvoke_m3866 (InitDelegate_t419 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void FacebookDelegate__ctor_m3867 (FacebookDelegate_t433 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C" void FacebookDelegate_Invoke_m3868 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FacebookDelegate_Invoke_m3868((FacebookDelegate_t433 *)__this->___prev_9,___result, method);
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
extern "C" Object_t * FacebookDelegate_BeginInvoke_m3869 (FacebookDelegate_t433 * __this, FBResult_t281 * ___result, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FacebookDelegate_EndInvoke_m3870 (FacebookDelegate_t433 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void HideUnityDelegate__ctor_m3871 (HideUnityDelegate_t420 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C" void HideUnityDelegate_Invoke_m3872 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HideUnityDelegate_Invoke_m3872((HideUnityDelegate_t420 *)__this->___prev_9,___isUnityShown, method);
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
extern "C" Object_t * HideUnityDelegate_BeginInvoke_m3873 (HideUnityDelegate_t420 * __this, bool ___isUnityShown, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
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
extern "C" void HideUnityDelegate_EndInvoke_m3874 (HideUnityDelegate_t420 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
